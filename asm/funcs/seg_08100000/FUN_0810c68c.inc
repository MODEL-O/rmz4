@ FUN_0810c68c  entry 0x0810c68c  size 228
.thumb
.org 0x10c68c
FUN_0810c68c:
	push {r4, r5, r6, r7, lr}	@ 0010c68c f0b5
.org 0x10c68e
	mov r7, r9	@ 0010c68e 4f46
.org 0x10c690
	mov r6, r8	@ 0010c690 4646
.org 0x10c692
	push {r6, r7}	@ 0010c692 c0b4
.org 0x10c694
	sub sp, #112	@ 0010c694 9cb0
.org 0x10c696
	adds r5, r0, #0	@ 0010c696 051c
.org 0x10c698
	ldr r1, [pc, #52]	@ 0010c698 0d49
.org 0x10c69a
	mov r0, sp	@ 0010c69a 6846
.org 0x10c69c
	movs r2, #88	@ 0010c69c 5822
.org 0x10c69e
	bl 0x129258	@ 0010c69e 1cf0dbfd
.org 0x10c6a2
	add r4, sp, #88	@ 0010c6a2 16ac
.org 0x10c6a4
	adds r0, r4, #0	@ 0010c6a4 201c
.org 0x10c6a6
	movs r1, #0	@ 0010c6a6 0021
.org 0x10c6a8
	movs r2, #22	@ 0010c6a8 1622
.org 0x10c6aa
	bl 0x1292b8	@ 0010c6aa 1cf005fe
.org 0x10c6ae
	movs r7, #1	@ 0010c6ae 0127
.org 0x10c6b0
	strb r7, [r4, #17]	@ 0010c6b0 6774
.org 0x10c6b2
	movs r0, #2	@ 0010c6b2 0220
.org 0x10c6b4
	strb r0, [r4, #18]	@ 0010c6b4 a074
.org 0x10c6b6
	adds r0, r5, #0	@ 0010c6b6 281c
.org 0x10c6b8
	adds r0, #117	@ 0010c6b8 7530
.org 0x10c6ba
	ldrb r0, [r0, #0]	@ 0010c6ba 0078
.org 0x10c6bc
	mov r8, r0	@ 0010c6bc 8046
.org 0x10c6be
	ldrb r1, [r5, #10]	@ 0010c6be a97a
.org 0x10c6c0
	lsrs r6, r1, #4	@ 0010c6c0 0e09
.org 0x10c6c2
	ands r6, r7	@ 0010c6c2 3e40
.org 0x10c6c4
	cmp r0, #22	@ 0010c6c4 1628
.org 0x10c6c6
	bne.n 0x10c6d4	@ 0010c6c6 05d1
.org 0x10c6c8
	movs r0, #254	@ 0010c6c8 fe20
.org 0x10c6ca
	ands r0, r1	@ 0010c6ca 0840
.org 0x10c6cc
	strb r0, [r5, #10]	@ 0010c6cc a872
.org 0x10c6ce
	b.n 0x10c766	@ 0010c6ce 4ae0
.org 0x10c6d0
	.byte 0xf4,0xa4,0x12,0x08	@ 0010c6d0 data
.org 0x10c6d4
	movs r0, #1	@ 0010c6d4 0120
.org 0x10c6d6
	orrs r0, r1	@ 0010c6d6 0843
.org 0x10c6d8
	strb r0, [r5, #10]	@ 0010c6d8 a872
.org 0x10c6da
	adds r0, r5, #0	@ 0010c6da 281c
.org 0x10c6dc
	adds r0, #116	@ 0010c6dc 7430
.org 0x10c6de
	ldrb r1, [r0, #0]	@ 0010c6de 0178
.org 0x10c6e0
	mov r9, r0	@ 0010c6e0 8146
.org 0x10c6e2
	cmp r1, #0	@ 0010c6e2 0029
.org 0x10c6e4
	beq.n 0x10c760	@ 0010c6e4 3cd0
.org 0x10c6e6
	cmp r1, #2	@ 0010c6e6 0229
.org 0x10c6e8
	bne.n 0x10c740	@ 0010c6e8 2ad1
.org 0x10c6ea
	adds r0, r5, #0	@ 0010c6ea 281c
.org 0x10c6ec
	bl 0x1cdbc	@ 0010c6ec 10f766fb
.org 0x10c6f0
	adds r1, r6, #0	@ 0010c6f0 311c
.org 0x10c6f2
	ands r1, r7	@ 0010c6f2 3940
.org 0x10c6f4
	adds r0, r5, #0	@ 0010c6f4 281c
.org 0x10c6f6
	adds r0, #76	@ 0010c6f6 4c30
.org 0x10c6f8
	strb r1, [r0, #0]	@ 0010c6f8 0170
.org 0x10c6fa
	adds r3, r5, #0	@ 0010c6fa 2b1c
.org 0x10c6fc
	adds r3, #74	@ 0010c6fc 4a33
.org 0x10c6fe
	lsls r1, r1, #4	@ 0010c6fe 0901
.org 0x10c700
	ldrb r2, [r3, #0]	@ 0010c700 1a78
.org 0x10c702
	movs r0, #17	@ 0010c702 1120
.org 0x10c704
	negs r0, r0	@ 0010c704 4042
.org 0x10c706
	ands r0, r2	@ 0010c706 1040
.org 0x10c708
	orrs r0, r1	@ 0010c708 0843
.org 0x10c70a
	strb r0, [r3, #0]	@ 0010c70a 1870
.org 0x10c70c
	ands r6, r7	@ 0010c70c 3e40
.org 0x10c70e
	cmp r6, #0	@ 0010c70e 002e
.org 0x10c710
	beq.n 0x10c71a	@ 0010c710 03d0
.org 0x10c712
	ldrb r0, [r5, #10]	@ 0010c712 a87a
.org 0x10c714
	movs r1, #16	@ 0010c714 1021
.org 0x10c716
	orrs r0, r1	@ 0010c716 0843
.org 0x10c718
	b.n 0x10c720	@ 0010c718 02e0
.org 0x10c71a
	ldrb r1, [r5, #10]	@ 0010c71a a97a
.org 0x10c71c
	movs r0, #239	@ 0010c71c ef20
.org 0x10c71e
	ands r0, r1	@ 0010c71e 0840
.org 0x10c720
	strb r0, [r5, #10]	@ 0010c720 a872
.org 0x10c722
	adds r0, r5, #0	@ 0010c722 281c
.org 0x10c724
	adds r0, #120	@ 0010c724 7830
.org 0x10c726
	ldrh r1, [r0, #0]	@ 0010c726 0188
.org 0x10c728
	subs r0, #40	@ 0010c728 2838
.org 0x10c72a
	strh r1, [r0, #0]	@ 0010c72a 0180
.org 0x10c72c
	adds r0, #42	@ 0010c72c 2a30
.org 0x10c72e
	ldrh r0, [r0, #0]	@ 0010c72e 0088
.org 0x10c730
	adds r1, r5, #0	@ 0010c730 291c
.org 0x10c732
	adds r1, #82	@ 0010c732 5231
.org 0x10c734
	strh r0, [r1, #0]	@ 0010c734 0880
.org 0x10c736
	adds r0, r5, #0	@ 0010c736 281c
.org 0x10c738
	adds r0, #118	@ 0010c738 7630
.org 0x10c73a
	ldrb r1, [r0, #0]	@ 0010c73a 0178
.org 0x10c73c
	subs r0, #82	@ 0010c73c 5238
.org 0x10c73e
	strb r1, [r0, #0]	@ 0010c73e 0170
.org 0x10c740
	mov r1, r8	@ 0010c740 4146
.org 0x10c742
	adds r0, r4, r1	@ 0010c742 6018
.org 0x10c744
	ldrb r0, [r0, #0]	@ 0010c744 0078
.org 0x10c746
	adds r1, r5, #0	@ 0010c746 291c
.org 0x10c748
	adds r1, #34	@ 0010c748 2231
.org 0x10c74a
	movs r4, #0	@ 0010c74a 0024
.org 0x10c74c
	strb r0, [r1, #0]	@ 0010c74c 0870
.org 0x10c74e
	mov r1, r8	@ 0010c74e 4146
.org 0x10c750
	lsls r0, r1, #2	@ 0010c750 8800
.org 0x10c752
	add r0, sp	@ 0010c752 6844
.org 0x10c754
	ldrh r1, [r0, #0]	@ 0010c754 0188
.org 0x10c756
	adds r0, r5, #0	@ 0010c756 281c
.org 0x10c758
	bl 0x1cf00	@ 0010c758 10f7d2fb
.org 0x10c75c
	mov r0, r9	@ 0010c75c 4846
.org 0x10c75e
	strb r4, [r0, #0]	@ 0010c75e 0470
.org 0x10c760
	adds r0, r5, #0	@ 0010c760 281c
.org 0x10c762
	bl 0x1cff0	@ 0010c762 10f745fc
.org 0x10c766
	add sp, #112	@ 0010c766 1cb0
.org 0x10c768
	pop {r3, r4}	@ 0010c768 18bc
.org 0x10c76a
	mov r8, r3	@ 0010c76a 9846
.org 0x10c76c
	mov r9, r4	@ 0010c76c a146
.org 0x10c76e
	pop {r4, r5, r6, r7}	@ 0010c76e f0bc
