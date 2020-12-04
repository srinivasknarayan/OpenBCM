/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_MBCM_PKTIO_H
#define BCMINT_LTSW_MBCM_PKTIO_H

#include <bcm/pktio.h>

#include <bcm_int/ltsw/pktio_int.h>

#include <sal/sal_types.h>

/*!
 * \brief Get pktio field support bitmap.
 *
 * \param [in] unit Unit Number.
 * \param [in] hdr_info Pktio header info.
 * \param [out] support Field ID supported status bitmap.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*pktio_fid_support_get_f)(
    int unit,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcm_pktio_bitmap_t *support);

/*!
 * \brief Get pktio field info.
 *
 * \param [in] unit Unit Number.
 * \param [in] hdr_info Pktio header info.
 * \param [out] fid_info Pktio field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*pktio_fid_info_get_f)(
    int unit,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcmint_pktio_fid_info_t **fid_info);

/*!
 * \brief Lookup pktio field info.
 *
 * \param [in] unit Unit Number.
 * \param [in] opcode Pktio field info lookup opcode.
 * \param [in] hdr_info Pktio header info.
 * \param [out] fid_info Pktio field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*pktio_fid_info_lookup_f)(
    int unit,
    int opcode,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcmint_pktio_fid_info_t **fid_info);

/*!
 * \brief Get HG2 field.
 *
 * \param [in] unit Unit Number.
 * \param [in] hghdr HG2 header.
 * \param [in] fid Field ID.
 * \param [out] val Field value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*pktio_hg2_field_get_f)(
    int unit,
    uint32_t *hghdr,
    int fid,
    uint32_t *val);

/*!
 * \brief Set HG2 field.
 *
 * \param [in] unit Unit Number.
 * \param [in] hghdr HG2 header.
 * \param [in] fid Field ID.
 * \param [in] val Field value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
typedef int (*pktio_hg2_field_set_f)(
    int unit,
    uint32_t *hghdr,
    int fid,
    uint32_t val);

/*!
 * \brief Pktio driver structure.
 */
typedef struct mbcm_ltsw_pktio_drv_s {

    /*! Get pktio field support bitmap. */
    pktio_fid_support_get_f pktio_fid_support_get;

    /*! Get pktio field info. */
    pktio_fid_info_get_f pktio_fid_info_get;

    /*! Lookup pktio field info. */
    pktio_fid_info_lookup_f pktio_fid_info_lookup;

    /*! Get HG2 field. */
    pktio_hg2_field_get_f pktio_hg2_field_get;

    /*! Set HG2 field. */
    pktio_hg2_field_set_f pktio_hg2_field_set;

} mbcm_ltsw_pktio_drv_t;

/*!
 * \brief Set the PKTIO driver of the device.
 *
 * \param [in] unit Unit Number.
 * \param [in] drv Pktio driver to set.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_drv_set(
    int unit,
    mbcm_ltsw_pktio_drv_t *drv);

/*!
 * \brief Get pktio field support bitmap.
 *
 * \param [in] unit Unit Number.
 * \param [in] hdr_info Pktio header info.
 * \param [out] support Field ID supported status bitmap.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_fid_support_get(
    int unit,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcm_pktio_bitmap_t *support);

/*!
 * \brief Get pktio field info.
 *
 * \param [in] unit Unit Number.
 * \param [in] hdr_info Pktio header info.
 * \param [out] fid_info Pktio field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_fid_info_get(
    int unit,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcmint_pktio_fid_info_t **fid_info);

/*!
 * \brief Lookup pktio field info.
 *
 * \param [in] unit Unit Number.
 * \param [in] opcode Pktio field info lookup opcode.
 * \param [in] hdr_info Pktio header info.
 * \param [out] fid_info Pktio field info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_fid_info_lookup(
    int unit,
    int opcode,
    bcmint_pktio_hdr_info_t *hdr_info,
    bcmint_pktio_fid_info_t **fid_info);

/*!
 * \brief Get HG2 field.
 *
 * \param [in] unit Unit Number.
 * \param [in] hghdr HG2 header.
 * \param [in] fid Field ID.
 * \param [out] val Field value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_hg2_field_get(
    int unit,
    uint32_t *hghdr,
    int fid,
    uint32_t *val);

/*!
 * \brief Set HG2 field.
 *
 * \param [in] unit Unit Number.
 * \param [in] hghdr HG2 header.
 * \param [in] fid Field ID.
 * \param [in] val Field value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
mbcm_ltsw_pktio_hg2_field_set(
    int unit,
    uint32_t *hghdr,
    int fid,
    uint32_t val);

#endif /* BCMINT_LTSW_MBCM_PKTIO_H */
