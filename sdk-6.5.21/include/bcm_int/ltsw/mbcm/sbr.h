/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_SBR_H
#define BCMINT_LTSW_MBCM_SBR_H

#include <bcm_int/ltsw/sbr_int.h>
#include <bcm_int/ltsw/sbr.h>

#include <sal/sal_types.h>

/*!
 * \brief Get SBR database.
 *
 * \param [in] unit Unit Number.
 * \param [out] sbr_db SBR database.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*sbr_db_get_f)(
    int unit,
    bcmint_sbr_db_t *sbr_db);

/*!
 * \brief Get SBR entry status.
 *
 * \param [in] unit Unit Number.
 * \param [in] tbl_hdl Handle to strength profile table.
 * \param [in] ent_type Strength profile entry type.
 * \param [out] status Entry status.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*sbr_ent_status_get_f)(
    int unit,
    bcmi_ltsw_sbr_profile_tbl_hdl_t tbl_hdl,
    bcmi_ltsw_sbr_profile_ent_type_t ent_type,
    uint32_t *status);

/*!
 * \brief Sbr driver structure.
 */
typedef struct mbcm_ltsw_sbr_drv_s {

    /*! Get SBR database. */
    sbr_db_get_f sbr_db_get;

    /*! Get SBR entry status. */
    sbr_ent_status_get_f sbr_ent_status_get;

} mbcm_ltsw_sbr_drv_t;

/*!
 * \brief Set the SBR driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Sbr driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_sbr_drv_set(
    int unit,
    mbcm_ltsw_sbr_drv_t *drv);

/*!
 * \brief Get SBR database.
 *
 * \param [in] unit Unit Number.
 * \param [out] sbr_db SBR database.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_sbr_db_get(
    int unit,
    bcmint_sbr_db_t *sbr_db);

/*!
 * \brief Get SBR entry status.
 *
 * \param [in] unit Unit Number.
 * \param [in] tbl_hdl Handle to strength profile table.
 * \param [in] ent_type Strength profile entry type.
 * \param [out] status Entry status.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_sbr_ent_status_get(
    int unit,
    bcmi_ltsw_sbr_profile_tbl_hdl_t tbl_hdl,
    bcmi_ltsw_sbr_profile_ent_type_t ent_type,
    uint32_t *status);

#endif /* BCMINT_LTSW_MBCM_SBR_H */
