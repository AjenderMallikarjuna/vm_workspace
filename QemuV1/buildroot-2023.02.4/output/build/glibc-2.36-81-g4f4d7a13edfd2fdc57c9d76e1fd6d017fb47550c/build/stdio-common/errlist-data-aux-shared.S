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
	.file	"errlist-data-gen.c"
	.text
	.syntax divided
	memmove = __GI_memmove
	memset = __GI_memset
	memcpy = __GI_memcpy
	.symver __GLIBC_2_4_sys_nerr,sys_nerr@GLIBC_2.4
	.symver __GLIBC_2_4__sys_nerr,_sys_nerr@GLIBC_2.4
	.symver __GLIBC_2_12_sys_nerr,sys_nerr@GLIBC_2.12
	.symver __GLIBC_2_12__sys_nerr,_sys_nerr@GLIBC_2.12
	.arm
	.syntax unified
	.global	__GLIBC_2_12_sys_nerr
	.section	.rodata.cst4,"aM",%progbits,4
	.align	2
	.type	__GLIBC_2_12_sys_nerr, %object
	.size	__GLIBC_2_12_sys_nerr, 4
__GLIBC_2_12_sys_nerr:
	.word	135
	.global	__GLIBC_2_12__sys_nerr
	.set	__GLIBC_2_12__sys_nerr,__GLIBC_2_12_sys_nerr
	.global	__GLIBC_2_4_sys_nerr
	.align	2
	.type	__GLIBC_2_4_sys_nerr, %object
	.size	__GLIBC_2_4_sys_nerr, 4
__GLIBC_2_4_sys_nerr:
	.word	132
	.global	__GLIBC_2_4__sys_nerr
	.set	__GLIBC_2_4__sys_nerr,__GLIBC_2_4_sys_nerr
	.hidden	_sys_errlist_internal_len
	.global	_sys_errlist_internal_len
	.align	2
	.type	_sys_errlist_internal_len, %object
	.size	_sys_errlist_internal_len, 4
_sys_errlist_internal_len:
	.word	134
	.hidden	_sys_errlist_internal
	.global	_sys_errlist_internal
	.section	.rodata.str1.1,"aMS",%progbits,1
.LC0:
	.ascii	"Success\000"
.LC1:
	.ascii	"Operation not permitted\000"
.LC2:
	.ascii	"No such file or directory\000"
.LC3:
	.ascii	"No such process\000"
.LC4:
	.ascii	"Interrupted system call\000"
.LC5:
	.ascii	"Input/output error\000"
.LC6:
	.ascii	"No such device or address\000"
.LC7:
	.ascii	"Argument list too long\000"
.LC8:
	.ascii	"Exec format error\000"
.LC9:
	.ascii	"Bad file descriptor\000"
.LC10:
	.ascii	"No child processes\000"
.LC11:
	.ascii	"Resource temporarily unavailable\000"
.LC12:
	.ascii	"Cannot allocate memory\000"
.LC13:
	.ascii	"Permission denied\000"
.LC14:
	.ascii	"Bad address\000"
.LC15:
	.ascii	"Block device required\000"
.LC16:
	.ascii	"Device or resource busy\000"
.LC17:
	.ascii	"File exists\000"
.LC18:
	.ascii	"Invalid cross-device link\000"
.LC19:
	.ascii	"No such device\000"
.LC20:
	.ascii	"Not a directory\000"
.LC21:
	.ascii	"Is a directory\000"
.LC22:
	.ascii	"Invalid argument\000"
.LC23:
	.ascii	"Too many open files in system\000"
.LC24:
	.ascii	"Too many open files\000"
.LC25:
	.ascii	"Inappropriate ioctl for device\000"
.LC26:
	.ascii	"Text file busy\000"
.LC27:
	.ascii	"File too large\000"
.LC28:
	.ascii	"No space left on device\000"
.LC29:
	.ascii	"Illegal seek\000"
.LC30:
	.ascii	"Read-only file system\000"
.LC31:
	.ascii	"Too many links\000"
.LC32:
	.ascii	"Broken pipe\000"
