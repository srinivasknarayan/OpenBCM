/*! \file bcm56780_a0_dna_2_5_13_l3_egress.c
 *
 * BCM56780_A0 DNA_2_5_13 L3 Egress driver.
 */
/*
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/ltsw/property.h>
#include <bcm_int/ltsw/mbcm/l3_egress.h>
#include <bcm_int/ltsw/xfs/l3_egress.h>
#include <bcm_int/ltsw/xfs/types.h>
#include <bcm_int/ltsw/hash_output_selection.h>
#include <bcm_int/ltsw/dev.h>
#include <bcm_int/ltsw/lt_intf.h>
#include <bcm_int/ltsw/feature.h>

#include <bcmltd/chip/bcmltd_str.h>
#include <bcmltd/chip/bcmltd_id.h>
#include <bcmltd/chip/bcmltd_device_constants.h>
#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_L3

/* Defines maximum number of ECMP paths supported by an ECMP group. */
#define ECMP_LEVEL_MAX_PATHS_COUNT_MAX 128


/*! Defines maximum number of ECMP paths supported by a weighted ECMP group. */
#define ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX 16384

static const char *lb_mode_str[XFS_LTSW_L3_ECMP_LB_MODE_CNT] = {
    REGULARs,
    RANDOMs
};

static const char *wgt_sz_str[] = {
    WEIGHTED_SIZE_256s,
    WEIGHTED_SIZE_512s,
    WEIGHTED_SIZE_1Ks,
    WEIGHTED_SIZE_2Ks,
    WEIGHTED_SIZE_4Ks,
    WEIGHTED_SIZE_8Ks,
    WEIGHTED_SIZE_16Ks,
    NULL
};

static const char *wgt_mode_str[] = {
    MEMBER_REPLICATIONs,
    MEMBER_WEIGHTs,
    NULL
};

/******************************************************************************
 * Private functions
 */
/*!
 * \brief Get load balance mode from sybmol.
 *
 * \param [in] unit Unit number.
 * \param [in] symbol String.
 * \param [out] value label action.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
lb_mode_symbol_to_scalar(int unit, const char *symbol, uint64_t *value)
{
    int i;

    for (i = 0; i< XFS_LTSW_L3_ECMP_LB_MODE_CNT; i++) {
        if ((lb_mode_str[i] != NULL) && !sal_strcmp(symbol, lb_mode_str[i])) {
            break;
        }
    }

    if (i >= XFS_LTSW_L3_ECMP_LB_MODE_CNT) {
        return SHR_E_INTERNAL;
    }

    *value = i;

    return SHR_E_NONE;
}

/*!
 * \brief Get load balance mode sybmol from value.
 *
 * \param [in] unit Unit number.
 * \param [in] value load balance mode.
 * \param [out] symbol String.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
lb_mode_scalar_to_symbol(int unit, uint64_t value, const char **symbol)
{
    if ((value >= XFS_LTSW_L3_ECMP_LB_MODE_CNT) ||
        (lb_mode_str[value] == NULL)) {
        return SHR_E_INTERNAL;
    }

    *symbol = lb_mode_str[value];

    return SHR_E_NONE;
}

/*!
 * \brief Get ECMP weighted size from sybmol.
 *
 * \param [in] unit Unit number.
 * \param [in] symbol String.
 * \param [out] value label action.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
weighted_size_symbol_to_scalar(int unit, const char *symbol, uint64_t *value)
{
    int i;

    for (i = 0; i< XFS_LTSW_L3_ECMP_WGT_SZ_CNT; i++) {
        if ((wgt_sz_str[i] != NULL) && !sal_strcmp(symbol, wgt_sz_str[i])) {
            break;
        }
    }

    if (i >= XFS_LTSW_L3_ECMP_WGT_SZ_CNT) {
        return SHR_E_INTERNAL;
    }

    *value = i;

    return SHR_E_NONE;
}

/*!
 * \brief Get ECMP weighted size sybmol from value.
 *
 * \param [in] unit Unit number.
 * \param [in] value ECMP weighted size.
 * \param [out] symbol String.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
weighted_size_scalar_to_symbol(int unit, uint64_t value, const char **symbol)
{
    if ((value >= XFS_LTSW_L3_ECMP_WGT_SZ_CNT) ||
        (wgt_sz_str[value] == NULL)) {
        return SHR_E_INTERNAL;
    }

    *symbol = wgt_sz_str[value];

    return SHR_E_NONE;
}

/*!
 * \brief Get weighted mode from sybmol.
 *
 * \param [in] unit Unit number.
 * \param [in] symbol String.
 * \param [out] value label action.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
weighted_mode_symbol_to_scalar(int unit, const char *symbol, uint64_t *value)
{
    int i;

    for (i = 0; i< XFS_LTSW_L3_ECMP_MEMBER_WEIGHT_MODE_CNT; i++) {
        if ((wgt_mode_str[i] != NULL) && !sal_strcmp(symbol, wgt_mode_str[i])) {
            break;
        }
    }

    if (i >= XFS_LTSW_L3_ECMP_MEMBER_WEIGHT_MODE_CNT) {
        return SHR_E_INTERNAL;
    }

    *value = i;

    return SHR_E_NONE;
}

/*!
 * \brief Get weighted mode sybmol from value.
 *
 * \param [in] unit Unit number.
 * \param [in] value ECMP weighted size.
 * \param [out] symbol String.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
static int
weighted_mode_scalar_to_symbol(int unit, uint64_t value, const char **symbol)
{
    if ((value >= XFS_LTSW_L3_ECMP_MEMBER_WEIGHT_MODE_CNT) ||
        (wgt_mode_str[value] == NULL)) {
        return SHR_E_INTERNAL;
    }

    *symbol = wgt_mode_str[value];

    return SHR_E_NONE;
}

/*
 * ECMP_LEVEL0
 */
