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
/* Logical Table Adaptor for component bcmimm */
/* Handler: bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmimm/bcmimm_direct.h>

static const bcmltd_table_ha_handler_t
bcmimm_direct_ha_handler = {
    .commit = bcmimm_direct_commit,
    .abort  = bcmimm_direct_abort
};



const bcmltd_generic_arg_t
bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler_arg = {
    .sid = PC_PORT_MONITORt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

static const bcmltd_table_entry_limit_handler_t
bcmimm_direct_table_entry_limit_handler = {
    .entry_limit_get = bcmimm_direct_table_entry_limit_get,
    .arg  = &bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler_arg
};


static const bcmltd_table_entry_usage_handler_t
bcmimm_direct_table_entry_usage_handler = {
    .entry_inuse_get = bcmimm_direct_table_entry_inuse_get,
    .max_entries_set = bcmimm_direct_table_max_entries_set,
    .arg  = &bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler_arg
};


const bcmltd_table_handler_t
bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler = {
    .validate = bcmimm_direct_validate,
    .op_insert       = bcmimm_direct_insert,
    .op_lookup       = bcmimm_direct_lookup,
    .op_delete       = bcmimm_direct_delete,
    .op_update       = bcmimm_direct_update,
    .op_first        = bcmimm_direct_first,
    .op_next         = bcmimm_direct_next,
    .ha       = &bcmimm_direct_ha_handler,
    .entry_limit = &bcmimm_direct_table_entry_limit_handler,
    .entry_usage = &bcmimm_direct_table_entry_usage_handler,
    .arg      = &bcm56990_b0_lta_bcmimm_pc_port_monitor_cth_handler_arg
};

