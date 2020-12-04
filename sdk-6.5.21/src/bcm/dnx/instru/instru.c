/** \file instru.c
 * 
 *
 * Visibility procedures for DNX in instrumentation module.
 *
 * This file contains functions for visibility configuration.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_BCMDNX_INSTRU
/*
 * Include
 * {
 */
#include <shared/shrextend/shrextend_debug.h>
#include <soc/dnx/dnx_visibility.h>
#include <soc/dnx/dbal/dbal.h>
#include <soc/dnx/dnx_err_recovery_manager.h>
#include <soc/dnx/pll/pll.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_instru.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_headers.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_nif.h>
#include <shared/utilex/utilex_u64.h>
#include <shared/utilex/utilex_tod_1588.h>

#include <bcm_int/dnx/instru/instru_ipt.h>
#include <bcm_int/dnx/instru/instru_sflow.h>
#include <bcm_int/dnx/instru/instru.h>
#include <bcm_int/dnx/algo/algo_gpm.h>
#include <bcm_int/dnx/qos/qos.h>
#include <bcm_int/dnx/cmn/dnxcmn.h>
#include <bcm/types.h>
#include <bcm/instru.h>
#include <bcm_int/dnx/lif/lif_lib.h>

#include <soc/dnx/swstate/auto_generated/types/instru_counters_types.h>
#include <soc/dnx/swstate/auto_generated/access/instru_counters_access.h>

#include <bcm_int/dnx/algo/port/algo_port_mgmt.h>
#include <bcm_int/dnx/algo/port/algo_port_utils.h>
#include <bcm_int/dnx/port/imb/imb.h>

#include "instru_internal.h"

/*
 * }
 */

/*
 * Function Declaration.
 * {
 */

/*
 * }
 */

/*
 * Defines.
 * {
 */
#define INSTRU_IFA_OAM_LIF_SET 1

 /*
  * }
  */

 /*
  * Internal functions.
  * {
  */

 /*
  * }
  */

/**
 * \brief - verify procedure for dnx_instru_trace_probability_get()
 */
static shr_error_e
dnx_instru_trace_probability_get_verify(
    int unit,
    uint32 flags,
    bcm_gport_t gport,
    int *percentage)
{
    SHR_FUNC_INIT_VARS(unit);

    if (flags != 0)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Invalid flags provided %d", flags);
    }

    /** null check */
    SHR_NULL_CHECK(percentage, _SHR_E_PARAM, "percentage");

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief - verify procedure for dnx_instru_trace_probability_set()
 */
static shr_error_e
dnx_instru_trace_probability_set_verify(
    int unit,
    uint32 flags,
    bcm_gport_t gport,
    int percentage)
{
    SHR_FUNC_INIT_VARS(unit);

    if (flags != 0)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Invalid flags provided %d", flags);
    }

    if (percentage < 0 || percentage > 1000)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Invalid percentage value was provided %d", percentage);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief - Get port trace probability, the returned probability is given in units of one-tenth percentage.
 */
static shr_error_e
dnx_instru_trace_probability_get(
    int unit,
    uint32 flags,
    bcm_gport_t gport,
    int *percentage)
{
    uint32 entry_handle_id, field32;
    dnx_algo_gpm_gport_phy_info_t gport_info;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** verify */
    SHR_INVOKE_VERIFY_DNX(dnx_instru_trace_probability_get_verify(unit, flags, gport, percentage));

    /** Get Port + Core */
    SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_phy_info_get(unit, gport, DNX_ALGO_GPM_GPORT_TO_PHY_OP_PP_PORT_IS_MANDATORY,
                                                    &gport_info));

    /** create handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INGRESS_PP_PORT, &entry_handle_id));

    /** set keys - pp port and core */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_PP_PORT, gport_info.internal_port_pp_info.pp_port[0]);

    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_CORE_ID, gport_info.internal_port_pp_info.core_id[0]);

    /** request trace probability */
    dbal_value_field32_request(unit, entry_handle_id, DBAL_FIELD_TRACE_PROBABILITY, INST_SINGLE, &field32);

    /** commit */
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, entry_handle_id, DBAL_COMMIT));

    /**
     * calculate percentage in units of one-tenth from HW field.
     * The HW formula should be as following:
     *
     *         hw_field
     * -------------------------- x 1000
     *        MAX_FIELD_VAL
     */
    {
        int max_field_val;

        SHR_IF_ERR_EXIT(dbal_tables_field_max_value_get(unit, DBAL_TABLE_INGRESS_PP_PORT, DBAL_FIELD_TRACE_PROBABILITY,
                                                        FALSE, 0, 0, &max_field_val));

        *percentage = ((field32) * 1000) / max_field_val;
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief - Set port trace probability, the provided probability is given in units of one-tenth percentage.
 */
static shr_error_e
dnx_instru_trace_probability_set(
    int unit,
    uint32 flags,
    bcm_gport_t gport,
    int percentage)
{
    uint32 probability;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** verify */
    SHR_INVOKE_VERIFY_DNX(dnx_instru_trace_probability_set_verify(unit, flags, gport, percentage));

    /**
     * calculate HW probability from percentage given in units of one tenth.
     * The HW formula should be as following:
     *
     *     percentage
     * -------------------- x MAX_FIELD_VAL
     *        1000
     */
    {
        int max_field_val;

        SHR_IF_ERR_EXIT(dbal_tables_field_max_value_get(unit, DBAL_TABLE_INGRESS_PP_PORT, DBAL_FIELD_TRACE_PROBABILITY,
                                                        FALSE, 0, 0, &max_field_val));

        probability = (percentage * max_field_val) / 1000;
    }

    /** Set probability to HW */
    {
        uint32 entry_handle_id;
        dnx_algo_gpm_gport_phy_info_t gport_info;
        int pp_port_index;

        /** Get Port + Core */
        SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_phy_info_get
                        (unit, gport, DNX_ALGO_GPM_GPORT_TO_PHY_OP_PP_PORT_IS_MANDATORY, &gport_info));

        /** create handle */
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INGRESS_PP_PORT, &entry_handle_id));

        /** iterate over pp port and commit to HW */
        for (pp_port_index = 0; pp_port_index < gport_info.internal_port_pp_info.nof_pp_ports; pp_port_index++)
        {
            /** set keys - pp port and core */
            dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_PP_PORT,
                                       gport_info.internal_port_pp_info.pp_port[pp_port_index]);
            dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_CORE_ID,
                                       gport_info.internal_port_pp_info.core_id[pp_port_index]);

            /** set value - probability */
            dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_TRACE_PROBABILITY, INST_SINGLE, probability);

            /** commit */
            SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));
        }
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for configuring various general instrumentation controls
 *
 * Use cases:
 *
 * ** Use case: "IPT SWITCH ID"
 * Set Switch ID for IPT (INT/Tail-Edit) applications
 *  Parameters:
 *  - flags - 0
 *  - type - bcmInstruControlIptSwitchId
 *  - arg - switch id
 *
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags - description per use case.
 * \param [in] type - description per use case.
 * \param [in] arg  - description per use case.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
bcm_dnx_instru_control_set(
    int unit,
    uint32 flags,
    bcm_instru_control_t type,
    int arg)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    switch (type)
    {
        case bcmInstruControlIptSwitchId:
            SHR_IF_ERR_EXIT(dnx_instru_ipt_node_id_set(unit, arg));
            break;
        case bcmInstruControlVisMode:
        {
            /*
             * For VisMode arg is a mode and flags are not in use currently
             */
            bcm_instru_vis_mode_control_t mode = (bcm_instru_vis_mode_control_t) arg;
            SHR_IF_ERR_EXIT(dnx_visibility_mode_set(unit, mode));
            break;
        }
        case bcmInstruControlVisSampling:
            /*
             * For VisSampling flags is direction, arg is period
             */
            SHR_IF_ERR_EXIT(dnx_visibility_sampling_set(unit, flags, (uint32) arg));
            break;
        case bcmInstruControlSFlowSamplingRate:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_sampling_rate_set(unit, arg));
            break;
        case bcmInstruControlSFlowAgentIPAddress:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_agent_id_address_set(unit, (bcm_ip_t) arg));
            break;
        case bcmInstruControlSFlowUpTime:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_uptime_set(unit, arg));
            break;
        case bcmInstruControlSFlowMyRouterASNumber:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_myrouter_as_number_set(unit, arg));
            break;
        default:
            SHR_ERR_EXIT(_SHR_E_PARAM, "bcm_dnx_instru_control_set - invalid type=%d\r\n", type);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for getting configuration of general instrumentation controls
 * For detailed description refer to \ref bcm_dnx_instru_control_set()
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags - description per use case.
 * \param [in] type - description per use case.
 * \param [out] arg  - description per use case.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
bcm_dnx_instru_control_get(
    int unit,
    uint32 flags,
    bcm_instru_control_t type,
    int *arg)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    switch (type)
    {
        case bcmInstruControlIptSwitchId:
            SHR_IF_ERR_EXIT(dnx_instru_ipt_node_id_get(unit, arg));
            break;
        case bcmInstruControlVisMode:
        {
            /*
             * For VisMode arg is a pointer to the mode and flags are not in use currently
             */
            bcm_instru_vis_mode_control_t mode;
            SHR_IF_ERR_EXIT(dnx_visibility_mode_get(unit, &mode, TRUE));
            *arg = (int) mode;
            break;
        }
        case bcmInstruControlVisSampling:
            SHR_IF_ERR_EXIT(dnx_visibility_sampling_get(unit, flags, (uint32 *) arg));
            break;
        case bcmInstruControlSFlowSamplingRate:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_sampling_rate_get(unit, arg));
            break;
        case bcmInstruControlSFlowAgentIPAddress:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_agent_id_address_get(unit, (bcm_ip_t *) arg));
            break;
        case bcmInstruControlSFlowUpTime:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_uptime_get(unit, arg));
            break;
        case bcmInstruControlSFlowMyRouterASNumber:
            SHR_IF_ERR_EXIT(dnx_instru_sflow_myrouter_as_number_get(unit, arg));
            break;
        default:
            SHR_ERR_EXIT(_SHR_E_PARAM, "bcm_dnx_instru_control_get - invalid type=%d\r\n", type);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for configuring various per gport instrumentation controls
 *
 * Use cases:
 *
 * ** Use case: "Trace Probability"
 * Set trace probability
 *  Parameters:
 *  - flags - 0
 *  - gport - port to set probability for.
 *  - type - bcmInstruGportControlTraceProbability
 *  - arg - probability in units of one-tenth (for example arg=300 means 30% probability)
 *
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] gport - description per use case.
 * \param [in] flags - description per use case.
 * \param [in] type - description per use case.
 * \param [in] arg  - description per use case.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
