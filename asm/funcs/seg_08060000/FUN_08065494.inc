@ FUN_08065494  entry 0x08065494  size 192
.thumb
.org 0x65494
FUN_08065494:
	push {r4, r5, r6, lr}	@ 00065494 70b5
.org 0x65496
	adds r6, r0, #0	@ 00065496 061c
.org 0x65498
	ldrb r0, [r6, #10]	@ 00065498 b07a
.org 0x6549a
	lsrs r4, r0, #4	@ 0006549a 0409
.org 0x6549c
	movs r5, #1	@ 0006549c 0125
.org 0x6549e
	ands r4, r5	@ 0006549e 2c40
.org 0x654a0
	ldrb r0, [r6, #15]	@ 000654a0 f07b
.org 0x654a2
	cmp r0, #0	@ 000654a2 0028
.org 0x654a4
	bne.n 0x654ec	@ 000654a4 22d1
.org 0x654a6
	adds r0, r6, #0	@ 000654a6 301c
.org 0x654a8
	movs r1, #20	@ 000654a8 1421
.org 0x654aa
	bl 0x65a94	@ 000654aa 00f0f3fa
.org 0x654ae
	adds r3, r4, #1	@ 000654ae 631c
.org 0x654b0
	movs r0, #1	@ 000654b0 0120
.org 0x654b2
	ands r3, r0	@ 000654b2 0340
.org 0x654b4
	adds r1, r3, #0	@ 000654b4 191c
.org 0x654b6
	ands r1, r5	@ 000654b6 2940
.org 0x654b8
	adds r0, r6, #0	@ 000654b8 301c
.org 0x654ba
	adds r0, #76	@ 000654ba 4c30
.org 0x654bc
	strb r1, [r0, #0]	@ 000654bc 0170
.org 0x654be
	adds r4, r6, #0	@ 000654be 341c
.org 0x654c0
	adds r4, #74	@ 000654c0 4a34
.org 0x654c2
	lsls r1, r1, #4	@ 000654c2 0901
.org 0x654c4
	ldrb r2, [r4, #0]	@ 000654c4 2278
.org 0x654c6
	movs r0, #17	@ 000654c6 1120
.org 0x654c8
	negs r0, r0	@ 000654c8 4042
.org 0x654ca
	ands r0, r2	@ 000654ca 1040
.org 0x654cc
	orrs r0, r1	@ 000654cc 0843
.org 0x654ce
	strb r0, [r4, #0]	@ 000654ce 2070
.org 0x654d0
	ands r3, r5	@ 000654d0 2b40
.org 0x654d2
	cmp r3, #0	@ 000654d2 002b
.org 0x654d4
	beq.n 0x654de	@ 000654d4 03d0
.org 0x654d6
	ldrb r0, [r6, #10]	@ 000654d6 b07a
.org 0x654d8
	movs r1, #16	@ 000654d8 1021
.org 0x654da
	orrs r0, r1	@ 000654da 0843
.org 0x654dc
	b.n 0x654e4	@ 000654dc 02e0
.org 0x654de
	ldrb r1, [r6, #10]	@ 000654de b17a
.org 0x654e0
	movs r0, #239	@ 000654e0 ef20
.org 0x654e2
	ands r0, r1	@ 000654e2 0840
.org 0x654e4
	strb r0, [r6, #10]	@ 000654e4 b072
.org 0x654e6
	ldrb r0, [r6, #15]	@ 000654e6 f07b
.org 0x654e8
	adds r0, #1	@ 000654e8 0130
.org 0x654ea
	strb r0, [r6, #15]	@ 000654ea f073
.org 0x654ec
	adds r0, r6, #0	@ 000654ec 301c
.org 0x654ee
	bl 0x1cff0	@ 000654ee b7f77ffd
.org 0x654f2
	adds r0, r6, #0	@ 000654f2 301c
.org 0x654f4
	adds r0, #116	@ 000654f4 7430
.org 0x654f6
	ldr r4, [pc, #92]	@ 000654f6 174c
.org 0x654f8
	ldr r3, [pc, #92]	@ 000654f8 174b
.org 0x654fa
	adds r1, r6, #0	@ 000654fa 311c
.org 0x654fc
	adds r1, #180	@ 000654fc b431
.org 0x654fe
	ldrb r2, [r1, #0]	@ 000654fe 0a78
.org 0x65500
	lsls r1, r2, #1	@ 00065500 5100
.org 0x65502
	adds r1, r1, r3	@ 00065502 c918
.org 0x65504
	ldrh r1, [r1, #0]	@ 00065504 0988
.org 0x65506
	lsls r1, r1, #2	@ 00065506 8900
.org 0x65508
	adds r1, r1, r4	@ 00065508 0919
.org 0x6550a
	adds r3, r6, #0	@ 0006550a 331c
.org 0x6550c
	adds r3, #113	@ 0006550c 7133
.org 0x6550e
	movs r5, #0	@ 0006550e 0025
.org 0x65510
	ldrsb r5, [r3, r5]	@ 00065510 5d57
.org 0x65512
	ldr r1, [r1, #0]	@ 00065512 0968
.org 0x65514
	lsls r3, r5, #2	@ 00065514 ab00
.org 0x65516
	adds r3, r3, r1	@ 00065516 5b18
.org 0x65518
	ldr r4, [pc, #64]	@ 00065518 104c
.org 0x6551a
	adds r1, r6, #0	@ 0006551a 311c
.org 0x6551c
	adds r1, #181	@ 0006551c b531
.org 0x6551e
	ldrb r1, [r1, #0]	@ 0006551e 0978
.org 0x65520
	lsls r1, r1, #2	@ 00065520 8900
.org 0x65522
	adds r1, r1, r4	@ 00065522 0919
.org 0x65524
	ldr r1, [r1, #0]	@ 00065524 0968
.org 0x65526
	lsls r2, r2, #2	@ 00065526 9200
.org 0x65528
	adds r2, r2, r1	@ 00065528 5218
.org 0x6552a
	ldr r1, [r2, #0]	@ 0006552a 1168
.org 0x6552c
	adds r1, r1, r5	@ 0006552c 4919
.org 0x6552e
	ldrb r1, [r1, #0]	@ 0006552e 0978
.org 0x65530
	lsls r2, r1, #1	@ 00065530 4a00
.org 0x65532
	adds r2, r2, r1	@ 00065532 5218
.org 0x65534
	lsls r2, r2, #3	@ 00065534 d200
.org 0x65536
	ldr r1, [r3, #0]	@ 00065536 1968
.org 0x65538
	adds r1, r1, r2	@ 00065538 8918
.org 0x6553a
	bl 0x5784	@ 0006553a a0f723f9
.org 0x6553e
	adds r0, r6, #0	@ 0006553e 301c
.org 0x65540
	adds r0, #115	@ 00065540 7330
.org 0x65542
	ldrb r1, [r0, #0]	@ 00065542 0178
.org 0x65544
	cmp r1, #3	@ 00065544 0329
.org 0x65546
	bne.n 0x6554e	@ 00065546 02d1
.org 0x65548
	movs r0, #0	@ 00065548 0020
.org 0x6554a
	strb r1, [r6, #14]	@ 0006554a b173
.org 0x6554c
	strb r0, [r6, #15]	@ 0006554c f073
.org 0x6554e
	pop {r4, r5, r6}	@ 0006554e 70bc
.org 0x65550
	pop {r0}	@ 00065550 01bc
.org 0x65552
	bx r0	@ 00065552 0047
