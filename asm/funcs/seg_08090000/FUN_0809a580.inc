@ FUN_0809a580  entry 0x0809a580  size 240
.thumb
.org 0x9a580
FUN_0809a580:
	push {r4, r5, lr}	@ 0009a580 30b5
.org 0x9a582
	adds r5, r0, #0	@ 0009a582 051c
.org 0x9a584
	ldrb r0, [r5, #15]	@ 0009a584 e87b
.org 0x9a586
	cmp r0, #0	@ 0009a586 0028
.org 0x9a588
	beq.n 0x9a5d0	@ 0009a588 22d0
.org 0x9a58a
	adds r0, r5, #0	@ 0009a58a 281c
.org 0x9a58c
	adds r0, #115	@ 0009a58c 7330
.org 0x9a58e
	ldrb r3, [r0, #0]	@ 0009a58e 0378
.org 0x9a590
	cmp r3, #3	@ 0009a590 032b
.org 0x9a592
	bne.n 0x9a644	@ 0009a592 57d1
.org 0x9a594
	ldrb r1, [r5, #10]	@ 0009a594 a97a
.org 0x9a596
	movs r0, #254	@ 0009a596 fe20
.org 0x9a598
	ands r0, r1	@ 0009a598 0840
.org 0x9a59a
	movs r2, #0	@ 0009a59a 0022
.org 0x9a59c
	movs r1, #253	@ 0009a59c fd21
.org 0x9a59e
	ands r0, r1	@ 0009a59e 0840
.org 0x9a5a0
	strb r0, [r5, #10]	@ 0009a5a0 a872
.org 0x9a5a2
	adds r0, r5, #0	@ 0009a5a2 281c
.org 0x9a5a4
	adds r0, #140	@ 0009a5a4 8c30
.org 0x9a5a6
	str r2, [r0, #0]	@ 0009a5a6 0260
.org 0x9a5a8
	adds r0, #4	@ 0009a5a8 0430
.org 0x9a5aa
	str r2, [r0, #0]	@ 0009a5aa 0260
.org 0x9a5ac
	adds r0, #4	@ 0009a5ac 0430
.org 0x9a5ae
	strb r2, [r0, #0]	@ 0009a5ae 0270
.org 0x9a5b0
	ldrb r1, [r5, #10]	@ 0009a5b0 a97a
.org 0x9a5b2
	movs r0, #251	@ 0009a5b2 fb20
.org 0x9a5b4
	ands r0, r1	@ 0009a5b4 0840
.org 0x9a5b6
	strb r0, [r5, #10]	@ 0009a5b6 a872
.org 0x9a5b8
	ldr r1, [pc, #16]	@ 0009a5b8 0449
.org 0x9a5ba
	ldrb r0, [r5, #9]	@ 0009a5ba 687a
.org 0x9a5bc
	lsls r0, r0, #2	@ 0009a5bc 8000
.org 0x9a5be
	adds r0, r0, r1	@ 0009a5be 4018
.org 0x9a5c0
	str r3, [r5, #12]	@ 0009a5c0 eb60
.org 0x9a5c2
	ldr r0, [r0, #0]	@ 0009a5c2 0068
.org 0x9a5c4
	ldr r0, [r0, #12]	@ 0009a5c4 c068
.org 0x9a5c6
	str r0, [r5, #20]	@ 0009a5c6 6861
.org 0x9a5c8
	b.n 0x9a670	@ 0009a5c8 52e0
.org 0x9a5ca
	.byte 0x00	@ 0009a5ca data
.org 0x9a5cb
	.byte 0x00	@ 0009a5cb data
.org 0x9a5cc
	.byte 0x40,0xdb,0x85,0x08	@ 0009a5cc data
.org 0x9a5d0
	ldr r0, [r5, #84]	@ 0009a5d0 686d
.org 0x9a5d2
	ldr r1, [r5, #92]	@ 0009a5d2 e96d
.org 0x9a5d4
	adds r0, r0, r1	@ 0009a5d4 4018
.org 0x9a5d6
	str r0, [r5, #84]	@ 0009a5d6 6865
.org 0x9a5d8
	ldr r1, [r5, #88]	@ 0009a5d8 a96d
.org 0x9a5da
	ldr r0, [r5, #96]	@ 0009a5da 286e
.org 0x9a5dc
	adds r1, r1, r0	@ 0009a5dc 0918
.org 0x9a5de
	str r1, [r5, #88]	@ 0009a5de a965
.org 0x9a5e0
	adds r0, r5, #0	@ 0009a5e0 281c
.org 0x9a5e2
	adds r0, #184	@ 0009a5e2 b830
.org 0x9a5e4
	ldr r0, [r0, #0]	@ 0009a5e4 0068
.org 0x9a5e6
	cmp r1, r0	@ 0009a5e6 8142
.org 0x9a5e8
	ble.n 0x9a644	@ 0009a5e8 2cdd
.org 0x9a5ea
	adds r4, r5, #0	@ 0009a5ea 2c1c
.org 0x9a5ec
	adds r4, #84	@ 0009a5ec 5434
.org 0x9a5ee
	adds r0, r4, #0	@ 0009a5ee 201c
.org 0x9a5f0
	movs r1, #2	@ 0009a5f0 0221
.org 0x9a5f2
	movs r2, #0	@ 0009a5f2 0022
.org 0x9a5f4
	movs r3, #0	@ 0009a5f4 0023
.org 0x9a5f6
	bl 0x99e6c	@ 0009a5f6 fff739fc
.org 0x9a5fa
	adds r0, r4, #0	@ 0009a5fa 201c
.org 0x9a5fc
	movs r1, #2	@ 0009a5fc 0221
.org 0x9a5fe
	movs r2, #1	@ 0009a5fe 0122
.org 0x9a600
	movs r3, #0	@ 0009a600 0023
.org 0x9a602
	bl 0x99e6c	@ 0009a602 fff733fc
.org 0x9a606
	adds r0, r4, #0	@ 0009a606 201c
.org 0x9a608
	movs r1, #2	@ 0009a608 0221
.org 0x9a60a
	movs r2, #2	@ 0009a60a 0222
.org 0x9a60c
	movs r3, #0	@ 0009a60c 0023
.org 0x9a60e
	bl 0x99e6c	@ 0009a60e fff72dfc
.org 0x9a612
	adds r0, r4, #0	@ 0009a612 201c
.org 0x9a614
	movs r1, #2	@ 0009a614 0221
.org 0x9a616
	movs r2, #3	@ 0009a616 0322
.org 0x9a618
	movs r3, #1	@ 0009a618 0123
.org 0x9a61a
	bl 0x99e6c	@ 0009a61a fff727fc
.org 0x9a61e
	adds r0, r4, #0	@ 0009a61e 201c
.org 0x9a620
	movs r1, #2	@ 0009a620 0221
.org 0x9a622
	movs r2, #4	@ 0009a622 0422
.org 0x9a624
	movs r3, #1	@ 0009a624 0123
.org 0x9a626
	bl 0x99e6c	@ 0009a626 fff721fc
.org 0x9a62a
	adds r0, r4, #0	@ 0009a62a 201c
.org 0x9a62c
	movs r1, #2	@ 0009a62c 0221
.org 0x9a62e
	movs r2, #5	@ 0009a62e 0522
.org 0x9a630
	movs r3, #1	@ 0009a630 0123
.org 0x9a632
	bl 0x99e6c	@ 0009a632 fff71bfc
.org 0x9a636
	ldr r1, [pc, #64]	@ 0009a636 1049
.org 0x9a638
	adds r0, r5, #0	@ 0009a638 281c
.org 0x9a63a
	bl 0x1cf00	@ 0009a63a 82f761fc
.org 0x9a63e
	ldrb r0, [r5, #15]	@ 0009a63e e87b
.org 0x9a640
	adds r0, #1	@ 0009a640 0130
.org 0x9a642
	strb r0, [r5, #15]	@ 0009a642 e873
.org 0x9a644
	adds r0, r5, #0	@ 0009a644 281c
.org 0x9a646
	bl 0x1cff0	@ 0009a646 82f7d3fc
.org 0x9a64a
	adds r0, r5, #0	@ 0009a64a 281c
.org 0x9a64c
	adds r0, #140	@ 0009a64c 8c30
.org 0x9a64e
	ldr r0, [r0, #0]	@ 0009a64e 0068
.org 0x9a650
	movs r1, #4	@ 0009a650 0421
.org 0x9a652
	ands r0, r1	@ 0009a652 0840
.org 0x9a654
	cmp r0, #0	@ 0009a654 0028
.org 0x9a656
	beq.n 0x9a670	@ 0009a656 0bd0
.org 0x9a658
	ldr r1, [pc, #32]	@ 0009a658 0849
.org 0x9a65a
	ldrb r0, [r5, #9]	@ 0009a65a 687a
.org 0x9a65c
	lsls r0, r0, #2	@ 0009a65c 8000
.org 0x9a65e
	adds r0, r0, r1	@ 0009a65e 4018
.org 0x9a660
	movs r1, #2	@ 0009a660 0221
.org 0x9a662
	str r1, [r5, #12]	@ 0009a662 e960
.org 0x9a664
	ldr r0, [r0, #0]	@ 0009a664 0068
.org 0x9a666
	ldr r0, [r0, #8]	@ 0009a666 8068
.org 0x9a668
	str r0, [r5, #20]	@ 0009a668 6861
.org 0x9a66a
	adds r0, r5, #0	@ 0009a66a 281c
.org 0x9a66c
	bl 0x99ff4	@ 0009a66c fff7c2fc
