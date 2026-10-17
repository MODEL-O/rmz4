@ FUN_080342d4  entry 0x080342d4  size 164
.thumb
.org 0x342d4
FUN_080342d4:
	push {r4, r5, lr}	@ 000342d4 30b5
.org 0x342d6
	adds r5, r0, #0	@ 000342d6 051c
.org 0x342d8
	movs r0, #129	@ 000342d8 8120
.org 0x342da
	lsls r0, r0, #1	@ 000342da 4000
.org 0x342dc
	adds r4, r5, r0	@ 000342dc 2c18
.org 0x342de
	ldrb r0, [r4, #0]	@ 000342de 2078
.org 0x342e0
	cmp r0, #0	@ 000342e0 0028
.org 0x342e2
	bne.n 0x342fa	@ 000342e2 0ad1
.org 0x342e4
	ldr r1, [pc, #96]	@ 000342e4 1849
.org 0x342e6
	adds r0, r5, #0	@ 000342e6 281c
.org 0x342e8
	bl 0x1cf00	@ 000342e8 e8f70afe
.org 0x342ec
	ldr r0, [pc, #92]	@ 000342ec 1748
.org 0x342ee
	adds r1, r5, r0	@ 000342ee 2918
.org 0x342f0
	movs r0, #4	@ 000342f0 0420
.org 0x342f2
	strb r0, [r1, #0]	@ 000342f2 0870
.org 0x342f4
	ldrb r0, [r4, #0]	@ 000342f4 2078
.org 0x342f6
	adds r0, #1	@ 000342f6 0130
.org 0x342f8
	strb r0, [r4, #0]	@ 000342f8 2070
.org 0x342fa
	ldr r4, [pc, #76]	@ 000342fa 134c
.org 0x342fc
	adds r0, r5, #0	@ 000342fc 281c
.org 0x342fe
	adds r1, r4, #0	@ 000342fe 211c
.org 0x34300
	bl 0x3a3b0	@ 00034300 06f056f8
.org 0x34304
	adds r0, r5, #0	@ 00034304 281c
.org 0x34306
	adds r1, r4, #0	@ 00034306 211c
.org 0x34308
	bl 0x3a3f0	@ 00034308 06f072f8
.org 0x3430c
	ldr r1, [pc, #64]	@ 0003430c 1049
.org 0x3430e
	adds r2, r5, r1	@ 0003430e 6a18
.org 0x34310
	ldrb r0, [r2, #0]	@ 00034310 1078
.org 0x34312
	movs r1, #8	@ 00034312 0821
.org 0x34314
	orrs r0, r1	@ 00034314 0843
.org 0x34316
	strb r0, [r2, #0]	@ 00034316 1070
.org 0x34318
	movs r0, #162	@ 00034318 a220
.org 0x3431a
	lsls r0, r0, #1	@ 0003431a 4000
.org 0x3431c
	adds r1, r5, r0	@ 0003431c 2918
.org 0x3431e
	adds r0, r5, #0	@ 0003431e 281c
.org 0x34320
	bl 0x39fd8	@ 00034320 05f05afe
.org 0x34324
	lsls r0, r0, #24	@ 00034324 0006
.org 0x34326
	lsrs r2, r0, #24	@ 00034326 020e
.org 0x34328
	cmp r2, #0	@ 00034328 002a
.org 0x3432a
	beq.n 0x34354	@ 0003432a 13d0
.org 0x3432c
	movs r1, #128	@ 0003432c 8021
.org 0x3432e
	lsls r1, r1, #1	@ 0003432e 4900
.org 0x34330
	adds r0, r5, r1	@ 00034330 6818
.org 0x34332
	movs r2, #0	@ 00034332 0022
.org 0x34334
	movs r1, #3	@ 00034334 0321
.org 0x34336
	strb r1, [r0, #0]	@ 00034336 0170
.org 0x34338
	adds r1, #254	@ 00034338 fe31
.org 0x3433a
	adds r0, r5, r1	@ 0003433a 6818
.org 0x3433c
	strb r2, [r0, #0]	@ 0003433c 0270
.org 0x3433e
	adds r0, r5, #0	@ 0003433e 281c
.org 0x34340
	bl 0x334dc	@ 00034340 fff7ccf8
.org 0x34344
	b.n 0x34380	@ 00034344 1ce0
.org 0x34346
	.byte 0x00	@ 00034346 data
.org 0x34347
	.byte 0x00	@ 00034347 data
.org 0x34348
	.byte 0x0a,0x27,0x00,0x00	@ 00034348 data
.org 0x3434c
	.byte 0x51,0x01,0x00,0x00	@ 0003434c data
.org 0x34350
	.byte 0x53,0x01,0x00,0x00	@ 00034350 data
.org 0x34354
	ldr r0, [pc, #48]	@ 00034354 0c48
.org 0x34356
	adds r1, r5, r0	@ 00034356 2918
.org 0x34358
	ldrb r0, [r1, #0]	@ 00034358 0878
.org 0x3435a
	subs r0, #1	@ 0003435a 0138
.org 0x3435c
	strb r0, [r1, #0]	@ 0003435c 0870
.org 0x3435e
	lsls r0, r0, #24	@ 0003435e 0006
.org 0x34360
	lsrs r0, r0, #24	@ 00034360 000e
.org 0x34362
	cmp r0, #255	@ 00034362 ff28
.org 0x34364
	bne.n 0x34380	@ 00034364 0cd1
.org 0x34366
	movs r1, #128	@ 00034366 8021
.org 0x34368
	lsls r1, r1, #1	@ 00034368 4900
.org 0x3436a
	adds r0, r5, r1	@ 0003436a 6818
.org 0x3436c
	strb r2, [r0, #0]	@ 0003436c 0270
.org 0x3436e
	adds r0, r5, #0	@ 0003436e 281c
.org 0x34370
	bl 0x2b7d8	@ 00034370 f7f732fa
.org 0x34374
	adds r1, r0, #0	@ 00034374 011c
.org 0x34376
	lsls r1, r1, #16	@ 00034376 0904
