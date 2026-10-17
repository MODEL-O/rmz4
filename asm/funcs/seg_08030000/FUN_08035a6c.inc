@ FUN_08035a6c  entry 0x08035a6c  size 18
.thumb
.org 0x35a6c
FUN_08035a6c:
	push {lr}	@ 00035a6c 00b5
.org 0x35a6e
	movs r1, #0	@ 00035a6e 0021
.org 0x35a70
	strb r1, [r0, #13]	@ 00035a70 4173
.org 0x35a72
	strb r1, [r0, #14]	@ 00035a72 8173
.org 0x35a74
	strb r1, [r0, #15]	@ 00035a74 c173
.org 0x35a76
	bl 0x3461c	@ 00035a76 fef7d1fd
.org 0x35a7a
	pop {r0}	@ 00035a7a 01bc
.org 0x35a7c
	bx r0	@ 00035a7c 0047
