cmd_scripts/kconfig/parser.tab.o := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,scripts/kconfig/.parser.tab.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89      -I ./scripts/kconfig -c -o scripts/kconfig/parser.tab.o scripts/kconfig/parser.tab.c

source_scripts/kconfig/parser.tab.o := scripts/kconfig/parser.tab.c

deps_scripts/kconfig/parser.tab.o := \
  scripts/kconfig/lkc.h \
    $(wildcard include/config/prefix) \
  scripts/kconfig/expr.h \
  scripts/kconfig/list.h \
  scripts/kconfig/lkc_proto.h \
  scripts/kconfig/internal.h \
  scripts/kconfig/parser.tab.h \

scripts/kconfig/parser.tab.o: $(deps_scripts/kconfig/parser.tab.o)

$(deps_scripts/kconfig/parser.tab.o):
