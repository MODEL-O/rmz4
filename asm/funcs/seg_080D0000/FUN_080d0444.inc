@ FUN_080d0444  entry 0x080d0444  size 158
.thumb
.org 0xd0444
FUN_080d0444:
	push {r4, r5, r6, lr}	@ 000d0444 70b5
.org 0xd0446
	adds r6, r0, #0	@ 000d0446 061c
.org 0xd0448
	ldrb r4, [r6, #17]	@ 000d0448 747c
.org 0xd044a
	movs r0, #205	@ 000d044a cd20
.org 0xd044c
	lsls r0, r0, #1	@ 000d044c 4000
.org 0xd044e
	bl 0x2b10	@ 000d044e 32f75ffb
.org 0xd0452
	ldr r1, [pc, #52]	@ 000d0452 0d49
.org 0xd0454
	ldrb r0, [r6, #9]	@ 000d0454 707a
.org 0xd0456
	lsls r0, r0, #2	@ 000d0456 8000
.org 0xd0458
	adds r0, r0, r1	@ 000d0458 4018
.org 0xd045a
	movs r1, #1	@ 000d045a 0121
.org 0xd045c
	str r1, [r6, #12]	@ 000d045c f160
.org 0xd045e
	ldr r0, [r0, #0]	@ 000d045e 0068
.org 0xd0460
	ldr r0, [r0, #4]	@ 000d0460 4068
.org 0xd0462
	str r0, [r6, #20]	@ 000d0462 7061
.org 0xd0464
	ldrb r1, [r6, #10]	@ 000d0464 b17a
.org 0xd0466
	movs r0, #1	@ 000d0466 0120
.org 0xd0468
	movs r5, #0	@ 000d0468 0025
.org 0xd046a
	orrs r0, r1	@ 000d046a 0843
.org 0xd046c
	movs r1, #2	@ 000d046c 0221
.org 0xd046e
	orrs r0, r1	@ 000d046e 0843
.org 0xd0470
	strb r0, [r6, #10]	@ 000d0470 b072
.org 0xd0472
	movs r0, #32	@ 000d0472 2020
.org 0xd0474
	strb r0, [r6, #18]	@ 000d0474 b074
.org 0xd0476
	adds r0, r6, #0	@ 000d0476 301c
.org 0xd0478
	bl 0x1cc9c	@ 000d0478 4cf710fc
.org 0xd047c
	cmp r4, #0	@ 000d047c 002c
.org 0xd047e
	beq.n 0xd048c	@ 000d047e 05d0
.org 0xd0480
	ldrb r0, [r6, #10]	@ 000d0480 b07a
.org 0xd0482
	movs r1, #16	@ 000d0482 1021
.org 0xd0484
	orrs r0, r1	@ 000d0484 0843
.org 0xd0486
	b.n 0xd0492	@ 000d0486 04e0
.org 0xd0488
	.byte 0xf4,0x49,0x86,0x08	@ 000d0488 data
.org 0xd048c
	ldrb r1, [r6, #10]	@ 000d048c b17a
.org 0xd048e
	movs r0, #239	@ 000d048e ef20
.org 0xd0490
	ands r0, r1	@ 000d0490 0840
.org 0xd0492
	strb r0, [r6, #10]	@ 000d0492 b072
.org 0xd0494
	movs r1, #1	@ 000d0494 0121
.org 0xd0496
	ands r1, r4	@ 000d0496 2140
.org 0xd0498
	adds r0, r6, #0	@ 000d0498 301c
.org 0xd049a
	adds r0, #76	@ 000d049a 4c30
.org 0xd049c
	movs r5, #0	@ 000d049c 0025
.org 0xd049e
	strb r1, [r0, #0]	@ 000d049e 0170
.org 0xd04a0
	adds r3, r6, #0	@ 000d04a0 331c
.org 0xd04a2
	adds r3, #74	@ 000d04a2 4a33
.org 0xd04a4
	lsls r1, r1, #4	@ 000d04a4 0901
.org 0xd04a6
	ldrb r2, [r3, #0]	@ 000d04a6 1a78
.org 0xd04a8
	movs r0, #17	@ 000d04a8 1120
.org 0xd04aa
	negs r0, r0	@ 000d04aa 4042
.org 0xd04ac
	ands r0, r2	@ 000d04ac 1040
.org 0xd04ae
	orrs r0, r1	@ 000d04ae 0843
.org 0xd04b0
	strb r0, [r3, #0]	@ 000d04b0 1870
.org 0xd04b2
	movs r1, #230	@ 000d04b2 e621
.org 0xd04b4
	lsls r1, r1, #8	@ 000d04b4 0902
.org 0xd04b6
	adds r0, r6, #0	@ 000d04b6 301c
.org 0xd04b8
	bl 0x1cf00	@ 000d04b8 4cf722fd
.org 0xd04bc
	ldrb r1, [r6, #10]	@ 000d04bc b17a
.org 0xd04be
	movs r0, #4	@ 000d04be 0420
.org 0xd04c0
	orrs r0, r1	@ 000d04c0 0843
.org 0xd04c2
	strb r0, [r6, #10]	@ 000d04c2 b072
.org 0xd04c4
	adds r4, r6, #0	@ 000d04c4 341c
.org 0xd04c6
	adds r4, #116	@ 000d04c6 7434
.org 0xd04c8
	ldr r1, [pc, #28]	@ 000d04c8 0749
.org 0xd04ca
	adds r2, r6, #0	@ 000d04ca 321c
.org 0xd04cc
	adds r2, #84	@ 000d04cc 5432
.org 0xd04ce
	adds r0, r4, #0	@ 000d04ce 201c
.org 0xd04d0
	movs r3, #64	@ 000d04d0 4023
.org 0xd04d2
	bl 0x5760	@ 000d04d2 35f745f9
.org 0xd04d6
	str r6, [r4, #44]	@ 000d04d6 e662
.org 0xd04d8
	str r5, [r4, #36]	@ 000d04d8 6562
.org 0xd04da
	adds r0, r6, #0	@ 000d04da 301c
.org 0xd04dc
	bl 0xd04ec	@ 000d04dc 00f006f8
.org 0xd04e0
	pop {r4, r5, r6}	@ 000d04e0 70bc
