cmd_arch/arm/kernel/setup.o := /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/bin/arm-buildroot-linux-gnueabi-gcc -Wp,-MMD,arch/arm/kernel/.setup.o.d -nostdinc -isystem /home/ajender/QemuV1/Docker/buildroot-2023.02.4/output/host/lib/gcc/arm-buildroot-linux-gnueabi/11.4.0/include -I./arch/arm/include -I./arch/arm/include/generated  -I./include -I./arch/arm/include/uapi -I./arch/arm/include/generated/uapi -I./include/uapi -I./include/generated/uapi -include ./include/linux/compiler-version.h -include ./include/linux/kconfig.h -include ./include/linux/compiler_types.h -D__KERNEL__ -mlittle-endian -fmacro-prefix-map=./= -Wall -Wundef -Werror=strict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -fshort-wchar -fno-PIE -Werror=implicit-function-declaration -Werror=implicit-int -Werror=return-type -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-ipa-sra -mabi=aapcs-linux -mfpu=vfp -funwind-tables -marm -Wa,-mno-warn-deprecated -D__LINUX_ARM_ARCH__=5 -march=armv5te -mtune=arm9tdmi -msoft-float -Uarm -fno-delete-null-pointer-checks -Wno-frame-address -Wno-format-truncation -Wno-format-overflow -Wno-address-of-packed-member -O2 -fno-allow-store-data-races -Wframe-larger-than=1024 -fstack-protector-strong -Wimplicit-fallthrough=5 -Wno-main -Wno-unused-but-set-variable -Wno-unused-const-variable -fomit-frame-pointer -fno-stack-clash-protection -Wdeclaration-after-statement -Wvla -Wno-pointer-sign -Wno-stringop-truncation -Wno-zero-length-bounds -Wno-array-bounds -Wno-stringop-overflow -Wno-restrict -Wno-maybe-uninitialized -fno-strict-overflow -fno-stack-check -fconserve-stack -Werror=date-time -Werror=incompatible-pointer-types -Werror=designated-init -Wno-packed-not-aligned -Wno-attribute-alias    -DKBUILD_MODFILE='"arch/arm/kernel/setup"' -DKBUILD_BASENAME='"setup"' -DKBUILD_MODNAME='"setup"' -D__KBUILD_MODNAME=kmod_setup -c -o arch/arm/kernel/setup.o arch/arm/kernel/setup.c

source_arch/arm/kernel/setup.o := arch/arm/kernel/setup.c

