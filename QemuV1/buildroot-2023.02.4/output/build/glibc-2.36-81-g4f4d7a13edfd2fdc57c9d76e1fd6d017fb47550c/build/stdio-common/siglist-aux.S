	.cpu arm926ej-s
	.arch armv5tej
	.fpu softvfp
	.eabi_attribute 19, 1
	.eabi_attribute 20, 1
	.eabi_attribute 21, 1
	.eabi_attribute 23, 3
	.eabi_attribute 24, 1
	.eabi_attribute 25, 1
	.eabi_attribute 26, 2
	.eabi_attribute 30, 4
	.eabi_attribute 34, 0
	.eabi_attribute 18, 4
	.file	"siglist-gen.c"
	.text
	.global	__sys_sigabbrev
	.section	.rodata.str1.1,"aMS",%progbits,1
.LC0:
	.ascii	"HUP\000"
.LC1:
	.ascii	"INT\000"
.LC2:
	.ascii	"QUIT\000"
.LC3:
	.ascii	"ILL\000"
.LC4:
	.ascii	"TRAP\000"
.LC5:
	.ascii	"ABRT\000"
.LC6:
	.ascii	"BUS\000"
.LC7:
	.ascii	"FPE\000"
.LC8:
	.ascii	"KILL\000"
.LC9:
	.ascii	"USR1\000"
.LC10:
	.ascii	"SEGV\000"
.LC11:
	.ascii	"USR2\000"
.LC12:
	.ascii	"PIPE\000"
.LC13:
	.ascii	"ALRM\000"
.LC14:
	.ascii	"TERM\000"
.LC15:
	.ascii	"STKFLT\000"
.LC16:
	.ascii	"CHLD\000"
.LC17:
	.ascii	"CONT\000"
.LC18:
	.ascii	"STOP\000"
.LC19:
	.ascii	"TSTP\000"
.LC20:
	.ascii	"TTIN\000"
.LC21:
	.ascii	"TTOU\000"
.LC22:
	.ascii	"URG\000"
.LC23:
	.ascii	"XCPU\000"
.LC24:
	.ascii	"XFSZ\000"
.LC25:
	.ascii	"VTALRM\000"
.LC26:
	.ascii	"PROF\000"
.LC27:
	.ascii	"WINCH\000"
.LC28:
	.ascii	"POLL\000"
.LC29:
	.ascii	"PWR\000"
.LC30:
	.ascii	"SYS\000"
	.global	__sys_siglist
.LC31:
	.ascii	"Hangup\000"
.LC32:
	.ascii	"Interrupt\000"
.LC33:
	.ascii	"Quit\000"
.LC34:
	.ascii	"Illegal instruction\000"
.LC35:
	.ascii	"Trace/breakpoint trap\000"
.LC36:
	.ascii	"Aborted\000"
.LC37:
	.ascii	"Bus error\000"
.LC38:
	.ascii	"Floating point exception\000"
.LC39:
	.ascii	"Killed\000"
.LC40:
	.ascii	"User defined signal 1\000"
.LC41:
	.ascii	"Segmentation fault\000"
.LC42:
	.ascii	"User defined signal 2\000"
.LC43:
	.ascii	"Broken pipe\000"
.LC44:
	.ascii	"Alarm clock\000"
.LC45:
	.ascii	"Terminated\000"
.LC46:
	.ascii	"Stack fault\000"
.LC47:
	.ascii	"Child exited\000"
.LC48:
	.ascii	"Continued\000"
.LC49:
	.ascii	"Stopped (signal)\000"
.LC50:
	.ascii	"Stopped\000"
.LC51:
	.ascii	"Stopped (tty input)\000"
.LC52:
	.ascii	"Stopped (tty output)\000"
.LC53:
	.ascii	"Urgent I/O condition\000"
.LC54:
	.ascii	"CPU time limit exceeded\000"
.LC55:
	.ascii	"File size limit exceeded\000"
.LC56:
	.ascii	"Virtual timer expired\000"
.LC57:
	.ascii	"Profiling timer expired\000"
.LC58:
	.ascii	"Window changed\000"
.LC59:
	.ascii	"I/O possible\000"
.LC60:
	.ascii	"Power failure\000"
.LC61:
	.ascii	"Bad system call\000"
	.section	.data.rel.ro.local,"aw"
	.align	2
	.type	__sys_sigabbrev, %object
	.size	__sys_sigabbrev, 260
__sys_sigabbrev:
	.space	4
	.word	.LC0
	.word	.LC1
	.word	.LC2
	.word	.LC3
	.word	.LC4
	.word	.LC5
	.word	.LC6
	.word	.LC7
	.word	.LC8
	.word	.LC9
	.word	.LC10
	.word	.LC11
	.word	.LC12
	.word	.LC13
	.word	.LC14
	.word	.LC15
	.word	.LC16
	.word	.LC17
	.word	.LC18
	.word	.LC19
	.word	.LC20
	.word	.LC21
	.word	.LC22
	.word	.LC23
	.word	.LC24
	.word	.LC25
	.word	.LC26
	.word	.LC27
	.word	.LC28
	.word	.LC29
	.word	.LC30
	.space	132
	.type	__sys_siglist, %object
	.size	__sys_siglist, 260
__sys_siglist:
	.space	4
	.word	.LC31
	.word	.LC32
	.word	.LC33
	.word	.LC34
	.word	.LC35
	.word	.LC36
	.word	.LC37
	.word	.LC38
	.word	.LC39
	.word	.LC40
	.word	.LC41
	.word	.LC42
	.word	.LC43
	.word	.LC44
	.word	.LC45
	.word	.LC46
	.word	.LC47
	.word	.LC48
	.word	.LC49
	.word	.LC50
	.word	.LC51
	.word	.LC52
	.word	.LC53
	.word	.LC54
	.word	.LC55
	.word	.LC56
	.word	.LC57
	.word	.LC58
	.word	.LC59
	.word	.LC60
	.word	.LC61
	.space	132
	.ident	"GCC: (Buildroot -ga6cd16e-dirty) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
