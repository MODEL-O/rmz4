@ FUN_0810a4b8  entry 0x0810a4b8  size 250
.thumb
.org 0x10a4b8
FUN_0810a4b8:
	push {r4, r5, lr}	@ 0010a4b8 30b5
.org 0x10a4ba
	adds r4, r0, #0	@ 0010a4ba 041c
.org 0x10a4bc
	ldr r5, [r4, #40]	@ 0010a4bc a56a
.org 0x10a4be
	ldr r1, [pc, #48]	@ 0010a4be 0c49
.org 0x10a4c0
	adds r0, r5, r1	@ 0010a4c0 6818
.org 0x10a4c2
	ldrb r1, [r4, #17]	@ 0010a4c2 617c
.org 0x10a4c4
	ldrb r0, [r0, #0]	@ 0010a4c4 0078
.org 0x10a4c6
	cmp r1, r0	@ 0010a4c6 8142
.org 0x10a4c8
	beq.n 0x10a530	@ 0010a4c8 32d0
.org 0x10a4ca
	ldrb r1, [r4, #16]	@ 0010a4ca 217c
.org 0x10a4cc
	cmp r0, r1	@ 0010a4cc 8842
.org 0x10a4ce
	bne.n 0x10a518	@ 0010a4ce 23d1
.org 0x10a4d0
	cmp r0, #4	@ 0010a4d0 0428
.org 0x10a4d2
	bne.n 0x10a4f8	@ 0010a4d2 11d1
.org 0x10a4d4
	ldr r1, [pc, #28]	@ 0010a4d4 0749
.org 0x10a4d6
	ldrb r0, [r4, #16]	@ 0010a4d6 207c
.org 0x10a4d8
	lsls r0, r0, #1	@ 0010a4d8 4000
.org 0x10a4da
	adds r0, r0, r1	@ 0010a4da 4018
.org 0x10a4dc
	ldrh r1, [r0, #0]	@ 0010a4dc 0188
.org 0x10a4de
	adds r1, #1	@ 0010a4de 0131
.org 0x10a4e0
	lsls r1, r1, #16	@ 0010a4e0 0904
.org 0x10a4e2
	lsrs r1, r1, #16	@ 0010a4e2 090c
.org 0x10a4e4
	adds r0, r4, #0	@ 0010a4e4 201c
.org 0x10a4e6
	movs r2, #1	@ 0010a4e6 0122
.org 0x10a4e8
	movs r3, #4	@ 0010a4e8 0423
.org 0x10a4ea
	bl 0x1cfc8	@ 0010a4ea 12f76dfd
.org 0x10a4ee
	b.n 0x10a528	@ 0010a4ee 1be0
.org 0x10a4f0
	.byte 0xcc,0x0d,0x00,0x00	@ 0010a4f0 data
.org 0x10a4f4
	.byte 0x62,0xcb,0x86,0x08	@ 0010a4f4 data
.org 0x10a4f8
	ldr r1, [pc, #24]	@ 0010a4f8 0649
.org 0x10a4fa
	ldrb r0, [r4, #16]	@ 0010a4fa 207c
.org 0x10a4fc
	lsls r0, r0, #1	@ 0010a4fc 4000
.org 0x10a4fe
	adds r0, r0, r1	@ 0010a4fe 4018
.org 0x10a500
	ldrh r1, [r0, #0]	@ 0010a500 0188
.org 0x10a502
	adds r1, #1	@ 0010a502 0131
.org 0x10a504
	lsls r1, r1, #16	@ 0010a504 0904
.org 0x10a506
	lsrs r1, r1, #16	@ 0010a506 090c
.org 0x10a508
	adds r0, r4, #0	@ 0010a508 201c
.org 0x10a50a
	movs r2, #2	@ 0010a50a 0222
.org 0x10a50c
	movs r3, #16	@ 0010a50c 1023
.org 0x10a50e
	bl 0x1cfc8	@ 0010a50e 12f75bfd
.org 0x10a512
	b.n 0x10a528	@ 0010a512 09e0
.org 0x10a514
	.byte 0x62,0xcb,0x86,0x08	@ 0010a514 data
.org 0x10a518
	ldr r0, [pc, #136]	@ 0010a518 2248
.org 0x10a51a
	ldrb r1, [r4, #16]	@ 0010a51a 217c
.org 0x10a51c
	lsls r1, r1, #1	@ 0010a51c 4900
.org 0x10a51e
	adds r1, r1, r0	@ 0010a51e 0918
.org 0x10a520
	ldrh r1, [r1, #0]	@ 0010a520 0988
.org 0x10a522
	adds r0, r4, #0	@ 0010a522 201c
.org 0x10a524
	bl 0x1cf00	@ 0010a524 12f7ecfc
.org 0x10a528
	ldr r1, [pc, #124]	@ 0010a528 1f49
.org 0x10a52a
	adds r0, r5, r1	@ 0010a52a 6818
.org 0x10a52c
	ldrb r0, [r0, #0]	@ 0010a52c 0078
.org 0x10a52e
	strb r0, [r4, #17]	@ 0010a52e 6074
.org 0x10a530
	ldrb r0, [r5, #3]	@ 0010a530 e878
.org 0x10a532
	cmp r0, #0	@ 0010a532 0028
.org 0x10a534
	beq.n 0x10a55c	@ 0010a534 12d0
.org 0x10a536
	ldr r1, [pc, #112]	@ 0010a536 1c49
.org 0x10a538
	adds r0, r5, r1	@ 0010a538 6818
.org 0x10a53a
	ldrb r0, [r0, #0]	@ 0010a53a 0078
.org 0x10a53c
	ldrb r1, [r4, #16]	@ 0010a53c 217c
.org 0x10a53e
	cmp r0, r1	@ 0010a53e 8842
.org 0x10a540
	bne.n 0x10a55c	@ 0010a540 0cd1
.org 0x10a542
	ldr r1, [pc, #96]	@ 0010a542 1849
.org 0x10a544
	ldrb r0, [r4, #16]	@ 0010a544 207c
.org 0x10a546
	lsls r0, r0, #1	@ 0010a546 4000
.org 0x10a548
	adds r0, r0, r1	@ 0010a548 4018
.org 0x10a54a
	ldrh r1, [r0, #0]	@ 0010a54a 0188
.org 0x10a54c
	adds r1, #1	@ 0010a54c 0131
.org 0x10a54e
	lsls r1, r1, #16	@ 0010a54e 0904
.org 0x10a550
	lsrs r1, r1, #16	@ 0010a550 090c
.org 0x10a552
	adds r0, r4, #0	@ 0010a552 201c
.org 0x10a554
	movs r2, #2	@ 0010a554 0222
.org 0x10a556
	movs r3, #16	@ 0010a556 1023
.org 0x10a558
	bl 0x1cfc8	@ 0010a558 12f736fd
.org 0x10a55c
	adds r0, r4, #0	@ 0010a55c 201c
.org 0x10a55e
	bl 0x1cff0	@ 0010a55e 12f747fd
.org 0x10a562
	ldr r1, [pc, #72]	@ 0010a562 1249
.org 0x10a564
	ldrb r0, [r4, #16]	@ 0010a564 207c
.org 0x10a566
	adds r0, r0, r1	@ 0010a566 4018
.org 0x10a568
	ldrb r0, [r0, #0]	@ 0010a568 0078
.org 0x10a56a
	lsls r2, r0, #8	@ 0010a56a 0202
.org 0x10a56c
	str r2, [r4, #84]	@ 0010a56c 6265
.org 0x10a56e
	ldr r1, [pc, #64]	@ 0010a56e 1049
.org 0x10a570
	ldrb r0, [r4, #16]	@ 0010a570 207c
.org 0x10a572
	adds r0, r0, r1	@ 0010a572 4018
.org 0x10a574
	ldrb r0, [r0, #0]	@ 0010a574 0078
.org 0x10a576
	lsls r0, r0, #8	@ 0010a576 0002
.org 0x10a578
	str r0, [r4, #88]	@ 0010a578 a065
.org 0x10a57a
	ldr r1, [pc, #44]	@ 0010a57a 0b49
.org 0x10a57c
	adds r0, r5, r1	@ 0010a57c 6818
.org 0x10a57e
	ldrb r0, [r0, #2]	@ 0010a57e 8078
.org 0x10a580
	cmp r0, #0	@ 0010a580 0028
.org 0x10a582
	beq.n 0x10a5b8	@ 0010a582 19d0
.org 0x10a584
	ldrb r1, [r4, #10]	@ 0010a584 a17a
.org 0x10a586
	movs r0, #254	@ 0010a586 fe20
.org 0x10a588
	ands r0, r1	@ 0010a588 0840
.org 0x10a58a
	movs r1, #253	@ 0010a58a fd21
.org 0x10a58c
	ands r0, r1	@ 0010a58c 0840
.org 0x10a58e
	strb r0, [r4, #10]	@ 0010a58e a072
.org 0x10a590
	ldr r1, [pc, #32]	@ 0010a590 0849
.org 0x10a592
	ldrb r0, [r4, #9]	@ 0010a592 607a
.org 0x10a594
	lsls r0, r0, #2	@ 0010a594 8000
.org 0x10a596
	adds r0, r0, r1	@ 0010a596 4018
.org 0x10a598
	movs r1, #3	@ 0010a598 0321
.org 0x10a59a
	str r1, [r4, #12]	@ 0010a59a e160
.org 0x10a59c
	ldr r0, [r0, #0]	@ 0010a59c 0068
.org 0x10a59e
	ldr r0, [r0, #12]	@ 0010a59e c068
.org 0x10a5a0
	str r0, [r4, #20]	@ 0010a5a0 6061
.org 0x10a5a2
	b.n 0x10a5cc	@ 0010a5a2 13e0
.org 0x10a5a4
	.byte 0x62,0xcb,0x86,0x08	@ 0010a5a4 data
.org 0x10a5a8
	.byte 0xcc,0x0d,0x00,0x00	@ 0010a5a8 data
.org 0x10a5ac
	.byte 0x58,0xcb,0x86,0x08	@ 0010a5ac data
.org 0x10a5b0
	.byte 0x5d,0xcb,0x86,0x08	@ 0010a5b0 data
