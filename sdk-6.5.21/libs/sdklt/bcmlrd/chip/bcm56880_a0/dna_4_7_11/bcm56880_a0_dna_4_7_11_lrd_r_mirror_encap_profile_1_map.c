/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_R_MIRROR_ENCAP_PROFILE_1.map.ltl for
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
/* R_MIRROR_ENCAP_PROFILE_1 field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_field_data_mmd[] = {
    { /* 0 DATA */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_binary_0x0_640,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_binary_0x0_640,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_binary_0xffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffffff_640,
      .depth = 0,
      .width = 640,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_src_field_desc_s0[1] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_MIRROR_ENCAP_PROFILE_1t_DATAf,
        .field_idx = 0,
        .minbit    = 320,
        .maxbit    = 639,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_dst_field_desc[1] = {
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 319,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_src_field_desc_s1[1] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_MIRROR_ENCAP_PROFILE_1t_DATAf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 319,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_dst_field_desc[1] = {
    {
        .field_id  = DATAf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 319,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_ACC_R_MIRROR_ENCAP_PROFILE_1T_DATAF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_rev_s0_d0_c1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_ACC_R_MIRROR_ENCAP_PROFILE_1T_DATAF_0_XFRM_HANDLER_REV_S0_D0_C1_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_dst_field_desc,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_ACC_R_MIRROR_ENCAP_PROFILE_1T_DATAF_1_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_rev_s0_d0_c1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_ACC_R_MIRROR_ENCAP_PROFILE_1T_DATAF_1_XFRM_HANDLER_REV_S0_D0_C1_ID,
    .src_fields = 1,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_dst_field_desc,
    .dst_fields = 1,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_src_field_desc_s1,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_flex_editor_mirror_encap_0_profile_1_table_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_rev_s0_d0_c1 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_0_xfrm_handler_rev_s0_d0_c1_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_flex_editor_mirror_encap_0_profile_2_table_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 1,
            }
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_rev_s0_d0_c1 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_acc_r_mirror_encap_profile_1t_dataf_1_xfrm_handler_rev_s0_d0_c1_desc,
            },
        },
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_r_mirror_encap_profile_1_validate_entry[] = {
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
            /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_1_std_val_fv_handler */
            .handler_id = BCMLTD_VALIDATE_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_R_MIRROR_ENCAP_PROFILE_1_STD_VAL_FV_HANDLER_ID
        }
    },
};
static const bcmlrd_map_entry_t
bcm56880_a0_dna_4_7_11_lrd_bcmltx_r_mirror_encap_profile_1_table_commit_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_COMMIT_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_r_mirror_encap_profile_1_subfield_rxfrm_table_commit_handler_c0 */
            .handler_id = BCMLTD_TABLE_COMMIT_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_R_MIRROR_ENCAP_PROFILE_1_SUBFIELD_RXFRM_TABLE_COMMIT_HANDLER_C0_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_EDITOR_MIRROR_ENCAP_0_PROFILE_1_TABLEm,
        },
        .entries = 3,
        .entry = bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_flex_editor_mirror_encap_0_profile_1_table_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = FLEX_EDITOR_MIRROR_ENCAP_0_PROFILE_2_TABLEm,
        },
        .entries = 3,
        .entry = bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_flex_editor_mirror_encap_0_profile_2_table_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_VALIDATION,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_7_11_lrd_bcmltx_r_mirror_encap_profile_1_validate_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_TABLE_COMMIT,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56880_a0_dna_4_7_11_lrd_bcmltx_r_mirror_encap_profile_1_table_commit_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_R_MIRROR_ENCAP_PROFILE_1t,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_field_data,
    .groups = 4,
    .group  = bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_r_mirror_encap_profile_1t_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
