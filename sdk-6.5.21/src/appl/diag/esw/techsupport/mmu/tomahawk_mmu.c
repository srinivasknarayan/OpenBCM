/*
 * 
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 *
 * File:    tomahawk_mmu.c
 * Purpose: Maintains all the debug information for mmu
 *          feature for tomahawk.
*/

#include <appl/diag/techsupport.h>
#include <soc/mcm/allenum.h>

extern char * techsupport_mmu_diag_cmdlist[];
extern char * techsupport_mmu_sw_dump_cmdlist[];

/* "mmu" feature's diag command list valid for Tomahawk */
char * techsupport_mmu_tomahawk_diag_cmdlist[] = {
     NULL /* Must be the last element in this structure */
 };

#ifndef BCM_SW_STATE_DUMP_DISABLE
/* "MMU" feature's software dump command list valid for tomahawk */
char * techsupport_mmu_tomahawk_sw_dump_cmdlist[] = {
    NULL /* Must be the last element in this structure */
};
#endif /* BCM_SW_STATE_DUMP_DISABLE */

/* Structure that maintains memory list for
 * "mmu" feature for tomahawk chipset. */
static soc_mem_t techsupport_mmu_tomahawk_memory_table_list[] = {
    CPU_COS_MAPm,
    PORT_COS_MAPm,
    THDI_PORT_PG_CNTRS_RT1_XPE0_PIPE0m,
    THDI_PORT_PG_CNTRS_RT1_XPE0_PIPE3m,
    THDI_PORT_PG_CNTRS_RT1_XPE1_PIPE0m,
    THDI_PORT_PG_CNTRS_RT1_XPE1_PIPE3m,
    THDI_PORT_PG_CNTRS_RT1_XPE2_PIPE1m,
    THDI_PORT_PG_CNTRS_RT1_XPE2_PIPE2m,
    THDI_PORT_PG_CNTRS_RT1_XPE3_PIPE1m,
    THDI_PORT_PG_CNTRS_RT1_XPE3_PIPE2m,
    THDI_PORT_PG_CNTRS_RT2_XPE0_PIPE0m,
    THDI_PORT_PG_CNTRS_RT2_XPE0_PIPE3m,
    THDI_PORT_PG_CNTRS_RT2_XPE1_PIPE0m,
    THDI_PORT_PG_CNTRS_RT2_XPE1_PIPE3m,
    THDI_PORT_PG_CNTRS_RT2_XPE2_PIPE1m,
    THDI_PORT_PG_CNTRS_RT2_XPE2_PIPE2m,
    THDI_PORT_PG_CNTRS_RT2_XPE3_PIPE1m,
    THDI_PORT_PG_CNTRS_RT2_XPE3_PIPE2m,
    THDI_PORT_PG_CNTRS_SH1_XPE0_PIPE0m,
    THDI_PORT_PG_CNTRS_SH1_XPE0_PIPE3m,
    THDI_PORT_PG_CNTRS_SH1_XPE1_PIPE0m,
    THDI_PORT_PG_CNTRS_SH1_XPE1_PIPE3m,
    THDI_PORT_PG_CNTRS_SH1_XPE2_PIPE1m,
    THDI_PORT_PG_CNTRS_SH1_XPE2_PIPE2m,
    THDI_PORT_PG_CNTRS_SH1_XPE3_PIPE1m,
    THDI_PORT_PG_CNTRS_SH1_XPE3_PIPE2m,
    THDI_PORT_PG_CNTRS_SH2_XPE0_PIPE0m,
    THDI_PORT_PG_CNTRS_SH2_XPE0_PIPE3m,
    THDI_PORT_PG_CNTRS_SH2_XPE1_PIPE0m,
    THDI_PORT_PG_CNTRS_SH2_XPE1_PIPE3m,
    THDI_PORT_PG_CNTRS_SH2_XPE2_PIPE1m,
    THDI_PORT_PG_CNTRS_SH2_XPE2_PIPE2m,
    THDI_PORT_PG_CNTRS_SH2_XPE3_PIPE1m,
    THDI_PORT_PG_CNTRS_SH2_XPE3_PIPE2m,
    THDI_PORT_PG_CONFIG_PIPE0m,
    THDI_PORT_PG_CONFIG_PIPE1m,
    THDI_PORT_PG_CONFIG_PIPE2m,
    THDI_PORT_PG_CONFIG_PIPE3m,
    THDI_PORT_SP_CNTRS_RT_XPE0_PIPE0m,
    THDI_PORT_SP_CNTRS_RT_XPE0_PIPE3m,
    THDI_PORT_SP_CNTRS_RT_XPE1_PIPE0m,
    THDI_PORT_SP_CNTRS_RT_XPE1_PIPE3m,
    THDI_PORT_SP_CNTRS_RT_XPE2_PIPE1m,
    THDI_PORT_SP_CNTRS_RT_XPE2_PIPE2m,
    THDI_PORT_SP_CNTRS_RT_XPE3_PIPE1m,
    THDI_PORT_SP_CNTRS_RT_XPE3_PIPE2m,
    THDI_PORT_SP_CNTRS_SH_XPE0_PIPE0m,
    THDI_PORT_SP_CNTRS_SH_XPE0_PIPE3m,
    THDI_PORT_SP_CNTRS_SH_XPE1_PIPE0m,
    THDI_PORT_SP_CNTRS_SH_XPE1_PIPE3m,
    THDI_PORT_SP_CNTRS_SH_XPE2_PIPE1m,
    THDI_PORT_SP_CNTRS_SH_XPE2_PIPE2m,
    THDI_PORT_SP_CNTRS_SH_XPE3_PIPE1m,
    THDI_PORT_SP_CNTRS_SH_XPE3_PIPE2m,
    THDI_PORT_SP_CONFIG_PIPE0m,
    THDI_PORT_SP_CONFIG_PIPE1m,
    THDI_PORT_SP_CONFIG_PIPE2m,
    THDI_PORT_SP_CONFIG_PIPE3m,
    THDI_PORT_SP_CONFIG0_PIPE0m,
    THDI_PORT_SP_CONFIG0_PIPE1m,
    THDI_PORT_SP_CONFIG0_PIPE2m,
    THDI_PORT_SP_CONFIG0_PIPE3m,
    THDI_PORT_SP_CONFIG1_PIPE0m,
    THDI_PORT_SP_CONFIG1_PIPE1m,
    THDI_PORT_SP_CONFIG1_PIPE2m,
    THDI_PORT_SP_CONFIG1_PIPE3m,
    THDI_PORT_SP_CONFIG2_PIPE0m,
    THDI_PORT_SP_CONFIG2_PIPE1m,
    THDI_PORT_SP_CONFIG2_PIPE2m,
    THDI_PORT_SP_CONFIG2_PIPE3m,
    MMU_CTR_COLOR_DROP_MEM_XPE0m,
    MMU_CTR_COLOR_DROP_MEM_XPE1m,
    MMU_CTR_COLOR_DROP_MEM_XPE2m,
    MMU_CTR_COLOR_DROP_MEM_XPE3m,
    MMU_CTR_ING_DROP_MEM_XPE0_PIPE0m,
    MMU_CTR_ING_DROP_MEM_XPE0_PIPE3m,
    MMU_CTR_ING_DROP_MEM_XPE1_PIPE0m,
    MMU_CTR_ING_DROP_MEM_XPE1_PIPE3m,
    MMU_CTR_ING_DROP_MEM_XPE2_PIPE1m,
    MMU_CTR_ING_DROP_MEM_XPE2_PIPE2m,
    MMU_CTR_ING_DROP_MEM_XPE3_PIPE1m,
    MMU_CTR_ING_DROP_MEM_XPE3_PIPE2m,
    MMU_CTR_MC_DROP_MEM_XPE0_PIPE0m,
    MMU_CTR_MC_DROP_MEM_XPE0_PIPE1m,
    MMU_CTR_MC_DROP_MEM_XPE1_PIPE2m,
    MMU_CTR_MC_DROP_MEM_XPE1_PIPE3m,
    MMU_CTR_MC_DROP_MEM_XPE2_PIPE0m,
    MMU_CTR_MC_DROP_MEM_XPE2_PIPE1m,
    MMU_CTR_MC_DROP_MEM_XPE3_PIPE2m,
    MMU_CTR_MC_DROP_MEM_XPE3_PIPE3m,
    MMU_CTR_UC_DROP_MEM_XPE0_PIPE0m,
    MMU_CTR_UC_DROP_MEM_XPE0_PIPE1m,
    MMU_CTR_UC_DROP_MEM_XPE1_PIPE2m,
    MMU_CTR_UC_DROP_MEM_XPE1_PIPE3m,
    MMU_CTR_UC_DROP_MEM_XPE2_PIPE0m,
    MMU_CTR_UC_DROP_MEM_XPE2_PIPE1m,
    MMU_CTR_UC_DROP_MEM_XPE3_PIPE2m,
    MMU_CTR_UC_DROP_MEM_XPE3_PIPE3m,
    MMU_THDU_CONFIG_PORT_PIPE0m,
    MMU_THDU_CONFIG_PORT_PIPE1m,
    MMU_THDU_CONFIG_PORT_PIPE2m,
    MMU_THDU_CONFIG_PORT_PIPE3m,
    MMU_THDU_CONFIG_PORT0_PIPE0m,
    MMU_THDU_CONFIG_PORT0_PIPE1m,
    MMU_THDU_CONFIG_PORT0_PIPE2m,
    MMU_THDU_CONFIG_PORT0_PIPE3m,
    MMU_THDU_CONFIG_PORT1_PIPE0m,
    MMU_THDU_CONFIG_PORT1_PIPE1m,
    MMU_THDU_CONFIG_PORT1_PIPE2m,
    MMU_THDU_CONFIG_PORT1_PIPE3m,
    MMU_THDU_CONFIG_QGROUP_PIPE0m,
    MMU_THDU_CONFIG_QGROUP_PIPE1m,
    MMU_THDU_CONFIG_QGROUP_PIPE2m,
    MMU_THDU_CONFIG_QGROUP_PIPE3m,
    MMU_THDU_CONFIG_QGROUP0_PIPE0m,
    MMU_THDU_CONFIG_QGROUP0_PIPE1m,
    MMU_THDU_CONFIG_QGROUP0_PIPE2m,
    MMU_THDU_CONFIG_QGROUP0_PIPE3m,
    MMU_THDU_CONFIG_QGROUP1_PIPE0m,
    MMU_THDU_CONFIG_QGROUP1_PIPE1m,
    MMU_THDU_CONFIG_QGROUP1_PIPE2m,
    MMU_THDU_CONFIG_QGROUP1_PIPE3m,
    MMU_THDU_CONFIG_QUEUE_PIPE0m,
    MMU_THDU_CONFIG_QUEUE_PIPE1m,
    MMU_THDU_CONFIG_QUEUE_PIPE2m,
    MMU_THDU_CONFIG_QUEUE_PIPE3m,
    MMU_THDU_CONFIG_QUEUE0_PIPE0m,
    MMU_THDU_CONFIG_QUEUE0_PIPE1m,
    MMU_THDU_CONFIG_QUEUE0_PIPE2m,
    MMU_THDU_CONFIG_QUEUE0_PIPE3m,
    MMU_THDU_CONFIG_QUEUE1_PIPE0m,
    MMU_THDU_CONFIG_QUEUE1_PIPE1m,
    MMU_THDU_CONFIG_QUEUE1_PIPE2m,
    MMU_THDU_CONFIG_QUEUE1_PIPE3m,
    MMU_THDU_COUNTER_PORT_XPE0_PIPE0m,
    MMU_THDU_COUNTER_PORT_XPE0_PIPE1m,
    MMU_THDU_COUNTER_PORT_XPE1_PIPE2m,
    MMU_THDU_COUNTER_PORT_XPE1_PIPE3m,
    MMU_THDU_COUNTER_PORT_XPE2_PIPE0m,
    MMU_THDU_COUNTER_PORT_XPE2_PIPE1m,
    MMU_THDU_COUNTER_PORT_XPE3_PIPE2m,
    MMU_THDU_COUNTER_PORT_XPE3_PIPE3m,
    MMU_THDU_COUNTER_QGROUP_XPE0_PIPE0m,
    MMU_THDU_COUNTER_QGROUP_XPE0_PIPE1m,
    MMU_THDU_COUNTER_QGROUP_XPE1_PIPE2m,
    MMU_THDU_COUNTER_QGROUP_XPE1_PIPE3m,
    MMU_THDU_COUNTER_QGROUP_XPE2_PIPE0m,
    MMU_THDU_COUNTER_QGROUP_XPE2_PIPE1m,
    MMU_THDU_COUNTER_QGROUP_XPE3_PIPE2m,
    MMU_THDU_COUNTER_QGROUP_XPE3_PIPE3m,
    MMU_THDU_COUNTER_QUEUE_XPE0_PIPE0m,
    MMU_THDU_COUNTER_QUEUE_XPE0_PIPE1m,
    MMU_THDU_COUNTER_QUEUE_XPE1_PIPE2m,
    MMU_THDU_COUNTER_QUEUE_XPE1_PIPE3m,
    MMU_THDU_COUNTER_QUEUE_XPE2_PIPE0m,
    MMU_THDU_COUNTER_QUEUE_XPE2_PIPE1m,
    MMU_THDU_COUNTER_QUEUE_XPE3_PIPE2m,
    MMU_THDU_COUNTER_QUEUE_XPE3_PIPE3m,
    MMU_THDU_OFFSET_QGROUP_PIPE0m,
    MMU_THDU_OFFSET_QGROUP_PIPE1m,
    MMU_THDU_OFFSET_QGROUP_PIPE2m,
    MMU_THDU_OFFSET_QGROUP_PIPE3m,
    MMU_THDU_OFFSET_QGROUP0_PIPE0m,
    MMU_THDU_OFFSET_QGROUP0_PIPE1m,
    MMU_THDU_OFFSET_QGROUP0_PIPE2m,
    MMU_THDU_OFFSET_QGROUP0_PIPE3m,
    MMU_THDU_OFFSET_QGROUP1_PIPE0m,
    MMU_THDU_OFFSET_QGROUP1_PIPE1m,
    MMU_THDU_OFFSET_QGROUP1_PIPE2m,
    MMU_THDU_OFFSET_QGROUP1_PIPE3m,
    MMU_THDU_OFFSET_QUEUE_PIPE0m,
    MMU_THDU_OFFSET_QUEUE_PIPE1m,
    MMU_THDU_OFFSET_QUEUE_PIPE2m,
    MMU_THDU_OFFSET_QUEUE_PIPE3m,
    MMU_THDU_OFFSET_QUEUE0_PIPE0m,
    MMU_THDU_OFFSET_QUEUE0_PIPE1m,
    MMU_THDU_OFFSET_QUEUE0_PIPE2m,
    MMU_THDU_OFFSET_QUEUE0_PIPE3m,
    MMU_THDU_OFFSET_QUEUE1_PIPE0m,
    MMU_THDU_OFFSET_QUEUE1_PIPE1m,
    MMU_THDU_OFFSET_QUEUE1_PIPE2m,
    MMU_THDU_OFFSET_QUEUE1_PIPE3m,
    MMU_THDU_Q_TO_QGRP_MAP_PIPE0m,
    MMU_THDU_Q_TO_QGRP_MAP_PIPE1m,
    MMU_THDU_Q_TO_QGRP_MAP_PIPE2m,
    MMU_THDU_Q_TO_QGRP_MAP_PIPE3m,
    MMU_THDU_Q_TO_QGRP_MAP0_PIPE0m,
    MMU_THDU_Q_TO_QGRP_MAP0_PIPE1m,
    MMU_THDU_Q_TO_QGRP_MAP0_PIPE2m,
    MMU_THDU_Q_TO_QGRP_MAP0_PIPE3m,
    MMU_THDU_Q_TO_QGRP_MAP1_PIPE0m,
    MMU_THDU_Q_TO_QGRP_MAP1_PIPE1m,
    MMU_THDU_Q_TO_QGRP_MAP1_PIPE2m,
    MMU_THDU_Q_TO_QGRP_MAP1_PIPE3m,
    MMU_THDU_Q_TO_QGRP_MAP2_PIPE0m,
    MMU_THDU_Q_TO_QGRP_MAP2_PIPE1m,
    MMU_THDU_Q_TO_QGRP_MAP2_PIPE2m,
    MMU_THDU_Q_TO_QGRP_MAP2_PIPE3m,
    MMU_THDU_RESUME_PORT_PIPE0m,
    MMU_THDU_RESUME_PORT_PIPE1m,
    MMU_THDU_RESUME_PORT_PIPE2m,
    MMU_THDU_RESUME_PORT_PIPE3m,
    MMU_THDU_RESUME_PORT0_PIPE0m,
    MMU_THDU_RESUME_PORT0_PIPE1m,
    MMU_THDU_RESUME_PORT0_PIPE2m,
    MMU_THDU_RESUME_PORT0_PIPE3m,
    MMU_THDU_RESUME_PORT1_PIPE0m,
    MMU_THDU_RESUME_PORT1_PIPE1m,
    MMU_THDU_RESUME_PORT1_PIPE2m,
    MMU_THDU_RESUME_PORT1_PIPE3m,
    MMU_THDU_RESUME_PORT2_PIPE0m,
    MMU_THDU_RESUME_PORT2_PIPE1m,
    MMU_THDU_RESUME_PORT2_PIPE2m,
    MMU_THDU_RESUME_PORT2_PIPE3m,
    MMU_THDU_RESUME_QGROUPm,
    MMU_THDU_RESUME_QGROUP_XPE0_PIPE0m,
    MMU_THDU_RESUME_QGROUP_XPE0_PIPE1m,
    MMU_THDU_RESUME_QGROUP_XPE1_PIPE2m,
    MMU_THDU_RESUME_QGROUP_XPE1_PIPE3m,
    MMU_THDU_RESUME_QGROUP_XPE2_PIPE0m,
    MMU_THDU_RESUME_QGROUP_XPE2_PIPE1m,
    MMU_THDU_RESUME_QGROUP_XPE3_PIPE2m,
    MMU_THDU_RESUME_QGROUP_XPE3_PIPE3m,
    MMU_THDU_RESUME_QUEUEm,
    MMU_THDU_RESUME_QUEUE_XPE0_PIPE0m,
    MMU_THDU_RESUME_QUEUE_XPE0_PIPE1m,
    MMU_THDU_RESUME_QUEUE_XPE1_PIPE2m,
    MMU_THDU_RESUME_QUEUE_XPE1_PIPE3m,
    MMU_THDU_RESUME_QUEUE_XPE2_PIPE0m,
    MMU_THDU_RESUME_QUEUE_XPE2_PIPE1m,
    MMU_THDU_RESUME_QUEUE_XPE3_PIPE2m,
    MMU_THDU_RESUME_QUEUE_XPE3_PIPE3m,
    MMU_THDM_DB_PORTSP_BST_XPE0_PIPE0m,
    MMU_THDM_DB_PORTSP_BST_XPE0_PIPE1m,
    MMU_THDM_DB_PORTSP_BST_XPE1_PIPE2m,
    MMU_THDM_DB_PORTSP_BST_XPE1_PIPE3m,
    MMU_THDM_DB_PORTSP_BST_XPE2_PIPE0m,
    MMU_THDM_DB_PORTSP_BST_XPE2_PIPE1m,
    MMU_THDM_DB_PORTSP_BST_XPE3_PIPE2m,
    MMU_THDM_DB_PORTSP_BST_XPE3_PIPE3m,
    MMU_THDM_DB_PORTSP_CONFIG_A_PIPE0m,
    MMU_THDM_DB_PORTSP_CONFIG_A_PIPE1m,
    MMU_THDM_DB_PORTSP_CONFIG_A_PIPE2m,
    MMU_THDM_DB_PORTSP_CONFIG_A_PIPE3m,
    MMU_THDM_DB_PORTSP_CONFIG_B_PIPE0m,
    MMU_THDM_DB_PORTSP_CONFIG_B_PIPE1m,
    MMU_THDM_DB_PORTSP_CONFIG_B_PIPE2m,
    MMU_THDM_DB_PORTSP_CONFIG_B_PIPE3m,
    MMU_THDM_DB_PORTSP_CONFIG_C_PIPE0m,
    MMU_THDM_DB_PORTSP_CONFIG_C_PIPE1m,
    MMU_THDM_DB_PORTSP_CONFIG_C_PIPE2m,
    MMU_THDM_DB_PORTSP_CONFIG_C_PIPE3m,
    MMU_THDM_DB_PORTSP_CONFIG_PIPE0m,
    MMU_THDM_DB_PORTSP_CONFIG_PIPE1m,
    MMU_THDM_DB_PORTSP_CONFIG_PIPE2m,
    MMU_THDM_DB_PORTSP_CONFIG_PIPE3m,
    MMU_THDM_DB_QUEUE_CONFIG_A_PIPE0m,
    MMU_THDM_DB_QUEUE_CONFIG_A_PIPE1m,
    MMU_THDM_DB_QUEUE_CONFIG_A_PIPE2m,
    MMU_THDM_DB_QUEUE_CONFIG_A_PIPE3m,
    MMU_THDM_DB_QUEUE_CONFIG_B_PIPE0m,
    MMU_THDM_DB_QUEUE_CONFIG_B_PIPE1m,
    MMU_THDM_DB_QUEUE_CONFIG_B_PIPE2m,
    MMU_THDM_DB_QUEUE_CONFIG_B_PIPE3m,
    MMU_THDM_DB_QUEUE_CONFIG_C_PIPE0m,
    MMU_THDM_DB_QUEUE_CONFIG_C_PIPE1m,
    MMU_THDM_DB_QUEUE_CONFIG_C_PIPE2m,
    MMU_THDM_DB_QUEUE_CONFIG_C_PIPE3m,
    MMU_THDM_DB_QUEUE_CONFIG_PIPE0m,
    MMU_THDM_DB_QUEUE_CONFIG_PIPE1m,
    MMU_THDM_DB_QUEUE_CONFIG_PIPE2m,
    MMU_THDM_DB_QUEUE_CONFIG_PIPE3m,
    MMU_THDM_DB_QUEUE_COUNT_XPE0_PIPE0m,
    MMU_THDM_DB_QUEUE_COUNT_XPE0_PIPE1m,
    MMU_THDM_DB_QUEUE_COUNT_XPE1_PIPE2m,
    MMU_THDM_DB_QUEUE_COUNT_XPE1_PIPE3m,
    MMU_THDM_DB_QUEUE_COUNT_XPE2_PIPE0m,
    MMU_THDM_DB_QUEUE_COUNT_XPE2_PIPE1m,
    MMU_THDM_DB_QUEUE_COUNT_XPE3_PIPE2m,
    MMU_THDM_DB_QUEUE_COUNT_XPE3_PIPE3m,
    MMU_THDM_DB_QUEUE_OFFSET_A_PIPE0m,
    MMU_THDM_DB_QUEUE_OFFSET_A_PIPE1m,
    MMU_THDM_DB_QUEUE_OFFSET_A_PIPE2m,
    MMU_THDM_DB_QUEUE_OFFSET_A_PIPE3m,
    MMU_THDM_DB_QUEUE_OFFSET_B_PIPE0m,
    MMU_THDM_DB_QUEUE_OFFSET_B_PIPE1m,
    MMU_THDM_DB_QUEUE_OFFSET_B_PIPE2m,
    MMU_THDM_DB_QUEUE_OFFSET_B_PIPE3m,
    MMU_THDM_DB_QUEUE_OFFSET_C_PIPE0m,
    MMU_THDM_DB_QUEUE_OFFSET_C_PIPE1m,
    MMU_THDM_DB_QUEUE_OFFSET_C_PIPE2m,
    MMU_THDM_DB_QUEUE_OFFSET_C_PIPE3m,
    MMU_THDM_DB_QUEUE_OFFSET_PIPE0m,
    MMU_THDM_DB_QUEUE_OFFSET_PIPE1m,
    MMU_THDM_DB_QUEUE_OFFSET_PIPE2m,
    MMU_THDM_DB_QUEUE_OFFSET_PIPE3m,
    MMU_THDM_DB_QUEUE_RESUME_XPE0_PIPE0m,
    MMU_THDM_DB_QUEUE_RESUME_XPE0_PIPE1m,
    MMU_THDM_DB_QUEUE_RESUME_XPE1_PIPE2m,
    MMU_THDM_DB_QUEUE_RESUME_XPE1_PIPE3m,
    MMU_THDM_DB_QUEUE_RESUME_XPE2_PIPE0m,
    MMU_THDM_DB_QUEUE_RESUME_XPE2_PIPE1m,
    MMU_THDM_DB_QUEUE_RESUME_XPE3_PIPE2m,
    MMU_THDM_DB_QUEUE_RESUME_XPE3_PIPE3m,
    MMU_THDM_MCQE_PORTSP_CONFIG_A_PIPE0m,
    MMU_THDM_MCQE_PORTSP_CONFIG_A_PIPE1m,
    MMU_THDM_MCQE_PORTSP_CONFIG_A_PIPE2m,
    MMU_THDM_MCQE_PORTSP_CONFIG_A_PIPE3m,
    MMU_THDM_MCQE_PORTSP_CONFIG_B_PIPE0m,
    MMU_THDM_MCQE_PORTSP_CONFIG_B_PIPE1m,
    MMU_THDM_MCQE_PORTSP_CONFIG_B_PIPE2m,
    MMU_THDM_MCQE_PORTSP_CONFIG_B_PIPE3m,
    MMU_THDM_MCQE_PORTSP_CONFIG_C_PIPE0m,
    MMU_THDM_MCQE_PORTSP_CONFIG_C_PIPE1m,
    MMU_THDM_MCQE_PORTSP_CONFIG_C_PIPE2m,
    MMU_THDM_MCQE_PORTSP_CONFIG_C_PIPE3m,
    MMU_THDM_MCQE_PORTSP_CONFIG_PIPE0m,
    MMU_THDM_MCQE_PORTSP_CONFIG_PIPE1m,
    MMU_THDM_MCQE_PORTSP_CONFIG_PIPE2m,
    MMU_THDM_MCQE_PORTSP_CONFIG_PIPE3m,
    MMU_THDM_MCQE_QUEUE_CONFIG_A_PIPE0m,
    MMU_THDM_MCQE_QUEUE_CONFIG_A_PIPE1m,
    MMU_THDM_MCQE_QUEUE_CONFIG_A_PIPE2m,
    MMU_THDM_MCQE_QUEUE_CONFIG_A_PIPE3m,
    MMU_THDM_MCQE_QUEUE_CONFIG_B_PIPE0m,
    MMU_THDM_MCQE_QUEUE_CONFIG_B_PIPE1m,
    MMU_THDM_MCQE_QUEUE_CONFIG_B_PIPE2m,
    MMU_THDM_MCQE_QUEUE_CONFIG_B_PIPE3m,
    MMU_THDM_MCQE_QUEUE_CONFIG_C_PIPE0m,
    MMU_THDM_MCQE_QUEUE_CONFIG_C_PIPE1m,
    MMU_THDM_MCQE_QUEUE_CONFIG_C_PIPE2m,
    MMU_THDM_MCQE_QUEUE_CONFIG_C_PIPE3m,
    MMU_THDM_MCQE_QUEUE_CONFIG_PIPE0m,
    MMU_THDM_MCQE_QUEUE_CONFIG_PIPE1m,
    MMU_THDM_MCQE_QUEUE_CONFIG_PIPE2m,
    MMU_THDM_MCQE_QUEUE_CONFIG_PIPE3m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE0_PIPE0m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE0_PIPE1m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE1_PIPE2m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE1_PIPE3m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE2_PIPE0m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE2_PIPE1m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE3_PIPE2m,
    MMU_THDM_MCQE_QUEUE_COUNT_XPE3_PIPE3m,
    MMU_THDM_MCQE_QUEUE_OFFSET_A_PIPE0m,
    MMU_THDM_MCQE_QUEUE_OFFSET_A_PIPE1m,
    MMU_THDM_MCQE_QUEUE_OFFSET_A_PIPE2m,
    MMU_THDM_MCQE_QUEUE_OFFSET_A_PIPE3m,
    MMU_THDM_MCQE_QUEUE_OFFSET_B_PIPE0m,
    MMU_THDM_MCQE_QUEUE_OFFSET_B_PIPE1m,
    MMU_THDM_MCQE_QUEUE_OFFSET_B_PIPE2m,
    MMU_THDM_MCQE_QUEUE_OFFSET_B_PIPE3m,
    MMU_THDM_MCQE_QUEUE_OFFSET_C_PIPE0m,
    MMU_THDM_MCQE_QUEUE_OFFSET_C_PIPE1m,
    MMU_THDM_MCQE_QUEUE_OFFSET_C_PIPE2m,
    MMU_THDM_MCQE_QUEUE_OFFSET_C_PIPE3m,
    MMU_THDM_MCQE_QUEUE_OFFSET_PIPE0m,
    MMU_THDM_MCQE_QUEUE_OFFSET_PIPE1m,
    MMU_THDM_MCQE_QUEUE_OFFSET_PIPE2m,
    MMU_THDM_MCQE_QUEUE_OFFSET_PIPE3m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE0_PIPE0m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE0_PIPE1m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE1_PIPE2m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE1_PIPE3m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE2_PIPE0m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE2_PIPE1m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE3_PIPE2m,
    MMU_THDM_MCQE_QUEUE_RESUME_XPE3_PIPE3m,
    INVALIDm /* Must be the last element in this structure */
};