bcm_dnx_instru_gport_control_set(
    int unit,
    bcm_gport_t gport,
    uint32 flags,
    bcm_instru_gport_control_t type,
    int arg)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    switch (type)
    {
        case bcmInstruGportControlTraceProbability:
            SHR_IF_ERR_EXIT(dnx_instru_trace_probability_set(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlVisEnable:
            SHR_IF_ERR_EXIT(dnx_visibility_port_enable_set(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlVisForce:
            SHR_IF_ERR_EXIT(dnx_visibility_port_force_set(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlIptTrapToRcyEnable:
            SHR_IF_ERR_EXIT(dnx_instru_ipt_trap_to_rcy_set(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlIfaInitiatorRcyEnable:
            SHR_IF_ERR_EXIT(dnx_instru_ifa_initiator_rcy_set(unit, flags, gport, arg));
            break;
        default:
            SHR_ERR_EXIT(_SHR_E_PARAM, "bcm_dnx_instru_gport_control_set - invalid type=%d\r\n", type);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for getting configuration of per gport instrumentation controls
 * For detailed description refer to \ref bcm_dnx_instru_gport_control_set()
 *
 * \param [in] unit -  Unit-ID
 * \param [in] gport - description per use case.
 * \param [in] flags - description per use case.
 * \param [in] type - description per use case.
 * \param [out] arg  - description per use case.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
bcm_dnx_instru_gport_control_get(
    int unit,
    bcm_gport_t gport,
    uint32 flags,
    bcm_instru_gport_control_t type,
    int *arg)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    switch (type)
    {
        case bcmInstruGportControlTraceProbability:
            SHR_IF_ERR_EXIT(dnx_instru_trace_probability_get(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlVisEnable:
            SHR_IF_ERR_EXIT(dnx_visibility_port_enable_get(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlVisForce:
            SHR_IF_ERR_EXIT(dnx_visibility_port_force_get(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlIptTrapToRcyEnable:
            SHR_IF_ERR_EXIT(dnx_instru_ipt_trap_to_rcy_get(unit, flags, gport, arg));
            break;
        case bcmInstruGportControlIfaInitiatorRcyEnable:
            SHR_IF_ERR_EXIT(dnx_instru_ifa_initiator_rcy_get(unit, flags, gport, arg));
            break;
        default:
            SHR_ERR_EXIT(_SHR_E_PARAM, "bcm_dnx_instru_gport_control_get - invalid type=%d\r\n", type);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief - set encap lif for IFA counting
 *
 * \param [in] unit - Relevant unit
 * \param [in] local_outlif - Local sFlow encap lif
 * \param [in] counter_type - the counter_type to be stamped on metadata.
 * \param [in] dbal_result_type - the EEDB SFLOW result type.
 *
 * \return
 *   shr_error_e, negative in case of an error.
 *
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_encap_eedb_write(
    int unit,
    int local_outlif,
    uint16 counter_type,
    uint32 dbal_result_type)
{
    uint32 entry_handle_id;
    uint32 entry_data[3];

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** Take DBAL handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_SFLOW, &entry_handle_id));

    /** Set KEY field */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OUT_LIF, local_outlif);

    /** Set RESULT_TYPE field */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_RESULT_TYPE, INST_SINGLE, dbal_result_type);

    switch (dbal_result_type)
    {
        case DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND:
        {
            dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_LIF_SET, INST_SINGLE,
                                         INSTRU_IFA_OAM_LIF_SET);

            /*
             * Set entry raw data.
             * entry_data[0] : const 0.
             * entry_data[1] : const 0.
             * entry_data[2] : counter_type (MSBs).
             */
            entry_data[0] = 0;
            entry_data[1] = 0;
            entry_data[2] = counter_type << 24;

            break;
        }
        default:
        {
            SHR_ERR_EXIT(_SHR_E_INTERNAL,
                         "Error! Unsupported result type: dbal_result_type = %d. Supported result_type is: DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND = %d\n",
                         dbal_result_type, DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND);
        }
    }

    dbal_entry_value_field_arr32_set(unit, entry_handle_id, DBAL_FIELD_RAW_DATA, INST_SINGLE, entry_data);

    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Parameters verification function used for
 * bcm_dnx_instru_ifa_encap_create
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info - ifa configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
dnx_instru_ifa_encap_create_verify(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    SHR_FUNC_INIT_VARS(unit);

    if ((ifa_info->flags & BCM_INSTRU_IFA_ENCAP_REPLACE) == BCM_INSTRU_IFA_ENCAP_REPLACE)
    {
        if (bcm_instru_ifa_encap_get(unit, ifa_info) == _SHR_E_NOT_FOUND)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "REPLACE flag must be used on existing IFA entity.\n");
        }
    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Allocate out-lif and add oam entry for counting IFA packets
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info - ifa configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
shr_error_e
dnx_instru_ifa_encap_create(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    uint32 entry_handle_id;
    int local_out_lif;
    lif_mngr_local_outlif_info_t outlif_info;
    lif_mngr_global_lif_info_t global_lif_info = { 0 };
    int lif_alloc_flags = 0;
    uint32 result_type;
    int ifa_metadata_counter_type;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /*
     * Counter Type = 0
     */
    ifa_metadata_counter_type = 0;

    result_type = DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND;
    /*
     * Allocate LIF for IFA encap entry.
     */
    if (_SHR_IS_FLAG_SET(ifa_info->flags, BCM_INSTRU_IFA_ENCAP_WITH_ID))
    {
        /*
         * If WITH_ID flag is used - get the global out-lif from the user input and
         * add alloc_with_id flag
         */
        global_lif_info.global_lif = ifa_info->ifa_encap_id;
        lif_alloc_flags |= LIF_MNGR_GLOBAL_LIF_WITH_ID;
    }
    sal_memset(&outlif_info, 0, sizeof(lif_mngr_local_outlif_info_t));
    outlif_info.dbal_table_id = DBAL_TABLE_EEDB_SFLOW;
    outlif_info.dbal_result_type = result_type;
    outlif_info.logical_phase = DNX_ALGO_LOCAL_OUTLIF_LOGICAL_PHASE_1;
    SHR_IF_ERR_EXIT(dnx_lif_lib_allocate(unit, lif_alloc_flags, &global_lif_info, NULL, &outlif_info));
    local_out_lif = outlif_info.local_outlif;

    /*
     * Return the allocated global lif
     */
    ifa_info->ifa_encap_id = global_lif_info.global_lif;

    /*
     * ETPS Configuration
     */
    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_eedb_write(unit, local_out_lif, ifa_metadata_counter_type, result_type));

    /*
     * Add entry to glem
     */
    if ((ifa_info->flags & BCM_INSTRU_IFA_ENCAP_REPLACE) != BCM_INSTRU_IFA_ENCAP_REPLACE)
    {
        SHR_IF_ERR_EXIT(dnx_lif_lib_add_to_glem(unit, _SHR_CORE_ALL, global_lif_info.global_lif, local_out_lif, TRUE));
    }

    /*
 */
    /*
     * Add OAM_LIF_DB entry
     */
    /*
 */

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EGRESS_OAM_LIF_DB, &entry_handle_id));

    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_ZERO_PADDING, DBAL_RANGE_ALL, DBAL_RANGE_ALL);
    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_PREFIX, DBAL_RANGE_ALL, DBAL_RANGE_ALL);
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_BASE, local_out_lif);
    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_CORE_ID, DBAL_RANGE_ALL, DBAL_RANGE_ALL);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_COUNTER_BASE, INST_SINGLE, ifa_info->stat_cmd);
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_COUNTER_INTERFACE, INST_SINGLE,
                                 ifa_info->counter_command_id);

    if ((ifa_info->flags & BCM_INSTRU_IFA_ENCAP_REPLACE) == BCM_INSTRU_IFA_ENCAP_REPLACE)
    {
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT_UPDATE));
    }
    else
    {
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Verify ifa encap is indeed exists and it is with the correct table/result_type/phase
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_encap_id - global lif
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_encap_id_verify(
    int unit,
    int ifa_encap_id)
{
    dnx_algo_gpm_gport_hw_resources_t hw_res;
    bcm_gport_t encap_in_tunnel;

    SHR_FUNC_INIT_VARS(unit);

    /*
     * Turn the global lif into a tunnel, then call gport to hw resources.
     */
    sal_memset(&hw_res, 0, sizeof(dnx_algo_gpm_gport_hw_resources_t));
    BCM_GPORT_TUNNEL_ID_SET(encap_in_tunnel, ifa_encap_id);

    SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_to_hw_resources(unit, encap_in_tunnel,
                                                       DNX_ALGO_GPM_GPORT_HW_RESOURCES_LOCAL_LIF_EGRESS, &hw_res));

    if ((hw_res.outlif_dbal_table_id != DBAL_TABLE_EEDB_SFLOW)
        || (hw_res.outlif_dbal_result_type != DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND)
        || (hw_res.logical_phase != DNX_ALGO_LOCAL_OUTLIF_LOGICAL_PHASE_1))
    {
        SHR_ERR_EXIT(_SHR_E_PARAM,
                     "Error! IFA encap 0x%x is not of type IFA, table_id = %d, result_type = %d, logical_phase = %d\n",
                     ifa_encap_id, hw_res.outlif_dbal_table_id, hw_res.outlif_dbal_result_type, hw_res.logical_phase);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Verify ifa entity get/delete request
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info - ifa configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_encap_get_delete_verify(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    SHR_FUNC_INIT_VARS(unit);

    SHR_NULL_CHECK(ifa_info, _SHR_E_PARAM, "ifa_info");

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_id_verify(unit, ifa_info->ifa_encap_id));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief - Given an instru global lif, returns the local lif and it's result type.
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_encap_id - global lif
 * \param [out] local_lif - local lif associated with the given global_lif
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_encap_id_to_local_lif(
    int unit,
    int ifa_encap_id,
    int *local_lif)
{
    dnx_algo_gpm_gport_hw_resources_t hw_res;
    bcm_gport_t encap_in_tunnel;

    SHR_FUNC_INIT_VARS(unit);

    /*
     * Turn the global lif into a tunnel, then call gport to hw resources.
     */
    sal_memset(&hw_res, 0, sizeof(dnx_algo_gpm_gport_hw_resources_t));
    BCM_GPORT_TUNNEL_ID_SET(encap_in_tunnel, ifa_encap_id);

    SHR_IF_ERR_EXIT(dnx_algo_gpm_gport_to_hw_resources(unit, encap_in_tunnel,
                                                       DNX_ALGO_GPM_GPORT_HW_RESOURCES_LOCAL_LIF_EGRESS, &hw_res));

    *local_lif = hw_res.local_out_lif;

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief - Clear ifa EEDB entry
 *
 * \param [in] unit - Relevant unit
 * \param [in] ifa_local_outlif - the ifa lif id, key to the dbal table
 *
 * \return
 *   shr_error_e, negative in case of an error.
 *
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_encap_clear(
    int unit,
    int ifa_local_outlif)
{
    uint32 entry_handle_id;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** Take DBAL handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_SFLOW, &entry_handle_id));

    /** Set KEY field */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OUT_LIF, ifa_local_outlif);
    /** Set RESULT_TYPE field */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_RESULT_TYPE, INST_SINGLE,
                                 DBAL_RESULT_TYPE_EEDB_SFLOW_ETPS_SFLOW_EXT_SECOND);

    /** Clear dbal entry */
    SHR_IF_ERR_EXIT(dbal_entry_clear(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * ifa lif delete
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info - holds ifa_encap_id for the ifa entity to be deleted
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_ifa_lif_delete(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    int local_lif;

    SHR_FUNC_INIT_VARS(unit);

    /*
     * get local_lif
     */
    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_id_to_local_lif(unit, ifa_info->ifa_encap_id, &local_lif));

    /** Remove global lif from GLEM */
    SHR_IF_ERR_EXIT(dnx_lif_lib_remove_from_glem(unit, _SHR_CORE_ALL, ifa_info->ifa_encap_id));

    /*
     * delete ifa encap entry
     */
    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_clear(unit, local_lif));

    /*
     * Delete global and local lifs.
     */
    SHR_IF_ERR_EXIT(dnx_lif_lib_free(unit, ifa_info->ifa_encap_id, NULL, local_lif));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for configuration of IFA
 * instrumentation.
 * \ref bcm_dnx_instru_ifa_encap_get()
 *      bcm_dnx_instru_ifa_encap_delete()
 *      bcm_dnx_instru_ifa_encap_traverse()
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info -  ifa configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifa_encap_get
 *   bcm_dnx_instru_ifa_encap_delete
 *   bcm_dnx_instru_ifa_encap_traverse
 */
int
bcm_dnx_instru_ifa_encap_create(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_create_verify(unit, ifa_info));

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_create(unit, ifa_info));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API for deleting IFA 1.0 entity
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifa_info - ifa configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifa_encap_create
 *   bcm_dnx_instru_ifa_encap_get
 *   bcm_dnx_instru_ifa_encap_traverse
 */
int
bcm_dnx_instru_ifa_encap_delete(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    uint32 entry_handle_id;
    int local_lif;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_id_to_local_lif(unit, ifa_info->ifa_encap_id, &local_lif));

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_get_delete_verify(unit, ifa_info));

    SHR_IF_ERR_EXIT(dnx_instru_ifa_lif_delete(unit, ifa_info));

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EGRESS_OAM_LIF_DB, &entry_handle_id));

    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_PREFIX, DBAL_RANGE_ALL, DBAL_RANGE_ALL);
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_BASE, local_lif);
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_CORE_ID, _SHR_CORE_ALL);
    dbal_entry_key_field32_range_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_PREFIX, DBAL_RANGE_ALL, DBAL_RANGE_ALL);

    SHR_IF_ERR_EXIT(dbal_entry_clear(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API for getting IFA 1.0 entity info
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in,out] ifa_info - ifa_encap_id should be supplied as
 *        input. Structure will contain all information as
 *        output
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifa_encap_create
 *   bcm_dnx_instru_ifa_encap_delete
 *   bcm_dnx_instru_ifa_encap_traverse
 */
int
bcm_dnx_instru_ifa_encap_get(
    int unit,
    bcm_instru_ifa_info_t * ifa_info)
{
    uint32 entry_handle_id;
    uint8 counter_if;
    uint32 counter_index;
    int local_lif;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_id_to_local_lif(unit, ifa_info->ifa_encap_id, &local_lif));

    SHR_IF_ERR_EXIT(dnx_instru_ifa_encap_get_delete_verify(unit, ifa_info));

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EGRESS_OAM_LIF_DB, &entry_handle_id));

    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_BASE, local_lif);
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_PREFIX, 0);
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_CORE_ID, 0);

    dbal_value_field32_request(unit, entry_handle_id, DBAL_FIELD_OAM_COUNTER_BASE, INST_SINGLE, &counter_index);
    dbal_value_field8_request(unit, entry_handle_id, DBAL_FIELD_COUNTER_INTERFACE, INST_SINGLE, &counter_if);
    ifa_info->stat_cmd = counter_index;
    ifa_info->counter_command_id = counter_if;

    SHR_IF_ERR_EXIT(dbal_entry_get(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API for traversing IFA 1.0 entity
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] cb - Call back function
 * \param [in] user_data - Pointer to user data structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifa_encap_create
 *   bcm_dnx_instru_ifa_encap_get
 *   bcm_dnx_instru_ifa_encap_delete
 */
int
bcm_dnx_instru_ifa_encap_traverse(
    int unit,
    bcm_instru_ifa_encap_traverse_cb cb,
    void *user_data)
{
    uint32 entry_handle_id;
    int is_end = 0;
    bcm_instru_ifa_info_t ifa_info;
    uint32 field_value[3];
    uint8 counter_if;
    uint32 counter_index;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EGRESS_OAM_LIF_DB, &entry_handle_id));
    SHR_IF_ERR_EXIT(dbal_iterator_init(unit, entry_handle_id, DBAL_ITER_MODE_ALL));

    SHR_IF_ERR_EXIT(dbal_iterator_get_next(unit, entry_handle_id, &is_end));
    while (!is_end)
    {
        /*
         * Receive key and value fields of the entry.
         */
        SHR_IF_ERR_EXIT(dbal_entry_handle_key_field_arr32_get(unit, entry_handle_id, DBAL_FIELD_OAM_KEY_BASE,
                                                              field_value));
        ifa_info.ifa_encap_id = field_value[0];

        SHR_IF_ERR_EXIT(dbal_entry_handle_value_field32_get
                        (unit, entry_handle_id, DBAL_FIELD_OAM_COUNTER_BASE, INST_SINGLE, &counter_index));
        SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                        (unit, entry_handle_id, DBAL_FIELD_COUNTER_INTERFACE, INST_SINGLE, &counter_if));
        ifa_info.stat_cmd = counter_index;
        ifa_info.counter_command_id = counter_if;

        /*
         * If user provided a name of the callback function, it will be invoked with sending the ifa_info structure
         * of the entry that was found.
         */
        if (cb != NULL)
        {
            /*
             * Invoke callback function
             */
            SHR_IF_ERR_EXIT((*cb) (unit, &ifa_info, user_data));
        }
        else
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Wrong callback function was provided");
        }
        /*
         * Receive next entry in table.
         */
        SHR_IF_ERR_EXIT(dbal_iterator_get_next(unit, entry_handle_id, &is_end));
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief
 * Verify ifit parameters for BCM-API: bcm_dnx_instru_ifit_encap_create().
 * check the supported flags
 */