.LC33:
	.ascii	"Numerical argument out of domain\000"
.LC34:
	.ascii	"Numerical result out of range\000"
.LC35:
	.ascii	"Resource deadlock avoided\000"
.LC36:
	.ascii	"File name too long\000"
.LC37:
	.ascii	"No locks available\000"
.LC38:
	.ascii	"Function not implemented\000"
.LC39:
	.ascii	"Directory not empty\000"
.LC40:
	.ascii	"Too many levels of symbolic links\000"
.LC41:
	.ascii	"No message of desired type\000"
.LC42:
	.ascii	"Identifier removed\000"
.LC43:
	.ascii	"Channel number out of range\000"
.LC44:
	.ascii	"Level 2 not synchronized\000"
.LC45:
	.ascii	"Level 3 halted\000"
.LC46:
	.ascii	"Level 3 reset\000"
.LC47:
	.ascii	"Link number out of range\000"
.LC48:
	.ascii	"Protocol driver not attached\000"
.LC49:
	.ascii	"No CSI structure available\000"
.LC50:
	.ascii	"Level 2 halted\000"
.LC51:
	.ascii	"Invalid exchange\000"
.LC52:
	.ascii	"Invalid request descriptor\000"
.LC53:
	.ascii	"Exchange full\000"
.LC54:
	.ascii	"No anode\000"
.LC55:
	.ascii	"Invalid request code\000"
.LC56:
	.ascii	"Invalid slot\000"
.LC57:
	.ascii	"Bad font file format\000"
.LC58:
	.ascii	"Device not a stream\000"
.LC59:
	.ascii	"No data available\000"
.LC60:
	.ascii	"Timer expired\000"
.LC61:
	.ascii	"Out of streams resources\000"
.LC62:
	.ascii	"Machine is not on the network\000"
.LC63:
	.ascii	"Package not installed\000"
.LC64:
	.ascii	"Object is remote\000"
.LC65:
	.ascii	"Link has been severed\000"
.LC66:
	.ascii	"Advertise error\000"
.LC67:
	.ascii	"Srmount error\000"
.LC68:
	.ascii	"Communication error on send\000"
.LC69:
	.ascii	"Protocol error\000"
.LC70:
	.ascii	"Multihop attempted\000"
.LC71:
	.ascii	"RFS specific error\000"
.LC72:
	.ascii	"Bad message\000"
.LC73:
	.ascii	"Value too large for defined data type\000"
.LC74:
	.ascii	"Name not unique on network\000"
.LC75:
	.ascii	"File descriptor in bad state\000"
.LC76:
	.ascii	"Remote address changed\000"
.LC77:
	.ascii	"Can not access a needed shared library\000"
.LC78:
	.ascii	"Accessing a corrupted shared library\000"
.LC79:
	.ascii	".lib section in a.out corrupted\000"
.LC80:
	.ascii	"Attempting to link in too many shared libraries\000"
.LC81:
	.ascii	"Cannot exec a shared library directly\000"
.LC82:
	.ascii	"Invalid or incomplete multibyte or wide character\000"
.LC83:
	.ascii	"Interrupted system call should be restarted\000"
.LC84:
	.ascii	"Streams pipe error\000"
.LC85:
	.ascii	"Too many users\000"
.LC86:
	.ascii	"Socket operation on non-socket\000"
.LC87:
	.ascii	"Destination address required\000"
.LC88:
	.ascii	"Message too long\000"
.LC89:
	.ascii	"Protocol wrong type for socket\000"
.LC90:
	.ascii	"Protocol not available\000"
.LC91:
	.ascii	"Protocol not supported\000"
.LC92:
	.ascii	"Socket type not supported\000"
.LC93:
	.ascii	"Operation not supported\000"
.LC94:
	.ascii	"Protocol family not supported\000"
.LC95:
	.ascii	"Address family not supported by protocol\000"
.LC96:
	.ascii	"Address already in use\000"
.LC97:
	.ascii	"Cannot assign requested address\000"
.LC98:
	.ascii	"Network is down\000"
.LC99:
	.ascii	"Network is unreachable\000"