deps_arch/arm/kernel/setup.o := \
    $(wildcard include/config/FPE_NWFPE) \
    $(wildcard include/config/FPE_FASTFPE) \
    $(wildcard include/config/BIG_LITTLE) \
    $(wildcard include/config/HARDEN_BRANCH_PREDICTOR) \
    $(wildcard include/config/OUTER_CACHE) \
    $(wildcard include/config/CPU_V7M) \
    $(wildcard include/config/DEBUG_LL) \
    $(wildcard include/config/ARM_PATCH_IDIV) \
    $(wildcard include/config/THUMB2_KERNEL) \
    $(wildcard include/config/SMP) \
    $(wildcard include/config/ARM_THUMB) \
    $(wildcard include/config/MMU) \
    $(wildcard include/config/PHYS_ADDR_T_64BIT) \
    $(wildcard include/config/VGA_CONSOLE) \
    $(wildcard include/config/DUMMY_CONSOLE) \
    $(wildcard include/config/EFI) \
    $(wildcard include/config/KEXEC) \
    $(wildcard include/config/ARM_VIRT_EXT) \
    $(wildcard include/config/GENERIC_IRQ_MULTI_HANDLER) \
    $(wildcard include/config/VT) \
    $(wildcard include/config/HAVE_PROC_CPU) \
  include/linux/compiler-version.h \
    $(wildcard include/config/CC_VERSION_TEXT) \
  include/linux/kconfig.h \
    $(wildcard include/config/CPU_BIG_ENDIAN) \
    $(wildcard include/config/BOOGER) \
    $(wildcard include/config/FOO) \
  include/linux/compiler_types.h \
    $(wildcard include/config/HAVE_ARCH_COMPILER_H) \
    $(wildcard include/config/CC_HAS_ASM_INLINE) \
  include/linux/compiler_attributes.h \
  include/linux/compiler-gcc.h \
    $(wildcard include/config/RETPOLINE) \
    $(wildcard include/config/ARCH_USE_BUILTIN_BSWAP) \
    $(wildcard include/config/KCOV) \
  include/linux/efi.h \
    $(wildcard include/config/X86_64) \
    $(wildcard include/config/X86_32) \
    $(wildcard include/config/X86) \
    $(wildcard include/config/EFI_ESRT) \
    $(wildcard include/config/EFI_FAKE_MEMMAP) \
    $(wildcard include/config/EFI_PCDP) \
    $(wildcard include/config/EFI_SOFT_RESERVE) \
    $(wildcard include/config/EFI_CAPSULE_LOADER) \
    $(wildcard include/config/EFI_RUNTIME_MAP) \
    $(wildcard include/config/EFI_EMBEDDED_FIRMWARE) \
    $(wildcard include/config/LOAD_UEFI_KEYS) \
    $(wildcard include/config/SYSFB) \
  include/linux/init.h \
    $(wildcard include/config/HAVE_ARCH_PREL32_RELOCATIONS) \
    $(wildcard include/config/STRICT_KERNEL_RWX) \
    $(wildcard include/config/STRICT_MODULE_RWX) \
    $(wildcard include/config/LTO_CLANG) \
  include/linux/compiler.h \
    $(wildcard include/config/TRACE_BRANCH_PROFILING) \
    $(wildcard include/config/PROFILE_ALL_BRANCHES) \
    $(wildcard include/config/STACK_VALIDATION) \
    $(wildcard include/config/CFI_CLANG) \
  include/linux/compiler_types.h \
  arch/arm/include/generated/asm/rwonce.h \
  include/asm-generic/rwonce.h \
  include/linux/kasan-checks.h \
    $(wildcard include/config/KASAN_GENERIC) \
    $(wildcard include/config/KASAN_SW_TAGS) \
  include/linux/types.h \
    $(wildcard include/config/HAVE_UID16) \
    $(wildcard include/config/UID16) \
    $(wildcard include/config/ARCH_DMA_ADDR_T_64BIT) \
    $(wildcard include/config/64BIT) \
    $(wildcard include/config/ARCH_32BIT_USTAT_F_TINODE) \
  include/uapi/linux/types.h \
  arch/arm/include/uapi/asm/types.h \
  include/asm-generic/int-ll64.h \
  include/uapi/asm-generic/int-ll64.h \
  arch/arm/include/generated/uapi/asm/bitsperlong.h \
  include/asm-generic/bitsperlong.h \
  include/uapi/asm-generic/bitsperlong.h \
  include/uapi/linux/posix_types.h \
  include/linux/stddef.h \
  include/uapi/linux/stddef.h \
  arch/arm/include/uapi/asm/posix_types.h \
  include/uapi/asm-generic/posix_types.h \
  include/linux/kcsan-checks.h \
    $(wildcard include/config/KCSAN) \
    $(wildcard include/config/KCSAN_IGNORE_ATOMICS) \
  include/linux/string.h \
    $(wildcard include/config/BINARY_PRINTF) \
    $(wildcard include/config/FORTIFY_SOURCE) \
  include/linux/errno.h \
  include/uapi/linux/errno.h \
  arch/arm/include/generated/uapi/asm/errno.h \
  include/uapi/asm-generic/errno.h \
  include/uapi/asm-generic/errno-base.h \
  include/linux/stdarg.h \
  include/uapi/linux/string.h \
  arch/arm/include/asm/string.h \
    $(wildcard include/config/KASAN) \
  include/linux/time.h \
    $(wildcard include/config/POSIX_TIMERS) \
  include/linux/cache.h \
    $(wildcard include/config/ARCH_HAS_CACHE_LINE_SIZE) \
  include/uapi/linux/kernel.h \
  include/uapi/linux/sysinfo.h \
  include/linux/const.h \
  include/vdso/const.h \
  include/uapi/linux/const.h \
  arch/arm/include/asm/cache.h \
    $(wildcard include/config/ARM_L1_CACHE_SHIFT) \
    $(wildcard include/config/AEABI) \
  include/linux/math64.h \
    $(wildcard include/config/ARCH_SUPPORTS_INT128) \
  include/linux/math.h \
  arch/arm/include/asm/div64.h \
  arch/arm/include/asm/compiler.h \
  include/asm-generic/div64.h \
  include/linux/log2.h \
    $(wildcard include/config/ARCH_HAS_ILOG2_U32) \
    $(wildcard include/config/ARCH_HAS_ILOG2_U64) \
  include/linux/bitops.h \
  include/linux/bits.h \
  include/vdso/bits.h \
  include/linux/build_bug.h \
  include/linux/typecheck.h \
  arch/arm/include/asm/bitops.h \
  include/linux/irqflags.h \
    $(wildcard include/config/PROVE_LOCKING) \
    $(wildcard include/config/TRACE_IRQFLAGS) \
    $(wildcard include/config/IRQSOFF_TRACER) \
    $(wildcard include/config/PREEMPT_TRACER) \
    $(wildcard include/config/DEBUG_IRQFLAGS) \
    $(wildcard include/config/TRACE_IRQFLAGS_SUPPORT) \
  arch/arm/include/asm/irqflags.h \
  arch/arm/include/asm/ptrace.h \
  arch/arm/include/uapi/asm/ptrace.h \
    $(wildcard include/config/CPU_ENDIAN_BE8) \
  arch/arm/include/asm/hwcap.h \
  arch/arm/include/uapi/asm/hwcap.h \
  include/asm-generic/irqflags.h \
  arch/arm/include/asm/percpu.h \
    $(wildcard include/config/CPU_V6) \
  include/asm-generic/percpu.h \
    $(wildcard include/config/DEBUG_PREEMPT) \
    $(wildcard include/config/HAVE_SETUP_PER_CPU_AREA) \
  include/linux/threads.h \
    $(wildcard include/config/NR_CPUS) \
    $(wildcard include/config/BASE_SMALL) \
  include/linux/percpu-defs.h \
    $(wildcard include/config/DEBUG_FORCE_WEAK_PER_CPU) \
    $(wildcard include/config/AMD_MEM_ENCRYPT) \
  arch/arm/include/asm/barrier.h \
    $(wildcard include/config/CPU_32v6K) \
    $(wildcard include/config/CPU_XSC3) \
    $(wildcard include/config/CPU_FA526) \
    $(wildcard include/config/ARM_HEAVY_MB) \
    $(wildcard include/config/ARM_DMA_MEM_BUFFERABLE) \
    $(wildcard include/config/CPU_SPECTRE) \
  include/asm-generic/barrier.h \
  include/asm-generic/bitops/non-atomic.h \
  include/asm-generic/bitops/builtin-__fls.h \
  include/asm-generic/bitops/builtin-__ffs.h \
  include/asm-generic/bitops/builtin-fls.h \
  include/asm-generic/bitops/builtin-ffs.h \
  include/asm-generic/bitops/ffz.h \
  include/asm-generic/bitops/fls64.h \
  include/asm-generic/bitops/sched.h \
  include/asm-generic/bitops/hweight.h \
  include/asm-generic/bitops/arch_hweight.h \
  include/asm-generic/bitops/const_hweight.h \
  include/asm-generic/bitops/lock.h \
  include/linux/atomic.h \
  arch/arm/include/asm/atomic.h \
    $(wildcard include/config/GENERIC_ATOMIC64) \
    $(wildcard include/config/ARM_LPAE) \
  include/linux/prefetch.h \
  arch/arm/include/asm/processor.h \
    $(wildcard include/config/HAVE_HW_BREAKPOINT) \
    $(wildcard include/config/BINFMT_ELF_FDPIC) \
  arch/arm/include/asm/hw_breakpoint.h \
  arch/arm/include/asm/unified.h \
  arch/arm/include/asm/vdso/processor.h \
    $(wildcard include/config/ARM_ERRATA_754327) \
  arch/arm/include/asm/cmpxchg.h \
    $(wildcard include/config/CPU_SA1100) \
    $(wildcard include/config/CPU_SA110) \
  include/asm-generic/cmpxchg-local.h \
  include/asm-generic/cmpxchg.h \
  include/linux/atomic/atomic-arch-fallback.h \
  include/asm-generic/atomic64.h \
  include/linux/atomic/atomic-long.h \
  include/linux/atomic/atomic-instrumented.h \
  include/linux/instrumented.h \
  include/asm-generic/bitops/instrumented-lock.h \
  include/asm-generic/bitops/find.h \
    $(wildcard include/config/GENERIC_FIND_FIRST_BIT) \
  include/asm-generic/bitops/le.h \
  arch/arm/include/uapi/asm/byteorder.h \
  include/linux/byteorder/little_endian.h \
  include/uapi/linux/byteorder/little_endian.h \
  include/linux/swab.h \
  include/uapi/linux/swab.h \
  arch/arm/include/asm/swab.h \
  arch/arm/include/uapi/asm/swab.h \
  include/linux/byteorder/generic.h \
  include/asm-generic/bitops/ext2-atomic-setbit.h \
  include/vdso/math64.h \
  include/linux/time64.h \
  include/vdso/time64.h \
  include/uapi/linux/time.h \
  include/uapi/linux/time_types.h \
  include/linux/time32.h \
  include/linux/timex.h \
  include/uapi/linux/timex.h \
  include/uapi/linux/param.h \
  arch/arm/include/generated/uapi/asm/param.h \
  include/asm-generic/param.h \
    $(wildcard include/config/HZ) \
  include/uapi/asm-generic/param.h \
  arch/arm/include/asm/timex.h \
  include/vdso/time32.h \
  include/vdso/time.h \
  include/linux/proc_fs.h \
    $(wildcard include/config/COMPAT) \
    $(wildcard include/config/PROC_FS) \
    $(wildcard include/config/PROC_PID_ARCH_STATUS) \
  include/linux/fs.h \
    $(wildcard include/config/READ_ONLY_THP_FOR_FS) \
    $(wildcard include/config/FS_POSIX_ACL) \
    $(wildcard include/config/SECURITY) \
    $(wildcard include/config/CGROUP_WRITEBACK) \
    $(wildcard include/config/IMA) \
    $(wildcard include/config/FILE_LOCKING) \
    $(wildcard include/config/FSNOTIFY) \
    $(wildcard include/config/FS_ENCRYPTION) \
    $(wildcard include/config/FS_VERITY) \
    $(wildcard include/config/PREEMPTION) \
    $(wildcard include/config/EPOLL) \
    $(wildcard include/config/UNICODE) \
    $(wildcard include/config/QUOTA) \
    $(wildcard include/config/FS_DAX) \
    $(wildcard include/config/BLOCK) \
    $(wildcard include/config/DEBUG_LOCK_ALLOC) \
    $(wildcard include/config/MIGRATION) \
  include/linux/linkage.h \
    $(wildcard include/config/ARCH_USE_SYM_ANNOTATIONS) \
  include/linux/stringify.h \
  include/linux/export.h \
    $(wildcard include/config/MODVERSIONS) \
    $(wildcard include/config/MODULE_REL_CRCS) \
    $(wildcard include/config/MODULES) \
    $(wildcard include/config/TRIM_UNUSED_KSYMS) \
  arch/arm/include/asm/linkage.h \
  include/linux/wait_bit.h \
  include/linux/wait.h \
    $(wildcard include/config/LOCKDEP) \
  include/linux/list.h \
    $(wildcard include/config/DEBUG_LIST) \
  include/linux/poison.h \
    $(wildcard include/config/ILLEGAL_POINTER_VALUE) \
  include/linux/kernel.h \
    $(wildcard include/config/PREEMPT_VOLUNTARY) \
    $(wildcard include/config/PREEMPT_DYNAMIC) \
    $(wildcard include/config/PREEMPT_) \
    $(wildcard include/config/DEBUG_ATOMIC_SLEEP) \
    $(wildcard include/config/TRACING) \
    $(wildcard include/config/FTRACE_MCOUNT_RECORD) \
  include/linux/align.h \
  include/linux/limits.h \
  include/uapi/linux/limits.h \
  include/vdso/limits.h \
  include/linux/kstrtox.h \
  include/linux/minmax.h \
  include/linux/panic.h \
    $(wildcard include/config/PANIC_TIMEOUT) \
  include/linux/printk.h \
    $(wildcard include/config/MESSAGE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_DEFAULT) \
    $(wildcard include/config/CONSOLE_LOGLEVEL_QUIET) \
    $(wildcard include/config/EARLY_PRINTK) \
    $(wildcard include/config/PRINTK) \
    $(wildcard include/config/PRINTK_INDEX) \
    $(wildcard include/config/DYNAMIC_DEBUG) \
    $(wildcard include/config/DYNAMIC_DEBUG_CORE) \
  include/linux/kern_levels.h \
  include/linux/ratelimit_types.h \
  include/linux/spinlock_types.h \
    $(wildcard include/config/PREEMPT_RT) \
  include/linux/spinlock_types_raw.h \
    $(wildcard include/config/DEBUG_SPINLOCK) \
  include/linux/spinlock_types_up.h \
  include/linux/lockdep_types.h \
    $(wildcard include/config/PROVE_RAW_LOCK_NESTING) \
    $(wildcard include/config/PREEMPT_LOCK) \
    $(wildcard include/config/LOCK_STAT) \
  include/linux/rwlock_types.h \
  include/linux/once_lite.h \
  include/linux/static_call_types.h \
    $(wildcard include/config/HAVE_STATIC_CALL) \
    $(wildcard include/config/HAVE_STATIC_CALL_INLINE) \
  include/linux/spinlock.h \
  include/linux/preempt.h \
    $(wildcard include/config/PREEMPT_COUNT) \
    $(wildcard include/config/TRACE_PREEMPT_TOGGLE) \
    $(wildcard include/config/PREEMPT_NOTIFIERS) \
  arch/arm/include/generated/asm/preempt.h \
  include/asm-generic/preempt.h \
  include/linux/thread_info.h \
    $(wildcard include/config/THREAD_INFO_IN_TASK) \
    $(wildcard include/config/GENERIC_ENTRY) \
    $(wildcard include/config/HAVE_ARCH_WITHIN_STACK_FRAMES) \
    $(wildcard include/config/HARDENED_USERCOPY) \
  include/linux/bug.h \
    $(wildcard include/config/GENERIC_BUG) \
    $(wildcard include/config/BUG_ON_DATA_CORRUPTION) \
  arch/arm/include/asm/bug.h \
    $(wildcard include/config/DEBUG_BUGVERBOSE) \
  arch/arm/include/asm/opcodes.h \
    $(wildcard include/config/CPU_ENDIAN_BE32) \
  include/asm-generic/bug.h \
    $(wildcard include/config/BUG) \
    $(wildcard include/config/GENERIC_BUG_RELATIVE_POINTERS) \
  include/linux/instrumentation.h \
    $(wildcard include/config/DEBUG_ENTRY) \
  include/linux/restart_block.h \
  arch/arm/include/asm/thread_info.h \
    $(wildcard include/config/STACKPROTECTOR_PER_TASK) \
    $(wildcard include/config/ARM_THUMBEE) \
  arch/arm/include/asm/fpstate.h \
    $(wildcard include/config/VFPv3) \
    $(wildcard include/config/IWMMXT) \
  arch/arm/include/asm/page.h \
    $(wildcard include/config/CPU_COPY_V4WT) \
    $(wildcard include/config/CPU_COPY_V4WB) \
    $(wildcard include/config/CPU_COPY_FEROCEON) \
    $(wildcard include/config/CPU_COPY_FA) \
    $(wildcard include/config/CPU_XSCALE) \
    $(wildcard include/config/CPU_COPY_V6) \
    $(wildcard include/config/KUSER_HELPERS) \
    $(wildcard include/config/HAVE_ARCH_PFN_VALID) \
  arch/arm/include/asm/glue.h \
  arch/arm/include/asm/pgtable-2level-types.h \
  arch/arm/include/asm/memory.h \
    $(wildcard include/config/NEED_MACH_MEMORY_H) \
    $(wildcard include/config/PAGE_OFFSET) \
    $(wildcard include/config/HIGHMEM) \
    $(wildcard include/config/DRAM_BASE) \
    $(wildcard include/config/DRAM_SIZE) \
    $(wildcard include/config/XIP_KERNEL) \
    $(wildcard include/config/HAVE_TCM) \
    $(wildcard include/config/ARM_PATCH_PHYS_VIRT) \
    $(wildcard include/config/PHYS_OFFSET) \
    $(wildcard include/config/DEBUG_VIRTUAL) \
  include/linux/sizes.h \
  arch/arm/include/asm/kasan_def.h \
    $(wildcard include/config/KASAN_SHADOW_OFFSET) \
  include/asm-generic/memory_model.h \
    $(wildcard include/config/FLATMEM) \
    $(wildcard include/config/SPARSEMEM_VMEMMAP) \
    $(wildcard include/config/SPARSEMEM) \
  include/linux/pfn.h \
  include/asm-generic/getorder.h \
  include/linux/bottom_half.h \
  include/linux/lockdep.h \
    $(wildcard include/config/DEBUG_LOCKING_API_SELFTESTS) \
  include/linux/smp.h \
    $(wildcard include/config/UP_LATE_INIT) \
  include/linux/cpumask.h \
    $(wildcard include/config/CPUMASK_OFFSTACK) \
    $(wildcard include/config/HOTPLUG_CPU) \
    $(wildcard include/config/DEBUG_PER_CPU_MAPS) \
  include/linux/bitmap.h \
  include/linux/smp_types.h \
  include/linux/llist.h \
    $(wildcard include/config/ARCH_HAVE_NMI_SAFE_CMPXCHG) \
  arch/arm/include/generated/asm/mmiowb.h \
  include/asm-generic/mmiowb.h \
    $(wildcard include/config/MMIOWB) \
  include/linux/spinlock_up.h \
  include/linux/rwlock.h \
    $(wildcard include/config/PREEMPT) \
  include/linux/spinlock_api_up.h \
  arch/arm/include/generated/asm/current.h \
  include/asm-generic/current.h \
  include/uapi/linux/wait.h \
  include/linux/kdev_t.h \
  include/uapi/linux/kdev_t.h \
  include/linux/dcache.h \
  include/linux/rculist.h \
    $(wildcard include/config/PROVE_RCU_LIST) \
  include/linux/rcupdate.h \
    $(wildcard include/config/PREEMPT_RCU) \
    $(wildcard include/config/TINY_RCU) \
    $(wildcard include/config/TASKS_RCU_GENERIC) \
    $(wildcard include/config/RCU_STALL_COMMON) \
    $(wildcard include/config/NO_HZ_FULL) \
    $(wildcard include/config/RCU_NOCB_CPU) \
    $(wildcard include/config/TASKS_RCU) \
    $(wildcard include/config/TASKS_TRACE_RCU) \
    $(wildcard include/config/TASKS_RUDE_RCU) \
    $(wildcard include/config/TREE_RCU) \
    $(wildcard include/config/DEBUG_OBJECTS_RCU_HEAD) \
    $(wildcard include/config/PROVE_RCU) \
    $(wildcard include/config/ARCH_WEAK_RELEASE_ACQUIRE) \
  include/linux/rcutiny.h \
    $(wildcard include/config/SRCU) \
  include/linux/rculist_bl.h \
  include/linux/list_bl.h \
  include/linux/bit_spinlock.h \
  include/linux/seqlock.h \
  include/linux/mutex.h \
    $(wildcard include/config/MUTEX_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_MUTEXES) \
  include/linux/osq_lock.h \
  include/linux/debug_locks.h \
  include/linux/ww_mutex.h \
    $(wildcard include/config/DEBUG_RT_MUTEXES) \
    $(wildcard include/config/DEBUG_WW_MUTEX_SLOWPATH) \
  include/linux/rtmutex.h \
  include/linux/rbtree_types.h \
  include/linux/lockref.h \
    $(wildcard include/config/ARCH_USE_CMPXCHG_LOCKREF) \
  include/generated/bounds.h \
  include/linux/stringhash.h \
    $(wildcard include/config/DCACHE_WORD_ACCESS) \
  include/linux/hash.h \
    $(wildcard include/config/HAVE_ARCH_HASH) \
  include/linux/path.h \
  include/linux/stat.h \
  arch/arm/include/uapi/asm/stat.h \
  include/uapi/linux/stat.h \
  include/linux/uidgid.h \
    $(wildcard include/config/MULTIUSER) \
    $(wildcard include/config/USER_NS) \
  include/linux/highuid.h \
  include/linux/list_lru.h \
    $(wildcard include/config/MEMCG_KMEM) \
  include/linux/nodemask.h \
    $(wildcard include/config/NUMA) \
  include/linux/numa.h \
    $(wildcard include/config/NODES_SHIFT) \
    $(wildcard include/config/NUMA_KEEP_MEMINFO) \
  include/linux/shrinker.h \
    $(wildcard include/config/MEMCG) \
  include/linux/radix-tree.h \
  include/linux/percpu.h \
    $(wildcard include/config/NEED_PER_CPU_EMBED_FIRST_CHUNK) \
    $(wildcard include/config/NEED_PER_CPU_PAGE_FIRST_CHUNK) \
  include/linux/mmdebug.h \
    $(wildcard include/config/DEBUG_VM) \
    $(wildcard include/config/DEBUG_VM_PGFLAGS) \
  include/linux/xarray.h \
    $(wildcard include/config/XARRAY_MULTI) \
  include/linux/gfp.h \
    $(wildcard include/config/ZONE_DMA) \
    $(wildcard include/config/ZONE_DMA32) \
    $(wildcard include/config/ZONE_DEVICE) \
    $(wildcard include/config/PM_SLEEP) \
    $(wildcard include/config/CONTIG_ALLOC) \
    $(wildcard include/config/CMA) \
  include/linux/mmzone.h \
    $(wildcard include/config/FORCE_MAX_ZONEORDER) \
    $(wildcard include/config/MEMORY_ISOLATION) \
    $(wildcard include/config/ZSMALLOC) \
    $(wildcard include/config/SHADOW_CALL_STACK) \
    $(wildcard include/config/SWAP) \
    $(wildcard include/config/TRANSPARENT_HUGEPAGE) \
    $(wildcard include/config/MEMORY_HOTPLUG) \
    $(wildcard include/config/COMPACTION) \
    $(wildcard include/config/PAGE_EXTENSION) \
    $(wildcard include/config/DEFERRED_STRUCT_PAGE_INIT) \
    $(wildcard include/config/HAVE_MEMORYLESS_NODES) \
    $(wildcard include/config/SPARSEMEM_EXTREME) \
  include/linux/pageblock-flags.h \
    $(wildcard include/config/HUGETLB_PAGE) \
    $(wildcard include/config/HUGETLB_PAGE_SIZE_VARIABLE) \
  include/linux/page-flags-layout.h \
    $(wildcard include/config/KASAN_HW_TAGS) \
    $(wildcard include/config/NUMA_BALANCING) \
  include/linux/mm_types.h \
    $(wildcard include/config/HAVE_ALIGNED_STRUCT_PAGE) \
    $(wildcard include/config/USERFAULTFD) \
    $(wildcard include/config/HAVE_ARCH_COMPAT_MMAP_BASES) \
    $(wildcard include/config/MEMBARRIER) \
    $(wildcard include/config/AIO) \
    $(wildcard include/config/MMU_NOTIFIER) \
    $(wildcard include/config/ARCH_WANT_BATCHED_UNMAP_TLB_FLUSH) \
    $(wildcard include/config/IOMMU_SUPPORT) \
  include/linux/mm_types_task.h \
    $(wildcard include/config/SPLIT_PTLOCK_CPUS) \
    $(wildcard include/config/ARCH_ENABLE_SPLIT_PMD_PTLOCK) \
  include/linux/auxvec.h \
  include/uapi/linux/auxvec.h \
  arch/arm/include/asm/auxvec.h \
  arch/arm/include/uapi/asm/auxvec.h \
  include/linux/rbtree.h \
  include/linux/rwsem.h \
    $(wildcard include/config/RWSEM_SPIN_ON_OWNER) \
    $(wildcard include/config/DEBUG_RWSEMS) \
  include/linux/err.h \
  include/linux/completion.h \
  include/linux/swait.h \
  include/linux/uprobes.h \
    $(wildcard include/config/UPROBES) \
  include/linux/workqueue.h \
    $(wildcard include/config/DEBUG_OBJECTS_WORK) \
    $(wildcard include/config/FREEZER) \
    $(wildcard include/config/SYSFS) \
    $(wildcard include/config/WQ_WATCHDOG) \
  include/linux/timer.h \
    $(wildcard include/config/DEBUG_OBJECTS_TIMERS) \
    $(wildcard include/config/NO_HZ_COMMON) \
  include/linux/ktime.h \
  include/linux/jiffies.h \
  include/vdso/jiffies.h \
  include/generated/timeconst.h \
  include/vdso/ktime.h \
  include/linux/timekeeping.h \
    $(wildcard include/config/GENERIC_CMOS_UPDATE) \
  include/linux/clocksource_ids.h \
  include/linux/debugobjects.h \
    $(wildcard include/config/DEBUG_OBJECTS) \
    $(wildcard include/config/DEBUG_OBJECTS_FREE) \
  arch/arm/include/asm/mmu.h \
    $(wildcard include/config/CPU_HAS_ASID) \
    $(wildcard include/config/VDSO) \
  include/linux/page-flags.h \
    $(wildcard include/config/ARCH_USES_PG_UNCACHED) \
    $(wildcard include/config/MEMORY_FAILURE) \
    $(wildcard include/config/PAGE_IDLE_FLAG) \
    $(wildcard include/config/THP_SWAP) \
    $(wildcard include/config/KSM) \
  include/linux/local_lock.h \
  include/linux/local_lock_internal.h \
  include/linux/memory_hotplug.h \
    $(wildcard include/config/ARCH_HAS_ADD_PAGES) \
    $(wildcard include/config/HAVE_ARCH_NODEDATA_EXTENSION) \
    $(wildcard include/config/MEMORY_HOTREMOVE) \
  include/linux/notifier.h \
    $(wildcard include/config/TREE_SRCU) \
  include/linux/srcu.h \
    $(wildcard include/config/TINY_SRCU) \
  include/linux/rcu_segcblist.h \
  include/linux/srcutiny.h \
  include/linux/topology.h \
    $(wildcard include/config/USE_PERCPU_NUMA_NODE_ID) \
    $(wildcard include/config/SCHED_SMT) \
  include/linux/arch_topology.h \
    $(wildcard include/config/GENERIC_ARCH_TOPOLOGY) \
  arch/arm/include/asm/topology.h \
    $(wildcard include/config/ARM_CPU_TOPOLOGY) \
    $(wildcard include/config/BL_SWITCHER) \
  include/asm-generic/topology.h \
  include/linux/kconfig.h \
  include/linux/pid.h \
  include/linux/refcount.h \
  include/linux/capability.h \
  include/uapi/linux/capability.h \
  include/linux/semaphore.h \
  include/linux/fcntl.h \
    $(wildcard include/config/ARCH_32BIT_OFF_T) \
  include/uapi/linux/fcntl.h \
  arch/arm/include/uapi/asm/fcntl.h \
  include/uapi/asm-generic/fcntl.h \
  include/uapi/linux/openat2.h \
  include/linux/migrate_mode.h \
  include/linux/percpu-rwsem.h \
  include/linux/rcuwait.h \
  include/linux/sched/signal.h \
    $(wildcard include/config/SCHED_AUTOGROUP) \
    $(wildcard include/config/BSD_PROCESS_ACCT) \
    $(wildcard include/config/TASKSTATS) \
    $(wildcard include/config/AUDIT) \
    $(wildcard include/config/STACK_GROWSUP) \
  include/linux/signal.h \
  include/linux/signal_types.h \
    $(wildcard include/config/OLD_SIGACTION) \
  include/uapi/linux/signal.h \
  arch/arm/include/asm/signal.h \
  arch/arm/include/uapi/asm/signal.h \
  include/uapi/asm-generic/signal-defs.h \
  arch/arm/include/uapi/asm/sigcontext.h \
  arch/arm/include/generated/uapi/asm/siginfo.h \
  include/uapi/asm-generic/siginfo.h \
  include/linux/sched.h \
    $(wildcard include/config/VIRT_CPU_ACCOUNTING_NATIVE) \
    $(wildcard include/config/SCHED_INFO) \
    $(wildcard include/config/SCHEDSTATS) \
    $(wildcard include/config/FAIR_GROUP_SCHED) \
    $(wildcard include/config/RT_GROUP_SCHED) \
    $(wildcard include/config/RT_MUTEXES) \
    $(wildcard include/config/UCLAMP_TASK) \
    $(wildcard include/config/UCLAMP_BUCKETS_COUNT) \
    $(wildcard include/config/KMAP_LOCAL) \
    $(wildcard include/config/SCHED_CORE) \
    $(wildcard include/config/CGROUP_SCHED) \
    $(wildcard include/config/BLK_DEV_IO_TRACE) \
    $(wildcard include/config/PSI) \
    $(wildcard include/config/COMPAT_BRK) \
    $(wildcard include/config/CGROUPS) \
    $(wildcard include/config/BLK_CGROUP) \
    $(wildcard include/config/PAGE_OWNER) \
    $(wildcard include/config/EVENTFD) \
    $(wildcard include/config/STACKPROTECTOR) \
    $(wildcard include/config/ARCH_HAS_SCALED_CPUTIME) \
    $(wildcard include/config/VIRT_CPU_ACCOUNTING_GEN) \
    $(wildcard include/config/POSIX_CPUTIMERS) \
    $(wildcard include/config/POSIX_CPU_TIMERS_TASK_WORK) \
    $(wildcard include/config/KEYS) \
    $(wildcard include/config/SYSVIPC) \
    $(wildcard include/config/DETECT_HUNG_TASK) \
    $(wildcard include/config/IO_URING) \
    $(wildcard include/config/AUDITSYSCALL) \
    $(wildcard include/config/UBSAN) \
    $(wildcard include/config/UBSAN_TRAP) \
    $(wildcard include/config/TASK_XACCT) \
    $(wildcard include/config/CPUSETS) \
    $(wildcard include/config/X86_CPU_RESCTRL) \
    $(wildcard include/config/FUTEX) \
    $(wildcard include/config/PERF_EVENTS) \
    $(wildcard include/config/RSEQ) \
    $(wildcard include/config/TASK_DELAY_ACCT) \
    $(wildcard include/config/FAULT_INJECTION) \
    $(wildcard include/config/LATENCYTOP) \
    $(wildcard include/config/KUNIT) \
    $(wildcard include/config/FUNCTION_GRAPH_TRACER) \
    $(wildcard include/config/BCACHE) \
    $(wildcard include/config/VMAP_STACK) \
    $(wildcard include/config/LIVEPATCH) \
    $(wildcard include/config/BPF_SYSCALL) \
    $(wildcard include/config/GCC_PLUGIN_STACKLEAK) \
    $(wildcard include/config/X86_MCE) \
    $(wildcard include/config/KRETPROBES) \
    $(wildcard include/config/ARCH_HAS_PARANOID_L1D_FLUSH) \
    $(wildcard include/config/ARCH_TASK_STRUCT_ON_STACK) \
    $(wildcard include/config/DEBUG_RSEQ) \
  include/uapi/linux/sched.h \
  include/linux/sem.h \
  include/uapi/linux/sem.h \
  include/linux/ipc.h \
  include/linux/rhashtable-types.h \
  include/uapi/linux/ipc.h \
  arch/arm/include/generated/uapi/asm/ipcbuf.h \
  include/uapi/asm-generic/ipcbuf.h \
  arch/arm/include/generated/uapi/asm/sembuf.h \
  include/uapi/asm-generic/sembuf.h \
  include/linux/shm.h \
  include/uapi/linux/shm.h \
  include/uapi/asm-generic/hugetlb_encode.h \
  arch/arm/include/generated/uapi/asm/shmbuf.h \
  include/uapi/asm-generic/shmbuf.h \
  arch/arm/include/asm/shmparam.h \
  include/linux/plist.h \
    $(wildcard include/config/DEBUG_PLIST) \
  include/linux/hrtimer.h \
    $(wildcard include/config/HIGH_RES_TIMERS) \
    $(wildcard include/config/TIME_LOW_RES) \
    $(wildcard include/config/TIMERFD) \
  include/linux/hrtimer_defs.h \
  include/linux/timerqueue.h \
  include/linux/seccomp.h \
    $(wildcard include/config/SECCOMP) \
    $(wildcard include/config/HAVE_ARCH_SECCOMP_FILTER) \
    $(wildcard include/config/SECCOMP_FILTER) \
    $(wildcard include/config/CHECKPOINT_RESTORE) \
    $(wildcard include/config/SECCOMP_CACHE_DEBUG) \
  include/uapi/linux/seccomp.h \
  arch/arm/include/asm/seccomp.h \
  include/asm-generic/seccomp.h \
  include/uapi/linux/unistd.h \
  arch/arm/include/asm/unistd.h \
    $(wildcard include/config/OABI_COMPAT) \
  arch/arm/include/uapi/asm/unistd.h \
  arch/arm/include/generated/uapi/asm/unistd-eabi.h \
  arch/arm/include/generated/asm/unistd-nr.h \
  include/linux/resource.h \
  include/uapi/linux/resource.h \
  arch/arm/include/generated/uapi/asm/resource.h \
  include/asm-generic/resource.h \
  include/uapi/asm-generic/resource.h \
  include/linux/latencytop.h \
  include/linux/sched/prio.h \
  include/linux/sched/types.h \
  include/linux/syscall_user_dispatch.h \
  include/linux/task_io_accounting.h \
    $(wildcard include/config/TASK_IO_ACCOUNTING) \
  include/linux/posix-timers.h \
  include/linux/alarmtimer.h \
    $(wildcard include/config/RTC_CLASS) \
  include/linux/task_work.h \
  include/uapi/linux/rseq.h \
  include/linux/kcsan.h \
  arch/arm/include/generated/asm/kmap_size.h \
  include/asm-generic/kmap_size.h \
    $(wildcard include/config/DEBUG_KMAP_LOCAL) \
  include/linux/sched/jobctl.h \
  include/linux/sched/task.h \
    $(wildcard include/config/HAVE_EXIT_THREAD) \
    $(wildcard include/config/ARCH_WANTS_DYNAMIC_TASK_STRUCT) \
    $(wildcard include/config/HAVE_ARCH_THREAD_STRUCT_WHITELIST) \
  include/linux/uaccess.h \
    $(wildcard include/config/SET_FS) \
  include/linux/fault-inject-usercopy.h \
    $(wildcard include/config/FAULT_INJECTION_USERCOPY) \
  arch/arm/include/asm/uaccess.h \
    $(wildcard include/config/CPU_SW_DOMAIN_PAN) \
    $(wildcard include/config/CPU_USE_DOMAINS) \
    $(wildcard include/config/UACCESS_WITH_MEMCPY) \
  arch/arm/include/asm/domain.h \
    $(wildcard include/config/IO_36) \
    $(wildcard include/config/CPU_CP15_MMU) \
  arch/arm/include/generated/asm/extable.h \
  include/asm-generic/extable.h \
  include/linux/cred.h \
    $(wildcard include/config/DEBUG_CREDENTIALS) \
  include/linux/key.h \
    $(wildcard include/config/KEY_NOTIFICATIONS) \
    $(wildcard include/config/NET) \
    $(wildcard include/config/SYSCTL) \
  include/linux/sysctl.h \
  include/uapi/linux/sysctl.h \
  include/linux/assoc_array.h \
    $(wildcard include/config/ASSOCIATIVE_ARRAY) \
  include/linux/sched/user.h \
    $(wildcard include/config/WATCH_QUEUE) \
  include/linux/percpu_counter.h \
  include/linux/ratelimit.h \
  include/linux/rcu_sync.h \
  include/linux/delayed_call.h \
  include/linux/uuid.h \
  include/uapi/linux/uuid.h \
  include/linux/errseq.h \
  include/linux/ioprio.h \
  include/linux/sched/rt.h \
  include/linux/iocontext.h \
  include/uapi/linux/ioprio.h \
  include/linux/fs_types.h \
  include/linux/mount.h \
  include/uapi/linux/fs.h \
  include/uapi/linux/ioctl.h \
  arch/arm/include/generated/uapi/asm/ioctl.h \
  include/asm-generic/ioctl.h \
  include/uapi/asm-generic/ioctl.h \
  include/linux/quota.h \
    $(wildcard include/config/QUOTA_NETLINK_INTERFACE) \
  include/uapi/linux/dqblk_xfs.h \
  include/linux/dqblk_v1.h \
  include/linux/dqblk_v2.h \
  include/linux/dqblk_qtree.h \
  include/linux/projid.h \
  include/uapi/linux/quota.h \
  include/linux/nfs_fs_i.h \
  include/linux/rtc.h \
    $(wildcard include/config/RTC_INTF_DEV_UIE_EMUL) \
    $(wildcard include/config/RTC_HCTOSYS_DEVICE) \
    $(wildcard include/config/RTC_NVMEM) \
    $(wildcard include/config/RTC_INTF_SYSFS) \
  include/linux/interrupt.h \
    $(wildcard include/config/IRQ_FORCED_THREADING) \
    $(wildcard include/config/GENERIC_IRQ_PROBE) \
    $(wildcard include/config/IRQ_TIMINGS) \
  include/linux/irqreturn.h \
  include/linux/irqnr.h \
  include/uapi/linux/irqnr.h \
  include/linux/hardirq.h \
  include/linux/context_tracking_state.h \
    $(wildcard include/config/CONTEXT_TRACKING) \
  include/linux/static_key.h \
  include/linux/jump_label.h \
    $(wildcard include/config/JUMP_LABEL) \
    $(wildcard include/config/HAVE_ARCH_JUMP_LABEL_RELATIVE) \
  include/linux/ftrace_irq.h \
    $(wildcard include/config/HWLAT_TRACER) \
    $(wildcard include/config/OSNOISE_TRACER) \
  include/linux/vtime.h \
    $(wildcard include/config/VIRT_CPU_ACCOUNTING) \
    $(wildcard include/config/IRQ_TIME_ACCOUNTING) \
  arch/arm/include/asm/hardirq.h \
  arch/arm/include/asm/irq.h \
    $(wildcard include/config/SPARSE_IRQ) \
  include/asm-generic/hardirq.h \
  include/linux/irq.h \
    $(wildcard include/config/GENERIC_IRQ_EFFECTIVE_AFF_MASK) \
    $(wildcard include/config/GENERIC_IRQ_IPI) \
    $(wildcard include/config/IRQ_DOMAIN_HIERARCHY) \
    $(wildcard include/config/GENERIC_IRQ_MIGRATION) \
    $(wildcard include/config/GENERIC_PENDING_IRQ) \
    $(wildcard include/config/HARDIRQS_SW_RESEND) \
    $(wildcard include/config/GENERIC_IRQ_LEGACY) \
  include/linux/irqhandler.h \
  include/linux/io.h \
    $(wildcard include/config/HAS_IOPORT_MAP) \
    $(wildcard include/config/PCI) \
  arch/arm/include/asm/io.h \
    $(wildcard include/config/NEED_MACH_IO_H) \
    $(wildcard include/config/PCMCIA_SOC_COMMON) \
    $(wildcard include/config/ISA) \
    $(wildcard include/config/PCCARD) \
  include/asm-generic/pci_iomap.h \
    $(wildcard include/config/NO_GENERIC_PCI_IOPORT_MAP) \
    $(wildcard include/config/GENERIC_PCI_IOMAP) \
  include/asm-generic/io.h \
    $(wildcard include/config/GENERIC_IOMAP) \
    $(wildcard include/config/GENERIC_IOREMAP) \
    $(wildcard include/config/VIRT_TO_BUS) \
    $(wildcard include/config/GENERIC_DEVMEM_IS_ALLOWED) \
  include/linux/logic_pio.h \
    $(wildcard include/config/INDIRECT_PIO) \
  include/linux/fwnode.h \
  include/linux/vmalloc.h \
    $(wildcard include/config/KASAN_VMALLOC) \
    $(wildcard include/config/HAVE_ARCH_HUGE_VMALLOC) \
  include/linux/overflow.h \
  arch/arm/include/asm/vmalloc.h \
  include/linux/slab.h \
    $(wildcard include/config/DEBUG_SLAB) \
    $(wildcard include/config/FAILSLAB) \
    $(wildcard include/config/HAVE_HARDENED_USERCOPY_ALLOCATOR) \
    $(wildcard include/config/SLAB) \
    $(wildcard include/config/SLUB) \
    $(wildcard include/config/SLOB) \
    $(wildcard include/config/CC_IS_GCC) \
    $(wildcard include/config/CLANG_VERSION) \
  include/linux/percpu-refcount.h \
  include/linux/kasan.h \
    $(wildcard include/config/KASAN_STACK) \
    $(wildcard include/config/KASAN_INLINE) \
  arch/arm/include/generated/asm/irq_regs.h \
  include/asm-generic/irq_regs.h \
  include/linux/irqdesc.h \
    $(wildcard include/config/GENERIC_IRQ_DEBUGFS) \
    $(wildcard include/config/IRQ_DOMAIN) \
    $(wildcard include/config/HANDLE_DOMAIN_IRQ) \
  include/linux/kobject.h \
    $(wildcard include/config/UEVENT_HELPER) \
    $(wildcard include/config/DEBUG_KOBJECT_RELEASE) \
  include/linux/sysfs.h \
  include/linux/kernfs.h \
    $(wildcard include/config/KERNFS) \
  include/linux/idr.h \
  include/linux/kobject_ns.h \
  include/linux/kref.h \
  arch/arm/include/asm/hw_irq.h \
  arch/arm/include/asm/sections.h \
  include/asm-generic/sections.h \
  include/linux/nvmem-provider.h \
    $(wildcard include/config/NVMEM) \
  include/linux/gpio/consumer.h \
    $(wildcard include/config/GPIOLIB) \
    $(wildcard include/config/OF_GPIO) \
    $(wildcard include/config/ACPI) \
    $(wildcard include/config/GPIO_SYSFS) \
  include/uapi/linux/rtc.h \
  include/linux/device.h \
    $(wildcard include/config/ENERGY_MODEL) \
    $(wildcard include/config/GENERIC_MSI_IRQ_DOMAIN) \
    $(wildcard include/config/PINCTRL) \
    $(wildcard include/config/GENERIC_MSI_IRQ) \
    $(wildcard include/config/DMA_OPS) \
    $(wildcard include/config/DMA_DECLARE_COHERENT) \
    $(wildcard include/config/DMA_CMA) \
    $(wildcard include/config/SWIOTLB) \
    $(wildcard include/config/ARCH_HAS_SYNC_DMA_FOR_DEVICE) \
    $(wildcard include/config/ARCH_HAS_SYNC_DMA_FOR_CPU) \
    $(wildcard include/config/ARCH_HAS_SYNC_DMA_FOR_CPU_ALL) \
    $(wildcard include/config/DMA_OPS_BYPASS) \
    $(wildcard include/config/OF) \
    $(wildcard include/config/DEVTMPFS) \
    $(wildcard include/config/SYSFS_DEPRECATED) \
  include/linux/dev_printk.h \
  include/linux/energy_model.h \
  include/linux/sched/cpufreq.h \
    $(wildcard include/config/CPU_FREQ) \
  include/linux/sched/topology.h \
    $(wildcard include/config/SCHED_DEBUG) \
    $(wildcard include/config/SCHED_MC) \
    $(wildcard include/config/CPU_FREQ_GOV_SCHEDUTIL) \
  include/linux/sched/idle.h \
  include/linux/ioport.h \
  include/linux/klist.h \
  include/linux/pm.h \
    $(wildcard include/config/VT_CONSOLE_SLEEP) \
    $(wildcard include/config/PM) \
    $(wildcard include/config/PM_CLK) \
    $(wildcard include/config/PM_GENERIC_DOMAINS) \
  include/linux/device/bus.h \
  include/linux/device/class.h \
  include/linux/device/driver.h \
  arch/arm/include/asm/device.h \
    $(wildcard include/config/DMABOUNCE) \
    $(wildcard include/config/ARM_DMA_USE_IOMMU) \
    $(wildcard include/config/ARCH_OMAP) \
  include/linux/pm_wakeup.h \
  include/linux/seq_file.h \
  include/linux/cdev.h \
  include/linux/poll.h \
  include/uapi/linux/poll.h \
  arch/arm/include/generated/uapi/asm/poll.h \
  include/uapi/asm-generic/poll.h \
  include/uapi/linux/eventpoll.h \
  include/linux/pstore.h \
    $(wildcard include/config/ARM) \
  include/linux/kmsg_dump.h \
  include/linux/range.h \
  include/linux/reboot.h \
  include/uapi/linux/reboot.h \
  arch/arm/include/generated/asm/emergency-restart.h \
  include/asm-generic/emergency-restart.h \
  include/linux/screen_info.h \
  include/uapi/linux/screen_info.h \
  include/linux/delay.h \
  arch/arm/include/asm/delay.h \
  include/linux/utsname.h \
    $(wildcard include/config/UTS_NS) \
    $(wildcard include/config/PROC_SYSCTL) \
  include/linux/nsproxy.h \
  include/linux/ns_common.h \
  include/uapi/linux/utsname.h \
  include/linux/initrd.h \
    $(wildcard include/config/BLK_DEV_INITRD) \
  include/linux/console.h \
    $(wildcard include/config/HW_CONSOLE) \
    $(wildcard include/config/TTY) \
  include/linux/of_platform.h \
    $(wildcard include/config/OF_ADDRESS) \
    $(wildcard include/config/OF_DYNAMIC) \
  include/linux/mod_devicetable.h \
  include/linux/of_device.h \
  include/linux/cpu.h \
    $(wildcard include/config/PM_SLEEP_SMP) \
    $(wildcard include/config/PM_SLEEP_SMP_NONZERO_CPU) \
    $(wildcard include/config/HOTPLUG_SMT) \
  include/linux/node.h \
    $(wildcard include/config/HMEM_REPORTING) \
    $(wildcard include/config/MEMORY_HOTPLUG_SPARSE) \
    $(wildcard include/config/HUGETLBFS) \
  include/linux/cpuhotplug.h \
  include/linux/platform_device.h \
    $(wildcard include/config/SUSPEND) \
    $(wildcard include/config/HIBERNATE_CALLBACKS) \
    $(wildcard include/config/SUPERH) \
  include/linux/of.h \
    $(wildcard include/config/SPARC) \
    $(wildcard include/config/OF_PROMTREE) \
    $(wildcard include/config/OF_KOBJ) \
    $(wildcard include/config/OF_NUMA) \
    $(wildcard include/config/OF_OVERLAY) \
  include/linux/property.h \
  include/linux/kexec.h \
    $(wildcard include/config/KEXEC_CORE) \
    $(wildcard include/config/KEXEC_FILE) \
    $(wildcard include/config/KEXEC_SIG) \
    $(wildcard include/config/KEXEC_ELF) \
    $(wildcard include/config/IMA_KEXEC) \
    $(wildcard include/config/KEXEC_JUMP) \
  include/linux/crash_core.h \
  include/linux/elfcore.h \
    $(wildcard include/config/UML) \
    $(wildcard include/config/IA64) \
  include/linux/user.h \
  arch/arm/include/asm/user.h \
  include/linux/sched/task_stack.h \
    $(wildcard include/config/DEBUG_STACK_USAGE) \
  include/uapi/linux/magic.h \
  include/linux/ptrace.h \
  include/linux/pid_namespace.h \
    $(wildcard include/config/PID_NS) \
  include/linux/mm.h \
    $(wildcard include/config/HAVE_ARCH_MMAP_RND_BITS) \
    $(wildcard include/config/HAVE_ARCH_MMAP_RND_COMPAT_BITS) \
    $(wildcard include/config/DEBUG_INFO_BTF) \
    $(wildcard include/config/MEM_SOFT_DIRTY) \
    $(wildcard include/config/ARCH_USES_HIGH_VMA_FLAGS) \
    $(wildcard include/config/ARCH_HAS_PKEYS) \
    $(wildcard include/config/PPC) \
    $(wildcard include/config/PARISC) \
    $(wildcard include/config/SPARC64) \
    $(wildcard include/config/ARM64) \
    $(wildcard include/config/ARM64_MTE) \
    $(wildcard include/config/HAVE_ARCH_USERFAULTFD_MINOR) \
    $(wildcard include/config/SHMEM) \
    $(wildcard include/config/DEV_PAGEMAP_OPS) \
    $(wildcard include/config/DEVICE_PRIVATE) \
    $(wildcard include/config/PCI_P2PDMA) \
    $(wildcard include/config/ARCH_HAS_PTE_SPECIAL) \
    $(wildcard include/config/ARCH_HAS_PTE_DEVMAP) \
    $(wildcard include/config/DEBUG_VM_RB) \
    $(wildcard include/config/PAGE_POISONING) \
    $(wildcard include/config/INIT_ON_ALLOC_DEFAULT_ON) \
    $(wildcard include/config/INIT_ON_FREE_DEFAULT_ON) \
    $(wildcard include/config/DEBUG_PAGEALLOC) \
    $(wildcard include/config/MAPPING_DIRTY_HELPERS) \
  include/linux/mmap_lock.h \
  include/linux/tracepoint-defs.h \
    $(wildcard include/config/TRACEPOINTS) \
  include/linux/page_ext.h \
  include/linux/stacktrace.h \
    $(wildcard include/config/STACKTRACE) \
    $(wildcard include/config/ARCH_STACKWALK) \
    $(wildcard include/config/HAVE_RELIABLE_STACKTRACE) \
  include/linux/stackdepot.h \
    $(wildcard include/config/STACKDEPOT) \
  include/linux/page_ref.h \
    $(wildcard include/config/DEBUG_PAGE_REF) \
  include/linux/memremap.h \
  include/linux/pgtable.h \
    $(wildcard include/config/PGTABLE_LEVELS) \
    $(wildcard include/config/HIGHPTE) \
    $(wildcard include/config/GUP_GET_PTE_LOW_HIGH) \
    $(wildcard include/config/HAVE_ARCH_TRANSPARENT_HUGEPAGE_PUD) \
    $(wildcard include/config/HAVE_ARCH_SOFT_DIRTY) \
    $(wildcard include/config/ARCH_ENABLE_THP_MIGRATION) \
    $(wildcard include/config/HAVE_ARCH_HUGE_VMAP) \
    $(wildcard include/config/X86_ESPFIX64) \
  arch/arm/include/asm/pgtable.h \
  arch/arm/include/asm/proc-fns.h \
  arch/arm/include/asm/glue-proc.h \
    $(wildcard include/config/CPU_ARM7TDMI) \
    $(wildcard include/config/CPU_ARM720T) \
    $(wildcard include/config/CPU_ARM740T) \
    $(wildcard include/config/CPU_ARM9TDMI) \
    $(wildcard include/config/CPU_ARM920T) \
    $(wildcard include/config/CPU_ARM922T) \
    $(wildcard include/config/CPU_ARM925T) \
    $(wildcard include/config/CPU_ARM926T) \
    $(wildcard include/config/CPU_ARM940T) \
    $(wildcard include/config/CPU_ARM946E) \
    $(wildcard include/config/CPU_ARM1020) \
    $(wildcard include/config/CPU_ARM1020E) \
    $(wildcard include/config/CPU_ARM1022) \
    $(wildcard include/config/CPU_ARM1026) \
    $(wildcard include/config/CPU_MOHAWK) \
    $(wildcard include/config/CPU_FEROCEON) \
    $(wildcard include/config/CPU_V6K) \
    $(wildcard include/config/CPU_PJ4B) \
    $(wildcard include/config/CPU_V7) \
  include/asm-generic/pgtable-nopud.h \
  include/asm-generic/pgtable-nop4d.h \
  arch/arm/include/asm/pgtable-hwdef.h \
  arch/arm/include/asm/pgtable-2level-hwdef.h \
  arch/arm/include/asm/tlbflush.h \
    $(wildcard include/config/SMP_ON_UP) \
    $(wildcard include/config/CPU_TLB_V4WT) \
    $(wildcard include/config/CPU_TLB_FA) \
    $(wildcard include/config/CPU_TLB_V4WBI) \
    $(wildcard include/config/CPU_TLB_FEROCEON) \
    $(wildcard include/config/CPU_TLB_V4WB) \
    $(wildcard include/config/CPU_TLB_V6) \
    $(wildcard include/config/CPU_TLB_V7) \
    $(wildcard include/config/ARM_ERRATA_720789) \
    $(wildcard include/config/ARM_ERRATA_798181) \
  arch/arm/include/asm/pgtable-2level.h \
  include/asm-generic/pgtable_uffd.h \
    $(wildcard include/config/HAVE_ARCH_USERFAULTFD_WP) \
  include/linux/huge_mm.h \
  include/linux/sched/coredump.h \
    $(wildcard include/config/CORE_DUMP_DEFAULT_ELF_HEADERS) \
  include/linux/vmstat.h \
    $(wildcard include/config/VM_EVENT_COUNTERS) \
    $(wildcard include/config/DEBUG_TLBFLUSH) \
    $(wildcard include/config/DEBUG_VM_VMACACHE) \
  include/linux/vm_event_item.h \
    $(wildcard include/config/MEMORY_BALLOON) \
    $(wildcard include/config/BALLOON_COMPACTION) \
  include/uapi/linux/ptrace.h \
  include/linux/elf.h \
    $(wildcard include/config/ARCH_USE_GNU_PROPERTY) \
    $(wildcard include/config/ARCH_HAVE_ELF_PROT) \
  arch/arm/include/asm/elf.h \
  arch/arm/include/asm/vdso_datapage.h \
  include/vdso/datapage.h \
    $(wildcard include/config/ARCH_HAS_VDSO_DATA) \
  include/uapi/asm-generic/errno-base.h \
  include/vdso/clocksource.h \
    $(wildcard include/config/GENERIC_GETTIMEOFDAY) \
  include/vdso/processor.h \
  arch/arm/include/asm/vdso/gettimeofday.h \
    $(wildcard include/config/ARM_ARCH_TIMER) \
  arch/arm/include/asm/vdso/cp15.h \
    $(wildcard include/config/CPU_CP15) \
  include/uapi/linux/elf.h \
  include/uapi/linux/elf-em.h \
  include/uapi/linux/kexec.h \
  include/linux/libfdt.h \
  include/linux/libfdt_env.h \
  include/linux/../../scripts/dtc/libfdt/libfdt.h \
  include/linux/../../scripts/dtc/libfdt/libfdt_env.h \
  include/linux/../../scripts/dtc/libfdt/fdt.h \
  include/linux/of_fdt.h \
    $(wildcard include/config/OF_FLATTREE) \
    $(wildcard include/config/OF_EARLY_FLATTREE) \
  include/linux/memblock.h \
    $(wildcard include/config/ARCH_KEEP_MEMBLOCK) \
    $(wildcard include/config/HAVE_MEMBLOCK_PHYS_MAP) \
    $(wildcard include/config/MEMTEST) \
  arch/arm/include/asm/dma.h \
    $(wildcard include/config/ISA_DMA_API) \
  include/linux/sort.h \
  include/linux/psci.h \
    $(wildcard include/config/ARM_PSCI_FW) \
  include/linux/arm-smccc.h \
    $(wildcard include/config/HAVE_ARM_SMCCC) \
    $(wildcard include/config/ARM64_SVE) \
  arch/arm/include/asm/opcodes-sec.h \
  arch/arm/include/asm/opcodes-virt.h \
  arch/arm/include/asm/cp15.h \
  arch/arm/include/asm/cpu.h \
  arch/arm/include/asm/cputype.h \
    $(wildcard include/config/CPU_PJ4) \
  arch/arm/include/asm/efi.h \
  arch/arm/include/asm/cacheflush.h \
    $(wildcard include/config/ARM_ERRATA_411920) \
    $(wildcard include/config/CPU_CACHE_VIPT) \
    $(wildcard include/config/FRAME_POINTER) \
    $(wildcard include/config/CPU_ICACHE_MISMATCH_WORKAROUND) \
  arch/arm/include/asm/glue-cache.h \
    $(wildcard include/config/CPU_CACHE_V4) \
    $(wildcard include/config/CPU_CACHE_V4WB) \
    $(wildcard include/config/CACHE_B15_RAC) \
  arch/arm/include/asm/cachetype.h \
    $(wildcard include/config/CPU_CACHE_VIVT) \
  arch/arm/include/asm/outercache.h \
    $(wildcard include/config/OUTER_CACHE_SYNC) \
  arch/arm/include/generated/asm/early_ioremap.h \
  include/asm-generic/early_ioremap.h \
    $(wildcard include/config/GENERIC_EARLY_IOREMAP) \
  arch/arm/include/asm/fixmap.h \
  include/asm-generic/fixmap.h \
  arch/arm/include/asm/highmem.h \
    $(wildcard include/config/DEBUG_HIGHMEM) \
  arch/arm/include/asm/mach/map.h \
  arch/arm/include/asm/mmu_context.h \
  arch/arm/include/asm/smp_plat.h \
  include/asm-generic/mm_hooks.h \
  include/asm-generic/mmu_context.h \
  arch/arm/include/asm/procinfo.h \
  arch/arm/include/asm/psci.h \
    $(wildcard include/config/ARM_PSCI) \
  arch/arm/include/asm/setup.h \
    $(wildcard include/config/ATAGS_PROC) \
  arch/arm/include/uapi/asm/setup.h \
  arch/arm/include/generated/asm/mach-types.h \
    $(wildcard include/config/ARCH_EBSA110) \
    $(wildcard include/config/ARCH_RPC) \
    $(wildcard include/config/ARCH_EBSA285) \
    $(wildcard include/config/ARCH_NETWINDER) \
    $(wildcard include/config/ARCH_CATS) \
    $(wildcard include/config/ARCH_SHARK) \
    $(wildcard include/config/SA1100_BRUTUS) \
    $(wildcard include/config/ARCH_PERSONAL_SERVER) \
    $(wildcard include/config/ARCH_L7200) \
    $(wildcard include/config/SA1100_PLEB) \
    $(wildcard include/config/ARCH_INTEGRATOR) \
    $(wildcard include/config/SA1100_H3600) \
    $(wildcard include/config/ARCH_P720T) \
    $(wildcard include/config/SA1100_ASSABET) \
    $(wildcard include/config/SA1100_LART) \
    $(wildcard include/config/SA1100_GRAPHICSCLIENT) \
    $(wildcard include/config/SA1100_XP860) \
    $(wildcard include/config/SA1100_CERF) \
    $(wildcard include/config/SA1100_NANOENGINE) \
    $(wildcard include/config/SA1100_JORNADA720) \
    $(wildcard include/config/ARCH_EDB7211) \
    $(wildcard include/config/SA1100_PFS168) \
    $(wildcard include/config/SA1100_FLEXANET) \
    $(wildcard include/config/SA1100_SIMPAD) \
    $(wildcard include/config/ARCH_LUBBOCK) \
    $(wildcard include/config/ARCH_CLEP7212) \
    $(wildcard include/config/SA1100_SHANNON) \
    $(wildcard include/config/SA1100_CONSUS) \
    $(wildcard include/config/ARCH_AAED2000) \
    $(wildcard include/config/ARCH_CDB89712) \
    $(wildcard include/config/SA1100_GRAPHICSMASTER) \
    $(wildcard include/config/SA1100_ADSBITSY) \
    $(wildcard include/config/ARCH_PXA_IDP) \
    $(wildcard include/config/SA1100_PT_SYSTEM3) \
    $(wildcard include/config/ARCH_AUTCPU12) \
    $(wildcard include/config/SA1100_H3100) \
    $(wildcard include/config/SA1100_COLLIE) \
    $(wildcard include/config/SA1100_BADGE4) \
    $(wildcard include/config/ARCH_FORTUNET) \
    $(wildcard include/config/ARCH_MX1ADS) \
    $(wildcard include/config/ARCH_H7201) \
    $(wildcard include/config/ARCH_H7202) \
    $(wildcard include/config/ARCH_IQ80321) \
    $(wildcard include/config/ARCH_KS8695) \
    $(wildcard include/config/ARCH_SMDK2410) \
    $(wildcard include/config/ARCH_CEIVA) \
    $(wildcard include/config/MACH_VOICEBLUE) \
    $(wildcard include/config/ARCH_H5400) \
    $(wildcard include/config/MACH_OMAP_INNOVATOR) \
    $(wildcard include/config/ARCH_IXDP2400) \
    $(wildcard include/config/ARCH_IXDP2800) \
    $(wildcard include/config/ARCH_IXDP425) \
    $(wildcard include/config/SA1100_HACKKIT) \
    $(wildcard include/config/ARCH_IXCDP1100) \
    $(wildcard include/config/ARCH_AT91RM9200DK) \
    $(wildcard include/config/ARCH_CINTEGRATOR) \
    $(wildcard include/config/ARCH_VIPER) \
    $(wildcard include/config/ARCH_ADI_COYOTE) \
    $(wildcard include/config/ARCH_IXDP2401) \
    $(wildcard include/config/ARCH_IXDP2801) \
    $(wildcard include/config/ARCH_IQ31244) \
    $(wildcard include/config/ARCH_BAST) \
    $(wildcard include/config/ARCH_H1940) \
    $(wildcard include/config/ARCH_ENP2611) \
    $(wildcard include/config/ARCH_S3C2440) \
    $(wildcard include/config/ARCH_GUMSTIX) \
    $(wildcard include/config/MACH_OMAP_H2) \
    $(wildcard include/config/MACH_E740) \
    $(wildcard include/config/ARCH_IQ80331) \
    $(wildcard include/config/ARCH_VERSATILE_PB) \
    $(wildcard include/config/MACH_KEV7A400) \
    $(wildcard include/config/MACH_LPD7A400) \
    $(wildcard include/config/MACH_LPD7A404) \
    $(wildcard include/config/MACH_CSB337) \
    $(wildcard include/config/MACH_MAINSTONE) \
    $(wildcard include/config/MACH_LITE300) \
    $(wildcard include/config/MACH_XCEP) \
    $(wildcard include/config/MACH_ARCOM_VULCAN) \
    $(wildcard include/config/MACH_NOMADIK) \
    $(wildcard include/config/MACH_CORGI) \
    $(wildcard include/config/MACH_POODLE) \
    $(wildcard include/config/MACH_ARMCORE) \
    $(wildcard include/config/MACH_MX31ADS) \
    $(wildcard include/config/MACH_HIMALAYA) \
    $(wildcard include/config/MACH_EDB9312) \
    $(wildcard include/config/MACH_OMAP_GENERIC) \
    $(wildcard include/config/MACH_EDB9301) \
    $(wildcard include/config/MACH_EDB9315) \
    $(wildcard include/config/MACH_VR1000) \
    $(wildcard include/config/MACH_OMAP_PERSEUS2) \
    $(wildcard include/config/MACH_E800) \
    $(wildcard include/config/MACH_E750) \
    $(wildcard include/config/MACH_SCB9328) \
    $(wildcard include/config/MACH_OMAP_H3) \
    $(wildcard include/config/MACH_OMAP_H4) \
    $(wildcard include/config/MACH_OMAP_OSK) \
    $(wildcard include/config/MACH_TOSA) \
    $(wildcard include/config/MACH_AVILA) \
    $(wildcard include/config/MACH_EDB9302) \
    $(wildcard include/config/MACH_HUSKY) \
    $(wildcard include/config/MACH_SHEPHERD) \
    $(wildcard include/config/MACH_H4700) \
    $(wildcard include/config/MACH_RX3715) \
    $(wildcard include/config/MACH_NSLU2) \
    $(wildcard include/config/MACH_E400) \
    $(wildcard include/config/MACH_IXDPG425) \
    $(wildcard include/config/MACH_VERSATILE_AB) \
    $(wildcard include/config/MACH_EDB9307) \
    $(wildcard include/config/MACH_KB9200) \
    $(wildcard include/config/MACH_SX1) \
    $(wildcard include/config/MACH_IXDP465) \
    $(wildcard include/config/MACH_IXDP2351) \
    $(wildcard include/config/MACH_CM4008) \
    $(wildcard include/config/MACH_IQ80332) \
    $(wildcard include/config/MACH_GTWX5715) \
    $(wildcard include/config/MACH_CSB637) \
    $(wildcard include/config/MACH_N30) \
    $(wildcard include/config/MACH_NEC_MP900) \
    $(wildcard include/config/MACH_KAFA) \
    $(wildcard include/config/MACH_CM41XX) \
    $(wildcard include/config/MACH_TS72XX) \
    $(wildcard include/config/MACH_OTOM) \
    $(wildcard include/config/MACH_NEXCODER_2440) \
    $(wildcard include/config/MACH_ECO920) \
    $(wildcard include/config/MACH_ROADRUNNER) \
    $(wildcard include/config/MACH_AT91RM9200EK) \
    $(wildcard include/config/MACH_SPITZ) \
    $(wildcard include/config/MACH_ADSSPHERE) \
    $(wildcard include/config/MACH_COLIBRI) \
    $(wildcard include/config/MACH_GATEWAY7001) \
    $(wildcard include/config/MACH_PCM027) \
    $(wildcard include/config/MACH_ANUBIS) \
    $(wildcard include/config/MACH_AKITA) \
    $(wildcard include/config/MACH_E330) \
    $(wildcard include/config/MACH_NOKIA770) \
    $(wildcard include/config/MACH_CARMEVA) \
    $(wildcard include/config/MACH_EDB9315A) \
    $(wildcard include/config/MACH_STARGATE2) \
    $(wildcard include/config/MACH_INTELMOTE2) \
    $(wildcard include/config/MACH_TRIZEPS4) \
    $(wildcard include/config/MACH_PNX4008) \
    $(wildcard include/config/MACH_CPUAT91) \
    $(wildcard include/config/MACH_IQ81340SC) \
    $(wildcard include/config/MACH_IQ81340MC) \
    $(wildcard include/config/MACH_SE4200) \
    $(wildcard include/config/MACH_MICRO9) \
    $(wildcard include/config/MACH_MICRO9L) \
    $(wildcard include/config/MACH_OMAP_PALMTE) \
    $(wildcard include/config/MACH_REALVIEW_EB) \
    $(wildcard include/config/MACH_BORZOI) \
    $(wildcard include/config/MACH_PALMLD) \
    $(wildcard include/config/MACH_IXDP28X5) \
    $(wildcard include/config/MACH_OMAP_PALMTT) \
    $(wildcard include/config/MACH_ARCOM_ZEUS) \
    $(wildcard include/config/MACH_OSIRIS) \
    $(wildcard include/config/MACH_PALMTE2) \
    $(wildcard include/config/MACH_MX27ADS) \
    $(wildcard include/config/MACH_AT91SAM9261EK) \
    $(wildcard include/config/MACH_LOFT) \
    $(wildcard include/config/MACH_MX21ADS) \
    $(wildcard include/config/MACH_AMS_DELTA) \
    $(wildcard include/config/MACH_NAS100D) \
    $(wildcard include/config/MACH_MAGICIAN) \
    $(wildcard include/config/MACH_CM4002) \
    $(wildcard include/config/MACH_NXDKN) \
    $(wildcard include/config/MACH_PALMTX) \
    $(wildcard include/config/MACH_S3C2413) \
    $(wildcard include/config/MACH_WG302V2) \
    $(wildcard include/config/MACH_OMAP_2430SDP) \
    $(wildcard include/config/MACH_DAVINCI_EVM) \
    $(wildcard include/config/MACH_PALMZ72) \
    $(wildcard include/config/MACH_NXDB500) \
    $(wildcard include/config/MACH_APF9328) \
    $(wildcard include/config/MACH_PALMT5) \
    $(wildcard include/config/MACH_PALMTC) \
    $(wildcard include/config/MACH_OMAP_APOLLON) \
    $(wildcard include/config/MACH_ATEB9200) \
    $(wildcard include/config/MACH_N35) \
    $(wildcard include/config/MACH_LOGICPD_PXA270) \
    $(wildcard include/config/MACH_NXEB500HMI) \
    $(wildcard include/config/MACH_ESPRESSO) \
    $(wildcard include/config/MACH_RX1950) \
    $(wildcard include/config/MACH_GESBC9312) \
    $(wildcard include/config/MACH_PICOTUX2XX) \
    $(wildcard include/config/MACH_DSMG600) \
    $(wildcard include/config/MACH_OMAP_FSAMPLE) \
    $(wildcard include/config/MACH_SNAPPER_CL15) \
    $(wildcard include/config/MACH_OMAP_PALMZ71) \
    $(wildcard include/config/MACH_SMDK2412) \
    $(wildcard include/config/MACH_SMDK2413) \
    $(wildcard include/config/MACH_AML_M5900) \
    $(wildcard include/config/MACH_BALLOON3) \
    $(wildcard include/config/MACH_ECBAT91) \
    $(wildcard include/config/MACH_ONEARM) \
    $(wildcard include/config/MACH_SMDK2443) \
    $(wildcard include/config/MACH_FSG) \
    $(wildcard include/config/MACH_AT91SAM9260EK) \
    $(wildcard include/config/MACH_GLANTANK) \
    $(wildcard include/config/MACH_N2100) \
    $(wildcard include/config/MACH_IM42XX) \
    $(wildcard include/config/MACH_QT2410) \
    $(wildcard include/config/MACH_KIXRP435) \
    $(wildcard include/config/MACH_CC9P9360DEV) \
    $(wildcard include/config/MACH_EDB9302A) \
    $(wildcard include/config/MACH_EDB9307A) \
    $(wildcard include/config/MACH_OMAP_3430SDP) \
    $(wildcard include/config/MACH_VSTMS) \
    $(wildcard include/config/MACH_MICRO9M) \
    $(wildcard include/config/MACH_BUG) \
    $(wildcard include/config/MACH_AT91SAM9263EK) \
    $(wildcard include/config/MACH_EM7210) \
    $(wildcard include/config/MACH_VPAC270) \
    $(wildcard include/config/MACH_TREO680) \
    $(wildcard include/config/MACH_ZYLONITE) \
    $(wildcard include/config/MACH_MX31LITE) \
    $(wildcard include/config/MACH_MIOA701) \
    $(wildcard include/config/MACH_ARMADILLO5X0) \
    $(wildcard include/config/MACH_CC9P9360JS) \
    $(wildcard include/config/MACH_SMDK6400) \
    $(wildcard include/config/MACH_NOKIA_N800) \
    $(wildcard include/config/MACH_EP80219) \
    $(wildcard include/config/MACH_GORAMO_MLR) \
    $(wildcard include/config/MACH_EM_X270) \
    $(wildcard include/config/MACH_NEO1973_GTA02) \
    $(wildcard include/config/MACH_AT91SAM9RLEK) \
    $(wildcard include/config/MACH_COLIBRI320) \
    $(wildcard include/config/MACH_CAM60) \
    $(wildcard include/config/MACH_AT91EB01) \
    $(wildcard include/config/MACH_DB88F5281) \
    $(wildcard include/config/MACH_CSB726) \
    $(wildcard include/config/MACH_DAVINCI_DM6467_EVM) \
    $(wildcard include/config/MACH_DAVINCI_DM355_EVM) \
    $(wildcard include/config/MACH_LITTLETON) \
    $(wildcard include/config/MACH_IM4004) \
    $(wildcard include/config/MACH_REALVIEW_PB11MP) \
    $(wildcard include/config/MACH_MX27_3DS) \
    $(wildcard include/config/MACH_HALIBUT) \
    $(wildcard include/config/MACH_TROUT) \
    $(wildcard include/config/MACH_TCT_HAMMER) \
    $(wildcard include/config/MACH_HERALD) \
    $(wildcard include/config/MACH_SIM_ONE) \
    $(wildcard include/config/MACH_JIVE) \
    $(wildcard include/config/MACH_SAM9_L9260) \
    $(wildcard include/config/MACH_REALVIEW_PB1176) \
    $(wildcard include/config/MACH_YL9200) \
    $(wildcard include/config/MACH_RD88F5182) \
    $(wildcard include/config/MACH_KUROBOX_PRO) \
    $(wildcard include/config/MACH_MX31_3DS) \
    $(wildcard include/config/MACH_QONG) \
    $(wildcard include/config/MACH_OMAP2EVM) \
    $(wildcard include/config/MACH_OMAP3EVM) \
    $(wildcard include/config/MACH_DNS323) \
    $(wildcard include/config/MACH_OMAP3_BEAGLE) \
    $(wildcard include/config/MACH_NOKIA_N810) \
    $(wildcard include/config/MACH_PCM038) \
    $(wildcard include/config/MACH_SG310) \
    $(wildcard include/config/MACH_TS209) \
    $(wildcard include/config/MACH_AT91CAP9ADK) \
    $(wildcard include/config/MACH_MX31MOBOARD) \
    $(wildcard include/config/MACH_VISION_EP9307) \
    $(wildcard include/config/MACH_TERASTATION_PRO2) \
    $(wildcard include/config/MACH_LINKSTATION_PRO) \
    $(wildcard include/config/MACH_E350) \
    $(wildcard include/config/MACH_TS409) \
    $(wildcard include/config/MACH_RSI_EWS) \
    $(wildcard include/config/MACH_CM_X300) \
    $(wildcard include/config/MACH_AT91SAM9G20EK) \
    $(wildcard include/config/MACH_SMDK6410) \
    $(wildcard include/config/MACH_U300) \
    $(wildcard include/config/MACH_WRT350N_V2) \
    $(wildcard include/config/MACH_OMAP_LDP) \
    $(wildcard include/config/MACH_MX35_3DS) \
    $(wildcard include/config/MACH_NEUROS_OSD2) \
    $(wildcard include/config/MACH_TRIZEPS4WL) \
    $(wildcard include/config/MACH_TS78XX) \
    $(wildcard include/config/MACH_SFFSDR) \
    $(wildcard include/config/MACH_PCM037) \
    $(wildcard include/config/MACH_DB88F6281_BP) \
    $(wildcard include/config/MACH_RD88F6192_NAS) \
    $(wildcard include/config/MACH_RD88F6281) \
    $(wildcard include/config/MACH_DB78X00_BP) \
    $(wildcard include/config/MACH_SMDK2416) \
    $(wildcard include/config/MACH_WBD111) \
    $(wildcard include/config/MACH_MV2120) \
    $(wildcard include/config/MACH_MX51_3DS) \
    $(wildcard include/config/MACH_IMX27LITE) \
    $(wildcard include/config/MACH_USB_A9260) \
    $(wildcard include/config/MACH_USB_A9263) \
    $(wildcard include/config/MACH_QIL_A9260) \
    $(wildcard include/config/MACH_KZM_ARM11_01) \
    $(wildcard include/config/MACH_NOKIA_N810_WIMAX) \
    $(wildcard include/config/MACH_SAPPHIRE) \
    $(wildcard include/config/MACH_STMP37XX) \
    $(wildcard include/config/MACH_STMP378X) \
    $(wildcard include/config/MACH_EZX_A780) \
    $(wildcard include/config/MACH_EZX_E680) \
    $(wildcard include/config/MACH_EZX_A1200) \
    $(wildcard include/config/MACH_EZX_E6) \
    $(wildcard include/config/MACH_EZX_E2) \
    $(wildcard include/config/MACH_EZX_A910) \
    $(wildcard include/config/MACH_EDMINI_V2) \
    $(wildcard include/config/MACH_ZIPIT2) \
    $(wildcard include/config/MACH_OMAP3_PANDORA) \
    $(wildcard include/config/MACH_MSS2) \
    $(wildcard include/config/MACH_LB88RC8480) \
    $(wildcard include/config/MACH_MX25_3DS) \
    $(wildcard include/config/MACH_OMAP3530_LV_SOM) \
    $(wildcard include/config/MACH_DAVINCI_DA830_EVM) \
    $(wildcard include/config/MACH_DOVE_DB) \
    $(wildcard include/config/MACH_OVERO) \
    $(wildcard include/config/MACH_AT2440EVB) \
    $(wildcard include/config/MACH_NEOCORE926) \
    $(wildcard include/config/MACH_WNR854T) \
    $(wildcard include/config/MACH_RD88F5181L_GE) \
    $(wildcard include/config/MACH_RD88F5181L_FXO) \
    $(wildcard include/config/MACH_STAMP9G20) \
    $(wildcard include/config/MACH_SMDKC100) \
    $(wildcard include/config/MACH_TAVOREVB) \
    $(wildcard include/config/MACH_SAAR) \
    $(wildcard include/config/MACH_AT91SAM9M10G45EK) \
    $(wildcard include/config/MACH_USB_A9G20) \
    $(wildcard include/config/MACH_MXLADS) \
    $(wildcard include/config/MACH_LINKSTATION_MINI) \
    $(wildcard include/config/MACH_AFEB9260) \
    $(wildcard include/config/MACH_IMX27IPCAM) \
    $(wildcard include/config/MACH_BK3) \
    $(wildcard include/config/MACH_RD88F6183AP_GE) \
    $(wildcard include/config/MACH_REALVIEW_PBA8) \
    $(wildcard include/config/MACH_REALVIEW_PBX) \
    $(wildcard include/config/MACH_MICRO9S) \
    $(wildcard include/config/MACH_RUT100) \
    $(wildcard include/config/MACH_G3EVM) \
    $(wildcard include/config/MACH_W90P910EVB) \
    $(wildcard include/config/MACH_W90P950EVB) \
    $(wildcard include/config/MACH_W90N960EVB) \
    $(wildcard include/config/MACH_MV88F6281GTW_GE) \
    $(wildcard include/config/MACH_NCP) \
    $(wildcard include/config/MACH_DAVINCI_DM365_EVM) \
    $(wildcard include/config/MACH_CENTRO) \
    $(wildcard include/config/MACH_NOKIA_RX51) \
    $(wildcard include/config/MACH_OMAP_ZOOM2) \
    $(wildcard include/config/MACH_CPUAT9260) \
    $(wildcard include/config/MACH_EUKREA_CPUIMX27) \
    $(wildcard include/config/MACH_ACS5K) \
    $(wildcard include/config/MACH_SNAPPER_9260) \
    $(wildcard include/config/MACH_DSM320) \
    $(wildcard include/config/MACH_EXEDA) \
    $(wildcard include/config/MACH_MINI2440) \
    $(wildcard include/config/MACH_COLIBRI300) \
    $(wildcard include/config/MACH_LINKSTATION_LS_HGL) \
    $(wildcard include/config/MACH_CPUAT9G20) \
    $(wildcard include/config/MACH_SMDK6440) \
    $(wildcard include/config/MACH_NAS4220B) \
    $(wildcard include/config/MACH_ZYLONITE2) \
    $(wildcard include/config/MACH_ASPENITE) \
    $(wildcard include/config/MACH_TTC_DKB) \
    $(wildcard include/config/MACH_PCM043) \
    $(wildcard include/config/MACH_SHEEVAPLUG) \
    $(wildcard include/config/MACH_AVENGERS_LITE) \
    $(wildcard include/config/MACH_MX51_BABBAGE) \
    $(wildcard include/config/MACH_RD78X00_MASA) \
    $(wildcard include/config/MACH_DM355_LEOPARD) \
    $(wildcard include/config/MACH_TS219) \
    $(wildcard include/config/MACH_PCA100) \
    $(wildcard include/config/MACH_DAVINCI_DA850_EVM) \
    $(wildcard include/config/MACH_AT91SAM9G10EK) \
    $(wildcard include/config/MACH_OMAP_4430SDP) \
    $(wildcard include/config/MACH_MAGX_ZN5) \
    $(wildcard include/config/MACH_OMAP3_TORPEDO) \
    $(wildcard include/config/MACH_ANW6410) \
    $(wildcard include/config/MACH_IMX27_VISSTRIM_M10) \
    $(wildcard include/config/MACH_PORTUXG20) \
    $(wildcard include/config/MACH_SMDKC110) \
    $(wildcard include/config/MACH_OMAP3517EVM) \
    $(wildcard include/config/MACH_NETSPACE_V2) \
    $(wildcard include/config/MACH_NETSPACE_MAX_V2) \
    $(wildcard include/config/MACH_D2NET_V2) \
    $(wildcard include/config/MACH_NET2BIG_V2) \
    $(wildcard include/config/MACH_NET5BIG_V2) \
    $(wildcard include/config/MACH_INETSPACE_V2) \
    $(wildcard include/config/MACH_AT91SAM9G45EKES) \
    $(wildcard include/config/MACH_SPEAR600) \
    $(wildcard include/config/MACH_SPEAR300) \
    $(wildcard include/config/MACH_LILLY1131) \
    $(wildcard include/config/MACH_HMT) \
    $(wildcard include/config/MACH_VEXPRESS) \
    $(wildcard include/config/MACH_D2NET) \
    $(wildcard include/config/MACH_BIGDISK) \
    $(wildcard include/config/MACH_AT91SAM9G20EK_2MMC) \
    $(wildcard include/config/MACH_BCMRING) \
    $(wildcard include/config/MACH_MAHIMAHI) \
    $(wildcard include/config/MACH_SMDK6442) \
    $(wildcard include/config/MACH_OPENRD_BASE) \
    $(wildcard include/config/MACH_DEVKIT8000) \
    $(wildcard include/config/MACH_MX51_EFIKAMX) \
    $(wildcard include/config/MACH_CM_T35) \
    $(wildcard include/config/MACH_NET2BIG) \
    $(wildcard include/config/MACH_IGEP0020) \
    $(wildcard include/config/MACH_NUC932EVB) \
    $(wildcard include/config/MACH_OPENRD_CLIENT) \
    $(wildcard include/config/MACH_U8500) \
    $(wildcard include/config/MACH_MX51_EFIKASB) \
    $(wildcard include/config/MACH_MARVELL_JASPER) \
    $(wildcard include/config/MACH_FLINT) \
    $(wildcard include/config/MACH_TAVOREVB3) \
    $(wildcard include/config/MACH_TOUCHBOOK) \
    $(wildcard include/config/MACH_RAUMFELD_RC) \
    $(wildcard include/config/MACH_RAUMFELD_CONNECTOR) \
    $(wildcard include/config/MACH_RAUMFELD_SPEAKER) \
    $(wildcard include/config/MACH_TNETV107X) \
    $(wildcard include/config/MACH_SMDKV210) \
    $(wildcard include/config/MACH_OMAP_ZOOM3) \
    $(wildcard include/config/MACH_OMAP_3630SDP) \
    $(wildcard include/config/MACH_SMARTQ7) \
    $(wildcard include/config/MACH_G4EVM) \
    $(wildcard include/config/MACH_OMAPL138_HAWKBOARD) \
    $(wildcard include/config/MACH_TS41X) \
    $(wildcard include/config/MACH_PHY3250) \
    $(wildcard include/config/MACH_MINI6410) \
    $(wildcard include/config/MACH_MX28EVK) \
    $(wildcard include/config/MACH_SMARTQ5) \
    $(wildcard include/config/MACH_DAVINCI_DM6467TEVM) \
    $(wildcard include/config/MACH_MXT_TD60) \
    $(wildcard include/config/MACH_CAPC7117) \
    $(wildcard include/config/MACH_ICONTROL) \
    $(wildcard include/config/MACH_GPLUGD) \
    $(wildcard include/config/MACH_QSD8X50A_ST1_5) \
    $(wildcard include/config/MACH_MX23EVK) \
    $(wildcard include/config/MACH_AP4EVB) \
    $(wildcard include/config/MACH_MITYOMAPL138) \
    $(wildcard include/config/MACH_GURUPLUG) \
    $(wildcard include/config/MACH_SPEAR310) \
    $(wildcard include/config/MACH_SPEAR320) \
    $(wildcard include/config/MACH_AQUILA) \
    $(wildcard include/config/MACH_ESATA_SHEEVAPLUG) \
    $(wildcard include/config/MACH_MSM7X30_SURF) \
    $(wildcard include/config/MACH_TERASTATION_WXL) \
    $(wildcard include/config/MACH_MSM7X25_SURF) \
    $(wildcard include/config/MACH_MSM7X25_FFA) \
    $(wildcard include/config/MACH_MSM7X27_SURF) \
    $(wildcard include/config/MACH_MSM7X27_FFA) \
    $(wildcard include/config/MACH_MSM7X30_FFA) \
    $(wildcard include/config/MACH_QSD8X50_SURF) \
    $(wildcard include/config/MACH_MX53_EVK) \
    $(wildcard include/config/MACH_IGEP0030) \
    $(wildcard include/config/MACH_SBC3530) \
    $(wildcard include/config/MACH_SAARB) \
    $(wildcard include/config/MACH_HARMONY) \
    $(wildcard include/config/MACH_MSM7X30_FLUID) \
    $(wildcard include/config/MACH_CM_T3517) \
    $(wildcard include/config/MACH_WBD222) \
    $(wildcard include/config/MACH_MSM8X60_SURF) \
    $(wildcard include/config/MACH_MSM8X60_SIM) \
    $(wildcard include/config/MACH_TCC8000_SDK) \
    $(wildcard include/config/MACH_CNS3420VB) \
    $(wildcard include/config/MACH_OMAP4_PANDA) \
    $(wildcard include/config/MACH_TI8168EVM) \
    $(wildcard include/config/MACH_TETON_BGA) \
    $(wildcard include/config/MACH_EUKREA_CPUIMX25SD) \
    $(wildcard include/config/MACH_EUKREA_CPUIMX35SD) \
    $(wildcard include/config/MACH_EUKREA_CPUIMX51SD) \
    $(wildcard include/config/MACH_EUKREA_CPUIMX51) \
    $(wildcard include/config/MACH_SMDKC210) \
    $(wildcard include/config/MACH_T5325) \
    $(wildcard include/config/MACH_INCOME) \
    $(wildcard include/config/MACH_MESON) \
    $(wildcard include/config/MACH_GONI) \
    $(wildcard include/config/MACH_BV07) \
    $(wildcard include/config/MACH_OPENRD_ULTIMATE) \
    $(wildcard include/config/MACH_DEVIXP) \
    $(wildcard include/config/MACH_MICCPT) \
    $(wildcard include/config/MACH_MIC256) \
    $(wildcard include/config/MACH_U5500) \
    $(wildcard include/config/MACH_LINKSTATION_LSCHL) \
    $(wildcard include/config/MACH_SMDKV310) \
    $(wildcard include/config/MACH_WM8505_7IN_NETBOOK) \
    $(wildcard include/config/MACH_CRANEBOARD) \
    $(wildcard include/config/MACH_SMDK6450) \
    $(wildcard include/config/MACH_BROWNSTONE) \
    $(wildcard include/config/MACH_FLEXIBITY) \
    $(wildcard include/config/MACH_MX50_RDP) \
    $(wildcard include/config/MACH_UNIVERSAL_C210) \
    $(wildcard include/config/MACH_REAL6410) \
    $(wildcard include/config/MACH_DOCKSTAR) \
    $(wildcard include/config/MACH_TI8148EVM) \
    $(wildcard include/config/MACH_SEABOARD) \
    $(wildcard include/config/MACH_MX53_ARD) \
    $(wildcard include/config/MACH_MX53_SMD) \
    $(wildcard include/config/MACH_MSM8X60_RUMI3) \
    $(wildcard include/config/MACH_MSM8X60_FFA) \
    $(wildcard include/config/MACH_CM_A510) \
    $(wildcard include/config/MACH_TX28) \
    $(wildcard include/config/MACH_PCONTROL_G20) \
    $(wildcard include/config/MACH_VPR200) \
    $(wildcard include/config/MACH_TORBRECK) \
    $(wildcard include/config/MACH_PRIMA2_EVB) \
    $(wildcard include/config/MACH_PAZ00) \
    $(wildcard include/config/MACH_ACMENETUSFOXG20) \
    $(wildcard include/config/MACH_AG5EVM) \
    $(wildcard include/config/MACH_WLF_CRAGG_6410) \
    $(wildcard include/config/MACH_TRIMSLICE) \
    $(wildcard include/config/MACH_MACKEREL) \
    $(wildcard include/config/MACH_KAEN) \
    $(wildcard include/config/MACH_NOKIA_RM680) \
    $(wildcard include/config/MACH_MSM8960_SIM) \
    $(wildcard include/config/MACH_MSM8960_RUMI3) \
    $(wildcard include/config/MACH_GSIA18S) \
    $(wildcard include/config/MACH_MX53_LOCO) \
    $(wildcard include/config/MACH_WARIO) \
    $(wildcard include/config/MACH_CM_T3730) \
    $(wildcard include/config/MACH_HREFV60) \
    $(wildcard include/config/MACH_ARMLEX4210) \
    $(wildcard include/config/MACH_SNOWBALL) \
    $(wildcard include/config/MACH_XILINX_EP107) \
    $(wildcard include/config/MACH_NURI) \
    $(wildcard include/config/MACH_ORIGEN) \
    $(wildcard include/config/MACH_XARINA) \
    $(wildcard include/config/MACH_NSPIRE) \
    $(wildcard include/config/MACH_NOKIA_RM696) \
    $(wildcard include/config/MACH_M28EVK) \
    $(wildcard include/config/MACH_KOTA2) \
    $(wildcard include/config/MACH_BONITO) \
    $(wildcard include/config/MACH_SMDK4212) \
    $(wildcard include/config/MACH_APX4DEVKIT) \
    $(wildcard include/config/MACH_SMDK4412) \
    $(wildcard include/config/MACH_MARZEN) \
    $(wildcard include/config/MACH_EMPC_A500) \
    $(wildcard include/config/MACH_U8520) \
    $(wildcard include/config/MACH_URT) \
    $(wildcard include/config/MACH_KEYSTONE) \
    $(wildcard include/config/MACH_CKB_RZA1H) \
    $(wildcard include/config/MACH_BCM2835) \
    $(wildcard include/config/MACH_CM_3G) \
    $(wildcard include/config/MACH_EMPC_AIMX6) \
    $(wildcard include/config/MACH_DIYEFIS6410) \
    $(wildcard include/config/MACH_MX53_TURING) \
    $(wildcard include/config/MACH_MX6DL_TURING) \
    $(wildcard include/config/MACH_MX53_INDASH) \
    $(wildcard include/config/MACH_MX6Q_INDASH) \
    $(wildcard include/config/MACH_MX6DL_INDASH) \
    $(wildcard include/config/MACH_RTS_G6) \
    $(wildcard include/config/MACH_KA_TITAN) \
    $(wildcard include/config/MACH_CL_SOM_IMX7) \
    $(wildcard include/config/MACH_VVDN_MGSI_VSIS) \
    $(wildcard include/config/MACH_MX6Q_NANO) \
    $(wildcard include/config/MACH_PDU001) \
    $(wildcard include/config/MACH_CAB_PROYK) \
    $(wildcard include/config/MACH_KLIN) \
    $(wildcard include/config/MACH_ENMAN_STEUERBOX) \
    $(wildcard include/config/MACH_LS_STINGRAY) \
    $(wildcard include/config/MACH_IPDU) \
    $(wildcard include/config/MACH_LINDA) \
    $(wildcard include/config/MACH_MX6Q_OPENREX) \
    $(wildcard include/config/MACH_ON100) \
    $(wildcard include/config/MACH_EMINDS_RTU12) \
    $(wildcard include/config/MACH_EMINDS_AVL10) \
    $(wildcard include/config/MACH_MAIN_PLC_LME) \
    $(wildcard include/config/MACH_MSPX) \
    $(wildcard include/config/MACH_CGW_300) \
    $(wildcard include/config/MACH_MX7D_CICADA) \
    $(wildcard include/config/MACH_VIRT2REAL_DM365) \
    $(wildcard include/config/MACH_DM365_VIRT2REAL) \
    $(wildcard include/config/MACH_H6073) \
    $(wildcard include/config/MACH_GTGATEWAY) \
    $(wildcard include/config/MACH_XARINA_STANDARD) \
    $(wildcard include/config/MACH_NOVASOMS) \
    $(wildcard include/config/MACH_NOVASOMP) \
    $(wildcard include/config/MACH_NOVASOMU) \
    $(wildcard include/config/MACH_MX6Q_MPBD) \
    $(wildcard include/config/MACH_NCR_1930) \
    $(wildcard include/config/MACH_UAP301) \
    $(wildcard include/config/MACH_URT02) \
    $(wildcard include/config/MACH_ATC8) \
    $(wildcard include/config/MACH_IOT_GATEWAY) \
    $(wildcard include/config/MACH_HSM_PHOENIX) \
    $(wildcard include/config/MACH_MISSOURI) \
    $(wildcard include/config/MACH_REMARKABLE) \
    $(wildcard include/config/MACH_FA0113) \
    $(wildcard include/config/MACH_INNOVA_STATNETTAWM) \
  arch/arm/include/asm/xen/hypervisor.h \
  include/xen/arm/hypervisor.h \
    $(wildcard include/config/XEN) \
  arch/arm/include/asm/prom.h \
  arch/arm/include/asm/mach/arch.h \
  arch/arm/include/asm/mach/irq.h \
  arch/arm/include/asm/mach/time.h \
  arch/arm/include/asm/system_info.h \
  arch/arm/include/asm/system_misc.h \
  arch/arm/include/asm/traps.h \
  arch/arm/include/asm/unwind.h \
    $(wildcard include/config/ARM_UNWIND) \
  arch/arm/include/asm/memblock.h \
  arch/arm/include/asm/virt.h \
  arch/arm/include/asm/kasan.h \
  arch/arm/kernel/atags.h \
    $(wildcard include/config/ATAGS) \

arch/arm/kernel/setup.o: $(deps_arch/arm/kernel/setup.o)

$(deps_arch/arm/kernel/setup.o):
