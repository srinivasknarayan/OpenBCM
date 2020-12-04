/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/port/bcm56880_a0/bcm56880_a0_PORT_ING_EGR_BLOCK_PROFILE.map.ltl for
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
/* PORT_ING_EGR_BLOCK_PROFILE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_field_data_mmd[] = {
    { /* 0 PORT_ING_EGR_BLOCK_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY | BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56880_A0_DNA_4_7_11_LRD_PORT_ING_EGR_BLOCK_PROFILE_INFO_ID_T_DATA,
    },
    { /* 1 SKIP_VLAN_ING_EGR_MEMBERSHIP_CHECK */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 2 SKIP_VLAN_ING_EGR_STG_CHECK */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 SKIP_ING_EGR_BLOCK */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 4,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 SKIP_L3_MEMBER_PRUNING */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 5 SKIP_L2_MEMBER_PRUNING */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_field_data = {
    .fields = 6,
    .field = bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 3,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_attr_group = {
    .attributes = 3,
    .attr = bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_src_field_desc_s0[1] = {
    {
        .field_id  = PORT_ING_EGR_BLOCK_PROFILEt_SKIP_ING_EGR_BLOCKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_port_ing_egr_block_profile_dst_field_desc_d0[1] = {
    {
        .field_id  = DISABLE_BITMAP_MASKf,
        .field_idx = 0,
        .minbit    = 2,
        .maxbit    = 5,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_PORT_ING_BLOCK_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_port_ing_egr_block_profile_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_PORT_ING_BLOCK_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_port_ing_egr_block_profile_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_bcmltx_port_ing_block_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_ipost_membership_check_block_mask_config_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_ING_EGR_BLOCK_PROFILEt_PORT_ING_EGR_BLOCK_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DISABLE_MEMBERSHIP_CHECKf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 7,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_ING_EGR_BLOCK_PROFILEt_SKIP_VLAN_ING_EGR_MEMBERSHIP_CHECKf,
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
            .field_id  = DISABLE_MEMBERSHIP_STATE_CHECKf,
            .field_idx = 0,
            .minbit    = 6,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_ING_EGR_BLOCK_PROFILEt_SKIP_VLAN_ING_EGR_STG_CHECKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DISABLE_L3_BMP_PRUNINGf,
            .field_idx = 0,
            .minbit    = 1,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_ING_EGR_BLOCK_PROFILEt_SKIP_L3_MEMBER_PRUNINGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DISABLE_L2_BMP_PRUNINGf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = PORT_ING_EGR_BLOCK_PROFILEt_SKIP_L2_MEMBER_PRUNINGf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_port_ing_block_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_MEMBERSHIP_CHECK_BLOCK_MASK_CONFIG_PROFILEm,
        },
        .entries = 7,
        .entry = bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_ipost_membership_check_block_mask_config_profile_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map = {
    .src_id = PORT_ING_EGR_BLOCK_PROFILEt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profile_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_port_ing_egr_block_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
