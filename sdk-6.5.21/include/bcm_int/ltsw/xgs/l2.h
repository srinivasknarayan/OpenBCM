/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XGS_L2_H
#define BCMINT_LTSW_XGS_L2_H

#include <bcm/l2.h>
#include <bcm/types.h>

#include <bcm_int/ltsw/l2_int.h>
#include <bcm_int/ltsw/l2.h>

#include <sal/sal_types.h>

/*!
 * \brief Initialize L2 module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_init(int unit);

/*!
 * \brief Detach L2 module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_detach(int unit);

/*!
 * \brief Add a L2 address entry into device.
 *
 * \param [in] unit Unit Number.
 * \param [in] l2addr L2 address structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_add(
    int unit,
    bcm_l2_addr_t *l2addr);

/*!
 * \brief Get l2 data structure info for given mac and vid from device.
 *
 * \param [in] unit Unit Number.
 * \param [in] mac Mac address.
 * \param [in] vid Vlan id.
 * \param [out] l2addr L2 address structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_get(
    int unit,
    bcm_mac_t mac,
    bcm_vlan_t vid,
    bcm_l2_addr_t *l2addr);

/*!
 * \brief Delete l2 address entry from device.
 *
 * \param [in] unit Unit Number.
 * \param [in] mac Mac address.
 * \param [in] vid Vlan id.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_delete(
    int unit,
    bcm_mac_t mac,
    bcm_vlan_t vid);

/*!
 * \brief Replace a l2 address entry with given info.
 *
 * \param [in] unit Unit Number.
 * \param [in] rep_st Replace info structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_replace(
    int unit,
    bcmint_l2_replace_t *rep_st);

/*!
 * \brief Traverse L2 address table and call users callback for matched entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] trav_fn User specified callback function.
 * \param [in] user_data User specified data.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_traverse(
    int unit,
    bcm_l2_traverse_cb trav_fn,
    void *user_data);

/*!
 * \brief Purge L2 entries belong to set of (vlan, gport) tuple.
 *
 * \param [in] unit Unit Number.
 * \param [in] tuple_ctrl Tuple control structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_addr_del_by_tuple(
    int unit,
    bcmint_l2_tuple_ctrl_t *tuple_ctrl);

/*!
 * \brief Get size of L2 Station table.
 *
 * \param [in] unit Unit Number.
 * \param [out] tbl_sz L2 Station table size.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_station_size_get(
    int unit,
    uint32_t *tbl_sz);

/*!
 * \brief Get size of L2 overlay Station table.
 *
 * \param [in] unit Unit Number.
 * \param [out] tbl_sz L2 overlay Station table size.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_overlay_station_size_get(
    int unit,
    uint32_t *tbl_sz);

/*!
 * \brief Age L2 entries.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_age(int unit);

/*!
 * \brief Add a L2 station entry to device.
 *
 * \param [in] unit Unit Number.
 * \param [in] station L2 station entry.
 * \param [in] flags Internal L2 station flags.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_station_add(
    int unit,
    bcm_l2_station_t *station,
    int flags);

/*!
 * \brief Get L2 station entry from device with given key.
 *
 * \param [in] unit Unit Number.
 * \param [in|out] station L2 station entry.
 * \param [in] flags Internal L2 station flags.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_station_get(
    int unit,
    bcm_l2_station_t *station,
    int flags);

/*!
 * \brief Delete a L2 station entry from device.
 *
 * \param [in] unit Unit Number.
 * \param [in] station L2 station entry.
 * \param [in] flags Internal L2 station flags.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_station_delete(
    int unit,
    bcm_l2_station_t *station,
    int flags);

/*!
 * \brief Enable/Disable global L2 learning.
 *
 * \param [in] unit Unit Number.
 * \param [in] enable 1 indicates enable, 0 indicates disable.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_learn_set(
    int unit,
    int enable);

/*!
 * \brief Get global L2 learning setting.
 *
 * \param [in] unit Unit Number.
 * \param [out] enable Current global L2 learning setting.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_learn_get(
    int unit,
    int *enable);

/*!
 * \brief Get L2 table size.
 *
 * \param [in] unit Unit Number.
 * \param [out] size L2 table size.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_size_get(
    int unit,
    int *size);

/*!
 * \brief Get L2 entry count.
 *
 * \param [in] unit Unit Number.
 * \param [out] count L2 entry count.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_count_get(
    int unit,
    int *count);

/*!
 * \brief Init L2 cache.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_init(int unit);

/*!
 * \brief Add data to a L2 cache entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] index Physical table index.
 * \param [in] l2caddr Entry data configured by applications.
 * \param [out] index_used Index of entry is written acctually.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_set(
    int unit,
    int index,
    bcm_l2_cache_addr_t *l2caddr,
    int *index_used);

/*!
 * \brief Get data from a L2 cache entry.
 *
 * \param [in] unit Unit Number.
 * \param [in] index Physical table index.
 * \param [out] l2caddr Entry data which format is defined by applications.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_get(
    int unit,
    int index,
    bcm_l2_cache_addr_t *l2caddr);

/*!
 * \brief Get depth of L2 cache.
 *
 * \param [in] unit Unit Number.
 * \param [out] size Depth of L2 cache.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_size_get(
    int unit,
    int *size);

/*!
 * \brief Delete an entry of L2 cache.
 *
 * \param [in] unit Unit Number.
 * \param [in] index Physical table index.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_delete(
    int unit,
    int index);

/*!
 * \brief Delete all entries of L2 cache.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_cache_delete_all(int unit);

/*!
 * \brief Update logical table L2_OPAQUE_TAG.
 *
 * \param [in] unit Unit Number.
 * \param [in] opaque_tag_id Index into the L2 opaque tag table.
 * \param [in] tag_size Size of the opaque tag.
 * \param [in] ether_type Ethertype used to identify the opaque tag.
 * \param [in] tag_type Type of the opaque tag.
 * \param [in] valid Make config active or not.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_opaque_tag_set(
    int unit,
    int opaque_tag_id,
    int tag_size,
    int ether_type,
    int tag_type,
    int valid);

/*!
 * \brief Get value of fields of logical table L2_OPAQUE_TAG.
 *
 * \param [in] unit Unit Number.
 * \param [in] opaque_tag_id Index into the L2 opaque tag table.
 * \param [out] tag_size Size of the opaque tag.
 * \param [out] ether_type Ethertype used to identify the opaque tag.
 * \param [out] tag_type Type of the opaque tag.
 * \param [out] valid Make config active or not.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_opaque_tag_get(
    int unit,
    int opaque_tag_id,
    int *tag_size,
    int *ether_type,
    int *tag_type,
    int *valid);

/*!
 * \brief Update logical table L2_PAYLOAD_OPAQUE_TAG.
 *
 * \param [in] unit Unit Number.
 * \param [in] opaque_tag_id Index into the L2 opaque tag table.
 * \param [in] tag_size Size of the opaque tag.
 * \param [in] ether_type Ethertype used to identify the opaque tag.
 * \param [in] tag_type Type of the opaque tag.
 * \param [in] valid Make config active or not.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_payload_opaque_tag_set(
    int unit,
    int opaque_tag_id,
    int tag_size,
    int ether_type,
    int tag_type,
    int valid);

/*!
 * \brief Get value of fields of logical table L2_PAYLOAD_OPAQUE_TAG.
 *
 * \param [in] unit Unit Number.
 * \param [in] opaque_tag_id Index into the L2 opaque tag table.
 * \param [out] tag_size Size of the opaque tag.
 * \param [out] ether_type Ethertype used to identify the opaque tag.
 * \param [out] tag_type Type of the opaque tag.
 * \param [out] valid Make config active or not.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_payload_opaque_tag_get(
    int unit,
    int opaque_tag_id,
    int *tag_size,
    int *ether_type,
    int *tag_type,
    int *valid);

/*!
 * \brief Restore L2 MAC learn and move.
 *
 * \param [in] unit Unit Number.
 * \param [out] l2_freeze_mode L2 freeze mode.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_frozen_cml_restore(
    int unit,
    int *l2_freeze_mode);

/*!
 * \brief Freeze L2 MAC learn and move.
 *
 * \param [in] unit Unit Number.
 * \param [out] l2_freeze_mode L2 freeze mode.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_frozen_cml_save(
    int unit,
    int *l2_freeze_mode);

/*!
 * \brief Recover L2 learn override during Warmboot.
 *
 * \param [in] unit Unit Number.
 * \param [out] l2_freeze_override L2 frozen by L2_LEARN_OVERRIDE.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_frozen_cml_recover(
    int unit,
    int *l2_freeze_override);

/*!
 * \brief Update L2 table virtual info for a gport.
 *
 * \param [in] unit Unit Number.
 * \param [in] info Virtual info.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_l2_virtual_info_update(
    int unit,
    bcmi_ltsw_l2_virtual_info_t *info);

#endif /* BCMINT_LTSW_XGS_L2_H */