.LC100:
	.ascii	"Network dropped connection on reset\000"
.LC101:
	.ascii	"Software caused connection abort\000"
.LC102:
	.ascii	"Connection reset by peer\000"
.LC103:
	.ascii	"No buffer space available\000"
.LC104:
	.ascii	"Transport endpoint is already connected\000"
.LC105:
	.ascii	"Transport endpoint is not connected\000"
.LC106:
	.ascii	"Cannot send after transport endpoint shutdown\000"
.LC107:
	.ascii	"Too many references: cannot splice\000"
.LC108:
	.ascii	"Connection timed out\000"
.LC109:
	.ascii	"Connection refused\000"
.LC110:
	.ascii	"Host is down\000"
.LC111:
	.ascii	"No route to host\000"
.LC112:
	.ascii	"Operation already in progress\000"
.LC113:
	.ascii	"Operation now in progress\000"
.LC114:
	.ascii	"Stale file handle\000"
.LC115:
	.ascii	"Structure needs cleaning\000"
.LC116:
	.ascii	"Not a XENIX named type file\000"
.LC117:
	.ascii	"No XENIX semaphores available\000"
.LC118:
	.ascii	"Is a named type file\000"
.LC119:
	.ascii	"Remote I/O error\000"
.LC120:
	.ascii	"Disk quota exceeded\000"
.LC121:
	.ascii	"No medium found\000"
.LC122:
	.ascii	"Wrong medium type\000"
.LC123:
	.ascii	"Operation canceled\000"
.LC124:
	.ascii	"Required key not available\000"
.LC125:
	.ascii	"Key has expired\000"
.LC126:
	.ascii	"Key has been revoked\000"
.LC127:
	.ascii	"Key was rejected by service\000"
.LC128:
	.ascii	"Owner died\000"
.LC129:
	.ascii	"State not recoverable\000"
.LC130:
	.ascii	"Operation not possible due to RF-kill\000"
.LC131:
	.ascii	"Memory page has hardware error\000"
	.section	.data.rel.ro.local,"aw"
	.align	2
	.type	_sys_errlist_internal, %object
	.size	_sys_errlist_internal, 536
_sys_errlist_internal:
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
	.space	4
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
	.space	4
	.word	.LC57
	.word	.LC58
	.word	.LC59
	.word	.LC60
	.word	.LC61
	.word	.LC62
	.word	.LC63
	.word	.LC64
	.word	.LC65
	.word	.LC66
	.word	.LC67
	.word	.LC68
	.word	.LC69
	.word	.LC70
	.word	.LC71
	.word	.LC72
	.word	.LC73
	.word	.LC74
	.word	.LC75
	.word	.LC76
	.word	.LC77
	.word	.LC78
	.word	.LC79
	.word	.LC80
	.word	.LC81
	.word	.LC82
	.word	.LC83
	.word	.LC84
	.word	.LC85
	.word	.LC86
	.word	.LC87
	.word	.LC88
	.word	.LC89
	.word	.LC90
	.word	.LC91
	.word	.LC92
	.word	.LC93
	.word	.LC94
	.word	.LC95
	.word	.LC96
	.word	.LC97
	.word	.LC98
	.word	.LC99
	.word	.LC100
	.word	.LC101
	.word	.LC102
	.word	.LC103
	.word	.LC104
	.word	.LC105
	.word	.LC106
	.word	.LC107
	.word	.LC108
	.word	.LC109
	.word	.LC110
	.word	.LC111
	.word	.LC112
	.word	.LC113
	.word	.LC114
	.word	.LC115
	.word	.LC116
	.word	.LC117
	.word	.LC118
	.word	.LC119
	.word	.LC120
	.word	.LC121
	.word	.LC122
	.word	.LC123
	.word	.LC124
	.word	.LC125
	.word	.LC126
	.word	.LC127
	.word	.LC128
	.word	.LC129
	.word	.LC130
	.word	.LC131
	.ident	"GCC: (Buildroot -ga6cd16e-dirty) 11.4.0"
	.section	.note.GNU-stack,"",%progbits
