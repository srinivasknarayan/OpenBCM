/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/trunk/bcm56780_a0/bcm56780_a0_TRUNK.map.ltl for
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
/* TRUNK field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_trunk_map_field_data_mmd[] = {
    { /* 0 TRUNK_ID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 1 LB_MODE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x2,
      .depth = 0,
      .width = 2,
      .edata = BCM56780_A0_DNA_2_5_13_LRD_TRUNK_LB_MODE_T_DATA,
    },
    { /* 2 UC_RTAG */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 3 UC_MAX_MEMBERS */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x1,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x80,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x80,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 4 UC_MEMBER_CNT */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x80,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 5 UC_MEMBER_MODID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 6 UC_MEMBER_MODPORT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 7 MON_AGM_POOL */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 8 MON_AGM_ID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 9 NONUC_MEMBER_CNT */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x80,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 10 NONUC_MEMBER_MODID */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 11 NONUC_MEMBER_MODPORT */
      .flags = BCMLRD_FIELD_F_UNMAPPED,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .depth = 0,
      .width = 0,
      .edata = NULL,
    },
    { /* 12 UC_MEMBER_PORT_SYSTEM */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 128,
      .width = 16,
      .edata = NULL,
    },
    { /* 13 NONUC_MEMBER_PORT_SYSTEM */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 128,
      .width = 16,
      .edata = NULL,
    },
    { /* 14 MEMBER_L2_EIF */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x7ff,
      .depth = 128,
      .width = 11,
      .edata = NULL,
    },
    { /* 15 UC_EGR_BLOCK */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 128,
      .width = 1,
      .edata = NULL,
    },
    { /* 16 NONUC_EGR_BLOCK */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 128,
      .width = 1,
      .edata = NULL,
    },
    { /* 17 RH_SIZE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x1,
      .depth = 0,
      .width = 1,
      .edata = BCM56780_A0_LRD_TRUNK_RH_SIZE_T_DATA,
    },
    { /* 18 RH_UC_RANDOM_SEED */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0xffffffff,
      .depth = 0,
      .width = 32,
      .edata = NULL,
    },
    { /* 19 RH_UC_MEMBER_CNT */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x80,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 20 RH_UC_MEMBER_PORT_SYSTEM */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xffff,
      .depth = 128,
      .width = 16,
      .edata = NULL,
    },
    { /* 21 RH_MEMBER_L2_EIF */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x7ff,
      .depth = 128,
      .width = 11,
      .edata = NULL,
    },
    { /* 22 RH_UC_EGR_BLOCK */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 128,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_trunk_map_field_data = {
    .fields = 23,
    .field = bcm56780_a0_dna_2_5_13_lrd_trunk_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_trunkt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_ENTRY_LIMIT,
        .value = 1023,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_trunkt_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_5_13_lrd_trunkt_attr_entry,
};

static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_bcmimm_trunk_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_TABLE_HANDLER,
        .desc = {
            .field_id  = 0,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 0,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            /* handler: bcm56780_a0_dna_2_5_13_lta_bcmimm_trunk_cth_handler */
            .handler_id = BCMLTD_TABLE_BCM56780_A0_DNA_2_5_13_LTA_BCMIMM_TRUNK_CTH_HANDLER_ID
        }
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_trunk_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_CUSTOM,
            .id = 0,
        },
        .entries = 1,
        .entry = bcm56780_a0_dna_2_5_13_lrd_bcmimm_trunk_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_trunk_map = {
    .src_id = TRUNKt,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_trunk_map_field_data,
    .groups = 1,
    .group  = bcm56780_a0_dna_2_5_13_lrd_trunk_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_trunkt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