static shr_error_e
dnx_instru_ifit_encap_create_verify(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_NULL_CHECK(ifit_encap_info, _SHR_E_PARAM, "ifit_encap_info");

    /** Verify WITH_ID and REPLACE flags */
    if (_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_REPLACE)
        && !_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_WITH_ID))
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "BCM_INSTRU_IFIT_ENCAP_REPLACE can't be used without BCM_INSTRU_IFIT_ENCAP_WITH_ID");
    }

    if (!_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_WITH_ID)
        && (ifit_encap_info->ifit_encap_id != 0))
    {
        SHR_ERR_EXIT(_SHR_E_PARAM,
                     "ifit_encap_info->ifit_encap_id should be 0 when BCM_INSTRU_IFIT_ENCAP_WITH_ID is not set!");
    }

    if (ifit_encap_info->fieh_length > BCM_INSTRU_IFIT_ENCAP_FIEH_EXT_DATA_MAX)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "FIEH length range is  0-%d\n", BCM_INSTRU_IFIT_ENCAP_FIEH_EXT_DATA_MAX);
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief
 * Write to IFIT entry into EEDB table.
 *
 *   \param [in] unit - Relevant unit.
 *   \param [in] ifit_encap_info - A pointer to the struct that holds
 *     information for the IFIT entry
 *   \param [in] local_outlif -
 *     Local-Out-LIF whose entry should be added to out-LIF table.
 */
static shr_error_e
dnx_instru_ifit_encap_table_set(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info,
    uint32 local_outlif)
{
    uint32 entry_handle_id;
    uint32 fih_data = 0;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);
    SHR_NULL_CHECK(ifit_encap_info, _SHR_E_PARAM, "ifit_encap_info");

    /** Take DBAL handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_MPLS_IFIT, &entry_handle_id));

    /** Set KEY field */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OUT_LIF, local_outlif);

    /** Set DATA fields */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_RESULT_TYPE, INST_SINGLE,
                                 DBAL_RESULT_TYPE_EEDB_MPLS_IFIT_ETPS_MPLS_IFIT);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FIH_TYPE, INST_SINGLE, ifit_encap_info->fieh_length);

    /** FII header*/
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FII_TC, INST_SINGLE, ifit_encap_info->fii_exp);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FII_TTL, INST_SINGLE, ifit_encap_info->fii_ttl);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FII_BOS, INST_SINGLE, TRUE);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FII_BOS, INST_SINGLE, TRUE);

    /** FIH header*/
    fih_data =
        ifit_encap_info->fih_flow_id << 12 | ifit_encap_info->
        fih_r_s_bits << 8 | ifit_encap_info->fih_header_type_indicator;
    if (_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_ALTERNATE_MARKING_LOSS_SET))
    {
        fih_data |= 1 << 11;    /* L bit */
    }

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FLOW_ID_BASIC, INST_SINGLE, fih_data);

    /** FIEH header*/

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FLOW_ID_EXT, INST_SINGLE,
                                 ifit_encap_info->fieh_ext_data[0]);
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_DIP_MASK, INST_SINGLE,
                                 ifit_encap_info->fieh_ext_data[1] >> 24);
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_SIP_MASK, INST_SINGLE,
                                 (ifit_encap_info->fieh_ext_data[1] >> 16) & 0xFF);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_FIEH_EXT_DATA, INST_SINGLE,
                                 ifit_encap_info->fieh_ext_data[2] >> 16);

    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_REMARK_PROFILE, INST_SINGLE,
                                 DNX_QOS_MAP_PROFILE_GET(ifit_encap_info->qos_map_id));

    /** Write to HW */
    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief
 * Reset given entry from IFIT EEDB table.
 *
 *   \param [in] unit - Relevant unit.
 *   \param [in] local_outlif -
 *     Local-Out-LIF whose entry should be reset.
 */
static shr_error_e
dnx_instru_ifit_encap_table_clear(
    int unit,
    uint32 local_outlif)
{
    uint32 entry_handle_id;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** Taking a handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_RCH, &entry_handle_id));

    /** Setting key fields -- DBAL_RESULT_TYPE_EEDB_MPLS_IFIT */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OUT_LIF, local_outlif);

    /** Setting result type */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_RESULT_TYPE, INST_SINGLE,
                                 DBAL_RESULT_TYPE_EEDB_MPLS_IFIT_ETPS_MPLS_IFIT);

    /** clearing the entry */
    SHR_IF_ERR_EXIT(dbal_entry_clear(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief
 * Read from IFIT entry EEDB table.
 *
 *   \param [in] unit - Relevant unit.
 *   \param [out] ifit_encap_info - A pointer to the struct that holds
 *     information for the IFIT encapsulation entry
 *   \param [in] local_outlif -
 *     Local-Out-LIF whose entry should be returned.
 */
static shr_error_e
dnx_instru_ifit_encap_table_get(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info,
    uint32 local_outlif)
{
    uint32 entry_handle_id;
    uint32 fih_data = 0;
    uint8 dip_mask = 0, sip_mask = 0;
    uint32 fieh_ext_data = 0, field_val = 0;

    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);
    SHR_NULL_CHECK(ifit_encap_info, _SHR_E_PARAM, "ifit_encap_info");

    /** Taking a handle */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_MPLS_IFIT, &entry_handle_id));

    /** Setting key fields -- DBAL_RESULT_TYPE_EEDB_MPLS_IFIT */
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_OUT_LIF, local_outlif);

    /** Setting result type */
    dbal_entry_value_field32_set(unit, entry_handle_id, DBAL_FIELD_RESULT_TYPE, INST_SINGLE,
                                 DBAL_RESULT_TYPE_EEDB_MPLS_IFIT_ETPS_MPLS_IFIT);
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, entry_handle_id, DBAL_GET_ALL_FIELDS));

    /**
     * Get egress encapsulation data from dbal table
     */

    /** FII header*/
    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                    (unit, entry_handle_id, DBAL_FIELD_FII_TC, INST_SINGLE, &ifit_encap_info->fii_exp));

    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                    (unit, entry_handle_id, DBAL_FIELD_FII_TTL, INST_SINGLE, &ifit_encap_info->fii_ttl));

    /** FIH header*/
    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field32_get
                    (unit, entry_handle_id, DBAL_FIELD_FLOW_ID_BASIC, INST_SINGLE, &fih_data));

    ifit_encap_info->fih_flow_id = fih_data >> 12;
    ifit_encap_info->fih_r_s_bits = (fih_data >> 8) & 0x3;;
    ifit_encap_info->fih_header_type_indicator = fih_data & 0xFF;
    ifit_encap_info->flags |= ((fih_data >> 11) & 1) ? BCM_INSTRU_IFIT_ENCAP_ALTERNATE_MARKING_LOSS_SET : 0;

    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                    (unit, entry_handle_id, DBAL_FIELD_FIH_TYPE, INST_SINGLE, &ifit_encap_info->fieh_length));

    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field32_get
                    (unit, entry_handle_id, DBAL_FIELD_FLOW_ID_EXT, INST_SINGLE, &ifit_encap_info->fieh_ext_data[0]));

    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                    (unit, entry_handle_id, DBAL_FIELD_DIP_MASK, INST_SINGLE, &dip_mask));
    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field8_get
                    (unit, entry_handle_id, DBAL_FIELD_SIP_MASK, INST_SINGLE, &sip_mask));
    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field32_get
                    (unit, entry_handle_id, DBAL_FIELD_FIEH_EXT_DATA, INST_SINGLE, &fieh_ext_data));

    ifit_encap_info->fieh_ext_data[1] |= (dip_mask << 24) | (sip_mask << 16);
    ifit_encap_info->fieh_ext_data[2] |= fieh_ext_data << 16;

    SHR_IF_ERR_EXIT(dbal_entry_handle_value_field32_get
                    (unit, entry_handle_id, DBAL_FIELD_REMARK_PROFILE, INST_SINGLE, &field_val));

    ifit_encap_info->qos_map_id = field_val;
exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Generic API function used for configuration of IFIT
 * instrumentation.
 * \ref bcm_dnx_instru_ifit_encap_get()
 *      bcm_dnx_instru_ifit_encap_delete()
 *      bcm_dnx_instru_ifit_encap_traverse()
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifit_encap_info -  ifit configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifit_encap_get
 *   bcm_dnx_instru_ifit_encap_delete
 *   bcm_dnx_instru_ifit_encap_traverse
 */
