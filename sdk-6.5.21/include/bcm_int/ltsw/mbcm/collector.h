/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_COLLECTOR_H
#define BCMINT_LTSW_MBCM_COLLECTOR_H

#include <bcm/collector.h>
#include <bcm/mirror.h>

#include <bcm_int/ltsw/collector.h>

#include <sal/sal_types.h>

/*!
 * \brief Increment/Decrement reference count for an export profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Export profile ID.
 * \param [in] update Reference count update (+/-).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_export_profile_ref_count_update_f)(
    int unit,
    int id,
    int update);

/*!
 * \brief Increment/Decrement reference count for a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] update Reference count update (+/-).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_ref_count_update_f)(
    int unit,
    bcm_collector_t id,
    int update);

/*!
 * \brief Add user for a collector. Currently one user is expected per collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] user he user type of calling app.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_user_update_f)(
    int unit,
    bcm_collector_t id,
    bcmi_ltsw_collector_export_app_t user);

/*!
 * \brief Check if collector ID is used by other user.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] my_user The user type of calling app.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_check_user_is_other_f)(
    int unit,
    bcm_collector_t id,
    bcmi_ltsw_collector_export_app_t my_user);

/*!
 * \brief Get the internal ID (the ID that is programmed in LT) and the type of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] internal_id Internal ID of the collector.
 * \param [out] type Type of the collector.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_internal_id_get_f)(
    int unit,
    bcm_collector_t id,
    uint32_t *internal_id,
    bcmi_ltsw_collector_transport_type_t *type);

/*!
 * \brief Get the external ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] internal_id Internal ID of the collector.
 * \param [in] type Type of the collector.
 * \param [out] id External ID of the collector.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_external_id_get_f)(
    int unit,
    uint32_t internal_id,
    bcmi_ltsw_collector_transport_type_t type,
    bcm_collector_t *id);

/*!
 * \brief Bookkeeping the mirror destination ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] mirror_dest_id Mirror destination ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_mirror_dest_id_bk_f)(
    int unit,
    bcm_collector_t id,
    bcm_gport_t mirror_dest_id);

/*!
 * \brief Get the mirror destination ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] mirror_dest_id Mirror destination ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_mirror_dest_id_get_f)(
    int unit,
    bcm_collector_t id,
    bcm_gport_t *mirror_dest_id);

/*!
 * \brief Chip specific collector init.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_init_f)(int unit);

/*!
 * \brief Create a collector export profile with given export profile info.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Collector export profile create options.
 * \param [inout] id Collector ID.
 * \param [in] export_profile_info Collector export profile info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_export_profile_create_f)(
    int unit,
    uint32_t options,
    bcm_collector_t *id,
    bcm_collector_export_profile_t *export_profile_info);

/*!
 * \brief Get a collector export profile information.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] export_profile_info Collector export profile info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_export_profile_get_f)(
    int unit,
    int id,
    bcm_collector_export_profile_t *export_profile_info);

/*!
 * \brief Get the list of all collector export profile IDs configured
 *
 * \param [in] unit Unit Number.
 * \param [in] max_size Size of the collector list array.
 * \param [out] export_profile_ids_list Collector export profile ID list.
 * \param [out] list_size Number of elements in the list.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_export_profile_ids_get_all_f)(
    int unit,
    int max_size,
    int *export_profile_ids_list,
    int *list_size);

/*!
 * \brief Destroy a collector export profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector expor profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_export_profile_destroy_f)(
    int unit,
    int id);

/*!
 * \brief Create a collector with given collector information.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Collector create options.
 * \param [inout] id Collector ID.
 * \param [in] collector_info Collector info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_create_f)(
    int unit,
    uint32_t options,
    bcm_collector_t *id,
    bcm_collector_info_t *collector_info);

/*!
 * \brief Get a collector information.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] collector_info Collector info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_get_f)(
    int unit,
    bcm_collector_t id,
    bcm_collector_info_t *collector_info);

/*!
 * \brief Get the list of all collector IDs configured.
 *
 * \param [in] unit Unit Number.
 * \param [in] max_size Size of the collector list array.
 * \param [out] collector_list Collector ID list.
 * \param [out] list_size Number of elements in the list.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_get_all_f)(
    int unit,
    int max_size,
    bcm_collector_t *collector_list,
    int *list_size);

/*!
 * \brief Destroy a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*collector_destroy_f)(
    int unit,
    bcm_collector_t id);

/*!
 * \brief Collector driver structure.
 */
