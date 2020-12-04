/** \file dnx/swstate/auto_generated/diagnostic/dnx_egq_am_commandline.c
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

#include <bcm_int/dnx/algo/swstate/auto_generated/diagnostic/dnx_egq_am_diagnostic.h>
#include "dnx_egq_am_commandline.h"
#include <bcm_int/dnx/algo/swstate/auto_generated/access/dnx_egq_am_access.h>
#include <soc/dnx/dnx_data/auto_generated/dnx_data_device.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_egq_am_cmds[] = {
    {"egr_tc_dp_mapping", NULL, sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_cmds, NULL, &dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_man},
    {"fqp_profile", NULL, sh_dnx_swstate_dnx_egq_am_fqp_profile_cmds, NULL, &dnx_swstate_dnx_egq_am_fqp_profile_man},
    {"dump", sh_dnx_swstate_dnx_egq_am_dump_cmd, NULL, dnx_swstate_dnx_egq_am_dump_options, &dnx_swstate_dnx_egq_am_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egq_am_size_get_cmd, NULL, dnx_swstate_dnx_egq_am_size_get_options, &dnx_swstate_dnx_egq_am_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_egq_am_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_egq_am_diagnostic_operation_counters_options, &dnx_swstate_dnx_egq_am_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_egq_am_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    dnx_egq_am_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(dnx_egq_am_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_dump_man = {
    "swstate dnx_egq_am dump",
    "print the module's content",
    "swstate dnx_egq_am dump",
    "swstate dnx_egq_am dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_size_get_man = {
    "swstate dnx_egq_am size_get",
    "print the module's size",
    "swstate dnx_egq_am size_get",
    "swstate dnx_egq_am size_get",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_diagnostic_operation_counters_man = {
    "swstate dnx_egq_am diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate dnx_egq_am diagnostic_operation_counters",
    "swstate dnx_egq_am diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_dnx_egq_am_man = {
    cmd_dnx_swstate_dnx_egq_am_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egq_am_desc[] = "swstate dnx_egq_am commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_cmd, NULL, dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_options, &dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_cmd, NULL, dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_options, &dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_options, &dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_man = {
    cmd_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_desc[] = "dnx_egq_am_db egr_tc_dp_mapping commands";


shr_error_e sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  egr_tc_dp_mapping_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("egr_tc_dp_mapping_idx_0", egr_tc_dp_mapping_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egq_am_db_egr_tc_dp_mapping_dump(unit, egr_tc_dp_mapping_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_options[] = {
    {"egr_tc_dp_mapping_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egq_am_db egr_tc_dp_mapping dump [,egr_tc_dp_mapping_idx_0=<int>]\n",
    "dnx_egq_am_db egr_tc_dp_mapping dump egr_tc_dp_mapping_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~EGR_TC_DP_MAPPING~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egq_am_db egr_tc_dp_mapping size_get",
    "dnx_egq_am_db egr_tc_dp_mapping size_get",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~EGR_TC_DP_MAPPING~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_egr_tc_dp_mapping_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_egq_am_db egr_tc_dp_mapping diagnostic_operation_counters",
    "dnx_egq_am_db egr_tc_dp_mapping diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_egq_am_fqp_profile_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_egq_am_fqp_profile_dump_cmd, NULL, dnx_swstate_dnx_egq_am_fqp_profile_dump_options, &dnx_swstate_dnx_egq_am_fqp_profile_dump_man},
    {"size_get", sh_dnx_swstate_dnx_egq_am_fqp_profile_size_get_cmd, NULL, dnx_swstate_dnx_egq_am_fqp_profile_size_get_options, &dnx_swstate_dnx_egq_am_fqp_profile_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_options, &dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_fqp_profile_man = {
    cmd_dnx_swstate_dnx_egq_am_fqp_profile_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_egq_am_fqp_profile_desc[] = "dnx_egq_am_db fqp_profile commands";


shr_error_e sh_dnx_swstate_dnx_egq_am_fqp_profile_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    int  fqp_profile_idx_0 = 0;

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_INT32("fqp_profile_idx_0", fqp_profile_idx_0);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_egq_am_db_fqp_profile_dump(unit, fqp_profile_idx_0, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_fqp_profile_dump_options[] = {
    {"fqp_profile_idx_0", SAL_FIELD_TYPE_INT32, "index", NULL},
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_fqp_profile_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_egq_am_db fqp_profile dump [,fqp_profile_idx_0=<int>]\n",
    "dnx_egq_am_db fqp_profile dump fqp_profile_idx_0=0 nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_fqp_profile_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~FQP_PROFILE~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_fqp_profile_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_fqp_profile_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_egq_am_db fqp_profile size_get",
    "dnx_egq_am_db fqp_profile size_get",
};


shr_error_e sh_dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_egq_am_db_info[unit], dnx_egq_am_db_layout_str, DNX_EGQ_AM_DB_INFO_NOF_ENTRIES, "DNX_EGQ_AM_DB~FQP_PROFILE~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_egq_am_fqp_profile_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_egq_am_db fqp_profile diagnostic_operation_counters",
    "dnx_egq_am_db fqp_profile diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
