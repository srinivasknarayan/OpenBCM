/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/ctr/bcm56780_a0/bcm56780_a0_CTR_ING_TM_BST_PORT_PRI_GRP.map.ltl for
 *      bcm56780_a0
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <bcmlrd/bcmlrd_internal.h>
#include <bcmlrd/chip/bcmlrd_id.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56780_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* CTR_ING_TM_BST_PORT_PRI_GRP field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_field_data_mmd[] = {
    { /* 0 PORT_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_lrd_ifd_u16_0x4f,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 TM_PRI_GRP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 2 SHARED_CELLS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0x3ffff,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
    { /* 3 HEADROOM_CELLS */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0x3ffff,
      .depth = 0,
      .width = 18,
      .edata = NULL,
    },
    { /* 4 OPERATIONAL_STATE */
      .flags = BCMLRD_FIELD_F_READ_ONLY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCMLTD_COMMON_CTR_PORT_ENTRY_STATE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_field_data = {
    .fields = 5,
    .field = bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MAX_INDEX,
        .value = 3,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INSTANCE_MIN_INDEX,
        .value = 0,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 639,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 639,
    },
    { /* 6 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_attr_group = {
    .attributes = 7,
    .attr = bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_mmu_local_port_pipe_idx_src_field_desc_s0[1] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_mmu_local_port_pipe_idx_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 4,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 1,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s4[1] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_HEADROOM_CELLSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d4[8] = {
    {
        .field_id  = PG0_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 18,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG1_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 19,
        .maxbit    = 37,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG2_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 38,
        .maxbit    = 56,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG3_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 57,
        .maxbit    = 75,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG4_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 76,
        .maxbit    = 94,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG5_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 95,
        .maxbit    = 113,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG6_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 114,
        .maxbit    = 132,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG7_BST_STAT_HDRMf,
        .field_idx = 0,
        .minbit    = 133,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s9[2] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_TM_PRI_GRP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_track_index_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TRACK_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s4[1] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_PORT_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_PT_SUPPRESS,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_port_oper_state_src_field_desc_s4[1] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_OPERATIONAL_STATEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s3[1] = {
    {
        .field_id  = CTR_ING_TM_BST_PORT_PRI_GRPt_SHARED_CELLSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d3[8] = {
    {
        .field_id  = PG0_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 18,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG1_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 19,
        .maxbit    = 37,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG2_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 38,
        .maxbit    = 56,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG3_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 57,
        .maxbit    = 75,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG4_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 76,
        .maxbit    = 94,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG5_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 95,
        .maxbit    = 113,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG6_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 114,
        .maxbit    = 132,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = PG7_SHARED_COUNTf,
        .field_idx = 0,
        .minbit    = 133,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_mmu_local_port_pipe_idx_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_MMU_LOCAL_PORT_PIPE_IDX_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_mmu_local_port_pipe_idx_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_lrd_bcmltx_mmu_local_port_pipe_idx_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s4_k2_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_FWD_S4_K2_D4_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s4,
    .dst_fields = 8,
    .dst = bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d4,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s4_k2_d4_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_REV_S4_K2_D4_ID,
    .src_fields = 8,
    .src = bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d4,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s4,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s9_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S9_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s9,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s9_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S9_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_track_index_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56780_a0_lrd_bcmltx_track_index_src_field_desc_s9,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s4_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_PT_SUPPRESS_XFRM_HANDLER_FWD_S4_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_port_pt_suppress_src_field_desc_s4,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_pt_suppress_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s4_k4_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PORT_OPER_STATE_XFRM_HANDLER_REV_S4_K4_D0_ID,
    .src_fields = 0,
    .src = NULL,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_port_oper_state_src_field_desc_s4,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s3_k2_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_FWD_S3_K2_D3_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s3,
    .dst_fields = 8,
    .dst = bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s3_k2_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_REV_S3_K2_D3_ID,
    .src_fields = 8,
    .src = bcm56780_a0_lrd_bcmltx_pt_field_sel_ctr_ing_tm_bst_port_pri_grp_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s3,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_mmu_thdi_port_pg_hdrm_bst_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_mmu_local_port_pipe_idx_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_mmu_local_port_pipe_idx_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s4_k2_d4 */
                .desc = &bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s4_k2_d4_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s4_k2_d4 */
                .desc = &bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s4_k2_d4_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_mmu_thdi_port_pg_shared_bst_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s9_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s9_d0_desc,
            },
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s9_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_track_index_xfrm_handler_rev_s9_d0_desc,
            },
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_mmu_local_port_pipe_idx_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_mmu_local_port_pipe_idx_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_KEY_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s4_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_port_pt_suppress_xfrm_handler_fwd_s4_d0_desc,
            },
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_ALWAYS_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s4_k4_d0 */
                .desc = &bcm56780_a0_lta_bcmltx_port_oper_state_xfrm_handler_rev_s4_k4_d0_desc,
            },
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FWD_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s3_k2_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s3_k2_d3_desc,
            },
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_REV_VALUE_FIELD_XFRM_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .xfrm = {
                /* handler: bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s3_k2_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s3_k2_d3_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56780_a0_lrd_bcmltx_ctr_ing_tm_bst_port_pri_grp_validate_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_VALUE_FIELD_VALIDATION,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_lta_bcmltx_ctr_ing_tm_bst_port_pri_grp_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56780_A0_LTA_BCMLTX_CTR_ING_TM_BST_PORT_PRI_GRP_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDI_PORT_PG_HDRM_BSTm,
        },
        .entries = 3,
        .entry = bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_mmu_thdi_port_pg_hdrm_bst_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDI_PORT_PG_SHARED_BSTm,
        },
        .entries = 7,
        .entry = bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_mmu_thdi_port_pg_shared_bst_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_lrd_bcmltx_ctr_ing_tm_bst_port_pri_grp_validate_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map = {
    .src_id = CTR_ING_TM_BST_PORT_PRI_GRPt,
    .field_data = &bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_field_data,
    .groups = 3,
    .group  = bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grp_map_group,
    .table_attr = &bcm56780_a0_lrd_ctr_ing_tm_bst_port_pri_grpt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
