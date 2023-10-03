
#DESTDIR = /home/andy/Projects/GSoC2013/Linux/rootfs/home/can_pci/basic

CROSS_COMPILE=/home/ajender/vm_workspace/QemuV1/buildroot-2019.08.1/output/host/bin/arm-buildroot-linux-uclibcgnueabi-

CC      = $(CROSS_COMPILE)gcc-8.3.0
LD      = $(CROSS_COMPILE)ld
CFLAGS    = -O2 -Wall 


PROGRAMS = send receive simple_char

all: $(PROGRAMS)

clean:
	rm -f $(PROGRAMS) *.o

# install:
# 	cp -f $(PROGRAMS) $(DESTDIR)/

# distclean:
# 	rm -f $(PROGRAMS) *.o *~


