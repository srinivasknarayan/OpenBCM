/** \file dnx/swstate/auto_generated/diagnostic/dnx_time_sw_state_commandline.c
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

#include <soc/dnx/swstate/auto_generated/diagnostic/dnx_time_sw_state_diagnostic.h>
#include "dnx_time_sw_state_commandline.h"
#include <soc/dnx/swstate/auto_generated/access/dnx_time_sw_state_access.h>
#if defined(DNX_SW_STATE_DIAGNOSTIC)
sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_cmds[] = {
    {"flags", NULL, sh_dnx_swstate_dnx_time_sw_state_flags_cmds, NULL, &dnx_swstate_dnx_time_sw_state_flags_man},
    {"id", NULL, sh_dnx_swstate_dnx_time_sw_state_id_cmds, NULL, &dnx_swstate_dnx_time_sw_state_id_man},
    {"heartbeat_hz", NULL, sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_cmds, NULL, &dnx_swstate_dnx_time_sw_state_heartbeat_hz_man},
    {"clk_resolution", NULL, sh_dnx_swstate_dnx_time_sw_state_clk_resolution_cmds, NULL, &dnx_swstate_dnx_time_sw_state_clk_resolution_man},
    {"bitclock_hz", NULL, sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_cmds, NULL, &dnx_swstate_dnx_time_sw_state_bitclock_hz_man},
    {"status", NULL, sh_dnx_swstate_dnx_time_sw_state_status_cmds, NULL, &dnx_swstate_dnx_time_sw_state_status_man},
    {"dump", sh_dnx_swstate_dnx_time_sw_state_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_dump_options, &dnx_swstate_dnx_time_sw_state_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_size_get_options, &dnx_swstate_dnx_time_sw_state_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_man},
    {NULL}
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint8 is_init;
    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);

    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    dnx_time_interface_db.is_init(unit, &is_init);
    if (is_init) {
        SHR_IF_ERR_EXIT(dnx_time_interface_db_dump(unit, filters));
        if (!filters.nocontent)
        {
            dnx_sw_state_dump_detach_file(unit);
        }
    }
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_dump_man = {
    "swstate dnx_time_sw_state dump",
    "print the module's content",
    "swstate dnx_time_sw_state dump",
    "swstate dnx_time_sw_state dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    uint32 size = 0;
    SHR_FUNC_INIT_VARS(unit);

    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~", 0);
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_size_get_man = {
    "swstate dnx_time_sw_state size_get",
    "print the module's size",
    "swstate dnx_time_sw_state size_get",
    "swstate dnx_time_sw_state size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{


    SHR_FUNC_INIT_VARS(unit);

    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_diagnostic_operation_counters_man = {
    "swstate dnx_time_sw_state diagnostic_operation_counters",
    "print the module's diagnostic operation counters",
    "swstate dnx_time_sw_state diagnostic_operation_counters",
    "swstate dnx_time_sw_state diagnostic_operation_counters",
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_man = {
    cmd_dnx_swstate_dnx_time_sw_state_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_desc[] = "swstate dnx_time_sw_state commands";



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_flags_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_flags_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_flags_dump_options, &dnx_swstate_dnx_time_sw_state_flags_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_flags_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_flags_size_get_options, &dnx_swstate_dnx_time_sw_state_flags_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_flags_man = {
    cmd_dnx_swstate_dnx_time_sw_state_flags_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_flags_desc[] = "dnx_time_interface_db flags commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_flags_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_flags_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_flags_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_flags_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db flags dump []\n",
    "dnx_time_interface_db flags dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_flags_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~FLAGS~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->flags));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_flags_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_flags_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db flags size_get",
    "dnx_time_interface_db flags size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~FLAGS~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_flags_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db flags diagnostic_operation_counters",
    "dnx_time_interface_db flags diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_id_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_id_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_id_dump_options, &dnx_swstate_dnx_time_sw_state_id_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_id_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_id_size_get_options, &dnx_swstate_dnx_time_sw_state_id_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_id_man = {
    cmd_dnx_swstate_dnx_time_sw_state_id_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_id_desc[] = "dnx_time_interface_db id commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_id_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_id_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_id_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_id_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db id dump []\n",
    "dnx_time_interface_db id dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_id_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~ID~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->id));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_id_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_id_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db id size_get",
    "dnx_time_interface_db id size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~ID~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_id_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db id diagnostic_operation_counters",
    "dnx_time_interface_db id diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_options, &dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_options, &dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_man = {
    cmd_dnx_swstate_dnx_time_sw_state_heartbeat_hz_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_heartbeat_hz_desc[] = "dnx_time_interface_db heartbeat_hz commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_heartbeat_hz_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db heartbeat_hz dump []\n",
    "dnx_time_interface_db heartbeat_hz dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~HEARTBEAT_HZ~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->heartbeat_hz));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db heartbeat_hz size_get",
    "dnx_time_interface_db heartbeat_hz size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~HEARTBEAT_HZ~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_heartbeat_hz_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db heartbeat_hz diagnostic_operation_counters",
    "dnx_time_interface_db heartbeat_hz diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_clk_resolution_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_clk_resolution_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_clk_resolution_dump_options, &dnx_swstate_dnx_time_sw_state_clk_resolution_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_options, &dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_clk_resolution_man = {
    cmd_dnx_swstate_dnx_time_sw_state_clk_resolution_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_clk_resolution_desc[] = "dnx_time_interface_db clk_resolution commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_clk_resolution_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_clk_resolution_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_clk_resolution_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_clk_resolution_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db clk_resolution dump []\n",
    "dnx_time_interface_db clk_resolution dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~CLK_RESOLUTION~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->clk_resolution));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_clk_resolution_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db clk_resolution size_get",
    "dnx_time_interface_db clk_resolution size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~CLK_RESOLUTION~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_clk_resolution_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db clk_resolution diagnostic_operation_counters",
    "dnx_time_interface_db clk_resolution diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_options, &dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_options, &dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_bitclock_hz_man = {
    cmd_dnx_swstate_dnx_time_sw_state_bitclock_hz_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_bitclock_hz_desc[] = "dnx_time_interface_db bitclock_hz commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_bitclock_hz_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_bitclock_hz_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db bitclock_hz dump []\n",
    "dnx_time_interface_db bitclock_hz dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~BITCLOCK_HZ~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->bitclock_hz));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_bitclock_hz_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db bitclock_hz size_get",
    "dnx_time_interface_db bitclock_hz size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~BITCLOCK_HZ~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_bitclock_hz_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db bitclock_hz diagnostic_operation_counters",
    "dnx_time_interface_db bitclock_hz diagnostic_operation_counters",
};



sh_sand_cmd_t sh_dnx_swstate_dnx_time_sw_state_status_cmds[] = {
    {"dump", sh_dnx_swstate_dnx_time_sw_state_status_dump_cmd, NULL, dnx_swstate_dnx_time_sw_state_status_dump_options, &dnx_swstate_dnx_time_sw_state_status_dump_man},
    {"size_get", sh_dnx_swstate_dnx_time_sw_state_status_size_get_cmd, NULL, dnx_swstate_dnx_time_sw_state_status_size_get_options, &dnx_swstate_dnx_time_sw_state_status_size_get_man},
    {"diagnostic_operation_counters", sh_dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_cmd, NULL, dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_options, &dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_man},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_status_man = {
    cmd_dnx_swstate_dnx_time_sw_state_status_desc,
    NULL,
    NULL,
    NULL,
};


const char cmd_dnx_swstate_dnx_time_sw_state_status_desc[] = "dnx_time_interface_db status commands";


shr_error_e sh_dnx_swstate_dnx_time_sw_state_status_dump_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    dnx_sw_state_dump_filters_t filters;

    SHR_FUNC_INIT_VARS(unit);


    SH_SAND_GET_BOOL("nocontent", filters.nocontent);
    SH_SAND_GET_STR("typefilter", filters.typefilter);
    SH_SAND_GET_STR("namefilter", filters.namefilter);

    SHR_IF_ERR_EXIT(dnx_time_interface_db_status_dump(unit, filters));

    if (!filters.nocontent)
    {
        dnx_sw_state_dump_detach_file(unit);

    }

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_status_dump_options[] = {
    {"nocontent",      SAL_FIELD_TYPE_BOOL, "Decision if to perform content dump or to print the access tree.",  "false"},
    {"typefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable type.",         ""},
    {"namefilter",     SAL_FIELD_TYPE_STR,  "Filter for the variable name.",         ""},
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_status_dump_man = {
    "swstate dump",
    "print the variable value",
    "dnx_time_interface_db status dump []\n",
    "dnx_time_interface_db status dump nocontent=false typefilter="" namefilter="" ",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_status_size_get_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{
    uint32 size = 0;

    SHR_FUNC_INIT_VARS(unit);


    size = dnx_sw_state_info_size_get(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~STATUS~", sizeof(((dnx_time_interface_sw_state_t*)sw_state_roots_array[unit][DNX_TIME_SW_STATE_MODULE_ID])->status));
    dnx_sw_state_size_print(size);

    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_status_size_get_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_status_size_get_man = {
    "swstate size_get",
    "print the variable size",
    "dnx_time_interface_db status size_get",
    "dnx_time_interface_db status size_get",
};


shr_error_e sh_dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_cmd(int unit, args_t *args, sh_sand_control_t *sand_control)
{

    SHR_FUNC_INIT_VARS(unit);


    dnx_sw_state_diagnostic_operation_counters_print(dnx_time_interface_db_info[unit], dnx_time_interface_db_layout_str, DNX_TIME_INTERFACE_DB_INFO_NOF_ENTRIES, "DNX_TIME_INTERFACE_DB~STATUS~");
    SHR_EXIT();
exit:
    SHR_FUNC_EXIT;
}



sh_sand_option_t dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_options[] = {
    {NULL}
};


sh_sand_man_t dnx_swstate_dnx_time_sw_state_status_diagnostic_operation_counters_man = {
    "swstate diagnostic_operation_counters",
    "print the diagnostic operation counters",
    "dnx_time_interface_db status diagnostic_operation_counters",
    "dnx_time_interface_db status diagnostic_operation_counters",
};


#endif /* DNX_SW_STATE_DIAGNOSTIC */
#undef BSL_LOG_MODULE
