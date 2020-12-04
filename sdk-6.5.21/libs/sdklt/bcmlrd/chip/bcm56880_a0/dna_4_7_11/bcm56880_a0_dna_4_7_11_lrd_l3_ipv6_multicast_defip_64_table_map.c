/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56880_a0/dna_4_7_11/bcm56880_a0_dna_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLE.map.ltl for
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
/* L3_IPV6_MULTICAST_DEFIP_64_TABLE field init */
static const bcmlrd_field_data_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_field_data_mmd[] = {
    { /* 0 IPV6_ADDR_UPPER_64 */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 1 VRF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 2 IPV6_ADDR_UPPER_64_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u64_0xffffffffffffffff,
      .depth = 0,
      .width = 64,
      .edata = NULL,
    },
    { /* 3 VRF_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 4 FLEX_CTR_ACTION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x3f,
      .depth = 0,
      .width = 6,
      .edata = NULL,
    },
    { /* 5 STRENGTH_PROFILE_INDEX */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x1f,
      .depth = 0,
      .width = 5,
      .edata = NULL,
    },
    { /* 6 DESTINATION */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 7 DESTINATION_TYPE */
      .flags = BCMLTD_FIELD_F_ENUM,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0xa,
      .depth = 0,
      .width = 4,
      .edata = BCM56880_A0_DNA_4_7_11_LRD_DESTINATION_TYPE_DATA,
    },
    { /* 8 CLASS_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 9 OPAQUE_OBJECT */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0xffff,
      .depth = 0,
      .width = 16,
      .edata = NULL,
    },
    { /* 10 MTU_PROFILE_PTR */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x3ff,
      .depth = 0,
      .width = 10,
      .edata = NULL,
    },
    { /* 11 RPA_ID */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 12 EXPECTED_L3_IIF */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 13 MISC_CTRL_0 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 14 MISC_CTRL_1 */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u8_0xf,
      .depth = 0,
      .width = 4,
      .edata = NULL,
    },
    { /* 15 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .def = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x0,
      .max = &bcm56880_a0_dna_4_7_11_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_field_data = {
    .fields = 16,
    .field = bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 4096,
    },
};

static const bcmlrd_map_attr_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64_MASKf,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 43,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64_MASKf,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64_MASKf,
        .field_idx = 0,
        .minbit    = 44,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_dst_field_desc[4] = {
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 136,
        .maxbit    = 151,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 124,
        .maxbit    = 135,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 186,
        .maxbit    = 201,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 162,
        .maxbit    = 181,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_src_field_desc_s0[4] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64f,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 15,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64f,
        .field_idx = 0,
        .minbit    = 32,
        .maxbit    = 43,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64f,
        .field_idx = 0,
        .minbit    = 16,
        .maxbit    = 31,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_IPV6_ADDR_UPPER_64f,
        .field_idx = 0,
        .minbit    = 44,
        .maxbit    = 63,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_dst_field_desc[4] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 36,
        .maxbit    = 51,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 24,
        .maxbit    = 35,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 86,
        .maxbit    = 101,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 62,
        .maxbit    = 81,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_VRF_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_VRF_MASKf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_dst_field_desc[2] = {
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 112,
        .maxbit    = 123,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 108,
        .maxbit    = 109,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_VRFf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_dst_field_desc[2] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 23,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_IPV6_ADDR_UPPER_64_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_IPV6_ADDR_UPPER_64_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_IPV6_ADDR_UPPER_64F_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_src_field_desc_s0,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_IPV6_ADDR_UPPER_64F_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 4,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_dst_field_desc,
    .dst_fields = 4,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_VRF_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_VRF_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_VRFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56880_A0_DNA_4_7_11_LTA_BCMLTX_FIELD_DEMUX_L3_IPV6_MULTICAST_DEFIP_64_TABLET_VRFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56880_a0_dna_4_7_11_lrd_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_memdb_tcam_ifta80_mem4_0_data_only_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 150,
            .maxbit    = 154,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_STRENGTH_PROFILE_INDEXf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 4,
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
            .minbit    = 144,
            .maxbit    = 149,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_FLEX_CTR_ACTIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 5,
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
            .minbit    = 50,
            .maxbit    = 53,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_DESTINATION_TYPEf,
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
            .minbit    = 110,
            .maxbit    = 125,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_DESTINATIONf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
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
            .minbit    = 78,
            .maxbit    = 93,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_CLASS_IDf,
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
            .minbit    = 94,
            .maxbit    = 109,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_OPAQUE_OBJECTf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 15,
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
            .minbit    = 54,
            .maxbit    = 57,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_MISC_CTRL_0f,
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
            .minbit    = 58,
            .maxbit    = 61,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_MISC_CTRL_1f,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 3,
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
            .minbit    = 62,
            .maxbit    = 71,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_MTU_PROFILE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 9,
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
            .minbit    = 46,
            .maxbit    = 49,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_RPA_IDf,
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
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 126,
            .maxbit    = 139,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_EXPECTED_L3_IIFf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 13,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_memdb_tcam_ifta80_mem4_0_only_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = BCMLRD_FIELD_ENTRY_PRIORITY,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 30,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt_ENTRY_PRIORITYf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 30,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 1 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = VALIDf,
            .field_idx = 0,
            .minbit    = 0,
            .maxbit    = 1,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 3,
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 2,
            .maxbit    = 5,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 4,
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 102,
            .maxbit    = 105,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 15,
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 52,
            .maxbit    = 55,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 4,
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 152,
            .maxbit    = 155,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 15,
            }
        },
    },
    { /* 6 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 7 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_ipv6_addr_upper_64f_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 10 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 11 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrf_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 12 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 13 */
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
                /* handler: bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56880_a0_dna_4_7_11_lta_bcmltx_field_demux_l3_ipv6_multicast_defip_64_tablet_vrff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM4_0_DATA_ONLYm,
        },
        .entries = 11,
        .entry = bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_memdb_tcam_ifta80_mem4_0_data_only_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA80_MEM4_0_ONLYm,
        },
        .entries = 14,
        .entry = bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_memdb_tcam_ifta80_mem4_0_only_map_entry
    },
};
const bcmlrd_map_t bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map = {
    .src_id = BCM56880_A0_DNA_4_7_11_L3_IPV6_MULTICAST_DEFIP_64_TABLEt,
    .field_data = &bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_field_data,
    .groups = 2,
    .group  = bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_table_map_group,
    .table_attr = &bcm56880_a0_dna_4_7_11_lrd_l3_ipv6_multicast_defip_64_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
