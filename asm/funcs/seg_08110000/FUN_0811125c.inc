@ FUN_0811125c  entry 0x0811125c  size 268
.thumb
.org 0x11125c
FUN_0811125c:
	push {r4, r5, lr}	@ 0011125c 30b5
.org 0x11125e
	adds r4, r0, #0	@ 0011125e 041c
.org 0x111260
	ldrb r0, [r4, #7]	@ 00111260 e079
.org 0x111262
	cmp r0, #0	@ 00111262 0028
.org 0x111264
	bne.n 0x1112aa	@ 00111264 21d1
.org 0x111266
	ldr r1, [pc, #128]	@ 00111266 2049
.org 0x111268
	ldr r0, [pc, #128]	@ 00111268 2048
.org 0x11126a
	strh r0, [r1, #0]	@ 0011126a 0880
.org 0x11126c
	ldr r2, [pc, #128]	@ 0011126c 204a
.org 0x11126e
	ldrh r1, [r2, #0]	@ 0011126e 1188
.org 0x111270
	ldr r0, [pc, #128]	@ 00111270 2048
.org 0x111272
	ands r0, r1	@ 00111272 0840
.org 0x111274
	movs r3, #158	@ 00111274 9e23
.org 0x111276
	lsls r3, r3, #7	@ 00111276 db01
.org 0x111278
	adds r1, r3, #0	@ 00111278 191c
.org 0x11127a
	movs r3, #0	@ 0011127a 0023
.org 0x11127c
	orrs r0, r1	@ 0011127c 0843
.org 0x11127e
	strh r0, [r2, #0]	@ 0011127e 1080
.org 0x111280
	ldr r1, [pc, #116]	@ 00111280 1d49
.org 0x111282
	ldr r5, [pc, #120]	@ 00111282 1e4d
.org 0x111284
	adds r0, r1, r5	@ 00111284 4819
.org 0x111286
	movs r2, #32	@ 00111286 2022
.org 0x111288
	strb r2, [r0, #0]	@ 00111288 0270
.org 0x11128a
	subs r5, #1	@ 0011128a 013d
.org 0x11128c
	adds r0, r1, r5	@ 0011128c 4819
.org 0x11128e
	strb r2, [r0, #0]	@ 0011128e 0270
.org 0x111290
	movs r0, #128	@ 00111290 8020
.org 0x111292
	lsls r0, r0, #3	@ 00111292 c000
.org 0x111294
	adds r1, r1, r0	@ 00111294 0918
.org 0x111296
	strb r2, [r1, #0]	@ 00111296 0a70
.org 0x111298
	ldr r1, [pc, #100]	@ 00111298 1949
.org 0x11129a
	adds r0, r4, r1	@ 0011129a 6018
.org 0x11129c
	strb r3, [r0, #0]	@ 0011129c 0370
.org 0x11129e
	movs r0, #150	@ 0011129e 9620
.org 0x1112a0
	lsls r0, r0, #3	@ 001112a0 c000
.org 0x1112a2
	strh r0, [r4, #8]	@ 001112a2 2081
.org 0x1112a4
	ldrb r0, [r4, #7]	@ 001112a4 e079
.org 0x1112a6
	adds r0, #1	@ 001112a6 0130
.org 0x1112a8
	strb r0, [r4, #7]	@ 001112a8 e071
.org 0x1112aa
	ldrh r1, [r4, #8]	@ 001112aa 2189
.org 0x1112ac
	movs r2, #8	@ 001112ac 0822
.org 0x1112ae
	ldrsh r0, [r4, r2]	@ 001112ae a05e
.org 0x1112b0
	cmp r0, #0	@ 001112b0 0028
.org 0x1112b2
	beq.n 0x1112b8	@ 001112b2 01d0
.org 0x1112b4
	subs r0, r1, #1	@ 001112b4 481e
.org 0x1112b6
	strh r0, [r4, #8]	@ 001112b6 2081
.org 0x1112b8
	movs r0, #137	@ 001112b8 8920
.org 0x1112ba
	bl 0x25d8	@ 001112ba f1f68df9
.org 0x1112be
	ldrh r0, [r4, #8]	@ 001112be 2089
.org 0x1112c0
	movs r1, #63	@ 001112c0 3f21
.org 0x1112c2
	bics r1, r0	@ 001112c2 8143
.org 0x1112c4
	cmp r1, #23	@ 001112c4 1729
.org 0x1112c6
	bgt.n 0x111308	@ 001112c6 1fdc
.org 0x1112c8
	lsls r0, r1, #7	@ 001112c8 c801
.org 0x1112ca
	movs r1, #24	@ 001112ca 1821
.org 0x1112cc
	bl 0x128fb8	@ 001112cc 17f074fe
.org 0x1112d0
	ldr r1, [pc, #48]	@ 001112d0 0c49
.org 0x1112d2
	lsls r0, r0, #24	@ 001112d2 0006
.org 0x1112d4
	lsrs r0, r0, #23	@ 001112d4 c00d
.org 0x1112d6
	adds r0, r0, r1	@ 001112d6 4018
.org 0x1112d8
	movs r3, #0	@ 001112d8 0023
.org 0x1112da
	ldrsh r1, [r0, r3]	@ 001112da c15e
.org 0x1112dc
	lsls r0, r1, #1	@ 001112dc 4800
.org 0x1112de
	adds r0, r0, r1	@ 001112de 4018
.org 0x1112e0
	asrs r1, r0, #6	@ 001112e0 8111
.org 0x1112e2
	ldr r0, [pc, #4]	@ 001112e2 0148
.org 0x1112e4
	strh r1, [r0, #4]	@ 001112e4 8180
.org 0x1112e6
	b.n 0x11130e	@ 001112e6 12e0
.org 0x1112e8
	.byte 0x40,0x0a,0x00,0x02	@ 001112e8 data
.org 0x1112ec
	.byte 0x82,0x3f,0x00,0x00	@ 001112ec data
.org 0x1112f0
	.byte 0x00,0x0a,0x00,0x02	@ 001112f0 data
.org 0x1112f4
	.byte 0xff,0xf0,0x00,0x00	@ 001112f4 data
.org 0x1112f8
	.byte 0xc0,0x2a,0x00,0x03	@ 001112f8 data
.org 0x1112fc
	.byte 0x02,0x04,0x00,0x00	@ 001112fc data
.org 0x111300
	.byte 0x56,0x02,0x00,0x00	@ 00111300 data
.org 0x111304
	.byte 0x0c,0x93,0x12,0x08	@ 00111304 data
.org 0x111308
	ldr r1, [pc, #40]	@ 00111308 0a49
.org 0x11130a
	movs r0, #0	@ 0011130a 0020
.org 0x11130c
	strh r0, [r1, #4]	@ 0011130c 8880
.org 0x11130e
	ldr r5, [pc, #40]	@ 0011130e 0a4d
.org 0x111310
	adds r2, r4, r5	@ 00111310 6219
.org 0x111312
	ldrb r5, [r2, #0]	@ 00111312 1578
.org 0x111314
	cmp r5, #0	@ 00111314 002d
.org 0x111316
	bne.n 0x111352	@ 00111316 1cd1
.org 0x111318
	ldr r0, [pc, #32]	@ 00111318 0848
.org 0x11131a
	ldrh r1, [r0, #4]	@ 0011131a 8188
.org 0x11131c
	movs r0, #8	@ 0011131c 0820
.org 0x11131e
	ands r0, r1	@ 0011131e 0840
.org 0x111320
	cmp r0, #0	@ 00111320 0028
.org 0x111322
	beq.n 0x111340	@ 00111322 0dd0
.org 0x111324
	movs r0, #2	@ 00111324 0220
.org 0x111326
	bl 0x2b10	@ 00111326 f1f6f3fb
.org 0x11132a
	movs r0, #3	@ 0011132a 0320
.org 0x11132c
	strb r0, [r4, #6]	@ 0011132c a071
.org 0x11132e
	strb r5, [r4, #7]	@ 0011132e e571
.org 0x111330
	b.n 0x111390	@ 00111330 2ee0
.org 0x111332
	.byte 0x00	@ 00111332 data
.org 0x111333
	.byte 0x00	@ 00111333 data
.org 0x111334
	.byte 0x40,0x0a,0x00,0x02	@ 00111334 data
.org 0x111338
	.byte 0x56,0x02,0x00,0x00	@ 00111338 data
.org 0x11133c
	.byte 0x60,0x07,0x00,0x02	@ 0011133c data
.org 0x111340
	movs r1, #8	@ 00111340 0821
.org 0x111342
	ldrsh r0, [r4, r1]	@ 00111342 605e
.org 0x111344
	cmp r0, #0	@ 00111344 0028
.org 0x111346
	bne.n 0x11134c	@ 00111346 01d1
.org 0x111348
	movs r0, #32	@ 00111348 2020
.org 0x11134a
	strb r0, [r2, #0]	@ 0011134a 1070
.org 0x11134c
	ldrb r0, [r2, #0]	@ 0011134c 1078
.org 0x11134e
	cmp r0, #0	@ 0011134e 0028
.org 0x111350
	beq.n 0x111390	@ 00111350 1ed0
.org 0x111352
	ldr r2, [pc, #68]	@ 00111352 114a
.org 0x111354
	adds r1, r4, r2	@ 00111354 a118
.org 0x111356
	ldrb r0, [r1, #0]	@ 00111356 0878
.org 0x111358
	subs r0, #1	@ 00111358 0138
.org 0x11135a
	strb r0, [r1, #0]	@ 0011135a 0870
.org 0x11135c
	ldr r3, [pc, #60]	@ 0011135c 0f4b
.org 0x11135e
	ldr r5, [pc, #64]	@ 0011135e 104d
.org 0x111360
	adds r1, r3, r5	@ 00111360 5919
.org 0x111362
	strb r0, [r1, #0]	@ 00111362 0870
.org 0x111364
	movs r1, #255	@ 00111364 ff21
.org 0x111366
	ands r1, r0	@ 00111366 0140
