/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by fltg from Logical Table mapping files.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/fltg
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
/* Logical Table Adaptor for component bcmltx */
/* Handler: bcm56780_a0_lta_bcmltx_divmod_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/general/bcmltx_divmod.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

static const uint32_t
bcm56780_a0_lta_bcmltx_divmod_transform_arg0[1] = {
    8,
};

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_divmod_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_divmod_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_divmod_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_dst_list_d0 = {
    .field_num = 2,
    .field_array = bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_divmod_transform_src_s0[1] = {
    FLEX_QOS_ING_PHBt_BASE_INDEXf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_transform_dst_d0[2] = {
    BCMLRD_FIELD_INDEX,
    BCMLRD_FIELD_SELECTOR,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_divmod_comp_data = {
    .sid       = FLEX_QOS_ING_PHBt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_divmod_xfrm_handler_fwd_arg_s0_d0_x0 = {
    .values      = 1,
    .value       = bcm56780_a0_lta_bcmltx_divmod_transform_arg0,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_divmod_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_divmod_src_list_s0,
    .rfields     = 2,
    .rfield      = bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_divmod_flex_qos_ing_phb_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_divmod_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_divmod_xfrm_handler_fwd_s0_d0_x0 = {
    .transform     = bcmltx_divmod_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_divmod_xfrm_handler_fwd_arg_s0_d0_x0
};


