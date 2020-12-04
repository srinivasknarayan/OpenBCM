/** \file algo/swstate/auto_generated/diagnostic/algo_qos_diagnostic.h
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

#ifndef __ALGO_QOS_DIAGNOSTIC_H__
#define __ALGO_QOS_DIAGNOSTIC_H__

#include <soc/dnxc/swstate/dnx_sw_state_dump.h>
#include <soc/dnxc/swstate/dnx_sw_state_size.h>
#include <soc/dnxc/swstate/dnx_sw_state_diagnostic_operation_counters.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/types/algo_qos_types.h>
#include <bcm_int/dnx/algo/qos/algo_qos.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr.h>
#include <bcm_int/dnx/algo/res_mngr/res_mngr_internal.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr.h>
#include <bcm_int/dnx/algo/template_mngr/template_mngr_internal.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
typedef enum {
    ALGO_QOS_DB_INFO,
    ALGO_QOS_DB_INGRESS_QOS_INFO,
    ALGO_QOS_DB_INGRESS_QOS_ECN_INFO,
    ALGO_QOS_DB_INGRESS_QOS_PHB_OPCODE_INFO,
    ALGO_QOS_DB_INGRESS_QOS_REMARK_OPCODE_INFO,
    ALGO_QOS_DB_INGRESS_QOS_ECN_OPCODE_INFO,
    ALGO_QOS_DB_INGRESS_QOS_POLICER_INFO,
    ALGO_QOS_DB_INGRESS_QOS_VLAN_PCP_INFO,
    ALGO_QOS_DB_EGRESS_QOS_INFO,
    ALGO_QOS_DB_EGRESS_QOS_OPCODE_INFO,
    ALGO_QOS_DB_EGRESS_QOS_MPLS_PHP_INFO,
    ALGO_QOS_DB_EGRESS_QOS_PHP_OPCODE_INFO,
    ALGO_QOS_DB_EGRESS_QOS_POLICER_INFO,
    ALGO_QOS_DB_EGRESS_QOS_OAM_PCP_MAP_INFO,
    ALGO_QOS_DB_QOS_EGRESS_TTL_PIPE_PROFILE_INFO,
    ALGO_QOS_DB_QOS_INGRESS_PROPAGATION_PROFILE_INFO,
    ALGO_QOS_DB_QOS_EGRESS_NETWORK_QOS_PROFILE_INFO,
    ALGO_QOS_DB_EGRESS_COS_PROFILE_INFO,
    ALGO_QOS_DB_INFO_NOF_ENTRIES
} sw_state_algo_qos_db_layout_e;


extern dnx_sw_state_diagnostic_info_t algo_qos_db_info[SOC_MAX_NUM_DEVICES][ALGO_QOS_DB_INFO_NOF_ENTRIES];

extern const char* algo_qos_db_layout_str[ALGO_QOS_DB_INFO_NOF_ENTRIES];
int algo_qos_db_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_ecn_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_phb_opcode_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_remark_opcode_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_ecn_opcode_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_policer_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_ingress_qos_vlan_pcp_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_opcode_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_mpls_php_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_php_opcode_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_policer_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_qos_oam_pcp_map_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_qos_egress_ttl_pipe_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_qos_ingress_propagation_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_qos_egress_network_qos_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

int algo_qos_db_egress_cos_profile_dump(
    int unit, dnx_sw_state_dump_filters_t filters);

#endif /* DNX_SW_STATE_DIAGNOSTIC */

#endif /* __ALGO_QOS_DIAGNOSTIC_H__ */
