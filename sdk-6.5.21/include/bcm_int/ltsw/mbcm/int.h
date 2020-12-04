/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_INT_H
#define BCMINT_LTSW_MBCM_INT_H

#if defined(INCLUDE_INT)

#include <bcm/int.h>

#include <bcm_int/ltsw/int.h>
#include <bcm_int/ltsw/int_int.h>

#include <sal/sal_types.h>

/*!
 * \brief Init INT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_init_f)(int unit);

/*!
 * \brief Detach INT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_detach_f)(int unit);

/*!
 * \brief Specify INT switch control behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] control The desired configuration parameter to modify.
 * \param [in] value The value with which to set the parameter.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_control_set_f)(
    int unit,
    bcmi_ltsw_int_control_t control,
    uint32_t value);

/*!
 * \brief Retrieve INT switch control behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] control The desired configuration parameter to retrieve.
 * \param [out] value Pointer to where the retrieved value will be written.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_control_get_f)(
    int unit,
    bcmi_ltsw_int_control_t control,
    uint32_t *value);

/*!
 * \brief Add a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Add options.
 * \param [in/out] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_add_f)(
    int unit,
    uint32 options,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Get a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [out] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_get_f)(
    int unit,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Delete a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_del_f)(
    int unit,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Delete all vector matches for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Vector match type.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_del_all_f)(
    int unit,
    bcmi_ltsw_int_vector_match_type_t type);

/*!
 * \brief Traverse all vector matches for IFA.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct ifa info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_ifa_traverse_f)(
    int unit,
    bcm_int_ifa_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_ifa_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all vector matches for IOAM.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct ioam info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_ioam_traverse_f)(
    int unit,
    bcm_int_ioam_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_ioam_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all vector matches for INT-DP.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct int-dp info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_vector_match_dp_traverse_f)(
    int unit,
    bcm_int_dp_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_dp_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Create the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in/out] profile_id Action profile ID.
 * \param [in] profile Action profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_create_f)(
    int unit,
    uint32 flags,
    int *profile_id,
    bcmi_ltsw_int_action_profile_t *profile);

/*!
 * \brief Get the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in] profile_id Action profile ID.
 * \param [out] profile Action profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_get_f)(
    int unit,
    uint32 flags,
    int profile_id,
    bcmi_ltsw_int_action_profile_t *profile);

/*!
 * \brief Delete the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in] type Action profile type.
 * \param [in] profile_id Action profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_del_f)(
    int unit,
    uint32 flags,
    bcmi_ltsw_int_action_profile_type_t type,
    int profile_id);

/*!
 * \brief Traverse all action profiles for IFA.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct ifa info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_ifa_traverse_f)(
    int unit,
    bcm_int_ifa_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_ifa_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all action profiles for IOAM.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct ioam info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_ioam_traverse_f)(
    int unit,
    bcm_int_ioam_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_ioam_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all action profiles for INT-DP.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct int-dp info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_action_profile_dp_traverse_f)(
    int unit,
    bcm_int_dp_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_dp_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Create the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in/out] profile_id Opaque data profile ID.
 * \param [in] profile Opaque data profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_opaque_data_profile_create_f)(
    int unit,
    uint32 flags,
    int *profile_id,
    bcm_int_opaque_data_profile_t *profile);

/*!
 * \brief Get the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in] profile_id Opaque data profile ID.
 * \param [out] profile Opaque data profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_opaque_data_profile_get_f)(
    int unit,
    uint32 flags,
    int profile_id,
    bcm_int_opaque_data_profile_t *profile);

/*!
 * \brief Delete the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in] profile_id Opaque data profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_opaque_data_profile_del_f)(
    int unit,
    uint32 flags,
    int profile_id);

/*!
 * \brief Traverse all opaque data profiles INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] cb A pointer to the callback function to call for each opaque data profile.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_opaque_data_profile_traverse_f)(
    int unit,
    bcm_int_opaque_data_profile_traverse_cb cb,
    void *user_data);

/*!
 * \brief Set various configurations for INT cosq stat.
 *
 * \param [in] unit Unit Number.
 * \param [in] config Cosq stat configurations.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_cosq_stat_config_set_f)(
    int unit,
    bcm_int_cosq_stat_config_t *config);

/*!
 * \brief Get various configurations for INT cosq stat.
 *
 * \param [in] unit Unit Number.
 * \param [out] config Cosq stat configurations.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_cosq_stat_config_get_f)(
    int unit,
    bcm_int_cosq_stat_config_t *config);

/*!
 * \brief Create the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in/out] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_profile_create_f)(
    int unit,
    uint32 flags,
    int *profile_id);

/*!
 * \brief Get the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] array_size Metadata field array size.
 * \param [out] entry_array Metadata field entry array.
 * \param [out] field_count Metadata field count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_profile_get_f)(
    int unit,
    uint32 flags,
    int profile_id,
    int array_size,
    bcm_int_metadata_field_entry_t *entry_array,
    int *field_count);

/*!
 * \brief Delete the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_profile_del_f)(
    int unit,
    uint32 flags,
    int profile_id);

/*!
 * \brief Traverse all metadata profiles.
 *
 * \param [in] unit Unit Number.
 * \param [in] cb A pointer to the callback function to call for each metadata profile.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_profile_traverse_f)(
    int unit,
    bcm_int_metadata_profile_traverse_cb cb,
    void *user_data);

/*!
 * \brief Add the metadata field to the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] field_entry Metadata field entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_field_add_f)(
    int unit,
    int profile_id,
    bcm_int_metadata_field_entry_t *field_entry);

/*!
 * \brief Delete the metadata field from the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] field_entry Metadata field entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_field_delete_f)(
    int unit,
    int profile_id,
    bcm_int_metadata_field_entry_t *field_entry);

/*!
 * \brief Delete all the metadata field from the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_field_delete_all_f)(
    int unit,
    int profile_id);

/*!
 * \brief Get the metadata field select information.
 *
 * \param [in] unit Unit Number.
 * \param [in] field Metadata field.
 * \param [out] field_select_info Metadata field select information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_metadata_field_select_info_get_f)(
    int unit,
    bcm_int_metadata_field_t field,
    bcm_int_metadata_field_select_info_t *field_select_info);

/*!
 * \brief Get metadata field info.
 *
 * \param [in] unit Unit Number.
 * \param [out] field_info Metadata field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*int_md_field_info_get_f)(
    int unit,
    bcmint_int_md_field_info_t **field_info);

/*!
 * \brief Int driver structure.
 */
