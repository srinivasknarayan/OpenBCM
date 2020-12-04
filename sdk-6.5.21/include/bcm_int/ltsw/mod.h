/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMI_LTSW_MOD_H
#define BCMI_LTSW_MOD_H

#include <bcm/types.h>

/*!
 * \brief Mirror-on-drop destination configuration.
 */
typedef struct bcmi_ltsw_cosq_mod_dest_s {

    /*! Local port id. */
    bcm_port_t port;

    /*! Queue id. */
    int cosq;

    /*! Encap id. */
    int encap_id;

    /*! MOD dest id. */
    int mod_dest_id;

    /*! MOD profile id. */
    int mod_profile_id;

    /*! Mirror instance id. */
    int instance_id;

} bcmi_ltsw_cosq_mod_dest_t;

/*!
 * \brief Init Cosq mirror-on-drop module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_init(int unit);

/*!
 * \brief detach Cosq mirror-on-drop module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_detach(int unit);

/*!
 * \brief Add mirror-on-drop destination.
 *
 * \param [in] unit Unit Number.
 * \param [in] mod_dest Mirror-on-drop destination.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_dest_add(
    int unit,
    bcmi_ltsw_cosq_mod_dest_t *mod_dest);

/*!
 * \brief Delete mirror-on-drop destination.
 *
 * \param [in] unit Unit Number.
 * \param [in] mod_dest Mirror-on-drop destination.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_dest_delete(
    int unit,
    bcmi_ltsw_cosq_mod_dest_t *mod_dest);

/*!
 * \brief Get mirror-on-drop destination.
 *
 * \param [in] unit Unit Number.
 * \param [out] mod_dest Mirror-on-drop destination.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_dest_get(
    int unit,
    bcmi_ltsw_cosq_mod_dest_t *mod_dest);

/*!
 * \brief Get mirror instance id.
 *
 * \param [in] unit Unit Number.
 * \param [out] instance_id Mirror instance id. -1 if not found.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
bcmi_ltsw_cosq_mod_instance_id_get(
    int unit,
    int *instance_id);

#endif /* BCMI_LTSW_MOD_H */
