cmd_scripts/kallsyms := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,scripts/.kallsyms.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o scripts/kallsyms scripts/kallsyms.c   

source_scripts/kallsyms := scripts/kallsyms.c

deps_scripts/kallsyms := \

scripts/kallsyms: $(deps_scripts/kallsyms)

$(deps_scripts/kallsyms):
