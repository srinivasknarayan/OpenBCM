/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_EGR_L3_OIF_2.map.ltl for
 *      bcm56880_a0 variant dna_4_7_11
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
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_field_data.h>
#include <bcmlrd/chip/bcm56880_a0/bcm56880_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56880_a0_lrd_enumpool.h"
#include "bcm56880_a0_dna_4_7_11_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* EGR_L3_OIF_2 field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_field_data_mmd[] = {
    { /* 0 L3_OIF_2 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x27ff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 1 SRC_MAC_ADDRESS */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 2 TNL_VLAN_TAG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 3 L2_HDR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 4 STG */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 5 MEMBERSHIP_PROFILE_IDX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 6 UNTAG_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 7 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 8 EFP_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_field_data = {
    .fields = 9,
    .field = bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 10239,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s2[1] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_L3_OIF_2f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_egr_l3_oif_2_dst_field_desc_d1[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
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
bcm56880_a0_dna_4_7_11_lrd_depth_expand_tile_mode_transform_tbl_t2[4] = {
    MEMDB_EFTA20_MEM0m,
    MEMDB_EFTA20_MEM1m,
    MEMDB_EFTA20_MEM4m,
    MEMDB_EFTA20_MEM5m,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s2_d1_x1_t2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_FWD_S2_D1_X1_T2_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s2,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_egr_l3_oif_2_dst_field_desc_d1,
    .tables = 4,
    .tbl = bcm56880_a0_dna_4_7_11_lrd_depth_expand_tile_mode_transform_tbl_t2,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s2_d1_x1_t2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_DEPTH_EXPAND_TILE_MODE_XFRM_HANDLER_REV_S2_D1_X1_T2_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_egr_l3_oif_2_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_tile_mode_src_field_desc_s2,
    .tables = 4,
    .tbl = bcm56880_a0_dna_4_7_11_lrd_depth_expand_tile_mode_transform_tbl_t2,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_memdb_efta20_mem0_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 122,
            .maxbit    = 127,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 112,
            .maxbit    = 115,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_EFP_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 116,
            .maxbit    = 119,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_L2_HDR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 48,
            .maxbit    = 95,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_SRC_MAC_ADDRESSf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 96,
            .maxbit    = 111,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_TNL_VLAN_TAGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 40,
            .maxbit    = 47,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_STGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 32,
            .maxbit    = 39,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_MEMBERSHIP_PROFILE_IDXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 16,
            .maxbit    = 23,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t_UNTAG_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s2_d1_x1_t2 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_fwd_s2_d1_x1_t2_desc,
            },
        },
    },
    { /* 9 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s2_d1_x1_t2 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_tile_mode_xfrm_handler_rev_s2_d1_x1_t2_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_egr_l3_oif_2_table_entry_limit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_ENTRY_LIMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_egr_l3_oif_2_index_tile_mode_table_entry_limit_handler */
            .handler_id = BCMLTD_TABLE_ENTRY_LIMIT_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_EGR_L3_OIF_2_INDEX_TILE_MODE_TABLE_ENTRY_LIMIT_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_EFTA20_MEM0m,
        },
        .entries = 10,
        .entry = bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_memdb_efta20_mem0_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_ENTRY_LIMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_7_11_lrd_bcmltx_egr_l3_oif_2_table_entry_limit_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_EGR_L3_OIF_2t,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_egr_l3_oif_2t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
