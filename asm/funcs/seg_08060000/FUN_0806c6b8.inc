@ FUN_0806c6b8  entry 0x0806c6b8  size 180
.thumb
.org 0x6c6b8
FUN_0806c6b8:
	push {r4, r5, lr}	@ 0006c6b8 30b5
.org 0x6c6ba
	adds r4, r0, #0	@ 0006c6ba 041c
.org 0x6c6bc
	ldrb r5, [r4, #14]	@ 0006c6bc a57b
.org 0x6c6be
	cmp r5, #0	@ 0006c6be 002d
.org 0x6c6c0
	bne.n 0x6c6da	@ 0006c6c0 0bd1
.org 0x6c6c2
	ldr r1, [pc, #108]	@ 0006c6c2 1b49
.org 0x6c6c4
	bl 0x1cf00	@ 0006c6c4 b0f71cfc
.org 0x6c6c8
	adds r0, r4, #0	@ 0006c6c8 201c
.org 0x6c6ca
	adds r0, #116	@ 0006c6ca 7430
.org 0x6c6cc
	ldr r1, [pc, #100]	@ 0006c6cc 1949
.org 0x6c6ce
	bl 0x5784	@ 0006c6ce 99f759f8
.org 0x6c6d2
	strb r5, [r4, #15]	@ 0006c6d2 e573
.org 0x6c6d4
	ldrb r0, [r4, #14]	@ 0006c6d4 a07b
.org 0x6c6d6
	adds r0, #1	@ 0006c6d6 0130
.org 0x6c6d8
	strb r0, [r4, #14]	@ 0006c6d8 a073
.org 0x6c6da
	adds r0, r4, #0	@ 0006c6da 201c
.org 0x6c6dc
	bl 0x1cff0	@ 0006c6dc b0f788fc
.org 0x6c6e0
	ldrb r0, [r4, #15]	@ 0006c6e0 e07b
.org 0x6c6e2
	cmp r0, #0	@ 0006c6e2 0028
.org 0x6c6e4
	bne.n 0x6c74c	@ 0006c6e4 32d1
.org 0x6c6e6
	adds r0, r4, #0	@ 0006c6e6 201c
.org 0x6c6e8
	adds r0, #113	@ 0006c6e8 7130
.org 0x6c6ea
	ldrb r0, [r0, #0]	@ 0006c6ea 0078
.org 0x6c6ec
	lsls r0, r0, #24	@ 0006c6ec 0006
.org 0x6c6ee
	asrs r0, r0, #24	@ 0006c6ee 0016
.org 0x6c6f0
	cmp r0, #0	@ 0006c6f0 0028
.org 0x6c6f2
	ble.n 0x6c770	@ 0006c6f2 3ddd
.org 0x6c6f4
	ldrb r0, [r4, #10]	@ 0006c6f4 a07a
.org 0x6c6f6
	lsrs r0, r0, #4	@ 0006c6f6 0009
.org 0x6c6f8
	movs r2, #1	@ 0006c6f8 0122
.org 0x6c6fa
	eors r0, r2	@ 0006c6fa 5040
.org 0x6c6fc
	ands r0, r2	@ 0006c6fc 1040
.org 0x6c6fe
	adds r1, r4, #0	@ 0006c6fe 211c
.org 0x6c700
	adds r1, #76	@ 0006c700 4c31
.org 0x6c702
	strb r0, [r1, #0]	@ 0006c702 0870
.org 0x6c704
	ldrb r1, [r4, #10]	@ 0006c704 a17a
.org 0x6c706
	lsrs r1, r1, #4	@ 0006c706 0909
.org 0x6c708
	eors r1, r2	@ 0006c708 5140
.org 0x6c70a
	ands r1, r2	@ 0006c70a 1140
.org 0x6c70c
	movs r0, #74	@ 0006c70c 4a20
.org 0x6c70e
	adds r0, r0, r4	@ 0006c70e 0019
.org 0x6c710
	mov ip, r0	@ 0006c710 8446
.org 0x6c712
	lsls r3, r1, #4	@ 0006c712 0b01
.org 0x6c714
	ldrb r2, [r0, #0]	@ 0006c714 0278
.org 0x6c716
	movs r0, #17	@ 0006c716 1120
.org 0x6c718
	negs r0, r0	@ 0006c718 4042
.org 0x6c71a
	ands r0, r2	@ 0006c71a 1040
.org 0x6c71c
	orrs r0, r3	@ 0006c71c 1843
.org 0x6c71e
	mov r2, ip	@ 0006c71e 6246
.org 0x6c720
	strb r0, [r2, #0]	@ 0006c720 1070
.org 0x6c722
	cmp r1, #0	@ 0006c722 0029
.org 0x6c724
	beq.n 0x6c738	@ 0006c724 08d0
.org 0x6c726
	ldrb r0, [r4, #10]	@ 0006c726 a07a
.org 0x6c728
	movs r1, #16	@ 0006c728 1021
.org 0x6c72a
	orrs r0, r1	@ 0006c72a 0843
.org 0x6c72c
	b.n 0x6c73e	@ 0006c72c 07e0
.org 0x6c72e
	.byte 0x00	@ 0006c72e data
.org 0x6c72f
	.byte 0x00	@ 0006c72f data
.org 0x6c730
	.byte 0x19,0xaa,0x00,0x00	@ 0006c730 data
.org 0x6c734
	.byte 0xec,0xc3,0x85,0x08	@ 0006c734 data
.org 0x6c738
	ldrb r1, [r4, #10]	@ 0006c738 a17a
.org 0x6c73a
	movs r0, #239	@ 0006c73a ef20
.org 0x6c73c
	ands r0, r1	@ 0006c73c 0840
.org 0x6c73e
	strb r0, [r4, #10]	@ 0006c73e a072
.org 0x6c740
	movs r0, #8	@ 0006c740 0820
.org 0x6c742
	strb r0, [r4, #18]	@ 0006c742 a074
.org 0x6c744
	ldrb r0, [r4, #15]	@ 0006c744 e07b
.org 0x6c746
	adds r0, #1	@ 0006c746 0130
.org 0x6c748
	strb r0, [r4, #15]	@ 0006c748 e073
.org 0x6c74a
	b.n 0x6c770	@ 0006c74a 11e0
.org 0x6c74c
	cmp r0, #1	@ 0006c74c 0128
.org 0x6c74e
	bne.n 0x6c770	@ 0006c74e 0fd1
.org 0x6c750
	adds r0, r4, #0	@ 0006c750 201c
.org 0x6c752
	adds r0, #115	@ 0006c752 7330
.org 0x6c754
	ldrb r0, [r0, #0]	@ 0006c754 0078
.org 0x6c756
	cmp r0, #3	@ 0006c756 0328
.org 0x6c758
	bne.n 0x6c770	@ 0006c758 0ad1
.org 0x6c75a
	ldrb r0, [r4, #18]	@ 0006c75a a07c
.org 0x6c75c
	subs r0, #1	@ 0006c75c 0138
.org 0x6c75e
	strb r0, [r4, #18]	@ 0006c75e a074
.org 0x6c760
	lsls r0, r0, #24	@ 0006c760 0006
.org 0x6c762
	lsrs r0, r0, #24	@ 0006c762 000e
.org 0x6c764
	cmp r0, #255	@ 0006c764 ff28
.org 0x6c766
	bne.n 0x6c770	@ 0006c766 03d1
.org 0x6c768
	movs r0, #25	@ 0006c768 1920
.org 0x6c76a
	strb r0, [r4, #13]	@ 0006c76a 6073
