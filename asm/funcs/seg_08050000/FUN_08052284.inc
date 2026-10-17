@ FUN_08052284  entry 0x08052284  size 300
.thumb
.org 0x52284
FUN_08052284:
	push {r4, lr}	@ 00052284 10b5
.org 0x52286
	adds r4, r0, #0	@ 00052286 041c
.org 0x52288
	ldrb r0, [r4, #14]	@ 00052288 a07b
.org 0x5228a
	cmp r0, #0	@ 0005228a 0028
.org 0x5228c
	bne.n 0x522fc	@ 0005228c 36d1
.org 0x5228e
	ldr r1, [pc, #76]	@ 0005228e 1349
.org 0x52290
	adds r0, r4, #0	@ 00052290 201c
.org 0x52292
	bl 0x1cf00	@ 00052292 caf735fe
.org 0x52296
	movs r3, #0	@ 00052296 0023
.org 0x52298
	ldr r0, [pc, #68]	@ 00052298 1148
.org 0x5229a
	ldr r2, [r0, #0]	@ 0005229a 0268
.org 0x5229c
	ldr r1, [r4, #84]	@ 0005229c 616d
.org 0x5229e
	ldr r0, [r2, #84]	@ 0005229e 506d
.org 0x522a0
	cmp r1, r0	@ 000522a0 8142
.org 0x522a2
	bge.n 0x522a6	@ 000522a2 00da
.org 0x522a4
	movs r3, #1	@ 000522a4 0123
.org 0x522a6
	adds r0, r4, #0	@ 000522a6 201c
.org 0x522a8
	adds r0, #76	@ 000522a8 4c30
.org 0x522aa
	strb r3, [r0, #0]	@ 000522aa 0370
.org 0x522ac
	movs r3, #0	@ 000522ac 0023
.org 0x522ae
	ldr r1, [r4, #84]	@ 000522ae 616d
.org 0x522b0
	ldr r0, [r2, #84]	@ 000522b0 506d
.org 0x522b2
	cmp r1, r0	@ 000522b2 8142
.org 0x522b4
	bge.n 0x522b8	@ 000522b4 00da
.org 0x522b6
	movs r3, #1	@ 000522b6 0123
.org 0x522b8
	movs r0, #74	@ 000522b8 4a20
.org 0x522ba
	adds r0, r0, r4	@ 000522ba 0019
.org 0x522bc
	mov ip, r0	@ 000522bc 8446
.org 0x522be
	lsls r2, r3, #4	@ 000522be 1a01
.org 0x522c0
	ldrb r1, [r0, #0]	@ 000522c0 0178
.org 0x522c2
	movs r0, #17	@ 000522c2 1120
.org 0x522c4
	negs r0, r0	@ 000522c4 4042
.org 0x522c6
	ands r0, r1	@ 000522c6 0840
.org 0x522c8
	orrs r0, r2	@ 000522c8 1043
.org 0x522ca
	mov r1, ip	@ 000522ca 6146
.org 0x522cc
	strb r0, [r1, #0]	@ 000522cc 0870
.org 0x522ce
	cmp r3, #0	@ 000522ce 002b
.org 0x522d0
	beq.n 0x522e4	@ 000522d0 08d0
.org 0x522d2
	ldrb r0, [r4, #10]	@ 000522d2 a07a
.org 0x522d4
	movs r1, #16	@ 000522d4 1021
.org 0x522d6
	orrs r0, r1	@ 000522d6 0843
.org 0x522d8
	b.n 0x522ea	@ 000522d8 07e0
.org 0x522da
	.byte 0x00	@ 000522da data
.org 0x522db
	.byte 0x00	@ 000522db data
.org 0x522dc
	.byte 0x10,0xa1,0x00,0x00	@ 000522dc data
.org 0x522e0
	.byte 0xf0,0xdb,0x02,0x02	@ 000522e0 data
.org 0x522e4
	ldrb r1, [r4, #10]	@ 000522e4 a17a
.org 0x522e6
	movs r0, #239	@ 000522e6 ef20
.org 0x522e8
	ands r0, r1	@ 000522e8 0840
.org 0x522ea
	strb r0, [r4, #10]	@ 000522ea a072
.org 0x522ec
	adds r1, r4, #0	@ 000522ec 211c
.org 0x522ee
	adds r1, #215	@ 000522ee d731
.org 0x522f0
	ldrb r0, [r1, #0]	@ 000522f0 0878
.org 0x522f2
	adds r0, #1	@ 000522f2 0130
.org 0x522f4
	strb r0, [r1, #0]	@ 000522f4 0870
.org 0x522f6
	movs r0, #64	@ 000522f6 4020
.org 0x522f8
	strb r0, [r4, #18]	@ 000522f8 a074
.org 0x522fa
	b.n 0x52374	@ 000522fa 3be0
.org 0x522fc
	cmp r0, #1	@ 000522fc 0128
.org 0x522fe
	bne.n 0x52320	@ 000522fe 0fd1
.org 0x52300
	adds r0, r4, #0	@ 00052300 201c
.org 0x52302
	adds r0, #113	@ 00052302 7130
.org 0x52304
	ldrb r0, [r0, #0]	@ 00052304 0078
.org 0x52306
	lsls r0, r0, #24	@ 00052306 0006
.org 0x52308
	asrs r0, r0, #24	@ 00052308 0016
.org 0x5230a
	cmp r0, #2	@ 0005230a 0228
.org 0x5230c
	ble.n 0x5238a	@ 0005230c 3ddd
.org 0x5230e
	adds r0, r4, #0	@ 0005230e 201c
.org 0x52310
	adds r0, #116	@ 00052310 7430
.org 0x52312
	ldr r1, [pc, #8]	@ 00052312 0249
.org 0x52314
	bl 0x5784	@ 00052314 b3f736fa
.org 0x52318
	b.n 0x52374	@ 00052318 2ce0
.org 0x5231a
	.byte 0x00	@ 0005231a data
.org 0x5231b
	.byte 0x00	@ 0005231b data
.org 0x5231c
	.byte 0x34,0x80,0x85,0x08	@ 0005231c data
.org 0x52320
	cmp r0, #2	@ 00052320 0228
.org 0x52322
	bne.n 0x5237c	@ 00052322 2bd1
.org 0x52324
	adds r0, r4, #0	@ 00052324 201c
.org 0x52326
	adds r0, #113	@ 00052326 7130
.org 0x52328
	ldrb r0, [r0, #0]	@ 00052328 0078
.org 0x5232a
	lsls r0, r0, #24	@ 0005232a 0006
.org 0x5232c
	asrs r0, r0, #24	@ 0005232c 0016
.org 0x5232e
	cmp r0, #5	@ 0005232e 0528
.org 0x52330
	ble.n 0x5238a	@ 00052330 2bdd
.org 0x52332
	movs r0, #237	@ 00052332 ed20
.org 0x52334
	bl 0x2b10	@ 00052334 b0f7ecfb
.org 0x52338
	ldrb r1, [r4, #10]	@ 00052338 a17a
.org 0x5233a
	movs r0, #32	@ 0005233a 2020
.org 0x5233c
	ands r0, r1	@ 0005233c 0840
.org 0x5233e
	cmp r0, #0	@ 0005233e 0028
.org 0x52340
	beq.n 0x5235c	@ 00052340 0cd0
.org 0x52342
	adds r0, r4, #0	@ 00052342 201c
.org 0x52344
	movs r1, #0	@ 00052344 0021
.org 0x52346
	bl 0xc1a2c	@ 00052346 6ff071fb
.org 0x5234a
	adds r0, r4, #0	@ 0005234a 201c
.org 0x5234c
	movs r1, #1	@ 0005234c 0121
.org 0x5234e
	bl 0xc1a2c	@ 0005234e 6ff06dfb
.org 0x52352
	adds r0, r4, #0	@ 00052352 201c
.org 0x52354
	movs r1, #2	@ 00052354 0221
.org 0x52356
	bl 0xc1a2c	@ 00052356 6ff069fb
.org 0x5235a
	b.n 0x52374	@ 0005235a 0be0
.org 0x5235c
	adds r0, r4, #0	@ 0005235c 201c
.org 0x5235e
	movs r1, #3	@ 0005235e 0321
.org 0x52360
	bl 0xc1a2c	@ 00052360 6ff064fb
.org 0x52364
	adds r0, r4, #0	@ 00052364 201c
.org 0x52366
	movs r1, #4	@ 00052366 0421
.org 0x52368
	bl 0xc1a2c	@ 00052368 6ff060fb
.org 0x5236c
	adds r0, r4, #0	@ 0005236c 201c
.org 0x5236e
	movs r1, #5	@ 0005236e 0521
.org 0x52370
	bl 0xc1a2c	@ 00052370 6ff05cfb
.org 0x52374
	ldrb r0, [r4, #14]	@ 00052374 a07b
.org 0x52376
	adds r0, #1	@ 00052376 0130
.org 0x52378
	strb r0, [r4, #14]	@ 00052378 a073
.org 0x5237a
	b.n 0x5238a	@ 0005237a 06e0
.org 0x5237c
	adds r0, r4, #0	@ 0005237c 201c
.org 0x5237e
	adds r0, #226	@ 0005237e e230
.org 0x52380
	ldrb r0, [r0, #0]	@ 00052380 0078
.org 0x52382
	cmp r0, #0	@ 00052382 0028
.org 0x52384
	beq.n 0x5238a	@ 00052384 01d0
.org 0x52386
	movs r0, #0	@ 00052386 0020
.org 0x52388
	strb r0, [r4, #18]	@ 00052388 a074
.org 0x5238a
	adds r0, r4, #0	@ 0005238a 201c
.org 0x5238c
	bl 0x1cff0	@ 0005238c caf730fe
.org 0x52390
	adds r0, r4, #0	@ 00052390 201c
.org 0x52392
	adds r0, #140	@ 00052392 8c30
.org 0x52394
	ldr r0, [r0, #0]	@ 00052394 0068
.org 0x52396
	movs r1, #1	@ 00052396 0121
.org 0x52398
	ands r0, r1	@ 00052398 0840
.org 0x5239a
	cmp r0, #0	@ 0005239a 0028
.org 0x5239c
	beq.n 0x523a4	@ 0005239c 02d0
.org 0x5239e
	adds r0, r4, #0	@ 0005239e 201c
.org 0x523a0
	adds r0, #226	@ 000523a0 e230
.org 0x523a2
	strb r1, [r0, #0]	@ 000523a2 0170
.org 0x523a4
	ldrb r0, [r4, #18]	@ 000523a4 a07c
.org 0x523a6
	subs r0, #1	@ 000523a6 0138
.org 0x523a8
	strb r0, [r4, #18]	@ 000523a8 a074
.org 0x523aa
	lsls r0, r0, #24	@ 000523aa 0006
.org 0x523ac
	lsrs r0, r0, #24	@ 000523ac 000e
.org 0x523ae
	cmp r0, #255	@ 000523ae ff28
