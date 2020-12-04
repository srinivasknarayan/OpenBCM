/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/lb_hash/bcm56880_a0/bcm56880_a0_LB_HASH_TRUNK_NONUC_OUTPUT_SELECTION.map.ltl for
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
/* LB_HASH_TRUNK_NONUC_OUTPUT_SELECTION field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_field_data_mmd[] = {
    { /* 0 LB_HASH_TRUNK_NONUC_OUTPUT_SELECTION_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 1 LB_HASH_INSTANCE */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 CONCAT */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 SUBSET_SELECT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0x7,
      .depth = 0,
      .width = 3,
      .edata = BCM56880_A0_LRD_LB_HASH_SUBSET_SELECT_T_DATA,
    },
    { /* 4 OFFSET */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 5 RESULT_SIZE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_lrd_ifd_u32_0xf,
      .depth = 0,
      .width = 4,
      .edata = BCM56880_A0_LRD_LB_HASH_RESULT_SIZE_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_field_data = {
    .fields = 6,
    .field = bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 255,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_src_field_desc_s0[1] = {
    {
        .field_id  = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_LB_HASH_INSTANCEf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_lb_hash_trunk_nonuc_output_selection_dst_field_desc_d0[1] = {
    {
        .field_id  = BCMLRD_FIELD_TABLE_SEL,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const uint32_t
bcm56880_a0_lrd_lb_hash_table_select_trunk_nonuc_transform_tbl_t0[2] = {
    IPOST_LAG_NONUCAST_LAG_SHUFFLE_TABLE_0m,
    IPOST_LAG_NONUCAST_LAG_SHUFFLE_TABLE_1m,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_fwd_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_LB_HASH_TABLE_SELECT_TRUNK_NONUC_XFRM_HANDLER_FWD_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_lb_hash_trunk_nonuc_output_selection_dst_field_desc_d0,
    .tables = 2,
    .tbl = bcm56880_a0_lrd_lb_hash_table_select_trunk_nonuc_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_rev_s0_d0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_LB_HASH_TABLE_SELECT_TRUNK_NONUC_XFRM_HANDLER_REV_S0_D0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_lb_hash_trunk_nonuc_output_selection_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_lb_hash_table_select_trunk_nonuc_src_field_desc_s0,
    .tables = 2,
    .tbl = bcm56880_a0_lrd_lb_hash_table_select_trunk_nonuc_transform_tbl_t0,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_ipost_lag_nonucast_lag_shuffle_table_0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_LB_HASH_TRUNK_NONUC_OUTPUT_SELECTION_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CONCATENATE_DIGESTSf,
            .field_idx = 0,
            .minbit    = 9,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_CONCATf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SUB_SELf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_SUBSET_SELECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OFFSETf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_OFFSETf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = RESULT_SIZEf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt_RESULT_SIZEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
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
                /* handler: bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_fwd_s0_d0_t0 */
                .desc = &bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_fwd_s0_d0_t0_desc,
            },
        },
    },
    { /* 6 */
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
                /* handler: bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_rev_s0_d0_t0 */
                .desc = &bcm56880_a0_lta_bcmltx_lb_hash_table_select_trunk_nonuc_xfrm_handler_rev_s0_d0_t0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_LAG_NONUCAST_LAG_SHUFFLE_TABLE_0m,
        },
        .entries = 7,
        .entry = bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_ipost_lag_nonucast_lag_shuffle_table_0_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map = {
    .src_id = LB_HASH_TRUNK_NONUC_OUTPUT_SELECTIONt,
    .field_data = &bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selection_map_group,
    .table_attr = &bcm56880_a0_lrd_lb_hash_trunk_nonuc_output_selectiont_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