int
bcm_dnx_instru_ifit_encap_create(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info)
{
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources;
    lif_mngr_local_outlif_info_t outlif_info;
    lif_mngr_global_lif_info_t global_lif_info = { 0 };
    int lif_alloc_flags = 0;
    int lif_get_flags = 0;
    bcm_gport_t gport;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);
    /** Verification of input parameters */
    SHR_INVOKE_VERIFY_DNX(dnx_instru_ifit_encap_create_verify(unit, ifit_encap_info));
    sal_memset(&gport_hw_resources, 0, sizeof(dnx_algo_gpm_gport_hw_resources_t));

    /** WITH_ID flag is used - get global out-lif ID */
    if (_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_REPLACE))
    {
        /** Add alloc_with_id flag */
        global_lif_info.global_lif = BCM_L3_ITF_VAL_GET(ifit_encap_info->ifit_encap_id);
        lif_alloc_flags |= LIF_MNGR_GLOBAL_LIF_WITH_ID;
    }

    /** Allocate new egr out-LIF - REPLACE flag is not set */
    if (!_SHR_IS_FLAG_SET(ifit_encap_info->flags, BCM_INSTRU_IFIT_ENCAP_REPLACE))
    {
        /** fill the local outlif info. */
        sal_memset(&outlif_info, 0, sizeof(lif_mngr_local_outlif_info_t));
        outlif_info.dbal_table_id = DBAL_TABLE_EEDB_MPLS_IFIT;
        outlif_info.logical_phase = DNX_ALGO_LOCAL_OUTLIF_LOGICAL_PHASE_1;
        /** Allocate LIF - WITH_ID if the flag was set */
        SHR_IF_ERR_EXIT(dnx_lif_lib_allocate(unit, lif_alloc_flags, &global_lif_info, NULL, &outlif_info));
        /** update returned Encap ID's */
        BCM_L3_ITF_SET(ifit_encap_info->ifit_encap_id, BCM_L3_ITF_TYPE_LIF, global_lif_info.global_lif);
        /** Add entry to out-LIF table */
        SHR_IF_ERR_EXIT(dnx_instru_ifit_encap_table_set(unit, ifit_encap_info, outlif_info.local_outlif));
        /** Write global to local LIF mapping to GLEM. */
        SHR_IF_ERR_EXIT(dnx_lif_lib_add_to_glem
                        (unit, _SHR_CORE_ALL, global_lif_info.global_lif, outlif_info.local_outlif, TRUE));
    }

    /** Replace existing out-LIF */
    else
    {
        /** get GPort HW resources (global and local tunnel outlif) */
        lif_get_flags =
            DNX_ALGO_GPM_GPORT_HW_RESOURCES_LOCAL_LIF_EGRESS | DNX_ALGO_GPM_GPORT_HW_RESOURCES_GLOBAL_LIF_EGRESS;

        BCM_L3_ITF_LIF_TO_GPORT_TUNNEL(gport, ifit_encap_info->ifit_encap_id);

        /** we don't have gport here, so we're using gport tunnel */
        SHR_IF_ERR_REPLACE_AND_EXIT(dnx_algo_gpm_gport_to_hw_resources(unit, gport, lif_get_flags, &gport_hw_resources),
                                    _SHR_E_NOT_FOUND, _SHR_E_PARAM);

        /** Check that eep is an index of a RCH OutLIF (in SW DB) */
        if (gport_hw_resources.outlif_dbal_table_id != DBAL_TABLE_EEDB_MPLS_IFIT)
        {
            SHR_ERR_EXIT(_SHR_E_NOT_FOUND, "Illegal to replace non IFIT OutLIF to IFIT OutLIF");
        }
        /** Add entry to out-LIF table */
        SHR_IF_ERR_EXIT(dnx_instru_ifit_encap_table_set(unit, ifit_encap_info, outlif_info.local_outlif));

    }

exit:
    SHR_FUNC_EXIT;

}

/**
 * \brief -
 * API for deleting IFIT entity
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] ifit_encap_info - ifit configuration structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifit_encap_create
 *   bcm_dnx_instru_ifit_encap_get
 *   bcm_dnx_instru_ifit_encap_traverse
 */
int
bcm_dnx_instru_ifit_encap_delete(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info)
{
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources;
    bcm_gport_t gport;
    uint32 flags;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    /** Get local outlif from he resources */
    BCM_L3_ITF_LIF_TO_GPORT_TUNNEL(gport, ifit_encap_info->ifit_encap_id);

    flags = DNX_ALGO_GPM_GPORT_HW_RESOURCES_LOCAL_LIF_EGRESS | DNX_ALGO_GPM_GPORT_HW_RESOURCES_GLOBAL_LIF_EGRESS;
    SHR_IF_ERR_REPLACE_AND_EXIT(dnx_algo_gpm_gport_to_hw_resources(unit, gport, flags, &gport_hw_resources),
                                _SHR_E_NOT_FOUND, _SHR_E_PARAM);

    /** Clear --- table values */
    SHR_IF_ERR_EXIT(dnx_instru_ifit_encap_table_clear(unit, gport_hw_resources.local_out_lif));

    /** Remove global to local LIF mapping from GLEM. core-Id=0 until bcm_dnx_l2_egress_create is fixed */
    SHR_IF_ERR_EXIT(dnx_lif_lib_remove_from_glem(unit, _SHR_CORE_ALL, gport_hw_resources.global_out_lif));

    /** Free LIF */
    SHR_IF_ERR_EXIT(dnx_lif_lib_free(unit, gport_hw_resources.global_out_lif, NULL, gport_hw_resources.local_out_lif));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API for getting IFIT entity info
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in,out] ifit_encap_info - ifit_encap_id should be supplied as
 *        input. Structure will contain all information as
 *        output
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifit_encap_create
 *   bcm_dnx_instru_ifit_encap_delete
 *   bcm_dnx_instru_ifit_encap_traverse
 */
int
bcm_dnx_instru_ifit_encap_get(
    int unit,
    bcm_instru_ifit_encap_info_t * ifit_encap_info)
{
    dnx_algo_gpm_gport_hw_resources_t gport_hw_resources;
    bcm_gport_t gport;
    uint32 flags;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    /** Get local outlif from he resources */
    BCM_L3_ITF_LIF_TO_GPORT_TUNNEL(gport, ifit_encap_info->ifit_encap_id);

    flags = DNX_ALGO_GPM_GPORT_HW_RESOURCES_LOCAL_LIF_EGRESS | DNX_ALGO_GPM_GPORT_HW_RESOURCES_GLOBAL_LIF_EGRESS;
    SHR_IF_ERR_REPLACE_AND_EXIT(dnx_algo_gpm_gport_to_hw_resources(unit, gport, flags, &gport_hw_resources),
                                _SHR_E_NOT_FOUND, _SHR_E_PARAM);

    /** Set return values in ifit_encap_info */
    SHR_IF_ERR_EXIT(dnx_instru_ifit_encap_table_get(unit, ifit_encap_info, gport_hw_resources.local_out_lif));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API for traversing IFIT entity
 *
 *
 * \param [in] unit -  Unit-ID
 * \param [in] cb - Call back function
 * \param [in] user_data - Pointer to user data structure
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   bcm_dnx_instru_ifit_encap_create
 *   bcm_dnx_instru_ifit_encap_get
 *   bcm_dnx_instru_ifit_encap_delete
 */
int
bcm_dnx_instru_ifit_encap_traverse(
    int unit,
    bcm_instru_ifit_encap_traverse_cb cb,
    void *user_data)
{
    uint32 entry_handle_id;
    int is_end = 0;
    uint32 local_out_lif = 0;
    bcm_instru_ifit_encap_info_t ifit_encap_info;

    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);
    DBAL_FUNC_INIT_VARS(unit);

    sal_memset(&ifit_encap_info, 0, sizeof(ifit_encap_info));

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_EEDB_MPLS_IFIT, &entry_handle_id));
    SHR_IF_ERR_EXIT(dbal_iterator_init(unit, entry_handle_id, DBAL_ITER_MODE_ALL));

    SHR_IF_ERR_EXIT(dbal_iterator_get_next(unit, entry_handle_id, &is_end));
    while (!is_end)
    {

        SHR_IF_ERR_EXIT(dbal_entry_handle_key_field_arr32_get
                        (unit, entry_handle_id, DBAL_FIELD_OUT_LIF, &local_out_lif));

        /*
         * If user provided a name of the callback function, it will be invoked with sending the ifit_encap_info structure
         * of the entry that was found.
         */

        /*
         * Get IFIT entry information.
         */
        SHR_IF_ERR_EXIT(dnx_instru_ifit_encap_table_get(unit, &ifit_encap_info, local_out_lif));

        if (cb != NULL)
        {
            /*
             * Invoke callback function
             */
            SHR_IF_ERR_EXIT((*cb) (unit, &ifit_encap_info, user_data));
        }
        else
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Wrong callback function was provided");
        }
        /*
         * Receive next entry in table.
         */
        SHR_IF_ERR_EXIT(dbal_iterator_get_next(unit, entry_handle_id, &is_end));
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;

}

/**
 * \brief -
 * Set the HW resets.
 *
 * \param [in] unit -  Unit-ID
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static int
dnx_instru_synced_counters_hw_resets_init(
    int unit)
{
    uint32 dbal_handle_id;
    uint32 value;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    if (dnx_data_nif.eth.cdum_nof_get(unit) > 0)
    {
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CDUM, &dbal_handle_id));
        dbal_value_field32_request(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_PFC, INST_SINGLE, &value);
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, dbal_handle_id, DBAL_COMMIT));

        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CDUM, &dbal_handle_id));
        dbal_entry_value_field32_set(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_TRAFFIC, INST_SINGLE, value);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, dbal_handle_id, DBAL_COMMIT));
    }

    if (dnx_data_nif.eth.cdu_nof_get(unit) > 0)
    {
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CDU, &dbal_handle_id));
        dbal_value_field32_request(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_PFC, INST_SINGLE, &value);
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, dbal_handle_id, DBAL_COMMIT));

        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CDU, &dbal_handle_id));
        dbal_entry_value_field32_set(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_TRAFFIC, INST_SINGLE, value);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, dbal_handle_id, DBAL_COMMIT));
    }

    if (dnx_data_nif.eth.clu_nof_get(unit) > 0)
    {
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CLU, &dbal_handle_id));
        dbal_value_field32_request(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_PFC, INST_SINGLE, &value);
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, dbal_handle_id, DBAL_COMMIT));

        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_RESETS_CLU, &dbal_handle_id));
        dbal_entry_value_field32_set(unit, dbal_handle_id, DBAL_FIELD_INST_RESETS_TRAFFIC, INST_SINGLE, value);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, dbal_handle_id, DBAL_COMMIT));
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Verify the validity of the sync counters DNX data.
 *
 * \param [in] unit -  Unit-ID
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static int
dnx_instru_synced_counters_time_ratio_init(
    int unit)
{
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    if (dnx_data_instru.synced_counters.period_adjusted_to_ns_through_time_ratio_get(unit))
    {
        uint32 dbal_handle_id;
        uint32 nof_clocks;
        uint32 nof_ns;
        uint32 clock_freq_khz;
        int current_value_correct;
        uint64 freqkhztimestimens;
        uint64 freqtimestime_converted;
        uint64 freqtimestime_converted_back;
        uint32 unitconversion;
        int64 nof_clocks_uint64;

        current_value_correct = FALSE;

        clock_freq_khz = dnx_data_device.general.core_clock_khz_get(unit);

        if (clock_freq_khz == 0)
        {
            SHR_ERR_EXIT(_SHR_E_CONFIG, "Error, unexpected zero value for clock frequency.\n");
        }

        /** Create the unitconversion constant, 1000000000 for second to nanosecond divided by 1000 for KHz->Hz.*/
        unitconversion = 1000000000 / 1000;

        /*
         * Get the old values and check if they fit.
         */
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CLK_TIME_RATIO, &dbal_handle_id));
        dbal_value_field32_request(unit, dbal_handle_id, DBAL_FIELD_NOF_CLOCK_CYCLES, INST_SINGLE, &nof_clocks);
        dbal_value_field32_request(unit, dbal_handle_id, DBAL_FIELD_NOF_NANOSECONDS, INST_SINGLE, &nof_ns);
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, dbal_handle_id, DBAL_COMMIT));

        if (nof_ns != 0 && nof_clocks != 0)
        {
            /** Get freq [KHZ] times time [ns].*/
            COMPILER_64_SET(freqkhztimestimens, 0, clock_freq_khz);
            COMPILER_64_UMUL_32(freqkhztimestimens, nof_ns);

            /*
             * Reduce the conversion.
             * Note we do not have modulo/remainder in COMPILER_64,
             * so we will check divisibility using comparing after division and multiplication.
             */
            COMPILER_64_COPY(freqtimestime_converted, freqkhztimestimens);
            COMPILER_64_UDIV_32(freqtimestime_converted, unitconversion);
            COMPILER_64_COPY(freqtimestime_converted_back, freqtimestime_converted);
            COMPILER_64_UMUL_32(freqtimestime_converted_back, unitconversion);
            if (COMPILER_64_EQ(freqtimestime_converted_back, freqkhztimestimens))
            {
                COMPILER_64_SET(nof_clocks_uint64, 0, nof_clocks);
                if (COMPILER_64_EQ(nof_clocks_uint64, freqtimestime_converted))
                {
                    current_value_correct = TRUE;
                }
            }
        }

        if (current_value_correct)
        {
            LOG_DEBUG_EX(BSL_LOG_MODULE, "nof_clocks %d and nof_ns %d do match clock rate %d KHz.%s\r\n",
                         nof_clocks, nof_ns, clock_freq_khz, EMPTY);
        }
        else
        {
            /*
             * Find corrects adjustments if the current values are incorrect.
             */
            uint32 nof_clk_mask = SAL_UPTO_BIT(dnx_data_instru.synced_counters.period_adjusting_clk_bits_get(unit));
            uint32 nof_ns_max = SAL_UPTO_BIT(dnx_data_instru.synced_counters.period_adjusting_ns_bits_get(unit));
            int found = FALSE;
            LOG_DEBUG_EX(BSL_LOG_MODULE, "nof_clocks %d and nof_ns %d do not match clock rate %d KHz. "
                         "Recalculating.%s\r\n", nof_clocks, nof_ns, clock_freq_khz, EMPTY);
            for (nof_ns = 1; nof_ns <= nof_ns_max; nof_ns++)
            {
                COMPILER_64_SET(freqkhztimestimens, 0, clock_freq_khz);
                COMPILER_64_UMUL_32(freqkhztimestimens, nof_ns);
                COMPILER_64_COPY(freqtimestime_converted, freqkhztimestimens);
                COMPILER_64_UDIV_32(freqtimestime_converted, unitconversion);
                COMPILER_64_COPY(freqtimestime_converted_back, freqtimestime_converted);
                COMPILER_64_UMUL_32(freqtimestime_converted_back, unitconversion);
                if (COMPILER_64_EQ(freqtimestime_converted_back, freqkhztimestimens))
                {
                    if ((COMPILER_64_HI(freqtimestime_converted) == 0) &&
                        ((COMPILER_64_LO(freqtimestime_converted) & (!nof_clk_mask)) == 0) &&
                        (freqtimestime_converted != 0))
                    {
                        nof_clocks = COMPILER_64_LO(freqtimestime_converted);
                        found = TRUE;
                        break;
                    }
                }
            }
            if (found)
            {
                dbal_entry_value_field32_set(unit, dbal_handle_id, DBAL_FIELD_NOF_CLOCK_CYCLES, INST_SINGLE,
                                             nof_clocks);
                dbal_entry_value_field32_set(unit, dbal_handle_id, DBAL_FIELD_NOF_NANOSECONDS, INST_SINGLE, nof_ns);
                SHR_IF_ERR_EXIT(dbal_entry_commit(unit, dbal_handle_id, DBAL_COMMIT));
                LOG_DEBUG_EX(BSL_LOG_MODULE,
                             "Adjusted to nof_clocks %d and nof_ns %d to match clock rate %d KHz.%s\r\n", nof_clocks,
                             nof_ns, clock_freq_khz, EMPTY);
            }
            else
            {
                SHR_ERR_EXIT(_SHR_E_CONFIG, "Could not find adjustments to satisfy clock frequency of %d KHz\n",
                             clock_freq_khz);
            }
        }
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Initialize the synchronized counters SW state
 *
 * \param [in] unit -  Unit-ID
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static int
dnx_instru_synced_counters_init(
    int unit)
{
    int core_index;
    int ethu_index;
    int nof_cores = dnx_data_device.general.nof_cores_get(unit);
    int nof_ethu_per_core = dnx_data_nif.eth.ethu_nof_per_core_get(unit);
    SHR_FUNC_INIT_VARS(unit);

    /*
     * Init the SW state.
     */
    SHR_IF_ERR_EXIT(instru_sync_counters.init(unit));
    SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.per_core_info.alloc(unit));
    SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.per_ethu_info.alloc(unit));
    for (core_index = 0; core_index < nof_cores; core_index++)
    {
        for (ethu_index = 0; ethu_index < nof_ethu_per_core; ethu_index++)
        {
            SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.per_ethu_info.
                            record_last_read_nof.alloc(unit, core_index, ethu_index));
        }
    }

    /*
     * Set the HW resets.
     */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_hw_resets_init(unit));

    /*
     * Adjust the time ration by clock frequency.
     */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_time_ratio_init(unit));

