@ FUN_080271d8  entry 0x080271d8  size 438
.thumb
.org 0x271d8
FUN_080271d8:
	push {r4, r5, lr}	@ 000271d8 30b5
.org 0x271da
	adds r5, r0, #0	@ 000271da 051c
.org 0x271dc
	movs r0, #190	@ 000271dc be20
.org 0x271de
	lsls r0, r0, #1	@ 000271de 4000
.org 0x271e0
	adds r4, r5, r0	@ 000271e0 2c18
.org 0x271e2
	ldrb r0, [r4, #0]	@ 000271e2 2078
.org 0x271e4
	cmp r0, #0	@ 000271e4 0028
.org 0x271e6
	beq.n 0x271ea	@ 000271e6 00d0
.org 0x271e8
	b.n 0x27330	@ 000271e8 a2e0
.org 0x271ea
	ldr r3, [pc, #52]	@ 000271ea 0d4b
.org 0x271ec
	ldrh r1, [r3, #8]	@ 000271ec 1989
.org 0x271ee
	movs r0, #1	@ 000271ee 0120
.org 0x271f0
	orrs r0, r1	@ 000271f0 0843
.org 0x271f2
	strh r0, [r3, #8]	@ 000271f2 1881
.org 0x271f4
	ldr r2, [pc, #44]	@ 000271f4 0b4a
.org 0x271f6
	ldrb r1, [r2, #4]	@ 000271f6 1179
.org 0x271f8
	movs r0, #8	@ 000271f8 0820
.org 0x271fa
	orrs r0, r1	@ 000271fa 0843
.org 0x271fc
	strb r0, [r2, #4]	@ 000271fc 1071
.org 0x271fe
	ldrb r1, [r2, #12]	@ 000271fe 117b
.org 0x27200
	movs r0, #251	@ 00027200 fb20
.org 0x27202
	ands r0, r1	@ 00027202 0840
.org 0x27204
	movs r1, #247	@ 00027204 f721
.org 0x27206
	ands r0, r1	@ 00027206 0840
.org 0x27208
	movs r1, #239	@ 00027208 ef21
.org 0x2720a
	ands r0, r1	@ 0002720a 0840
.org 0x2720c
	strb r0, [r2, #12]	@ 0002720c 1073
.org 0x2720e
	ldrb r0, [r3, #2]	@ 0002720e 9878
.org 0x27210
	cmp r0, #0	@ 00027210 0028
.org 0x27212
	bne.n 0x2722c	@ 00027212 0bd1
.org 0x27214
	adds r0, r3, #0	@ 00027214 181c
.org 0x27216
	adds r0, #16	@ 00027216 1030
.org 0x27218
	ldr r1, [pc, #12]	@ 00027218 0349
.org 0x2721a
	ldr r1, [r1, #68]	@ 0002721a 496c
.org 0x2721c
	ldr r1, [r1, #0]	@ 0002721c 0968
.org 0x2721e
	b.n 0x272f4	@ 0002721e 69e0
.org 0x27220
	.byte 0x10,0xe9,0x02,0x02	@ 00027220 data
.org 0x27224
	.byte 0xb0,0xe8,0x02,0x02	@ 00027224 data
.org 0x27228
	.byte 0xf8,0x2c,0x84,0x08	@ 00027228 data
.org 0x2722c
	cmp r0, #1	@ 0002722c 0128
.org 0x2722e
	bne.n 0x27240	@ 0002722e 07d1
.org 0x27230
	adds r0, r3, #0	@ 00027230 181c
.org 0x27232
	adds r0, #16	@ 00027232 1030
.org 0x27234
	ldr r1, [pc, #4]	@ 00027234 0149
.org 0x27236
	ldr r1, [r1, #68]	@ 00027236 496c
.org 0x27238
	ldr r1, [r1, #4]	@ 00027238 4968
.org 0x2723a
	b.n 0x272f4	@ 0002723a 5be0
.org 0x2723c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002723c data
.org 0x27240
	cmp r0, #2	@ 00027240 0228
.org 0x27242
	bne.n 0x27254	@ 00027242 07d1
.org 0x27244
	adds r0, r3, #0	@ 00027244 181c
.org 0x27246
	adds r0, #16	@ 00027246 1030
.org 0x27248
	ldr r1, [pc, #4]	@ 00027248 0149
.org 0x2724a
	ldr r1, [r1, #68]	@ 0002724a 496c
.org 0x2724c
	ldr r1, [r1, #8]	@ 0002724c 8968
.org 0x2724e
	b.n 0x272f4	@ 0002724e 51e0
.org 0x27250
	.byte 0xf8,0x2c,0x84,0x08	@ 00027250 data
.org 0x27254
	cmp r0, #3	@ 00027254 0328
.org 0x27256
	bne.n 0x27270	@ 00027256 0bd1
.org 0x27258
	adds r0, r3, #0	@ 00027258 181c
.org 0x2725a
	adds r0, #16	@ 0002725a 1030
.org 0x2725c
	ldr r2, [pc, #12]	@ 0002725c 034a
.org 0x2725e
	ldrh r1, [r5, #0]	@ 0002725e 2988
.org 0x27260
	lsls r1, r1, #2	@ 00027260 8900
.org 0x27262
	adds r1, r1, r2	@ 00027262 8918
.org 0x27264
	ldr r1, [r1, #0]	@ 00027264 0968
.org 0x27266
	ldr r1, [r1, #12]	@ 00027266 c968
.org 0x27268
	b.n 0x272f4	@ 00027268 44e0
.org 0x2726a
	.byte 0x00	@ 0002726a data
.org 0x2726b
	.byte 0x00	@ 0002726b data
.org 0x2726c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002726c data
.org 0x27270
	cmp r0, #4	@ 00027270 0428
.org 0x27272
	bne.n 0x2728c	@ 00027272 0bd1
.org 0x27274
	adds r0, r3, #0	@ 00027274 181c
.org 0x27276
	adds r0, #16	@ 00027276 1030
.org 0x27278
	ldr r2, [pc, #12]	@ 00027278 034a
.org 0x2727a
	ldrh r1, [r5, #0]	@ 0002727a 2988
.org 0x2727c
	lsls r1, r1, #2	@ 0002727c 8900
.org 0x2727e
	adds r1, r1, r2	@ 0002727e 8918
.org 0x27280
	ldr r1, [r1, #0]	@ 00027280 0968
.org 0x27282
	ldr r1, [r1, #16]	@ 00027282 0969
.org 0x27284
	b.n 0x272f4	@ 00027284 36e0
.org 0x27286
	.byte 0x00	@ 00027286 data
.org 0x27287
	.byte 0x00	@ 00027287 data
.org 0x27288
	.byte 0xf8,0x2c,0x84,0x08	@ 00027288 data
.org 0x2728c
	cmp r0, #5	@ 0002728c 0528
.org 0x2728e
	bne.n 0x272a8	@ 0002728e 0bd1
.org 0x27290
	adds r0, r3, #0	@ 00027290 181c
.org 0x27292
	adds r0, #16	@ 00027292 1030
.org 0x27294
	ldr r2, [pc, #12]	@ 00027294 034a
.org 0x27296
	ldrh r1, [r5, #0]	@ 00027296 2988
.org 0x27298
	lsls r1, r1, #2	@ 00027298 8900
.org 0x2729a
	adds r1, r1, r2	@ 0002729a 8918
.org 0x2729c
	ldr r1, [r1, #0]	@ 0002729c 0968
.org 0x2729e
	ldr r1, [r1, #20]	@ 0002729e 4969
.org 0x272a0
	b.n 0x272f4	@ 000272a0 28e0
.org 0x272a2
	.byte 0x00	@ 000272a2 data
.org 0x272a3
	.byte 0x00	@ 000272a3 data
.org 0x272a4
	.byte 0xf8,0x2c,0x84,0x08	@ 000272a4 data
.org 0x272a8
	cmp r0, #6	@ 000272a8 0628
.org 0x272aa
	bne.n 0x272c4	@ 000272aa 0bd1
.org 0x272ac
	adds r0, r3, #0	@ 000272ac 181c
.org 0x272ae
	adds r0, #16	@ 000272ae 1030
.org 0x272b0
	ldr r2, [pc, #12]	@ 000272b0 034a
.org 0x272b2
	ldrh r1, [r5, #0]	@ 000272b2 2988
.org 0x272b4
	lsls r1, r1, #2	@ 000272b4 8900
.org 0x272b6
	adds r1, r1, r2	@ 000272b6 8918
.org 0x272b8
	ldr r1, [r1, #0]	@ 000272b8 0968
.org 0x272ba
	ldr r1, [r1, #24]	@ 000272ba 8969
.org 0x272bc
	b.n 0x272f4	@ 000272bc 1ae0
.org 0x272be
	.byte 0x00	@ 000272be data
.org 0x272bf
	.byte 0x00	@ 000272bf data
.org 0x272c0
	.byte 0xf8,0x2c,0x84,0x08	@ 000272c0 data
.org 0x272c4
	cmp r0, #7	@ 000272c4 0728
.org 0x272c6
	bne.n 0x272e0	@ 000272c6 0bd1
.org 0x272c8
	adds r0, r3, #0	@ 000272c8 181c
.org 0x272ca
	adds r0, #16	@ 000272ca 1030
.org 0x272cc
	ldr r2, [pc, #12]	@ 000272cc 034a
.org 0x272ce
	ldrh r1, [r5, #0]	@ 000272ce 2988
.org 0x272d0
	lsls r1, r1, #2	@ 000272d0 8900
.org 0x272d2
	adds r1, r1, r2	@ 000272d2 8918
.org 0x272d4
	ldr r1, [r1, #0]	@ 000272d4 0968
.org 0x272d6
	ldr r1, [r1, #28]	@ 000272d6 c969
.org 0x272d8
	b.n 0x272f4	@ 000272d8 0ce0
.org 0x272da
	.byte 0x00	@ 000272da data
.org 0x272db
	.byte 0x00	@ 000272db data
.org 0x272dc
	.byte 0xf8,0x2c,0x84,0x08	@ 000272dc data
.org 0x272e0
	cmp r0, #8	@ 000272e0 0828
.org 0x272e2
	bne.n 0x27304	@ 000272e2 0fd1
.org 0x272e4
	adds r0, r3, #0	@ 000272e4 181c
.org 0x272e6
	adds r0, #16	@ 000272e6 1030
.org 0x272e8
	ldr r2, [pc, #20]	@ 000272e8 054a
.org 0x272ea
	ldrh r1, [r5, #0]	@ 000272ea 2988
.org 0x272ec
	lsls r1, r1, #2	@ 000272ec 8900
.org 0x272ee
	adds r1, r1, r2	@ 000272ee 8918
.org 0x272f0
	ldr r1, [r1, #0]	@ 000272f0 0968
.org 0x272f2
	ldr r1, [r1, #56]	@ 000272f2 896b
.org 0x272f4
	bl 0x275f0	@ 000272f4 00f07cf9
.org 0x272f8
	movs r0, #255	@ 000272f8 ff20
.org 0x272fa
	strb r0, [r4, #0]	@ 000272fa 2070
.org 0x272fc
	b.n 0x273e6	@ 000272fc 73e0
.org 0x272fe
	.byte 0x00	@ 000272fe data
.org 0x272ff
	.byte 0x00	@ 000272ff data
.org 0x27300
	.byte 0xf8,0x2c,0x84,0x08	@ 00027300 data
.org 0x27304
	ldrb r0, [r3, #2]	@ 00027304 9878
.org 0x27306
	cmp r0, #9	@ 00027306 0928
.org 0x27308
	bne.n 0x273e6	@ 00027308 6dd1
.org 0x2730a
	adds r0, r3, #0	@ 0002730a 181c
.org 0x2730c
	adds r0, #16	@ 0002730c 1030
.org 0x2730e
	ldr r2, [pc, #28]	@ 0002730e 074a
.org 0x27310
	ldrh r1, [r5, #0]	@ 00027310 2988
.org 0x27312
	lsls r1, r1, #2	@ 00027312 8900
.org 0x27314
	adds r1, r1, r2	@ 00027314 8918
.org 0x27316
	ldr r1, [r1, #0]	@ 00027316 0968
.org 0x27318
	ldr r1, [r1, #60]	@ 00027318 c96b
.org 0x2731a
	bl 0x275f0	@ 0002731a 00f069f9
.org 0x2731e
	movs r0, #190	@ 0002731e be20
.org 0x27320
	lsls r0, r0, #1	@ 00027320 4000
.org 0x27322
	adds r1, r5, r0	@ 00027322 2918
.org 0x27324
	movs r0, #255	@ 00027324 ff20
.org 0x27326
	strb r0, [r1, #0]	@ 00027326 0870
.org 0x27328
	b.n 0x273e6	@ 00027328 5de0
.org 0x2732a
	.byte 0x00	@ 0002732a data
.org 0x2732b
	.byte 0x00	@ 0002732b data
.org 0x2732c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002732c data
.org 0x27330
	ldr r4, [pc, #44]	@ 00027330 0b4c
.org 0x27332
	ldrb r1, [r4, #6]	@ 00027332 a179
.org 0x27334
	movs r0, #8	@ 00027334 0820
.org 0x27336
	ands r0, r1	@ 00027336 0840
.org 0x27338
	cmp r0, #0	@ 00027338 0028
.org 0x2733a
	bne.n 0x27394	@ 0002733a 2bd1
.org 0x2733c
	ldr r0, [pc, #36]	@ 0002733c 0948
.org 0x2733e
	ldr r1, [pc, #40]	@ 0002733e 0a49
.org 0x27340
	adds r0, r0, r1	@ 00027340 4018
.org 0x27342
	ldr r0, [r0, #0]	@ 00027342 0068
.org 0x27344
	ldr r0, [r0, #84]	@ 00027344 406d
.org 0x27346
	ldr r1, [pc, #36]	@ 00027346 0949
.org 0x27348
	adds r0, r0, r1	@ 00027348 4018
.org 0x2734a
	ldr r1, [pc, #36]	@ 0002734a 0949
.org 0x2734c
	cmp r0, r1	@ 0002734c 8842
.org 0x2734e
	bhi.n 0x2737c	@ 0002734e 15d8
.org 0x27350
	ldr r0, [pc, #32]	@ 00027350 0848
.org 0x27352
	ldr r1, [pc, #36]	@ 00027352 0949
.org 0x27354
	adds r0, r0, r1	@ 00027354 4018
.org 0x27356
	movs r1, #174	@ 00027356 ae21
.org 0x27358
	lsls r1, r1, #11	@ 00027358 c902
.org 0x2735a
	str r1, [r0, #0]	@ 0002735a 0160
.org 0x2735c
	b.n 0x273e6	@ 0002735c 43e0
.org 0x2735e
	.byte 0x00	@ 0002735e data
.org 0x2735f
	.byte 0x00	@ 0002735f data
.org 0x27360
	.byte 0xb0,0xe8,0x02,0x02	@ 00027360 data
.org 0x27364
	.byte 0x10,0xf6,0x02,0x02	@ 00027364 data
.org 0x27368
	.byte 0xa8,0x63,0x00,0x00	@ 00027368 data
.org 0x2736c
	.byte 0xff,0xaf,0xfa,0xff	@ 0002736c data
.org 0x27370
	.byte 0xfe,0x4f,0x00,0x00	@ 00027370 data
.org 0x27374
	.byte 0xb0,0x0a,0x00,0x02	@ 00027374 data
.org 0x27378
	.byte 0x1c,0xc0,0x02,0x00	@ 00027378 data
.org 0x2737c
	ldr r0, [pc, #12]	@ 0002737c 0348
.org 0x2737e
	ldr r1, [pc, #16]	@ 0002737e 0449
.org 0x27380
	adds r0, r0, r1	@ 00027380 4018
.org 0x27382
	movs r1, #240	@ 00027382 f021
.org 0x27384
	lsls r1, r1, #14	@ 00027384 8903
.org 0x27386
	str r1, [r0, #0]	@ 00027386 0160
.org 0x27388
	b.n 0x273e6	@ 00027388 2de0
.org 0x2738a
	.byte 0x00	@ 0002738a data
.org 0x2738b
	.byte 0x00	@ 0002738b data
.org 0x2738c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002738c data
