@ FUN_080ca5d0  entry 0x080ca5d0  size 356
.thumb
.org 0xca5d0
FUN_080ca5d0:
	push {r4, r5, r6, lr}	@ 000ca5d0 70b5
.org 0xca5d2
	adds r6, r0, #0	@ 000ca5d2 061c
.org 0xca5d4
	bl 0x1cc9c	@ 000ca5d4 52f762fb
.org 0xca5d8
	ldrb r1, [r6, #10]	@ 000ca5d8 b17a
.org 0xca5da
	movs r0, #1	@ 000ca5da 0120
.org 0xca5dc
	movs r5, #0	@ 000ca5dc 0025
.org 0xca5de
	orrs r0, r1	@ 000ca5de 0843
.org 0xca5e0
	movs r1, #2	@ 000ca5e0 0221
.org 0xca5e2
	orrs r0, r1	@ 000ca5e2 0843
.org 0xca5e4
	strb r0, [r6, #10]	@ 000ca5e4 b072
.org 0xca5e6
	ldr r1, [pc, #144]	@ 000ca5e6 2449
.org 0xca5e8
	ldrb r0, [r6, #17]	@ 000ca5e8 707c
.org 0xca5ea
	lsls r0, r0, #1	@ 000ca5ea 4000
.org 0xca5ec
	adds r0, r0, r1	@ 000ca5ec 4018
.org 0xca5ee
	ldrh r1, [r0, #0]	@ 000ca5ee 0188
.org 0xca5f0
	adds r0, r6, #0	@ 000ca5f0 301c
.org 0xca5f2
	bl 0x1cf00	@ 000ca5f2 52f785fc
.org 0xca5f6
	adds r0, r6, #0	@ 000ca5f6 301c
.org 0xca5f8
	bl 0x1cff0	@ 000ca5f8 52f7fafc
.org 0xca5fc
	ldrb r1, [r6, #10]	@ 000ca5fc b17a
.org 0xca5fe
	movs r0, #4	@ 000ca5fe 0420
.org 0xca600
	orrs r0, r1	@ 000ca600 0843
.org 0xca602
	strb r0, [r6, #10]	@ 000ca602 b072
.org 0xca604
	adds r4, r6, #0	@ 000ca604 341c
.org 0xca606
	adds r4, #116	@ 000ca606 7434
.org 0xca608
	ldr r1, [pc, #112]	@ 000ca608 1c49
.org 0xca60a
	ldrb r0, [r6, #17]	@ 000ca60a 707c
.org 0xca60c
	adds r0, r0, r1	@ 000ca60c 4018
.org 0xca60e
	ldrb r0, [r0, #0]	@ 000ca60e 0078
.org 0xca610
	lsls r1, r0, #1	@ 000ca610 4100
.org 0xca612
	adds r1, r1, r0	@ 000ca612 0918
.org 0xca614
	lsls r1, r1, #3	@ 000ca614 c900
.org 0xca616
	ldr r0, [pc, #104]	@ 000ca616 1a48
.org 0xca618
	adds r1, r1, r0	@ 000ca618 0918
.org 0xca61a
	adds r2, r6, #0	@ 000ca61a 321c
.org 0xca61c
	adds r2, #84	@ 000ca61c 5432
.org 0xca61e
	adds r0, r4, #0	@ 000ca61e 201c
.org 0xca620
	movs r3, #8	@ 000ca620 0823
.org 0xca622
	bl 0x5760	@ 000ca622 3bf79df8
.org 0xca626
	str r6, [r4, #44]	@ 000ca626 e662
.org 0xca628
	str r5, [r4, #36]	@ 000ca628 6562
.org 0xca62a
	ldrb r1, [r6, #10]	@ 000ca62a b17a
.org 0xca62c
	movs r0, #16	@ 000ca62c 1020
.org 0xca62e
	ands r0, r1	@ 000ca62e 0840
.org 0xca630
	cmp r0, #0	@ 000ca630 0028
.org 0xca632
	beq.n 0xca690	@ 000ca632 2dd0
.org 0xca634
	ldr r1, [pc, #76]	@ 000ca634 1349
.org 0xca636
	ldrb r0, [r6, #17]	@ 000ca636 707c
.org 0xca638
	lsls r0, r0, #2	@ 000ca638 8000
.org 0xca63a
	adds r0, r0, r1	@ 000ca63a 4018
.org 0xca63c
	ldr r1, [r6, #84]	@ 000ca63c 716d
.org 0xca63e
	ldr r0, [r0, #0]	@ 000ca63e 0068
.org 0xca640
	subs r1, r1, r0	@ 000ca640 091a
.org 0xca642
	str r1, [r6, #84]	@ 000ca642 7165
.org 0xca644
	ldr r3, [pc, #64]	@ 000ca644 104b
.org 0xca646
	ldr r2, [pc, #68]	@ 000ca646 114a
.org 0xca648
	ldrb r0, [r6, #17]	@ 000ca648 707c
.org 0xca64a
	lsls r0, r0, #2	@ 000ca64a 8000
.org 0xca64c
	adds r0, r0, r2	@ 000ca64c 8018
.org 0xca64e
	ldr r0, [r0, #0]	@ 000ca64e 0068
.org 0xca650
	adds r0, #64	@ 000ca650 4030
.org 0xca652
	lsls r0, r0, #24	@ 000ca652 0006
.org 0xca654
	lsrs r0, r0, #23	@ 000ca654 c00d
.org 0xca656
	adds r0, r0, r3	@ 000ca656 c018
.org 0xca658
	movs r4, #0	@ 000ca658 0024
.org 0xca65a
	ldrsh r1, [r0, r4]	@ 000ca65a 015f
.org 0xca65c
	lsls r0, r1, #1	@ 000ca65c 4800
.org 0xca65e
	adds r0, r0, r1	@ 000ca65e 4018
.org 0xca660
	lsls r0, r0, #1	@ 000ca660 4000
.org 0xca662
	str r0, [r6, #92]	@ 000ca662 f065
.org 0xca664
	ldrb r0, [r6, #17]	@ 000ca664 707c
.org 0xca666
	lsls r0, r0, #2	@ 000ca666 8000
.org 0xca668
	adds r0, r0, r2	@ 000ca668 8018
.org 0xca66a
	ldrb r0, [r0, #0]	@ 000ca66a 0078
.org 0xca66c
	lsls r0, r0, #1	@ 000ca66c 4000
.org 0xca66e
	adds r0, r0, r3	@ 000ca66e c018
.org 0xca670
	movs r2, #0	@ 000ca670 0022
.org 0xca672
	ldrsh r1, [r0, r2]	@ 000ca672 815e
.org 0xca674
	b.n 0xca6e0	@ 000ca674 34e0
.org 0xca676
	.byte 0x00	@ 000ca676 data
.org 0xca677
	.byte 0x00	@ 000ca677 data
.org 0xca678
	.byte 0xc4,0x63,0x86,0x08	@ 000ca678 data
.org 0xca67c
	.byte 0xcc,0x63,0x86,0x08	@ 000ca67c data
.org 0xca680
	.byte 0xd4,0x62,0x86,0x08	@ 000ca680 data
.org 0xca684
	.byte 0x94,0x63,0x86,0x08	@ 000ca684 data
.org 0xca688
	.byte 0x0c,0x93,0x12,0x08	@ 000ca688 data
.org 0xca68c
	.byte 0xb4,0x63,0x86,0x08	@ 000ca68c data
.org 0xca690
	ldr r1, [pc, #104]	@ 000ca690 1a49
.org 0xca692
	ldrb r0, [r6, #17]	@ 000ca692 707c
.org 0xca694
	lsls r0, r0, #2	@ 000ca694 8000
.org 0xca696
	adds r0, r0, r1	@ 000ca696 4018
.org 0xca698
	ldr r1, [r6, #84]	@ 000ca698 716d
.org 0xca69a
	ldr r0, [r0, #0]	@ 000ca69a 0068
.org 0xca69c
	adds r1, r1, r0	@ 000ca69c 0918
.org 0xca69e
	str r1, [r6, #84]	@ 000ca69e 7165
.org 0xca6a0
	ldr r3, [pc, #92]	@ 000ca6a0 174b
.org 0xca6a2
	ldr r2, [pc, #96]	@ 000ca6a2 184a
.org 0xca6a4
	ldrb r0, [r6, #17]	@ 000ca6a4 707c
.org 0xca6a6
	lsls r0, r0, #2	@ 000ca6a6 8000
.org 0xca6a8
	adds r0, r0, r2	@ 000ca6a8 8018
.org 0xca6aa
	ldr r1, [r0, #0]	@ 000ca6aa 0168
.org 0xca6ac
	movs r4, #64	@ 000ca6ac 4024
.org 0xca6ae
	negs r4, r4	@ 000ca6ae 6442
.org 0xca6b0
	adds r0, r4, #0	@ 000ca6b0 201c
.org 0xca6b2
	subs r0, r0, r1	@ 000ca6b2 401a
.org 0xca6b4
	lsls r0, r0, #24	@ 000ca6b4 0006
.org 0xca6b6
	lsrs r0, r0, #23	@ 000ca6b6 c00d
.org 0xca6b8
	adds r0, r0, r3	@ 000ca6b8 c018
.org 0xca6ba
	movs r4, #0	@ 000ca6ba 0024
.org 0xca6bc
	ldrsh r1, [r0, r4]	@ 000ca6bc 015f
.org 0xca6be
	lsls r0, r1, #1	@ 000ca6be 4800
.org 0xca6c0
	adds r0, r0, r1	@ 000ca6c0 4018
.org 0xca6c2
	lsls r0, r0, #1	@ 000ca6c2 4000
.org 0xca6c4
	str r0, [r6, #92]	@ 000ca6c4 f065
.org 0xca6c6
	ldrb r0, [r6, #17]	@ 000ca6c6 707c
.org 0xca6c8
	lsls r0, r0, #2	@ 000ca6c8 8000
.org 0xca6ca
	adds r0, r0, r2	@ 000ca6ca 8018
.org 0xca6cc
	ldr r1, [r0, #0]	@ 000ca6cc 0168
.org 0xca6ce
	movs r2, #128	@ 000ca6ce 8022
.org 0xca6d0
	negs r2, r2	@ 000ca6d0 5242
.org 0xca6d2
	adds r0, r2, #0	@ 000ca6d2 101c
.org 0xca6d4
	subs r0, r0, r1	@ 000ca6d4 401a
.org 0xca6d6
	lsls r0, r0, #24	@ 000ca6d6 0006
.org 0xca6d8
	lsrs r0, r0, #23	@ 000ca6d8 c00d
.org 0xca6da
	adds r0, r0, r3	@ 000ca6da c018
.org 0xca6dc
	movs r4, #0	@ 000ca6dc 0024
.org 0xca6de
	ldrsh r1, [r0, r4]	@ 000ca6de 015f
.org 0xca6e0
	lsls r0, r1, #1	@ 000ca6e0 4800
.org 0xca6e2
	adds r0, r0, r1	@ 000ca6e2 4018
.org 0xca6e4
	lsls r0, r0, #1	@ 000ca6e4 4000
.org 0xca6e6
	str r0, [r6, #96]	@ 000ca6e6 3066
.org 0xca6e8
	ldrb r1, [r6, #17]	@ 000ca6e8 717c
.org 0xca6ea
	ldr r0, [pc, #28]	@ 000ca6ea 0748
.org 0xca6ec
	adds r0, r1, r0	@ 000ca6ec 0818
.org 0xca6ee
	ldrb r2, [r0, #0]	@ 000ca6ee 0278
.org 0xca6f0
	cmp r2, #0	@ 000ca6f0 002a
.org 0xca6f2
	beq.n 0xca70c	@ 000ca6f2 0bd0
.org 0xca6f4
	ldrb r1, [r6, #10]	@ 000ca6f4 b17a
.org 0xca6f6
	movs r0, #32	@ 000ca6f6 2020
.org 0xca6f8
	orrs r0, r1	@ 000ca6f8 0843
.org 0xca6fa
	b.n 0xca712	@ 000ca6fa 0ae0
.org 0xca6fc
	.byte 0x94,0x63,0x86,0x08	@ 000ca6fc data
.org 0xca700
	.byte 0x0c,0x93,0x12,0x08	@ 000ca700 data
.org 0xca704
	.byte 0xb4,0x63,0x86,0x08	@ 000ca704 data
.org 0xca708
	.byte 0xd0,0x63,0x86,0x08	@ 000ca708 data
.org 0xca70c
	ldrb r1, [r6, #10]	@ 000ca70c b17a
.org 0xca70e
	movs r0, #223	@ 000ca70e df20
.org 0xca710
	ands r0, r1	@ 000ca710 0840
.org 0xca712
	strb r0, [r6, #10]	@ 000ca712 b072
.org 0xca714
	movs r3, #1	@ 000ca714 0123
.org 0xca716
	adds r1, r3, #0	@ 000ca716 191c
.org 0xca718
	ands r1, r2	@ 000ca718 1140
.org 0xca71a
	adds r0, r6, #0	@ 000ca71a 301c
.org 0xca71c
	adds r0, #77	@ 000ca71c 4d30
.org 0xca71e
	strb r1, [r0, #0]	@ 000ca71e 0170
.org 0xca720
	adds r4, r6, #0	@ 000ca720 341c
.org 0xca722
	adds r4, #74	@ 000ca722 4a34
.org 0xca724
	lsls r1, r1, #5	@ 000ca724 4901
.org 0xca726
	ldrb r2, [r4, #0]	@ 000ca726 2278
.org 0xca728
	movs r0, #33	@ 000ca728 2120
.org 0xca72a
	negs r0, r0	@ 000ca72a 4042
.org 0xca72c
	ands r0, r2	@ 000ca72c 1040
.org 0xca72e
	orrs r0, r1	@ 000ca72e 0843
.org 0xca730
	strb r0, [r4, #0]	@ 000ca730 2070
.org 0xca732
	ldr r1, [pc, #44]	@ 000ca732 0b49
