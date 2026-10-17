@ FUN_080d48a4  entry 0x080d48a4  size 66
.thumb
.org 0xd48a4
FUN_080d48a4:
	push {r4, lr}	@ 000d48a4 10b5
.org 0xd48a6
	adds r4, r0, #0	@ 000d48a6 041c
.org 0xd48a8
	adds r0, #52	@ 000d48a8 3430
.org 0xd48aa
	ldr r1, [pc, #60]	@ 000d48aa 0f49
.org 0xd48ac
	bl 0x2c94	@ 000d48ac 2ef7f2f9
.org 0xd48b0
	str r4, [r4, #60]	@ 000d48b0 e463
.org 0xd48b2
	ldrb r1, [r4, #10]	@ 000d48b2 a17a
.org 0xd48b4
	movs r0, #247	@ 000d48b4 f720
.org 0xd48b6
	ands r0, r1	@ 000d48b6 0840
.org 0xd48b8
	movs r2, #0	@ 000d48b8 0022
.org 0xd48ba
	movs r1, #1	@ 000d48ba 0121
.org 0xd48bc
	orrs r0, r1	@ 000d48bc 0843
.org 0xd48be
	movs r1, #2	@ 000d48be 0221
.org 0xd48c0
	orrs r0, r1	@ 000d48c0 0843
.org 0xd48c2
	strb r0, [r4, #10]	@ 000d48c2 a072
.org 0xd48c4
	strb r2, [r4, #18]	@ 000d48c4 a274
.org 0xd48c6
	ldr r1, [pc, #36]	@ 000d48c6 0949
.org 0xd48c8
	ldrb r0, [r4, #9]	@ 000d48c8 607a
.org 0xd48ca
	lsls r0, r0, #2	@ 000d48ca 8000
.org 0xd48cc
	adds r0, r0, r1	@ 000d48cc 4018
.org 0xd48ce
	movs r1, #1	@ 000d48ce 0121
.org 0xd48d0
	str r1, [r4, #12]	@ 000d48d0 e160
.org 0xd48d2
	ldr r0, [r0, #0]	@ 000d48d2 0068
.org 0xd48d4
	ldr r0, [r0, #4]	@ 000d48d4 4068
.org 0xd48d6
	str r0, [r4, #20]	@ 000d48d6 6061
.org 0xd48d8
	strb r2, [r4, #14]	@ 000d48d8 a273
.org 0xd48da
	adds r0, r4, #0	@ 000d48da 201c
.org 0xd48dc
	bl 0xd3f20	@ 000d48dc fff720fb
.org 0xd48e0
	pop {r4}	@ 000d48e0 10bc
.org 0xd48e2
	pop {r0}	@ 000d48e2 01bc
.org 0xd48e4
	bx r0	@ 000d48e4 0047
