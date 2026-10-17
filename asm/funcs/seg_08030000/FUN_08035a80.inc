@ FUN_08035a80  entry 0x08035a80  size 18
.thumb
.org 0x35a80
FUN_08035a80:
	push {lr}	@ 00035a80 00b5
.org 0x35a82
	movs r1, #0	@ 00035a82 0021
.org 0x35a84
	strb r1, [r0, #13]	@ 00035a84 4173
.org 0x35a86
	strb r1, [r0, #14]	@ 00035a86 8173
.org 0x35a88
	strb r1, [r0, #15]	@ 00035a88 c173
.org 0x35a8a
	bl 0x348f8	@ 00035a8a fef735ff
.org 0x35a8e
	pop {r0}	@ 00035a8e 01bc
.org 0x35a90
	bx r0	@ 00035a90 0047
