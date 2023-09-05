cmd_libbb/ptr_to_globals.o := /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-gcc -Wp,-MD,libbb/.ptr_to_globals.o.d  -std=gnu99 -Iinclude -Ilibbb  -include include/autoconf.h -D_GNU_SOURCE -DNDEBUG -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64 -DBB_VER='"1.36.1"' -D_LARGEFILE_SOURCE -D_LARGEFILE64_SOURCE -D_FILE_OFFSET_BITS=64  -Os -g0 -D_FORTIFY_SOURCE=1 -Wall -Wshadow -Wwrite-strings -Wundef -Wstrict-prototypes -Wunused -Wunused-parameter -Wunused-function -Wunused-value -Wmissing-prototypes -Wmissing-declarations -Wno-format-security -Wdeclaration-after-statement -Wold-style-definition -finline-limit=0 -fno-builtin-strlen -fomit-frame-pointer -ffunction-sections -fdata-sections -fno-guess-branch-probability -funsigned-char -static-libgcc -falign-functions=1 -falign-jumps=1 -falign-labels=1 -falign-loops=1 -fno-unwind-tables -fno-asynchronous-unwind-tables -fno-builtin-printf -Os -DHAVE_GETRANDOM    -DKBUILD_BASENAME='"ptr_to_globals"'  -DKBUILD_MODNAME='"ptr_to_globals"' -c -o libbb/ptr_to_globals.o libbb/ptr_to_globals.c

deps_libbb/ptr_to_globals.o := \
  libbb/ptr_to_globals.c \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/stdc-predef.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/errno.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/features.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/features-time64.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/bits/wordsize.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/bits/timesize.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/sys/cdefs.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/bits/long-double.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/gnu/stubs.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/gnu/stubs-soft.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/bits/errno.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/linux/errno.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/asm/errno.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/asm-generic/errno.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/asm-generic/errno-base.h \
  /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include/bits/types/error_t.h \

libbb/ptr_to_globals.o: $(deps_libbb/ptr_to_globals.o)

$(deps_libbb/ptr_to_globals.o):
