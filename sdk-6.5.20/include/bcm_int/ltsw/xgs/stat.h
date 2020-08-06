/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#ifndef BCMINT_LTSW_XGS_STAT_H
#define BCMINT_LTSW_XGS_STAT_H

#include <bcm/types.h>
#include <bcm/stat.h>

#include <bcm_int/ltsw/stat_int.h>
#include <bcm_int/ltsw/stat.h>

#include <sal/sal_types.h>

/*!
 * \brief Initializes the stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_init(int unit);

/*!
 * \brief De-initializes the stat module.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_detach(int unit);

/*!
 * \brief Initializes the stat index for counter mapping table.
 *
 * \param [in] unit Unit Number.
 * \param [in] dev_info Stat device information structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_index_init(
    int unit,
    const bcmint_stat_dev_info_t *dev_info);

/*!
 * \brief De-initializes the stat LT entries.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_lt_detach(int unit);

/*!
 * \brief Initializes the statistic on port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_port_attach(
    int unit,
    bcm_port_t port);

/*!
 * \brief De-initializes the statistic on port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_port_detach(
    int unit,
    bcm_port_t port);

/*!
 * \brief Clear the port based statistics.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_clear(
    int unit,
    bcm_port_t port);

/*!
 * \brief Clear the specific statistics.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] stat_id SNMP statistics type.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_clear_single(
    int unit,
    bcm_port_t port,
    bcm_stat_val_t stat_id);

/*!
 * \brief Get the specified statistic from the port.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] sync_mode Sync mode.
 * \param [in] stat_id SNMP statistics type.
 * \param [out] val 64-bit counter value.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_get(
    int unit,
    bcm_port_t port,
    bool sync_mode,
    bcm_stat_val_t stat_id,
    uint64_t *val);

/*!
 * \brief Initializes the counter control information.
 *
 * \param [in] unit Unit Number.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_counter_control_init(int unit);

/*!
 * \brief Get the counter control information structure.
 *
 * \param [in] unit Unit Number.
 * \param [out] info Counter control information structure.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_counter_control_get(
    int unit,
    bcmi_ltsw_stat_counter_control_t *info);

/*!
 * \brief Add a certain packet type to debug counter to count.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] stat_id SNMP statistics type.
 * \param [in] trigger The counter select value (see include/bcm/stat.h for bit definitions).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_custom_add(
    int unit,
    bcm_port_t port,
    bcm_stat_val_t stat_id,
    bcm_custom_stat_trigger_t trigger);

/*!
 * \brief Check if certain packet types is part of debug counter.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] stat_id SNMP statistics type.
 * \param [in] trigger The counter select value (see include/bcm/stat.h for bit definitions).
 * \param [out] result Result of a query. 0 if positive, -1 if negative.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_custom_check(
    int unit,
    bcm_port_t port,
    bcm_stat_val_t stat_id,
    bcm_custom_stat_trigger_t trigger,
    int *result);

/*!
 * \brief Delete a certain packet type from debug counter.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] stat_id SNMP statistics type.
 * \param [in] trigger The counter select value (see include/bcm/stat.h for bit definitions).
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_custom_delete(
    int unit,
    bcm_port_t port,
    bcm_stat_val_t stat_id,
    bcm_custom_stat_trigger_t trigger);

/*!
 * \brief Delete all packet types from debug counter.
 *
 * \param [in] unit Unit Number.
 * \param [in] port Port Number.
 * \param [in] stat_id SNMP statistics type.
 *
 * \retval SHR_E_NONE No errors.
 * \retval !SHR_E_NONE Failure.
 */
extern int
xgs_ltsw_stat_custom_delete_all(
    int unit,
    bcm_port_t port,
    bcm_stat_val_t stat_id);

#endif /* BCMINT_LTSW_XGS_STAT_H */