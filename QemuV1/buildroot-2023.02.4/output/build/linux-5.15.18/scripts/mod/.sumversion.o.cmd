cmd_scripts/mod/sumversion.o := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,scripts/mod/.sumversion.o.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89       -c -o scripts/mod/sumversion.o scripts/mod/sumversion.c

source_scripts/mod/sumversion.o := scripts/mod/sumversion.c

deps_scripts/mod/sumversion.o := \
  scripts/mod/modpost.h \
  scripts/mod/elfconfig.h \

scripts/mod/sumversion.o: $(deps_scripts/mod/sumversion.o)

$(deps_scripts/mod/sumversion.o):
