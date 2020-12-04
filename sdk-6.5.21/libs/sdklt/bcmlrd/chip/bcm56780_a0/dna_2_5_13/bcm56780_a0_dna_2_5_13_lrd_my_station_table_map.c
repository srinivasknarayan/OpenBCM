/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from
 *    INTERNAL/fltg/xgs/npl/bcm56780_a0/dna_2_5_13/bcm56780_a0_dna_2_5_13_MY_STATION_TABLE.map.ltl for
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
/* MY_STATION_TABLE field init */
static const bcmlrd_field_data_t bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_field_data_mmd[] = {
    { /* 0 MACDA */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 1 OVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 2 IVID */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 3 L2_IIF_VFI */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 4 L2_IIF */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 5 MACDA_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u64_0xffffffffffff,
      .depth = 0,
      .width = 48,
      .edata = NULL,
    },
    { /* 6 OVID_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 7 IVID_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0xfff,
      .depth = 0,
      .width = 12,
      .edata = NULL,
    },
    { /* 8 L2_IIF_VFI_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x3fff,
      .depth = 0,
      .width = 14,
      .edata = NULL,
    },
    { /* 9 L2_IIF_MASK */
      .flags = BCMLTD_FIELD_F_KEY,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u16_0x7ff,
      .depth = 0,
      .width = 11,
      .edata = NULL,
    },
    { /* 10 VALID */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_is_true_0x1,
      .depth = 0,
      .width = 1,
      .edata = NULL,
    },
    { /* 11 SPANNING_TREE_GROUP */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 12 MEMBERSHIP_PROFILE_PTR */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u8_0xff,
      .depth = 0,
      .width = 8,
      .edata = NULL,
    },
    { /* 13 ENTRY_PRIORITY */
      .flags = 0,
      .min = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .def = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x0,
      .max = &bcm56780_a0_dna_2_5_13_lrd_ifd_u32_0x7fffffff,
      .depth = 0,
      .width = 31,
      .edata = NULL,
    },
};
const bcmlrd_map_field_data_t bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_field_data = {
    .fields = 14,
    .field = bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_field_data_mmd
};

static const bcmlrd_map_table_attr_t bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_attr_entry[] = {
    { /* 0 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_INTERACTIVE,
        .value = FALSE,
    },
    { /* 1 */
        .key   = BCMLRD_MAP_TABLE_ATTRIBUTE_TABLE_SIZE,
        .value = 1024,
    },
};

static const bcmlrd_map_attr_t bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_attr_group = {
    .attributes = 2,
    .attr = bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_attr_entry,
};


