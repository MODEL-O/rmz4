@ FUN_08034a80  entry 0x08034a80  size 20
.thumb
.org 0x34a80
FUN_08034a80:
	push {lr}	@ 00034a80 00b5
.org 0x34a82
	movs r1, #128	@ 00034a82 8021
.org 0x34a84
	lsls r1, r1, #1	@ 00034a84 4900
.org 0x34a86
	adds r2, r0, r1	@ 00034a86 4218
.org 0x34a88
	movs r1, #1	@ 00034a88 0121
.org 0x34a8a
	strb r1, [r2, #0]	@ 00034a8a 1170
.org 0x34a8c
	bl 0x34a94	@ 00034a8c 00f002f8
.org 0x34a90
	pop {r0}	@ 00034a90 01bc
.org 0x34a92
	bx r0	@ 00034a92 0047