exit:
    SHR_FUNC_EXIT;
}

/*
 * See .h file
 */
shr_error_e
dnx_instru_init(
    int unit)
{
    int system_headers_mode;

    SHR_FUNC_INIT_VARS(unit);

    system_headers_mode = dnx_data_headers.system_headers.system_headers_mode_get(unit);
    if (system_headers_mode == DBAL_ENUM_FVAL_SYSTEM_HEADERS_MODE_JERICHO2_MODE)
    {
      /** Init IPT (INT + Tail-Edit) */
        SHR_IF_ERR_EXIT(dnx_instru_ipt_init(unit));
    }
    /** Init synchronized counters */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_init(unit));

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Function to verify the input parameters of APIs:
 * - bcm_instru_synced_counters_config_set
 * - bcm_instru_synced_counters_config_get
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags -  Flags
 * \param [in] source_type -  Type of Synchronous Counters mechanism
 * \param [in] config -  Configuration structure for Synchronous Counters mechanism
 * \param [in] is_set -  indicates if the verify function was called from the "set" API
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
int
dnx_instru_synced_counters_config_verify(
    int unit,
    uint32 flags,
    bcm_instru_synced_counters_source_type_t source_type,
    bcm_instru_synced_counters_config_t * config,
    uint8 is_set)
{
    int interval_period_nof_bits_hw;
    int interval_period_nof_bits_maximum_usable = dnx_data_instru.synced_counters.max_interval_period_size_get(unit);
    int max_interval_period_nof_bits;
    uint64 interval_period_msb;
    uint64 immediate_start;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    /** Verify input flags */
    SHR_VAL_VERIFY(flags, 0, _SHR_E_PARAM, "Unsupported flags for synchronized counters configuration!\n");

    /** Verify input source type */
    if ((source_type != bcmInstruSyncedCountersTypeIcgm) && (source_type != bcmInstruSyncedCountersTypeNif))
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d for synchronized counters configuration!\n",
                     source_type);
    }

    if (is_set == TRUE)
    {
        /** Verify input enable */
        SHR_BOOL_VERIFY(config->enable, _SHR_E_PARAM, "Invalid enable, must be TRUE or FALSE\n");
        if (config->enable == FALSE)
        {
            /** When disabling the instrumentation all other parameters are irrelevant */
            SHR_EXIT();
        }

        /** Verify input start time */
        COMPILER_64_SET(immediate_start, -1, -1);
        if (COMPILER_64_NE(config->start_time, immediate_start))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported start time currently only immediate (-1) is supported!\n");
        }

        /*
         * Verify the size of the period does not exceed the maximum number of bits,
         * either the size in HW or the maximum usable size.
         * Also verify that the period isn't zero.
         */
        if (COMPILER_64_IS_ZERO(config->period))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Period cannot be zero.\n");
        }
        SHR_IF_ERR_EXIT(dbal_tables_field_size_get
                        (unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, DBAL_FIELD_INTERVAL_PERIOD, FALSE, 0, 0,
                         &interval_period_nof_bits_hw));
        max_interval_period_nof_bits = (interval_period_nof_bits_hw < interval_period_nof_bits_maximum_usable) ?
            (interval_period_nof_bits_hw) : (interval_period_nof_bits_maximum_usable);
        COMPILER_64_COPY(interval_period_msb, config->period);
        COMPILER_64_SHR(interval_period_msb, max_interval_period_nof_bits);
        if (!COMPILER_64_IS_ZERO(interval_period_msb))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Period (%u,%u)is out of range, cannot be more than %u bits.\n",
                         COMPILER_64_HI(config->period), COMPILER_64_LO(config->period), max_interval_period_nof_bits);
        }

        /** Verify input enable */
        SHR_BOOL_VERIFY(config->enable, _SHR_E_PARAM, "Invalid enable, must be TRUE or FALSE\n");
        /** Verify input is_eventor_collection */
        SHR_BOOL_VERIFY(config->is_eventor_collection, _SHR_E_PARAM,
                        "Invalid is_eventor_collection, must be TRUE or FALSE\n");
        /** Verify input is_continuous */
        SHR_BOOL_VERIFY(config->is_continuous, _SHR_E_PARAM, "Invalid is_continuous, must be TRUE or FALSE\n");
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -  Set Synced counters configuration to HW
 */
static shr_error_e
dnx_instru_synced_counters_config_hw_set(
    int unit,
    bcm_instru_synced_counters_source_type_t source_type,
    uint8 enable,
    uint64 start_time,
    uint64 interval_period,
    uint16 nof_intervals,
    uint8 is_continuous)
{
    uint32 entry_handle_id;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, &entry_handle_id));
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_SOURCE_TYPE, source_type);
    dbal_entry_value_field8_set(unit, entry_handle_id, DBAL_FIELD_ENABLE, INST_SINGLE, 0);
    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, &entry_handle_id));
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_SOURCE_TYPE, source_type);
    dbal_entry_value_field64_set(unit, entry_handle_id, DBAL_FIELD_START_TIME, INST_SINGLE, start_time);
    dbal_entry_value_field64_set(unit, entry_handle_id, DBAL_FIELD_INTERVAL_PERIOD, INST_SINGLE, interval_period);
    dbal_entry_value_field16_set(unit, entry_handle_id, DBAL_FIELD_NOF_INTERVALS, INST_SINGLE, nof_intervals);
    dbal_entry_value_field8_set(unit, entry_handle_id, DBAL_FIELD_IS_CONTINUOUS, INST_SINGLE, is_continuous);
    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, &entry_handle_id));
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_SOURCE_TYPE, source_type);
    dbal_entry_value_field8_set(unit, entry_handle_id, DBAL_FIELD_ENABLE, INST_SINGLE, enable);
    SHR_IF_ERR_EXIT(dbal_entry_commit(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -  Get Synced counters configuration from HW
 */
static shr_error_e
dnx_instru_synced_counters_config_hw_get(
    int unit,
    bcm_instru_synced_counters_source_type_t source_type,
    uint8 *enable,
    uint64 *start_time,
    uint64 *interval_period,
    uint16 *nof_intervals,
    uint8 *is_continuous)
{
    uint32 entry_handle_id;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, &entry_handle_id));
    dbal_entry_key_field32_set(unit, entry_handle_id, DBAL_FIELD_SOURCE_TYPE, source_type);
    dbal_value_field8_request(unit, entry_handle_id, DBAL_FIELD_ENABLE, INST_SINGLE, enable);
    dbal_value_field64_request(unit, entry_handle_id, DBAL_FIELD_START_TIME, INST_SINGLE, start_time);
    dbal_value_field64_request(unit, entry_handle_id, DBAL_FIELD_INTERVAL_PERIOD, INST_SINGLE, interval_period);
    dbal_value_field16_request(unit, entry_handle_id, DBAL_FIELD_NOF_INTERVALS, INST_SINGLE, nof_intervals);
    dbal_value_field8_request(unit, entry_handle_id, DBAL_FIELD_IS_CONTINUOUS, INST_SINGLE, is_continuous);
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -  Get time stamp for sync counters start time.
 * \param [in] unit - The unit number.
 * \param [out] timestamp_ns - Pointer to the retrieved value. Given in nanoseconds.
 * \return
 *   See \ref shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_synced_counters_timestamp_ns_get(
    int unit,
    uint64 *timestamp_ns)
{
    uint32 entry_handle_id;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_TOD, &entry_handle_id));
    dbal_value_field64_request(unit, entry_handle_id, DBAL_FIELD_TIMESTAMP_NS, INST_SINGLE, timestamp_ns);
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, entry_handle_id, DBAL_COMMIT));

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -  Start the collection of the data for ICMG synchronized counters.
 */
