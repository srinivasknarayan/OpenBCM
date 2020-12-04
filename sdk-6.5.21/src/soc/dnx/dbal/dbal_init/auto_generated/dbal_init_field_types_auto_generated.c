
/*
 * 
 This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 
 Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#include <src/soc/dnx/dbal/dbal_init/auto_generated/dbal_init_internal_field_types_auto_generated.h>

shr_error_e
dbal_init_field_types_auto_generated_init(
int unit,
field_type_db_struct_t * cur_field_type_param,
dbal_field_types_basic_info_t ** field_types_info)
{
    SHR_FUNC_INIT_VARS(unit);
    SHR_IF_ERR_EXIT(dbal_init_field_types_auto_generated_profile_field_types_init(unit, cur_field_type_param, field_types_info));
    SHR_IF_ERR_EXIT(dbal_init_field_types_auto_generated_standard_1_init(unit, cur_field_type_param, field_types_info));
exit:
    SHR_FUNC_EXIT;
}
