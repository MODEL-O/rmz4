@ FUN_0809d908  entry 0x0809d908  size 10
.thumb
.org 0x9d908
FUN_0809d908:
	push {lr}	@ 0009d908 00b5
.org 0x9d90a
	bl 0x1cff0	@ 0009d90a 7ff771fb
.org 0x9d90e
	pop {r0}	@ 0009d90e 01bc
.org 0x9d910
	bx r0	@ 0009d910 0047
