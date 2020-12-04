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
/* Logical Table Adaptor for component bcmcfg */
/* Handler: bcm56990_b0_lta_bcmcfg_tm_shaper_config_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmcfg/bcmcfg_config.h>



const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmcfg_tm_shaper_config_cth_handler_arg = {
    .sid = TM_SHAPER_CONFIGt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56990_b0_lta_bcmcfg_tm_shaper_config_cth_handler = {
    .validate = bcmcfg_config_validate,
    .op_insert       = bcmcfg_config_insert,
    .op_lookup       = bcmcfg_config_lookup,
    .op_delete       = bcmcfg_config_delete,
    .op_update       = bcmcfg_config_update,
    .op_first        = bcmcfg_config_first,
    .op_next         = bcmcfg_config_next,
    .ha       = NULL,
    .arg      = &bcm56990_b0_lta_bcmcfg_tm_shaper_config_cth_handler_arg
};

