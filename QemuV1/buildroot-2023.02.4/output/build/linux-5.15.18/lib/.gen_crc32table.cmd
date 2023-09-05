cmd_lib/gen_crc32table := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,lib/.gen_crc32table.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o lib/gen_crc32table lib/gen_crc32table.c   

source_lib/gen_crc32table := lib/gen_crc32table.c

deps_lib/gen_crc32table := \
  lib/../include/linux/crc32poly.h \
  lib/crc32defs.h \
    $(wildcard include/config/CRC32_SLICEBY8) \
    $(wildcard include/config/CRC32_SLICEBY4) \
    $(wildcard include/config/CRC32_SARWATE) \
    $(wildcard include/config/CRC32_BIT) \
    $(wildcard include/config/64BIT) \

lib/gen_crc32table: $(deps_lib/gen_crc32table)

$(deps_lib/gen_crc32table):
