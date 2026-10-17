@ FUN_081233ac  entry 0x081233ac  size 312
.thumb
.org 0x1233ac
FUN_081233ac:
	push {r4, r5, r6, lr}	@ 001233ac 70b5
.org 0x1233ae
	sub sp, #8	@ 001233ae 82b0
.org 0x1233b0
	adds r5, r0, #0	@ 001233b0 051c
.org 0x1233b2
	ldr r0, [pc, #172]	@ 001233b2 2b48
.org 0x1233b4
	adds r1, r5, r0	@ 001233b4 2918
.org 0x1233b6
	ldr r0, [r1, #0]	@ 001233b6 0868
.org 0x1233b8
	adds r0, #1	@ 001233b8 0130
.org 0x1233ba
	str r0, [r1, #0]	@ 001233ba 0860
.org 0x1233bc
	movs r1, #154	@ 001233bc 9a21
.org 0x1233be
	lsls r1, r1, #4	@ 001233be 0901
.org 0x1233c0
	adds r4, r5, r1	@ 001233c0 6c18
.org 0x1233c2
	adds r0, r4, #0	@ 001233c2 201c
.org 0x1233c4
	bl 0x3470	@ 001233c4 e0f654f8
.org 0x1233c8
	ldr r1, [pc, #152]	@ 001233c8 2649
.org 0x1233ca
	movs r0, #0	@ 001233ca 0020
.org 0x1233cc
	strb r0, [r1, #0]	@ 001233cc 0870
.org 0x1233ce
	movs r0, #0	@ 001233ce 0020
.org 0x1233d0
	ldr r1, [pc, #148]	@ 001233d0 2549
.org 0x1233d2
	str r0, [sp, #0]	@ 001233d2 0090
.org 0x1233d4
	ldr r2, [pc, #148]	@ 001233d4 254a
.org 0x1233d6
	mov r0, sp	@ 001233d6 6846
.org 0x1233d8
	bl 0x128be0	@ 001233d8 05f002fc
.org 0x1233dc
	ldr r0, [pc, #144]	@ 001233dc 2448
.org 0x1233de
	ldr r0, [r0, #0]	@ 001233de 0068
.org 0x1233e0
	adds r1, r4, #0	@ 001233e0 211c
.org 0x1233e2
	bl 0x1ca0c	@ 001233e2 f9f613fb
.org 0x1233e6
	ldr r0, [pc, #140]	@ 001233e6 2348
.org 0x1233e8
	ldr r0, [r0, #0]	@ 001233e8 0068
.org 0x1233ea
	adds r1, r4, #0	@ 001233ea 211c
.org 0x1233ec
	bl 0x1ca0c	@ 001233ec f9f60efb
.org 0x1233f0
	ldr r0, [pc, #132]	@ 001233f0 2148
.org 0x1233f2
	ldr r0, [r0, #0]	@ 001233f2 0068
.org 0x1233f4
	adds r1, r4, #0	@ 001233f4 211c
.org 0x1233f6
	bl 0x1ca0c	@ 001233f6 f9f609fb
.org 0x1233fa
	adds r0, r4, #0	@ 001233fa 201c
.org 0x1233fc
	bl 0x3a7dc	@ 001233fc 17f7eef9
.org 0x123400
	ldr r0, [pc, #120]	@ 00123400 1e48
.org 0x123402
	ldr r0, [r0, #0]	@ 00123402 0068
.org 0x123404
	adds r1, r4, #0	@ 00123404 211c
.org 0x123406
	bl 0x1c924	@ 00123406 f9f68dfa
.org 0x12340a
	ldr r0, [pc, #116]	@ 0012340a 1d48
.org 0x12340c
	ldr r0, [r0, #0]	@ 0012340c 0068
.org 0x12340e
	adds r1, r4, #0	@ 0012340e 211c
.org 0x123410
	bl 0x1c924	@ 00123410 f9f688fa
.org 0x123414
	ldr r0, [pc, #108]	@ 00123414 1b48
.org 0x123416
	ldr r0, [r0, #0]	@ 00123416 0068
.org 0x123418
	adds r1, r4, #0	@ 00123418 211c
.org 0x12341a
	bl 0x1ca0c	@ 0012341a f9f6f7fa
.org 0x12341e
	bl 0x10e4cc	@ 0012341e ebf755f8
.org 0x123422
	adds r0, r4, #0	@ 00123422 201c
.org 0x123424
	bl 0x6d2c	@ 00123424 e3f682fc
.org 0x123428
	adds r0, r4, #0	@ 00123428 201c
.org 0x12342a
	bl 0x3420	@ 0012342a dff6f9ff
.org 0x12342e
	ldrb r4, [r5, #3]	@ 0012342e ec78
.org 0x123430
	cmp r4, #0	@ 00123430 002c
.org 0x123432
	bne.n 0x123504	@ 00123432 67d1
.org 0x123434
	ldr r0, [pc, #80]	@ 00123434 1448
.org 0x123436
	ldrh r0, [r0, #2]	@ 00123436 4088
.org 0x123438
	cmp r0, #0	@ 00123438 0028
.org 0x12343a
	beq.n 0x123440	@ 0012343a 01d0
.org 0x12343c
	cmp r0, #4	@ 0012343c 0428
.org 0x12343e
	bne.n 0x123520	@ 0012343e 6fd1
.org 0x123440
	movs r1, #6	@ 00123440 0621
.org 0x123442
	ldrsh r0, [r5, r1]	@ 00123442 685e
.org 0x123444
	cmp r0, #1	@ 00123444 0128
.org 0x123446
	bne.n 0x123490	@ 00123446 23d1
.org 0x123448
	ldr r0, [pc, #64]	@ 00123448 1048
.org 0x12344a
	ldrh r1, [r0, #6]	@ 0012344a c188
.org 0x12344c
	movs r0, #192	@ 0012344c c020
.org 0x12344e
	ands r0, r1	@ 0012344e 0840
.org 0x123450
	cmp r0, #0	@ 00123450 0028
.org 0x123452
	beq.n 0x1234a6	@ 00123452 28d0
.org 0x123454
	movs r0, #1	@ 00123454 0120
.org 0x123456
	bl 0x2b10	@ 00123456 dff65bfb
.org 0x12345a
	strh r4, [r5, #6]	@ 0012345a ec80
.org 0x12345c
	b.n 0x1234a6	@ 0012345c 23e0
.org 0x12345e
	.byte 0x00	@ 0012345e data
.org 0x12345f
	.byte 0x00	@ 0012345f data
.org 0x123460
	.byte 0xd8,0x1e,0x00,0x00	@ 00123460 data
.org 0x123464
	.byte 0x04,0xdc,0x02,0x02	@ 00123464 data
.org 0x123468
	.byte 0x10,0xdc,0x02,0x02	@ 00123468 data
.org 0x12346c
	.byte 0x08,0x00,0x00,0x01	@ 0012346c data
.org 0x123470
	.byte 0xa0,0xed,0x02,0x02	@ 00123470 data
.org 0x123474
	.byte 0x90,0xed,0x02,0x02	@ 00123474 data
.org 0x123478
	.byte 0x84,0xed,0x02,0x02	@ 00123478 data
.org 0x12347c
	.byte 0x94,0xed,0x02,0x02	@ 0012347c data
.org 0x123480
	.byte 0x9c,0xed,0x02,0x02	@ 00123480 data
.org 0x123484
	.byte 0xa4,0xed,0x02,0x02	@ 00123484 data
.org 0x123488
	.byte 0x88,0xf3,0x02,0x02	@ 00123488 data
.org 0x12348c
	.byte 0x60,0x07,0x00,0x02	@ 0012348c data
.org 0x123490
	ldr r0, [pc, #64]	@ 00123490 1048
.org 0x123492
	ldrh r1, [r0, #6]	@ 00123492 c188
.org 0x123494
	movs r0, #192	@ 00123494 c020
.org 0x123496
	ands r0, r1	@ 00123496 0840
.org 0x123498
	cmp r0, #0	@ 00123498 0028
.org 0x12349a
	beq.n 0x1234a6	@ 0012349a 04d0
.org 0x12349c
	movs r0, #1	@ 0012349c 0120
.org 0x12349e
	bl 0x2b10	@ 0012349e dff637fb
.org 0x1234a2
	movs r0, #1	@ 001234a2 0120
.org 0x1234a4
	strh r0, [r5, #6]	@ 001234a4 e880
.org 0x1234a6
	ldr r0, [pc, #48]	@ 001234a6 0c48
.org 0x1234a8
	ldrh r0, [r0, #0]	@ 001234a8 0088
.org 0x1234aa
	ldr r1, [pc, #48]	@ 001234aa 0c49
.org 0x1234ac
	adds r0, r0, r1	@ 001234ac 4018
.org 0x1234ae
	movs r1, #6	@ 001234ae 0621
.org 0x1234b0
	ldrsh r2, [r5, r1]	@ 001234b0 6a5e
.org 0x1234b2
	lsls r2, r2, #1	@ 001234b2 5200
.org 0x1234b4
	adds r2, #3	@ 001234b4 0332
.org 0x1234b6
	movs r1, #8	@ 001234b6 0821
.org 0x1234b8
	bl 0x10d85c	@ 001234b8 eaf7d0f9
.org 0x1234bc
	ldr r0, [pc, #20]	@ 001234bc 0548
.org 0x1234be
	ldrh r1, [r0, #6]	@ 001234be c188
.org 0x1234c0
	movs r6, #1	@ 001234c0 0126
.org 0x1234c2
	movs r4, #1	@ 001234c2 0124
.org 0x1234c4
	adds r0, r4, #0	@ 001234c4 201c
.org 0x1234c6
	ands r0, r1	@ 001234c6 0840
.org 0x1234c8
	cmp r0, #0	@ 001234c8 0028
.org 0x1234ca
	beq.n 0x1234e0	@ 001234ca 09d0
.org 0x1234cc
	movs r0, #2	@ 001234cc 0220
.org 0x1234ce
	bl 0x2b10	@ 001234ce dff61ffb
.org 0x1234d2
	b.n 0x1234f0	@ 001234d2 0de0
.org 0x1234d4
	.byte 0x60,0x07,0x00,0x02	@ 001234d4 data
.org 0x1234d8
	.byte 0xf8,0xcf,0x86,0x08	@ 001234d8 data
.org 0x1234dc
	.byte 0x5f,0x0e,0x01,0x09	@ 001234dc data
.org 0x1234e0
	movs r0, #2	@ 001234e0 0220
.org 0x1234e2
	ands r0, r1	@ 001234e2 0840
