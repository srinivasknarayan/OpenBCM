/**************************************************************************
 *
 * DO NOT EDIT THIS FILE!
 * This file is auto-generated by HA parser from YAML formated file.
 * Edits to this file will be lost when it is regenerated.
 * Tool: bcmha/scripts/ha_yml_parser.py
 *
 * This license is set out in https://raw.githubusercontent.com/Broadcom-Network-Switching-Software/OpenBCM/master/Legal/LICENSE file.
 * 
 * Copyright 2007-2020 Broadcom Inc. All rights reserved.
 */
#ifndef TRUNK_HA_H
#define TRUNK_HA_H

#include <shr/shr_ha.h>

typedef struct {
   /*! Trunk group ID. */
   int tid;
   /*! Trunk is in use. */
   int in_use;
   /*! Number of ports. */
   int member_count;
   /*! BCM_TRUNK_FLAG_xxx. */
   uint32_t flags;
   /*! Port selection criteria. */
   int psc;
   /*! Trunk L2 destination. */
   int l2_dest;
   /*! Port selection criteria for software IPMC trunk resolution. */
   int ipmc_psc;
   /*! DLF/broadcast port for trunk group. */
   int dlf_index;
   /*! Number of flows for dynamic load balancing. */
   int dynamic_size;
   /*! Inactivity duration, in microseconds. */
   int dynamic_age;
   /*! Trunk DLB Id. */
   int dlb_id;
} bcmint_trunk_info_t;

#define BCMINT_TRUNK_INFO_T_ID 0x74fdc6a702f06e06

typedef struct {
   /*! BCM_TRUNK_MEMBER_xxx. */
   uint32_t flags;
   /*! BCM_TRUNK_FLAG_FAILOVER_xxx. */
   uint32_t fail_flags;
   /*! Trunk member GPORT ID. */
   int gport;
   /*! Dynamic load balancing threshold scaling factor. */
   int dynamic_scaling_factor;
   /*! Relative weight of historical load in determining member quality. */
   int dynamic_load_weight;
   /*! Relative weight of queue size in determining member quality. */
   int dynamic_queue_size_weight;
   /*! Trunk member failover PSC. */
   int failover_psc;
} bcmint_trunk_member_t;

#define BCMINT_TRUNK_MEMBER_T_ID 0x9bbc8c00a6fc0a6a

#endif /* TRUNK_HA_H */