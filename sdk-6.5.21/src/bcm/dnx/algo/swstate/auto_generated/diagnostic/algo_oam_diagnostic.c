/** \file algo/swstate/auto_generated/diagnostic/algo_oam_diagnostic.c
 *
 * sw state functions definitions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/algo_oam_diagnostic.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
/*
 * Global Variables
 */

extern algo_oam_sw_state_t * algo_oam_db_data[SOC_MAX_NUM_DEVICES];
/*
 * FUNCTIONs
 */

/*
 *
 * dump function for the variable algo_oam_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;
    SHR_IF_ERR_EXIT(algo_oam_db_oam_group_id_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_profile_id_ing_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_profile_id_eg_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_profile_id_ing_acc_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_profile_id_eg_acc_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_rmep_id_below_threshold_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_rmep_id_above_threshold_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_itmh_priority_profile_dump(unit, filters));
#ifdef BCM_DNX2_SUPPORT
    SHR_IF_ERR_EXIT(algo_oam_db_oam_mpls_pwe_exp_ttl_profile_dump(unit, filters));
#endif /*BCM_DNX2_SUPPORT*/
    SHR_IF_ERR_EXIT(algo_oam_db_oamp_punt_event_prof_template_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_sa_mac_msb_profile_template_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_eth_oam_tpid_profile_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_group_icc_profile_dump(unit, filters));
#ifdef BCM_DNX2_SUPPORT
    SHR_IF_ERR_EXIT(algo_oam_db_oam_mep_profile_dump(unit, filters));
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
    SHR_IF_ERR_EXIT(algo_oam_db_oam_da_mac_msb_profile_template_dump(unit, filters));
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
    SHR_IF_ERR_EXIT(algo_oam_db_oam_da_mac_lsb_profile_template_dump(unit, filters));
#endif /*BCM_DNX2_SUPPORT*/
    SHR_IF_ERR_EXIT(algo_oam_db_oam_default_mep_profiles_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_oam_trap_tcam_index_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_slm_oamp_measurement_period_dump(unit, filters));
    SHR_IF_ERR_EXIT(algo_oam_db_mpls_tp_mdl_ignore_dump(unit, filters));
    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_group_id
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_group_id_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_group_id") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_group_id\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_group_id.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_group_id: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_group_id: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_group_id);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_profile_id_ing
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_profile_id_ing_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_profile_id_ing") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_profile_id_ing\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_profile_id_ing.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_ing: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_ing: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_profile_id_ing);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_profile_id_eg
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_profile_id_eg_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_profile_id_eg") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_profile_id_eg\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_profile_id_eg.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_eg: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_eg: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_profile_id_eg);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_profile_id_ing_acc
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_profile_id_ing_acc_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_profile_id_ing_acc") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_profile_id_ing_acc\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_profile_id_ing_acc.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_ing_acc: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_ing_acc: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_profile_id_ing_acc);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_profile_id_eg_acc
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_profile_id_eg_acc_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_profile_id_eg_acc") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_profile_id_eg_acc\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_profile_id_eg_acc.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_eg_acc: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_profile_id_eg_acc: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_profile_id_eg_acc);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_rmep_id_below_threshold
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_rmep_id_below_threshold_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_rmep_id_below_threshold") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_rmep_id_below_threshold\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_rmep_id_below_threshold.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_rmep_id_below_threshold: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_rmep_id_below_threshold: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_rmep_id_below_threshold);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_rmep_id_above_threshold
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_rmep_id_above_threshold_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_rmep_id_above_threshold") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_rmep_id_above_threshold\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_rmep_id_above_threshold.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_rmep_id_above_threshold: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_rmep_id_above_threshold: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_rmep_id_above_threshold);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_itmh_priority_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_itmh_priority_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_itmh_priority_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_itmh_priority_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_itmh_priority_profile.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_itmh_priority_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_itmh_priority_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_itmh_priority_profile,
            dnx_oam_itmh_priority_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



