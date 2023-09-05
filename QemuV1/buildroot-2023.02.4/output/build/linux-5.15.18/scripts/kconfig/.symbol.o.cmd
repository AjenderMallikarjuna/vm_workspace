cmd_scripts/kconfig/symbol.o := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,scripts/kconfig/.symbol.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89       -c -o scripts/kconfig/symbol.o scripts/kconfig/symbol.c

source_scripts/kconfig/symbol.o := scripts/kconfig/symbol.c

deps_scripts/kconfig/symbol.o := \
  scripts/kconfig/lkc.h \
    $(wildcard include/config/prefix) \
  scripts/kconfig/expr.h \
  scripts/kconfig/list.h \
  scripts/kconfig/lkc_proto.h \

scripts/kconfig/symbol.o: $(deps_scripts/kconfig/symbol.o)

$(deps_scripts/kconfig/symbol.o):
