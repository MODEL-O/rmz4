@ FUN_0803f9b0  entry 0x0803f9b0  size 42
.thumb
.org 0x3f9b0
FUN_0803f9b0:
	push {lr}	@ 0003f9b0 00b5
.org 0x3f9b2
	adds r2, r0, #0	@ 0003f9b2 021c
.org 0x3f9b4
	ldr r0, [r2, #20]	@ 0003f9b4 5069
.org 0x3f9b6
	movs r1, #1	@ 0003f9b6 0121
.org 0x3f9b8
	ands r0, r1	@ 0003f9b8 0840
.org 0x3f9ba
	cmp r0, #0	@ 0003f9ba 0028
.org 0x3f9bc
	beq.n 0x3f9d6	@ 0003f9bc 0bd0
.org 0x3f9be
	ldr r0, [r2, #12]	@ 0003f9be d068
.org 0x3f9c0
	ldr r0, [r0, #44]	@ 0003f9c0 c06a
.org 0x3f9c2
	ldr r2, [r2, #44]	@ 0003f9c2 d26a
.org 0x3f9c4
	movs r3, #0	@ 0003f9c4 0023
.org 0x3f9c6
	ldr r1, [r0, #84]	@ 0003f9c6 416d
.org 0x3f9c8
	ldr r0, [r2, #84]	@ 0003f9c8 506d
.org 0x3f9ca
	cmp r1, r0	@ 0003f9ca 8142
.org 0x3f9cc
	ble.n 0x3f9d0	@ 0003f9cc 00dd
.org 0x3f9ce
	movs r3, #1	@ 0003f9ce 0123
.org 0x3f9d0
	adds r0, r2, #0	@ 0003f9d0 101c
.org 0x3f9d2
	adds r0, #188	@ 0003f9d2 bc30
.org 0x3f9d4
	strb r3, [r0, #0]	@ 0003f9d4 0370
.org 0x3f9d6
	pop {r0}	@ 0003f9d6 01bc
.org 0x3f9d8
	bx r0	@ 0003f9d8 0047