static const bcmint_ltsw_l3_egress_fld_t
l3_ecmp_0_flds[XFS_LTSW_L3_ECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_ECMP_TBL_ECMP_ID] = {
        ECMP_IDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_ECMP_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_1] = {
        NHOP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_NHOP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_DVP] = {
        DVPs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_DVPf,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1] = {
        NHOP_2_OR_ECMP_GROUP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_NHOP_2_OR_ECMP_GROUP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_ECMP_AND_PROT_SWT_PROF_IDX] = {
        ECMP_AND_PROT_SWT_SFC_PROFILE_INDEXs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_ECMP_AND_PROT_SWT_SFC_PROFILE_INDEXf,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_LB_MODE] = {
        LB_MODEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_LB_MODEf,
        false,
        true,
        0,
        lb_mode_symbol_to_scalar,
        lb_mode_scalar_to_symbol
    },
    [XFS_LTSW_L3_ECMP_TBL_MAX_PATHS] = {
        MAX_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_MAX_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NUM_PATHS] = {
        NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    }
};

/*
 * ECMP_LEVEL1
 */
static const bcmint_ltsw_l3_egress_fld_t
l3_ecmp_1_flds[XFS_LTSW_L3_ECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_ECMP_TBL_ECMP_ID] = {
        ECMP_IDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_ECMP_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_1] = {
        NHOP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_NHOP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1] = {
        NHOP_INDEX_2s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_NHOP_INDEX_2f,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_STRENGTH_PROF_IDX] = {
        STRENGTH_PROFILE_INDEXs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_STRENGTH_PROFILE_INDEXf,
        false,
        false,
        ECMP_LEVEL_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_LB_MODE] = {
        LB_MODEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_LB_MODEf,
        false,
        true,
        0,
        lb_mode_symbol_to_scalar,
        lb_mode_scalar_to_symbol
    },
    [XFS_LTSW_L3_ECMP_TBL_MAX_PATHS] = {
        MAX_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_MAX_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NUM_PATHS] = {
        NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    }
};

/*
 * ECMP_LEVEL0_WEIGHTED
 */