typedef struct mbcm_ltsw_collector_drv_s {

    /*! Increment/Decrement reference count for an export profile. */
    collector_export_profile_ref_count_update_f collector_export_profile_ref_count_update;

    /*! Increment/Decrement reference count for a collector. */
    collector_ref_count_update_f collector_ref_count_update;

    /*! Add user for a collector. Currently one user is expected per collector. */
    collector_user_update_f collector_user_update;

    /*! Check if collector ID is used by other user. */
    collector_check_user_is_other_f collector_check_user_is_other;

    /*! Get the internal ID (the ID that is programmed in LT) and the type of a collector. */
    collector_internal_id_get_f collector_internal_id_get;

    /*! Get the external ID of a collector. */
    collector_external_id_get_f collector_external_id_get;

    /*! Bookkeeping the mirror destination ID of a collector. */
    collector_mirror_dest_id_bk_f collector_mirror_dest_id_bk;

    /*! Get the mirror destination ID of a collector. */
    collector_mirror_dest_id_get_f collector_mirror_dest_id_get;

    /*! Chip specific collector init. */
    collector_init_f collector_init;

    /*! Create a collector export profile with given export profile info. */
    collector_export_profile_create_f collector_export_profile_create;

    /*! Get a collector export profile information. */
    collector_export_profile_get_f collector_export_profile_get;

    /*! Get the list of all collector export profile IDs configured */
    collector_export_profile_ids_get_all_f collector_export_profile_ids_get_all;

    /*! Destroy a collector export profile. */
    collector_export_profile_destroy_f collector_export_profile_destroy;

    /*! Create a collector with given collector information. */
    collector_create_f collector_create;

    /*! Get a collector information. */
    collector_get_f collector_get;

    /*! Get the list of all collector IDs configured. */
    collector_get_all_f collector_get_all;

    /*! Destroy a collector. */
    collector_destroy_f collector_destroy;

} mbcm_ltsw_collector_drv_t;

/*!
 * \brief Set the COLLECTOR driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Collector driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_drv_set(
    int unit,
    mbcm_ltsw_collector_drv_t *drv);

/*!
 * \brief Increment/Decrement reference count for an export profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Export profile ID.
 * \param [in] update Reference count update (+/-).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_export_profile_ref_count_update(
    int unit,
    int id,
    int update);

/*!
 * \brief Increment/Decrement reference count for a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] update Reference count update (+/-).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_ref_count_update(
    int unit,
    bcm_collector_t id,
    int update);

/*!
 * \brief Add user for a collector. Currently one user is expected per collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] user he user type of calling app.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_user_update(
    int unit,
    bcm_collector_t id,
    bcmi_ltsw_collector_export_app_t user);

/*!
 * \brief Check if collector ID is used by other user.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] my_user The user type of calling app.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_check_user_is_other(
    int unit,
    bcm_collector_t id,
    bcmi_ltsw_collector_export_app_t my_user);

/*!
 * \brief Get the internal ID (the ID that is programmed in LT) and the type of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] internal_id Internal ID of the collector.
 * \param [out] type Type of the collector.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_internal_id_get(
    int unit,
    bcm_collector_t id,
    uint32_t *internal_id,
    bcmi_ltsw_collector_transport_type_t *type);

/*!
 * \brief Get the external ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] internal_id Internal ID of the collector.
 * \param [in] type Type of the collector.
 * \param [out] id External ID of the collector.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_external_id_get(
    int unit,
    uint32_t internal_id,
    bcmi_ltsw_collector_transport_type_t type,
    bcm_collector_t *id);

/*!
 * \brief Bookkeeping the mirror destination ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [in] mirror_dest_id Mirror destination ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_mirror_dest_id_bk(
    int unit,
    bcm_collector_t id,
    bcm_gport_t mirror_dest_id);

/*!
 * \brief Get the mirror destination ID of a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] mirror_dest_id Mirror destination ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_mirror_dest_id_get(
    int unit,
    bcm_collector_t id,
    bcm_gport_t *mirror_dest_id);

/*!
 * \brief Chip specific collector init.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_init(int unit);

/*!
 * \brief Create a collector export profile with given export profile info.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Collector export profile create options.
 * \param [inout] id Collector ID.
 * \param [in] export_profile_info Collector export profile info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_export_profile_create(
    int unit,
    uint32_t options,
    bcm_collector_t *id,
    bcm_collector_export_profile_t *export_profile_info);

/*!
 * \brief Get a collector export profile information.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] export_profile_info Collector export profile info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_export_profile_get(
    int unit,
    int id,
    bcm_collector_export_profile_t *export_profile_info);

/*!
 * \brief Get the list of all collector export profile IDs configured
 *
 * \param [in] unit Unit Number.
 * \param [in] max_size Size of the collector list array.
 * \param [out] export_profile_ids_list Collector export profile ID list.
 * \param [out] list_size Number of elements in the list.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_export_profile_ids_get_all(
    int unit,
    int max_size,
    int *export_profile_ids_list,
    int *list_size);

/*!
 * \brief Destroy a collector export profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector expor profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_export_profile_destroy(
    int unit,
    int id);

/*!
 * \brief Create a collector with given collector information.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Collector create options.
 * \param [inout] id Collector ID.
 * \param [in] collector_info Collector info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_create(
    int unit,
    uint32_t options,
    bcm_collector_t *id,
    bcm_collector_info_t *collector_info);

/*!
 * \brief Get a collector information.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 * \param [out] collector_info Collector info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_get(
    int unit,
    bcm_collector_t id,
    bcm_collector_info_t *collector_info);

/*!
 * \brief Get the list of all collector IDs configured.
 *
 * \param [in] unit Unit Number.
 * \param [in] max_size Size of the collector list array.
 * \param [out] collector_list Collector ID list.
 * \param [out] list_size Number of elements in the list.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_get_all(
    int unit,
    int max_size,
    bcm_collector_t *collector_list,
    int *list_size);

/*!
 * \brief Destroy a collector.
 *
 * \param [in] unit Unit Number.
 * \param [in] id Collector ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_collector_destroy(
    int unit,
    bcm_collector_t id);

#endif /* BCMINT_LTSW_MBCM_COLLECTOR_H */