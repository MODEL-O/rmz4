@ FUN_0810e4f8  entry 0x0810e4f8  size 26
.thumb
.org 0x10e4f8
FUN_0810e4f8:
	push {lr}	@ 0010e4f8 00b5
.org 0x10e4fa
	lsls r0, r0, #16	@ 0010e4fa 0004
.org 0x10e4fc
	lsrs r0, r0, #16	@ 0010e4fc 000c
.org 0x10e4fe
	movs r1, #1	@ 0010e4fe 0121
.org 0x10e500
	bl 0x10e528	@ 0010e500 00f012f8
.org 0x10e504
	ldr r2, [pc, #12]	@ 0010e504 034a
.org 0x10e506
	ldrh r1, [r2, #0]	@ 0010e506 1188
.org 0x10e508
	movs r0, #1	@ 0010e508 0120
.org 0x10e50a
	orrs r0, r1	@ 0010e50a 0843
.org 0x10e50c
	strh r0, [r2, #0]	@ 0010e50c 1080
.org 0x10e50e
	pop {r0}	@ 0010e50e 01bc
.org 0x10e510
	bx r0	@ 0010e510 0047
