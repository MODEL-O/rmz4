@ FUN_080443c0  entry 0x080443c0  size 42
.thumb
.org 0x443c0
FUN_080443c0:
	push {lr}	@ 000443c0 00b5
.org 0x443c2
	adds r2, r0, #0	@ 000443c2 021c
.org 0x443c4
	ldr r0, [r2, #20]	@ 000443c4 5069
.org 0x443c6
	movs r1, #1	@ 000443c6 0121
.org 0x443c8
	ands r0, r1	@ 000443c8 0840
.org 0x443ca
	cmp r0, #0	@ 000443ca 0028
.org 0x443cc
	beq.n 0x443e6	@ 000443cc 0bd0
.org 0x443ce
	ldr r0, [r2, #12]	@ 000443ce d068
.org 0x443d0
	ldr r0, [r0, #44]	@ 000443d0 c06a
.org 0x443d2
	ldr r2, [r2, #44]	@ 000443d2 d26a
.org 0x443d4
	movs r3, #0	@ 000443d4 0023
.org 0x443d6
	ldr r1, [r0, #84]	@ 000443d6 416d
.org 0x443d8
	ldr r0, [r2, #84]	@ 000443d8 506d
.org 0x443da
	cmp r1, r0	@ 000443da 8142
.org 0x443dc
	ble.n 0x443e0	@ 000443dc 00dd
.org 0x443de
	movs r3, #1	@ 000443de 0123
.org 0x443e0
	adds r0, r2, #0	@ 000443e0 101c
.org 0x443e2
	adds r0, #188	@ 000443e2 bc30
.org 0x443e4
	strb r3, [r0, #0]	@ 000443e4 0370
.org 0x443e6
	pop {r0}	@ 000443e6 01bc
.org 0x443e8
	bx r0	@ 000443e8 0047