#ifdef BCM_DNX2_SUPPORT
/*
 *
 * dump function for the variable oam_mpls_pwe_exp_ttl_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_mpls_pwe_exp_ttl_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_mpls_pwe_exp_ttl_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_mpls_pwe_exp_ttl_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_mpls_pwe_exp_ttl_profile.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_mpls_pwe_exp_ttl_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_mpls_pwe_exp_ttl_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_mpls_pwe_exp_ttl_profile,
            dnx_oam_oamp_v1_mpls_pwe_exp_ttl_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}
#endif /*BCM_DNX2_SUPPORT*/



/*
 *
 * dump function for the variable oamp_punt_event_prof_template
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oamp_punt_event_prof_template_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oamp_punt_event_prof_template") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oamp_punt_event_prof_template\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oamp_punt_event_prof_template.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oamp_punt_event_prof_template: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oamp_punt_event_prof_template: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oamp_punt_event_prof_template,
            dnx_oam_punt_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_sa_mac_msb_profile_template
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_sa_mac_msb_profile_template_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_sa_mac_msb_profile_template") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_sa_mac_msb_profile_template\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_sa_mac_msb_profile_template.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_sa_mac_msb_profile_template: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_sa_mac_msb_profile_template: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_sa_mac_msb_profile_template,
            dnx_oam_oamp_sa_mac_msb_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable eth_oam_tpid_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_eth_oam_tpid_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam eth_oam_tpid_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam eth_oam_tpid_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/eth_oam_tpid_profile.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","eth_oam_tpid_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","eth_oam_tpid_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->eth_oam_tpid_profile,
            dnx_oam_oamp_tpid_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_group_icc_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_group_icc_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_group_icc_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_group_icc_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_group_icc_profile.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_group_icc_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_group_icc_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_group_icc_profile,
            dnx_oam_group_icc_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



#ifdef BCM_DNX2_SUPPORT
/*
 *
 * dump function for the variable oam_mep_profile
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_mep_profile_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_mep_profile") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_mep_profile\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_mep_profile.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_mep_profile: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_mep_profile: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_mep_profile,
            dnx_algo_oamp_v1_mep_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}
#endif /*BCM_DNX2_SUPPORT*/



#ifdef BCM_DNX2_SUPPORT
/*
 *
 * dump function for the variable oam_da_mac_msb_profile_template
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_da_mac_msb_profile_template_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_da_mac_msb_profile_template") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_da_mac_msb_profile_template\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_da_mac_msb_profile_template.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_da_mac_msb_profile_template: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_da_mac_msb_profile_template: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_da_mac_msb_profile_template,
            dnx_oam_oamp_v1_da_mac_msb_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}
#endif /*BCM_DNX2_SUPPORT*/



#ifdef BCM_DNX2_SUPPORT
/*
 *
 * dump function for the variable oam_da_mac_lsb_profile_template
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_da_mac_lsb_profile_template_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_da_mac_lsb_profile_template") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_da_mac_lsb_profile_template\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_da_mac_lsb_profile_template.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_da_mac_lsb_profile_template: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_da_mac_lsb_profile_template: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_da_mac_lsb_profile_template,
            dnx_oam_oamp_v1_da_mac_lsb_profile_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}
#endif /*BCM_DNX2_SUPPORT*/



