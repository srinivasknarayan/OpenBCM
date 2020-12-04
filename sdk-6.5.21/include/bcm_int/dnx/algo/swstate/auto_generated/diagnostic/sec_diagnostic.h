/** \file algo/swstate/auto_generated/diagnostic/sec_diagnostic.h
 *
 * sw state functions declarations
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

#ifndef __SEC_DIAGNOSTIC_H__
#define __SEC_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/sec_types.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_macsec.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_trunk.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    DNX_SEC_DB_INFO,
    DNX_SEC_DB_INGRESS_SEC_INFO,
    DNX_SEC_DB_INGRESS_SEC_FLOW_RES_MNGR_INFO,
    DNX_SEC_DB_INGRESS_SEC_POLICY_RES_MNGR_INFO,
    DNX_SEC_DB_INGRESS_SEC_SC_RES_MNGR_INFO,
    DNX_SEC_DB_INGRESS_SEC_SC_TCAM_RES_MNGR_INFO,
    DNX_SEC_DB_INGRESS_SEC_SA_RES_MNGR_INFO,
    DNX_SEC_DB_INGRESS_SEC_DEFAULT_POLICY_ID_INFO,
    DNX_SEC_DB_INGRESS_SEC_SC_INDEX_MAP_INFO,
    DNX_SEC_DB_INGRESS_SEC_SC_INDEX_MAP_SC_TCAM_INDEX_INFO,
    DNX_SEC_DB_INGRESS_SEC_SC_INDEX_MAP_IS_IPSEC_INFO,
    DNX_SEC_DB_INGRESS_SEC_SA_INDEX_INFO_INFO,
    DNX_SEC_DB_INGRESS_SEC_SA_INDEX_INFO_IS_IPSEC_INFO,
    DNX_SEC_DB_EGRESS_SEC_INFO,
    DNX_SEC_DB_EGRESS_SEC_SC_RES_MNGR_INFO,
    DNX_SEC_DB_EGRESS_SEC_SA_RES_MNGR_INFO,
    DNX_SEC_DB_EGRESS_SEC_SA_INDEX_INFO_INFO,
    DNX_SEC_DB_EGRESS_SEC_SA_INDEX_INFO_IS_IPSEC_INFO,
    DNX_SEC_DB_EGRESS_SEC_SC_INDEX_INFO_INFO,
    DNX_SEC_DB_EGRESS_SEC_SC_INDEX_INFO_IS_IPSEC_INFO,
    DNX_SEC_DB_CONTROL_SEC_INFO,
    DNX_SEC_DB_CONTROL_SEC_TRUNK_INFO_INFO,
    DNX_SEC_DB_CONTROL_SEC_TRUNK_INFO_IS_MACSEC_ENABLED_INFO,
    DNX_SEC_DB_CONTROL_SEC_POWER_DOWN_INFO_INFO,
    DNX_SEC_DB_CONTROL_SEC_POWER_DOWN_INFO_IS_POWERED_DOWN_INFO,
    DNX_SEC_DB_CONTROL_SEC_IS_FORCED_POWER_UP_STATE_INFO,
    DNX_SEC_DB_CONTROL_SEC_PORT_STATE_INFO_INFO,
    DNX_SEC_DB_CONTROL_SEC_PORT_STATE_INFO_IS_MACSEC_ENABLED_INFO,
    DNX_SEC_DB_INFO_NOF_ENTRIES
} sw_state_dnx_sec_db_layout_e;


extern dnx_sw_state_diagnostic_info_t dnx_sec_db_info[SOC_MAX_NUM_DEVICES][DNX_SEC_DB_INFO_NOF_ENTRIES];

extern const char* dnx_sec_db_layout_str[DNX_SEC_DB_INFO_NOF_ENTRIES];
int dnx_sec_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_flow_res_mngr_dump(
    int unit, int flow_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_policy_res_mngr_dump(
    int unit, int policy_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sc_res_mngr_dump(
    int unit, int sc_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sc_tcam_res_mngr_dump(
    int unit, int sc_tcam_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sa_res_mngr_dump(
    int unit, int sa_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_default_policy_id_dump(
    int unit, int default_policy_id_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sc_index_map_dump(
    int unit, int sc_index_map_idx_0, int sc_index_map_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sc_index_map_sc_tcam_index_dump(
    int unit, int sc_index_map_idx_0, int sc_index_map_idx_1, int sc_tcam_index_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sc_index_map_is_ipsec_dump(
    int unit, int sc_index_map_idx_0, int sc_index_map_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sa_index_info_dump(
    int unit, int sa_index_info_idx_0, int sa_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_ingress_sec_sa_index_info_is_ipsec_dump(
    int unit, int sa_index_info_idx_0, int sa_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sc_res_mngr_dump(
    int unit, int sc_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sa_res_mngr_dump(
    int unit, int sa_res_mngr_idx_0, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sa_index_info_dump(
    int unit, int sa_index_info_idx_0, int sa_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sa_index_info_is_ipsec_dump(
    int unit, int sa_index_info_idx_0, int sa_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sc_index_info_dump(
    int unit, int sc_index_info_idx_0, int sc_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_egress_sec_sc_index_info_is_ipsec_dump(
    int unit, int sc_index_info_idx_0, int sc_index_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_trunk_info_dump(
    int unit, int trunk_info_idx_0, int trunk_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_trunk_info_is_macsec_enabled_dump(
    int unit, int trunk_info_idx_0, int trunk_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_power_down_info_dump(
    int unit, int power_down_info_idx_0, int power_down_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_power_down_info_is_powered_down_dump(
    int unit, int power_down_info_idx_0, int power_down_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_is_forced_power_up_state_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_port_state_info_dump(
    int unit, int port_state_info_idx_0, int port_state_info_idx_1, dnx_sw_state_dump_filters_t filters);

int dnx_sec_db_control_sec_port_state_info_is_macsec_enabled_dump(
    int unit, int port_state_info_idx_0, int port_state_info_idx_1, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __SEC_DIAGNOSTIC_H__ */
