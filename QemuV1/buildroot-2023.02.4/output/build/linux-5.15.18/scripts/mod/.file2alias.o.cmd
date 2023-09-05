cmd_scripts/mod/file2alias.o := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,scripts/mod/.file2alias.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89       -c -o scripts/mod/file2alias.o scripts/mod/file2alias.c

source_scripts/mod/file2alias.o := scripts/mod/file2alias.c

deps_scripts/mod/file2alias.o := \
  scripts/mod/modpost.h \
  scripts/mod/elfconfig.h \
  scripts/mod/devicetable-offsets.h \
  scripts/mod/../../include/linux/mod_devicetable.h \

scripts/mod/file2alias.o: $(deps_scripts/mod/file2alias.o)

$(deps_scripts/mod/file2alias.o):
