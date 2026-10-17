@ FUN_080963f0  entry 0x080963f0  size 110
.thumb
.org 0x963f0
FUN_080963f0:
	push {r4, r5, r6, lr}	@ 000963f0 70b5
.org 0x963f2
	adds r4, r0, #0	@ 000963f2 041c
.org 0x963f4
	ldr r6, [r4, #40]	@ 000963f4 a66a
.org 0x963f6
	ldrb r0, [r6, #10]	@ 000963f6 b07a
.org 0x963f8
	lsrs r5, r0, #4	@ 000963f8 0509
.org 0x963fa
	movs r0, #1	@ 000963fa 0120
.org 0x963fc
	ands r5, r0	@ 000963fc 0540
.org 0x963fe
	ldrb r0, [r4, #15]	@ 000963fe e07b
.org 0x96400
	cmp r0, #0	@ 00096400 0028
.org 0x96402
	bne.n 0x9641a	@ 00096402 0ad1
.org 0x96404
	ldr r1, [pc, #40]	@ 00096404 0a49
.org 0x96406
	ldrb r0, [r4, #13]	@ 00096406 607b
.org 0x96408
	lsls r0, r0, #2	@ 00096408 8000
.org 0x9640a
	adds r0, r0, r1	@ 0009640a 4018
.org 0x9640c
	ldrh r1, [r0, #0]	@ 0009640c 0188
.org 0x9640e
	adds r0, r4, #0	@ 0009640e 201c
.org 0x96410
	bl 0x1cf00	@ 00096410 86f776fd
.org 0x96414
	ldrb r0, [r4, #15]	@ 00096414 e07b
.org 0x96416
	adds r0, #1	@ 00096416 0130
.org 0x96418
	strb r0, [r4, #15]	@ 00096418 e073
.org 0x9641a
	adds r0, r4, #0	@ 0009641a 201c
.org 0x9641c
	bl 0x1cff0	@ 0009641c 86f7e8fd
.org 0x96420
	adds r2, r5, #0	@ 00096420 2a1c
.org 0x96422
	cmp r2, #0	@ 00096422 002a
.org 0x96424
	beq.n 0x96434	@ 00096424 06d0
.org 0x96426
	ldrb r1, [r4, #10]	@ 00096426 a17a
.org 0x96428
	movs r0, #16	@ 00096428 1020
.org 0x9642a
	orrs r0, r1	@ 0009642a 0843
.org 0x9642c
	b.n 0x9643a	@ 0009642c 05e0
.org 0x9642e
	.byte 0x00	@ 0009642e data
.org 0x9642f
	.byte 0x00	@ 0009642f data
.org 0x96430
	.byte 0x88,0x08,0x86,0x08	@ 00096430 data
.org 0x96434
	ldrb r1, [r4, #10]	@ 00096434 a17a
.org 0x96436
	movs r0, #239	@ 00096436 ef20
.org 0x96438
	ands r0, r1	@ 00096438 0840
.org 0x9643a
	strb r0, [r4, #10]	@ 0009643a a072
.org 0x9643c
	adds r1, r2, #0	@ 0009643c 111c
.org 0x9643e
	adds r0, r4, #0	@ 0009643e 201c
.org 0x96440
	adds r0, #76	@ 00096440 4c30
.org 0x96442
	strb r1, [r0, #0]	@ 00096442 0170
.org 0x96444
	adds r3, r4, #0	@ 00096444 231c
.org 0x96446
	adds r3, #74	@ 00096446 4a33
.org 0x96448
	lsls r1, r1, #4	@ 00096448 0901
.org 0x9644a
	ldrb r2, [r3, #0]	@ 0009644a 1a78
.org 0x9644c
	movs r0, #17	@ 0009644c 1120
.org 0x9644e
	negs r0, r0	@ 0009644e 4042
.org 0x96450
	ands r0, r2	@ 00096450 1040
.org 0x96452
	orrs r0, r1	@ 00096452 0843
.org 0x96454
	strb r0, [r3, #0]	@ 00096454 1870
.org 0x96456
	ldr r0, [r6, #84]	@ 00096456 706d
.org 0x96458
	ldr r1, [r6, #88]	@ 00096458 b16d
.org 0x9645a
	str r0, [r4, #84]	@ 0009645a 6065
.org 0x9645c
	str r1, [r4, #88]	@ 0009645c a165
