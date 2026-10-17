@ FUN_080502d0  entry 0x080502d0  size 42
.thumb
.org 0x502d0
FUN_080502d0:
	push {lr}	@ 000502d0 00b5
.org 0x502d2
	adds r2, r0, #0	@ 000502d2 021c
.org 0x502d4
	ldr r0, [r2, #20]	@ 000502d4 5069
.org 0x502d6
	movs r1, #1	@ 000502d6 0121
.org 0x502d8
	ands r0, r1	@ 000502d8 0840
.org 0x502da
	cmp r0, #0	@ 000502da 0028
.org 0x502dc
	beq.n 0x502f6	@ 000502dc 0bd0
.org 0x502de
	ldr r0, [r2, #12]	@ 000502de d068
.org 0x502e0
	ldr r0, [r0, #44]	@ 000502e0 c06a
.org 0x502e2
	ldr r2, [r2, #44]	@ 000502e2 d26a
.org 0x502e4
	movs r3, #0	@ 000502e4 0023
.org 0x502e6
	ldr r1, [r0, #84]	@ 000502e6 416d
.org 0x502e8
	ldr r0, [r2, #84]	@ 000502e8 506d
.org 0x502ea
	cmp r1, r0	@ 000502ea 8142
.org 0x502ec
	ble.n 0x502f0	@ 000502ec 00dd
.org 0x502ee
	movs r3, #1	@ 000502ee 0123
.org 0x502f0
	adds r0, r2, #0	@ 000502f0 101c
.org 0x502f2
	adds r0, #188	@ 000502f2 bc30
.org 0x502f4
	strb r3, [r0, #0]	@ 000502f4 0370
.org 0x502f6
	pop {r0}	@ 000502f6 01bc
.org 0x502f8
	bx r0	@ 000502f8 0047
