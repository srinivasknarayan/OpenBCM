/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_R_VXLAN_UDP_DST_PORT.map.ltl for
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
/* R_VXLAN_UDP_DST_PORT field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_field_data_mmd[] = {
    { /* 0 PORT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_field_data = {
    .fields = 1,
    .field = bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_attr_group = {
    .attributes = 1,
    .attr = bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_VXLAN_UDP_DST_PORTt_PORTf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_VXLAN_UDP_DST_PORTt_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_VXLAN_UDP_DST_PORTt_PORTf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_R_VXLAN_UDP_DST_PORTt_PORTf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_dst_field_desc[4] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 170,
        .maxbit    = 177,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 162,
        .maxbit    = 169,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 170,
        .maxbit    = 177,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 162,
        .maxbit    = 169,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_R_VXLAN_UDP_DST_PORTT_PORTF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_R_VXLAN_UDP_DST_PORTT_PORTF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_r_vxlan_udp_dst_portt_portf_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_iparser1_hme_stage4_tcam_only_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 19,
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_INDEX,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 5,
            .entry_idx = 1,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 6,
            }
        },
    },
    { /* 2 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 3 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_r_vxlan_udp_dst_portt_portf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = IPARSER1_HME_STAGE4_TCAM_ONLYm,
        },
        .entries = 4,
        .entry = bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_iparser1_hme_stage4_tcam_only_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_R_VXLAN_UDP_DST_PORTt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_field_data,
    .groups = 1,
    .group  = bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_port_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_r_vxlan_udp_dst_portt_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
