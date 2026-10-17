@ FUN_0803414c  entry 0x0803414c  size 164
.thumb
.org 0x3414c
FUN_0803414c:
	push {r4, r5, lr}	@ 0003414c 30b5
.org 0x3414e
	adds r5, r0, #0	@ 0003414e 051c
.org 0x34150
	movs r0, #129	@ 00034150 8120
.org 0x34152
	lsls r0, r0, #1	@ 00034152 4000
.org 0x34154
	adds r4, r5, r0	@ 00034154 2c18
.org 0x34156
	ldrb r0, [r4, #0]	@ 00034156 2078
.org 0x34158
	cmp r0, #0	@ 00034158 0028
.org 0x3415a
	bne.n 0x34172	@ 0003415a 0ad1
.org 0x3415c
	ldr r1, [pc, #96]	@ 0003415c 1849
.org 0x3415e
	adds r0, r5, #0	@ 0003415e 281c
.org 0x34160
	bl 0x1cf00	@ 00034160 e8f7cefe
.org 0x34164
	ldr r0, [pc, #92]	@ 00034164 1748
.org 0x34166
	adds r1, r5, r0	@ 00034166 2918
.org 0x34168
	movs r0, #4	@ 00034168 0420
.org 0x3416a
	strb r0, [r1, #0]	@ 0003416a 0870
.org 0x3416c
	ldrb r0, [r4, #0]	@ 0003416c 2078
.org 0x3416e
	adds r0, #1	@ 0003416e 0130
.org 0x34170
	strb r0, [r4, #0]	@ 00034170 2070
.org 0x34172
	ldr r4, [pc, #76]	@ 00034172 134c
.org 0x34174
	adds r0, r5, #0	@ 00034174 281c
.org 0x34176
	adds r1, r4, #0	@ 00034176 211c
.org 0x34178
	bl 0x3a3b0	@ 00034178 06f01af9
.org 0x3417c
	adds r0, r5, #0	@ 0003417c 281c
.org 0x3417e
	adds r1, r4, #0	@ 0003417e 211c
.org 0x34180
	bl 0x3a3f0	@ 00034180 06f036f9
.org 0x34184
	ldr r1, [pc, #64]	@ 00034184 1049
.org 0x34186
	adds r2, r5, r1	@ 00034186 6a18
.org 0x34188
	ldrb r0, [r2, #0]	@ 00034188 1078
.org 0x3418a
	movs r1, #8	@ 0003418a 0821
.org 0x3418c
	orrs r0, r1	@ 0003418c 0843
.org 0x3418e
	strb r0, [r2, #0]	@ 0003418e 1070
.org 0x34190
	movs r0, #162	@ 00034190 a220
.org 0x34192
	lsls r0, r0, #1	@ 00034192 4000
.org 0x34194
	adds r1, r5, r0	@ 00034194 2918
.org 0x34196
	adds r0, r5, #0	@ 00034196 281c
.org 0x34198
	bl 0x39fd8	@ 00034198 05f01eff
.org 0x3419c
	lsls r0, r0, #24	@ 0003419c 0006
.org 0x3419e
	lsrs r2, r0, #24	@ 0003419e 020e
.org 0x341a0
	cmp r2, #0	@ 000341a0 002a
.org 0x341a2
	beq.n 0x341cc	@ 000341a2 13d0
.org 0x341a4
	movs r1, #128	@ 000341a4 8021
.org 0x341a6
	lsls r1, r1, #1	@ 000341a6 4900
.org 0x341a8
	adds r0, r5, r1	@ 000341a8 6818
.org 0x341aa
	movs r2, #0	@ 000341aa 0022
.org 0x341ac
	movs r1, #3	@ 000341ac 0321
.org 0x341ae
	strb r1, [r0, #0]	@ 000341ae 0170
.org 0x341b0
	adds r1, #254	@ 000341b0 fe31
.org 0x341b2
	adds r0, r5, r1	@ 000341b2 6818
.org 0x341b4
	strb r2, [r0, #0]	@ 000341b4 0270
.org 0x341b6
	adds r0, r5, #0	@ 000341b6 281c
.org 0x341b8
	bl 0x334dc	@ 000341b8 fff790f9
.org 0x341bc
	b.n 0x341f8	@ 000341bc 1ce0
.org 0x341be
	.byte 0x00	@ 000341be data
.org 0x341bf
	.byte 0x00	@ 000341bf data
.org 0x341c0
	.byte 0x08,0x27,0x00,0x00	@ 000341c0 data
.org 0x341c4
	.byte 0x51,0x01,0x00,0x00	@ 000341c4 data
.org 0x341c8
	.byte 0x53,0x01,0x00,0x00	@ 000341c8 data
.org 0x341cc
	ldr r0, [pc, #48]	@ 000341cc 0c48
.org 0x341ce
	adds r1, r5, r0	@ 000341ce 2918
.org 0x341d0
	ldrb r0, [r1, #0]	@ 000341d0 0878
.org 0x341d2
	subs r0, #1	@ 000341d2 0138
.org 0x341d4
	strb r0, [r1, #0]	@ 000341d4 0870
.org 0x341d6
	lsls r0, r0, #24	@ 000341d6 0006
.org 0x341d8
	lsrs r0, r0, #24	@ 000341d8 000e
.org 0x341da
	cmp r0, #255	@ 000341da ff28
.org 0x341dc
	bne.n 0x341f8	@ 000341dc 0cd1
.org 0x341de
	movs r1, #128	@ 000341de 8021
.org 0x341e0
	lsls r1, r1, #1	@ 000341e0 4900
.org 0x341e2
	adds r0, r5, r1	@ 000341e2 6818
.org 0x341e4
	strb r2, [r0, #0]	@ 000341e4 0270
.org 0x341e6
	adds r0, r5, #0	@ 000341e6 281c
.org 0x341e8
	bl 0x2b7d8	@ 000341e8 f7f7f6fa
.org 0x341ec
	adds r1, r0, #0	@ 000341ec 011c
.org 0x341ee
	lsls r1, r1, #16	@ 000341ee 0904
