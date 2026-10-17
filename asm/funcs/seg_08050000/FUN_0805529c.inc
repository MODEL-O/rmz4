@ FUN_0805529c  entry 0x0805529c  size 234
.thumb
.org 0x5529c
FUN_0805529c:
	push {r4, r5, r6, r7, lr}	@ 0005529c f0b5
.org 0x5529e
	mov r7, r9	@ 0005529e 4f46
.org 0x552a0
	mov r6, r8	@ 000552a0 4646
.org 0x552a2
	push {r6, r7}	@ 000552a2 c0b4
.org 0x552a4
	adds r7, r0, #0	@ 000552a4 071c
.org 0x552a6
	movs r0, #0	@ 000552a6 0020
.org 0x552a8
	mov r8, r0	@ 000552a8 8046
.org 0x552aa
	ldr r0, [pc, #160]	@ 000552aa 2848
.org 0x552ac
	ldr r0, [r0, #0]	@ 000552ac 0068
.org 0x552ae
	ldr r2, [r7, #84]	@ 000552ae 7a6d
.org 0x552b0
	ldr r0, [r0, #84]	@ 000552b0 406d
.org 0x552b2
	cmp r2, r0	@ 000552b2 8242
.org 0x552b4
	bge.n 0x552ba	@ 000552b4 01da
.org 0x552b6
	movs r3, #1	@ 000552b6 0123
.org 0x552b8
	mov r8, r3	@ 000552b8 9846
.org 0x552ba
	ldr r1, [pc, #148]	@ 000552ba 2549
.org 0x552bc
	ldrb r0, [r7, #9]	@ 000552bc 787a
.org 0x552be
	lsls r0, r0, #2	@ 000552be 8000
.org 0x552c0
	adds r0, r0, r1	@ 000552c0 4018
.org 0x552c2
	movs r5, #1	@ 000552c2 0125
.org 0x552c4
	str r5, [r7, #12]	@ 000552c4 fd60
.org 0x552c6
	ldr r0, [r0, #0]	@ 000552c6 0068
.org 0x552c8
	ldr r0, [r0, #4]	@ 000552c8 4068
.org 0x552ca
	str r0, [r7, #20]	@ 000552ca 7861
.org 0x552cc
	movs r4, #0	@ 000552cc 0024
.org 0x552ce
	movs r1, #1	@ 000552ce 0121
.org 0x552d0
	strb r5, [r7, #13]	@ 000552d0 7d73
.org 0x552d2
	strb r4, [r7, #14]	@ 000552d2 bc73
.org 0x552d4
	strb r4, [r7, #15]	@ 000552d4 fc73
.org 0x552d6
	ldrb r0, [r7, #10]	@ 000552d6 b87a
.org 0x552d8
	movs r3, #0	@ 000552d8 0023
.org 0x552da
	mov r9, r3	@ 000552da 9946
.org 0x552dc
	orrs r0, r1	@ 000552dc 0843
.org 0x552de
	movs r1, #2	@ 000552de 0221
.org 0x552e0
	orrs r0, r1	@ 000552e0 0843
.org 0x552e2
	strb r0, [r7, #10]	@ 000552e2 b872
.org 0x552e4
	ldr r1, [r7, #88]	@ 000552e4 b96d
.org 0x552e6
	adds r0, r2, #0	@ 000552e6 101c
.org 0x552e8
	bl 0x8534	@ 000552e8 b3f724f9
.org 0x552ec
	str r0, [r7, #88]	@ 000552ec b865
.org 0x552ee
	adds r6, r7, #0	@ 000552ee 3e1c
.org 0x552f0
	adds r6, #180	@ 000552f0 b436
.org 0x552f2
	strb r4, [r6, #0]	@ 000552f2 3470
.org 0x552f4
	adds r1, r7, #0	@ 000552f4 391c
.org 0x552f6
	adds r1, #182	@ 000552f6 b631
.org 0x552f8
	movs r0, #255	@ 000552f8 ff20
.org 0x552fa
	strb r0, [r1, #0]	@ 000552fa 0870
.org 0x552fc
	adds r0, r7, #0	@ 000552fc 381c
.org 0x552fe
	adds r0, #183	@ 000552fe b730
.org 0x55300
	strb r4, [r0, #0]	@ 00055300 0470
.org 0x55302
	adds r0, #9	@ 00055302 0930
.org 0x55304
	strb r4, [r0, #0]	@ 00055304 0470
.org 0x55306
	adds r0, #16	@ 00055306 1030
.org 0x55308
	str r4, [r0, #0]	@ 00055308 0460
.org 0x5530a
	adds r0, #4	@ 0005530a 0430
.org 0x5530c
	str r4, [r0, #0]	@ 0005530c 0460
.org 0x5530e
	adds r0, #4	@ 0005530e 0430
.org 0x55310
	str r4, [r0, #0]	@ 00055310 0460
.org 0x55312
	str r4, [r7, #44]	@ 00055312 fc62
.org 0x55314
	adds r0, r7, #0	@ 00055314 381c
.org 0x55316
	bl 0x1cc9c	@ 00055316 c7f7c1fc
.org 0x5531a
	adds r0, r7, #0	@ 0005531a 381c
.org 0x5531c
	bl 0x1ceec	@ 0005531c c7f7e6fd
.org 0x55320
	mov r1, r8	@ 00055320 4146
.org 0x55322
	ands r1, r5	@ 00055322 2940
.org 0x55324
	adds r0, r7, #0	@ 00055324 381c
.org 0x55326
	adds r0, #76	@ 00055326 4c30
.org 0x55328
	strb r1, [r0, #0]	@ 00055328 0170
.org 0x5532a
	adds r3, r7, #0	@ 0005532a 3b1c
.org 0x5532c
	adds r3, #74	@ 0005532c 4a33
.org 0x5532e
	lsls r1, r1, #4	@ 0005532e 0901
.org 0x55330
	ldrb r2, [r3, #0]	@ 00055330 1a78
.org 0x55332
	movs r0, #17	@ 00055332 1120
.org 0x55334
	negs r0, r0	@ 00055334 4042
.org 0x55336
	ands r0, r2	@ 00055336 1040
.org 0x55338
	orrs r0, r1	@ 00055338 0843
.org 0x5533a
	strb r0, [r3, #0]	@ 0005533a 1870
.org 0x5533c
	mov r0, r8	@ 0005533c 4046
.org 0x5533e
	ands r0, r5	@ 0005533e 2840
.org 0x55340
	cmp r0, #0	@ 00055340 0028
.org 0x55342
	beq.n 0x55354	@ 00055342 07d0
.org 0x55344
	ldrb r0, [r7, #10]	@ 00055344 b87a
.org 0x55346
	movs r1, #16	@ 00055346 1021
.org 0x55348
	orrs r0, r1	@ 00055348 0843
.org 0x5534a
	b.n 0x5535a	@ 0005534a 06e0
.org 0x5534c
	.byte 0xf0,0xdb,0x02,0x02	@ 0005534c data
.org 0x55350
	.byte 0x70,0x7d,0x85,0x08	@ 00055350 data
.org 0x55354
	ldrb r1, [r7, #10]	@ 00055354 b97a
.org 0x55356
	movs r0, #239	@ 00055356 ef20
.org 0x55358
	ands r0, r1	@ 00055358 0840
.org 0x5535a
	strb r0, [r7, #10]	@ 0005535a b872
.org 0x5535c
	ldr r1, [pc, #48]	@ 0005535c 0c49
.org 0x5535e
	adds r0, r7, #0	@ 0005535e 381c
.org 0x55360
	movs r2, #64	@ 00055360 4022
.org 0x55362
	bl 0x503cc	@ 00055362 fbf733f8
.org 0x55366
	ldr r1, [pc, #44]	@ 00055366 0b49
.org 0x55368
	adds r0, r7, #0	@ 00055368 381c
.org 0x5536a
	adds r0, #116	@ 0005536a 7430
.org 0x5536c
	str r1, [r0, #36]	@ 0005536c 4162
.org 0x5536e
	adds r0, r7, #0	@ 0005536e 381c
.org 0x55370
	bl 0x5972c	@ 00055370 04f0dcf9
.org 0x55374
	ldrb r1, [r6, #0]	@ 00055374 3178
.org 0x55376
	movs r0, #254	@ 00055376 fe20
.org 0x55378
	ands r0, r1	@ 00055378 0840
.org 0x5537a
	strb r0, [r6, #0]	@ 0005537a 3070
.org 0x5537c
	adds r0, r7, #0	@ 0005537c 381c
.org 0x5537e
	bl 0x55398	@ 0005537e 00f00bf8
.org 0x55382
	pop {r3, r4}	@ 00055382 18bc
.org 0x55384
	mov r8, r3	@ 00055384 9846