/**
 * \brief -
 * Start or stop (and reset) the collection of the data for ICMG synchronized counters.
 *
 * \param [in] unit -  Unit-ID
 * \param [in] source_type -  Type of Synchronous Counters mechanism
 * \param [in] is_start -  If TRUE start, if FALSE stop.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static shr_error_e
dnx_instru_synced_counters_config_hw_count_start_stop(
    int unit,
    bcm_instru_synced_counters_source_type_t source_type,
    int is_start)
{
    uint32 setting_handle_id;
    uint32 time_handle_id;
    uint32 ctrl_handle_id;
    uint64 tod_1588;
    dbal_tables_e setting_dbal_table;
    int set_ethu;
    int init_set_value;
    int init_unset_value;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    switch (source_type)
    {
        case bcmInstruSyncedCountersTypeIcgm:
        {
            setting_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_SETTING_ICGM;
            set_ethu = FALSE;
            init_set_value = TRUE;
            init_unset_value = FALSE;
            break;
        }
        case bcmInstruSyncedCountersTypeNif:
        {
            setting_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_SETTING_NIF;
            set_ethu = TRUE;
            init_set_value = FALSE;
            init_unset_value = TRUE;
            break;
        }
        default:
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d.\n", source_type);
        }
    }

    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, setting_dbal_table, &setting_handle_id));
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_SYNCED_COUNTERS_CTRL, &ctrl_handle_id));
    dbal_entry_key_field32_set(unit, ctrl_handle_id, DBAL_FIELD_SOURCE_TYPE, source_type);

    if (set_ethu)
    {
        dbal_entry_key_field32_range_set(unit, setting_handle_id, DBAL_FIELD_CORE_ID, 0,
                                         dnx_data_device.general.nof_cores_get(unit) - 1);
        dbal_entry_key_field32_range_set(unit, setting_handle_id, DBAL_FIELD_ETHU, 0,
                                         dnx_data_nif.eth.ethu_nof_per_core_get(unit) - 1);
    }

    if (is_start)
    {
        /** Set getting the time*/
        SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_TOD, &time_handle_id));
        dbal_value_field64_request(unit, time_handle_id, DBAL_FIELD_TOD_1588, INST_SINGLE, &tod_1588);

        /** Clear done state*/
        dbal_entry_value_field8_set(unit, ctrl_handle_id, DBAL_FIELD_CLEAR_DONE_STATE, INST_SINGLE, FALSE);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, ctrl_handle_id, DBAL_COMMIT));
        /** Reset the setting*/
        dbal_entry_value_field8_set(unit, setting_handle_id, DBAL_FIELD_SYNC_COUNTERS_INIT, INST_SINGLE,
                                    init_unset_value);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, setting_handle_id, DBAL_COMMIT));
        /** Reset the CTRL*/
        dbal_entry_value_field8_set(unit, ctrl_handle_id, DBAL_FIELD_CLEAR_DONE_STATE, INST_SINGLE, TRUE);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, ctrl_handle_id, DBAL_COMMIT));

        /** Get the time*/
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, time_handle_id, DBAL_COMMIT));
    }
    else
    {
        uint64 minimum_interval;
        uint32 minimum_sleep_usec = 1;
        COMPILER_64_SET(minimum_interval, 0, 1);
        /*
         * Set the CGM counters to init.
         */
        dbal_entry_value_field8_set(unit, setting_handle_id, DBAL_FIELD_SYNC_COUNTERS_INIT, INST_SINGLE,
                                    init_set_value);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, setting_handle_id, DBAL_COMMIT));
        /*
         * Change the ECI pulse to be non continuous with low interval, so that it would enter the DONE state.
         * We can instead use dbal_entry_value_field8_set(unit, ctrl_handle_id, DBAL_FIELD_ENABLE, INST_SINGLE, FALSE);
         * but it causes to lose a cycle.
         */
        dbal_entry_value_field64_set(unit, ctrl_handle_id, DBAL_FIELD_INTERVAL_PERIOD, INST_SINGLE, minimum_interval);
        dbal_entry_value_field8_set(unit, ctrl_handle_id, DBAL_FIELD_IS_CONTINUOUS, INST_SINGLE, FALSE);
        SHR_IF_ERR_EXIT(dbal_entry_commit(unit, ctrl_handle_id, DBAL_COMMIT));
        /*
         * Sleep to ensure we reach the end of the cycle before clearing done state.
         */
        sal_usleep(minimum_sleep_usec);
    }

    /*
     * Set the SW state.
     */
    if (is_start)
    {
        switch (source_type)
        {
            case bcmInstruSyncedCountersTypeIcgm:
            {
                int core_index;
                int nof_cores = dnx_data_device.general.nof_cores_get(unit);

                SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.sync_counters_started.set(unit, TRUE));
                SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.tod_1588_timestamp_start.set(unit, tod_1588));
                for (core_index = 0; core_index < nof_cores; core_index++)
                {
                    SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.per_core_info.
                                    record_last_read_nof.set(unit, core_index, 0));
                }
                break;
            }
            case bcmInstruSyncedCountersTypeNif:
            {
                int core_index;
                int ethu_index;
                int lane_index;
                int nof_cores = dnx_data_device.general.nof_cores_get(unit);
                int nof_ethu_per_core = dnx_data_nif.eth.ethu_nof_per_core_get(unit);
                int nof_lanes_per_ethu = dnx_data_nif.eth.max_nof_lanes_in_ethu_get(unit);

                SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.sync_counters_started.set(unit, TRUE));
                SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.tod_1588_timestamp_start.set(unit, tod_1588));
                for (core_index = 0; core_index < nof_cores; core_index++)
                {
                    for (ethu_index = 0; ethu_index < nof_ethu_per_core; ethu_index++)
                    {
                        for (lane_index = 0; lane_index < nof_lanes_per_ethu; lane_index++)
                        {
                            SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.per_ethu_info.
                                            record_last_read_nof.set(unit, core_index, ethu_index, lane_index, 0));
                        }
                    }
                }
                break;
            }
            default:
            {
                SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d.\n", source_type);
            }
        }

    }
    else
    {
        switch (source_type)
        {
            case bcmInstruSyncedCountersTypeIcgm:
            {
                SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.sync_counters_started.set(unit, FALSE));
                break;
            }
            case bcmInstruSyncedCountersTypeNif:
            {
                SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.sync_counters_started.set(unit, FALSE));
                break;
            }
            /** coverity[dead_error_begin:FALSE]  */
            default:
            {
                SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d.\n", source_type);
            }
        }

    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API to configure and enable/disable synchronous instrumentation counters per type
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags -  Flags
 * \param [in] source_type -  Type of Synchronous Counters mechanism
 * \param [in] config -  Configuration structure for Synchronous Counters mechanism
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
int
bcm_dnx_instru_synced_counters_config_set(
    int unit,
    uint32 flags,
    bcm_instru_synced_counters_source_type_t source_type,
    bcm_instru_synced_counters_config_t * config)
{
    uint8 enable = 0;
    uint8 is_continuous = 0;
    uint64 start_time;
    uint64 interval_period;
    uint16 nof_intervals = 0;
    uint64 timestamp;
    uint64 immediate_start;
    dnxcmn_time_t time_src;
    dnxcmn_time_t time_dest;
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    COMPILER_64_ZERO(start_time);
    COMPILER_64_ZERO(interval_period);
    COMPILER_64_ZERO(timestamp);

    /** Verify input parameters */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_verify(unit, flags, source_type, config, TRUE));

    enable = (config->enable == 0) ? FALSE : TRUE;

    /*
     * Init the counters.
     * If enable is TRUE, we will start the counters later.
     */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_hw_count_start_stop(unit, source_type, FALSE));

    if (enable == TRUE)
    {
        /** Set start time */
        COMPILER_64_SET(immediate_start, -1, -1);
        if (COMPILER_64_EQ(config->start_time, immediate_start))
        {
            SHR_IF_ERR_EXIT(dnx_instru_synced_counters_timestamp_ns_get(unit, &timestamp));
            /*
             * Add one ms to the current timestamp to compensate the delay for setting it to HW
             * Timestamp is in nanoseconds, so convert 1 ms to ns and add it.
             */
            COMPILER_64_SET(time_src.time, 0, 1);
            time_src.time_units = DNXCMN_TIME_UNIT_MILISEC;
            SHR_IF_ERR_EXIT(dnxcmn_time_units_convert(unit, &time_src, DNXCMN_TIME_UNIT_NSEC, &time_dest));
            COMPILER_64_ADD_64(timestamp, time_dest.time);
            COMPILER_64_COPY(start_time, timestamp);
        }

        /** Set interval period */
        COMPILER_64_COPY(interval_period, config->period);

        /** Set number of intervals - eventor collection nof_interval=1, otherwise, nof_interval=max */
        nof_intervals =
            (config->is_eventor_collection == TRUE) ? 1 : dnx_data_instru.synced_counters.max_nof_intervals_get(unit);

        is_continuous = (config->is_continuous == 0) ? FALSE : TRUE;
    }

    /** Set the Synced counters configuration to HW */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_hw_set
                    (unit, source_type, enable, start_time, interval_period, nof_intervals, is_continuous));

    if (enable)
    {
        SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_hw_count_start_stop(unit, source_type, TRUE));
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API to get synchronous instrumentation counters configuration per type
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags -  Flags
 * \param [in] source_type -  Type of Synchronous Counters mechanism
 * \param [out] config -  Configuration structure for Synchronous Counters mechanism
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
int
bcm_dnx_instru_synced_counters_config_get(
    int unit,
    uint32 flags,
    bcm_instru_synced_counters_source_type_t source_type,
    bcm_instru_synced_counters_config_t * config)
{
    uint8 enable;
    uint64 start_time;
    uint64 interval_period;
    uint16 nof_intervals;
    uint8 is_continuous;
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    COMPILER_64_ZERO(start_time);
    COMPILER_64_ZERO(interval_period);

    /** Verify input parameters */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_verify(unit, flags, source_type, config, FALSE));

    /** Initialize the output structure. */
    bcm_instru_synced_counters_config_t_init(config);

    /** Get the Synced counters configuration from HW */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_hw_get
                    (unit, source_type, &enable, &start_time, &interval_period, &nof_intervals, &is_continuous));

    /** Get start time */
    COMPILER_64_COPY(config->start_time, start_time);

    /** Get interval period */
    COMPILER_64_COPY(config->period, interval_period);

    /** Get is_eventor_collection - eventor collection nof_interval=1, otherwise, nof_interval=max */
    config->is_eventor_collection = (nof_intervals == 1) ? TRUE : FALSE;

    /** Get is_continuous */
    config->is_continuous = is_continuous;

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Function to get the what synchronized counters records are needed to be read.
 *
 * \param [in] unit -  Unit-ID
 * \param [in] nof_written_cyc -  The number of records read in HW, cyclical by nof_intervals_counter.
 * \param [in] last_nof_record_read - The number of records written during the previous read.
 * \param [in] start_time - The time when the recording started (TOD 1588).
 * \param [in] current_time - Current time (TOD 1588).
 * \param [in] interval_period_nanoseconds - The periods in nanoseconds between writes.
 * \param [in] nof_intervals_buffer - The number or intervals written before they are overwritten cyclically.
 * \param [in] nof_intervals_counter - One above the maximum number of recorded number of intervals kept in HW,
 *                                     before wrapping around.
 * \param [in] nof_periods_to_skip - The number of periods after the last write we do not try to read,
 *                                   fearing the may be written to while we read.
 * \param [out] first_record_absolute_index -  The first record to be read, as index from the start.
 * \param [out] first_record_index -  The first record to be read, as index in the cyclical array.
 * \param [out] num_records_read -  Number of records to be read.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static int
dnx_instru_synced_counters_records_continuous_records_to_read(
    int unit,
    uint32 nof_written_cyc,
    uint32 last_nof_record_read,
    uint64 start_time,
    uint64 current_time,
    uint64 interval_period_nanoseconds,
    uint32 nof_intervals_buffer,
    uint32 nof_intervals_counter,
    uint32 nof_periods_to_skip,
    uint32 *first_record_absolute_index,
    uint32 *first_record_index,
    uint32 *num_records_read)
{
    int period_precision_for_tod = 2;
    uint32 nof_periods_from_start;
    SHR_FUNC_INIT_VARS(unit);

    /*
     * Find the number of writes from the beginning.
     */
    {
        uint64 time_from_start_nanoseconds;
        uint64 nof_intervals_total_uint64;
        uint32 estimated_nof_periods_from_start;
        uint32 expected_nof_writes;
        int expectation_mismatch;

        /*
         * Estimate the number of periods that passed since the beginning using TOD.
         */
        SHR_IF_ERR_EXIT(utilex_tod_1588_diff_nanoseconds(unit, start_time, current_time, &time_from_start_nanoseconds));
        COMPILER_64_COPY(nof_intervals_total_uint64, time_from_start_nanoseconds);
        COMPILER_64_UDIV_64(nof_intervals_total_uint64, interval_period_nanoseconds);
        estimated_nof_periods_from_start = COMPILER_64_LO(nof_intervals_total_uint64);
        /** Verify that we are not beyond the 32 bit boundary.*/
        if (COMPILER_64_HI(nof_intervals_total_uint64) != 0)
        {
            SHR_ERR_EXIT(_SHR_E_TIMEOUT, "More than 2^32 periods passed, not supported.\n");
        }
        COMPILER_64_ADD_32(nof_intervals_total_uint64, period_precision_for_tod);
        if (COMPILER_64_HI(nof_intervals_total_uint64) != 0)
        {
            SHR_ERR_EXIT(_SHR_E_TIMEOUT, "More than 2^32 periods may have passed, not supported.\n");
        }
        COMPILER_64_ADD_32(nof_intervals_total_uint64, nof_intervals_buffer);
        if (COMPILER_64_HI(nof_intervals_total_uint64) != 0)
        {
            SHR_ERR_EXIT(_SHR_E_TIMEOUT, "Number of periods passed too close to 2^32 period, not supported.\n");
        }

        /*
         * Verify the precision of the estimation from the start time.
         * If expected_nof_writes is within the tolerated error, align to nof_written_cyc.
         */
        expected_nof_writes = estimated_nof_periods_from_start % nof_intervals_counter;
        if (expected_nof_writes > nof_written_cyc)
        {
            expectation_mismatch = expected_nof_writes - nof_written_cyc;
        }
        else
        {
            expectation_mismatch = nof_written_cyc - expected_nof_writes;
        }
        if (expectation_mismatch > period_precision_for_tod)
        {
            SHR_ERR_EXIT(_SHR_E_INTERNAL, "Expected last write to be %u, actually %u, max tolerance is %u.\n",
                         expected_nof_writes, nof_written_cyc, period_precision_for_tod);
        }
        /** Fix the actual number of periods to be aligned to nof_written_cyc. */
        nof_periods_from_start = estimated_nof_periods_from_start + nof_written_cyc - expected_nof_writes;
    }

    if (nof_periods_from_start < last_nof_record_read)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Calculated %u periods from the start, but last read it was %u.\n",
                     nof_periods_from_start, last_nof_record_read);
    }

    /*
     * Get the number of records to read.
     */
    (*num_records_read) = nof_periods_from_start - last_nof_record_read;
    if ((*num_records_read) > (nof_intervals_buffer - nof_periods_to_skip))
    {
        (*num_records_read) = nof_intervals_buffer - nof_periods_to_skip;
    }
    if ((*num_records_read) > nof_periods_from_start)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Calculated %u periods from the start, but reading %u.\n",
                     nof_periods_from_start, (*num_records_read));
    }
    /*
     * If we read records
     */
    if ((*num_records_read) > 0)
    {
        (*first_record_absolute_index) = nof_periods_from_start - (*num_records_read);
        (*first_record_index) = (*first_record_absolute_index) % nof_intervals_buffer;
    }

