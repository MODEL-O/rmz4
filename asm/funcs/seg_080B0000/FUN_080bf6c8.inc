@ FUN_080bf6c8  entry 0x080bf6c8  size 334
.thumb
.org 0xbf6c8
FUN_080bf6c8:
	push {r4, r5, r6, r7, lr}	@ 000bf6c8 f0b5
.org 0xbf6ca
	mov r7, r8	@ 000bf6ca 4746
.org 0xbf6cc
	push {r7}	@ 000bf6cc 80b4
.org 0xbf6ce
	sub sp, #12	@ 000bf6ce 83b0
.org 0xbf6d0
	adds r6, r0, #0	@ 000bf6d0 061c
.org 0xbf6d2
	ldr r1, [pc, #152]	@ 000bf6d2 2649
.org 0xbf6d4
	mov r0, sp	@ 000bf6d4 6846
.org 0xbf6d6
	movs r2, #8	@ 000bf6d6 0822
.org 0xbf6d8
	bl 0x129258	@ 000bf6d8 69f0befd
.org 0xbf6dc
	add r5, sp, #8	@ 000bf6dc 02ad
.org 0xbf6de
	ldr r1, [pc, #144]	@ 000bf6de 2449
.org 0xbf6e0
	adds r0, r5, #0	@ 000bf6e0 281c
.org 0xbf6e2
	movs r2, #4	@ 000bf6e2 0422
.org 0xbf6e4
	bl 0x129258	@ 000bf6e4 69f0b8fd
.org 0xbf6e8
	movs r4, #0	@ 000bf6e8 0024
.org 0xbf6ea
	ldrb r7, [r6, #17]	@ 000bf6ea 777c
.org 0xbf6ec
	ldr r1, [pc, #132]	@ 000bf6ec 2149
.org 0xbf6ee
	ldrb r0, [r6, #9]	@ 000bf6ee 707a
.org 0xbf6f0
	lsls r0, r0, #2	@ 000bf6f0 8000
.org 0xbf6f2
	adds r0, r0, r1	@ 000bf6f2 4018
.org 0xbf6f4
	movs r1, #1	@ 000bf6f4 0121
.org 0xbf6f6
	str r1, [r6, #12]	@ 000bf6f6 f160
.org 0xbf6f8
	ldr r0, [r0, #0]	@ 000bf6f8 0068
.org 0xbf6fa
	ldr r0, [r0, #4]	@ 000bf6fa 4068
.org 0xbf6fc
	str r0, [r6, #20]	@ 000bf6fc 7061
.org 0xbf6fe
	strb r4, [r6, #13]	@ 000bf6fe 7473
.org 0xbf700
	strb r4, [r6, #14]	@ 000bf700 b473
.org 0xbf702
	strb r4, [r6, #15]	@ 000bf702 f473
.org 0xbf704
	adds r1, r6, #0	@ 000bf704 311c
.org 0xbf706
	adds r1, #180	@ 000bf706 b431
.org 0xbf708
	ldr r0, [r6, #84]	@ 000bf708 706d
.org 0xbf70a
	str r0, [r1, #0]	@ 000bf70a 0860
.org 0xbf70c
	adds r1, #4	@ 000bf70c 0431
.org 0xbf70e
	ldr r0, [r6, #88]	@ 000bf70e b06d
.org 0xbf710
	str r0, [r1, #0]	@ 000bf710 0860
.org 0xbf712
	ldrb r0, [r6, #10]	@ 000bf712 b07a
.org 0xbf714
	movs r1, #1	@ 000bf714 0121
.org 0xbf716
	movs r2, #0	@ 000bf716 0022
.org 0xbf718
	mov r8, r2	@ 000bf718 9046
.org 0xbf71a
	orrs r0, r1	@ 000bf71a 0843
.org 0xbf71c
	movs r1, #2	@ 000bf71c 0221
.org 0xbf71e
	orrs r0, r1	@ 000bf71e 0843
.org 0xbf720
	strb r0, [r6, #10]	@ 000bf720 b072
.org 0xbf722
	ldr r0, [pc, #84]	@ 000bf722 1548
.org 0xbf724
	str r0, [r6, #92]	@ 000bf724 f065
.org 0xbf726
	adds r0, r6, #0	@ 000bf726 301c
.org 0xbf728
	bl 0x1ce54	@ 000bf728 5df794fb
.org 0xbf72c
	adds r0, r6, #0	@ 000bf72c 301c
.org 0xbf72e
	adds r0, #80	@ 000bf72e 5030
.org 0xbf730
	strh r4, [r0, #0]	@ 000bf730 0480
.org 0xbf732
	lsls r0, r7, #1	@ 000bf732 7800
.org 0xbf734
	add r0, sp	@ 000bf734 6844
.org 0xbf736
	ldrh r0, [r0, #0]	@ 000bf736 0088
.org 0xbf738
	adds r1, r6, #0	@ 000bf738 311c
.org 0xbf73a
	adds r1, #82	@ 000bf73a 5231
.org 0xbf73c
	strh r0, [r1, #0]	@ 000bf73c 0880
.org 0xbf73e
	ldrb r1, [r6, #10]	@ 000bf73e b17a
.org 0xbf740
	movs r0, #239	@ 000bf740 ef20
.org 0xbf742
	ands r0, r1	@ 000bf742 0840
.org 0xbf744
	strb r0, [r6, #10]	@ 000bf744 b072
.org 0xbf746
	adds r0, r6, #0	@ 000bf746 301c
.org 0xbf748
	adds r0, #76	@ 000bf748 4c30
.org 0xbf74a
	strb r4, [r0, #0]	@ 000bf74a 0470
.org 0xbf74c
	adds r2, r6, #0	@ 000bf74c 321c
.org 0xbf74e
	adds r2, #74	@ 000bf74e 4a32
.org 0xbf750
	ldrb r1, [r2, #0]	@ 000bf750 1178
.org 0xbf752
	movs r0, #17	@ 000bf752 1120
.org 0xbf754
	negs r0, r0	@ 000bf754 4042
.org 0xbf756
	ands r0, r1	@ 000bf756 0840
.org 0xbf758
	strb r0, [r2, #0]	@ 000bf758 1070
.org 0xbf75a
	adds r5, r5, r7	@ 000bf75a ed19
.org 0xbf75c
	ldrb r2, [r5, #0]	@ 000bf75c 2a78
.org 0xbf75e
	cmp r2, #0	@ 000bf75e 002a
.org 0xbf760
	beq.n 0xbf77c	@ 000bf760 0cd0
.org 0xbf762
	ldrb r0, [r6, #10]	@ 000bf762 b07a
.org 0xbf764
	movs r1, #32	@ 000bf764 2021
.org 0xbf766
	orrs r0, r1	@ 000bf766 0843
.org 0xbf768
	b.n 0xbf782	@ 000bf768 0be0
.org 0xbf76a
	.byte 0x00	@ 000bf76a data
.org 0xbf76b
	.byte 0x00	@ 000bf76b data
.org 0xbf76c
	.byte 0xb4,0xa0,0x12,0x08	@ 000bf76c data
.org 0xbf770
	.byte 0xbc,0xa0,0x12,0x08	@ 000bf770 data
.org 0xbf774
	.byte 0xf4,0x49,0x86,0x08	@ 000bf774 data
.org 0xbf778
	.byte 0x00,0xfe,0xff,0xff	@ 000bf778 data
.org 0xbf77c
	ldrb r1, [r6, #10]	@ 000bf77c b17a
.org 0xbf77e
	movs r0, #223	@ 000bf77e df20
.org 0xbf780
	ands r0, r1	@ 000bf780 0840
.org 0xbf782
	strb r0, [r6, #10]	@ 000bf782 b072
.org 0xbf784
	movs r1, #1	@ 000bf784 0121
.org 0xbf786
	ands r1, r2	@ 000bf786 1140
.org 0xbf788
	adds r0, r6, #0	@ 000bf788 301c
.org 0xbf78a
	adds r0, #77	@ 000bf78a 4d30
.org 0xbf78c
	movs r4, #0	@ 000bf78c 0024
.org 0xbf78e
	movs r2, #0	@ 000bf78e 0022
.org 0xbf790
	mov r8, r2	@ 000bf790 9046
.org 0xbf792
	strb r1, [r0, #0]	@ 000bf792 0170
.org 0xbf794
	adds r3, r6, #0	@ 000bf794 331c
.org 0xbf796
	adds r3, #74	@ 000bf796 4a33
.org 0xbf798
	lsls r1, r1, #5	@ 000bf798 4901
.org 0xbf79a
	ldrb r2, [r3, #0]	@ 000bf79a 1a78
.org 0xbf79c
	movs r0, #33	@ 000bf79c 2120
.org 0xbf79e
	negs r0, r0	@ 000bf79e 4042
.org 0xbf7a0
	ands r0, r2	@ 000bf7a0 1040
.org 0xbf7a2
	orrs r0, r1	@ 000bf7a2 0843
.org 0xbf7a4
	strb r0, [r3, #0]	@ 000bf7a4 1870
.org 0xbf7a6
	movs r1, #172	@ 000bf7a6 ac21
.org 0xbf7a8
	lsls r1, r1, #6	@ 000bf7a8 8901
.org 0xbf7aa
	adds r0, r6, #0	@ 000bf7aa 301c
.org 0xbf7ac
	bl 0x1cf00	@ 000bf7ac 5df7a8fb
.org 0xbf7b0
	cmp r7, #0	@ 000bf7b0 002f
.org 0xbf7b2
	bne.n 0xbf7e8	@ 000bf7b2 19d1
.org 0xbf7b4
	ldrb r0, [r6, #10]	@ 000bf7b4 b07a
.org 0xbf7b6
	movs r1, #4	@ 000bf7b6 0421
.org 0xbf7b8
	orrs r0, r1	@ 000bf7b8 0843
.org 0xbf7ba
	strb r0, [r6, #10]	@ 000bf7ba b072
.org 0xbf7bc
	adds r4, r6, #0	@ 000bf7bc 341c
.org 0xbf7be
	adds r4, #116	@ 000bf7be 7434
.org 0xbf7c0
	ldr r1, [pc, #32]	@ 000bf7c0 0849
.org 0xbf7c2
	adds r5, r6, #0	@ 000bf7c2 351c
.org 0xbf7c4
	adds r5, #84	@ 000bf7c4 5435
.org 0xbf7c6
	adds r0, r4, #0	@ 000bf7c6 201c
.org 0xbf7c8
	adds r2, r5, #0	@ 000bf7c8 2a1c
.org 0xbf7ca
	movs r3, #64	@ 000bf7ca 4023
.org 0xbf7cc
	bl 0x5760	@ 000bf7cc 45f7c8ff
.org 0xbf7d0
	str r6, [r4, #44]	@ 000bf7d0 e662
.org 0xbf7d2
	mov r0, r8	@ 000bf7d2 4046
.org 0xbf7d4
	str r0, [r4, #36]	@ 000bf7d4 6062
.org 0xbf7d6
	adds r0, r6, #0	@ 000bf7d6 301c
.org 0xbf7d8
	adds r1, r5, #0	@ 000bf7d8 291c
.org 0xbf7da
	movs r2, #1	@ 000bf7da 0122
.org 0xbf7dc
	movs r3, #2	@ 000bf7dc 0223
.org 0xbf7de
	bl 0xbf58c	@ 000bf7de fff7d5fe
.org 0xbf7e2
	b.n 0xbf81a	@ 000bf7e2 1ae0
.org 0xbf7e4
	.byte 0x7c,0x4f,0x86,0x08	@ 000bf7e4 data
.org 0xbf7e8
	cmp r7, #1	@ 000bf7e8 012f
.org 0xbf7ea
	bne.n 0xbf81a	@ 000bf7ea 16d1
.org 0xbf7ec
	ldrb r0, [r6, #10]	@ 000bf7ec b07a
.org 0xbf7ee
	movs r1, #4	@ 000bf7ee 0421
.org 0xbf7f0
	orrs r0, r1	@ 000bf7f0 0843
.org 0xbf7f2
	strb r0, [r6, #10]	@ 000bf7f2 b072
.org 0xbf7f4
	adds r4, r6, #0	@ 000bf7f4 341c
.org 0xbf7f6
	adds r4, #116	@ 000bf7f6 7434
.org 0xbf7f8
	ldr r1, [pc, #48]	@ 000bf7f8 0c49
.org 0xbf7fa
	adds r5, r6, #0	@ 000bf7fa 351c
.org 0xbf7fc
	adds r5, #84	@ 000bf7fc 5435
.org 0xbf7fe
	adds r0, r4, #0	@ 000bf7fe 201c
.org 0xbf800
	adds r2, r5, #0	@ 000bf800 2a1c
.org 0xbf802
	movs r3, #64	@ 000bf802 4023
.org 0xbf804
	bl 0x5760	@ 000bf804 45f7acff
.org 0xbf808
	str r6, [r4, #44]	@ 000bf808 e662
.org 0xbf80a
	mov r2, r8	@ 000bf80a 4246
.org 0xbf80c
	str r2, [r4, #36]	@ 000bf80c 6262
.org 0xbf80e
	adds r0, r6, #0	@ 000bf80e 301c
.org 0xbf810
	adds r1, r5, #0	@ 000bf810 291c
.org 0xbf812
	movs r2, #1	@ 000bf812 0122
.org 0xbf814
	movs r3, #3	@ 000bf814 0323
