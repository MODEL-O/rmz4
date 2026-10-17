@ FUN_0806d0a4  entry 0x0806d0a4  size 50
.thumb
.org 0x6d0a4
FUN_0806d0a4:
	push {r4, lr}	@ 0006d0a4 10b5
.org 0x6d0a6
	adds r4, r0, #0	@ 0006d0a6 041c
.org 0x6d0a8
	ldr r0, [r4, #20]	@ 0006d0a8 6069
.org 0x6d0aa
	movs r1, #1	@ 0006d0aa 0121
.org 0x6d0ac
	ands r0, r1	@ 0006d0ac 0840
.org 0x6d0ae
	cmp r0, #0	@ 0006d0ae 0028
.org 0x6d0b0
	beq.n 0x6d0d0	@ 0006d0b0 0ed0
.org 0x6d0b2
	movs r0, #71	@ 0006d0b2 4720
.org 0x6d0b4
	bl 0x6984	@ 0006d0b4 99f766fc
.org 0x6d0b8
	ldr r0, [r4, #12]	@ 0006d0b8 e068
.org 0x6d0ba
	ldr r0, [r0, #44]	@ 0006d0ba c06a
.org 0x6d0bc
	ldr r2, [r4, #44]	@ 0006d0bc e26a
.org 0x6d0be
	movs r3, #0	@ 0006d0be 0023
.org 0x6d0c0
	ldr r1, [r0, #84]	@ 0006d0c0 416d
.org 0x6d0c2
	ldr r0, [r2, #84]	@ 0006d0c2 506d
.org 0x6d0c4
	cmp r1, r0	@ 0006d0c4 8142
.org 0x6d0c6
	ble.n 0x6d0ca	@ 0006d0c6 00dd
.org 0x6d0c8
	movs r3, #1	@ 0006d0c8 0123
.org 0x6d0ca
	adds r0, r2, #0	@ 0006d0ca 101c
.org 0x6d0cc
	adds r0, #219	@ 0006d0cc db30
.org 0x6d0ce
	strb r3, [r0, #0]	@ 0006d0ce 0370
.org 0x6d0d0
	pop {r4}	@ 0006d0d0 10bc
.org 0x6d0d2
	pop {r0}	@ 0006d0d2 01bc
.org 0x6d0d4
	bx r0	@ 0006d0d4 0047
