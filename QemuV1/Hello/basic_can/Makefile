#device-objs := 8250.o 
obj-m+=can_pci.o
#obj-m+=char_driver.o

CURRENT:=$(shell pwd)

#KERNEL_PATH:=/lib/modules/$(shell uname -r)/build
KERNEL_PATH:=/home/ajender/vm_workspace/QemuV1/buildroot-2019.08.1/output/build/linux-4.19.16
CROSS_COMPILE_PATH:=/home/ajender/vm_workspace/QemuV1/buildroot-2019.08.1/output/host/bin/arm-buildroot-linux-uclibcgnueabi-
      
all:  
	make -C $(KERNEL_PATH) ARCH=arm CROSS_COMPILE=$(CROSS_COMPILE_PATH) M=$(PWD) modules
 
clean:  
	make -C $(KERNEL_PATH) ARCH=arm CROSS_COMPILE=$(CROSS_COMPILE_PATH) M=$(PWD) clean  


    
