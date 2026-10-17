@ FUN_080d025c  entry 0x080d025c  size 204
.thumb
.org 0xd025c
FUN_080d025c:
	push {r4, lr}	@ 000d025c 10b5
.org 0xd025e
	adds r4, r0, #0	@ 000d025e 041c
.org 0xd0260
	ldr r0, [r4, #40]	@ 000d0260 a06a
.org 0xd0262
	adds r0, #184	@ 000d0262 b830
.org 0xd0264
	ldr r0, [r0, #0]	@ 000d0264 0068
.org 0xd0266
	ldr r1, [pc, #20]	@ 000d0266 0549
.org 0xd0268
	adds r2, r0, r1	@ 000d0268 4218
.org 0xd026a
	ldrb r0, [r4, #18]	@ 000d026a a07c
.org 0xd026c
	cmp r0, #1	@ 000d026c 0128
.org 0xd026e
	beq.n 0xd02b4	@ 000d026e 21d0
.org 0xd0270
	cmp r0, #1	@ 000d0270 0128
.org 0xd0272
	bgt.n 0xd0280	@ 000d0272 05dc
.org 0xd0274
	cmp r0, #0	@ 000d0274 0028
.org 0xd0276
	beq.n 0xd0286	@ 000d0276 06d0
.org 0xd0278
	b.n 0xd02e8	@ 000d0278 36e0
.org 0xd027a
	.byte 0x00	@ 000d027a data
.org 0xd027b
	.byte 0x00	@ 000d027b data
.org 0xd027c
	.byte 0xff,0x8f,0x00,0x00	@ 000d027c data
.org 0xd0280
	cmp r0, #2	@ 000d0280 0228
.org 0xd0282
	beq.n 0xd02be	@ 000d0282 1cd0
.org 0xd0284
	b.n 0xd02e8	@ 000d0284 30e0
.org 0xd0286
	ldr r0, [r4, #84]	@ 000d0286 606d
.org 0xd0288
	ldr r1, [r4, #92]	@ 000d0288 e16d
.org 0xd028a
	adds r0, r0, r1	@ 000d028a 4018
.org 0xd028c
	str r0, [r4, #84]	@ 000d028c 6065
.org 0xd028e
	ldr r0, [r4, #88]	@ 000d028e a06d
.org 0xd0290
	ldr r1, [r4, #96]	@ 000d0290 216e
.org 0xd0292
	adds r0, r0, r1	@ 000d0292 4018
.org 0xd0294
	str r0, [r4, #88]	@ 000d0294 a065
.org 0xd0296
	adds r1, #64	@ 000d0296 4031
.org 0xd0298
	str r1, [r4, #96]	@ 000d0298 2166
.org 0xd029a
	movs r0, #224	@ 000d029a e020
.org 0xd029c
	lsls r0, r0, #3	@ 000d029c c000
.org 0xd029e
	cmp r1, r0	@ 000d029e 8142
.org 0xd02a0
	ble.n 0xd02a4	@ 000d02a0 00dd
.org 0xd02a2
	str r0, [r4, #96]	@ 000d02a2 2066
.org 0xd02a4
	ldr r0, [r4, #88]	@ 000d02a4 a06d
.org 0xd02a6
	cmp r0, r2	@ 000d02a6 9042
.org 0xd02a8
	blt.n 0xd02e8	@ 000d02a8 1edb
.org 0xd02aa
	str r2, [r4, #88]	@ 000d02aa a265
.org 0xd02ac
	ldrb r0, [r4, #18]	@ 000d02ac a07c
.org 0xd02ae
	adds r0, #1	@ 000d02ae 0130
.org 0xd02b0
	strb r0, [r4, #18]	@ 000d02b0 a074
.org 0xd02b2
	b.n 0xd02e8	@ 000d02b2 19e0
.org 0xd02b4
	movs r0, #36	@ 000d02b4 2420
.org 0xd02b6
	strb r0, [r4, #19]	@ 000d02b6 e074
.org 0xd02b8
	ldrb r0, [r4, #18]	@ 000d02b8 a07c
.org 0xd02ba
	adds r0, #1	@ 000d02ba 0130
.org 0xd02bc
	strb r0, [r4, #18]	@ 000d02bc a074
.org 0xd02be
	ldrb r0, [r4, #19]	@ 000d02be e07c
.org 0xd02c0
	subs r0, #1	@ 000d02c0 0138
.org 0xd02c2
	strb r0, [r4, #19]	@ 000d02c2 e074
.org 0xd02c4
	lsls r0, r0, #24	@ 000d02c4 0006
.org 0xd02c6
	cmp r0, #0	@ 000d02c6 0028
.org 0xd02c8
	bne.n 0xd02e8	@ 000d02c8 0ed1
.org 0xd02ca
	ldr r1, [pc, #24]	@ 000d02ca 0649
.org 0xd02cc
	ldrb r0, [r4, #9]	@ 000d02cc 607a
.org 0xd02ce
	lsls r0, r0, #2	@ 000d02ce 8000
.org 0xd02d0
	adds r0, r0, r1	@ 000d02d0 4018
.org 0xd02d2
	movs r1, #2	@ 000d02d2 0221
.org 0xd02d4
	str r1, [r4, #12]	@ 000d02d4 e160
.org 0xd02d6
	ldr r0, [r0, #0]	@ 000d02d6 0068
.org 0xd02d8
	ldr r0, [r0, #8]	@ 000d02d8 8068
.org 0xd02da
	str r0, [r4, #20]	@ 000d02da 6061
.org 0xd02dc
	adds r0, r4, #0	@ 000d02dc 201c
.org 0xd02de
	bl 0xd0340	@ 000d02de 00f02ff8
.org 0xd02e2
	b.n 0xd0330	@ 000d02e2 25e0
.org 0xd02e4
	.byte 0xf4,0x49,0x86,0x08	@ 000d02e4 data
.org 0xd02e8
	ldrb r0, [r4, #13]	@ 000d02e8 607b
.org 0xd02ea
	cmp r0, #0	@ 000d02ea 0028
.org 0xd02ec
	beq.n 0xd02f4	@ 000d02ec 02d0
.org 0xd02ee
	cmp r0, #1	@ 000d02ee 0128
.org 0xd02f0
	beq.n 0xd0308	@ 000d02f0 0ad0
.org 0xd02f2
	b.n 0xd032a	@ 000d02f2 1ae0
.org 0xd02f4
	ldr r0, [r4, #96]	@ 000d02f4 206e
.org 0xd02f6
	cmp r0, #0	@ 000d02f6 0028
.org 0xd02f8
	blt.n 0xd032a	@ 000d02f8 17db
.org 0xd02fa
	ldr r1, [pc, #8]	@ 000d02fa 0249
.org 0xd02fc
	adds r0, r4, #0	@ 000d02fc 201c
.org 0xd02fe
	bl 0x1cf00	@ 000d02fe 4cf7fffd
.org 0xd0302
	b.n 0xd0324	@ 000d0302 0fe0
.org 0xd0304
	.byte 0x01,0xe5,0x00,0x00	@ 000d0304 data
.org 0xd0308
	adds r0, r4, #0	@ 000d0308 201c
.org 0xd030a
	adds r0, #115	@ 000d030a 7330
.org 0xd030c
	ldrb r0, [r0, #0]	@ 000d030c 0078
.org 0xd030e
	cmp r0, #3	@ 000d030e 0328
.org 0xd0310
	bne.n 0xd032a	@ 000d0310 0bd1
.org 0xd0312
	ldr r1, [pc, #36]	@ 000d0312 0949
.org 0xd0314
	adds r0, r4, #0	@ 000d0314 201c
.org 0xd0316
	bl 0x1cf00	@ 000d0316 4cf7f3fd
.org 0xd031a
	adds r0, r4, #0	@ 000d031a 201c
.org 0xd031c
	adds r0, #116	@ 000d031c 7430
.org 0xd031e
	ldr r1, [pc, #28]	@ 000d031e 0749
.org 0xd0320
	bl 0x5784	@ 000d0320 35f730fa
.org 0xd0324
	ldrb r0, [r4, #13]	@ 000d0324 607b
.org 0xd0326
	adds r0, #1	@ 000d0326 0130
