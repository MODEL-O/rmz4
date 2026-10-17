@ FUN_0804e8a0  entry 0x0804e8a0  size 42
.thumb
.org 0x4e8a0
FUN_0804e8a0:
	push {lr}	@ 0004e8a0 00b5
.org 0x4e8a2
	adds r2, r0, #0	@ 0004e8a2 021c
.org 0x4e8a4
	ldr r0, [r2, #20]	@ 0004e8a4 5069
.org 0x4e8a6
	movs r1, #1	@ 0004e8a6 0121
.org 0x4e8a8
	ands r0, r1	@ 0004e8a8 0840
.org 0x4e8aa
	cmp r0, #0	@ 0004e8aa 0028
.org 0x4e8ac
	beq.n 0x4e8c6	@ 0004e8ac 0bd0
.org 0x4e8ae
	ldr r0, [r2, #12]	@ 0004e8ae d068
.org 0x4e8b0
	ldr r0, [r0, #44]	@ 0004e8b0 c06a
.org 0x4e8b2
	ldr r2, [r2, #44]	@ 0004e8b2 d26a
.org 0x4e8b4
	movs r3, #0	@ 0004e8b4 0023
.org 0x4e8b6
	ldr r1, [r0, #84]	@ 0004e8b6 416d
.org 0x4e8b8
	ldr r0, [r2, #84]	@ 0004e8b8 506d
.org 0x4e8ba
	cmp r1, r0	@ 0004e8ba 8142
.org 0x4e8bc
	ble.n 0x4e8c0	@ 0004e8bc 00dd
.org 0x4e8be
	movs r3, #1	@ 0004e8be 0123
.org 0x4e8c0
	adds r0, r2, #0	@ 0004e8c0 101c
.org 0x4e8c2
	adds r0, #188	@ 0004e8c2 bc30
.org 0x4e8c4
	strb r3, [r0, #0]	@ 0004e8c4 0370
.org 0x4e8c6
	pop {r0}	@ 0004e8c6 01bc
.org 0x4e8c8
	bx r0	@ 0004e8c8 0047