/* Structure that maintains register list for
 * "mmu" feature for tomahawk chipset. */
techsupport_reg_t techsupport_mmu_tomahawk_reg_list[] = {
    {ASF_CREDIT_THRESH_HIr, register_type_global },
    {ASF_EPORT_CFGr, register_type_global },
    {ASF_IPORT_CFGr, register_type_global },
    {CFAPBANKFULLr, register_type_global },
    {CFAPFULLTHRESHOLDRESETr, register_type_global },
    {CFAPFULLTHRESHOLDSETr, register_type_global },
    {CLMAC_PAUSE_CTRLr, register_type_per_port },
    {CLMAC_PFC_CTRLr, register_type_per_port },
    {CLMAC_PFC_DAr, register_type_per_port },
    {CLMAC_PFC_OPCODEr, register_type_per_port },
    {CLMAC_PFC_TYPEr, register_type_per_port },
    {CLMAC_TX_MAC_SAr, register_type_per_port },
    {IDB_OBM0_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM0_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM0_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM0_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM1_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM1_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM1_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM1_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM2_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM2_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM2_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM2_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM3_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM3_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM3_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM3_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM4_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM4_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM4_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM4_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM5_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM5_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM5_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM5_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM6_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM6_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM6_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM6_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {IDB_OBM7_FLOW_CONTROL_CONFIG_PIPE0r, register_type_global },
    {IDB_OBM7_FLOW_CONTROL_CONFIG_PIPE1r, register_type_global },
    {IDB_OBM7_FLOW_CONTROL_CONFIG_PIPE2r, register_type_global },
    {IDB_OBM7_FLOW_CONTROL_CONFIG_PIPE3r, register_type_global },
    {ING_COS_MODE_64r, register_type_global },
    {MMU_LLFC_TX_CONFIG_1r, register_type_global },
    {MMU_LLFC_TX_CONFIG_2r, register_type_global },
    {MMU_SCFG_TOQ_MC_CFG0r, register_type_global },
    {MMU_THDM_DB_DEVICE_BYPASSr, register_type_global },
    {MMU_THDM_DB_DEVICE_THR_CONFIGr, register_type_global },
    {MMU_THDM_DB_EN_COR_ERR_RPTr, register_type_global },
    {MMU_THDM_DB_MEMORY_TMr, register_type_global },
    {MMU_THDM_DB_POOL_DROP_STATESr, register_type_global },
    {MMU_THDM_DB_POOL_MC_SHARED_COUNTr, register_type_global },
    {MMU_THDM_DB_POOL_RED_RESUME_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_RED_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_RED_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_RED_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_RED_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_POOL_RED_SHARED_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_RED_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_RED_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_RED_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_RED_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_POOL_RESUME_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_COUNTr, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_RESUME_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_SHARED_LIMITr, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_DB_POOL_YELLOW_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_DB_PORT_RX_ENABLE_64r, register_type_global },
    {MMU_THDM_DB_PORTSP_DROP_STATE_BMP_64r, register_type_global },
    {MMU_THDM_DB_PORTSP_DROP_STATE_BMP_64_XPE0r, register_type_global },
    {MMU_THDM_DB_PORTSP_DROP_STATE_BMP_64_XPE1r, register_type_global },
    {MMU_THDM_DB_PORTSP_DROP_STATE_BMP_64_XPE2r, register_type_global },
    {MMU_THDM_DB_PORTSP_DROP_STATE_BMP_64_XPE3r, register_type_global },
    {MMU_THDM_DB_PORTSP_RED_DROP_STATE_BMP_64r, register_type_global },
    {MMU_THDM_DB_PORTSP_RED_DROP_STATE_BMP_64_XPE0r, register_type_global },
    {MMU_THDM_DB_PORTSP_RED_DROP_STATE_BMP_64_XPE1r, register_type_global },
    {MMU_THDM_DB_PORTSP_RED_DROP_STATE_BMP_64_XPE2r, register_type_global },
    {MMU_THDM_DB_PORTSP_RED_DROP_STATE_BMP_64_XPE3r, register_type_global },
    {MMU_THDM_DB_PORTSP_SHARED_COUNTr, register_type_global },
    {MMU_THDM_DB_PORTSP_SHARED_COUNT_XPE0r, register_type_global },
    {MMU_THDM_DB_PORTSP_SHARED_COUNT_XPE1r, register_type_global },
    {MMU_THDM_DB_PORTSP_SHARED_COUNT_XPE2r, register_type_global },
    {MMU_THDM_DB_PORTSP_SHARED_COUNT_XPE3r, register_type_global },
    {MMU_THDM_DB_PORTSP_THRESHOLD_PROFILE_SELr, register_type_global },
    {MMU_THDM_DB_PORTSP_YELLOW_DROP_STATE_BMP_64r, register_type_global },
    {MMU_THDM_DB_PORTSP_YELLOW_DROP_STATE_BMP_64_XPE0r, register_type_global },
    {MMU_THDM_DB_PORTSP_YELLOW_DROP_STATE_BMP_64_XPE1r, register_type_global },
    {MMU_THDM_DB_PORTSP_YELLOW_DROP_STATE_BMP_64_XPE2r, register_type_global },
    {MMU_THDM_DB_PORTSP_YELLOW_DROP_STATE_BMP_64_XPE3r, register_type_global },
    {MMU_THDM_DB_QUEUE_E2E_DS_ENr, register_type_global },
    {MMU_THDM_DB_QUEUE_E2E_SPIDr, register_type_global },
    {MMU_THDM_DB_QUEUE_RESUME_OFFSET_PROFILE_REDr, register_type_global },
    {MMU_THDM_DB_QUEUE_RESUME_OFFSET_PROFILE_YELLOWr, register_type_global },
    {MMU_THDM_MCQE_DEVICE_BYPASSr, register_type_global },
    {MMU_THDM_MCQE_DEVICE_THR_CONFIGr, register_type_global },
    {MMU_THDM_MCQE_EN_COR_ERR_RPTr, register_type_global },
    {MMU_THDM_MCQE_MEMORY_TMr, register_type_global },
    {MMU_THDM_MCQE_POOL_DROP_STATESr, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_RESUME_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_SHARED_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_RED_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_POOL_RESUME_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_COUNTr, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_RESUME_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_RESUME_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_RESUME_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_RESUME_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_RESUME_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_SHARED_LIMITr, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_POOL_YELLOW_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_PORT_RX_ENABLE_64r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_DROP_STATE_BMP_64r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_DROP_STATE_BMP_64_XPE0r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_DROP_STATE_BMP_64_XPE1r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_DROP_STATE_BMP_64_XPE2r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_DROP_STATE_BMP_64_XPE3r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_RED_DROP_STATE_BMP_64r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_RED_DROP_STATE_BMP_64_XPE0r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_RED_DROP_STATE_BMP_64_XPE1r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_RED_DROP_STATE_BMP_64_XPE2r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_RED_DROP_STATE_BMP_64_XPE3r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_SHARED_COUNTr, register_type_global },
    {MMU_THDM_MCQE_PORTSP_SHARED_COUNT_XPE0r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_SHARED_COUNT_XPE1r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_SHARED_COUNT_XPE2r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_SHARED_COUNT_XPE3r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_THRESHOLD_PROFILE_SELr, register_type_global },
    {MMU_THDM_MCQE_PORTSP_YELLOW_DROP_STATE_BMP0_64r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_YELLOW_DROP_STATE_BMP0_64_XPE0r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_YELLOW_DROP_STATE_BMP0_64_XPE1r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_YELLOW_DROP_STATE_BMP0_64_XPE2r, register_type_global },
    {MMU_THDM_MCQE_PORTSP_YELLOW_DROP_STATE_BMP0_64_XPE3r, register_type_global },
    {MMU_THDM_MCQE_QUEUE_RESUME_OFFSET_PROFILE_REDr, register_type_global },
    {MMU_THDM_MCQE_QUEUE_RESUME_OFFSET_PROFILE_YELLOWr, register_type_global },
    {MMU_THDR_DB_BYPASSr, register_type_global },
    {MMU_THDR_DB_CONFIGr, register_type_global },
    {MMU_THDR_DB_CONFIG_PRIQr, register_type_global },
    {MMU_THDR_DB_CONFIG_SPr, register_type_global },
    {MMU_THDR_DB_CONFIG_SP_XPE0r, register_type_global },
    {MMU_THDR_DB_CONFIG_SP_XPE1r, register_type_global },
    {MMU_THDR_DB_CONFIG_SP_XPE2r, register_type_global },
    {MMU_THDR_DB_CONFIG_SP_XPE3r, register_type_global },
    {MMU_THDR_DB_CONFIG1_PRIQr, register_type_global },
    {MMU_THDR_DB_LIMIT_COLOR_PRIQr, register_type_global },
    {MMU_THDR_DB_LIMIT_MIN_PRIQr, register_type_global },
    {MMU_THDR_DB_MIN_COUNT_PRIQr, register_type_global },
    {MMU_THDR_DB_RESET_OFFSET_COLOR_PRIQr, register_type_global },
    {MMU_THDR_DB_RESUME_COLOR_LIMIT_SPr, register_type_global },
    {MMU_THDR_DB_RESUME_COLOR_LIMIT_SP_XPE0r, register_type_global },
    {MMU_THDR_DB_RESUME_COLOR_LIMIT_SP_XPE1r, register_type_global },
    {MMU_THDR_DB_RESUME_COLOR_LIMIT_SP_XPE2r, register_type_global },
    {MMU_THDR_DB_RESUME_COLOR_LIMIT_SP_XPE3r, register_type_global },
    {MMU_THDR_DB_SHARED_COUNT_PRIQr, register_type_global },
    {MMU_THDR_DB_SHARED_COUNT_SPr, register_type_global },
    {MMU_THDR_DB_SP_SHARED_LIMITr, register_type_global },
    {MMU_THDR_DB_SP_SHARED_LIMIT_XPE0r, register_type_global },
    {MMU_THDR_DB_SP_SHARED_LIMIT_XPE1r, register_type_global },
    {MMU_THDR_DB_SP_SHARED_LIMIT_XPE2r, register_type_global },
    {MMU_THDR_DB_SP_SHARED_LIMIT_XPE3r, register_type_global },
    {MMU_THDR_DB_STATUS_PRIQr, register_type_global },
    {MMU_THDR_DB_STATUS_SPr, register_type_global },
    {MMU_THDR_QE_BYPASSr, register_type_global },
    {MMU_THDR_QE_CONFIGr, register_type_global },
    {MMU_THDR_QE_CONFIG_PRIQr, register_type_global },
    {MMU_THDR_QE_CONFIG_SPr, register_type_global },
    {MMU_THDR_QE_CONFIG1_PRIQr, register_type_global },
    {MMU_THDR_QE_LIMIT_COLOR_PRIQr, register_type_global },
    {MMU_THDR_QE_LIMIT_MIN_PRIQr, register_type_global },
    {MMU_THDR_QE_MIN_COUNT_PRIQr, register_type_global },
    {MMU_THDR_QE_RESET_OFFSET_COLOR_PRIQr, register_type_global },
    {MMU_THDR_QE_RESUME_COLOR_LIMIT_SPr, register_type_global },
    {MMU_THDR_QE_SHARED_COLOR_LIMIT_SPr, register_type_global },
    {MMU_THDR_QE_SHARED_COUNT_PRIQr, register_type_global },
    {MMU_THDR_QE_SHARED_COUNT_SPr, register_type_global },
    {MMU_THDR_QE_STATUSr, register_type_global },
    {MMU_THDR_QE_STATUS_PRIQr, register_type_global },
    {MMU_THDR_QE_STATUS_SPr, register_type_global },
    {MMU_THDU_EN_COR_ERR_RPTr, register_type_global },
    {MMU_TO_XPORT_BKPr, register_type_global },
    {OP_THDU_CONFIGr, register_type_global },
    {OP_UC_PORT_DROP_STATEr, register_type_global },
    {OP_UC_PORT_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_PORT_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_PORT_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_PORT_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_PORT_RED_DROP_STATEr, register_type_global },
    {OP_UC_PORT_RED_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_PORT_RED_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_PORT_RED_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_PORT_RED_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_PORT_YELLOW_DROP_STATEr, register_type_global },
    {OP_UC_PORT_YELLOW_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_PORT_YELLOW_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_PORT_YELLOW_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_PORT_YELLOW_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QGROUP_DROP_STATEr, register_type_global },
    {OP_UC_QGROUP_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QGROUP_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QGROUP_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QGROUP_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QGROUP_RED_DROP_STATEr, register_type_global },
    {OP_UC_QGROUP_RED_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QGROUP_RED_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QGROUP_RED_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QGROUP_RED_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QGROUP_YELLOW_DROP_STATEr, register_type_global },
    {OP_UC_QGROUP_YELLOW_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QGROUP_YELLOW_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QGROUP_YELLOW_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QGROUP_YELLOW_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QUEUE_DROP_STATEr, register_type_global },
    {OP_UC_QUEUE_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QUEUE_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QUEUE_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QUEUE_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QUEUE_RED_DROP_STATEr, register_type_global },
    {OP_UC_QUEUE_RED_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QUEUE_RED_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QUEUE_RED_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QUEUE_RED_DROP_STATE_XPE3r, register_type_global },
    {OP_UC_QUEUE_YELLOW_DROP_STATEr, register_type_global },
    {OP_UC_QUEUE_YELLOW_DROP_STATE_XPE0r, register_type_global },
    {OP_UC_QUEUE_YELLOW_DROP_STATE_XPE1r, register_type_global },
    {OP_UC_QUEUE_YELLOW_DROP_STATE_XPE2r, register_type_global },
    {OP_UC_QUEUE_YELLOW_DROP_STATE_XPE3r, register_type_global },
    {PORT_LLFC_CFGr, register_type_global },
    {PRIO2COS_PROFILEr, register_type_global },
    {RQE_MAX_SHAPER_LIMIT_COUNTr, register_type_global },
    {RQE_REPLICATION_ENTRY_COUNTr, register_type_global },
    {RQE_WERR_WORKING_COUNTSr, register_type_global },
    {RQE_WERR_WORKING_COUNTS_CLEARr, register_type_global },
    {RQE_WORK_FIFO_CREDIT_COUNTr, register_type_global },
    {RQE_WORK_FIFO_ENTRY_COUNTr, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_PUBLIC_POOLr, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_PUBLIC_POOL_XPE0r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_PUBLIC_POOL_XPE1r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_PUBLIC_POOL_XPE2r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_PUBLIC_POOL_XPE3r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_SPr, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_SP_XPE0r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_SP_XPE1r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_SP_XPE2r, register_type_global },
    {THDI_BUFFER_CELL_LIMIT_SP_XPE3r, register_type_global },
    {THDI_BYPASSr, register_type_global },
    {THDI_CELL_RESET_LIMIT_OFFSET_SPr, register_type_global },
    {THDI_CELL_RESET_LIMIT_OFFSET_SP_XPE0r, register_type_global },
    {THDI_CELL_RESET_LIMIT_OFFSET_SP_XPE1r, register_type_global },
    {THDI_CELL_RESET_LIMIT_OFFSET_SP_XPE2r, register_type_global },
    {THDI_CELL_RESET_LIMIT_OFFSET_SP_XPE3r, register_type_global },
    {THDI_CELL_SPAP_RED_OFFSET_SPr, register_type_global },
    {THDI_CELL_SPAP_YELLOW_OFFSET_SPr, register_type_global },
    {THDI_EN_COR_ERR_RPTr, register_type_global },
    {THDI_FLOW_CONTROL_XOFF_STATEr, register_type_global },
    {THDI_GLOBAL_HDRM_COUNT_XPE0r, register_type_global },
    {THDI_GLOBAL_HDRM_COUNT_XPE1r, register_type_global },
    {THDI_GLOBAL_HDRM_COUNT_XPE2r, register_type_global },
    {THDI_GLOBAL_HDRM_COUNT_XPE3r, register_type_global },
    {THDI_GLOBAL_HDRM_LIMITr, register_type_global },
    {THDI_GLOBAL_HDRM_RESERVED_XPE0r, register_type_global },
    {THDI_GLOBAL_HDRM_RESERVED_XPE1r, register_type_global },
    {THDI_GLOBAL_HDRM_RESERVED_XPE2r, register_type_global },
    {THDI_GLOBAL_HDRM_RESERVED_XPE3r, register_type_global },
    {THDI_HDRM_BUFFER_CELL_LIMIT_HP_XPE0r, register_type_global },
    {THDI_HDRM_BUFFER_CELL_LIMIT_HP_XPE1r, register_type_global },
    {THDI_HDRM_BUFFER_CELL_LIMIT_HP_XPE2r, register_type_global },
    {THDI_HDRM_BUFFER_CELL_LIMIT_HP_XPE3r, register_type_global },
    {THDI_HDRM_POOL_CFGr, register_type_global },
    {THDI_HDRM_POOL_COUNT_HPr, register_type_global },
    {THDI_HDRM_POOL_PEAK_COUNT_HPr, register_type_global },
    {THDI_HDRM_PORT_PG_HPIDr, register_type_global },
    {THDI_INPUT_PORT_XON_ENABLESr, register_type_global },
    {THDI_MEM_INIT_STATUSr, register_type_global },
    {THDI_MEMORY_PTPG_CFG_MEM_TMr, register_type_global },
    {THDI_POOL_CONFIGr, register_type_global },
    {THDI_POOL_DROP_STATEr, register_type_global },
    {THDI_POOL_SHARED_COUNT_SPr, register_type_global },
    {THDI_PORT_LIMIT_STATESr, register_type_global },
    {THDI_PORT_MAX_PKT_SIZEr, register_type_global },
    {THDI_PORT_PG_SPIDr, register_type_global },
    {THDI_PORT_PRI_GRP0r, register_type_global },
    {THDI_PORT_PRI_GRP1r, register_type_global },
    {THDI_TO_OOBFC_SP_STr, register_type_global },
    {THDI_TOTAL_CELL_COUNT_PUBLIC_POOLr, register_type_global },
    {THDU_BYPASSr, register_type_global },
    {THDU_DEBUGr, register_type_global },
    {THDU_OUTPUT_PORT_RX_ENABLE_64_XPE0r, register_type_global },
    {THDU_OUTPUT_PORT_RX_ENABLE_64_XPE1r, register_type_global },
    {THDU_OUTPUT_PORT_RX_ENABLE_64_XPE2r, register_type_global },
    {THDU_OUTPUT_PORT_RX_ENABLE_64_XPE3r, register_type_global },
    {THDU_PORT_E2ECC_COS_SPIDr, register_type_global },
    {XLMAC_PAUSE_CTRLr, register_type_per_port},
    {XLMAC_PFC_CTRLr, register_type_per_port },
    {XLMAC_PFC_DAr, register_type_per_port },
    {XLMAC_PFC_OPCODEr, register_type_per_port },
    {XLMAC_PFC_TYPEr, register_type_per_port },
    {XLMAC_TX_MAC_SAr, register_type_per_port },
    {XPORT_TO_MMU_BKPr, register_type_global },
    {INVALIDr, register_type_global} /* Must be the last element in this structure */
};

/* Structure that maintains  diag cmdlist, reg_list, mem_list  for
 * "mmu" feature for tomahawk chipset. */
techsupport_data_t techsupport_mmu_tomahawk_data = {
    techsupport_mmu_diag_cmdlist,
    techsupport_mmu_tomahawk_reg_list,
    techsupport_mmu_tomahawk_memory_table_list,
    techsupport_mmu_tomahawk_diag_cmdlist
#ifndef BCM_SW_STATE_DUMP_DISABLE
    , techsupport_mmu_sw_dump_cmdlist,
   techsupport_mmu_tomahawk_sw_dump_cmdlist
#endif /* BCM_SW_STATE_DUMP_DISABLE */
};

