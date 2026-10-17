@ FUN_080476b0  entry 0x080476b0  size 42
.thumb
.org 0x476b0
FUN_080476b0:
	push {lr}	@ 000476b0 00b5
.org 0x476b2
	adds r2, r0, #0	@ 000476b2 021c
.org 0x476b4
	ldr r0, [r2, #20]	@ 000476b4 5069
.org 0x476b6
	movs r1, #1	@ 000476b6 0121
.org 0x476b8
	ands r0, r1	@ 000476b8 0840
.org 0x476ba
	cmp r0, #0	@ 000476ba 0028
.org 0x476bc
	beq.n 0x476d6	@ 000476bc 0bd0
.org 0x476be
	ldr r0, [r2, #12]	@ 000476be d068
.org 0x476c0
	ldr r0, [r0, #44]	@ 000476c0 c06a
.org 0x476c2
	ldr r2, [r2, #44]	@ 000476c2 d26a
.org 0x476c4
	movs r3, #0	@ 000476c4 0023
.org 0x476c6
	ldr r1, [r0, #84]	@ 000476c6 416d
.org 0x476c8
	ldr r0, [r2, #84]	@ 000476c8 506d
.org 0x476ca
	cmp r1, r0	@ 000476ca 8142
.org 0x476cc
	ble.n 0x476d0	@ 000476cc 00dd
.org 0x476ce
	movs r3, #1	@ 000476ce 0123
.org 0x476d0
	adds r0, r2, #0	@ 000476d0 101c
.org 0x476d2
	adds r0, #188	@ 000476d2 bc30
.org 0x476d4
	strb r3, [r0, #0]	@ 000476d4 0370
.org 0x476d6
	pop {r0}	@ 000476d6 01bc
.org 0x476d8
	bx r0	@ 000476d8 0047
