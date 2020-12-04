/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/dlb/bcm56780_a0/bcm56780_a0_DLB_TRUNK_STATS.map.ltl for
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
/* DLB_TRUNK_STATS field init */
static const bcmlrd_field_data_t bcm56780_a0_lrd_dlb_trunk_stats_map_field_data_mmd[] = {
    { /* 0 DLB_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_lrd_ifd_u8_0x1,
      .def = &bcm56780_a0_lrd_ifd_u8_0x1,
      .max = &bcm56780_a0_lrd_ifd_u8_0x7f,
      .depth = 0,
      .width = 7,
      .edata = NULL,
    },
    { /* 1 FAIL_CNT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0x1ffffffff,
      .depth = 0,
      .width = 33,
      .edata = NULL,
    },
    { /* 2 PORT_REASSIGNMENT_CNT */
      .flags = 0,
      .min = &bcm56780_a0_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_lrd_ifd_u64_0x1ffffffff,
      .depth = 0,
      .width = 33,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_lrd_dlb_trunk_stats_map_field_data = {
    .fields = 3,
    .field = bcm56780_a0_lrd_dlb_trunk_stats_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_lrd_dlb_trunk_statst_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = TRUE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MAX_INDEX,
        .value = 127,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TRACK_INDEX_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_lrd_dlb_trunk_statst_attr_group = {
    .attributes = 3,
    .attr = bcm56780_a0_lrd_dlb_trunk_statst_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s6[1] = {
    {
        .field_id  = DLB_TRUNK_STATSt_DLB_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d1[1] = {
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
bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d2[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 6,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d3[1] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 6,
        .entry_idx = 1,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s1[1] = {
    {
        .field_id  = DLB_TRUNK_STATSt_DLB_IDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d1[1] = {
    {
        .field_id  = BCMLRD_FIELD_INSTANCE,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 1,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s3[1] = {
    {
        .field_id  = DLB_TRUNK_STATSt_FAIL_CNTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d3[2] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 14,
        .field_idx = 0,
        .minbit    = 31,
        .maxbit    = 61,
        .entry_idx = 0,
        .sym      = "DLB_LAG_GROUP_STATSm.DLB_DROPSf.ENTRY0",
        .reserved  = 0,
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 15,
        .field_idx = 0,
        .minbit    = 31,
        .maxbit    = 61,
        .entry_idx = 1,
        .sym      = "DLB_LAG_GROUP_STATSm.DLB_DROPSf.ENTRY1",
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s4[1] = {
    {
        .field_id  = DLB_TRUNK_STATSt_PORT_REASSIGNMENT_CNTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d4[2] = {
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 16,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 30,
        .entry_idx = 0,
        .sym      = "DLB_LAG_GROUP_STATSm.PORT_REASSIGNMENTSf.ENTRY0",
        .reserved  = 0,
    },
    {
        .field_id  = BCMLTD_INTERNAL_FIELD_BASE + 17,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 30,
        .entry_idx = 1,
        .sym      = "DLB_LAG_GROUP_STATSm.PORT_REASSIGNMENTSf.ENTRY1",
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S6_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s6,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s6_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_REV_S6_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s6,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S6_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s6,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d3_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_COPY_FIELD_XFRM_HANDLER_FWD_S6_D3_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_copy_field_src_field_desc_s6,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_copy_field_dlb_trunk_stats_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d0_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_ID_XFRM_HANDLER_FWD_S1_D0_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d1_x1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_ID_XFRM_HANDLER_FWD_S1_D1_X1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_dlb_group_stats_id_dlb_trunk_stats_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s3_d3_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_XFRM_HANDLER_FWD_S3_D3_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s3,
    .dst_fields = 2,
    .dst = bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s3_d3_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_XFRM_HANDLER_REV_S3_D3_X0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d3,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s3,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s4_d4_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_XFRM_HANDLER_FWD_S4_D4_X0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s4,
    .dst_fields = 2,
    .dst = bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d4,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s4_d4_x0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_LTA_BCMLTX_DLB_GROUP_STATS_XFRM_HANDLER_REV_S4_D4_X0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_lrd_dlb_group_stats_dst_field_desc_d4,
    .dst_fields = 1,
    .dst = bcm56780_a0_lrd_bcmltx_dlb_group_stats_src_field_desc_s4,
};


static const bcmlrd_map_entry_t bcm56780_a0_lrd_dlb_trunk_statst_dlb_lag_group_stats_map_entry[] = {
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d1 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d1_desc,
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s6_d1 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_rev_s6_d1_desc,
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d2 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d2_desc,
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
                /* handler: bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d3 */
                .desc = &bcm56780_a0_lta_bcmltx_copy_field_xfrm_handler_fwd_s6_d3_desc,
            },
        },
    },
    { /* 4 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d0_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d0_x0_desc,
            },
        },
    },
    { /* 5 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d1_x1 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_id_xfrm_handler_fwd_s1_d1_x1_desc,
            },
        },
    },
    { /* 6 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s3_d3_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s3_d3_x0_desc,
            },
        },
    },
    { /* 7 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s3_d3_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s3_d3_x0_desc,
            },
        },
    },
    { /* 8 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s4_d4_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_fwd_s4_d4_x0_desc,
            },
        },
    },
    { /* 9 */
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
                /* handler: bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s4_d4_x0 */
                .desc = &bcm56780_a0_lta_bcmltx_dlb_group_stats_xfrm_handler_rev_s4_d4_x0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_lrd_dlb_trunk_stats_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = DLB_LAG_GROUP_STATSm,
        },
        .entries = 10,
        .entry = bcm56780_a0_lrd_dlb_trunk_statst_dlb_lag_group_stats_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_lrd_dlb_trunk_stats_map = {
    .src_id = DLB_TRUNK_STATSt,
    .field_data = &bcm56780_a0_lrd_dlb_trunk_stats_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_lrd_dlb_trunk_stats_map_group,
    .table_attr = &bcm56780_a0_lrd_dlb_trunk_statst_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
