cmd_drivers/tty/vt/conmakehash := /usr/bin/gcc -O2 -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/include -L/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wl,-rpath,/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib -Wp,-MMD,drivers/tty/vt/.conmakehash.d -Wall -Wmissing-prototypes -Wstrict-prototypes -O2 -fomit-frame-pointer -std=gnu89         -o drivers/tty/vt/conmakehash drivers/tty/vt/conmakehash.c   

source_drivers/tty/vt/conmakehash := drivers/tty/vt/conmakehash.c

deps_drivers/tty/vt/conmakehash := \

drivers/tty/vt/conmakehash: $(deps_drivers/tty/vt/conmakehash)

$(deps_drivers/tty/vt/conmakehash):