const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_src_field_desc_s0[3] = {
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_MASKf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_MASKf,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_dst_field_desc[3] = {
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 218,
        .maxbit    = 225,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 170,
        .maxbit    = 171,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 166,
        .maxbit    = 166,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_VFI_MASKf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_VFI_MASKf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_dst_field_desc[2] = {
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 206,
        .maxbit    = 217,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = MASKf,
        .field_idx = 0,
        .minbit    = 168,
        .maxbit    = 169,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_src_field_desc_s0[2] = {
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_VFIf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIF_VFIf,
        .field_idx = 0,
        .minbit    = 12,
        .maxbit    = 13,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_dst_field_desc[2] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 46,
        .maxbit    = 57,
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

const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_src_field_desc_s0[3] = {
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIFf,
        .field_idx = 0,
        .minbit    = 0,
        .maxbit    = 7,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIFf,
        .field_idx = 0,
        .minbit    = 8,
        .maxbit    = 9,
        .entry_idx = 0,
        .reserved  = 0
    },
    {
        .field_id  = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_L2_IIFf,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 10,
        .entry_idx = 0,
        .reserved  = 0
    },
};

static const bcmltd_field_desc_t
bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_dst_field_desc[3] = {
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 58,
        .maxbit    = 65,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 10,
        .maxbit    = 11,
        .entry_idx = 0,
        .reserved  = 0,
    },
    {
        .field_id  = KEYf,
        .field_idx = 0,
        .minbit    = 6,
        .maxbit    = 6,
        .entry_idx = 0,
        .reserved  = 0,
    },
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_dst_field_desc,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_VFI_MASKF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_VFI_MASKF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_VFIF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_src_field_desc_s0,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIF_VFIF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 2,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_dst_field_desc,
    .dst_fields = 2,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iif_vfif_0_src_field_desc_s0,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIFF_0_XFRM_HANDLER_FWD_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_src_field_desc_s0,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_dst_field_desc,
};

const bcmlrd_field_xfrm_desc_t
bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0_desc = {
    .handler_id = BCMLTD_TRANSFORM_BCM56780_A0_DNA_2_5_13_LTA_BCMLTX_FIELD_DEMUX_MY_STATION_TABLET_L2_IIFF_0_XFRM_HANDLER_REV_S0_D0_ID,
    .src_fields = 3,
    .src = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_dst_field_desc,
    .dst_fields = 3,
    .dst = bcm56780_a0_dna_2_5_13_lrd_field_demux_my_station_tablet_l2_iiff_0_src_field_desc_s0,
};


static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_memdb_tcam_ifta40_mem0_0_data_only_map_entry[] = {
    { /* 0 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_VALUE,
        .desc = {
            .field_id  = DATAf,
            .field_idx = 0,
            .minbit    = 156,
            .maxbit    = 156,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_VALIDf,
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
            .minbit    = 140,
            .maxbit    = 147,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_MEMBERSHIP_PROFILE_PTRf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
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
            .minbit    = 148,
            .maxbit    = 155,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_SPANNING_TREE_GROUPf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 7,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
};
static const bcmlrd_map_entry_t bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_memdb_tcam_ifta40_mem0_0_only_map_entry[] = {
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
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_ENTRY_PRIORITYf,
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
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 82,
            .maxbit    = 129,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_MACDAf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 2 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 242,
            .maxbit    = 289,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_MACDA_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 47,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 3 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 22,
            .maxbit    = 33,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_OVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 4 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 182,
            .maxbit    = 193,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_OVID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 5 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = KEYf,
            .field_idx = 0,
            .minbit    = 34,
            .maxbit    = 45,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_IVIDf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 6 */
        .entry_type = BCMLRD_MAP_ENTRY_MAPPED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 194,
            .maxbit    = 205,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .mapped = {
                .src = {
                    .field_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt_IVID_MASKf,
                    .field_idx = 0,
                    .minbit    = 0,
                    .maxbit    = 11,
                    .entry_idx = 0,
                    .reserved  = 0
                }
            }
        },
    },
    { /* 7 */
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
    { /* 8 */
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
                .value = 0,
            }
        },
    },
    { /* 9 */
        .entry_type = BCMLRD_MAP_ENTRY_FIXED_KEY,
        .desc = {
            .field_id  = MASKf,
            .field_idx = 0,
            .minbit    = 162,
            .maxbit    = 165,
            .entry_idx = 0,
            .reserved  = 0
        },
        .u = {
            .fixed = {
                .value = 15,
            }
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_maskf_0_xfrm_handler_rev_s0_d0_desc,
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_fwd_s0_d0_desc,
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfi_maskf_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 14 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 15 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iif_vfif_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
    { /* 16 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_fwd_s0_d0_desc,
            },
        },
    },
    { /* 17 */
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
                /* handler: bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0 */
                .desc = &bcm56780_a0_dna_2_5_13_lta_bcmltx_field_demux_my_station_tablet_l2_iiff_0_xfrm_handler_rev_s0_d0_desc,
            },
        },
    },
};
static const bcmlrd_map_group_t bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_group[] = {
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA40_MEM0_0_DATA_ONLYm,
        },
        .entries = 3,
        .entry = bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_memdb_tcam_ifta40_mem0_0_data_only_map_entry
    },
    {
        .dest = {
            .kind = BCMLRD_MAP_PHYSICAL,
            .id = MEMDB_TCAM_IFTA40_MEM0_0_ONLYm,
        },
        .entries = 18,
        .entry = bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_memdb_tcam_ifta40_mem0_0_only_map_entry
    },
};
const bcmlrd_map_t bcm56780_a0_dna_2_5_13_lrd_my_station_table_map = {
    .src_id = BCM56780_A0_DNA_2_5_13_MY_STATION_TABLEt,
    .field_data = &bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_field_data,
    .groups = 2,
    .group  = bcm56780_a0_dna_2_5_13_lrd_my_station_table_map_group,
    .table_attr = &bcm56780_a0_dna_2_5_13_lrd_my_station_tablet_attr_group,
    .entry_ops = BCMLRD_MAP_TABLE_ENTRY_OPERATION_LOOKUP | BCMLRD_MAP_TABLE_ENTRY_OPERATION_TRAVERSE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_INSERT | BCMLRD_MAP_TABLE_ENTRY_OPERATION_UPDATE | BCMLRD_MAP_TABLE_ENTRY_OPERATION_DELETE
};
