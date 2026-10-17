@ FUN_080e8434  entry 0x080e8434  size 236
.thumb
.org 0xe8434
FUN_080e8434:
	push {r4, r5, r6, r7, lr}	@ 000e8434 f0b5
.org 0xe8436
	sub sp, #16	@ 000e8436 84b0
.org 0xe8438
	adds r7, r0, #0	@ 000e8438 071c
.org 0xe843a
	ldr r0, [pc, #128]	@ 000e843a 2048
.org 0xe843c
	ldr r1, [r0, #4]	@ 000e843c 4168
.org 0xe843e
	ldr r0, [r0, #0]	@ 000e843e 0068
.org 0xe8440
	str r0, [sp, #0]	@ 000e8440 0090
.org 0xe8442
	str r1, [sp, #4]	@ 000e8442 0191
.org 0xe8444
	movs r0, #0	@ 000e8444 0020
.org 0xe8446
	movs r1, #0	@ 000e8446 0021
.org 0xe8448
	str r0, [sp, #8]	@ 000e8448 0290
.org 0xe844a
	str r1, [sp, #12]	@ 000e844a 0391
.org 0xe844c
	ldrb r3, [r7, #16]	@ 000e844c 3b7c
.org 0xe844e
	ldr r6, [pc, #112]	@ 000e844e 1c4e
.org 0xe8450
	ldr r0, [r6, #0]	@ 000e8450 3068
.org 0xe8452
	ldr r5, [pc, #112]	@ 000e8452 1c4d
.org 0xe8454
	adds r4, r0, #0	@ 000e8454 041c
.org 0xe8456
	muls r4, r5	@ 000e8456 6c43
.org 0xe8458
	ldr r1, [pc, #108]	@ 000e8458 1b49
.org 0xe845a
	adds r4, r4, r1	@ 000e845a 6418
.org 0xe845c
	lsls r4, r4, #1	@ 000e845c 6400
.org 0xe845e
	lsrs r0, r4, #1	@ 000e845e 6008
.org 0xe8460
	lsrs r4, r4, #17	@ 000e8460 640c
.org 0xe8462
	movs r2, #1	@ 000e8462 0122
.org 0xe8464
	ands r4, r2	@ 000e8464 1440
.org 0xe8466
	muls r0, r5	@ 000e8466 6843
.org 0xe8468
	adds r0, r0, r1	@ 000e8468 4018
.org 0xe846a
	lsls r0, r0, #1	@ 000e846a 4000
.org 0xe846c
	lsrs r1, r0, #1	@ 000e846c 4108
.org 0xe846e
	str r1, [r6, #0]	@ 000e846e 3160
.org 0xe8470
	lsrs r5, r0, #17	@ 000e8470 450c
.org 0xe8472
	ands r5, r2	@ 000e8472 1540
.org 0xe8474
	ldr r1, [pc, #84]	@ 000e8474 1549
.org 0xe8476
	ldrb r0, [r7, #9]	@ 000e8476 787a
.org 0xe8478
	lsls r0, r0, #2	@ 000e8478 8000
.org 0xe847a
	adds r0, r0, r1	@ 000e847a 4018
.org 0xe847c
	movs r1, #1	@ 000e847c 0121
.org 0xe847e
	str r1, [r7, #12]	@ 000e847e f960
.org 0xe8480
	ldr r0, [r0, #0]	@ 000e8480 0068
.org 0xe8482
	ldr r0, [r0, #4]	@ 000e8482 4068
.org 0xe8484
	str r0, [r7, #20]	@ 000e8484 7861
.org 0xe8486
	ldrb r0, [r7, #10]	@ 000e8486 b87a
.org 0xe8488
	movs r6, #0	@ 000e8488 0026
.org 0xe848a
	orrs r2, r0	@ 000e848a 0243
.org 0xe848c
	movs r0, #2	@ 000e848c 0220
.org 0xe848e
	orrs r2, r0	@ 000e848e 0243
.org 0xe8490
	strb r2, [r7, #10]	@ 000e8490 ba72
.org 0xe8492
	lsls r3, r3, #2	@ 000e8492 9b00
.org 0xe8494
	mov r1, sp	@ 000e8494 6946
.org 0xe8496
	adds r0, r3, r1	@ 000e8496 5818
.org 0xe8498
	ldr r0, [r0, #0]	@ 000e8498 0068
.org 0xe849a
	str r0, [r7, #96]	@ 000e849a 3866
.org 0xe849c
	add r0, sp, #8	@ 000e849c 02a8
.org 0xe849e
	adds r3, r3, r0	@ 000e849e 1b18
.org 0xe84a0
	ldr r0, [r3, #0]	@ 000e84a0 1868
.org 0xe84a2
	str r0, [r7, #104]	@ 000e84a2 b866
.org 0xe84a4
	movs r0, #16	@ 000e84a4 1020
.org 0xe84a6
	strb r0, [r7, #18]	@ 000e84a6 b874
.org 0xe84a8
	adds r0, r7, #0	@ 000e84a8 381c
.org 0xe84aa
	bl 0x1cc9c	@ 000e84aa 34f7f7fb
.org 0xe84ae
	cmp r4, #0	@ 000e84ae 002c
.org 0xe84b0
	beq.n 0xe84d0	@ 000e84b0 0ed0
.org 0xe84b2
	ldrb r0, [r7, #10]	@ 000e84b2 b87a
.org 0xe84b4
	movs r1, #16	@ 000e84b4 1021
.org 0xe84b6
	orrs r0, r1	@ 000e84b6 0843
.org 0xe84b8
	b.n 0xe84d6	@ 000e84b8 0de0
.org 0xe84ba
	.byte 0x00	@ 000e84ba data
.org 0xe84bb
	.byte 0x00	@ 000e84bb data
.org 0xe84bc
	.byte 0x54,0xa3,0x12,0x08	@ 000e84bc data
.org 0xe84c0
	.byte 0x38,0xdc,0x02,0x02	@ 000e84c0 data
.org 0xe84c4
	.byte 0xfd,0x43,0x03,0x00	@ 000e84c4 data
.org 0xe84c8
	.byte 0xc3,0x9e,0x26,0x00	@ 000e84c8 data
.org 0xe84cc
	.byte 0x64,0x6f,0x86,0x08	@ 000e84cc data
.org 0xe84d0
	ldrb r1, [r7, #10]	@ 000e84d0 b97a
.org 0xe84d2
	movs r0, #239	@ 000e84d2 ef20
.org 0xe84d4
	ands r0, r1	@ 000e84d4 0840
.org 0xe84d6
	strb r0, [r7, #10]	@ 000e84d6 b872
.org 0xe84d8
	adds r1, r4, #0	@ 000e84d8 211c
.org 0xe84da
	adds r0, r7, #0	@ 000e84da 381c
.org 0xe84dc
	adds r0, #76	@ 000e84dc 4c30
.org 0xe84de
	strb r1, [r0, #0]	@ 000e84de 0170
.org 0xe84e0
	adds r2, r7, #0	@ 000e84e0 3a1c
.org 0xe84e2
	adds r2, #74	@ 000e84e2 4a32
.org 0xe84e4
	lsls r1, r1, #4	@ 000e84e4 0901
.org 0xe84e6
	ldrb r3, [r2, #0]	@ 000e84e6 1378
.org 0xe84e8
	movs r0, #17	@ 000e84e8 1120
.org 0xe84ea
	negs r0, r0	@ 000e84ea 4042
.org 0xe84ec
	ands r0, r3	@ 000e84ec 1840
.org 0xe84ee
	orrs r0, r1	@ 000e84ee 0843
.org 0xe84f0
	strb r0, [r2, #0]	@ 000e84f0 1070
.org 0xe84f2
	adds r3, r5, #0	@ 000e84f2 2b1c
.org 0xe84f4
	adds r4, r2, #0	@ 000e84f4 141c
.org 0xe84f6
	cmp r3, #0	@ 000e84f6 002b
.org 0xe84f8
	beq.n 0xe8502	@ 000e84f8 03d0
.org 0xe84fa
	ldrb r0, [r7, #10]	@ 000e84fa b87a
.org 0xe84fc
	movs r1, #32	@ 000e84fc 2021
.org 0xe84fe
	orrs r0, r1	@ 000e84fe 0843
.org 0xe8500
	b.n 0xe8508	@ 000e8500 02e0
.org 0xe8502
	ldrb r1, [r7, #10]	@ 000e8502 b97a
.org 0xe8504
	movs r0, #223	@ 000e8504 df20
.org 0xe8506
	ands r0, r1	@ 000e8506 0840
.org 0xe8508
	strb r0, [r7, #10]	@ 000e8508 b872
.org 0xe850a
	adds r1, r3, #0	@ 000e850a 191c
.org 0xe850c
	adds r3, r7, #0	@ 000e850c 3b1c
.org 0xe850e
	adds r3, #77	@ 000e850e 4d33
.org 0xe8510
	strb r1, [r3, #0]	@ 000e8510 1970
.org 0xe8512
	lsls r1, r1, #5	@ 000e8512 4901
.org 0xe8514
	ldrb r2, [r4, #0]	@ 000e8514 2278
.org 0xe8516
	movs r0, #33	@ 000e8516 2120
.org 0xe8518
	negs r0, r0	@ 000e8518 4042
.org 0xe851a
	ands r0, r2	@ 000e851a 1040
.org 0xe851c
	orrs r0, r1	@ 000e851c 0843
.org 0xe851e
	strb r0, [r4, #0]	@ 000e851e 2070
