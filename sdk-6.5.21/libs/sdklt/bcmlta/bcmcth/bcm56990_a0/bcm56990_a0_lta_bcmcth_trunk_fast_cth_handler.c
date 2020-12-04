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
/* Logical Table Adaptor for component bcmcth */
/* Handler: bcm56990_a0_lta_bcmcth_trunk_fast_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmcth/bcmcth_trunk_fast_grp.h>

static const bcmltd_table_ha_handler_t
bcmcth_trunk_fast_grp_ha_handler = {
    .commit = bcmcth_trunk_fast_grp_commit,
    .abort  = bcmcth_trunk_fast_grp_abort
};



const bcmltd_generic_arg_t
bcm56990_a0_lta_bcmcth_trunk_fast_cth_handler_arg = {
    .sid = TRUNK_FASTt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

const bcmltd_table_handler_t
bcm56990_a0_lta_bcmcth_trunk_fast_cth_handler = {
    .validate = bcmcth_trunk_fast_grp_validate,
    .op_insert       = bcmcth_trunk_fast_grp_insert,
    .op_lookup       = bcmcth_trunk_fast_grp_lookup,
    .op_delete       = bcmcth_trunk_fast_grp_delete,
    .op_update       = bcmcth_trunk_fast_grp_update,
    .op_first        = bcmcth_trunk_fast_grp_first,
    .op_next         = bcmcth_trunk_fast_grp_next,
    .ha       = &bcmcth_trunk_fast_grp_ha_handler,
    .arg      = &bcm56990_a0_lta_bcmcth_trunk_fast_cth_handler_arg
};