static const bcmint_ltsw_l3_egress_fld_t
l3_ecmp_0_wgt_flds[XFS_LTSW_L3_ECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_ECMP_TBL_ECMP_ID] = {
        ECMP_IDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_ECMP_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_1] = {
        NHOP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_NHOP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_DVP] = {
        DVPs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_DVPf,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1] = {
        NHOP_2_OR_ECMP_GROUP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_NHOP_2_OR_ECMP_GROUP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_ECMP_AND_PROT_SWT_PROF_IDX] = {
        ECMP_AND_PROT_SWT_SFC_PROFILE_INDEXs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_ECMP_AND_PROT_SWT_SFC_PROFILE_INDEXf,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_RANDOM_SEED] = {
        RH_RANDOM_SEEDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_RH_RANDOM_SEEDf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_MODE] = {
        RH_MODEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_RH_MODEf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_NUM_PATHS] = {
        RH_NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_RH_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL,
    },
    [XFS_LTSW_L3_ECMP_TBL_NUM_PATHS] = {
        NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_WEIGHTED_SIZE] = {
        WEIGHTED_SIZEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_WEIGHTED_SIZEf,
        false,
        true,
        0,
        weighted_size_symbol_to_scalar,
        weighted_size_scalar_to_symbol
    }
};

/*
 * ECMP_LEVEL1_WEIGHTED
 */
static const bcmint_ltsw_l3_egress_fld_t
l3_ecmp_1_wgt_flds[XFS_LTSW_L3_ECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_ECMP_TBL_ECMP_ID] = {
        ECMP_IDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_ECMP_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_1] = {
        NHOP_INDEX_1s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_NHOP_INDEX_1f,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1] = {
        NHOP_INDEX_2s,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_NHOP_INDEX_2f,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_STRENGTH_PROF_IDX] = {
        STRENGTH_PROFILE_INDEXs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_STRENGTH_PROFILE_INDEXf,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_RANDOM_SEED] = {
        RH_RANDOM_SEEDs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_RH_RANDOM_SEEDf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_MODE] = {
        RH_MODEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_RH_MODEf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_RH_NUM_PATHS] = {
        RH_NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_RH_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL,
    },
    [XFS_LTSW_L3_ECMP_TBL_NUM_PATHS] = {
        NUM_PATHSs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_NUM_PATHSf,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_WEIGHTED_SIZE] = {
        WEIGHTED_SIZEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_SIZEf,
        false,
        true,
        0,
        weighted_size_symbol_to_scalar,
        weighted_size_scalar_to_symbol
    },
    [XFS_LTSW_L3_ECMP_TBL_WEIGHTED_MODE] = {
        WEIGHTED_MODEs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_MODEf,
        false,
        true,
        0,
        weighted_mode_symbol_to_scalar,
        weighted_mode_scalar_to_symbol
    },
    [XFS_LTSW_L3_ECMP_TBL_WEIGHT] = {
        WEIGHTs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_WEIGHTf,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_ECMP_TBL_WEIGHTED_NHOP_INDEX] = {
        WEIGHTED_NHOP_INDEXs,
        BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_WEIGHTED_NHOP_INDEXf,
        false,
        false,
        ECMP_LEVEL_WGT_MAX_PATHS_COUNT_MAX,
        NULL,
        NULL
    }
};

static const bcmint_ltsw_l3_egress_fld_t
l3_secmp_0_flds[XFS_LTSW_L3_SECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_SECMP_TBL_ECMP_ID] = {
        ECMP_SRC_L3_GROUP_0_IDs,
        ECMP_SRC_L3_GROUP_0t_ECMP_SRC_L3_GROUP_0_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF0_VAL_TYPE] = {
        OBJ_0s,
        ECMP_SRC_L3_GROUP_0t_OBJ_0f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF1_VAL_TYPE] = {
        OBJ_1s,
        ECMP_SRC_L3_GROUP_0t_OBJ_1f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF2_VAL_TYPE] = {
        OBJ_2s,
        ECMP_SRC_L3_GROUP_0t_OBJ_2f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF3_VAL_TYPE] = {
        OBJ_3s,
        ECMP_SRC_L3_GROUP_0t_OBJ_3f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF_CNT] = {
        CMD_0s,
        ECMP_SRC_L3_GROUP_0t_CMD_0f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF_CNT_GT8] = {
        CMD_1s,
        ECMP_SRC_L3_GROUP_0t_CMD_1f,
        false,
        false,
        0,
        NULL,
        NULL
    }
};

