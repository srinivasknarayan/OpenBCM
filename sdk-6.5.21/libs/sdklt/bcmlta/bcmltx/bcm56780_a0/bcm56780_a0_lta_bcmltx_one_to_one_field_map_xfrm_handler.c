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
/* Handler: bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler */
#include <bcmlrd/bcmlrd_types.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltx/bcmtm/bcmltx_one_to_one_field_map.h>
#include <bcmdrd/chip/bcm56780_a0_enum.h>
#include <bcmlrd/chip/bcm56780_a0/bcm56780_a0_lrd_xfrm_field_desc.h>

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_one_to_one_field_map_src_field_desc_s0[];

extern const bcmltd_field_desc_t
bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0[];

static const
bcmltd_field_list_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_src_list_s0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_one_to_one_field_map_src_field_desc_s0
};

static const bcmltd_field_list_t
bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_list_d0 = {
    .field_num = 1,
    .field_array = bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_field_desc_d0
};

static const uint32_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_transform_src_s0[1] = {
    TM_OBM_PC_PM_MAX_USAGE_MODEt_MAX_USAGE_MODEf,
};

static const uint32_t
bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_transform_dst_d0[1] = {
    PRIORITY_SELECTf,
};

static const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_comp_data = {
    .sid       = TM_OBM_PC_PM_MAX_USAGE_MODEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lta_bcmltx_one_to_one_field_map_transform_src_s0,
    .field_list  = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_src_list_s0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_transform_dst_d0,
    .rfield_list = &bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_list_d0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_comp_data
};

static const bcmltd_transform_arg_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_arg_s0_d0 = {
    .values      = 0,
    .value       = NULL,
    .tables      = 0,
    .table       = NULL,
    .fields      = 1,
    .field       = bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_transform_dst_d0,
    .field_list  = &bcm56780_a0_lrd_bcmltx_one_to_one_field_map_tm_obm_pc_pm_max_usage_mode_dst_list_d0,
    .rfields     = 1,
    .rfield      = bcm56780_a0_lta_bcmltx_one_to_one_field_map_transform_src_s0,
    .rfield_list = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_src_list_s0,
    .comp_data   = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_comp_data
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_s0_d0 = {
    .transform     = bcmltx_one_to_one_field_map_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_fwd_arg_s0_d0
};

const bcmltd_xfrm_handler_t
bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_s0_d0 = {
    .transform     = bcmltx_one_to_one_field_map_rev_transform,
    .arg           = &bcm56780_a0_lta_bcmltx_one_to_one_field_map_xfrm_handler_rev_arg_s0_d0
};


