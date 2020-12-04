/** \file algo/swstate/auto_generated/access/lif_table_mngr_access.c
 *
 * sw state functions definitions
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifdef BSL_LOG_MODULE
#error "BSL_LOG_MODULE redefined"
#endif
#define BSL_LOG_MODULE BSL_LS_SWSTATEDNX_GENERAL

#include <bcm_int/dnx/algo/swstate/auto_generated/access/lif_table_mngr_access.h>
#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/lif_table_mngr_diagnostic.h>
/*
 * Global Variables
 */

/* dummy variable for gdb to know this type */
lif_table_mngr_sw_state_t* lif_table_mngr_db_dummy = NULL;
/*
 * FUNCTIONs
 */

/*
 *
 * is_init function for the variable lif_table_mngr_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_is_init(int unit, uint8 *is_init)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_IS_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    *is_init = (NULL != ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]));
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_IS_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_ISINIT,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]),
        "lif_table_mngr_db[%d]",
        unit);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * init function for the variable lif_table_mngr_db
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_init(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_INIT,
        DNXC_SW_STATE_NO_FLAGS);

    DNX_SW_STATE_MODULE_INIT(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        DNXC_SW_STATE_IMPLEMENTATION_WB,
        lif_table_mngr_sw_state_t,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "lif_table_mngr_db_init");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_INIT_LOGGING,
        BSL_LS_SWSTATEDNX_INIT,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]),
        "lif_table_mngr_db[%d]",
        unit);

    DNX_SW_STATE_DIAG_INFO_UPDATE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        sizeof(lif_table_mngr_sw_state_t),
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_create(int unit, sw_state_htbl_init_info_t *init_info)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_CREATE(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        init_info,
        int,
        local_lif_info_t,
        FALSE,
        0,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION | DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_HTBCREATE,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION | DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * find function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_find(int unit, const int *key, local_lif_info_t *value, uint8 *found)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_FIND,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_FIND(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        key,
        value,
        found);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_FIND_LOGGING,
        BSL_LS_SWSTATEDNX_HTBFIND,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * insert function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_insert(int unit, const int *key, const local_lif_info_t *value, uint8 *success)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_INSERT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_INSERT(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        key,
        value,
        success);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_INSERT_LOGGING,
        BSL_LS_SWSTATEDNX_HTBINSERT,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get_next function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_get_next(int unit, SW_STATE_HASH_TABLE_ITER *iter, const int *key, const local_lif_info_t *value)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_GET_NEXT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_GET_NEXT(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        iter,
        key,
        value);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_GET_NEXT_LOGGING,
        BSL_LS_SWSTATEDNX_HTBGET_NEXT,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * clear function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_clear(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_CLEAR,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_CLEAR(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_CLEAR_LOGGING,
        BSL_LS_SWSTATEDNX_HTBCLEAR,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * delete function for the variable valid_fields_per_egress_lif_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_egress_lif_htb_delete(int unit, const int *key)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_DELETE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_DELETE(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        key);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_DELETE_LOGGING,
        BSL_LS_SWSTATEDNX_HTBDELETE,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_egress_lif_htb,
        "lif_table_mngr_db[%d]->valid_fields_per_egress_lif_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_EGRESS_LIF_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable valid_fields_per_ingress_lif1
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif1_set(int unit, uint32 valid_fields_per_ingress_lif1_idx_0, CONST local_lif_info_t *valid_fields_per_ingress_lif1)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1,
        valid_fields_per_ingress_lif1_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    DNX_SW_STATE_MEMCPY(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1[valid_fields_per_ingress_lif1_idx_0],
        valid_fields_per_ingress_lif1,
        local_lif_info_t,
        0,
        "lif_table_mngr_db_valid_fields_per_ingress_lif1_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        LIF_TABLE_MNGR_MODULE_ID,
        valid_fields_per_ingress_lif1,
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif1[%d]",
        unit, valid_fields_per_ingress_lif1_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF1_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable valid_fields_per_ingress_lif1
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif1_get(int unit, uint32 valid_fields_per_ingress_lif1_idx_0, local_lif_info_t *valid_fields_per_ingress_lif1)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1,
        valid_fields_per_ingress_lif1_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        valid_fields_per_ingress_lif1);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    *valid_fields_per_ingress_lif1 = ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1[valid_fields_per_ingress_lif1_idx_0];
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1[valid_fields_per_ingress_lif1_idx_0],
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif1[%d]",
        unit, valid_fields_per_ingress_lif1_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF1_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * alloc function for the variable valid_fields_per_ingress_lif1
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif1_alloc(int unit, uint32 nof_instances_to_alloc_0)
{
    DNX_SW_STATE_DEFAULT_VALUE_DEFS;
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_ALLOC,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    DNX_SW_STATE_ALLOC(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1,
        local_lif_info_t,
        nof_instances_to_alloc_0,
        DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION | DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "lif_table_mngr_db_valid_fields_per_ingress_lif1_alloc");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_ALLOC_LOGGING,
        BSL_LS_SWSTATEDNX_ALLOC,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1,
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif1",
        unit,
        nof_instances_to_alloc_0 * sizeof(local_lif_info_t) / sizeof(*((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1));

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF1_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        NULL);

    DNX_SW_STATE_DEFAULT_VALUE_LOOP(def_val_idx[0], nof_instances_to_alloc_0)

    DNX_SW_STATE_DEFAULT_VALUE_ASSIGN(
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif1[def_val_idx[0]].valid_fields,
        -1);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * set function for the variable valid_fields_per_ingress_lif2
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif2_set(int unit, uint32 valid_fields_per_ingress_lif2_idx_0, CONST local_lif_info_t *valid_fields_per_ingress_lif2)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_SET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2,
        valid_fields_per_ingress_lif2_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    DNX_SW_STATE_MEMCPY(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2[valid_fields_per_ingress_lif2_idx_0],
        valid_fields_per_ingress_lif2,
        local_lif_info_t,
        0,
        "lif_table_mngr_db_valid_fields_per_ingress_lif2_set");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_SET_LOGGING,
        BSL_LS_SWSTATEDNX_SET,
        LIF_TABLE_MNGR_MODULE_ID,
        valid_fields_per_ingress_lif2,
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif2[%d]",
        unit, valid_fields_per_ingress_lif2_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF2_INFO,
        DNX_SW_STATE_DIAG_MODIFY,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get function for the variable valid_fields_per_ingress_lif2
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif2_get(int unit, uint32 valid_fields_per_ingress_lif2_idx_0, local_lif_info_t *valid_fields_per_ingress_lif2)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_GET,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_OOB_DYNAMIC_ARRAY_CHECK(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2,
        valid_fields_per_ingress_lif2_idx_0);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        valid_fields_per_ingress_lif2);

    DNX_SW_STATE_PTR_NULL_CHECK(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    *valid_fields_per_ingress_lif2 = ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2[valid_fields_per_ingress_lif2_idx_0];
    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_GET_LOGGING,
        BSL_LS_SWSTATEDNX_GET,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2[valid_fields_per_ingress_lif2_idx_0],
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif2[%d]",
        unit, valid_fields_per_ingress_lif2_idx_0);

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF2_INFO,
        DNX_SW_STATE_DIAG_READ,
        NULL);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * alloc function for the variable valid_fields_per_ingress_lif2
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_valid_fields_per_ingress_lif2_alloc(int unit, uint32 nof_instances_to_alloc_0)
{
    DNX_SW_STATE_DEFAULT_VALUE_DEFS;
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_ALLOC,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    DNX_SW_STATE_ALLOC(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2,
        local_lif_info_t,
        nof_instances_to_alloc_0,
        DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION | DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION,
        "lif_table_mngr_db_valid_fields_per_ingress_lif2_alloc");

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_ALLOC_LOGGING,
        BSL_LS_SWSTATEDNX_ALLOC,
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2,
        "lif_table_mngr_db[%d]->valid_fields_per_ingress_lif2",
        unit,
        nof_instances_to_alloc_0 * sizeof(local_lif_info_t) / sizeof(*((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2));

    DNX_SW_STATE_DIAG_INFO_POST(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_VALID_FIELDS_PER_INGRESS_LIF2_INFO,
        DNX_SW_STATE_DIAG_ALLOC,
        NULL);

    DNX_SW_STATE_DEFAULT_VALUE_LOOP(def_val_idx[0], nof_instances_to_alloc_0)

    DNX_SW_STATE_DEFAULT_VALUE_ASSIGN(
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->valid_fields_per_ingress_lif2[def_val_idx[0]].valid_fields,
        -1);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * create function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_create(int unit, sw_state_htbl_init_info_t *init_info)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_CREATE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_CREATE(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        init_info,
        int,
        lif_table_mngr_table_info_t,
        FALSE,
        0,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION | DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_CREATE_LOGGING,
        BSL_LS_SWSTATEDNX_HTBCREATE,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_AUTO_GENERATED_ALLOCATION | DNXC_SW_STATE_DNX_DATA_ALLOC_EXCEPTION);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * find function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_find(int unit, const int *key, lif_table_mngr_table_info_t *value, uint8 *found)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_FIND,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_FIND(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        key,
        value,
        found);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_FIND_LOGGING,
        BSL_LS_SWSTATEDNX_HTBFIND,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * insert function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_insert(int unit, const int *key, const lif_table_mngr_table_info_t *value, uint8 *success)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_INSERT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_INSERT(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        key,
        value,
        success);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_INSERT_LOGGING,
        BSL_LS_SWSTATEDNX_HTBINSERT,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * get_next function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_get_next(int unit, SW_STATE_HASH_TABLE_ITER *iter, const int *key, const lif_table_mngr_table_info_t *value)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_GET_NEXT,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_GET_NEXT(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        iter,
        key,
        value);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_GET_NEXT_LOGGING,
        BSL_LS_SWSTATEDNX_HTBGET_NEXT,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * clear function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_clear(int unit)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_CLEAR,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_CLEAR(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_CLEAR_LOGGING,
        BSL_LS_SWSTATEDNX_HTBCLEAR,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 *
 * delete function for the variable lif_table_info_htb
 * AUTO-GENERATED - DO NOT MODIFY
 */
