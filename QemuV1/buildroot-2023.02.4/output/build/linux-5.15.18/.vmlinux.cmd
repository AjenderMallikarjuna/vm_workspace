cmd_vmlinux := sh scripts/link-vmlinux.sh "/home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-ld" "-EL" "--no-undefined -X --pic-veneer -z norelro --build-id=sha1 --orphan-handling=warn";  true

source_vmlinux := scripts/link-vmlinux.sh

deps_vmlinux := \
    $(wildcard include/config/LTO_CLANG) \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/STACK_VALIDATION) \
    $(wildcard include/config/UNWINDER_ORC) \
    $(wildcard include/config/FTRACE_MCOUNT_USE_OBJTOOL) \
    $(wildcard include/config/VMLINUX_VALIDATION) \
    $(wildcard include/config/FRAME_POINTER) \
    $(wildcard include/config/GCOV_KERNEL) \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/X86_SMAP) \
    $(wildcard include/config/VMLINUX_MAP) \
    $(wildcard include/config/KALLSYMS_ALL) \
    $(wildcard include/config/KALLSYMS_ABSOLUTE_PERCPU) \
    $(wildcard include/config/KALLSYMS_BASE_RELATIVE) \
    $(wildcard include/config/SHELL) \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/KALLSYMS) \
    $(wildcard include/config/BPF) \
    $(wildcard include/config/BUILDTIME_TABLE_SORT) \

vmlinux: $(deps_vmlinux)

$(deps_vmlinux):
