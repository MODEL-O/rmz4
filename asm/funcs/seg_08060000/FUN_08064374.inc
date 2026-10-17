@ FUN_08064374  entry 0x08064374  size 288
.thumb
.org 0x64374
FUN_08064374:
	push {r4, r5, r6, lr}	@ 00064374 70b5
.org 0x64376
	sub sp, #12	@ 00064376 83b0
.org 0x64378
	adds r6, r0, #0	@ 00064378 061c
.org 0x6437a
	ldrb r0, [r6, #15]	@ 0006437a f07b
.org 0x6437c
	cmp r0, #0	@ 0006437c 0028
.org 0x6437e
	bne.n 0x6438e	@ 0006437e 06d1
.org 0x64380
	adds r0, r6, #0	@ 00064380 301c
.org 0x64382
	movs r1, #25	@ 00064382 1921
.org 0x64384
	bl 0x65a94	@ 00064384 01f086fb
.org 0x64388
	ldrb r0, [r6, #15]	@ 00064388 f07b
.org 0x6438a
	adds r0, #1	@ 0006438a 0130
.org 0x6438c
	strb r0, [r6, #15]	@ 0006438c f073
.org 0x6438e
	adds r0, r6, #0	@ 0006438e 301c
.org 0x64390
	bl 0x1cff0	@ 00064390 b8f72efe
.org 0x64394
	adds r0, r6, #0	@ 00064394 301c
.org 0x64396
	adds r0, #116	@ 00064396 7430
.org 0x64398
	ldr r4, [pc, #164]	@ 00064398 294c
.org 0x6439a
	ldr r3, [pc, #168]	@ 0006439a 2a4b
.org 0x6439c
	adds r1, r6, #0	@ 0006439c 311c
.org 0x6439e
	adds r1, #180	@ 0006439e b431
.org 0x643a0
	ldrb r2, [r1, #0]	@ 000643a0 0a78
.org 0x643a2
	lsls r1, r2, #1	@ 000643a2 5100
.org 0x643a4
	adds r1, r1, r3	@ 000643a4 c918
.org 0x643a6
	ldrh r1, [r1, #0]	@ 000643a6 0988
.org 0x643a8
	lsls r1, r1, #2	@ 000643a8 8900
.org 0x643aa
	adds r1, r1, r4	@ 000643aa 0919
.org 0x643ac
	adds r3, r6, #0	@ 000643ac 331c
.org 0x643ae
	adds r3, #113	@ 000643ae 7133
.org 0x643b0
	movs r5, #0	@ 000643b0 0025
.org 0x643b2
	ldrsb r5, [r3, r5]	@ 000643b2 5d57
.org 0x643b4
	ldr r1, [r1, #0]	@ 000643b4 0968
.org 0x643b6
	lsls r3, r5, #2	@ 000643b6 ab00
.org 0x643b8
	adds r3, r3, r1	@ 000643b8 5b18
.org 0x643ba
	ldr r4, [pc, #140]	@ 000643ba 234c
.org 0x643bc
	adds r1, r6, #0	@ 000643bc 311c
.org 0x643be
	adds r1, #181	@ 000643be b531
.org 0x643c0
	ldrb r1, [r1, #0]	@ 000643c0 0978
.org 0x643c2
	lsls r1, r1, #2	@ 000643c2 8900
.org 0x643c4
	adds r1, r1, r4	@ 000643c4 0919
.org 0x643c6
	ldr r1, [r1, #0]	@ 000643c6 0968
.org 0x643c8
	lsls r2, r2, #2	@ 000643c8 9200
.org 0x643ca
	adds r2, r2, r1	@ 000643ca 5218
.org 0x643cc
	ldr r1, [r2, #0]	@ 000643cc 1168
.org 0x643ce
	adds r1, r1, r5	@ 000643ce 4919
.org 0x643d0
	ldrb r1, [r1, #0]	@ 000643d0 0978
.org 0x643d2
	lsls r2, r1, #1	@ 000643d2 4a00
.org 0x643d4
	adds r2, r2, r1	@ 000643d4 5218
.org 0x643d6
	lsls r2, r2, #3	@ 000643d6 d200
.org 0x643d8
	ldr r1, [r3, #0]	@ 000643d8 1968
.org 0x643da
	adds r1, r1, r2	@ 000643da 8918
.org 0x643dc
	bl 0x5784	@ 000643dc a1f7d2f9
.org 0x643e0
	adds r1, r6, #0	@ 000643e0 311c
.org 0x643e2
	adds r1, #216	@ 000643e2 d831
.org 0x643e4
	ldr r0, [r1, #0]	@ 000643e4 0868
.org 0x643e6
	cmp r0, #0	@ 000643e6 0028
.org 0x643e8
	beq.n 0x643fa	@ 000643e8 07d0
.org 0x643ea
	ldrb r0, [r0, #12]	@ 000643ea 007b
.org 0x643ec
	cmp r0, #1	@ 000643ec 0128
.org 0x643ee
	bls.n 0x643f4	@ 000643ee 01d9
.org 0x643f0
	movs r0, #0	@ 000643f0 0020
.org 0x643f2
	str r0, [r1, #0]	@ 000643f2 0860
.org 0x643f4
	ldr r0, [r1, #0]	@ 000643f4 0868
.org 0x643f6
	cmp r0, #0	@ 000643f6 0028
.org 0x643f8
	bne.n 0x644a4	@ 000643f8 54d1
.org 0x643fa
	ldr r2, [pc, #80]	@ 000643fa 144a
.org 0x643fc
	ldr r1, [r2, #0]	@ 000643fc 1168
.org 0x643fe
	ldr r0, [pc, #80]	@ 000643fe 1448
.org 0x64400
	muls r0, r1	@ 00064400 4843
.org 0x64402
	ldr r1, [pc, #80]	@ 00064402 1449
.org 0x64404
	adds r0, r0, r1	@ 00064404 4018
.org 0x64406
	lsls r0, r0, #1	@ 00064406 4000
.org 0x64408
	lsrs r1, r0, #1	@ 00064408 4108
.org 0x6440a
	str r1, [r2, #0]	@ 0006440a 1160
.org 0x6440c
	lsrs r5, r0, #17	@ 0006440c 450c
.org 0x6440e
	movs r0, #1	@ 0006440e 0120
.org 0x64410
	ands r5, r0	@ 00064410 0540
.org 0x64412
	movs r3, #1	@ 00064412 0123
.org 0x64414
	adds r1, r5, #0	@ 00064414 291c
.org 0x64416
	ands r1, r3	@ 00064416 1940
.org 0x64418
	adds r0, r6, #0	@ 00064418 301c
.org 0x6441a
	adds r0, #76	@ 0006441a 4c30
.org 0x6441c
	strb r1, [r0, #0]	@ 0006441c 0170
.org 0x6441e
	adds r4, r6, #0	@ 0006441e 341c
.org 0x64420
	adds r4, #74	@ 00064420 4a34
.org 0x64422
	lsls r1, r1, #4	@ 00064422 0901
.org 0x64424
	ldrb r2, [r4, #0]	@ 00064424 2278
.org 0x64426
	movs r0, #17	@ 00064426 1120
.org 0x64428
	negs r0, r0	@ 00064428 4042
.org 0x6442a
	ands r0, r2	@ 0006442a 1040
.org 0x6442c
	orrs r0, r1	@ 0006442c 0843
.org 0x6442e
	strb r0, [r4, #0]	@ 0006442e 2070
.org 0x64430
	adds r0, r5, #0	@ 00064430 281c
.org 0x64432
	ands r0, r3	@ 00064432 1840
.org 0x64434
	cmp r0, #0	@ 00064434 0028
.org 0x64436
	beq.n 0x64458	@ 00064436 0fd0
.org 0x64438
	ldrb r0, [r6, #10]	@ 00064438 b07a
.org 0x6443a
	movs r1, #16	@ 0006443a 1021
.org 0x6443c
	orrs r0, r1	@ 0006443c 0843
.org 0x6443e
	b.n 0x6445e	@ 0006443e 0ee0
.org 0x64440
	.byte 0x80,0xaf,0x85,0x08	@ 00064440 data
.org 0x64444
	.byte 0xa0,0xb0,0x85,0x08	@ 00064444 data
.org 0x64448
	.byte 0x98,0xb0,0x85,0x08	@ 00064448 data
.org 0x6444c
	.byte 0x38,0xdc,0x02,0x02	@ 0006444c data
.org 0x64450
	.byte 0xfd,0x43,0x03,0x00	@ 00064450 data
.org 0x64454
	.byte 0xc3,0x9e,0x26,0x00	@ 00064454 data
.org 0x64458
	ldrb r1, [r6, #10]	@ 00064458 b17a
.org 0x6445a
	movs r0, #239	@ 0006445a ef20
.org 0x6445c
	ands r0, r1	@ 0006445c 0840
.org 0x6445e
	strb r0, [r6, #10]	@ 0006445e b072
.org 0x64460
	cmp r5, #0	@ 00064460 002d
.org 0x64462
	beq.n 0x64472	@ 00064462 06d0
.org 0x64464
	adds r0, r6, #0	@ 00064464 301c
.org 0x64466
	adds r0, #208	@ 00064466 d030
.org 0x64468
	ldr r0, [r0, #0]	@ 00064468 0068
.org 0x6446a
	movs r2, #160	@ 0006446a a022
.org 0x6446c
	lsls r2, r2, #6	@ 0006446c 9201
.org 0x6446e
	adds r0, r0, r2	@ 0006446e 8018
.org 0x64470
	b.n 0x6447e	@ 00064470 05e0
.org 0x64472
	adds r0, r6, #0	@ 00064472 301c
.org 0x64474
	adds r0, #208	@ 00064474 d030
.org 0x64476
	ldr r0, [r0, #0]	@ 00064476 0068
.org 0x64478
	movs r3, #200	@ 00064478 c823
.org 0x6447a
	lsls r3, r3, #8	@ 0006447a 1b02
.org 0x6447c
	adds r0, r0, r3	@ 0006447c c018
.org 0x6447e
	str r0, [r6, #84]	@ 0006447e 7065
.org 0x64480
	mov r1, sp	@ 00064480 6946
.org 0x64482
	ldr r0, [pc, #40]	@ 00064482 0a48
.org 0x64484
	ldmia r0!, {r2, r3, r4}	@ 00064484 1cc8
.org 0x64486
	stmia r1!, {r2, r3, r4}	@ 00064486 1cc1
.org 0x64488
	adds r0, r6, #0	@ 00064488 301c
.org 0x6448a
	bl 0x66160	@ 0006448a 01f069fe
.org 0x6448e
	lsls r0, r0, #2	@ 0006448e 8000
.org 0x64490
	add r0, sp	@ 00064490 6844
.org 0x64492
	ldr r1, [r0, #0]	@ 00064492 0168
