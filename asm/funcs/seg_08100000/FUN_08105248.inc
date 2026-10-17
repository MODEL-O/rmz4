@ FUN_08105248  entry 0x08105248  size 214
.thumb
.org 0x105248
FUN_08105248:
	push {r4, lr}	@ 00105248 10b5
.org 0x10524a
	adds r4, r0, #0	@ 0010524a 041c
.org 0x10524c
	adds r0, #181	@ 0010524c b530
.org 0x10524e
	ldrb r0, [r0, #0]	@ 0010524e 0078
.org 0x105250
	cmp r0, #1	@ 00105250 0128
.org 0x105252
	bne.n 0x105290	@ 00105252 1dd1
.org 0x105254
	ldrb r0, [r4, #18]	@ 00105254 a07c
.org 0x105256
	cmp r0, #0	@ 00105256 0028
.org 0x105258
	beq.n 0x105276	@ 00105258 0dd0
.org 0x10525a
	subs r1, r0, #1	@ 0010525a 411e
.org 0x10525c
	strb r1, [r4, #18]	@ 0010525c a174
.org 0x10525e
	lsls r0, r1, #24	@ 0010525e 0806
.org 0x105260
	lsrs r0, r0, #24	@ 00105260 000e
.org 0x105262
	cmp r0, #39	@ 00105262 2728
.org 0x105264
	bhi.n 0x105300	@ 00105264 4cd8
.org 0x105266
	movs r0, #2	@ 00105266 0220
.org 0x105268
	ands r1, r0	@ 00105268 0140
.org 0x10526a
	cmp r1, #0	@ 0010526a 0029
.org 0x10526c
	beq.n 0x1052f8	@ 0010526c 44d0
.org 0x10526e
	ldrb r0, [r4, #10]	@ 0010526e a07a
.org 0x105270
	movs r1, #1	@ 00105270 0121
.org 0x105272
	orrs r0, r1	@ 00105272 0843
.org 0x105274
	b.n 0x1052fe	@ 00105274 43e0
.org 0x105276
	ldr r1, [pc, #20]	@ 00105276 0549
.org 0x105278
	ldrb r0, [r4, #9]	@ 00105278 607a
.org 0x10527a
	lsls r0, r0, #2	@ 0010527a 8000
.org 0x10527c
	adds r0, r0, r1	@ 0010527c 4018
.org 0x10527e
	movs r1, #2	@ 0010527e 0221
.org 0x105280
	str r1, [r4, #12]	@ 00105280 e160
.org 0x105282
	ldr r0, [r0, #0]	@ 00105282 0068
.org 0x105284
	ldr r0, [r0, #8]	@ 00105284 8068
.org 0x105286
	str r0, [r4, #20]	@ 00105286 6061
.org 0x105288
	b.n 0x105300	@ 00105288 3ae0
.org 0x10528a
	.byte 0x00	@ 0010528a data
.org 0x10528b
	.byte 0x00	@ 0010528b data
.org 0x10528c
	.byte 0xfc,0x92,0x86,0x08	@ 0010528c data
.org 0x105290
	ldrb r0, [r4, #18]	@ 00105290 a07c
.org 0x105292
	cmp r0, #0	@ 00105292 0028
.org 0x105294
	bne.n 0x1052f4	@ 00105294 2ed1
.org 0x105296
	adds r2, r4, #0	@ 00105296 221c
.org 0x105298
	adds r2, #182	@ 00105298 b632
.org 0x10529a
	ldrb r0, [r2, #0]	@ 0010529a 1078
.org 0x10529c
	cmp r0, #0	@ 0010529c 0028
.org 0x10529e
	bne.n 0x1052ac	@ 0010529e 05d1
.org 0x1052a0
	ldrb r0, [r4, #10]	@ 001052a0 a07a
.org 0x1052a2
	movs r1, #1	@ 001052a2 0121
.org 0x1052a4
	orrs r1, r0	@ 001052a4 0143
.org 0x1052a6
	strb r1, [r4, #10]	@ 001052a6 a172
.org 0x1052a8
	movs r0, #1	@ 001052a8 0120
.org 0x1052aa
	strb r0, [r2, #0]	@ 001052aa 1070
.org 0x1052ac
	ldr r1, [r4, #88]	@ 001052ac a16d
.org 0x1052ae
	ldr r0, [r4, #96]	@ 001052ae 206e
.org 0x1052b0
	adds r1, r1, r0	@ 001052b0 0918
.org 0x1052b2
	str r1, [r4, #88]	@ 001052b2 a165
.org 0x1052b4
	adds r0, #64	@ 001052b4 4030
.org 0x1052b6
	str r0, [r4, #96]	@ 001052b6 2066
.org 0x1052b8
	ldr r0, [r4, #84]	@ 001052b8 606d
.org 0x1052ba
	bl 0x7c7c	@ 001052ba 02f7dffc
.org 0x1052be
	lsls r0, r0, #16	@ 001052be 0004
.org 0x1052c0
	cmp r0, #0	@ 001052c0 0028
.org 0x1052c2
	beq.n 0x105300	@ 001052c2 1dd0
.org 0x1052c4
	ldrb r0, [r4, #17]	@ 001052c4 607c
.org 0x1052c6
	cmp r0, #4	@ 001052c6 0428
.org 0x1052c8
	bne.n 0x1052dc	@ 001052c8 08d1
.org 0x1052ca
	ldr r0, [r4, #84]	@ 001052ca 606d
.org 0x1052cc
	ldr r1, [r4, #88]	@ 001052cc a16d
.org 0x1052ce
	bl 0x8534	@ 001052ce 03f731f9
.org 0x1052d2
	ldr r1, [pc, #4]	@ 001052d2 0149
.org 0x1052d4
	adds r0, r0, r1	@ 001052d4 4018
.org 0x1052d6
	b.n 0x1052e4	@ 001052d6 05e0
.org 0x1052d8
	.byte 0x00,0xfc,0xff,0xff	@ 001052d8 data
.org 0x1052dc
	ldr r0, [r4, #84]	@ 001052dc 606d
.org 0x1052de
	ldr r1, [r4, #88]	@ 001052de a16d
.org 0x1052e0
	bl 0x8534	@ 001052e0 03f728f9
.org 0x1052e4
	str r0, [r4, #88]	@ 001052e4 a065
.org 0x1052e6
	movs r0, #220	@ 001052e6 dc20
.org 0x1052e8
	strb r0, [r4, #18]	@ 001052e8 a074
.org 0x1052ea
	adds r1, r4, #0	@ 001052ea 211c
.org 0x1052ec
	adds r1, #181	@ 001052ec b531
.org 0x1052ee
	movs r0, #1	@ 001052ee 0120
.org 0x1052f0
	strb r0, [r1, #0]	@ 001052f0 0870
.org 0x1052f2
	b.n 0x105300	@ 001052f2 05e0
.org 0x1052f4
	subs r0, #1	@ 001052f4 0138
.org 0x1052f6
	strb r0, [r4, #18]	@ 001052f6 a074
.org 0x1052f8
	ldrb r1, [r4, #10]	@ 001052f8 a17a
.org 0x1052fa
	movs r0, #254	@ 001052fa fe20
.org 0x1052fc
	ands r0, r1	@ 001052fc 0840
.org 0x1052fe
	strb r0, [r4, #10]	@ 001052fe a072
.org 0x105300
	adds r0, r4, #0	@ 00105300 201c
.org 0x105302
	adds r0, #180	@ 00105302 b430
.org 0x105304
	ldrb r0, [r0, #0]	@ 00105304 0078
.org 0x105306
	cmp r0, #1	@ 00105306 0128
.org 0x105308
	bne.n 0x10531c	@ 00105308 08d1
.org 0x10530a
	ldr r1, [pc, #28]	@ 0010530a 0749
.org 0x10530c
	ldrb r0, [r4, #9]	@ 0010530c 607a
.org 0x10530e
	lsls r0, r0, #2	@ 0010530e 8000
.org 0x105310
	adds r0, r0, r1	@ 00105310 4018
.org 0x105312
	movs r1, #2	@ 00105312 0221
.org 0x105314
	str r1, [r4, #12]	@ 00105314 e160
.org 0x105316
	ldr r0, [r0, #0]	@ 00105316 0068
.org 0x105318
	ldr r0, [r0, #8]	@ 00105318 8068
.org 0x10531a
	str r0, [r4, #20]	@ 0010531a 6061
.org 0x10531c
	adds r0, r4, #0	@ 0010531c 201c