exit:
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Function to get the synchronized counters.
 *
 * \param [in] unit -  Unit-ID
 * \param [in] source_type -  Where to get the counters from.
 * \param [in] core_id_in -  The core to read from, if we do not have a gport.
 * \param [in] gport -  If record_source_type is port dependent, the port to read for.
 * \param [out] record_arr -  Array to fill the counter records.
 * \param [out] nof_records_read -  Number of elements written to in record_arr.
 * \param [out] couter_types -  Array of counter types read within record_arr.
 * \param [out] nof_counter_types -  Number of elements in couter_types.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
static int
dnx_instru_synced_counters_records_hw_get(
    int unit,
    bcm_instru_synced_counters_source_type_t source_type,
    bcm_core_t core_id_in,
    bcm_gport_t gport,
    bcm_instru_synced_counters_record_t record_arr[BCM_INSTRU_SYNCED_COUNTERS_RECORDS_MAX],
    int *nof_records_read,
    bcm_instru_synced_counters_type_t couter_types[BCM_INSTRU_SYNCED_COUNTERS_STATS_MAX],
    int *nof_counter_types)
{
    bcm_core_t core_id;
    uint64 tod_1588;
    uint64 tod_1588_after;
    uint64 sw_state_tod_1588_start;
    uint64 time_diff_nanoseconds;
    uint64 time_diff_maximum_read_time;
    uint8 enable;
    uint64 start_time;
    uint64 interval_period_nanoseconds;
    uint16 nof_intervals_config;
    int nof_intervals_hw = dnx_data_instru.synced_counters.max_nof_intervals_get(unit);
    int nof_intervals_counter = dnx_data_instru.synced_counters.cgm_write_counter_wrap_around_get(unit);
    uint8 is_continuous;
    uint32 tod_entry_handle_id;
    uint32 last_count_entry_handle_id;
    uint32 record_entry_handle_id;
    dbal_tables_e last_count_dbal_table;
    dbal_tables_e record_dbal_table;
    /** Initializations to appease the compiler.*/
    uint32 first_record = 0;
    uint32 first_record_absolute_index = 0;
    uint32 num_records_read = 0xFFFFFFFF;
    uint32 sw_state_last_nof_records_read;
    uint8 sw_state_last_info_set;
    /** Tolerance numbers.*/
    int nof_periods_to_skip = 2;
    int maximum_periods_to_pass_during_read = 1;
    int record_index;
    uint32 nof_records_written_in_hw;
    uint64
        retrieved_records[DNX_DATA_MAX_INSTRU_SYNCED_COUNTERS_MAX_NOF_INTERVALS][BCM_INSTRU_SYNCED_COUNTERS_STATS_MAX];
    uint64 dbal_records_get[BCM_INSTRU_SYNCED_COUNTERS_STATS_MAX] = { 0 };
    int nof_counters_per_record;
    int counter_index;
    uint32 bytes_in_word = dnx_data_instru.synced_counters.max_nof_intervals_get(unit);
    int set_ethu;
    /** Initialization to appease the compiler.*/
    int ethu_id = -1;
    int port_in_ethu = -1;
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);

    switch (source_type)
    {
        case bcmInstruSyncedCountersTypeIcgm:
        {
            set_ethu = FALSE;
            core_id = core_id_in;
            last_count_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_LAST_COUNT_ICGN;
            record_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_RECORDS_ICGM;
            break;
        }
        case bcmInstruSyncedCountersTypeNif:
        {
            dnx_algo_port_ethu_access_info_t ethu_info;
            bcm_port_t logical_port;

            set_ethu = TRUE;
            /** Get the logical port from the gport. */
            if (BCM_GPORT_IS_SET(gport))
            {
                logical_port = BCM_GPORT_LOCAL_GET(gport);
            }
            else
            {
                logical_port = gport;
            }
            SHR_IF_ERR_EXIT(dnx_algo_port_ethu_access_info_get(unit, logical_port, &ethu_info));
            core_id = ethu_info.core;
            ethu_id = ethu_info.ethu_id_in_core;
            /** The counters are on the first lane of the port.*/
            port_in_ethu = ethu_info.first_lane_in_port;
            if (ethu_info.imb_type == imbDispatchTypeImb_cdu)
            {
                record_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_RECORDS_NIF_CDU;
            }
            else if (ethu_info.imb_type == imbDispatchTypeImb_clu)
            {
                record_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_RECORDS_NIF_CLU;
            }
            else
            {
                SHR_ERR_EXIT(_SHR_E_INTERNAL, "Unsupported pm_type=%d for port=%d.\n", ethu_info.imb_type,
                             logical_port);
            }
            last_count_dbal_table = DBAL_TABLE_INST_SYNCED_COUNTERS_LAST_COUNT_NIF;

            break;
        }
        default:
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source_type %d.\n", source_type);
        }
    }

    /*
     * Get the last read time from SW state.
     */
    switch (source_type)
    {
        case bcmInstruSyncedCountersTypeIcgm:
        {
            SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.sync_counters_started.get(unit, &sw_state_last_info_set));
            SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.per_core_info.
                            record_last_read_nof.get(unit, core_id, &sw_state_last_nof_records_read));
            SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.
                            tod_1588_timestamp_start.get(unit, &sw_state_tod_1588_start));
            break;
        }
        case bcmInstruSyncedCountersTypeNif:
        {
            SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.sync_counters_started.get(unit, &sw_state_last_info_set));
            SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.per_ethu_info.
                            record_last_read_nof.get(unit, core_id, ethu_id, port_in_ethu,
                                                     &sw_state_last_nof_records_read));
            SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.
                            tod_1588_timestamp_start.get(unit, &sw_state_tod_1588_start));
            break;
        }
        default:
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source_type %d.\n", source_type);
        }
    }
    if (!sw_state_last_info_set)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Synchronized counters not configured for source type %d.\n", source_type);
    }

    /** Get the period.*/
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_config_hw_get
                    (unit, source_type, &enable, &start_time, &interval_period_nanoseconds,
                     &nof_intervals_config, &is_continuous));
    if (enable == FALSE)
    {
        SHR_ERR_EXIT(_SHR_E_CONFIG, "Synchronized counters collection (source_type %d ) "
                     "not configured.\n", source_type);
    }
    if (COMPILER_64_IS_ZERO(interval_period_nanoseconds))
    {
        SHR_ERR_EXIT(_SHR_E_CONFIG, "Synchronized counters (source type %d) " "collection has 0 \n", source_type);
    }
    if (nof_intervals_config == 1)
    {
        SHR_ERR_EXIT(_SHR_E_CONFIG, "Synchronized counters (source type %d) "
                     "was configured as is_eventor.\n", source_type);
    }
    if (nof_intervals_config <= 1)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Synchronized counters (source type %d) "
                     "has number of intervals %d, cannot process.\n", source_type, nof_intervals_config);
    }
    if (nof_intervals_config != nof_intervals_hw)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Synchronized counters (source type %d) "
                     "has number of intervals %d, must be %d.\n", source_type, nof_intervals_config, nof_intervals_hw);
    }

    /*
     * Count the number of counters.
     */
    for (counter_index = 0; counter_index < BCM_INSTRU_SYNCED_COUNTERS_STATS_MAX; counter_index++)
    {
        if (dnx_data_instru.synced_counters.counters_info_get(unit, counter_index, source_type)->valid == FALSE)
        {
            break;
        }
    }
    nof_counters_per_record = counter_index;

    /** Sanity check. */
    if (nof_intervals_hw <= nof_periods_to_skip)
    {
        SHR_ERR_EXIT(_SHR_E_INTERNAL, "nof_intervals_hw (%u) must be bigger than nof_periods_to_skip (%u).\n",
                     nof_intervals_hw, nof_periods_to_skip);
    }

    /*
     * Prepare getting the number of writes and time from HW.
     */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, DBAL_TABLE_INST_TOD, &tod_entry_handle_id));
    dbal_value_field64_request(unit, tod_entry_handle_id, DBAL_FIELD_TOD_1588, INST_SINGLE, &tod_1588);
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, last_count_dbal_table, &last_count_entry_handle_id));
    dbal_entry_key_field32_set(unit, last_count_entry_handle_id, DBAL_FIELD_CORE_ID, core_id);
    dbal_value_field32_request(unit, last_count_entry_handle_id, DBAL_FIELD_NOF_WRITES, INST_SINGLE,
                               &nof_records_written_in_hw);

    /*
     * Prepare getting the counters in the records.
     */
    SHR_IF_ERR_EXIT(DBAL_HANDLE_ALLOC(unit, record_dbal_table, &record_entry_handle_id));
    dbal_entry_key_field32_set(unit, record_entry_handle_id, DBAL_FIELD_CORE_ID, core_id);

    /** Setting the ETHU*/
    if (set_ethu)
    {
        dbal_entry_key_field32_set(unit, last_count_entry_handle_id, DBAL_FIELD_ETHU, ethu_id);
        dbal_entry_key_field32_set(unit, record_entry_handle_id, DBAL_FIELD_ETHU, ethu_id);
        dbal_entry_key_field32_set(unit, record_entry_handle_id, DBAL_FIELD_PHYS_PORT_IN_ETHU, port_in_ethu);
    }

    /*
     * Get the TOD and the last written record.
     */
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, tod_entry_handle_id, DBAL_COMMIT));
    SHR_IF_ERR_EXIT(dbal_entry_get(unit, last_count_entry_handle_id, DBAL_COMMIT));

    /*
     * Get the records from HW.
     */
    if (is_continuous)
    {
        /*
         * For is_continuous, we first get all potential records (all records except the nof_periods_to_skip).
         * We will later find out which of those records we'll need.
         */
        for (record_index = (nof_records_written_in_hw + nof_periods_to_skip) % nof_intervals_hw;
             record_index != nof_records_written_in_hw % nof_intervals_hw;
             record_index = (record_index + 1) % nof_intervals_hw)
        {
            dbal_entry_key_field32_set(unit, record_entry_handle_id, DBAL_FIELD_COUNTERS_RECORD_INDEX, record_index);
            for (counter_index = 0; counter_index < nof_counters_per_record; counter_index++)
            {
                dbal_fields_e dbal_field =
                    dnx_data_instru.synced_counters.counters_info_get(unit, counter_index, source_type)->dbal_field;
                dbal_value_field64_request(unit, record_entry_handle_id, dbal_field, INST_SINGLE,
                                           &dbal_records_get[counter_index]);
            }
            SHR_IF_ERR_EXIT(dbal_entry_get(unit, record_entry_handle_id, DBAL_COMMIT));
            sal_memcpy(retrieved_records[record_index], dbal_records_get, sizeof(retrieved_records[0]));
        }
    }
    else
    {
        /*
         * If not is_continuous, read only the relevant records.
         */
        first_record = sw_state_last_nof_records_read;
        first_record_absolute_index = first_record;
        num_records_read = nof_records_written_in_hw - sw_state_last_nof_records_read;
        if (nof_records_written_in_hw < sw_state_last_nof_records_read)
        {
            SHR_ERR_EXIT(_SHR_E_INTERNAL, "Synchronized counters not continuous, but "
                         "number of writes (%d) is smaller than the previous number of writes (%d).\n",
                         nof_records_written_in_hw, sw_state_last_nof_records_read);
        }
        if (first_record > nof_intervals_hw ||
            ((num_records_read != 0) && ((first_record + num_records_read - 1) >= nof_intervals_hw)))
        {
            SHR_ERR_EXIT(_SHR_E_INTERNAL, "Synchronized counters calculated too many records to read "
                         "(%d to %d, and there are only %d records).\n",
                         first_record, first_record + num_records_read - 1, nof_intervals_hw);
        }
        for (record_index = first_record; (record_index - first_record) < num_records_read; record_index++)
        {
            dbal_entry_key_field32_set(unit, record_entry_handle_id, DBAL_FIELD_COUNTERS_RECORD_INDEX, record_index);
            for (counter_index = 0; counter_index < nof_counters_per_record; counter_index++)
            {
                dbal_fields_e dbal_field =
                    dnx_data_instru.synced_counters.counters_info_get(unit, counter_index, source_type)->dbal_field;
                dbal_value_field64_request(unit, record_entry_handle_id, dbal_field, INST_SINGLE,
                                           &dbal_records_get[counter_index]);
            }
            SHR_IF_ERR_EXIT(dbal_entry_get(unit, record_entry_handle_id, DBAL_COMMIT));
            sal_memcpy(retrieved_records[record_index], dbal_records_get, sizeof(retrieved_records[0]));
        }
    }

    /*
     * If is_continuous, make sure we read the records fast enough, as the are overwritten cyclically.
     */
    if (is_continuous)
    {
        uint32 nof_records_written_in_hw_after;

        /*
         * Get the TOD and the last written record after reading and check that we read it in time.
         */
        dbal_value_field64_request(unit, tod_entry_handle_id, DBAL_FIELD_TOD_1588, INST_SINGLE, &tod_1588_after);
        dbal_value_field32_request(unit, last_count_entry_handle_id, DBAL_FIELD_NOF_WRITES, INST_SINGLE,
                                   &nof_records_written_in_hw_after);
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, last_count_entry_handle_id, DBAL_COMMIT));
        SHR_IF_ERR_EXIT(dbal_entry_get(unit, tod_entry_handle_id, DBAL_COMMIT));

        if (((nof_records_written_in_hw_after - nof_records_written_in_hw + nof_intervals_hw) % nof_intervals_hw) >
            maximum_periods_to_pass_during_read)
        {
            SHR_ERR_EXIT(_SHR_E_TIMEOUT, "Synchronized counters progressed more than %d periods during read "
                         "TOD before read (%ds,%dns), TOD after read (%ds,%dns). nof_writes before read %u, "
                         "nof_writes after read %u.\n",
                         maximum_periods_to_pass_during_read,
                         COMPILER_64_HI(tod_1588), COMPILER_64_LO(tod_1588),
                         COMPILER_64_HI(tod_1588_after), COMPILER_64_LO(tod_1588_after),
                         nof_records_written_in_hw, nof_records_written_in_hw_after);
        }
        SHR_IF_ERR_EXIT(utilex_tod_1588_diff_nanoseconds(unit, tod_1588, tod_1588_after, &time_diff_nanoseconds));
        COMPILER_64_COPY(time_diff_maximum_read_time, interval_period_nanoseconds);
        COMPILER_64_UMUL_32(time_diff_maximum_read_time, maximum_periods_to_pass_during_read);
        if (COMPILER_64_GT(time_diff_nanoseconds, time_diff_maximum_read_time))
        {
            SHR_ERR_EXIT(_SHR_E_TIMEOUT, "Synchronized counters progressed more than %d periods during read. "
                         "TOD before read (%ds,%dns), TOD after read (%ds,%dns).\n",
                         maximum_periods_to_pass_during_read,
                         COMPILER_64_HI(tod_1588), COMPILER_64_LO(tod_1588),
                         COMPILER_64_HI(tod_1588_after), COMPILER_64_LO(tod_1588_after));
        }
    }

    /*
     * If is_continuous, find what records need to be read.
     */
    if (is_continuous)
    {
        SHR_IF_ERR_EXIT(dnx_instru_synced_counters_records_continuous_records_to_read
                        (unit, nof_records_written_in_hw, sw_state_last_nof_records_read, sw_state_tod_1588_start,
                         tod_1588, interval_period_nanoseconds, nof_intervals_hw, nof_intervals_counter,
                         nof_periods_to_skip, &first_record_absolute_index, &first_record, &num_records_read));
    }

    /*
     * If there is nothing to read, don't change any SW STATE. Otherwise, return the records.
     */
    if (num_records_read > 0)
    {
        /*
         * Write to the output array.
         */
        /** Sanity check*/
        if (((*nof_records_read) > nof_intervals_hw) ||
            (((*nof_records_read) > (nof_intervals_hw - nof_periods_to_skip)) && is_continuous))
        {
            SHR_ERR_EXIT(_SHR_E_INTERNAL, "More intervals than existing were calculated.\n");
        }

        for (record_index = 0; record_index < num_records_read; record_index++)
        {
            uint64 time_change_nanoseconds;
            uint32 record_nof_periods;

            /*
             * Copy the counters to the output array.
             */
            sal_memcpy(record_arr[record_index].value_arr,
                       retrieved_records[(record_index + first_record) % nof_intervals_hw],
                       sizeof(retrieved_records[0]));

            /** Write the TOD of the record. */
            record_nof_periods = first_record_absolute_index + 1 + record_index;
            COMPILER_64_COPY(time_change_nanoseconds, interval_period_nanoseconds);
            COMPILER_64_UMUL_32(time_change_nanoseconds, record_nof_periods);
            SHR_IF_ERR_EXIT(utilex_tod_1588_add_nanoseconds
                            (unit, FALSE, sw_state_tod_1588_start, time_change_nanoseconds,
                             &(record_arr[record_index].estimated_time_of_day)));

            /*
             * Convert words into bytes
             */
            for (counter_index = 0; counter_index < nof_counters_per_record; counter_index++)
            {
                if (dnx_data_instru.synced_counters.
                    counters_info_get(unit, counter_index, source_type)->words_to_bytes_conv_needed)
                {
                    uint64 old_value;
                    COMPILER_64_COPY(old_value, record_arr[record_index].value_arr[counter_index]);
                    COMPILER_64_UMUL_32(record_arr[record_index].value_arr[counter_index], bytes_in_word);
                    if (COMPILER_64_GT(old_value, record_arr[record_index].value_arr[counter_index]))
                    {
                        SHR_ERR_EXIT(_SHR_E_INTERNAL, "Value or record %d (%u,%u) in words is to "
                                     "large to be converted into bytes (by multiplying by %d).\n",
                                     counter_index, COMPILER_64_HI(old_value), COMPILER_64_LO(old_value),
                                     bytes_in_word);
                    }
                }
            }
        }

        /*
         * Write to SW state the last record that was read.
         */
        switch (source_type)
        {
            case bcmInstruSyncedCountersTypeIcgm:
            {
                SHR_IF_ERR_EXIT(instru_sync_counters.icgm_countes.per_core_info.record_last_read_nof.set(unit, core_id,
                                                                                                         first_record_absolute_index
                                                                                                         +
                                                                                                         num_records_read));
                break;
            }
            case bcmInstruSyncedCountersTypeNif:
            {
                SHR_IF_ERR_EXIT(instru_sync_counters.nif_countes.per_ethu_info.
                                record_last_read_nof.set(unit, core_id, ethu_id, port_in_ethu,
                                                         first_record_absolute_index + num_records_read));
                break;
            }
            /** coverity[dead_error_begin:FALSE]  */
            default:
            {
                SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source_type %d.\n", source_type);
            }
        }
    }

    /*
     * Provide the counter types.
     */
    sal_memset(couter_types, 0x0, sizeof(couter_types[0]) * BCM_INSTRU_SYNCED_COUNTERS_STATS_MAX);
    for (counter_index = 0; counter_index < nof_counters_per_record; counter_index++)
    {
        couter_types[counter_index].counter_type =
            dnx_data_instru.synced_counters.counters_info_get(unit, counter_index, source_type)->bcm_counter_type;
        couter_types[counter_index].counter_index =
            dnx_data_instru.synced_counters.counters_info_get(unit, counter_index, source_type)->counter_index;
    }
    (*nof_counter_types) = nof_counters_per_record;

    (*nof_records_read) = num_records_read;

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * Function to verify the input parameters of API bcm_instru_synced_counters_records_get.
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags -  Flags
 * \param [in] key -  Structure indicating what counters to get
 * \param [in] data -  Structure to place the the counters' value in.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
