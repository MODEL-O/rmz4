@ FUN_0809482c  entry 0x0809482c  size 250
.thumb
.org 0x9482c
FUN_0809482c:
	push {r4, r5, r6, r7, lr}	@ 0009482c f0b5
.org 0x9482e
	mov r7, r9	@ 0009482e 4f46
.org 0x94830
	mov r6, r8	@ 00094830 4646
.org 0x94832
	push {r6, r7}	@ 00094832 c0b4
.org 0x94834
	sub sp, #8	@ 00094834 82b0
.org 0x94836
	ldr r2, [pc, #112]	@ 00094836 1c4a
.org 0x94838
	adds r6, r1, r2	@ 00094838 8e18
.org 0x9483a
	str r6, [sp, #0]	@ 0009483a 0096
.org 0x9483c
	ldr r1, [r0, #88]	@ 0009483c 816d
.org 0x9483e
	ldr r2, [pc, #108]	@ 0009483e 1b4a
.org 0x94840
	adds r2, r2, r1	@ 00094840 5218
.org 0x94842
	mov r8, r2	@ 00094842 9046
.org 0x94844
	str r2, [sp, #4]	@ 00094844 0192
.org 0x94846
	movs r2, #1	@ 00094846 0122
.org 0x94848
	mov r9, r2	@ 00094848 9146
.org 0x9484a
	ldr r0, [r0, #84]	@ 0009484a 406d
.org 0x9484c
	bl 0x7020	@ 0009484c 72f7e8fb
.org 0x94850
	lsls r0, r0, #16	@ 00094850 0004
.org 0x94852
	lsrs r2, r0, #16	@ 00094852 020c
.org 0x94854
	movs r0, #15	@ 00094854 0f20
.org 0x94856
	ands r2, r0	@ 00094856 0240
.org 0x94858
	adds r0, r2, #0	@ 00094858 101c
.org 0x9485a
	subs r0, #8	@ 0009485a 0838
.org 0x9485c
	lsls r0, r0, #16	@ 0009485c 0004
.org 0x9485e
	lsrs r0, r0, #16	@ 0009485e 000c
.org 0x94860
	cmp r0, #5	@ 00094860 0528
.org 0x94862
	bhi.n 0x948b0	@ 00094862 25d8
.org 0x94864
	adds r4, r6, #0	@ 00094864 341c
.org 0x94866
	movs r7, #0	@ 00094866 0027
.org 0x94868
	mov r6, r8	@ 00094868 4646
.org 0x9486a
	adds r0, r4, #0	@ 0009486a 201c
.org 0x9486c
	adds r1, r6, #0	@ 0009486c 311c
.org 0x9486e
	bl 0x7020	@ 0009486e 72f7d7fb
.org 0x94872
	lsls r0, r0, #16	@ 00094872 0004
.org 0x94874
	lsrs r2, r0, #16	@ 00094874 020c
.org 0x94876
	cmp r2, #0	@ 00094876 002a
.org 0x94878
	beq.n 0x9489a	@ 00094878 0fd0
.org 0x9487a
	movs r0, #128	@ 0009487a 8020
.org 0x9487c
	lsls r0, r0, #8	@ 0009487c 0002
.org 0x9487e
	adds r1, r0, #0	@ 0009487e 011c
.org 0x94880
	adds r0, r2, #0	@ 00094880 101c
.org 0x94882
	ands r0, r1	@ 00094882 0840
.org 0x94884
	cmp r0, #0	@ 00094884 0028
.org 0x94886
	bne.n 0x9489a	@ 00094886 08d1
.org 0x94888
	movs r0, #15	@ 00094888 0f20
.org 0x9488a
	ands r0, r2	@ 0009488a 1040
.org 0x9488c
	cmp r0, #15	@ 0009488c 0f28
.org 0x9488e
	beq.n 0x9489a	@ 0009488e 04d0
.org 0x94890
	subs r0, #8	@ 00094890 0838
.org 0x94892
	lsls r0, r0, #16	@ 00094892 0004
.org 0x94894
	lsrs r0, r0, #16	@ 00094894 000c
.org 0x94896
	cmp r0, #5	@ 00094896 0528
.org 0x94898
	bhi.n 0x9491a	@ 00094898 3fd8
.org 0x9489a
	movs r1, #128	@ 0009489a 8021
.org 0x9489c
	lsls r1, r1, #5	@ 0009489c 4901
.org 0x9489e
	adds r6, r6, r1	@ 0009489e 7618
.org 0x948a0
	adds r7, #1	@ 000948a0 0137
.org 0x948a2
	cmp r7, r9	@ 000948a2 4f45
.org 0x948a4
	ble.n 0x9486a	@ 000948a4 e1dd
.org 0x948a6
	b.n 0x94924	@ 000948a6 3de0
.org 0x948a8
	.byte 0x00,0xf9,0xff,0xff	@ 000948a8 data
.org 0x948ac
	.byte 0x00,0xe0,0xff,0xff	@ 000948ac data
.org 0x948b0
	adds r4, r6, #0	@ 000948b0 341c
.org 0x948b2
	movs r7, #0	@ 000948b2 0027
.org 0x948b4
	mov r6, r8	@ 000948b4 4646
.org 0x948b6
	movs r2, #128	@ 000948b6 8022
.org 0x948b8
	lsls r2, r2, #8	@ 000948b8 1202
.org 0x948ba
	mov r8, r2	@ 000948ba 9046
.org 0x948bc
	adds r0, r4, #0	@ 000948bc 201c
.org 0x948be
	adds r1, r6, #0	@ 000948be 311c
.org 0x948c0
	bl 0x7020	@ 000948c0 72f7aefb
.org 0x948c4
	lsls r0, r0, #16	@ 000948c4 0004
.org 0x948c6
	lsrs r2, r0, #16	@ 000948c6 020c
.org 0x948c8
	cmp r2, #0	@ 000948c8 002a
.org 0x948ca
	beq.n 0x948de	@ 000948ca 08d0
.org 0x948cc
	adds r0, r2, #0	@ 000948cc 101c
.org 0x948ce
	mov r1, r8	@ 000948ce 4146
.org 0x948d0
	ands r0, r1	@ 000948d0 0840
.org 0x948d2
	cmp r0, #0	@ 000948d2 0028
.org 0x948d4
	bne.n 0x948de	@ 000948d4 03d1
.org 0x948d6
	movs r0, #15	@ 000948d6 0f20
.org 0x948d8
	ands r2, r0	@ 000948d8 0240
.org 0x948da
	cmp r2, #15	@ 000948da 0f2a
.org 0x948dc
	bne.n 0x9491a	@ 000948dc 1dd1
.org 0x948de
	movs r2, #128	@ 000948de 8022
.org 0x948e0
	lsls r2, r2, #5	@ 000948e0 5201
.org 0x948e2
	adds r6, r6, r2	@ 000948e2 b618
.org 0x948e4
	adds r7, #1	@ 000948e4 0137
.org 0x948e6
	cmp r7, r9	@ 000948e6 4f45
.org 0x948e8
	ble.n 0x948bc	@ 000948e8 e8dd
.org 0x948ea
	ldr r0, [sp, #4]	@ 000948ea 0198
.org 0x948ec
	ldr r2, [pc, #48]	@ 000948ec 0c4a
.org 0x948ee
	adds r1, r0, r2	@ 000948ee 8118
.org 0x948f0
	ldr r0, [sp, #0]	@ 000948f0 0098
.org 0x948f2
	bl 0x7c7c	@ 000948f2 73f7c3f9
.org 0x948f6
	lsls r0, r0, #16	@ 000948f6 0004
.org 0x948f8
	lsrs r2, r0, #16	@ 000948f8 020c
.org 0x948fa
	cmp r2, #0	@ 000948fa 002a
.org 0x948fc
	beq.n 0x94924	@ 000948fc 12d0
.org 0x948fe
	movs r0, #128	@ 000948fe 8020
.org 0x94900
	lsls r0, r0, #8	@ 00094900 0002
.org 0x94902
	ands r0, r2	@ 00094902 1040
.org 0x94904
	cmp r0, #0	@ 00094904 0028
.org 0x94906
	bne.n 0x94924	@ 00094906 0dd1
.org 0x94908
	movs r0, #15	@ 00094908 0f20
.org 0x9490a
	ands r0, r2	@ 0009490a 1040
.org 0x9490c
	cmp r0, #15	@ 0009490c 0f28
.org 0x9490e
	beq.n 0x94924	@ 0009490e 09d0
.org 0x94910
	subs r0, #8	@ 00094910 0838
.org 0x94912
	lsls r0, r0, #16	@ 00094912 0004
.org 0x94914
	lsrs r0, r0, #16	@ 00094914 000c
.org 0x94916
	cmp r0, #5	@ 00094916 0528
.org 0x94918
	bls.n 0x94924	@ 00094918 04d9
.org 0x9491a
	movs r0, #1	@ 0009491a 0120
.org 0x9491c
	b.n 0x94926	@ 0009491c 03e0
.org 0x9491e
	.byte 0x00	@ 0009491e data
.org 0x9491f
	.byte 0x00	@ 0009491f data
.org 0x94920
	.byte 0xff,0x1f,0x00,0x00	@ 00094920 data
.org 0x94924
	movs r0, #0	@ 00094924 0020
