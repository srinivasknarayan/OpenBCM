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
/* Handler: bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_fv_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmdrd/chip/bcm56990_a0_enum.h>
#include <bcmltx/bcmltx_std_table_validator.h>

static const uint32_t
bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_validate_src[5] = {
    CTR_TM_OBM_PORT_USAGEt_LOSSY_BYTEf,
    CTR_TM_OBM_PORT_USAGEt_LOSSLESS0_BYTEf,
    CTR_TM_OBM_PORT_USAGEt_LOSSLESS1_BYTEf,
    CTR_TM_OBM_PORT_USAGEt_BYTEf,
    CTR_TM_OBM_PORT_USAGEt_OPERATIONAL_STATEf,
};

static const bcmltd_generic_arg_t
bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_comp_data = {
    .sid       = CTR_TM_OBM_PORT_USAGEt,
    .values    = 0,
    .value     = NULL,
    .user_data = NULL
};

const bcmltd_field_val_arg_t
bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_fv_handler_arg = {
    .values = 0,
    .value = NULL,
    .fields = 5,
    .field = bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_validate_src,
    .comp_data = &bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_comp_data
};

const bcmltd_field_val_handler_t
bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_fv_handler = {
    .validate = bcmltx_std_table_validator,
    .arg      = &bcm56990_a0_lta_bcmltx_ctr_tm_obm_port_usage_std_val_fv_handler_arg
};