typedef struct mbcm_ltsw_int_drv_s {

    /*! Init INT module. */
    int_init_f int_init;

    /*! Detach INT module. */
    int_detach_f int_detach;

    /*! Specify INT switch control behaviors. */
    int_control_set_f int_control_set;

    /*! Retrieve INT switch control behaviors. */
    int_control_get_f int_control_get;

    /*! Add a vector match for INT. */
    int_vector_match_add_f int_vector_match_add;

    /*! Get a vector match for INT. */
    int_vector_match_get_f int_vector_match_get;

    /*! Delete a vector match for INT. */
    int_vector_match_del_f int_vector_match_del;

    /*! Delete all vector matches for INT. */
    int_vector_match_del_all_f int_vector_match_del_all;

    /*! Traverse all vector matches for IFA. */
    int_vector_match_ifa_traverse_f int_vector_match_ifa_traverse;

    /*! Traverse all vector matches for IOAM. */
    int_vector_match_ioam_traverse_f int_vector_match_ioam_traverse;

    /*! Traverse all vector matches for INT-DP. */
    int_vector_match_dp_traverse_f int_vector_match_dp_traverse;

    /*! Create the INT action profile. */
    int_action_profile_create_f int_action_profile_create;

    /*! Get the INT action profile. */
    int_action_profile_get_f int_action_profile_get;

    /*! Delete the INT action profile. */
    int_action_profile_del_f int_action_profile_del;

    /*! Traverse all action profiles for IFA. */
    int_action_profile_ifa_traverse_f int_action_profile_ifa_traverse;

    /*! Traverse all action profiles for IOAM. */
    int_action_profile_ioam_traverse_f int_action_profile_ioam_traverse;

    /*! Traverse all action profiles for INT-DP. */
    int_action_profile_dp_traverse_f int_action_profile_dp_traverse;

    /*! Create the opaque data profile for INT metadata construction. */
    int_opaque_data_profile_create_f int_opaque_data_profile_create;

    /*! Get the opaque data profile for INT metadata construction. */
    int_opaque_data_profile_get_f int_opaque_data_profile_get;

    /*! Delete the opaque data profile for INT metadata construction. */
    int_opaque_data_profile_del_f int_opaque_data_profile_del;

    /*! Traverse all opaque data profiles INT metadata construction. */
    int_opaque_data_profile_traverse_f int_opaque_data_profile_traverse;

    /*! Set various configurations for INT cosq stat. */
    int_cosq_stat_config_set_f int_cosq_stat_config_set;

    /*! Get various configurations for INT cosq stat. */
    int_cosq_stat_config_get_f int_cosq_stat_config_get;

    /*! Create the metadata profile. */
    int_metadata_profile_create_f int_metadata_profile_create;

    /*! Get the metadata profile. */
    int_metadata_profile_get_f int_metadata_profile_get;

    /*! Delete the metadata profile. */
    int_metadata_profile_del_f int_metadata_profile_del;

    /*! Traverse all metadata profiles. */
    int_metadata_profile_traverse_f int_metadata_profile_traverse;

    /*! Add the metadata field to the metadata profile. */
    int_metadata_field_add_f int_metadata_field_add;

    /*! Delete the metadata field from the metadata profile. */
    int_metadata_field_delete_f int_metadata_field_delete;

    /*! Delete all the metadata field from the metadata profile. */
    int_metadata_field_delete_all_f int_metadata_field_delete_all;

    /*! Get the metadata field select information. */
    int_metadata_field_select_info_get_f int_metadata_field_select_info_get;

    /*! Get metadata field info. */
    int_md_field_info_get_f int_md_field_info_get;

} mbcm_ltsw_int_drv_t;

