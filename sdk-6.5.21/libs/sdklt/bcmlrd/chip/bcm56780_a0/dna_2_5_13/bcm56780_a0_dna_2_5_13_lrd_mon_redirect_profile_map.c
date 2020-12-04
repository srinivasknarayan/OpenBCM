/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/mon/bcm56780_a0/bcm56780_a0_MON_REDIRECT_PROFILE.map.ltl for
 *      bcm56780_a0 variant dna_2_5_13
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
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_field_data.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_ltm_intf.h>
#include <bcmlrd/chip/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_lrd_xfrm_field_desc.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include "bcmltd/chip/bcmltd_common_enumpool.h"
#include "../bcm56780_a0_lrd_enumpool.h"
#include "bcm56780_a0_dna_2_5_13_lrd_enumpool.h"
#include <bcmltd/bcmltd_handler.h>
/* MON_REDIRECT_PROFILE field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_field_data_mmd[] = {
    { /* 0 MON_REDIRECT_PROFILE_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 1 CPU_DMA_HEADER_VERSION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 2 CPU_DMA_HEADER_WORD */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 4,
      .width = 1,
      .edata = NULL,
    },
    { /* 3 CPU_DMA_HEADER_FLEX_WORD */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 18,
      .width = 1,
      .edata = NULL,
    },
    { /* 4 NIH_HEADER_START */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 5 NIH_HEADER_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_MON_REDIRECT_NIH_HEADER_TYPE_T_DATA,
    },
    { /* 6 NIH_HEADER_FIELD */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 4,
      .width = 1,
      .edata = NULL,
    },
    { /* 7 NIH_HEADER_TRACE_EVENT */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_MON_REDIRECT_NIH_TRACE_EVENT_SELECT_T_DATA,
    },
    { /* 8 NIH_HEADER_DROP_ENABLE */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 9 NIH_HEADER_OPAQUE_PROPERTY */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 10 RDB_ENQUEUE_PRIORITY */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x3,
      .depth = 0,
      .width = 2,
      .edata = NULL,
    },
    { /* 11 DESTINATION */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 12 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 13 CELL_TRUNCATE_LENGTH */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_MON_REDIRECT_TRUNCATE_CONTROL_T_DATA,
    },
    { /* 14 DROP */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 15 NON_CPU_PORT_COPY_CONTROL */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_MON_REDIRECT_PORT_COPY_CONTROL_T_DATA,
    },
    { /* 16 CPU_COPY_CONTROL */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x3,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_LRD_MON_REDIRECT_CPU_COPY_CONTROL_T_DATA,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_field_data = {
    .fields = 17,
    .field = bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 16,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 2 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MAX_INDEX,
        .value = 15,
    },
    { /* 3 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_MIN_INDEX,
        .value = 0,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_attr_group = {
    .attributes = 4,
    .attr = bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s0[1] = {
    {
        .field_id  = MON_REDIRECT_PROFILEt_CPU_DMA_HEADER_WORDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d0[1] = {
    {
        .field_id  = CPU_DMA_HEADER_SUBTYPEf,
        .field_idx = 0,
        .minbit    = 48,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s1[1] = {
    {
        .field_id  = MON_REDIRECT_PROFILEt_CPU_DMA_HEADER_FLEX_WORDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d1[1] = {
    {
        .field_id  = CPU_DMA_HEADER_WORD_SELECT_BITMAPf,
        .field_idx = 0,
        .minbit    = 52,
        .maxbit    = 69,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s2[1] = {
    {
        .field_id  = MON_REDIRECT_PROFILEt_NIH_HEADER_FIELDf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d2[1] = {
    {
        .field_id  = NIH_HEADER_SUBTYPEf,
        .field_idx = 0,
        .minbit    = 20,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s0,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d0,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S1_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s1,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d1,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s1_d1_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S1_D1_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d1,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s1,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s2_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S2_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s2,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s2_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_MON_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S2_D2_ID,
    .src_fields = 1,
    .src = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_mon_redirect_profile_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56780_a0_dna_2_5_13_lrd_bcmltx_mon_array_to_pbmp_src_field_desc_s2,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_epost_egr_recirc_profile_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_MON_REDIRECT_PROFILE_IDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CPU_DMA_HEADER_VERSIONf,
            .field_idx = 0,
            .minbit    = 70,
            .maxbit    = 71,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_CPU_DMA_HEADER_VERSIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = NIH_STARTf,
            .field_idx = 0,
            .minbit    = 12,
            .maxbit    = 13,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NIH_HEADER_STARTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = NIH_HEADER_TYPEf,
            .field_idx = 0,
            .minbit    = 14,
            .maxbit    = 19,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NIH_HEADER_TYPEf,
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
            .field_id  = NIH_TRACE_VECTOR_CTRLf,
            .field_idx = 0,
            .minbit    = 10,
            .maxbit    = 11,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NIH_HEADER_TRACE_EVENTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = NIH_DROP_CODE_CTRLf,
            .field_idx = 0,
            .minbit    = 9,
            .maxbit    = 9,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NIH_HEADER_DROP_ENABLEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = OPAQUE_CTRL_Cf,
            .field_idx = 0,
            .minbit    = 44,
            .maxbit    = 47,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NIH_HEADER_OPAQUE_PROPERTYf,
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
            .field_id  = RDB_ENQUEUE_PRIORITYf,
            .field_idx = 0,
            .minbit    = 7,
            .maxbit    = 8,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_RDB_ENQUEUE_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 8 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATIONf,
            .field_idx = 0,
            .minbit    = 28,
            .maxbit    = 43,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DESTINATION_TYPEf,
            .field_idx = 0,
            .minbit    = 24,
            .maxbit    = 27,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_DESTINATION_TYPEf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 10 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = COPY_TRUNCATE_CTRLf,
            .field_idx = 0,
            .minbit    = 5,
            .maxbit    = 6,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_CELL_TRUNCATE_LENGTHf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 11 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = SWITCHED_PACKET_DROP_ENf,
            .field_idx = 0,
            .minbit    = 4,
            .maxbit    = 4,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_DROPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 0,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 12 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = NON_CPU_COPY_CTRLf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 3,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_NON_CPU_PORT_COPY_CONTROLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 13 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = CPU_COPY_CTRLf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = MON_REDIRECT_PROFILEt_CPU_COPY_CONTROLf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 1,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 14 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 15 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 16 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s1_d1 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s1_d1_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s1_d1 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s1_d1_desc,
            },
        },
    },
    { /* 18 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s2_d2 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_fwd_s2_d2_desc,
            },
        },
    },
    { /* 19 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s2_d2 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_mon_array_to_pbmp_xfrm_handler_rev_s2_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = EPOST_EGR_RECIRC_PROFILEm,
        },
        .entries = 20,
        .entry = bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_epost_egr_recirc_profile_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map = {
    .src_id = MON_REDIRECT_PROFILEt,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profile_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_mon_redirect_profilet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
