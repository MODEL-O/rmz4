@ FUN_0809126c  entry 0x0809126c  size 174
.thumb
.org 0x9126c
FUN_0809126c:
	push {r4, r5, r6, lr}	@ 0009126c 70b5
.org 0x9126e
	adds r5, r0, #0	@ 0009126e 051c
.org 0x91270
	ldr r6, [r5, #40]	@ 00091270 ae6a
.org 0x91272
	adds r0, #140	@ 00091272 8c30
.org 0x91274
	ldr r0, [r0, #0]	@ 00091274 0068
.org 0x91276
	movs r1, #128	@ 00091276 8021
.org 0x91278
	lsls r1, r1, #2	@ 00091278 8900
.org 0x9127a
	ands r0, r1	@ 0009127a 0840
.org 0x9127c
	cmp r0, #0	@ 0009127c 0028
.org 0x9127e
	beq.n 0x912a0	@ 0009127e 0fd0
.org 0x91280
	ldr r1, [pc, #24]	@ 00091280 0649
.org 0x91282
	ldrb r0, [r5, #9]	@ 00091282 687a
.org 0x91284
	lsls r0, r0, #2	@ 00091284 8000
.org 0x91286
	adds r0, r0, r1	@ 00091286 4018
.org 0x91288
	movs r1, #2	@ 00091288 0221
.org 0x9128a
	str r1, [r5, #12]	@ 0009128a e960
.org 0x9128c
	ldr r0, [r0, #0]	@ 0009128c 0068
.org 0x9128e
	ldr r0, [r0, #8]	@ 0009128e 8068
.org 0x91290
	str r0, [r5, #20]	@ 00091290 6861
.org 0x91292
	adds r0, r5, #0	@ 00091292 281c
.org 0x91294
	bl 0x90f70	@ 00091294 fff76cfe
.org 0x91298
	b.n 0x9131a	@ 00091298 3fe0
.org 0x9129a
	.byte 0x00	@ 0009129a data
.org 0x9129b
	.byte 0x00	@ 0009129b data
.org 0x9129c
	.byte 0x40,0xdb,0x85,0x08	@ 0009129c data
.org 0x912a0
	ldrb r0, [r5, #13]	@ 000912a0 687b
.org 0x912a2
	subs r0, #1	@ 000912a2 0138
.org 0x912a4
	lsls r0, r0, #24	@ 000912a4 0006
.org 0x912a6
	lsrs r0, r0, #24	@ 000912a6 000e
.org 0x912a8
	cmp r0, #7	@ 000912a8 0728
.org 0x912aa
	bhi.n 0x9130a	@ 000912aa 2ed8
.org 0x912ac
	adds r4, r6, #0	@ 000912ac 341c
.org 0x912ae
	adds r4, #180	@ 000912ae b434
.org 0x912b0
	ldr r0, [r4, #16]	@ 000912b0 2069
.org 0x912b2
	ldr r1, [r4, #20]	@ 000912b2 6169
.org 0x912b4
	bl 0x8988	@ 000912b4 77f768fb
.org 0x912b8
	adds r2, r0, #0	@ 000912b8 021c
.org 0x912ba
	ldr r0, [r5, #84]	@ 000912ba 686d
.org 0x912bc
	subs r0, r0, r2	@ 000912bc 801a
.org 0x912be
	asrs r2, r0, #8	@ 000912be 0212
.org 0x912c0
	subs r0, r2, #1	@ 000912c0 501e
.org 0x912c2
	cmp r0, #205	@ 000912c2 cd28
.org 0x912c4
	bhi.n 0x9130a	@ 000912c4 21d8
.org 0x912c6
	ldr r1, [r4, #20]	@ 000912c6 6169
.org 0x912c8
	ldr r0, [r5, #88]	@ 000912c8 a86d
.org 0x912ca
	cmp r1, r0	@ 000912ca 8142
.org 0x912cc
	ble.n 0x912f4	@ 000912cc 12dd
.org 0x912ce
	adds r0, r2, #0	@ 000912ce 101c
.org 0x912d0
	subs r0, #33	@ 000912d0 2138
.org 0x912d2
	cmp r0, #142	@ 000912d2 8e28
.org 0x912d4
	bhi.n 0x9130a	@ 000912d4 19d8
.org 0x912d6
	cmp r2, #71	@ 000912d6 472a
.org 0x912d8
	bgt.n 0x912e0	@ 000912d8 02dc
.org 0x912da
	adds r1, r6, #0	@ 000912da 311c
.org 0x912dc
	adds r1, #218	@ 000912dc da31
.org 0x912de
	b.n 0x912ee	@ 000912de 06e0
.org 0x912e0
	cmp r2, #135	@ 000912e0 872a
.org 0x912e2
	bgt.n 0x912ea	@ 000912e2 02dc
.org 0x912e4
	adds r1, r6, #0	@ 000912e4 311c
.org 0x912e6
	adds r1, #219	@ 000912e6 db31
.org 0x912e8
	b.n 0x912ee	@ 000912e8 01e0
.org 0x912ea
	adds r1, r6, #0	@ 000912ea 311c
.org 0x912ec
	adds r1, #220	@ 000912ec dc31
.org 0x912ee
	movs r0, #1	@ 000912ee 0120
.org 0x912f0
	strb r0, [r1, #0]	@ 000912f0 0870
.org 0x912f2
	b.n 0x9130a	@ 000912f2 0ae0
.org 0x912f4
	adds r0, r2, #0	@ 000912f4 101c
.org 0x912f6
	movs r1, #44	@ 000912f6 2c21
.org 0x912f8
	bl 0x128fb8	@ 000912f8 97f05efe
.org 0x912fc
	adds r2, r0, #0	@ 000912fc 021c
.org 0x912fe
	cmp r2, #7	@ 000912fe 072a
.org 0x91300
	bgt.n 0x9130a	@ 00091300 03dc
.org 0x91302
	adds r0, r6, r2	@ 00091302 b018
.org 0x91304
	adds r0, #221	@ 00091304 dd30
.org 0x91306
	movs r1, #1	@ 00091306 0121
.org 0x91308
	strb r1, [r0, #0]	@ 00091308 0170
.org 0x9130a
	ldr r0, [pc, #20]	@ 0009130a 0548
.org 0x9130c
	ldrb r1, [r5, #13]	@ 0009130c 697b
.org 0x9130e
	lsls r1, r1, #2	@ 0009130e 8900
.org 0x91310
	adds r1, r1, r0	@ 00091310 0918
.org 0x91312
	ldr r1, [r1, #0]	@ 00091312 0968
.org 0x91314
	adds r0, r5, #0	@ 00091314 281c
.org 0x91316
	bl 0x128f80	@ 00091316 97f033fe
