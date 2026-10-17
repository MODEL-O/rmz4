@ FUN_080c8428  entry 0x080c8428  size 180
.thumb
.org 0xc8428
FUN_080c8428:
	push {r4, r5, r6, lr}	@ 000c8428 70b5
.org 0xc842a
	adds r6, r0, #0	@ 000c842a 061c
.org 0xc842c
	ldr r4, [r6, #40]	@ 000c842c b46a
.org 0xc842e
	ldrb r5, [r6, #17]	@ 000c842e 757c
.org 0xc8430
	movs r0, #177	@ 000c8430 b120
.org 0xc8432
	lsls r0, r0, #1	@ 000c8432 4000
.org 0xc8434
	bl 0x2b10	@ 000c8434 3af76cfb
.org 0xc8438
	ldr r1, [pc, #52]	@ 000c8438 0d49
.org 0xc843a
	ldrb r0, [r6, #9]	@ 000c843a 707a
.org 0xc843c
	lsls r0, r0, #2	@ 000c843c 8000
.org 0xc843e
	adds r0, r0, r1	@ 000c843e 4018
.org 0xc8440
	movs r1, #1	@ 000c8440 0121
.org 0xc8442
	str r1, [r6, #12]	@ 000c8442 f160
.org 0xc8444
	ldr r0, [r0, #0]	@ 000c8444 0068
.org 0xc8446
	ldr r0, [r0, #4]	@ 000c8446 4068
.org 0xc8448
	str r0, [r6, #20]	@ 000c8448 7061
.org 0xc844a
	movs r0, #0	@ 000c844a 0020
.org 0xc844c
	strb r0, [r6, #13]	@ 000c844c 7073
.org 0xc844e
	strb r0, [r6, #14]	@ 000c844e b073
.org 0xc8450
	strb r0, [r6, #15]	@ 000c8450 f073
.org 0xc8452
	ldrb r0, [r6, #10]	@ 000c8452 b07a
.org 0xc8454
	orrs r0, r1	@ 000c8454 0843
.org 0xc8456
	movs r1, #2	@ 000c8456 0221
.org 0xc8458
	orrs r0, r1	@ 000c8458 0843
.org 0xc845a
	strb r0, [r6, #10]	@ 000c845a b072
.org 0xc845c
	ldr r2, [r4, #84]	@ 000c845c 626d
.org 0xc845e
	ldrb r1, [r4, #10]	@ 000c845e a17a
.org 0xc8460
	movs r0, #16	@ 000c8460 1020
.org 0xc8462
	ands r0, r1	@ 000c8462 0840
.org 0xc8464
	cmp r0, #0	@ 000c8464 0028
.org 0xc8466
	beq.n 0xc8474	@ 000c8466 05d0
.org 0xc8468
	movs r1, #128	@ 000c8468 8021
.org 0xc846a
	lsls r1, r1, #4	@ 000c846a 0901
.org 0xc846c
	b.n 0xc8476	@ 000c846c 03e0
.org 0xc846e
	.byte 0x00	@ 000c846e data
.org 0xc846f
	.byte 0x00	@ 000c846f data
.org 0xc8470
	.byte 0xf4,0x49,0x86,0x08	@ 000c8470 data
.org 0xc8474
	ldr r1, [pc, #28]	@ 000c8474 0749
.org 0xc8476
	adds r0, r2, r1	@ 000c8476 5018
.org 0xc8478
	str r0, [r6, #84]	@ 000c8478 7065
.org 0xc847a
	ldr r0, [r4, #88]	@ 000c847a a06d
.org 0xc847c
	str r0, [r6, #88]	@ 000c847c b065
.org 0xc847e
	adds r0, r6, #0	@ 000c847e 301c
.org 0xc8480
	bl 0x1cc9c	@ 000c8480 54f70cfc
.org 0xc8484
	adds r2, r5, #0	@ 000c8484 2a1c
.org 0xc8486
	cmp r2, #0	@ 000c8486 002a
.org 0xc8488
	beq.n 0xc8498	@ 000c8488 06d0
.org 0xc848a
	ldrb r1, [r6, #10]	@ 000c848a b17a
.org 0xc848c
	movs r0, #16	@ 000c848c 1020
.org 0xc848e
	orrs r0, r1	@ 000c848e 0843
.org 0xc8490
	b.n 0xc849e	@ 000c8490 05e0
.org 0xc8492
	.byte 0x00	@ 000c8492 data
.org 0xc8493
	.byte 0x00	@ 000c8493 data
.org 0xc8494
	.byte 0x00,0xf8,0xff,0xff	@ 000c8494 data
.org 0xc8498
	ldrb r1, [r6, #10]	@ 000c8498 b17a
.org 0xc849a
	movs r0, #239	@ 000c849a ef20
.org 0xc849c
	ands r0, r1	@ 000c849c 0840
.org 0xc849e
	strb r0, [r6, #10]	@ 000c849e b072
.org 0xc84a0
	movs r1, #1	@ 000c84a0 0121
.org 0xc84a2
	ands r1, r2	@ 000c84a2 1140
.org 0xc84a4
	adds r0, r6, #0	@ 000c84a4 301c
.org 0xc84a6
	adds r0, #76	@ 000c84a6 4c30
.org 0xc84a8
	movs r5, #0	@ 000c84a8 0025
.org 0xc84aa
	strb r1, [r0, #0]	@ 000c84aa 0170
.org 0xc84ac
	adds r3, r6, #0	@ 000c84ac 331c
.org 0xc84ae
	adds r3, #74	@ 000c84ae 4a33
.org 0xc84b0
	lsls r1, r1, #4	@ 000c84b0 0901
.org 0xc84b2
	ldrb r2, [r3, #0]	@ 000c84b2 1a78
.org 0xc84b4
	movs r0, #17	@ 000c84b4 1120
.org 0xc84b6
	negs r0, r0	@ 000c84b6 4042
.org 0xc84b8
	ands r0, r2	@ 000c84b8 1040
.org 0xc84ba
	orrs r0, r1	@ 000c84ba 0843
.org 0xc84bc
	strb r0, [r3, #0]	@ 000c84bc 1870
.org 0xc84be
	ldrb r1, [r6, #10]	@ 000c84be b17a
.org 0xc84c0
	movs r0, #4	@ 000c84c0 0420
.org 0xc84c2
	orrs r0, r1	@ 000c84c2 0843
.org 0xc84c4
	strb r0, [r6, #10]	@ 000c84c4 b072
.org 0xc84c6
	adds r4, r6, #0	@ 000c84c6 341c
.org 0xc84c8
	adds r4, #116	@ 000c84c8 7434
.org 0xc84ca
	ldr r1, [pc, #28]	@ 000c84ca 0749
.org 0xc84cc
	adds r2, r6, #0	@ 000c84cc 321c
.org 0xc84ce
	adds r2, #84	@ 000c84ce 5432
.org 0xc84d0
	adds r0, r4, #0	@ 000c84d0 201c
.org 0xc84d2
	movs r3, #64	@ 000c84d2 4023
.org 0xc84d4
	bl 0x5760	@ 000c84d4 3df744f9
.org 0xc84d8
	str r6, [r4, #44]	@ 000c84d8 e662
.org 0xc84da
	str r5, [r4, #36]	@ 000c84da 6562
