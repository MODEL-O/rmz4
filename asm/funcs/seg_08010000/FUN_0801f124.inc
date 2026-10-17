@ FUN_0801f124  entry 0x0801f124  size 16
.thumb
.org 0x1f124
FUN_0801f124:
	push {lr}	@ 0001f124 00b5
.org 0x1f126
	lsls r0, r0, #24	@ 0001f126 0006
.org 0x1f128
	lsrs r0, r0, #24	@ 0001f128 000e
.org 0x1f12a
	movs r1, #0	@ 0001f12a 0021
.org 0x1f12c
	bl 0x1f134	@ 0001f12c 00f002f8
.org 0x1f130
	pop {r0}	@ 0001f130 01bc
.org 0x1f132
	bx r0	@ 0001f132 0047