int
dnx_instru_synced_counters_records_get_verify(
    int unit,
    uint32 flags,
    bcm_instru_synced_counters_records_key_t * key,
    bcm_instru_synced_counters_data_t * data)
{
    SHR_FUNC_INIT_VARS(unit);
    DBAL_FUNC_INIT_VARS(unit);
    SHR_NULL_CHECK(key, _SHR_E_PARAM, "key");
    SHR_NULL_CHECK(data, _SHR_E_PARAM, "data");

    /** Verify input flags */
    SHR_VAL_VERIFY(flags, 0, _SHR_E_PARAM, "Unsupported flags for getting synchronized counters!\n");

    /** Verify input source type.*/
    if (key->source_type == bcmInstruSyncedCountersTypeCount)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "source_type must be set. Invalid source_type.\n");
    }
    if (key->source_type != bcmInstruSyncedCountersTypeIcgm && key->source_type != bcmInstruSyncedCountersTypeNif)
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d for synchronized counters configuration!\n",
                     key->source_type);
    }

    /**Core is only relevant for ICGM, for NIF gport is used to get the core.*/
    if (key->source_type == bcmInstruSyncedCountersTypeIcgm)
    {
        /*
         * We only support collecting the data for a single core, we do not support BCM_CORE_ALL.
         */
        DNXCMN_CORE_VALIDATE(unit, key->core_id, FALSE);
        if (key->gport != BCM_GPORT_INVALID)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Source type %d does not take gport as input.\n", key->source_type);
        }
    }

    /** GPORT is only relevant for NIF.*/
    if (key->source_type == bcmInstruSyncedCountersTypeNif)
    {
        /** Verify the gport.*/
        if (key->gport == BCM_GPORT_INVALID)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Source type %d requires gport to be set. Invalid gport.\n", key->source_type);
        }
        if (BCM_GPORT_IS_SET(key->gport) && !BCM_GPORT_IS_LOCAL(key->gport))
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Source type %d requires a local port, while gport is 0x%x.\n",
                         key->source_type, key->gport);
        }
        if (key->core_id != BCM_CORE_ALL)
        {
            SHR_ERR_EXIT(_SHR_E_PARAM, "Source type %d does not take core_id as input.\n", key->source_type);
        }
    }

    /** Verify that the source type has at least one counter.*/
    if (!(dnx_data_instru.synced_counters.counters_info_get(unit, 0, key->source_type)->valid))
    {
        SHR_ERR_EXIT(_SHR_E_PARAM, "Unsupported source type %d for synchronized "
                     "counters configuration on this device!\n", key->source_type);
    }

exit:
    DBAL_FUNC_FREE_VARS;
    SHR_FUNC_EXIT;
}

/**
 * \brief -
 * API to get the counter values of sync counters mechanism (nif or icgm, depending on the source_type)
 *
 * \param [in] unit -  Unit-ID
 * \param [in] flags -  Flags
 * \param [in] key -  The synchronous counters to be collected.
 * \param [out] data -  The structure to collect the data to.
 * \return
 *   See shr_error_e
 * \remark
 *   * None
 * \see
 *   * None
 */
int
bcm_dnx_instru_synced_counters_records_get(
    int unit,
    uint32 flags,
    bcm_instru_synced_counters_records_key_t * key,
    bcm_instru_synced_counters_data_t * data)
{
    SHR_FUNC_INIT_VARS(unit);
    DNX_ERR_RECOVERY_NOT_NEEDED(unit);

    /** Verify input parameters */
    SHR_INVOKE_VERIFY_DNX(dnx_instru_synced_counters_records_get_verify(unit, flags, key, data));

    /** Initialize the output*/
    bcm_instru_synced_counters_data_t_init(data);

    /*
     * Read the counters.
     */
    SHR_IF_ERR_EXIT(dnx_instru_synced_counters_records_hw_get
                    (unit, key->source_type, key->core_id, key->gport,
                     data->record_arr, &(data->nof_records), data->record_arr_counters_type, &(data->nof_counters)));

exit:
    SHR_FUNC_EXIT;
}

/* Periodic event configuration set */
int
bcm_dnx_instru_eventor_generate_periodic_set(
    int unit,
    uint32 flags,
    bcm_instru_eventor_periodic_source_t * source,
    bcm_instru_eventor_periodic_config_t * config)
{
    return BCM_E_UNAVAIL;
}

/* Periodic event configuration get */
int
bcm_dnx_instru_eventor_generate_periodic_get(
    int unit,
    uint32 flags,
    bcm_instru_eventor_periodic_source_t * source,
    bcm_instru_eventor_periodic_config_t * config)
{
    return BCM_E_UNAVAIL;
}
