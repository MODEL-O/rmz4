@ FUN_080f3d04  entry 0x080f3d04  size 56
.thumb
.org 0xf3d04
FUN_080f3d04:
	push {lr}	@ 000f3d04 00b5
.org 0xf3d06
	ldrb r2, [r0, #10]	@ 000f3d06 827a
.org 0xf3d08
	movs r1, #2	@ 000f3d08 0221
.org 0xf3d0a
	orrs r1, r2	@ 000f3d0a 1143
.org 0xf3d0c
	strb r1, [r0, #10]	@ 000f3d0c 8172
.org 0xf3d0e
	ldrb r2, [r0, #11]	@ 000f3d0e c27a
.org 0xf3d10
	movs r1, #8	@ 000f3d10 0821
.org 0xf3d12
	orrs r1, r2	@ 000f3d12 1143
.org 0xf3d14
	strb r1, [r0, #11]	@ 000f3d14 c172
.org 0xf3d16
	ldrb r1, [r0, #16]	@ 000f3d16 017c
.org 0xf3d18
	lsls r1, r1, #3	@ 000f3d18 c900
.org 0xf3d1a
	ldr r2, [pc, #32]	@ 000f3d1a 084a
.org 0xf3d1c
	adds r1, r1, r2	@ 000f3d1c 8918
.org 0xf3d1e
	str r1, [r0, #48]	@ 000f3d1e 0163
.org 0xf3d20
	movs r3, #1	@ 000f3d20 0123
.org 0xf3d22
	strh r3, [r0, #38]	@ 000f3d22 c384
.org 0xf3d24
	ldr r2, [pc, #24]	@ 000f3d24 064a
.org 0xf3d26
	ldrb r1, [r0, #9]	@ 000f3d26 417a
.org 0xf3d28
	lsls r1, r1, #2	@ 000f3d28 8900
.org 0xf3d2a
	adds r1, r1, r2	@ 000f3d2a 8918
.org 0xf3d2c
	str r3, [r0, #12]	@ 000f3d2c c360
.org 0xf3d2e
	ldr r1, [r1, #0]	@ 000f3d2e 0968
.org 0xf3d30
	ldr r1, [r1, #4]	@ 000f3d30 4968
.org 0xf3d32
	str r1, [r0, #20]	@ 000f3d32 4161
.org 0xf3d34
	bl 0xf3d44	@ 000f3d34 00f006f8
.org 0xf3d38
	pop {r0}	@ 000f3d38 01bc
.org 0xf3d3a
	bx r0	@ 000f3d3a 0047
