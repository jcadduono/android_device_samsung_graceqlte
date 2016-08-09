/*
   Copyright (c) 2013, The Linux Foundation. All rights reserved.

   Redistribution and use in source and binary forms, with or without
   modification, are permitted provided that the following conditions are
   met:
    * Redistributions of source code must retain the above copyright
      notice, this list of conditions and the following disclaimer.
    * Redistributions in binary form must reproduce the above
      copyright notice, this list of conditions and the following
      disclaimer in the documentation and/or other materials provided
      with the distribution.
    * Neither the name of The Linux Foundation nor the names of its
      contributors may be used to endorse or promote products derived
      from this software without specific prior written permission.

   THIS SOFTWARE IS PROVIDED "AS IS" AND ANY EXPRESS OR IMPLIED
   WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
   MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT
   ARE DISCLAIMED.  IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS
   BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
   CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
   SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR
   BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
   WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
   OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN
   IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

#include <stdlib.h>

#include "vendor_init.h"
#include "property_service.h"
#include "util.h"

void vendor_load_properties()
{
	char bootloader[PROP_VALUE_MAX];

	property_get("ro.bootloader", bootloader);

	if (strstr(bootloader, "N930AZ")) {
		/* Cricket */
		property_set("ro.product.model", "SM-N930AZ");
		property_set("ro.product.name", "graceqltecri");
	} else if (strstr(bootloader, "N930A")) {
		/* AT&T */
		property_set("ro.product.model", "SM-N930A");
		property_set("ro.product.name", "graceqlteatt");
	} else if (strstr(bootloader, "N930T1")) {
		/* MetroPCS */
		property_set("ro.product.model", "SM-N930T1");
		property_set("ro.product.name", "graceqltemtr");
	} else if (strstr(bootloader, "N930T")) {
		/* T-Mobile */
		property_set("ro.product.model", "SM-N930T");
		property_set("ro.product.name", "graceqltetmo");
	} else if (strstr(bootloader, "N930P")) {
		/* Sprint */
		property_set("ro.product.model", "SM-N930P");
		property_set("ro.product.name", "graceqltespr");
	} else if (strstr(bootloader, "N930R4")) {
		/* US Cellular */
		property_set("ro.product.model", "SM-N930R4");
		property_set("ro.product.name", "graceqlteusc");
	} else if (strstr(bootloader, "N930R6")) {
		/* Verizon Rural LTE */
		property_set("ro.product.model", "SM-N930R6");
		property_set("ro.product.name", "graceqltelru");
	} else if (strstr(bootloader, "N930R7")) {
		/* C-Spire Wireless */
		property_set("ro.product.model", "SM-N930R7");
		property_set("ro.product.name", "graceqltespi");
	} else if (strstr(bootloader, "N930V")) {
		/* Verizon */
		property_set("ro.product.model", "SM-N930V");
		property_set("ro.product.name", "graceqltevzw");
	} else if (strstr(bootloader, "N930U")) {
		/* USA Unbranded */
		property_set("ro.product.model", "SM-N930U");
		property_set("ro.product.name", "graceqlteusa");
	} else {
		/* all other variants become Canadian, eh? */
		property_set("ro.product.model", "SM-N930W8");
		property_set("ro.product.name", "graceqltebmc");
	}
	property_set("ro.product.device", "graceqlte");
}
