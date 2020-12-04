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
/* Logical Table Adaptor for component bcmpc */
/* Handler: bcm56780_a0_lta_bcmpc_pc_port_abilities_cth_handler */
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmpc/bcmpc_lth_port_abilities.h>



const bcmltd_generic_arg_t
bcm56780_a0_lta_bcmpc_pc_port_abilities_cth_handler_arg = {
    .sid = PC_PORT_ABILITIESt,
    .values = 0,
    .value = NULL,
    .user_data = NULL
};

static const bcmltd_table_entry_usage_handler_t
bcmpc_lth_port_abilities_table_entry_usage_handler = {
    .entry_inuse_get = bcmpc_lth_port_abilities_table_entry_inuse_get,
    .max_entries_set = bcmpc_lth_port_abilities_table_max_entries_set,
    .arg  = &bcm56780_a0_lta_bcmpc_pc_port_abilities_cth_handler_arg
};


const bcmltd_table_handler_t
bcm56780_a0_lta_bcmpc_pc_port_abilities_cth_handler = {
    .validate = bcmpc_lth_port_abilities_validate,
    .op_insert       = bcmpc_lth_port_abilities_insert,
    .op_lookup       = bcmpc_lth_port_abilities_lookup,
    .op_delete       = bcmpc_lth_port_abilities_delete,
    .op_update       = bcmpc_lth_port_abilities_update,
    .op_first        = bcmpc_lth_port_abilities_first,
    .op_next         = bcmpc_lth_port_abilities_next,
    .ha       = NULL,
    .entry_usage = &bcmpc_lth_port_abilities_table_entry_usage_handler,
    .arg      = &bcm56780_a0_lta_bcmpc_pc_port_abilities_cth_handler_arg
};

