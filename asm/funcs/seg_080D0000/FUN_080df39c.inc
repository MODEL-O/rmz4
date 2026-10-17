@ FUN_080df39c  entry 0x080df39c  size 262
.thumb
.org 0xdf39c
FUN_080df39c:
	push {r4, r5, r6, r7, lr}	@ 000df39c f0b5
.org 0xdf39e
	sub sp, #12	@ 000df39e 83b0
.org 0xdf3a0
	adds r6, r0, #0	@ 000df3a0 061c
.org 0xdf3a2
	bl 0x1cc9c	@ 000df3a2 3df77bfc
.org 0xdf3a6
	ldrb r1, [r6, #10]	@ 000df3a6 b17a
.org 0xdf3a8
	movs r0, #1	@ 000df3a8 0120
.org 0xdf3aa
	orrs r0, r1	@ 000df3aa 0843
.org 0xdf3ac
	movs r1, #2	@ 000df3ac 0221
.org 0xdf3ae
	orrs r0, r1	@ 000df3ae 0843
.org 0xdf3b0
	strb r0, [r6, #10]	@ 000df3b0 b072
.org 0xdf3b2
	adds r0, r6, #0	@ 000df3b2 301c
.org 0xdf3b4
	bl 0x1cff0	@ 000df3b4 3df71cfe
.org 0xdf3b8
	ldr r0, [r6, #84]	@ 000df3b8 706d
.org 0xdf3ba
	str r0, [sp, #4]	@ 000df3ba 0190
.org 0xdf3bc
	ldrb r0, [r6, #17]	@ 000df3bc 707c
.org 0xdf3be
	cmp r0, #255	@ 000df3be ff28
.org 0xdf3c0
	bne.n 0xdf47c	@ 000df3c0 5cd1
.org 0xdf3c2
	ldrb r0, [r6, #16]	@ 000df3c2 307c
.org 0xdf3c4
	cmp r0, #0	@ 000df3c4 0028
.org 0xdf3c6
	beq.n 0xdf434	@ 000df3c6 35d0
.org 0xdf3c8
	ldr r0, [r6, #88]	@ 000df3c8 b06d
.org 0xdf3ca
	ldr r1, [pc, #100]	@ 000df3ca 1949
.org 0xdf3cc
	adds r0, r0, r1	@ 000df3cc 4018
.org 0xdf3ce
	str r0, [sp, #8]	@ 000df3ce 0290
.org 0xdf3d0
	movs r0, #1	@ 000df3d0 0120
.org 0xdf3d2
	add r1, sp, #4	@ 000df3d2 01a9
.org 0xdf3d4
	bl 0xd0c88	@ 000df3d4 f1f758fc
.org 0xdf3d8
	movs r0, #42	@ 000df3d8 2a20
.org 0xdf3da
	bl 0x2b10	@ 000df3da 23f799fb
.org 0xdf3de
	adds r5, r6, #0	@ 000df3de 351c
.org 0xdf3e0
	adds r5, #84	@ 000df3e0 5435
.org 0xdf3e2
	ldrb r1, [r6, #16]	@ 000df3e2 317c
.org 0xdf3e4
	ldrb r3, [r6, #10]	@ 000df3e4 b37a
.org 0xdf3e6
	lsrs r3, r3, #4	@ 000df3e6 1b09
.org 0xdf3e8
	movs r7, #1	@ 000df3e8 0127
.org 0xdf3ea
	ands r3, r7	@ 000df3ea 3b40
.org 0xdf3ec
	adds r4, r6, #0	@ 000df3ec 341c
.org 0xdf3ee
	adds r4, #116	@ 000df3ee 7434
.org 0xdf3f0
	ldrb r0, [r4, #0]	@ 000df3f0 2078
.org 0xdf3f2
	str r0, [sp, #0]	@ 000df3f2 0090
.org 0xdf3f4
	adds r0, r5, #0	@ 000df3f4 281c
.org 0xdf3f6
	movs r2, #3	@ 000df3f6 0322
.org 0xdf3f8
	bl 0xdf2ec	@ 000df3f8 fff778ff
.org 0xdf3fc
	ldrb r1, [r6, #16]	@ 000df3fc 317c
.org 0xdf3fe
	ldrb r3, [r6, #10]	@ 000df3fe b37a
.org 0xdf400
	lsrs r3, r3, #4	@ 000df400 1b09
.org 0xdf402
	ands r3, r7	@ 000df402 3b40
.org 0xdf404
	ldrb r0, [r4, #0]	@ 000df404 2078
.org 0xdf406
	str r0, [sp, #0]	@ 000df406 0090
.org 0xdf408
	adds r0, r5, #0	@ 000df408 281c
.org 0xdf40a
	movs r2, #4	@ 000df40a 0422
.org 0xdf40c
	bl 0xdf2ec	@ 000df40c fff76eff
.org 0xdf410
	ldrb r0, [r6, #16]	@ 000df410 307c
.org 0xdf412
	cmp r0, #2	@ 000df412 0228
.org 0xdf414
	beq.n 0xdf42a	@ 000df414 09d0
.org 0xdf416
	adds r1, r0, #0	@ 000df416 011c
.org 0xdf418
	ldrb r3, [r6, #10]	@ 000df418 b37a
.org 0xdf41a
	lsrs r3, r3, #4	@ 000df41a 1b09
.org 0xdf41c
	ands r3, r7	@ 000df41c 3b40
.org 0xdf41e
	ldrb r0, [r4, #0]	@ 000df41e 2078
.org 0xdf420
	str r0, [sp, #0]	@ 000df420 0090
.org 0xdf422
	adds r0, r5, #0	@ 000df422 281c
.org 0xdf424
	movs r2, #5	@ 000df424 0522
.org 0xdf426
	bl 0xdf2ec	@ 000df426 fff761ff
.org 0xdf42a
	movs r0, #2	@ 000df42a 0220
.org 0xdf42c
	strb r0, [r6, #17]	@ 000df42c 7074
.org 0xdf42e
	b.n 0xdf47c	@ 000df42e 25e0
.org 0xdf430
	.byte 0x00,0xf1,0xff,0xff	@ 000df430 data
.org 0xdf434
	ldr r0, [r6, #88]	@ 000df434 b06d
.org 0xdf436
	ldr r1, [pc, #112]	@ 000df436 1c49
.org 0xdf438
	adds r0, r0, r1	@ 000df438 4018
.org 0xdf43a
	str r0, [sp, #8]	@ 000df43a 0290
.org 0xdf43c
	movs r2, #128	@ 000df43c 8022
.org 0xdf43e
	lsls r2, r2, #2	@ 000df43e 9200
.org 0xdf440
	adds r5, r6, #0	@ 000df440 351c
.org 0xdf442
	adds r5, #116	@ 000df442 7435
.org 0xdf444
	ldrb r3, [r5, #0]	@ 000df444 2b78
.org 0xdf446
	adds r3, #1	@ 000df446 0133
.org 0xdf448
	lsrs r0, r3, #1	@ 000df448 5808
.org 0xdf44a
	lsls r0, r0, #1	@ 000df44a 4000
.org 0xdf44c
	subs r3, r3, r0	@ 000df44c 1b1a
.org 0xdf44e
	movs r0, #255	@ 000df44e ff20
.org 0xdf450
	ands r3, r0	@ 000df450 0340
.org 0xdf452
	movs r0, #0	@ 000df452 0020
.org 0xdf454
	add r1, sp, #4	@ 000df454 01a9
.org 0xdf456
	bl 0xd0dc4	@ 000df456 f1f7b5fc
.org 0xdf45a
	adds r0, r6, #0	@ 000df45a 301c
.org 0xdf45c
	adds r0, #84	@ 000df45c 5430
.org 0xdf45e
	ldrb r1, [r6, #16]	@ 000df45e 317c
.org 0xdf460
	ldrb r3, [r6, #10]	@ 000df460 b37a
.org 0xdf462
	lsrs r3, r3, #4	@ 000df462 1b09
.org 0xdf464
	movs r4, #1	@ 000df464 0124
.org 0xdf466
	ands r3, r4	@ 000df466 2340
.org 0xdf468
	ldrb r2, [r5, #0]	@ 000df468 2a78
.org 0xdf46a
	str r2, [sp, #0]	@ 000df46a 0092
.org 0xdf46c
	movs r2, #0	@ 000df46c 0022
.org 0xdf46e
	bl 0xdf2ec	@ 000df46e fff73dff
.org 0xdf472
	strb r4, [r6, #17]	@ 000df472 7474
.org 0xdf474
	adds r1, r6, #0	@ 000df474 311c
.org 0xdf476
	adds r1, #37	@ 000df476 2531
.org 0xdf478
	movs r0, #24	@ 000df478 1820
.org 0xdf47a
	strb r0, [r1, #0]	@ 000df47a 0870
.org 0xdf47c
	adds r0, r6, #0	@ 000df47c 301c
.org 0xdf47e
	adds r0, #117	@ 000df47e 7530
.org 0xdf480
	movs r2, #0	@ 000df480 0022
.org 0xdf482
	strb r2, [r0, #0]	@ 000df482 0270
.org 0xdf484
	ldr r1, [pc, #36]	@ 000df484 0949
.org 0xdf486
	ldrb r0, [r6, #9]	@ 000df486 707a
.org 0xdf488
	lsls r0, r0, #2	@ 000df488 8000
.org 0xdf48a
	adds r0, r0, r1	@ 000df48a 4018
.org 0xdf48c
	movs r1, #1	@ 000df48c 0121
.org 0xdf48e
	str r1, [r6, #12]	@ 000df48e f160
.org 0xdf490
	ldr r0, [r0, #0]	@ 000df490 0068
.org 0xdf492
	ldr r0, [r0, #4]	@ 000df492 4068
.org 0xdf494
	str r0, [r6, #20]	@ 000df494 7061
.org 0xdf496
	strb r2, [r6, #13]	@ 000df496 7273
.org 0xdf498
	adds r0, r6, #0	@ 000df498 301c
.org 0xdf49a
	bl 0xdf4b0	@ 000df49a 00f009f8
.org 0xdf49e
	add sp, #12	@ 000df49e 03b0
.org 0xdf4a0
	pop {r4, r5, r6, r7}	@ 000df4a0 f0bc
