# config.make.  Generated from config.make.in by configure.
# Don't edit this file.  Put configuration parameters in configparms instead.

version = 2.36
release = stable

# Installation prefixes.
install_root = $(DESTDIR)
prefix = /usr
exec_prefix = ${prefix}
datadir = ${datarootdir}
libdir = ${exec_prefix}/lib
bindir = ${exec_prefix}/bin
slibdir = /lib
rtlddir = /lib
complocaledir = ${exec_prefix}/lib/locale
sysconfdir = /etc
libexecdir = ${exec_prefix}/libexec
rootsbindir = /sbin
infodir = ${datarootdir}/info
includedir = ${prefix}/include
datarootdir = ${prefix}/share
localstatedir = /var
localedir = ${datarootdir}/locale
multidir= .

# Should we use and build ldconfig?
use-ldconfig = yes

# Maybe the `ldd' script must be rewritten.
ldd-rewrite-script = no

# System configuration.
config-machine = arm
base-machine = arm
config-vendor = buildroot
config-os = linux-gnueabi
config-sysdirs =  sysdeps/unix/sysv/linux/arm/le sysdeps/unix/sysv/linux/arm sysdeps/arm/nptl sysdeps/unix/sysv/linux sysdeps/nptl sysdeps/pthread sysdeps/gnu sysdeps/unix/inet sysdeps/unix/sysv sysdeps/unix/arm sysdeps/unix sysdeps/posix sysdeps/arm/le/nofpu sysdeps/arm/nofpu sysdeps/ieee754/soft-fp sysdeps/arm/le sysdeps/arm sysdeps/wordsize-32 sysdeps/ieee754/flt-32 sysdeps/ieee754/dbl-64 sysdeps/ieee754 sysdeps/generic
cflags-cpu = 
asflags-cpu = 

config-extra-cflags = 
config-extra-cppflags = 
config-cflags-nofma = -ffp-contract=off

defines = 
sysheaders = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include
sysincludes = -nostdinc -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/include -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/include-fixed -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/arm-buildroot-linux-gnueabi/sysroot/usr/include
c++-sysincludes = 
c++-cstdlib-header = 
c++-cmath-header = 
c++-bits-std_abs-h = 
all-warnings = 
enable-werror = no

have-z-execstack = yes
have-protected-data = yes
have-insert = yes
have-glob-dat-reloc = yes
with-fp = no
enable-timezone-tools = yes
unwind-find-fde = no
have-fpie = yes
have-ssp = no
stack-protector = -fno-stack-protector
no-stack-protector = 
have-selinux = no
have-libaudit = 
have-libcap = 
have-cc-with-libunwind = no
bind-now = no
use-default-link = no
have-cxx-thread_local = no
have-loop-to-function = yes
have-textrel_ifunc = yes

multi-arch = no

mach-interface-list = 

experimental-malloc = yes

memory-tagging = no

nss-crypt = no
static-nss-crypt = no

# Configuration options.
build-shared = yes
build-profile = no
build-static-nss = no
cross-compiling = yes
force-install = yes
build-crypt = yes
build-nscd = yes
use-nscd = yes
build-hardcoded-path-in-tests= no
build-pt-chown = no
have-tunables = yes
pthread-in-libc = yes

# Build tools.
CC = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-gcc
CXX = 
BUILD_CC = gcc
CFLAGS = -Os -fno-lto
CPPFLAGS-config = 
CPPUNDEFS = 
extra-nonshared-cflags = 
rtld-early-cflags = 
ASFLAGS-config =  -Wa,--noexecstack
AR = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/../../../../arm-buildroot-linux-gnueabi/bin/ar
NM = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-gcc-nm
MAKEINFO = :
AS = $(CC) -c
BISON = bison
AUTOCONF = no
OBJDUMP = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/../../../../arm-buildroot-linux-gnueabi/bin/objdump
OBJCOPY = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/../../../../arm-buildroot-linux-gnueabi/bin/objcopy
GPROF = gprof
READELF = /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-readelf

# Installation tools.
INSTALL = /usr/bin/install -c
INSTALL_PROGRAM = ${INSTALL}
INSTALL_SCRIPT = ${INSTALL}
INSTALL_DATA = ${INSTALL} -m 644
INSTALL_INFO = /usr/bin/install-info
LN_S = ln -s
MSGFMT = :

# Script execution tools.
BASH = /bin/sh
AWK = gawk
PERL = /usr/bin/perl
PYTHON = python3 -B

# Additional libraries.
LIBGD = no

# Package versions and bug reporting configuration.
PKGVERSION = (Buildroot) 
PKGVERSION_TEXI = (Buildroot) 
REPORT_BUGS_TO = <https://www.gnu.org/software/libc/bugs.html>
REPORT_BUGS_TEXI = @uref{https://www.gnu.org/software/libc/bugs.html}

# More variables may be inserted below by configure.

have-gnu-retain = no
with-lld = no
have-z-start-stop-gc = yes
have-depaudit = yes
have-dt-relr = no
have-no-dynamic-linker = yes
have-static-pie = yes
have-mtls-dialect-gnu2 = no
default-abi = soft
build-mathvec = no
have-ifunc = yes
have-gcc-ifunc = yes
build-pic-default = yes
cc-pie-default = yes
build-pie-default = yes
enable-static-pie = no