static const bcmint_ltsw_l3_egress_fld_t
l3_secmp_1_flds[XFS_LTSW_L3_SECMP_TBL_FLD_CNT] = {
    [XFS_LTSW_L3_SECMP_TBL_ECMP_ID] = {
        ECMP_SRC_L3_GROUP_1_IDs,
        ECMP_SRC_L3_GROUP_1t_ECMP_SRC_L3_GROUP_1_IDf,
        true,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF4_VAL_TYPE] = {
        OBJ_0s,
        ECMP_SRC_L3_GROUP_1t_OBJ_0f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF5_VAL_TYPE] = {
        OBJ_1s,
        ECMP_SRC_L3_GROUP_1t_OBJ_1f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF6_VAL_TYPE] = {
        OBJ_2s,
        ECMP_SRC_L3_GROUP_1t_OBJ_2f,
        false,
        false,
        0,
        NULL,
        NULL
    },
    [XFS_LTSW_L3_SECMP_TBL_L3_OIF7_VAL_TYPE] = {
        OBJ_3s,
        ECMP_SRC_L3_GROUP_1t_OBJ_3f,
        false,
        false,
        0,
        NULL,
        NULL
    }
};

static const bcmint_ltsw_l3_egress_tbl_t
bcm56780_a0_dna_2_5_13_l3_ecmp_tbls[BCMINT_LTSW_L3_ECMP_TBL_CNT] = {
    [BCMINT_LTSW_L3_ECMP_TBL_OL] = {
        .name = ECMP_LEVEL0s,
        .tbl_id = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t,
        .fld_cnt = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0t_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_DVP) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_AND_PROT_SWT_PROF_IDX) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_LB_MODE) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_MAX_PATHS )|
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NUM_PATHS),
        .flds = l3_ecmp_0_flds
    },
    [BCMINT_LTSW_L3_ECMP_TBL_UL] = {
        .name = ECMP_LEVEL1s,
        .tbl_id = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t,
        .fld_cnt = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1t_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_STRENGTH_PROF_IDX) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_LB_MODE) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_MAX_PATHS) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NUM_PATHS),
        .flds = l3_ecmp_1_flds
    },
    [BCMINT_LTSW_L3_ECMP_TBL_WEIGHTED_OL] = {
        .name = ECMP_LEVEL0_WEIGHTEDs,
        .tbl_id = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt,
        .fld_cnt = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL0_WEIGHTEDt_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_DVP) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_AND_PROT_SWT_PROF_IDX) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_RANDOM_SEED) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_MODE) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_NUM_PATHS) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NUM_PATHS) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_WEIGHTED_SIZE),
        .flds = l3_ecmp_0_wgt_flds
    },
    [BCMINT_LTSW_L3_ECMP_TBL_WEIGHTED_UL] = {
        .name = ECMP_LEVEL1_WEIGHTEDs,
        .tbl_id = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt,
        .fld_cnt = BCM56780_A0_DNA_2_5_13_ECMP_LEVEL1_WEIGHTEDt_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_ECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NHOP_2_OR_ECMP_1) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_STRENGTH_PROF_IDX) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_RANDOM_SEED) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_MODE) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_RH_NUM_PATHS) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_NUM_PATHS) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_WEIGHTED_MODE) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_WEIGHT) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_WEIGHTED_NHOP_INDEX) |
                   (1ULL << XFS_LTSW_L3_ECMP_TBL_WEIGHTED_SIZE),
        .flds = l3_ecmp_1_wgt_flds
    },
    [BCMINT_LTSW_L3_ECMP_TBL_SRC_GRP_0] = {
        .name = ECMP_SRC_L3_GROUP_0s,
        .tbl_id = ECMP_SRC_L3_GROUP_0t,
        .fld_cnt = ECMP_SRC_L3_GROUP_0t_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_SECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF0_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF1_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF2_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF3_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF_CNT) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF_CNT_GT8),
        .flds = l3_secmp_0_flds
    },
    [BCMINT_LTSW_L3_ECMP_TBL_SRC_GRP_1] = {
        .name = ECMP_SRC_L3_GROUP_1s,
        .tbl_id = ECMP_SRC_L3_GROUP_1t,
        .fld_cnt = ECMP_SRC_L3_GROUP_1t_FIELD_COUNT,
        .fld_bmp = (1ULL << XFS_LTSW_L3_SECMP_TBL_ECMP_ID) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF4_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF5_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF6_VAL_TYPE) |
                   (1ULL << XFS_LTSW_L3_SECMP_TBL_L3_OIF7_VAL_TYPE),
        .flds = l3_secmp_1_flds
    }
};