/*!
 * \brief Set the INT driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Int driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_drv_set(
    int unit,
    mbcm_ltsw_int_drv_t *drv);

/*!
 * \brief Init INT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_init(int unit);

/*!
 * \brief Detach INT module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_detach(int unit);

/*!
 * \brief Specify INT switch control behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] control The desired configuration parameter to modify.
 * \param [in] value The value with which to set the parameter.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_control_set(
    int unit,
    bcmi_ltsw_int_control_t control,
    uint32_t value);

/*!
 * \brief Retrieve INT switch control behaviors.
 *
 * \param [in] unit Unit Number.
 * \param [in] control The desired configuration parameter to retrieve.
 * \param [out] value Pointer to where the retrieved value will be written.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_control_get(
    int unit,
    bcmi_ltsw_int_control_t control,
    uint32_t *value);

/*!
 * \brief Add a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] options Add options.
 * \param [in/out] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_add(
    int unit,
    uint32 options,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Get a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [out] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_get(
    int unit,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Delete a vector match for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] vector_match Vector match criteria.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_del(
    int unit,
    bcmi_ltsw_int_vector_match_t *vector_match);

/*!
 * \brief Delete all vector matches for INT.
 *
 * \param [in] unit Unit Number.
 * \param [in] type Vector match type.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_del_all(
    int unit,
    bcmi_ltsw_int_vector_match_type_t type);

/*!
 * \brief Traverse all vector matches for IFA.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct ifa info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_ifa_traverse(
    int unit,
    bcm_int_ifa_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_ifa_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all vector matches for IOAM.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct ioam info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_ioam_traverse(
    int unit,
    bcm_int_ioam_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_ioam_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all vector matches for INT-DP.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each vector match.
 * \param [in] cb A pointer to the callback function to call for construct int-dp info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_vector_match_dp_traverse(
    int unit,
    bcm_int_dp_vector_match_traverse_cb trav_fn,
    bcmi_ltsw_int_dp_vector_match_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Create the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in/out] profile_id Action profile ID.
 * \param [in] profile Action profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_create(
    int unit,
    uint32 flags,
    int *profile_id,
    bcmi_ltsw_int_action_profile_t *profile);

/*!
 * \brief Get the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in] profile_id Action profile ID.
 * \param [out] profile Action profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_get(
    int unit,
    uint32 flags,
    int profile_id,
    bcmi_ltsw_int_action_profile_t *profile);

/*!
 * \brief Delete the INT action profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT Action profile table management flags.
 * \param [in] type Action profile type.
 * \param [in] profile_id Action profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_del(
    int unit,
    uint32 flags,
    bcmi_ltsw_int_action_profile_type_t type,
    int profile_id);

/*!
 * \brief Traverse all action profiles for IFA.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct ifa info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_ifa_traverse(
    int unit,
    bcm_int_ifa_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_ifa_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all action profiles for IOAM.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct ioam info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_ioam_traverse(
    int unit,
    bcm_int_ioam_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_ioam_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Traverse all action profiles for INT-DP.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn A pointer to the callback function to call for each action profile.
 * \param [in] cb A pointer to the callback function to call for construct int-dp info from int.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_action_profile_dp_traverse(
    int unit,
    bcm_int_dp_action_profile_traverse_cb trav_fn,
    bcmi_ltsw_int_dp_action_profile_from_int_cb_f cb,
    void *user_data);

/*!
 * \brief Create the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in/out] profile_id Opaque data profile ID.
 * \param [in] profile Opaque data profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_opaque_data_profile_create(
    int unit,
    uint32 flags,
    int *profile_id,
    bcm_int_opaque_data_profile_t *profile);

/*!
 * \brief Get the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in] profile_id Opaque data profile ID.
 * \param [out] profile Opaque data profile.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_opaque_data_profile_get(
    int unit,
    uint32 flags,
    int profile_id,
    bcm_int_opaque_data_profile_t *profile);

/*!
 * \brief Delete the opaque data profile for INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags INT opaque data profile table management flags.
 * \param [in] profile_id Opaque data profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_opaque_data_profile_del(
    int unit,
    uint32 flags,
    int profile_id);

/*!
 * \brief Traverse all opaque data profiles INT metadata construction.
 *
 * \param [in] unit Unit Number.
 * \param [in] cb A pointer to the callback function to call for each opaque data profile.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_opaque_data_profile_traverse(
    int unit,
    bcm_int_opaque_data_profile_traverse_cb cb,
    void *user_data);

/*!
 * \brief Set various configurations for INT cosq stat.
 *
 * \param [in] unit Unit Number.
 * \param [in] config Cosq stat configurations.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_cosq_stat_config_set(
    int unit,
    bcm_int_cosq_stat_config_t *config);

/*!
 * \brief Get various configurations for INT cosq stat.
 *
 * \param [in] unit Unit Number.
 * \param [out] config Cosq stat configurations.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_cosq_stat_config_get(
    int unit,
    bcm_int_cosq_stat_config_t *config);

/*!
 * \brief Create the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in/out] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_profile_create(
    int unit,
    uint32 flags,
    int *profile_id);

/*!
 * \brief Get the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] array_size Metadata field array size.
 * \param [out] entry_array Metadata field entry array.
 * \param [out] field_count Metadata field count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_profile_get(
    int unit,
    uint32 flags,
    int profile_id,
    int array_size,
    bcm_int_metadata_field_entry_t *entry_array,
    int *field_count);

/*!
 * \brief Delete the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] flags Metadata profile table management flags.
 * \param [in] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_profile_del(
    int unit,
    uint32 flags,
    int profile_id);

/*!
 * \brief Traverse all metadata profiles.
 *
 * \param [in] unit Unit Number.
 * \param [in] cb A pointer to the callback function to call for each metadata profile.
 * \param [in] user_data Pointer to user data to supply in the callback.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_profile_traverse(
    int unit,
    bcm_int_metadata_profile_traverse_cb cb,
    void *user_data);

/*!
 * \brief Add the metadata field to the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] field_entry Metadata field entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_field_add(
    int unit,
    int profile_id,
    bcm_int_metadata_field_entry_t *field_entry);

/*!
 * \brief Delete the metadata field from the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 * \param [in] field_entry Metadata field entry.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_field_delete(
    int unit,
    int profile_id,
    bcm_int_metadata_field_entry_t *field_entry);

/*!
 * \brief Delete all the metadata field from the metadata profile.
 *
 * \param [in] unit Unit Number.
 * \param [in] profile_id Metadata profile ID.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_field_delete_all(
    int unit,
    int profile_id);

/*!
 * \brief Get the metadata field select information.
 *
 * \param [in] unit Unit Number.
 * \param [in] field Metadata field.
 * \param [out] field_select_info Metadata field select information.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_metadata_field_select_info_get(
    int unit,
    bcm_int_metadata_field_t field,
    bcm_int_metadata_field_select_info_t *field_select_info);

/*!
 * \brief Get metadata field info.
 *
 * \param [in] unit Unit Number.
 * \param [out] field_info Metadata field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_int_md_field_info_get(
    int unit,
    bcmint_int_md_field_info_t **field_info);

#endif /* INCLUDE_INT */

#endif /* BCMINT_LTSW_MBCM_INT_H */
