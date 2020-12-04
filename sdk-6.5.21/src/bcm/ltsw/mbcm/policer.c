/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm/types.h>

#include <bcm_int/ltsw/mbcm/policer.h>
#include <bcm_int/ltsw/mbcm/mbcm.h>

#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_POLICER

/*!
 * \brief The Policer mbcm drivers.
 */
static mbcm_ltsw_policer_drv_t mbcm_ltsw_policer_drv[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */

/******************************************************************************
 * Public functions
 */

int
mbcm_ltsw_policer_drv_set(
    int unit,
    mbcm_ltsw_policer_drv_t *drv)
{
    mbcm_ltsw_policer_drv_t *local = &mbcm_ltsw_policer_drv[unit];

    SHR_FUNC_ENTER(unit);


    mbcm_ltsw_drv_init((mbcm_ltsw_drv_t *)local,
                       (mbcm_ltsw_drv_t *)drv,
                       sizeof(*local)/MBCM_LTSW_FNPTR_SZ);

    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_deinit(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_deinit(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_create(
    int unit,
    bcm_policer_config_t *pol_cfg,
    bcm_policer_t *policer_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_create(unit, pol_cfg, policer_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_destroy(
    int unit,
    bcm_policer_t policer_id)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_destroy(unit, policer_id));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_destroy_all(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_destroy_all(unit));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_set(
    int unit,
    bcm_policer_t policer_id,
    bcm_policer_config_t *pol_cfg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_set(unit, policer_id, pol_cfg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_get(
    int unit,
    bcm_policer_t policer_id,
    bcm_policer_config_t *pol_cfg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_get(unit, policer_id, pol_cfg));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_traverse(
    int unit,
    bcm_policer_traverse_cb cb,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_traverse(unit, cb, user_data));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_capacity_get(
    int unit,
    bcmi_ltsw_policer_stage_t stage,
    uint32_t *num_meters)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_capacity_get(unit, stage, num_meters));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_max_pool_idx_get(
    int unit,
    bcmi_ltsw_policer_stage_t stage,
    uint32_t *max_idx)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_max_pool_idx_get(unit, stage, max_idx));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_install(
    int unit,
    bcm_policer_t policer_id,
    bcm_policer_config_t *pol_cfg,
    int pipe,
    int pool)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_install(unit, policer_id, pol_cfg, pipe, pool));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_supported(
    int unit,
    bcmi_ltsw_policer_stage_t stage,
    bool *support)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_supported(unit, stage, support));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_stage_flags_get(
    int unit,
    bcmi_ltsw_policer_stage_t stage,
    uint32_t *flags)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_stage_flags_get(unit, stage, flags));

exit:
    SHR_FUNC_EXIT();
}

int
mbcm_ltsw_policer_pool_init(
    int unit,
    bcmint_policer_pool_state_t *pool_state,
    int num_pipes,
    int max_pools)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_policer_drv[unit].policer_pool_init(unit,
                                                       pool_state,
                                                       num_pipes,
                                                       max_pools));

exit:
    SHR_FUNC_EXIT();
}