static int
bcm56780_a0_dna_2_5_13_l3_ecmp_tbl_db_get(int unit,
                                         bcmint_ltsw_l3_egress_tbl_db_t *tbl_db)
{
    SHR_FUNC_ENTER(unit);

    SHR_NULL_CHECK(tbl_db, SHR_E_PARAM);

    /* Bitmap of LTs that valid on bcm56780 DNA_2_5_13. */
    tbl_db->tbl_bmp = (1 << BCMINT_LTSW_L3_ECMP_TBL_UL) |
                      (1 << BCMINT_LTSW_L3_ECMP_TBL_OL) |
                      (1 << BCMINT_LTSW_L3_ECMP_TBL_WEIGHTED_UL) |
                      (1 << BCMINT_LTSW_L3_ECMP_TBL_WEIGHTED_OL) |
                      (1 << BCMINT_LTSW_L3_ECMP_TBL_SRC_GRP_0) |
                      (1 << BCMINT_LTSW_L3_ECMP_TBL_SRC_GRP_1);

    tbl_db->tbls = bcm56780_a0_dna_2_5_13_l3_ecmp_tbls;

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56780_a0_dna_2_5_13_l3_egress_init(int unit)
{
    int profile_id;
    bcmi_ltsw_hos_type_t type;
    int array_size = 1;
    bcmi_ltsw_hos_profile_control_t ctrl_type;
    int value;

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (xfs_ltsw_l3_egress_init(unit));

    if (ltsw_feature(unit, LTSW_FT_HASH_OUTPUT_SELECTION_PROFILE)) {
        /* Default Enable WECMP functionality. */
        profile_id = BCMI_LTSW_HOS_PROFILE_ID_3;
        type = bcmiHosTypeEcmpUnderlay;
        ctrl_type = bcmiHosProfileControlWEcmp;
        value = 1;
        SHR_IF_ERR_VERBOSE_EXIT
            (bcmi_ltsw_hos_profile_set
                (unit, profile_id, type, array_size, &ctrl_type, &value));
    }

exit:
    SHR_FUNC_EXIT();
}

static mbcm_ltsw_l3_egress_drv_t bcm56780_a0_dna_2_5_13_ltsw_l3_egr_drv = {
     /* ECMP table database */
    .l3_ecmp_tbl_db_get = bcm56780_a0_dna_2_5_13_l3_ecmp_tbl_db_get,

    .l3_egress_l2_rsv = xfs_ltsw_l3_egress_l2_rsv,
    .l3_egress_init = bcm56780_a0_dna_2_5_13_l3_egress_init,
    .l3_egress_deinit = xfs_ltsw_l3_egress_deinit,
    .l3_egress_id_range_get = xfs_ltsw_l3_egress_id_range_get,
    .l3_egress_create = xfs_ltsw_l3_egress_create,
    .l3_egress_destroy = xfs_ltsw_l3_egress_destroy,
    .l3_egress_get = xfs_ltsw_l3_egress_get,
    .l3_egress_find = xfs_ltsw_l3_egress_find,
    .l3_egress_traverse = xfs_ltsw_l3_egress_traverse,
    .l3_egress_obj_id_resolve = xfs_ltsw_l3_egress_obj_id_resolve,
    .l3_egress_obj_id_construct = xfs_ltsw_l3_egress_obj_id_construct,
    .l3_egress_obj_info_get = xfs_ltsw_l3_egress_obj_info_get,
    .l3_egress_obj_cnt_get = xfs_ltsw_l3_egress_obj_cnt_get,
    .l3_egress_dvp_set = xfs_ltsw_l3_egress_dvp_set,
    .l3_egress_flexctr_attach = xfs_ltsw_l3_egress_flexctr_attach,
    .l3_egress_flexctr_detach = xfs_ltsw_l3_egress_flexctr_detach,
    .l3_egress_flexctr_info_get = xfs_ltsw_l3_egress_flexctr_info_get,
    .l3_egress_flexctr_object_set = xfs_ltsw_l3_egress_flexctr_object_set,
    .l3_egress_flexctr_object_get = xfs_ltsw_l3_egress_flexctr_object_get,
    .l3_egress_ifa_create = xfs_ltsw_l3_egress_ifa_create,
    .l3_egress_ifa_destroy = xfs_ltsw_l3_egress_ifa_destroy,
    .l3_egress_ifa_get = xfs_ltsw_l3_egress_ifa_get,
    .l3_egress_ifa_traverse = xfs_ltsw_l3_egress_ifa_traverse,
    .l3_ecmp_create = xfs_ltsw_l3_ecmp_create,
    .l3_ecmp_destroy = xfs_ltsw_l3_ecmp_destroy,
    .l3_ecmp_get = xfs_ltsw_l3_ecmp_get,
    .l3_ecmp_member_add = xfs_ltsw_l3_ecmp_member_add,
    .l3_ecmp_member_del = xfs_ltsw_l3_ecmp_member_del,
    .l3_ecmp_member_del_all = xfs_ltsw_l3_ecmp_member_del_all,
    .l3_ecmp_find = xfs_ltsw_l3_ecmp_find,
    .l3_ecmp_trav = xfs_ltsw_l3_ecmp_trav,
    .l3_ecmp_max_paths_get = xfs_ltsw_l3_ecmp_max_paths_get,
    .l3_ecmp_member_status_set = xfs_ltsw_l3_ecmp_member_status_set,
    .l3_ecmp_member_status_get = xfs_ltsw_l3_ecmp_member_status_get,
    .l3_ecmp_dlb_mon_config_set = xfs_ltsw_l3_ecmp_dlb_mon_config_set,
    .l3_ecmp_dlb_mon_config_get = xfs_ltsw_l3_ecmp_dlb_mon_config_get,
    .ecmp_member_dest_alloc = xfs_ltsw_ecmp_member_dest_alloc,
    .ecmp_member_dest_get = xfs_ltsw_ecmp_member_dest_get,
    .ecmp_member_dest_free = xfs_ltsw_ecmp_member_dest_free,
    .ecmp_member_dest_update = xfs_ltsw_ecmp_member_dest_update,
    .l3_ecmp_dlb_stat_set = xfs_ltsw_l3_ecmp_dlb_stat_set,
    .l3_ecmp_dlb_stat_get = xfs_ltsw_l3_ecmp_dlb_stat_get,
    .l3_ecmp_dlb_stat_sync_get = xfs_ltsw_l3_ecmp_dlb_stat_sync_get,
    .l3_egress_trunk_member_del = xfs_ltsw_l3_egress_trunk_member_delete,
    .l3_egress_trunk_member_add = xfs_ltsw_l3_egress_trunk_member_add
};


/******************************************************************************
 * Public functions
 */

int
bcm56780_a0_dna_2_5_13_ltsw_l3_egress_drv_attach(int unit)
{
    return mbcm_ltsw_l3_egress_drv_set(unit,
                                       &bcm56780_a0_dna_2_5_13_ltsw_l3_egr_drv);
}
