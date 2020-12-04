/*
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated.
 * Edits to this file will be lost when it is regenerated.
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */

#include <bcm_int/control.h>

#include <bcm_int/ltsw/mbcm/bst.h>

#include <bcm_int/ltsw/tm/bst.h>
#include <bcm_int/ltsw/cosq.h>
#include <bcm_int/ltsw/cosq_thd.h>
#include <bcm_int/ltsw/port.h>
#include <bcm_int/ltsw/dev.h>
#include <bcm_int/ltsw/switch.h>
#include <shr/shr_debug.h>
#include <sal/sal_libc.h>

/******************************************************************************
 * Local definitions
 */

#define BSL_LOG_MODULE BSL_LS_BCM_COSQ

/******************************************************************************
 * Private functions
 */


/*
 * \brief Check port type.
 *
 * \param [in]  unit          Unit number.
 * \param [in]  port          PORT ID.
 *
 * \retval TRUE               Port is cpu port.
 * \retval FALSE              Port is non cpu port.
 */
static int
is_cpu_port(int unit, bcm_port_t lport)
{
    return bcmi_ltsw_port_is_type(unit, lport,  BCMI_LTSW_PORT_TYPE_CPU);
}

/*
 * \brief BST index resolve function.
 *
 * \param [in]   unit         Unit number.
 * \param [in]   gport        GPORT ID.
 * \param [in]   cosq         COS queue.
 * \param [in]   bid          BST stat ID to identify the COSQ resource/object.
 * \param [out]  local_port   local_port.
 * \param [out]  start_index  start index.
 * \param [out]  end_index    end index.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
static int
cosq_bst_index_resolve(int unit, bcm_gport_t gport, bcm_cos_queue_t cosq,
                       bcm_bst_stat_id_t bid, bcm_port_t *local_port,
                       int *start_index, int *end_index)
{
    bcmi_ltsw_cosq_port_map_info_t port_info = {0};
    int cos = 0;
    bcmi_ltsw_cosq_device_info_t device_info = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_device_info_get(unit, &device_info));

    if ((bid != bcmBstStatIdDevice) &&
        (bid != bcmBstStatIdRQEQueue) &&
        (bid != bcmBstStatIdRQEPool)) {
        SHR_IF_ERR_VERBOSE_EXIT
            (bcmi_ltsw_cosq_localport_resolve(unit, gport, local_port));
        if (is_cpu_port(unit, *local_port)) {
            port_info.num_uc_q = 0;
            port_info.num_mc_q = device_info.num_cpu_queue;
        } else {
            port_info.num_uc_q = device_info.num_ucq;
            port_info.num_mc_q = device_info.num_mcq;
        }
    }

    switch (bid) {
        case bcmBstStatIdDevice:
            *start_index = *end_index = 0;
             break;
        case bcmBstStatIdHeadroomPool:
            if(cosq == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_service_pool - 1;
            } else {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_thd_ing_pg_pool_get(
                                         unit, *local_port, cosq,
                                         bcmCosqControlIngressHeadroomPool,
                                         start_index));
                *end_index = *start_index;
            }
            break;
        case bcmBstStatIdIngPool:
        case bcmBstStatIdPortPool:
            if(cosq == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_service_pool - 1;
            } else {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_thd_ing_pg_pool_get(unit, *local_port, cosq,
                                                        bcmCosqControlIngressPool,
                                                        start_index));
                *end_index = *start_index;
            }
            break;
        case bcmBstStatIdPriGroupShared:
        case bcmBstStatIdPriGroupHeadroom:
            if (cosq == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_pg - 1;
            } else {
                *start_index = *end_index = cosq;
            }
            break;
        case bcmBstStatIdEgrPool:
        case bcmBstStatIdEgrPortPoolSharedUcast:
            if (is_cpu_port(unit, *local_port)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            if (BCM_GPORT_IS_UCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_gport_port_resolve(unit, gport,
                                                       local_port,
                                                       &cos));
            } else {
                if (cosq == BCM_COS_INVALID) {
                    cos = BCM_COS_INVALID;
                } else {
                    if (cosq >= port_info.num_uc_q) {
                        SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
                    }
                    cos = cosq;
                }
            }

            if(cos == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_service_pool - 1;
            } else {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_thd_egress_pool_get(unit, *local_port, cos,
                                               bcmCosqControlUCEgressPool,
                                               start_index));
                *end_index = *start_index;
            }

            break;
        case bcmBstStatIdEgrMCastPool:
        case bcmBstStatIdEgrPortPoolSharedMcast:
            if (BCM_GPORT_IS_MCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_gport_port_resolve(unit, gport,
                                                       local_port,
                                                       &cos));
                cos = cos + port_info.num_uc_q;
            } else {
                if (cosq == BCM_COS_INVALID) {
                    cos = BCM_COS_INVALID;
                } else {
                    if (is_cpu_port(unit, *local_port)) {
                        cos = cosq;
                    } else {
                        if (cosq < port_info.num_uc_q) {
                            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
                        }
                        cos = cosq;
                    }
                }
            }

            if (cos == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_service_pool - 1;
            } else {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_thd_egress_pool_get(unit, *local_port, cos,
                                                        bcmCosqControlMCEgressPool,
                                                        start_index));
                *end_index = *start_index;
            }

            break;
        case bcmBstStatIdUcast:
            if (is_cpu_port(unit, *local_port)) {
                SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
            }
            if (BCM_GPORT_IS_UCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_gport_port_resolve(unit, gport,
                                                       local_port,
                                                       start_index));
                *end_index = *start_index;
            } else {
                if (cosq == BCM_COS_INVALID) {
                    *start_index = 0;
                    *end_index = port_info.num_uc_q - 1;
                } else {
                    if (cosq >= port_info.num_uc_q) {
                        SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
                    }
                    *end_index = *start_index = cosq;
                }
            }
            break;
        case bcmBstStatIdMcast:
            if (BCM_GPORT_IS_MCAST_QUEUE_GROUP(gport)) {
                SHR_IF_ERR_VERBOSE_EXIT
                    (bcmi_ltsw_cosq_gport_port_resolve(unit, gport,
                                                       local_port,
                                                       start_index));
                *end_index = *start_index;
            } else {
                if (cosq == BCM_COS_INVALID) {
                    *start_index = 0;
                    *end_index = port_info.num_mc_q - 1;
                } else {
                    if (is_cpu_port(unit, *local_port)) {
                        *end_index = *start_index = cosq;
                    } else {
                        if (cosq < port_info.num_uc_q) {
                            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
                        }
                        *end_index = *start_index = cosq - port_info.num_uc_q;
                    }
                }
            }
            break;
        case bcmBstStatIdRQEQueue:
            if(cosq == BCM_COS_INVALID) {
                *start_index = 0;
                *end_index = device_info.num_rqe_queue - 1;
            } else {
                *end_index = *start_index = cosq;
            }
            break;
        case bcmBstStatIdRQEPool:
            *start_index = *end_index = 0;
            break;
        default:
            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

/*
 * \brief Retrieve gport/cosq from BST SW index for a resource.
 *        Used for decoding BST trigger information for notifying users.
 *
 * \param [in]   unit         Unit number.
 * \param [in]   bid          BST stat id.
 * \param [in]   port         Unused (retained to maintain consistency).
 * \param [in]   index        SW index for which stat > 0.
 * \param [in]   itm          buffer id.
 * \param [in]   idx          index of sw.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
static int
cosq_bst_resolve_index(int unit, bcm_bst_stat_id_t bid, int port,
                       int index, int *idx)
{
    bcmi_ltsw_cosq_device_info_t device_info = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_device_info_get(unit, &device_info));

    switch (bid) {
        case bcmBstStatIdDevice:
        case bcmBstStatIdRQEPool:
            *idx = 0;
            break;
        case bcmBstStatIdIngPool:
        case bcmBstStatIdHeadroomPool:
        case bcmBstStatIdEgrPool:
        case bcmBstStatIdEgrMCastPool:
            *idx = index;
            break;
        case bcmBstStatIdRQEQueue:
            *idx = index;
            break;
        case bcmBstStatIdPortPool:
            *idx = port * device_info.num_service_pool + index;
            break;
        case bcmBstStatIdPriGroupHeadroom:
        case bcmBstStatIdPriGroupShared:
            *idx = port * device_info.num_pg + index;
            break;
        case bcmBstStatIdUcast:
            *idx = port * device_info.num_queue + index;
            break;
        case bcmBstStatIdMcast:
            if (is_cpu_port(unit, port)) {
                *idx = index;
            } else {
                *idx = device_info.num_cpu_queue +
                    (port - 1) * device_info.num_queue + index;
            }
            break;
        case bcmBstStatIdEgrPortPoolSharedUcast:
        case bcmBstStatIdEgrPortPoolSharedMcast:
            *idx = port * device_info.num_service_pool + index;
            break;
        default:
            break;
            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

/*
 * \brief Retrieve max index for a resource.
 *
 * \param [in]   unit         Unit number.
 * \param [in]   bid          BST stat id.
 * \param [in]   max_idx      index of sw.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
static int
cosq_bst_resolve_max_index(int unit, bcm_bst_stat_id_t bid, int *max_idx)
{
    int num_ucq, num_mcq;
    bcmi_ltsw_cosq_device_info_t device_info = {0};

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_device_info_get(unit, &device_info));

    SHR_IF_ERR_VERBOSE_EXIT
        (bcmi_ltsw_cosq_num_queue_get(unit, &num_ucq, &num_mcq));

    switch (bid) {
        case bcmBstStatIdDevice:
        case bcmBstStatIdRQEPool:
            *max_idx = 1;
            break;
        case bcmBstStatIdIngPool:
        case bcmBstStatIdHeadroomPool:
        case bcmBstStatIdEgrPool:
        case bcmBstStatIdEgrMCastPool:
        case bcmBstStatIdEgrPortPoolSharedUcast:
        case bcmBstStatIdEgrPortPoolSharedMcast:
        case bcmBstStatIdPortPool:
            *max_idx = device_info.num_service_pool;
            break;
        case bcmBstStatIdRQEQueue:
            *max_idx = device_info.num_rqe_queue;
            break;
        case bcmBstStatIdPriGroupHeadroom:
        case bcmBstStatIdPriGroupShared:
            *max_idx = device_info.num_pg;
            break;
        case bcmBstStatIdUcast:
            *max_idx = num_ucq;
            break;
        case bcmBstStatIdMcast:
            *max_idx = num_mcq;
            break;
        default:
            break;
            SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}

/*
 * \brief Validate input bid for input BST.
 *
 * \param [in]   unit         Unit number.
 * \param [in]   bid          BST stat ID to identify the COSQ resource/object.
 *
 * \retval SHR_E_NONE         No errors.
 * \retval !SHR_E_NONE        Failure.
 */
