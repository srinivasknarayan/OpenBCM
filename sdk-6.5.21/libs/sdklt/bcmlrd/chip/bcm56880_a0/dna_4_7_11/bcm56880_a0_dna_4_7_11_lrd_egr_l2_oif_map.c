/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_EGR_L2_OIF.map.ltl for
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
/* EGR_L2_OIF field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_field_data_mmd[] = {
    { /* 0 L2_OIF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 1 EDIT_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 2 L2_PROCESS_CTRL */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 3 TPID_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 4 TPID_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 5 DOT1P_PTR_STR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x7,
      .depth = 0,
      .width = 3,
      .edata = NULL,
    },
    { /* 6 TOS_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 7 DOT1P_REMARK_BASE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 8 EGR_PORT_GROUP_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 9 STRENGTH_PRFL_IDX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 10 EFP_CTRL_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 11 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 12 VIEW_T */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56880_A0_DNA_4_7_11_LRD_L2_OIF_VT_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_field_data = {
    .fields = 13,
    .field = bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 2047,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_src_field_desc_s0[1] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_L2_OIFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_egr_l2_oif_dst_field_desc_d0[2] = {
    {
        .field_id  = BCMLRD_FIELD_INDEX,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 9,
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
bcm56880_a0_dna_4_7_11_lrd_depth_expand_transform_tbl_t0[2] = {
    MEMDB_EFTA20_MEM8m,
    MEMDB_EFTA20_MEM9m,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_fwd_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_DEPTH_EXPAND_XFRM_HANDLER_FWD_S0_D0_X0_T0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_egr_l2_oif_dst_field_desc_d0,
    .tables = 2,
    .tbl = bcm56880_a0_dna_4_7_11_lrd_depth_expand_transform_tbl_t0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_rev_s0_d0_x0_t0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_DEPTH_EXPAND_XFRM_HANDLER_REV_S0_D0_X0_T0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_egr_l2_oif_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_depth_expand_src_field_desc_s0,
    .tables = 2,
    .tbl = bcm56880_a0_dna_4_7_11_lrd_depth_expand_transform_tbl_t0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_memdb_efta20_mem8_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 127,
            .maxbit    = 127,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
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
            .minbit    = 122,
            .maxbit    = 126,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_STRENGTH_PRFL_IDXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
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
            .maxbit    = 121,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
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
            .minbit    = 102,
            .maxbit    = 104,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_PTR_STRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
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
            .minbit    = 94,
            .maxbit    = 97,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EDIT_CTRL_IDf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 106,
            .maxbit    = 109,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EFP_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
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
            .minbit    = 110,
            .maxbit    = 113,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_L2_PROCESS_CTRLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
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
            .minbit    = 74,
            .maxbit    = 89,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EGR_PORT_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 42,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 58,
            .maxbit    = 73,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 26,
            .maxbit    = 33,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TOS_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 110,
            .maxbit    = 112,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_PTR_STRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 2,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 105,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EDIT_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 114,
            .maxbit    = 117,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EFP_CTRL_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 118,
            .maxbit    = 121,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_L2_PROCESS_CTRLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 15 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 66,
            .maxbit    = 81,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EGR_PORT_GROUP_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 16 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 34,
            .maxbit    = 41,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 17 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 50,
            .maxbit    = 65,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_0f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 18 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 86,
            .maxbit    = 101,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 19 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 18,
            .maxbit    = 25,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TOS_REMARK_BASE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 20 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_fwd_s0_d0_x0_t0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_fwd_s0_d0_x0_t0_desc,
            },
        },
    },
    { /* 21 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_rev_s0_d0_x0_t0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_depth_expand_xfrm_handler_rev_s0_d0_x0_t0_desc,
            },
        },
    },
};
const bcmlrd_field_selector_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_select[] = {
    { /* Node:0, Type:ROOT, VIEW_T */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_ROOT,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .group_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .entry_index = BCMLRD_INVALID_SELECTOR_INDEX,
        .selection_parent = BCMLRD_INVALID_SELECTOR_INDEX,
        .group = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_id = BCMLRD_INVALID_SELECTOR_INDEX,
        .selector_value = BCMLRD_INVALID_SELECTOR_INDEX
    },
    { /* Node:1, Type:Directmap, STRENGTH_PRFL_IDX:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_STRENGTH_PRFL_IDXf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:2, Type:Directmap, FLEX_CTR_ACTION:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_FLEX_CTR_ACTIONf,
        .group_index = 0,
        .entry_index = 2,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:3, Type:Directmap, DOT1P_PTR_STR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_PTR_STRf,
        .group_index = 0,
        .entry_index = 3,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:4, Type:Directmap, EDIT_CTRL_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EDIT_CTRL_IDf,
        .group_index = 0,
        .entry_index = 4,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:5, Type:Directmap, EFP_CTRL_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EFP_CTRL_IDf,
        .group_index = 0,
        .entry_index = 5,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:6, Type:Directmap, L2_PROCESS_CTRL:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_L2_PROCESS_CTRLf,
        .group_index = 0,
        .entry_index = 6,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:7, Type:Directmap, EGR_PORT_GROUP_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EGR_PORT_GROUP_IDf,
        .group_index = 0,
        .entry_index = 7,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:8, Type:Directmap, DOT1P_REMARK_BASE_PTR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 8,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:9, Type:Directmap, TPID_0:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_0f,
        .group_index = 0,
        .entry_index = 9,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:10, Type:Directmap, TOS_REMARK_BASE_PTR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TOS_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 10,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 1 /* VT_L2_OIF_FLEX_CNTR */
    },
    { /* Node:11, Type:Directmap, STRENGTH_PRFL_IDX:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_STRENGTH_PRFL_IDXf,
        .group_index = 0,
        .entry_index = 1,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:12, Type:Directmap, DOT1P_PTR_STR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_PTR_STRf,
        .group_index = 0,
        .entry_index = 11,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:13, Type:Directmap, EDIT_CTRL_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EDIT_CTRL_IDf,
        .group_index = 0,
        .entry_index = 12,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:14, Type:Directmap, EFP_CTRL_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EFP_CTRL_IDf,
        .group_index = 0,
        .entry_index = 13,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:15, Type:Directmap, L2_PROCESS_CTRL:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_L2_PROCESS_CTRLf,
        .group_index = 0,
        .entry_index = 14,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:16, Type:Directmap, EGR_PORT_GROUP_ID:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_EGR_PORT_GROUP_IDf,
        .group_index = 0,
        .entry_index = 15,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:17, Type:Directmap, DOT1P_REMARK_BASE_PTR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_DOT1P_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 16,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:18, Type:Directmap, TPID_0:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_0f,
        .group_index = 0,
        .entry_index = 17,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:19, Type:Directmap, TPID_1:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TPID_1f,
        .group_index = 0,
        .entry_index = 18,
        .selection_parent = 0,
        .group = 0,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
    { /* Node:20, Type:Directmap, TOS_REMARK_BASE_PTR:MEMDB_EFTA20_MEM8.DATA */
        .selector_type = BCMLRD_FIELD_SELECTOR_TYPE_MAP_ENTRY,
        .field_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_TOS_REMARK_BASE_PTRf,
        .group_index = 0,
        .entry_index = 19,
        .selection_parent = 0,
        .group = 1,
        .selector_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt_VIEW_Tf,
        .selector_value = 0 /* VT_L2_OIF_ITPID */
    },
};

const bcmlrd_field_selector_data_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_select_data = {
    .num_field_selector = 21,
    .field_selector = bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_select,
};

static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_EFTA20_MEM8m,
        },
        .entries = 22,
        .entry = bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_memdb_efta20_mem8_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_EGR_L2_OIFt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_egr_l2_oift_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE,
    .sel = &bcm56880_a0_dna_4_7_11_lrd_egr_l2_oif_map_select_data,
};
