@ FUN_080df2ec  entry 0x080df2ec  size 168
.thumb
.org 0xdf2ec
FUN_080df2ec:
	push {r4, r5, r6, r7, lr}	@ 000df2ec f0b5
.org 0xdf2ee
	mov r7, r8	@ 000df2ee 4746
.org 0xdf2f0
	push {r7}	@ 000df2f0 80b4
.org 0xdf2f2
	adds r5, r0, #0	@ 000df2f2 051c
.org 0xdf2f4
	ldr r0, [sp, #24]	@ 000df2f4 0698
.org 0xdf2f6
	lsls r1, r1, #24	@ 000df2f6 0906
.org 0xdf2f8
	lsrs r1, r1, #24	@ 000df2f8 090e
.org 0xdf2fa
	mov r8, r1	@ 000df2fa 8846
.org 0xdf2fc
	lsls r2, r2, #24	@ 000df2fc 1206
.org 0xdf2fe
	lsrs r7, r2, #24	@ 000df2fe 170e
.org 0xdf300
	lsls r3, r3, #24	@ 000df300 1b06
.org 0xdf302
	lsrs r4, r3, #24	@ 000df302 1c0e
.org 0xdf304
	lsls r0, r0, #24	@ 000df304 0006
.org 0xdf306
	lsrs r6, r0, #24	@ 000df306 060e
.org 0xdf308
	ldr r0, [pc, #72]	@ 000df308 1248
.org 0xdf30a
	ldr r0, [r0, #0]	@ 000df30a 0068
.org 0xdf30c
	bl 0x5500	@ 000df30c 26f7f8f8
.org 0xdf310
	mov ip, r0	@ 000df310 8446
.org 0xdf312
	cmp r0, #0	@ 000df312 0028
.org 0xdf314
	beq.n 0xdf392	@ 000df314 3dd0
.org 0xdf316
	mov r1, ip	@ 000df316 6146
.org 0xdf318
	adds r1, #37	@ 000df318 2531
.org 0xdf31a
	movs r2, #0	@ 000df31a 0022
.org 0xdf31c
	movs r0, #1	@ 000df31c 0120
.org 0xdf31e
	strb r0, [r1, #0]	@ 000df31e 0870
.org 0xdf320
	ldr r0, [pc, #52]	@ 000df320 0d48
.org 0xdf322
	movs r1, #52	@ 000df322 3421
.org 0xdf324
	mov r3, ip	@ 000df324 6346
.org 0xdf326
	strb r1, [r3, #9]	@ 000df326 5972
.org 0xdf328
	adds r0, #208	@ 000df328 d030
.org 0xdf32a
	ldr r0, [r0, #0]	@ 000df32a 0068
.org 0xdf32c
	ldr r0, [r0, #0]	@ 000df32c 0068
.org 0xdf32e
	str r0, [r3, #20]	@ 000df32e 5861
.org 0xdf330
	movs r0, #0	@ 000df330 0020
.org 0xdf332
	strh r2, [r3, #32]	@ 000df332 1a84
.org 0xdf334
	mov r1, ip	@ 000df334 6146
.org 0xdf336
	adds r1, #34	@ 000df336 2231
.org 0xdf338
	strb r0, [r1, #0]	@ 000df338 0870
.org 0xdf33a
	ldr r0, [r5, #0]	@ 000df33a 2868
.org 0xdf33c
	ldr r1, [r5, #4]	@ 000df33c 6968
.org 0xdf33e
	mov r2, ip	@ 000df33e 6246
.org 0xdf340
	str r0, [r2, #84]	@ 000df340 5065
.org 0xdf342
	str r1, [r2, #88]	@ 000df342 9165
.org 0xdf344
	adds r3, r4, #0	@ 000df344 231c
.org 0xdf346
	cmp r3, #0	@ 000df346 002b
.org 0xdf348
	beq.n 0xdf35c	@ 000df348 08d0
.org 0xdf34a
	ldrb r0, [r2, #10]	@ 000df34a 907a
.org 0xdf34c
	movs r1, #16	@ 000df34c 1021
.org 0xdf34e
	orrs r0, r1	@ 000df34e 0843
.org 0xdf350
	strb r0, [r2, #10]	@ 000df350 9072
.org 0xdf352
	b.n 0xdf368	@ 000df352 09e0
.org 0xdf354
	.byte 0x9c,0xed,0x02,0x02	@ 000df354 data
.org 0xdf358
	.byte 0x64,0x6f,0x86,0x08	@ 000df358 data
.org 0xdf35c
	mov r0, ip	@ 000df35c 6046
.org 0xdf35e
	ldrb r1, [r0, #10]	@ 000df35e 817a
.org 0xdf360
	movs r0, #239	@ 000df360 ef20
.org 0xdf362
	ands r0, r1	@ 000df362 0840
.org 0xdf364
	mov r1, ip	@ 000df364 6146
.org 0xdf366
	strb r0, [r1, #10]	@ 000df366 8872
.org 0xdf368
	movs r1, #1	@ 000df368 0121
.org 0xdf36a
	ands r1, r3	@ 000df36a 1940
.org 0xdf36c
	mov r0, ip	@ 000df36c 6046
.org 0xdf36e
	adds r0, #76	@ 000df36e 4c30
.org 0xdf370
	strb r1, [r0, #0]	@ 000df370 0170
.org 0xdf372
	mov r3, ip	@ 000df372 6346
.org 0xdf374
	adds r3, #74	@ 000df374 4a33
.org 0xdf376
	lsls r1, r1, #4	@ 000df376 0901
.org 0xdf378
	ldrb r2, [r3, #0]	@ 000df378 1a78
.org 0xdf37a
	movs r0, #17	@ 000df37a 1120
.org 0xdf37c
	negs r0, r0	@ 000df37c 4042
.org 0xdf37e
	ands r0, r2	@ 000df37e 1040
.org 0xdf380
	orrs r0, r1	@ 000df380 0843
.org 0xdf382
	strb r0, [r3, #0]	@ 000df382 1870
.org 0xdf384
	mov r0, ip	@ 000df384 6046
.org 0xdf386
	adds r0, #116	@ 000df386 7430
.org 0xdf388
	strb r6, [r0, #0]	@ 000df388 0670
.org 0xdf38a
	mov r3, r8	@ 000df38a 4346
.org 0xdf38c
	mov r2, ip	@ 000df38c 6246
.org 0xdf38e
	strb r3, [r2, #16]	@ 000df38e 1374
.org 0xdf390
	strb r7, [r2, #17]	@ 000df390 5774
.org 0xdf392
	pop {r3}	@ 000df392 08bc
