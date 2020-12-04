/*******************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by npl-info-tbl-gen from NPL output files
 * for device bcm56780_a0 and variant dna_2_5_13.
 *
 * Tool: $SDK/INTERNAL/fltg/bin/npl-info-tbl-gen
 * Resource YML: EcmpSrcL3Group0Info.yml
 *
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <shr/shr_debug.h>
#include <bcmcth/bcmcth_ecmp_drv.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmptm/bcmptm_internal.h>
#include <bcmimm/bcmimm_int_comp.h>
#include <bcmcth/bcmcth_info_table_entry.h>

/*! Total enum fields. */
#define BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL 9

/*! Structure holding initialization value. */
static bcmcth_info_table_enum_entry_t
bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_enum_data[][9] = {
    {
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_ECMP_SRC_L3_GROUP_0_INFO_IDf,
            "ECMP_DISABLE",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_0f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_1f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_2f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_3f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_0f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_1f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_2f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_3f,
            "NOT_USED",
        },
    },
    {
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_ECMP_SRC_L3_GROUP_0_INFO_IDf,
            "ECMP_BASE_VIEW",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_0f,
            "ING_CMD_BUS_ECMP_COUNT_CTRL",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_1f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_2f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_CMD_3f,
            "NOT_USED",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_0f,
            "ING_OBJ_BUS_ECMP_L3_OIF0_VALUE_TYPE_16",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_1f,
            "ING_OBJ_BUS_ECMP_L3_OIF1_VALUE_TYPE_16",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_2f,
            "ING_OBJ_BUS_ECMP_L3_OIF2_VALUE_TYPE_16",
        },
        {
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt,
            BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt_OBJ_3f,
            "ING_OBJ_BUS_ECMP_L3_OIF3_VALUE_TYPE_16",
        },
    },
};


/*******************************************************************************
 * Private functions
 */

static int
bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_get_variant_data(int unit, bcmcth_info_table_t *data)
{
    data->table_id = BCM56780_A0_DNA_2_5_13_ECMP_SRC_L3_GROUP_0_INFOt;
    sal_memcpy(&data->table_name[0], "ECMP_SRC_L3_GROUP_0_INFO", sizeof("ECMP_SRC_L3_GROUP_0_INFO"));
    data->max_policy_supported = 4;
    data->enum_cnt = BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL;
    data->profile_cnt = sizeof(bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_enum_data) /
                        (sizeof(bcmcth_info_table_enum_entry_t) * BCM56780_A0_DNA_2_5_13_ENUM_FIELD_TOTAL);

    data->enum_info = &bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_enum_data[0][0];
    data->policy_info = NULL;

    return SHR_E_NONE;
}

static bcmcth_ecmp_info_drv_t
bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_drv = {
    .get_data  = bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_get_variant_data,
};

/*******************************************************************************
 * Public functions
 */
bcmcth_ecmp_info_drv_t * bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_drv_get(int unit)
{
    return &bcm56780_a0_dna_2_5_13_cth_ecmp_src_l3_group_0_info_drv;
}

