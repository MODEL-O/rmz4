@ FUN_080a9654  entry 0x080a9654  size 264
.thumb
.org 0xa9654
FUN_080a9654:
	push {r4, r5, r6, r7, lr}	@ 000a9654 f0b5
.org 0xa9656
	adds r5, r0, #0	@ 000a9656 051c
.org 0xa9658
	ldrb r0, [r5, #15]	@ 000a9658 e87b
.org 0xa965a
	cmp r0, #0	@ 000a965a 0028
.org 0xa965c
	bne.n 0xa96d2	@ 000a965c 39d1
.org 0xa965e
	ldr r1, [pc, #72]	@ 000a965e 1249
.org 0xa9660
	adds r0, r5, #0	@ 000a9660 281c
.org 0xa9662
	bl 0x1cf00	@ 000a9662 73f74dfc
.org 0xa9666
	adds r4, r5, #0	@ 000a9666 2c1c
.org 0xa9668
	adds r4, #188	@ 000a9668 bc34
.org 0xa966a
	ldrb r1, [r4, #0]	@ 000a966a 2178
.org 0xa966c
	movs r2, #1	@ 000a966c 0122
.org 0xa966e
	adds r0, r2, #0	@ 000a966e 101c
.org 0xa9670
	ands r0, r1	@ 000a9670 0840
.org 0xa9672
	adds r1, r5, #0	@ 000a9672 291c
.org 0xa9674
	adds r1, #76	@ 000a9674 4c31
.org 0xa9676
	strb r0, [r1, #0]	@ 000a9676 0870
.org 0xa9678
	ldrb r0, [r4, #0]	@ 000a9678 2078
.org 0xa967a
	movs r1, #74	@ 000a967a 4a21
.org 0xa967c
	adds r1, r1, r5	@ 000a967c 4919
.org 0xa967e
	mov ip, r1	@ 000a967e 8c46
.org 0xa9680
	adds r1, r2, #0	@ 000a9680 111c
.org 0xa9682
	ands r1, r0	@ 000a9682 0140
.org 0xa9684
	lsls r1, r1, #4	@ 000a9684 0901
.org 0xa9686
	mov r0, ip	@ 000a9686 6046
.org 0xa9688
	ldrb r3, [r0, #0]	@ 000a9688 0378
.org 0xa968a
	movs r0, #17	@ 000a968a 1120
.org 0xa968c
	negs r0, r0	@ 000a968c 4042
.org 0xa968e
	ands r0, r3	@ 000a968e 1840
.org 0xa9690
	orrs r0, r1	@ 000a9690 0843
.org 0xa9692
	mov r1, ip	@ 000a9692 6146
.org 0xa9694
	strb r0, [r1, #0]	@ 000a9694 0870
.org 0xa9696
	ldrb r0, [r4, #0]	@ 000a9696 2078
.org 0xa9698
	ands r2, r0	@ 000a9698 0240
.org 0xa969a
	cmp r2, #0	@ 000a969a 002a
.org 0xa969c
	beq.n 0xa96ac	@ 000a969c 06d0
.org 0xa969e
	ldrb r0, [r5, #10]	@ 000a969e a87a
.org 0xa96a0
	movs r1, #16	@ 000a96a0 1021
.org 0xa96a2
	orrs r0, r1	@ 000a96a2 0843
.org 0xa96a4
	b.n 0xa96b2	@ 000a96a4 05e0
.org 0xa96a6
	.byte 0x00	@ 000a96a6 data
.org 0xa96a7
	.byte 0x00	@ 000a96a7 data
.org 0xa96a8
	.byte 0x0d,0x93,0x00,0x00	@ 000a96a8 data
.org 0xa96ac
	ldrb r1, [r5, #10]	@ 000a96ac a97a
.org 0xa96ae
	movs r0, #239	@ 000a96ae ef20
.org 0xa96b0
	ands r0, r1	@ 000a96b0 0840
.org 0xa96b2
	strb r0, [r5, #10]	@ 000a96b2 a872
.org 0xa96b4
	adds r0, r5, #0	@ 000a96b4 281c
.org 0xa96b6
	adds r0, #84	@ 000a96b6 5430
.org 0xa96b8
	ldrb r3, [r5, #10]	@ 000a96b8 ab7a
.org 0xa96ba
	lsrs r3, r3, #4	@ 000a96ba 1b09
.org 0xa96bc
	movs r1, #1	@ 000a96bc 0121
.org 0xa96be
	ands r3, r1	@ 000a96be 0b40
.org 0xa96c0
	movs r1, #6	@ 000a96c0 0621
.org 0xa96c2
	movs r2, #0	@ 000a96c2 0022
.org 0xa96c4
	bl 0xdd574	@ 000a96c4 33f056ff
.org 0xa96c8
	movs r0, #0	@ 000a96c8 0020
.org 0xa96ca
	str r0, [r5, #96]	@ 000a96ca 2866
.org 0xa96cc
	ldrb r0, [r5, #15]	@ 000a96cc e87b
.org 0xa96ce
	adds r0, #1	@ 000a96ce 0130
.org 0xa96d0
	strb r0, [r5, #15]	@ 000a96d0 e873
.org 0xa96d2
	adds r0, r5, #0	@ 000a96d2 281c
.org 0xa96d4
	bl 0x1cff0	@ 000a96d4 73f78cfc
.org 0xa96d8
	ldr r1, [r5, #88]	@ 000a96d8 a96d
.org 0xa96da
	ldr r0, [r5, #96]	@ 000a96da 286e
.org 0xa96dc
	adds r1, r1, r0	@ 000a96dc 0918
.org 0xa96de
	str r1, [r5, #88]	@ 000a96de a965
.org 0xa96e0
	adds r0, #64	@ 000a96e0 4030
.org 0xa96e2
	str r0, [r5, #96]	@ 000a96e2 2866
.org 0xa96e4
	ldr r0, [r5, #84]	@ 000a96e4 686d
.org 0xa96e6
	bl 0x7c7c	@ 000a96e6 5ef7c9fa
.org 0xa96ea
	lsls r0, r0, #16	@ 000a96ea 0004
.org 0xa96ec
	cmp r0, #0	@ 000a96ec 0028
.org 0xa96ee
	beq.n 0xa9762	@ 000a96ee 38d0
.org 0xa96f0
	adds r4, r5, #0	@ 000a96f0 2c1c
.org 0xa96f2
	adds r4, #84	@ 000a96f2 5434
.org 0xa96f4
	ldr r7, [pc, #24]	@ 000a96f4 064f
.org 0xa96f6
	adds r0, r5, #0	@ 000a96f6 281c
.org 0xa96f8
	adds r0, #188	@ 000a96f8 bc30
.org 0xa96fa
	ldrb r2, [r0, #0]	@ 000a96fa 0278
.org 0xa96fc
	ldrb r1, [r5, #10]	@ 000a96fc a97a
.org 0xa96fe
	movs r3, #16	@ 000a96fe 1023
.org 0xa9700
	adds r0, r3, #0	@ 000a9700 181c
.org 0xa9702
	ands r0, r1	@ 000a9702 0840
.org 0xa9704
	adds r6, r4, #0	@ 000a9704 261c
.org 0xa9706
	cmp r0, #0	@ 000a9706 0028
.org 0xa9708
	beq.n 0xa9714	@ 000a9708 04d0
.org 0xa970a
	orrs r3, r2	@ 000a970a 1343
.org 0xa970c
	b.n 0xa9716	@ 000a970c 03e0
.org 0xa970e
	.byte 0x00	@ 000a970e data
.org 0xa970f
	.byte 0x00	@ 000a970f data
.org 0xa9710
	.byte 0x20,0x29,0x86,0x08	@ 000a9710 data
.org 0xa9714
	adds r3, r2, #0	@ 000a9714 131c
.org 0xa9716
	adds r0, r4, #0	@ 000a9716 201c
.org 0xa9718
	adds r1, r7, #0	@ 000a9718 391c
.org 0xa971a
	movs r2, #0	@ 000a971a 0022
.org 0xa971c
	bl 0xd4c8c	@ 000a971c 2bf0b6fa
.org 0xa9720
	adds r4, r6, #0	@ 000a9720 341c
.org 0xa9722
	movs r0, #1	@ 000a9722 0120
.org 0xa9724
	adds r1, r4, #0	@ 000a9724 211c
.org 0xa9726
	bl 0xd0c88	@ 000a9726 27f0affa
.org 0xa972a
	movs r0, #42	@ 000a972a 2a20
.org 0xa972c
	bl 0x2b10	@ 000a972c 59f7f0f9
.org 0xa9730
	movs r0, #0	@ 000a9730 0020
.org 0xa9732
	movs r1, #10	@ 000a9732 0a21
.org 0xa9734
	adds r2, r4, #0	@ 000a9734 221c
.org 0xa9736
	bl 0x2ab88	@ 000a9736 81f727fa
.org 0xa973a
	ldr r2, [pc, #44]	@ 000a973a 0b4a
.org 0xa973c
	ldrh r1, [r2, #12]	@ 000a973c 9189
.org 0xa973e
	ldr r0, [pc, #44]	@ 000a973e 0b48
.org 0xa9740
	cmp r1, r0	@ 000a9740 8142
.org 0xa9742
	bhi.n 0xa9748	@ 000a9742 01d8
.org 0xa9744
	adds r0, r1, #1	@ 000a9744 481c
.org 0xa9746
	strh r0, [r2, #12]	@ 000a9746 9081
.org 0xa9748
	adds r0, r5, #0	@ 000a9748 281c
.org 0xa974a
	adds r1, r6, #0	@ 000a974a 311c
.org 0xa974c
	bl 0x2abe0	@ 000a974c 81f748fa
.org 0xa9750
	ldr r1, [pc, #28]	@ 000a9750 0749
.org 0xa9752
	ldrb r0, [r5, #9]	@ 000a9752 687a
.org 0xa9754
	lsls r0, r0, #2	@ 000a9754 8000
.org 0xa9756
	adds r0, r0, r1	@ 000a9756 4018
.org 0xa9758
	movs r1, #4	@ 000a9758 0421
.org 0xa975a
	str r1, [r5, #12]	@ 000a975a e960
