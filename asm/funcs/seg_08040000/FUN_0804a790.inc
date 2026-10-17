@ FUN_0804a790  entry 0x0804a790  size 218
.thumb
.org 0x4a790
FUN_0804a790:
	push {r4, r5, r6, lr}	@ 0004a790 70b5
.org 0x4a792
	adds r5, r0, #0	@ 0004a792 051c
.org 0x4a794
	adds r4, r1, #0	@ 0004a794 0c1c
.org 0x4a796
	lsls r2, r2, #24	@ 0004a796 1206
.org 0x4a798
	lsrs r6, r2, #24	@ 0004a798 160e
.org 0x4a79a
	ldr r0, [pc, #68]	@ 0004a79a 1148
.org 0x4a79c
	ldr r0, [r0, #0]	@ 0004a79c 0068
.org 0x4a79e
	bl 0x5500	@ 0004a79e baf7affe
.org 0x4a7a2
	mov ip, r0	@ 0004a7a2 8446
.org 0x4a7a4
	cmp r0, #0	@ 0004a7a4 0028
.org 0x4a7a6
	beq.n 0x4a880	@ 0004a7a6 6bd0
.org 0x4a7a8
	adds r0, r5, #0	@ 0004a7a8 281c
.org 0x4a7aa
	adds r0, #248	@ 0004a7aa f830
.org 0x4a7ac
	ldrb r0, [r0, #0]	@ 0004a7ac 0078
.org 0x4a7ae
	cmp r0, #2	@ 0004a7ae 0228
.org 0x4a7b0
	bne.n 0x4a7f0	@ 0004a7b0 1ed1
.org 0x4a7b2
	ldr r0, [pc, #48]	@ 0004a7b2 0c48
.org 0x4a7b4
	movs r1, #38	@ 0004a7b4 2621
.org 0x4a7b6
	mov r2, ip	@ 0004a7b6 6246
.org 0x4a7b8
	strb r1, [r2, #9]	@ 0004a7b8 5172
.org 0x4a7ba
	adds r0, #152	@ 0004a7ba 9830
.org 0x4a7bc
	ldr r0, [r0, #0]	@ 0004a7bc 0068
.org 0x4a7be
	ldr r0, [r0, #0]	@ 0004a7be 0068
.org 0x4a7c0
	str r0, [r2, #20]	@ 0004a7c0 5061
.org 0x4a7c2
	ldrb r1, [r2, #11]	@ 0004a7c2 d17a
.org 0x4a7c4
	movs r0, #191	@ 0004a7c4 bf20
.org 0x4a7c6
	ands r0, r1	@ 0004a7c6 0840
.org 0x4a7c8
	strb r0, [r2, #11]	@ 0004a7c8 d072
.org 0x4a7ca
	mov r1, ip	@ 0004a7ca 6146
.org 0x4a7cc
	adds r1, #37	@ 0004a7cc 2531
.org 0x4a7ce
	movs r0, #16	@ 0004a7ce 1020
.org 0x4a7d0
	strb r0, [r1, #0]	@ 0004a7d0 0870
.org 0x4a7d2
	ldr r0, [pc, #20]	@ 0004a7d2 0548
.org 0x4a7d4
	ldrh r0, [r0, #0]	@ 0004a7d4 0088
.org 0x4a7d6
	strh r0, [r2, #32]	@ 0004a7d6 1084
.org 0x4a7d8
	ldr r0, [pc, #16]	@ 0004a7d8 0448
.org 0x4a7da
	ldrb r0, [r0, #0]	@ 0004a7da 0078
.org 0x4a7dc
	b.n 0x4a81a	@ 0004a7dc 1de0
.org 0x4a7de
	.byte 0x00	@ 0004a7de data
.org 0x4a7df
	.byte 0x00	@ 0004a7df data
.org 0x4a7e0
	.byte 0x88,0xed,0x02,0x02	@ 0004a7e0 data
.org 0x4a7e4
	.byte 0xf8,0x39,0x85,0x08	@ 0004a7e4 data
.org 0x4a7e8
	.byte 0xfc,0x36,0x85,0x08	@ 0004a7e8 data
.org 0x4a7ec
	.byte 0x04,0x37,0x85,0x08	@ 0004a7ec data
.org 0x4a7f0
	ldr r0, [pc, #80]	@ 0004a7f0 1448
.org 0x4a7f2
	movs r1, #38	@ 0004a7f2 2621
.org 0x4a7f4
	mov r2, ip	@ 0004a7f4 6246
.org 0x4a7f6
	strb r1, [r2, #9]	@ 0004a7f6 5172
.org 0x4a7f8
	adds r0, #152	@ 0004a7f8 9830
.org 0x4a7fa
	ldr r0, [r0, #0]	@ 0004a7fa 0068
.org 0x4a7fc
	ldr r0, [r0, #0]	@ 0004a7fc 0068
.org 0x4a7fe
	str r0, [r2, #20]	@ 0004a7fe 5061
.org 0x4a800
	ldrb r1, [r2, #11]	@ 0004a800 d17a
.org 0x4a802
	movs r0, #191	@ 0004a802 bf20
.org 0x4a804
	ands r0, r1	@ 0004a804 0840
.org 0x4a806
	strb r0, [r2, #11]	@ 0004a806 d072
.org 0x4a808
	mov r1, ip	@ 0004a808 6146
.org 0x4a80a
	adds r1, #37	@ 0004a80a 2531
.org 0x4a80c
	movs r0, #16	@ 0004a80c 1020
.org 0x4a80e
	strb r0, [r1, #0]	@ 0004a80e 0870
.org 0x4a810
	ldr r0, [pc, #52]	@ 0004a810 0d48
.org 0x4a812
	ldrh r0, [r0, #2]	@ 0004a812 4088
.org 0x4a814
	strh r0, [r2, #32]	@ 0004a814 1084
.org 0x4a816
	ldr r0, [pc, #52]	@ 0004a816 0d48
.org 0x4a818
	ldrb r0, [r0, #1]	@ 0004a818 4078
.org 0x4a81a
	subs r1, #3	@ 0004a81a 0339
.org 0x4a81c
	strb r0, [r1, #0]	@ 0004a81c 0870
.org 0x4a81e
	mov r0, ip	@ 0004a81e 6046
.org 0x4a820
	str r5, [r0, #40]	@ 0004a820 8562
.org 0x4a822
	str r4, [r0, #44]	@ 0004a822 c462
.org 0x4a824
	ldr r0, [r4, #100]	@ 0004a824 606e
.org 0x4a826
	ldr r1, [r4, #104]	@ 0004a826 a16e
.org 0x4a828
	mov r2, ip	@ 0004a828 6246
.org 0x4a82a
	str r0, [r2, #84]	@ 0004a82a 5065
.org 0x4a82c
	str r1, [r2, #88]	@ 0004a82c 9165
.org 0x4a82e
	ldrb r0, [r4, #10]	@ 0004a82e a07a
.org 0x4a830
	lsrs r2, r0, #4	@ 0004a830 0209
.org 0x4a832
	movs r0, #1	@ 0004a832 0120
.org 0x4a834
	ands r2, r0	@ 0004a834 0240
.org 0x4a836
	cmp r2, #0	@ 0004a836 002a
.org 0x4a838
	beq.n 0x4a850	@ 0004a838 0ad0
.org 0x4a83a
	mov r0, ip	@ 0004a83a 6046
.org 0x4a83c
	ldrb r1, [r0, #10]	@ 0004a83c 817a
.org 0x4a83e
	movs r0, #16	@ 0004a83e 1020
.org 0x4a840
	orrs r0, r1	@ 0004a840 0843
.org 0x4a842
	b.n 0x4a858	@ 0004a842 09e0
.org 0x4a844
	.byte 0xf8,0x39,0x85,0x08	@ 0004a844 data
.org 0x4a848
	.byte 0xfc,0x36,0x85,0x08	@ 0004a848 data
.org 0x4a84c
	.byte 0x04,0x37,0x85,0x08	@ 0004a84c data
.org 0x4a850
	mov r0, ip	@ 0004a850 6046
.org 0x4a852
	ldrb r1, [r0, #10]	@ 0004a852 817a
.org 0x4a854
	movs r0, #239	@ 0004a854 ef20
.org 0x4a856
	ands r0, r1	@ 0004a856 0840
.org 0x4a858
	mov r1, ip	@ 0004a858 6146
.org 0x4a85a
	strb r0, [r1, #10]	@ 0004a85a 8872
.org 0x4a85c
	movs r3, #1	@ 0004a85c 0123
.org 0x4a85e
	adds r1, r3, #0	@ 0004a85e 191c
.org 0x4a860
	ands r1, r2	@ 0004a860 1140
.org 0x4a862
	mov r0, ip	@ 0004a862 6046
.org 0x4a864
	adds r0, #76	@ 0004a864 4c30
.org 0x4a866
	strb r1, [r0, #0]	@ 0004a866 0170
.org 0x4a868
	mov r4, ip	@ 0004a868 6446
