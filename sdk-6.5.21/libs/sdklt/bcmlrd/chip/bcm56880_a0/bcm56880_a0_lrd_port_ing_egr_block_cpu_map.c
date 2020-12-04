/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/port/bcm56880_a0/bcm56880_a0_PORT_ING_EGR_BLOCK_CPU.map.ltl for
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
/* PORT_ING_EGR_BLOCK_CPU field init */
static const bcmlrd_field_data_t bcm56880_a0_lrd_port_ing_egr_block_cpu_map_field_data_mmd[] = {
    { /* 0 MASK_PORTS */
      .flags = 0,
      .min = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .def = &bcm56880_a0_lrd_ifd_is_true_0x0,
      .max = &bcm56880_a0_lrd_ifd_is_true_0x1,
      .depth = 160,
      .width = 1,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_lrd_port_ing_egr_block_cpu_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_lrd_port_ing_egr_block_cpu_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_lrd_port_ing_egr_block_cput_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_lrd_port_ing_egr_block_cput_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_lrd_port_ing_egr_block_cput_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s7[1] = {
    {
        .field_id  = PORT_ING_EGR_BLOCK_CPUt_MASK_PORTSf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 0,
        .entry_idx = 0,
        .reserved  = 0
    },
};

const bcmltd_field_desc_t
bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_port_ing_egr_block_cpu_dst_field_desc_d2[1] = {
    {
        .field_id  = BMPf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 159,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s7_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_FWD_S7_D2_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s7,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_port_ing_egr_block_cpu_dst_field_desc_d2,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s7_d2_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_LTA_BCMLTX_PORT_ARRAY_TO_PBMP_XFRM_HANDLER_REV_S7_D2_ID,
    .src_fields = 1,
    .src = bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_port_ing_egr_block_cpu_dst_field_desc_d2,
    .dst_fields = 1,
    .dst = bcm56880_a0_lrd_bcmltx_port_array_to_pbmp_src_field_desc_s7,
};


static const bcmlrd_map_entry_t bcm56880_a0_lrd_port_ing_egr_block_cput_ipost_membership_check_block_mask_cpu_bmp_map_entry[] = {
    { /* 0 */
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
                /* handler: bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s7_d2 */
                .desc = &bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_fwd_s7_d2_desc,
            },
        },
    },
    { /* 1 */
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
                /* handler: bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s7_d2 */
                .desc = &bcm56880_a0_lta_bcmltx_port_array_to_pbmp_xfrm_handler_rev_s7_d2_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_lrd_port_ing_egr_block_cpu_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPOST_MEMBERSHIP_CHECK_BLOCK_MASK_CPU_BMPm,
        },
        .entries = 2,
        .entry = bcm56880_a0_lrd_port_ing_egr_block_cput_ipost_membership_check_block_mask_cpu_bmp_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_lrd_port_ing_egr_block_cpu_map = {
    .src_id = PORT_ING_EGR_BLOCK_CPUt,
    .field_data = &bcm56880_a0_lrd_port_ing_egr_block_cpu_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_lrd_port_ing_egr_block_cpu_map_group,
    .table_attr = &bcm56880_a0_lrd_port_ing_egr_block_cput_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
