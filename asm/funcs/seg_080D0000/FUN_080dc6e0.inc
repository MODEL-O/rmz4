@ FUN_080dc6e0  entry 0x080dc6e0  size 352
.thumb
.org 0xdc6e0
FUN_080dc6e0:
	push {r4, r5, r6, r7, lr}	@ 000dc6e0 f0b5
.org 0xdc6e2
	adds r7, r0, #0	@ 000dc6e2 071c
.org 0xdc6e4
	ldr r0, [r7, #40]	@ 000dc6e4 b86a
.org 0xdc6e6
	ldrb r0, [r0, #10]	@ 000dc6e6 807a
.org 0xdc6e8
	lsls r0, r0, #24	@ 000dc6e8 0006
.org 0xdc6ea
	lsrs r5, r0, #28	@ 000dc6ea 050f
.org 0xdc6ec
	movs r1, #1	@ 000dc6ec 0121
.org 0xdc6ee
	ands r5, r1	@ 000dc6ee 0d40
.org 0xdc6f0
	lsrs r4, r0, #29	@ 000dc6f0 440f
.org 0xdc6f2
	ands r4, r1	@ 000dc6f2 0c40
.org 0xdc6f4
	ldrb r6, [r7, #17]	@ 000dc6f4 7e7c
.org 0xdc6f6
	ldrb r0, [r7, #14]	@ 000dc6f6 b87b
.org 0xdc6f8
	cmp r0, #0	@ 000dc6f8 0028
.org 0xdc6fa
	beq.n 0xdc702	@ 000dc6fa 02d0
.org 0xdc6fc
	cmp r0, #1	@ 000dc6fc 0128
.org 0xdc6fe
	beq.n 0xdc7be	@ 000dc6fe 5ed0
.org 0xdc700
	b.n 0xdc854	@ 000dc700 a8e0
.org 0xdc702
	ldrb r1, [r7, #10]	@ 000dc702 b97a
.org 0xdc704
	movs r0, #1	@ 000dc704 0120
.org 0xdc706
	movs r3, #0	@ 000dc706 0023
.org 0xdc708
	adds r2, r0, #0	@ 000dc708 021c
.org 0xdc70a
	orrs r2, r1	@ 000dc70a 0a43
.org 0xdc70c
	strb r2, [r7, #10]	@ 000dc70c ba72
.org 0xdc70e
	adds r1, r5, #0	@ 000dc70e 291c
.org 0xdc710
	cmp r5, #0	@ 000dc710 002d
.org 0xdc712
	beq.n 0xdc71a	@ 000dc712 02d0
.org 0xdc714
	movs r0, #16	@ 000dc714 1020
.org 0xdc716
	orrs r2, r0	@ 000dc716 0243
.org 0xdc718
	b.n 0xdc71e	@ 000dc718 01e0
.org 0xdc71a
	movs r0, #239	@ 000dc71a ef20
.org 0xdc71c
	ands r2, r0	@ 000dc71c 0240
.org 0xdc71e
	strb r2, [r7, #10]	@ 000dc71e ba72
.org 0xdc720
	adds r0, r7, #0	@ 000dc720 381c
.org 0xdc722
	adds r0, #76	@ 000dc722 4c30
.org 0xdc724
	strb r1, [r0, #0]	@ 000dc724 0170
.org 0xdc726
	adds r2, r7, #0	@ 000dc726 3a1c
.org 0xdc728
	adds r2, #74	@ 000dc728 4a32
.org 0xdc72a
	lsls r1, r1, #4	@ 000dc72a 0901
.org 0xdc72c
	ldrb r3, [r2, #0]	@ 000dc72c 1378
.org 0xdc72e
	movs r0, #17	@ 000dc72e 1120
.org 0xdc730
	negs r0, r0	@ 000dc730 4042
.org 0xdc732
	ands r0, r3	@ 000dc732 1840
.org 0xdc734
	orrs r0, r1	@ 000dc734 0843
.org 0xdc736
	strb r0, [r2, #0]	@ 000dc736 1070
.org 0xdc738
	adds r3, r4, #0	@ 000dc738 231c
.org 0xdc73a
	adds r4, r2, #0	@ 000dc73a 141c
.org 0xdc73c
	cmp r3, #0	@ 000dc73c 002b
.org 0xdc73e
	beq.n 0xdc748	@ 000dc73e 03d0
.org 0xdc740
	ldrb r0, [r7, #10]	@ 000dc740 b87a
.org 0xdc742
	movs r1, #32	@ 000dc742 2021
.org 0xdc744
	orrs r0, r1	@ 000dc744 0843
.org 0xdc746
	b.n 0xdc74e	@ 000dc746 02e0
.org 0xdc748
	ldrb r1, [r7, #10]	@ 000dc748 b97a
.org 0xdc74a
	movs r0, #223	@ 000dc74a df20
.org 0xdc74c
	ands r0, r1	@ 000dc74c 0840
.org 0xdc74e
	strb r0, [r7, #10]	@ 000dc74e b872
.org 0xdc750
	adds r1, r3, #0	@ 000dc750 191c
.org 0xdc752
	adds r2, r7, #0	@ 000dc752 3a1c
.org 0xdc754
	adds r2, #77	@ 000dc754 4d32
.org 0xdc756
	strb r1, [r2, #0]	@ 000dc756 1170
.org 0xdc758
	lsls r1, r1, #5	@ 000dc758 4901
.org 0xdc75a
	ldrb r2, [r4, #0]	@ 000dc75a 2278
.org 0xdc75c
	movs r0, #33	@ 000dc75c 2120
.org 0xdc75e
	negs r0, r0	@ 000dc75e 4042
.org 0xdc760
	ands r0, r2	@ 000dc760 1040
.org 0xdc762
	orrs r0, r1	@ 000dc762 0843
.org 0xdc764
	strb r0, [r4, #0]	@ 000dc764 2070
.org 0xdc766
	ldr r1, [r7, #116]	@ 000dc766 796f
.org 0xdc768
	lsls r0, r6, #1	@ 000dc768 7000
.org 0xdc76a
	adds r0, r0, r1	@ 000dc76a 4018
.org 0xdc76c
	ldrh r1, [r0, #0]	@ 000dc76c 0188
.org 0xdc76e
	adds r0, r7, #0	@ 000dc76e 381c
.org 0xdc770
	bl 0x1cf00	@ 000dc770 40f7c6fb
.org 0xdc774
	cmp r5, #0	@ 000dc774 002d
.org 0xdc776
	beq.n 0xdc77c	@ 000dc776 01d0
.org 0xdc778
	movs r0, #2	@ 000dc778 0220
.org 0xdc77a
	subs r6, r0, r6	@ 000dc77a 861b
.org 0xdc77c
	subs r1, r6, #1	@ 000dc77c 711e
.org 0xdc77e
	lsls r1, r1, #8	@ 000dc77e 0902
.org 0xdc780
	ldr r6, [pc, #80]	@ 000dc780 144e
.org 0xdc782
	ldr r0, [r6, #0]	@ 000dc782 3068
.org 0xdc784
	ldr r5, [pc, #80]	@ 000dc784 144d
.org 0xdc786
	muls r0, r5	@ 000dc786 6843
.org 0xdc788
	ldr r3, [pc, #80]	@ 000dc788 144b
.org 0xdc78a
	adds r0, r0, r3	@ 000dc78a c018
.org 0xdc78c
	lsls r0, r0, #1	@ 000dc78c 4000
.org 0xdc78e
	lsrs r2, r0, #1	@ 000dc78e 4208
.org 0xdc790
	lsrs r0, r0, #17	@ 000dc790 400c
.org 0xdc792
	ldr r4, [pc, #76]	@ 000dc792 134c
.org 0xdc794
	ands r0, r4	@ 000dc794 2040
.org 0xdc796
	adds r1, r1, r0	@ 000dc796 0918
.org 0xdc798
	ldr r0, [pc, #72]	@ 000dc798 1248
.org 0xdc79a
	adds r1, r1, r0	@ 000dc79a 0918
.org 0xdc79c
	str r1, [r7, #92]	@ 000dc79c f965
.org 0xdc79e
	adds r0, r2, #0	@ 000dc79e 101c
.org 0xdc7a0
	muls r0, r5	@ 000dc7a0 6843
.org 0xdc7a2
	adds r0, r0, r3	@ 000dc7a2 c018
.org 0xdc7a4
	lsls r0, r0, #1	@ 000dc7a4 4000
.org 0xdc7a6
	lsrs r1, r0, #1	@ 000dc7a6 4108
.org 0xdc7a8
	str r1, [r6, #0]	@ 000dc7a8 3160
.org 0xdc7aa
	lsrs r0, r0, #17	@ 000dc7aa 400c
.org 0xdc7ac
	ands r0, r4	@ 000dc7ac 2040
.org 0xdc7ae
	ldr r1, [pc, #56]	@ 000dc7ae 0e49
.org 0xdc7b0
	subs r1, r1, r0	@ 000dc7b0 091a
.org 0xdc7b2
	str r1, [r7, #96]	@ 000dc7b2 3966
.org 0xdc7b4
	movs r0, #0	@ 000dc7b4 0020
.org 0xdc7b6
	strb r0, [r7, #18]	@ 000dc7b6 b874
.org 0xdc7b8
	ldrb r0, [r7, #14]	@ 000dc7b8 b87b
.org 0xdc7ba
	adds r0, #1	@ 000dc7ba 0130
.org 0xdc7bc
	strb r0, [r7, #14]	@ 000dc7bc b873
.org 0xdc7be
	ldrb r0, [r7, #18]	@ 000dc7be b87c
.org 0xdc7c0
	adds r0, #1	@ 000dc7c0 0130
.org 0xdc7c2
	strb r0, [r7, #18]	@ 000dc7c2 b874
.org 0xdc7c4
	movs r1, #1	@ 000dc7c4 0121
.org 0xdc7c6
	ands r0, r1	@ 000dc7c6 0840
.org 0xdc7c8
	cmp r0, #0	@ 000dc7c8 0028
.org 0xdc7ca
	beq.n 0xdc7ec	@ 000dc7ca 0fd0
.org 0xdc7cc
	ldrb r0, [r7, #10]	@ 000dc7cc b87a
.org 0xdc7ce
	orrs r0, r1	@ 000dc7ce 0843
.org 0xdc7d0
	b.n 0xdc7f2	@ 000dc7d0 0fe0
.org 0xdc7d2
	.byte 0x00	@ 000dc7d2 data
.org 0xdc7d3
	.byte 0x00	@ 000dc7d3 data
.org 0xdc7d4
	.byte 0x38,0xdc,0x02,0x02	@ 000dc7d4 data
.org 0xdc7d8
	.byte 0xfd,0x43,0x03,0x00	@ 000dc7d8 data
.org 0xdc7dc
	.byte 0xc3,0x9e,0x26,0x00	@ 000dc7dc data
.org 0xdc7e0
	.byte 0xff,0x01,0x00,0x00	@ 000dc7e0 data
.org 0xdc7e4
	.byte 0x00,0xff,0xff,0xff	@ 000dc7e4 data
.org 0xdc7e8
	.byte 0x00,0xfe,0xff,0xff	@ 000dc7e8 data
.org 0xdc7ec
	ldrb r1, [r7, #10]	@ 000dc7ec b97a
.org 0xdc7ee
	movs r0, #254	@ 000dc7ee fe20
.org 0xdc7f0
	ands r0, r1	@ 000dc7f0 0840
.org 0xdc7f2
	strb r0, [r7, #10]	@ 000dc7f2 b872
.org 0xdc7f4
	ldr r0, [r7, #84]	@ 000dc7f4 786d
.org 0xdc7f6
	ldr r1, [r7, #92]	@ 000dc7f6 f96d
.org 0xdc7f8
	adds r0, r0, r1	@ 000dc7f8 4018
.org 0xdc7fa
	str r0, [r7, #84]	@ 000dc7fa 7865
.org 0xdc7fc
	ldr r0, [r7, #88]	@ 000dc7fc b86d
.org 0xdc7fe
	ldr r1, [r7, #96]	@ 000dc7fe 396e
.org 0xdc800
	adds r0, r0, r1	@ 000dc800 4018
.org 0xdc802
	str r0, [r7, #88]	@ 000dc802 b865
.org 0xdc804
	adds r1, #64	@ 000dc804 4031
.org 0xdc806
	str r1, [r7, #96]	@ 000dc806 3966
.org 0xdc808
	adds r0, r7, #0	@ 000dc808 381c
.org 0xdc80a
	bl 0x1d134	@ 000dc80a 40f793fc
.org 0xdc80e
	ldr r0, [r7, #84]	@ 000dc80e 786d
.org 0xdc810
	ldr r1, [r7, #88]	@ 000dc810 b96d
.org 0xdc812
	bl 0x7c7c	@ 000dc812 2bf733fa
.org 0xdc816
	lsls r0, r0, #16	@ 000dc816 0004
.org 0xdc818
	cmp r0, #0	@ 000dc818 0028
.org 0xdc81a
	beq.n 0xdc854	@ 000dc81a 1bd0
.org 0xdc81c
	ldr r0, [r7, #96]	@ 000dc81c 386e
.org 0xdc81e
	cmp r0, #0	@ 000dc81e 0028
.org 0xdc820
	ble.n 0xdc854	@ 000dc820 18dd
.org 0xdc822
	adds r0, r7, #0	@ 000dc822 381c
.org 0xdc824
	adds r0, #121	@ 000dc824 7930
.org 0xdc826
	ldrb r0, [r0, #0]	@ 000dc826 0078
.org 0xdc828
	cmp r0, #0	@ 000dc828 0028
.org 0xdc82a
	bne.n 0xdc838	@ 000dc82a 05d1
.org 0xdc82c
	adds r1, r7, #0	@ 000dc82c 391c
.org 0xdc82e
	adds r1, #84	@ 000dc82e 5431
.org 0xdc830
	movs r0, #3	@ 000dc830 0320
.org 0xdc832
	bl 0xd0c88	@ 000dc832 f4f729fa
.org 0xdc836
	b.n 0xdc842	@ 000dc836 04e0
.org 0xdc838
	adds r1, r7, #0	@ 000dc838 391c
.org 0xdc83a
	adds r1, #84	@ 000dc83a 5431
.org 0xdc83c
	movs r0, #2	@ 000dc83c 0220
.org 0xdc83e
	bl 0xd0c88	@ 000dc83e f4f723fa
