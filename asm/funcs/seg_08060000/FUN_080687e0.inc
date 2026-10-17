@ FUN_080687e0  entry 0x080687e0  size 178
.thumb
.org 0x687e0
FUN_080687e0:
	push {r4, r5, lr}	@ 000687e0 30b5
.org 0x687e2
	adds r4, r0, #0	@ 000687e2 041c
.org 0x687e4
	ldrb r5, [r4, #14]	@ 000687e4 a57b
.org 0x687e6
	cmp r5, #0	@ 000687e6 002d
.org 0x687e8
	bne.n 0x68802	@ 000687e8 0bd1
.org 0x687ea
	ldr r1, [pc, #120]	@ 000687ea 1e49
.org 0x687ec
	bl 0x1cf00	@ 000687ec b4f788fb
.org 0x687f0
	adds r0, r4, #0	@ 000687f0 201c
.org 0x687f2
	adds r0, #116	@ 000687f2 7430
.org 0x687f4
	ldr r1, [pc, #112]	@ 000687f4 1c49
.org 0x687f6
	bl 0x5784	@ 000687f6 9cf7c5ff
.org 0x687fa
	strb r5, [r4, #15]	@ 000687fa e573
.org 0x687fc
	ldrb r0, [r4, #14]	@ 000687fc a07b
.org 0x687fe
	adds r0, #1	@ 000687fe 0130
.org 0x68800
	strb r0, [r4, #14]	@ 00068800 a073
.org 0x68802
	adds r0, r4, #0	@ 00068802 201c
.org 0x68804
	bl 0x1cff0	@ 00068804 b4f7f4fb
.org 0x68808
	ldrb r0, [r4, #15]	@ 00068808 e07b
.org 0x6880a
	cmp r0, #0	@ 0006880a 0028
.org 0x6880c
	bne.n 0x6888a	@ 0006880c 3dd1
.org 0x6880e
	adds r0, r4, #0	@ 0006880e 201c
.org 0x68810
	adds r0, #115	@ 00068810 7330
.org 0x68812
	ldrb r0, [r0, #0]	@ 00068812 0078
.org 0x68814
	cmp r0, #3	@ 00068814 0328
.org 0x68816
	bne.n 0x6889c	@ 00068816 41d1
.org 0x68818
	ldr r1, [pc, #80]	@ 00068818 1449
.org 0x6881a
	adds r0, r4, #0	@ 0006881a 201c
.org 0x6881c
	bl 0x1cf00	@ 0006881c b4f770fb
.org 0x68820
	movs r3, #0	@ 00068820 0023
.org 0x68822
	ldr r0, [pc, #76]	@ 00068822 1348
.org 0x68824
	ldr r2, [r0, #0]	@ 00068824 0268
.org 0x68826
	ldr r1, [r4, #84]	@ 00068826 616d
.org 0x68828
	ldr r0, [r2, #84]	@ 00068828 506d
.org 0x6882a
	cmp r1, r0	@ 0006882a 8142
.org 0x6882c
	bge.n 0x68830	@ 0006882c 00da
.org 0x6882e
	movs r3, #1	@ 0006882e 0123
.org 0x68830
	adds r0, r4, #0	@ 00068830 201c
.org 0x68832
	adds r0, #76	@ 00068832 4c30
.org 0x68834
	strb r3, [r0, #0]	@ 00068834 0370
.org 0x68836
	movs r3, #0	@ 00068836 0023
.org 0x68838
	ldr r1, [r4, #84]	@ 00068838 616d
.org 0x6883a
	ldr r0, [r2, #84]	@ 0006883a 506d
.org 0x6883c
	cmp r1, r0	@ 0006883c 8142
.org 0x6883e
	bge.n 0x68842	@ 0006883e 00da
.org 0x68840
	movs r3, #1	@ 00068840 0123
.org 0x68842
	movs r0, #74	@ 00068842 4a20
.org 0x68844
	adds r0, r0, r4	@ 00068844 0019
.org 0x68846
	mov ip, r0	@ 00068846 8446
.org 0x68848
	lsls r2, r3, #4	@ 00068848 1a01
.org 0x6884a
	ldrb r1, [r0, #0]	@ 0006884a 0178
.org 0x6884c
	movs r0, #17	@ 0006884c 1120
.org 0x6884e
	negs r0, r0	@ 0006884e 4042
.org 0x68850
	ands r0, r1	@ 00068850 0840
.org 0x68852
	orrs r0, r2	@ 00068852 1043
.org 0x68854
	mov r1, ip	@ 00068854 6146
.org 0x68856
	strb r0, [r1, #0]	@ 00068856 0870
.org 0x68858
	cmp r3, #0	@ 00068858 002b
.org 0x6885a
	beq.n 0x68874	@ 0006885a 0bd0
.org 0x6885c
	ldrb r0, [r4, #10]	@ 0006885c a07a
.org 0x6885e
	movs r1, #16	@ 0006885e 1021
.org 0x68860
	orrs r0, r1	@ 00068860 0843
.org 0x68862
	b.n 0x6887a	@ 00068862 0ae0
.org 0x68864
	.byte 0x04,0xa9,0x00,0x00	@ 00068864 data
.org 0x68868
	.byte 0xfc,0xb1,0x85,0x08	@ 00068868 data
.org 0x6886c
	.byte 0x05,0xa9,0x00,0x00	@ 0006886c data
.org 0x68870
	.byte 0xf0,0xdb,0x02,0x02	@ 00068870 data
.org 0x68874
	ldrb r1, [r4, #10]	@ 00068874 a17a
.org 0x68876
	movs r0, #239	@ 00068876 ef20
.org 0x68878
	ands r0, r1	@ 00068878 0840
.org 0x6887a
	strb r0, [r4, #10]	@ 0006887a a072
.org 0x6887c
	adds r0, r4, #0	@ 0006887c 201c
.org 0x6887e
	bl 0x1cff0	@ 0006887e b4f7b7fb
.org 0x68882
	ldrb r0, [r4, #15]	@ 00068882 e07b
.org 0x68884
	adds r0, #1	@ 00068884 0130
.org 0x68886
	strb r0, [r4, #15]	@ 00068886 e073
.org 0x68888
	b.n 0x6889c	@ 00068888 08e0
.org 0x6888a
	adds r0, r4, #0	@ 0006888a 201c
.org 0x6888c
	adds r0, #115	@ 0006888c 7330
.org 0x6888e
	ldrb r0, [r0, #0]	@ 0006888e 0078
.org 0x68890
	cmp r0, #3	@ 00068890 0328
