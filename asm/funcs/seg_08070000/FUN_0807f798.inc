@ FUN_0807f798  entry 0x0807f798  size 50
.thumb
.org 0x7f798
FUN_0807f798:
	push {r4, lr}	@ 0007f798 10b5
.org 0x7f79a
	adds r4, r0, #0	@ 0007f79a 041c
.org 0x7f79c
	ldr r0, [r4, #20]	@ 0007f79c 6069
.org 0x7f79e
	movs r1, #1	@ 0007f79e 0121
.org 0x7f7a0
	ands r0, r1	@ 0007f7a0 0840
.org 0x7f7a2
	cmp r0, #0	@ 0007f7a2 0028
.org 0x7f7a4
	beq.n 0x7f7c4	@ 0007f7a4 0ed0
.org 0x7f7a6
	movs r0, #77	@ 0007f7a6 4d20
.org 0x7f7a8
	bl 0x6984	@ 0007f7a8 87f7ecf8
.org 0x7f7ac
	ldr r0, [r4, #12]	@ 0007f7ac e068
.org 0x7f7ae
	ldr r1, [r0, #44]	@ 0007f7ae c16a
.org 0x7f7b0
	ldr r0, [r4, #44]	@ 0007f7b0 e06a
.org 0x7f7b2
	adds r2, r0, #0	@ 0007f7b2 021c
.org 0x7f7b4
	adds r2, #180	@ 0007f7b4 b432
.org 0x7f7b6
	movs r3, #0	@ 0007f7b6 0023
.org 0x7f7b8
	ldr r1, [r1, #84]	@ 0007f7b8 496d
.org 0x7f7ba
	ldr r0, [r0, #84]	@ 0007f7ba 406d
.org 0x7f7bc
	cmp r1, r0	@ 0007f7bc 8142
.org 0x7f7be
	ble.n 0x7f7c2	@ 0007f7be 00dd
.org 0x7f7c0
	movs r3, #1	@ 0007f7c0 0123
.org 0x7f7c2
	strb r3, [r2, #30]	@ 0007f7c2 9377
.org 0x7f7c4
	pop {r4}	@ 0007f7c4 10bc
.org 0x7f7c6
	pop {r0}	@ 0007f7c6 01bc
.org 0x7f7c8
	bx r0	@ 0007f7c8 0047
