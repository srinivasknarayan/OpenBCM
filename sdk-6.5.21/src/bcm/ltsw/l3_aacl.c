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

#include <bcm_int/ltsw/l3_aacl.h>
#include <bcm_int/ltsw/feature.h>
#include <bcm_int/ltsw/mbcm/l3_aacl.h>

#include <sal/sal_mutex.h>
#include <sal/sal_types.h>
#include <shr/shr_debug.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_L3

/*! Signature for L3 AACL. */
#define L3_AACL_SIGNATURE 0x13aac1db

/*!
 * \brief Generic database of L3 AACL.
 */
typedef struct l3_aacl_db_s {

    /*! L3 AACL module lock. */
    sal_mutex_t lock;

    /*! L3 AACL signature. */
    uint32_t signature;

} l3_aacl_db_t;

/*!
 * \brief The L3_aacl database.
 */
static l3_aacl_db_t bcmi_ltsw_l3_aacl_db[BCM_MAX_NUM_UNITS];

/******************************************************************************
 * Private functions
 */


/*!
 * \brief Create protection mutex for L3 AACL.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE Success.
 * \retval !SHR_E_NONE Failure.
 */
static int
l3_aacl_lock_create(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    SHR_FUNC_ENTER(unit);

    if (aacl_db->lock == NULL) {
        aacl_db->lock = sal_mutex_create("bcmL3AaclMutex");
        SHR_NULL_CHECK(aacl_db->lock, SHR_E_MEMORY);
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Destroy protection mutex for L3 AACL.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE Success.
 */
static int
l3_aacl_lock_destroy(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    SHR_FUNC_ENTER(unit);

    if (aacl_db->lock != NULL) {
        sal_mutex_destroy(aacl_db->lock);
        aacl_db->lock = NULL;
    }
    SHR_EXIT();

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief L3 AACL mutax lock.
 *
 * \param [in] unit Unit Number.
 */
static void
l3_aacl_lock(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    if (aacl_db->lock) {
        sal_mutex_take(aacl_db->lock, SAL_MUTEX_FOREVER);
    }
}

/*!
 * \brief L3 AACL mutax unlock.
 *
 * \param [in] unit Unit Number.
 */
static void
l3_aacl_unlock(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    if (aacl_db->lock) {
        sal_mutex_give(aacl_db->lock);
    }
}

/*!
 * \brief Validation for L3 AACL feature.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval SHR_E_INIT No initialization.
 * \retval SHR_E_UNAVAIL Feature not supported.
 */
static int
l3_aacl_validate(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    SHR_FUNC_ENTER(unit);

    if (aacl_db->signature != L3_AACL_SIGNATURE) {
        SHR_IF_ERR_EXIT(SHR_E_INIT);
    }
    if (!ltsw_feature(unit, LTSW_FT_L3_AACL)) {
        SHR_ERR_EXIT(SHR_E_UNAVAIL);
    }

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Initialize the flex digest module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE Success.
 * \retval !SHR_E_NONE Failure.
 */
static int
l3_aacl_init(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_aacl_init(unit));
    aacl_db->signature = L3_AACL_SIGNATURE;

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief De-initialize the flex digest module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE Success.
 * \retval !SHR_E_NONE Failure.
 */
static int
l3_aacl_deinit(int unit)
{
    l3_aacl_db_t *aacl_db = &bcmi_ltsw_l3_aacl_db[unit];

    SHR_FUNC_ENTER(unit);

    if (aacl_db->signature == L3_AACL_SIGNATURE) {
        SHR_IF_ERR_EXIT
            (mbcm_ltsw_l3_aacl_deinit(unit));
        aacl_db->signature = 0;
    }

exit:
    SHR_FUNC_EXIT();
}


/*******************************************************************************
 * Public Internal Module functions
 */

int
bcmint_ltsw_l3_aacl_tbl_get(
    int unit,
    bcmint_ltsw_l3_aacl_tbl_id_t tbl_id,
    const bcmint_ltsw_l3_aacl_tbl_t **tbl_info)
{
    bcmint_ltsw_l3_aacl_tbl_db_t tbl_db = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_aacl_tbl_db_get(unit, &tbl_db));

    if (!(tbl_db.tbl_bmp & (1 << tbl_id))) {
        SHR_ERR_EXIT(SHR_E_UNAVAIL);
    }

    *tbl_info = &tbl_db.tbls[tbl_id];

exit:
    SHR_FUNC_EXIT();
}


/******************************************************************************
 * Public functions
 */

int
bcmi_ltsw_l3_aacl_init(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_lock_create(unit));

    SHR_IF_ERR_EXIT
        (l3_aacl_init(unit));

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_deinit(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_deinit(unit));

    SHR_IF_ERR_EXIT
        (l3_aacl_lock_destroy(unit));

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_add(
    int unit,
    uint32_t options,
    bcm_l3_aacl_t *aacl)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    SHR_NULL_CHECK(aacl, SHR_E_PARAM);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_aacl_validate(unit, aacl, true));

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_add(unit, options, aacl));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_delete(
    int unit,
    bcm_l3_aacl_t *aacl)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    SHR_NULL_CHECK(aacl, SHR_E_PARAM);

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_aacl_validate(unit, aacl, true));

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_delete(unit, aacl));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_delete_all(
    int unit,
    bcm_l3_aacl_t *aacl)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    SHR_IF_ERR_EXIT
        (mbcm_ltsw_l3_aacl_validate(unit, aacl, true));

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_delete_all(unit, aacl));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_find(
    int unit,
    bcm_l3_aacl_t *aacl)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    SHR_NULL_CHECK(aacl, SHR_E_PARAM);

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_find(unit, aacl));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_traverse(
    int unit,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_traverse(unit, trav_fn, user_data));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

int
bcmi_ltsw_l3_aacl_matched_traverse(
    int unit,
    uint32_t flags,
    bcm_l3_aacl_traverse_cb trav_fn,
    void *user_data)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_EXIT
        (l3_aacl_validate(unit));

    l3_aacl_lock(unit);

    SHR_IF_ERR_CONT
        (mbcm_ltsw_l3_aacl_matched_traverse(unit, flags, trav_fn, user_data));

    l3_aacl_unlock(unit);

exit:
    SHR_FUNC_EXIT();
}

