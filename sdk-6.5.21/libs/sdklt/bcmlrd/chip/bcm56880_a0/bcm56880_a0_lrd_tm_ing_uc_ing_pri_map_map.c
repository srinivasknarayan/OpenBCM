/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/tm/bcm56880_a0/bcm56880_a0_TM_ING_UC_ING_PRI_MAP.map.ltl for
 *      bcm56880_a0
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
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "bcm56880_a0_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* TM_ING_UC_ING_PRI_MAP field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_field_data_mmd[] = {
    { /* 0 TM_ING_UC_ING_PRI_MAP_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 1 ING_PRI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 TM_PRI_GRP_ID */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_field_data = {
    .fields = 3,
    .field = bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = true,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_PREPOPULATE,
        .value = true,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 127,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
    { /* 4 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 127,
    },
    { /* 5 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_attr_group = {
    .attributes = 6,
    .attr = bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_copy_field_src_field_desc_s11[1] = {
    {
        .field_id  = TM_ING_UC_ING_PRI_MAPt_TM_ING_UC_ING_PRI_MAP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_copy_field_tm_ing_uc_ing_pri_map_dst_field_desc_d6[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_track_index_src_field_desc_s24[2] = {
    {
        .field_id  = TM_ING_UC_ING_PRI_MAPt_TM_ING_UC_ING_PRI_MAP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = TM_ING_UC_ING_PRI_MAPt_ING_PRIf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 3,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_track_index_tm_ing_uc_ing_pri_map_dst_field_desc_d0[1] = {
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
bcm56880_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s12[1] = {
    {
        .field_id  = TM_ING_UC_ING_PRI_MAPt_TM_PRI_GRP_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_pt_field_sel_tm_ing_uc_ing_pri_map_dst_field_desc_d10[16] = {
    {
        .field_id  = INPPRI0_PGf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 2,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI1_PGf,
        .field_idx = 0,
        .minbit    = 3,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI2_PGf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 8,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI3_PGf,
        .field_idx = 0,
        .minbit    = 9,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI4_PGf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 14,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI5_PGf,
        .field_idx = 0,
        .minbit    = 15,
        .maxbit    = 17,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI6_PGf,
        .field_idx = 0,
        .minbit    = 18,
        .maxbit    = 20,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI7_PGf,
        .field_idx = 0,
        .minbit    = 21,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI8_PGf,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 26,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI9_PGf,
        .field_idx = 0,
        .minbit    = 27,
        .maxbit    = 29,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI10_PGf,
        .field_idx = 0,
        .minbit    = 30,
        .maxbit    = 32,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI11_PGf,
        .field_idx = 0,
        .minbit    = 33,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI12_PGf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 38,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI13_PGf,
        .field_idx = 0,
        .minbit    = 39,
        .maxbit    = 41,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI14_PGf,
        .field_idx = 0,
        .minbit    = 42,
        .maxbit    = 44,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = INPPRI15_PGf,
        .field_idx = 0,
        .minbit    = 45,
        .maxbit    = 47,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s11_d6_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S11_D6_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_copy_field_src_field_desc_s11,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_copy_field_tm_ing_uc_ing_pri_map_dst_field_desc_d6,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s24_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_FWD_S24_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_lrd_bcmltx_track_index_src_field_desc_s24,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_track_index_tm_ing_uc_ing_pri_map_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_rev_s24_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_TRACK_INDEX_XFRM_HANDLER_REV_S24_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_track_index_tm_ing_uc_ing_pri_map_dst_field_desc_d0,
    .dst_fields = 2,
    .dst = bcm56880_a0_lrd_bcmltx_track_index_src_field_desc_s24,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s12_k7_d10_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_FWD_S12_K7_D10_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s12,
    .dst_fields = 16,
    .dst = bcm56880_a0_lrd_bcmltx_pt_field_sel_tm_ing_uc_ing_pri_map_dst_field_desc_d10,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s12_k7_d10_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_PT_FIELD_SEL_XFRM_HANDLER_REV_S12_K7_D10_ID,
    .src_fields = 16,
    .src = bcm56880_a0_lrd_bcmltx_pt_field_sel_tm_ing_uc_ing_pri_map_dst_field_desc_d10,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_pt_field_sel_src_field_desc_s12,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_mmu_thdi_uc_inppri_pg_profile_map_entry[] = {
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
                /* handler: bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s11_d6 */
                .desc = &bcm56880_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s11_d6_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s24_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_fwd_s24_d0_desc,
            },
        },
    },
    { /* 2 */
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
                /* handler: bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_rev_s24_d0 */
                .desc = &bcm56880_a0_lta_bcmltx_track_index_xfrm_handler_rev_s24_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s12_k7_d10 */
                .desc = &bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_fwd_s12_k7_d10_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s12_k7_d10 */
                .desc = &bcm56880_a0_lta_bcmltx_pt_field_sel_xfrm_handler_rev_s12_k7_d10_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MMU_THDI_UC_INPPRI_PG_PROFILEr,
        },
        .entries = 5,
        .entry = bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_mmu_thdi_uc_inppri_pg_profile_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map = {
    .src_id = TM_ING_UC_ING_PRI_MAPt,
    .field_data = &bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_tm_ing_uc_ing_pri_map_map_group,
    .table_attr = &bcm56880_a0_lrd_tm_ing_uc_ing_pri_mapt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE
};