/*
 *
 * dump function for the variable oam_default_mep_profiles
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_default_mep_profiles_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_res_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_default_mep_profiles") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_default_mep_profiles\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_default_mep_profiles.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_default_mep_profiles: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_default_mep_profiles: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_RES_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_default_mep_profiles);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable oam_trap_tcam_index
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_oam_trap_tcam_index_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam oam_trap_tcam_index") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam oam_trap_tcam_index\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/oam_trap_tcam_index.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_trap_tcam_index: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","oam_trap_tcam_index: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->oam_trap_tcam_index,
            dnx_oam_oamp_oamp_trap_tcam_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable slm_oamp_measurement_period
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_slm_oamp_measurement_period_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "dnx_algo_template_t") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam slm_oamp_measurement_period") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam slm_oamp_measurement_period\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/slm_oamp_measurement_period.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","slm_oamp_measurement_period: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","slm_oamp_measurement_period: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        DNX_ALGO_TEMP_MNGR_PRINT(
            unit,
            ALGO_OAM_MODULE_ID,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->slm_oamp_measurement_period,
            dnx_slm_oamp_measurement_period_print_cb);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * dump function for the variable mpls_tp_mdl_ignore
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
algo_oam_db_mpls_tp_mdl_ignore_dump(int  unit,  dnx_sw_state_dump_filters_t  filters)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    if (dnx_sw_state_compare(filters.typefilter, "uint32") != TRUE)
    {
         SHR_EXIT();
    }

    if (dnx_sw_state_compare(filters.namefilter, "algo_oam mpls_tp_mdl_ignore") != TRUE)
    {
         SHR_EXIT();
    }

    if (filters.nocontent)
    {
         DNX_SW_STATE_PRINT(unit, "swstate algo_oam mpls_tp_mdl_ignore\n");
    }
    else
    {
        dnx_sw_state_dump_attach_file(
            unit,
            "algo_oam_db/mpls_tp_mdl_ignore.txt",
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","mpls_tp_mdl_ignore: ");

        DNX_SW_STATE_DUMP_PTR_NULL_CHECK(
            unit,
            ((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID]));

        DNX_SW_STATE_PRINT_MONITOR(
            unit,
            "algo_oam_db[%d]->","((algo_oam_sw_state_t*)sw_state_roots_array[%d][ALGO_OAM_MODULE_ID])->","mpls_tp_mdl_ignore: ");

        DNX_SW_STATE_PRINT_FILE(
            unit,
            " ");

        dnx_sw_state_print_uint32(
            unit,
            &((algo_oam_sw_state_t*)sw_state_roots_array[unit][ALGO_OAM_MODULE_ID])->mpls_tp_mdl_ignore);

        dnx_sw_state_dump_detach_file(
            unit);

    }

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

dnx_sw_state_diagnostic_info_t algo_oam_db_info[SOC_MAX_NUM_DEVICES][ALGO_OAM_DB_INFO_NOF_ENTRIES];
const char* algo_oam_db_layout_str[ALGO_OAM_DB_INFO_NOF_ENTRIES] = {
    "ALGO_OAM_DB~",
    "ALGO_OAM_DB~OAM_GROUP_ID~",
    "ALGO_OAM_DB~OAM_PROFILE_ID_ING~",
    "ALGO_OAM_DB~OAM_PROFILE_ID_EG~",
    "ALGO_OAM_DB~OAM_PROFILE_ID_ING_ACC~",
    "ALGO_OAM_DB~OAM_PROFILE_ID_EG_ACC~",
    "ALGO_OAM_DB~OAM_RMEP_ID_BELOW_THRESHOLD~",
    "ALGO_OAM_DB~OAM_RMEP_ID_ABOVE_THRESHOLD~",
    "ALGO_OAM_DB~OAM_ITMH_PRIORITY_PROFILE~",
#ifdef BCM_DNX2_SUPPORT
    "ALGO_OAM_DB~OAM_MPLS_PWE_EXP_TTL_PROFILE~",
#endif /*BCM_DNX2_SUPPORT*/
    "ALGO_OAM_DB~OAMP_PUNT_EVENT_PROF_TEMPLATE~",
    "ALGO_OAM_DB~OAM_SA_MAC_MSB_PROFILE_TEMPLATE~",
    "ALGO_OAM_DB~ETH_OAM_TPID_PROFILE~",
    "ALGO_OAM_DB~OAM_GROUP_ICC_PROFILE~",
#ifdef BCM_DNX2_SUPPORT
    "ALGO_OAM_DB~OAM_MEP_PROFILE~",
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
    "ALGO_OAM_DB~OAM_DA_MAC_MSB_PROFILE_TEMPLATE~",
#endif /*BCM_DNX2_SUPPORT*/
#ifdef BCM_DNX2_SUPPORT
    "ALGO_OAM_DB~OAM_DA_MAC_LSB_PROFILE_TEMPLATE~",
#endif /*BCM_DNX2_SUPPORT*/
    "ALGO_OAM_DB~OAM_DEFAULT_MEP_PROFILES~",
    "ALGO_OAM_DB~OAM_TRAP_TCAM_INDEX~",
    "ALGO_OAM_DB~SLM_OAMP_MEASUREMENT_PERIOD~",
    "ALGO_OAM_DB~MPLS_TP_MDL_IGNORE~",
};
#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
