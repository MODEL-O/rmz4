@ FUN_08035a58  entry 0x08035a58  size 18
.thumb
.org 0x35a58
FUN_08035a58:
	push {lr}	@ 00035a58 00b5
.org 0x35a5a
	movs r1, #0	@ 00035a5a 0021
.org 0x35a5c
	strb r1, [r0, #13]	@ 00035a5c 4173
.org 0x35a5e
	strb r1, [r0, #14]	@ 00035a5e 8173
.org 0x35a60
	strb r1, [r0, #15]	@ 00035a60 c173
.org 0x35a62
	bl 0x3456c	@ 00035a62 fef783fd
.org 0x35a66
	pop {r0}	@ 00035a66 01bc
.org 0x35a68
	bx r0	@ 00035a68 0047
