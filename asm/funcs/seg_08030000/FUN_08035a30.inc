@ FUN_08035a30  entry 0x08035a30  size 18
.thumb
.org 0x35a30
FUN_08035a30:
	push {lr}	@ 00035a30 00b5
.org 0x35a32
	movs r1, #0	@ 00035a32 0021
.org 0x35a34
	strb r1, [r0, #13]	@ 00035a34 4173
.org 0x35a36
	strb r1, [r0, #14]	@ 00035a36 8173
.org 0x35a38
	strb r1, [r0, #15]	@ 00035a38 c173
.org 0x35a3a
	bl 0x33e0c	@ 00035a3a fef7e7f9
.org 0x35a3e
	pop {r0}	@ 00035a3e 01bc
.org 0x35a40
	bx r0	@ 00035a40 0047