static int
cosq_bst_bid_check(int unit, bcm_bst_stat_id_t bid)
{
    SHR_FUNC_ENTER(unit);

    /* Parameter check */
    if (bid < bcmBstStatIdDevice ||
        bid >= bcmBstStatIdMaxCount ||
        bid == bcmBstStatIdQueueTotal ||
        bid == bcmBstStatIdUCQueueGroup) {
        SHR_IF_ERR_VERBOSE_EXIT(SHR_E_PARAM);
    }

exit:
    SHR_FUNC_EXIT();
}



static int
bcm56990_a0_ltsw_cosq_bst_profile_get(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_bst_stat_id_t bid,
    bcm_cosq_bst_profile_t *profile)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (cosq_bst_bid_check(unit, bid));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_profile_get(unit, gport, cosq, bid, profile));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_profile_set(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_bst_stat_id_t bid,
    bcm_cosq_bst_profile_t *profile)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (cosq_bst_bid_check(unit, bid));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_profile_set(unit, gport, cosq, bid, profile));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_stat_get(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_buffer_id_t buffer,
    bcm_bst_stat_id_t bid,
    uint32_t options,
    uint64_t *pvalue)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (cosq_bst_bid_check(unit, bid));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_stat_get(unit, gport, cosq, buffer, bid, options, pvalue));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_stat_clear(
    int unit,
    bcm_gport_t gport,
    bcm_cos_queue_t cosq,
    bcm_cosq_buffer_id_t buffer,
    bcm_bst_stat_id_t bid)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (cosq_bst_bid_check(unit, bid));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_stat_clear(unit, gport, cosq, buffer, bid));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_stat_sync(
    int unit,
    bcm_bst_stat_id_t bid)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (cosq_bst_bid_check(unit, bid));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_stat_sync(unit, bid));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_init(int unit)
{
    static tm_ltsw_bst_chip_driver_t bcm56990_a0_bst_drv_cb = {
        .cosq_bst_index_resolve = cosq_bst_index_resolve,
        .cosq_bst_resolve_index = cosq_bst_resolve_index,
        .cosq_bst_resolve_max_index = cosq_bst_resolve_max_index,
        .enable_cor_to_clear_stat = 1,
    };

    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_bst_chip_driver_register(unit, &bcm56990_a0_bst_drv_cb));

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_init(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_detach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_detach(unit));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_enable_set(
    int unit,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_enable_set(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_enable_get(
    int unit,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_enable_get(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_tracking_mode_set(
    int unit,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_tracking_mode_set(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_tracking_mode_get(
    int unit,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_tracking_mode_get(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_snapshot_enable_set(
    int unit,
    int arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_snapshot_enable_set(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

static int
bcm56990_a0_ltsw_cosq_bst_snapshot_enable_get(
    int unit,
    int *arg)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (tm_ltsw_cosq_bst_snapshot_enable_get(unit, arg));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Cosq_bst driver function variable for bcm56990_a0 device.
 */
static mbcm_ltsw_cosq_bst_drv_t bcm56990_a0_ltsw_cosq_bst_drv = {
    .cosq_bst_profile_get = bcm56990_a0_ltsw_cosq_bst_profile_get,
    .cosq_bst_profile_set = bcm56990_a0_ltsw_cosq_bst_profile_set,
    .cosq_bst_stat_get = bcm56990_a0_ltsw_cosq_bst_stat_get,
    .cosq_bst_stat_clear = bcm56990_a0_ltsw_cosq_bst_stat_clear,
    .cosq_bst_stat_sync = bcm56990_a0_ltsw_cosq_bst_stat_sync,
    .cosq_bst_init = bcm56990_a0_ltsw_cosq_bst_init,
    .cosq_bst_detach = bcm56990_a0_ltsw_cosq_bst_detach,
    .cosq_bst_enable_set = bcm56990_a0_ltsw_cosq_bst_enable_set,
    .cosq_bst_enable_get = bcm56990_a0_ltsw_cosq_bst_enable_get,
    .cosq_bst_tracking_mode_set = bcm56990_a0_ltsw_cosq_bst_tracking_mode_set,
    .cosq_bst_tracking_mode_get = bcm56990_a0_ltsw_cosq_bst_tracking_mode_get,
    .cosq_bst_snapshot_enable_set = bcm56990_a0_ltsw_cosq_bst_snapshot_enable_set,
    .cosq_bst_snapshot_enable_get = bcm56990_a0_ltsw_cosq_bst_snapshot_enable_get
};

/******************************************************************************
 * Public functions
 */

int
bcm56990_a0_ltsw_cosq_bst_drv_attach(int unit)
{
    SHR_FUNC_ENTER(unit);

    SHR_IF_ERR_VERBOSE_EXIT
        (mbcm_ltsw_cosq_bst_drv_set(unit, &bcm56990_a0_ltsw_cosq_bst_drv));

exit:
    SHR_FUNC_EXIT();
}

/*!
 * \brief Attach functions for other members.
 */
#define BCM56990_A0_DRV_ATTACH_ENTRY(_dn,_vn,_pf,_pd,_r0) \
int _vn##_ltsw_cosq_bst_drv_attach(int unit) \
{ \
    SHR_FUNC_ENTER(unit); \
    SHR_IF_ERR_VERBOSE_EXIT \
        (mbcm_ltsw_cosq_bst_drv_set(unit, &bcm56990_a0_ltsw_cosq_bst_drv)); \
exit: \
    SHR_FUNC_EXIT(); \
}
#include "sub_devlist.h"
