@ FUN_08086454  entry 0x08086454  size 112
.thumb
.org 0x86454
FUN_08086454:
	push {r4, lr}	@ 00086454 10b5
.org 0x86456
	adds r4, r0, #0	@ 00086456 041c
.org 0x86458
	ldrb r0, [r4, #15]	@ 00086458 e07b
.org 0x8645a
	cmp r0, #0	@ 0008645a 0028
.org 0x8645c
	bne.n 0x8647a	@ 0008645c 0dd1
.org 0x8645e
	adds r0, r4, #0	@ 0008645e 201c
.org 0x86460
	adds r0, #116	@ 00086460 7430
.org 0x86462
	ldr r1, [pc, #60]	@ 00086462 0f49
.org 0x86464
	bl 0x5784	@ 00086464 7ff78ef9
.org 0x86468
	adds r0, r4, #0	@ 00086468 201c
.org 0x8646a
	movs r1, #1	@ 0008646a 0121
.org 0x8646c
	bl 0x86a14	@ 0008646c 00f0d2fa
.org 0x86470
	movs r0, #16	@ 00086470 1020
.org 0x86472
	strb r0, [r4, #18]	@ 00086472 a074
.org 0x86474
	ldrb r0, [r4, #15]	@ 00086474 e07b
.org 0x86476
	adds r0, #1	@ 00086476 0130
.org 0x86478
	strb r0, [r4, #15]	@ 00086478 e073
.org 0x8647a
	adds r0, r4, #0	@ 0008647a 201c
.org 0x8647c
	bl 0x86a48	@ 0008647c 00f0e4fa
.org 0x86480
	adds r3, r0, #0	@ 00086480 031c
.org 0x86482
	ldrb r0, [r4, #18]	@ 00086482 a07c
.org 0x86484
	cmp r0, #0	@ 00086484 0028
.org 0x86486
	beq.n 0x8648c	@ 00086486 01d0
.org 0x86488
	subs r0, #1	@ 00086488 0138
.org 0x8648a
	strb r0, [r4, #18]	@ 0008648a a074
.org 0x8648c
	ldrb r1, [r4, #18]	@ 0008648c a17c
.org 0x8648e
	movs r0, #1	@ 0008648e 0120
.org 0x86490
	ands r0, r1	@ 00086490 0840
.org 0x86492
	adds r2, r1, #0	@ 00086492 0a1c
.org 0x86494
	cmp r0, #0	@ 00086494 0028
.org 0x86496
	beq.n 0x864a4	@ 00086496 05d0
.org 0x86498
	ldrb r1, [r4, #10]	@ 00086498 a17a
.org 0x8649a
	movs r0, #254	@ 0008649a fe20
.org 0x8649c
	ands r0, r1	@ 0008649c 0840
.org 0x8649e
	b.n 0x864aa	@ 0008649e 04e0
.org 0x864a0
	.byte 0xdc,0xed,0x85,0x08	@ 000864a0 data
.org 0x864a4
	ldrb r0, [r4, #10]	@ 000864a4 a07a
.org 0x864a6
	movs r1, #1	@ 000864a6 0121
.org 0x864a8
	orrs r0, r1	@ 000864a8 0843
.org 0x864aa
	strb r0, [r4, #10]	@ 000864aa a072
.org 0x864ac
	lsls r0, r2, #24	@ 000864ac 1006
.org 0x864ae
	lsrs r1, r0, #24	@ 000864ae 010e
.org 0x864b0
	cmp r1, #0	@ 000864b0 0029
.org 0x864b2
	bne.n 0x864c2	@ 000864b2 06d1
.org 0x864b4
	movs r0, #1	@ 000864b4 0120
.org 0x864b6
	negs r0, r0	@ 000864b6 4042
.org 0x864b8
	cmp r3, r0	@ 000864b8 8342
.org 0x864ba
	bne.n 0x864c2	@ 000864ba 02d1
.org 0x864bc
	strb r1, [r4, #13]	@ 000864bc 6173
.org 0x864be
	strb r1, [r4, #14]	@ 000864be a173
.org 0x864c0
	strb r1, [r4, #15]	@ 000864c0 e173
.org 0x864c2
	pop {r4}	@ 000864c2 10bc
