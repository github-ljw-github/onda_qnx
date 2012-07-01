/*
 * $QNXLicenseC:
 * Copyright 2010, QNX Software Systems. 
 * 
 * Licensed under the Apache License, Version 2.0 (the "License"). You 
 * may not reproduce, modify or distribute this software except in 
 * compliance with the License. You may obtain a copy of the License 
 * at: http://www.apache.org/licenses/LICENSE-2.0 
 * 
 * Unless required by applicable law or agreed to in writing, software 
 * distributed under the License is distributed on an "AS IS" basis, 
 * WITHOUT WARRANTIES OF ANY KIND, either express or implied.
 *
 * This file may contain contributions from others, either as 
 * contributors under the License or as licensors under other terms.  
 * Please review this entire file for other proprietary rights or license 
 * notices, as well as the QNX Development Suite License Guide at 
 * http://licensing.qnx.com/license-guide/ for other information.
 * $
 */

// Module Description:  board specific header file

#ifndef _BS_H_INCLUDED
#define _BS_H_INCLUDED



// add new chipset externs here
#define MMCSD_VENDOR_TI_OMAP3

typedef struct _beagle_mmc {
    uintptr_t   gpio_base;  //card detect and write protect gpio base
    int         gpio_ppin;  //write protect gpio pin
    int         fd;         //file descriptor for i2c accesses
} beagle_ext_t;


int bs_init(SIM_HBA *hba);
int bs_dinit(SIM_HBA *hba);

__SRCVERSION( "$URL: http://svn/product/tags/public/bsp/nto641/ti-omap3530-beagle/latest/src/hardware/devb/mmcsd/arm/beagle.le/sim_bs.h $ $Rev: 308279 $" )

#endif