int
lif_table_mngr_db_lif_table_info_htb_delete(int unit, const int *key)
{
    DNXC_SW_STATE_INIT_FUNC_DEFS;

    VERIFY_FUNCTION_CALL_ALLOWED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        SW_STATE_FUNC_DELETE,
        DNXC_SW_STATE_NO_FLAGS);

    VERIFY_MODULE_IS_INITIALIZED(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID]);

    DNX_SW_STATE_DIAG_INFO_PRE(
        unit,
        LIF_TABLE_MNGR_MODULE_ID);

    SW_STATE_HTB_DELETE(
        LIF_TABLE_MNGR_MODULE_ID,
        ((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        key);

    DNX_SW_STATE_LOG(
        unit,
        DNX_SW_STATE_HTB_DELETE_LOGGING,
        BSL_LS_SWSTATEDNX_HTBDELETE,
        LIF_TABLE_MNGR_MODULE_ID,
        &((lif_table_mngr_sw_state_t*)sw_state_roots_array[unit][LIF_TABLE_MNGR_MODULE_ID])->lif_table_info_htb,
        "lif_table_mngr_db[%d]->lif_table_info_htb",
        unit);

    DNX_SW_STATE_DIAG_INFO_POST_WITH_FLAGS(
        unit,
        LIF_TABLE_MNGR_MODULE_ID,
        lif_table_mngr_db_info,
        LIF_TABLE_MNGR_DB_LIF_TABLE_INFO_HTB_INFO,
        DNX_SW_STATE_DIAG_HTB,
        NULL,
        DNXC_SW_STATE_NO_FLAGS);

    DNXC_SW_STATE_FUNC_RETURN;
}



/*
 * Global Variables
 */

lif_table_mngr_db_cbs lif_table_mngr_db = 	{
	
	lif_table_mngr_db_is_init,
	lif_table_mngr_db_init,
		{
		
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_create,
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_find,
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_insert,
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_get_next,
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_clear,
		lif_table_mngr_db_valid_fields_per_egress_lif_htb_delete}
	,
		{
		
		lif_table_mngr_db_valid_fields_per_ingress_lif1_set,
		lif_table_mngr_db_valid_fields_per_ingress_lif1_get,
		lif_table_mngr_db_valid_fields_per_ingress_lif1_alloc}
	,
		{
		
		lif_table_mngr_db_valid_fields_per_ingress_lif2_set,
		lif_table_mngr_db_valid_fields_per_ingress_lif2_get,
		lif_table_mngr_db_valid_fields_per_ingress_lif2_alloc}
	,
		{
		
		lif_table_mngr_db_lif_table_info_htb_create,
		lif_table_mngr_db_lif_table_info_htb_find,
		lif_table_mngr_db_lif_table_info_htb_insert,
		lif_table_mngr_db_lif_table_info_htb_get_next,
		lif_table_mngr_db_lif_table_info_htb_clear,
		lif_table_mngr_db_lif_table_info_htb_delete}
	}
;
#undef BSL_LOG_MODULE
