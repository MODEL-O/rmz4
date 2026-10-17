@ FUN_080f5440  entry 0x080f5440  size 130
.thumb
.org 0xf5440
FUN_080f5440:
	push {r4, r5, r6, lr}	@ 000f5440 70b5
.org 0xf5442
	adds r6, r0, #0	@ 000f5442 061c
.org 0xf5444
	bl 0x1cc9c	@ 000f5444 27f72afc
.org 0xf5448
	ldrb r1, [r6, #10]	@ 000f5448 b17a
.org 0xf544a
	movs r0, #1	@ 000f544a 0120
.org 0xf544c
	movs r5, #0	@ 000f544c 0025
.org 0xf544e
	orrs r0, r1	@ 000f544e 0843
.org 0xf5450
	movs r1, #2	@ 000f5450 0221
.org 0xf5452
	orrs r0, r1	@ 000f5452 0843
.org 0xf5454
	strb r0, [r6, #10]	@ 000f5454 b072
.org 0xf5456
	ldr r1, [pc, #108]	@ 000f5456 1b49
.org 0xf5458
	ldrb r0, [r6, #17]	@ 000f5458 707c
.org 0xf545a
	lsls r0, r0, #1	@ 000f545a 4000
.org 0xf545c
	adds r0, r0, r1	@ 000f545c 4018
.org 0xf545e
	ldrh r1, [r0, #0]	@ 000f545e 0188
.org 0xf5460
	adds r0, r6, #0	@ 000f5460 301c
.org 0xf5462
	bl 0x1cf00	@ 000f5462 27f74dfd
.org 0xf5466
	ldrb r0, [r6, #10]	@ 000f5466 b07a
.org 0xf5468
	movs r1, #4	@ 000f5468 0421
.org 0xf546a
	orrs r0, r1	@ 000f546a 0843
.org 0xf546c
	strb r0, [r6, #10]	@ 000f546c b072
.org 0xf546e
	adds r4, r6, #0	@ 000f546e 341c
.org 0xf5470
	adds r4, #116	@ 000f5470 7434
.org 0xf5472
	ldr r1, [pc, #84]	@ 000f5472 1549
.org 0xf5474
	adds r2, r6, #0	@ 000f5474 321c
.org 0xf5476
	adds r2, #84	@ 000f5476 5432
.org 0xf5478
	adds r0, r4, #0	@ 000f5478 201c
.org 0xf547a
	movs r3, #1	@ 000f547a 0123
.org 0xf547c
	bl 0x5760	@ 000f547c 10f770f9
.org 0xf5480
	str r6, [r4, #44]	@ 000f5480 e662
.org 0xf5482
	ldr r0, [pc, #72]	@ 000f5482 1248
.org 0xf5484
	str r0, [r4, #36]	@ 000f5484 6062
.org 0xf5486
	ldrb r1, [r6, #11]	@ 000f5486 f17a
.org 0xf5488
	movs r0, #8	@ 000f5488 0820
.org 0xf548a
	orrs r0, r1	@ 000f548a 0843
.org 0xf548c
	strb r0, [r6, #11]	@ 000f548c f072
.org 0xf548e
	ldr r0, [pc, #64]	@ 000f548e 1048
.org 0xf5490
	str r0, [r6, #48]	@ 000f5490 3063
.org 0xf5492
	movs r0, #15	@ 000f5492 0f20
.org 0xf5494
	strh r0, [r6, #38]	@ 000f5494 f084
.org 0xf5496
	adds r1, r6, #0	@ 000f5496 311c
.org 0xf5498
	adds r1, #180	@ 000f5498 b431
.org 0xf549a
	ldr r0, [r6, #84]	@ 000f549a 706d
.org 0xf549c
	str r0, [r1, #0]	@ 000f549c 0860
.org 0xf549e
	adds r1, #4	@ 000f549e 0431
.org 0xf54a0
	ldr r0, [r6, #88]	@ 000f54a0 b06d
.org 0xf54a2
	str r0, [r1, #0]	@ 000f54a2 0860
.org 0xf54a4
	adds r0, r6, #0	@ 000f54a4 301c
.org 0xf54a6
	adds r0, #188	@ 000f54a6 bc30
.org 0xf54a8
	str r5, [r0, #0]	@ 000f54a8 0560
.org 0xf54aa
	ldr r1, [pc, #40]	@ 000f54aa 0a49
.org 0xf54ac
	ldrb r0, [r6, #17]	@ 000f54ac 707c
.org 0xf54ae
	adds r0, r0, r1	@ 000f54ae 4018
.org 0xf54b0
	ldrb r1, [r0, #0]	@ 000f54b0 0178
.org 0xf54b2
	adds r0, r6, #0	@ 000f54b2 301c
.org 0xf54b4
	adds r0, #192	@ 000f54b4 c030
.org 0xf54b6
	strb r1, [r0, #0]	@ 000f54b6 0170
.org 0xf54b8
	adds r0, #2	@ 000f54b8 0230
.org 0xf54ba
	strh r5, [r0, #0]	@ 000f54ba 0580
.org 0xf54bc
	pop {r4, r5, r6}	@ 000f54bc 70bc
.org 0xf54be
	pop {r0}	@ 000f54be 01bc
.org 0xf54c0
	bx r0	@ 000f54c0 0047
