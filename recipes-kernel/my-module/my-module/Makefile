# SPDX-License-Identifier: GPL-2.0

ifneq ($(KERNELRELEASE),)

	obj-m += my-module.o
else
	KERNEL_DIR ?= /lib/modules/$(shell uname -r)/build
	MODULE_DIR := $(shell pwd)

.PHONY: all modules clean

all: modules

modules:
	$(MAKE) -C $(KERNEL_DIR) M=$(MODULE_DIR)  modules

clean:
	rm -f *.o *.ko *.mod.c .*.o .*.o.d .*.ko .*.mod.c .*.cmd *~ *.ko.unsigned *.mod
	rm -f Module.symvers Module.markers modules.order
	rm -rf .tmp_versions .cache.mk
endif
