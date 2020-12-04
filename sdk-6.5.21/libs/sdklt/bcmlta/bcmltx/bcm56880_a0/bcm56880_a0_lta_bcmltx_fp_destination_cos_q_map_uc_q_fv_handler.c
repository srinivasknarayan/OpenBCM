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
/* Handler: bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56880_a0_enum.h>
#include <bcmltx/bcmtm/bcmltx_uc_q_validate.h>

static const uint32_t
bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_validate_src[1] = {
    FP_DESTINATION_COS_Q_MAPt_UC_COSf,
};

static const bcmltd_generic_arg_t
bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_comp_data = {
    .sid       = FP_DESTINATION_COS_Q_MAPt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 1,
    .field = bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_validate_src,
    .comp_data = &bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_comp_data
};

const bcmltd_field_val_handler_t
bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_fv_handler = {
    .validate = bcmltx_uc_q_validate,
    .arg      = &bcm56880_a0_lta_bcmltx_fp_destination_cos_q_map_uc_q_fv_handler_arg
};


