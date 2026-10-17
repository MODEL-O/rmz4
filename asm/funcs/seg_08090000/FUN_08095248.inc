@ FUN_08095248  entry 0x08095248  size 302
.thumb
.org 0x95248
FUN_08095248:
	push {r4, r5, r6, r7, lr}	@ 00095248 f0b5
.org 0x9524a
	mov r7, sl	@ 0009524a 5746
.org 0x9524c
	mov r6, r9	@ 0009524c 4e46
.org 0x9524e
	mov r5, r8	@ 0009524e 4546
.org 0x95250
	push {r5, r6, r7}	@ 00095250 e0b4
.org 0x95252
	sub sp, #40	@ 00095252 8ab0
.org 0x95254
	adds r7, r0, #0	@ 00095254 071c
.org 0x95256
	mov r1, sp	@ 00095256 6946
.org 0x95258
	ldr r0, [pc, #136]	@ 00095258 2248
.org 0x9525a
	ldmia r0!, {r2, r3, r4}	@ 0009525a 1cc8
.org 0x9525c
	stmia r1!, {r2, r3, r4}	@ 0009525c 1cc1
.org 0x9525e
	ldr r0, [r0, #0]	@ 0009525e 0068
.org 0x95260
	str r0, [r1, #0]	@ 00095260 0860
.org 0x95262
	add r4, sp, #16	@ 00095262 04ac
.org 0x95264
	ldr r1, [pc, #128]	@ 00095264 2049
.org 0x95266
	adds r0, r4, #0	@ 00095266 201c
.org 0x95268
	movs r2, #4	@ 00095268 0422
.org 0x9526a
	bl 0x129258	@ 0009526a 93f0f5ff
.org 0x9526e
	add r6, sp, #20	@ 0009526e 05ae
.org 0x95270
	mov sl, r6	@ 00095270 b246
.org 0x95272
	ldr r1, [pc, #120]	@ 00095272 1e49
.org 0x95274
	mov r0, sl	@ 00095274 5046
.org 0x95276
	movs r2, #4	@ 00095276 0422
.org 0x95278
	bl 0x129258	@ 00095278 93f0eeff
.org 0x9527c
	add r5, sp, #24	@ 0009527c 06ad
.org 0x9527e
	adds r1, r5, #0	@ 0009527e 291c
.org 0x95280
	ldr r0, [pc, #108]	@ 00095280 1b48
.org 0x95282
	ldmia r0!, {r2, r3, r6}	@ 00095282 4cc8
.org 0x95284
	stmia r1!, {r2, r3, r6}	@ 00095284 4cc1
.org 0x95286
	ldr r0, [r0, #0]	@ 00095286 0068
.org 0x95288
	str r0, [r1, #0]	@ 00095288 0860
.org 0x9528a
	ldr r0, [r7, #40]	@ 0009528a b86a
.org 0x9528c
	mov r8, r0	@ 0009528c 8046
.org 0x9528e
	ldrb r1, [r7, #17]	@ 0009528e 797c
.org 0x95290
	mov r9, r1	@ 00095290 8946
.org 0x95292
	ldr r1, [pc, #96]	@ 00095292 1849
.org 0x95294
	ldrb r0, [r7, #9]	@ 00095294 787a
.org 0x95296
	lsls r0, r0, #2	@ 00095296 8000
.org 0x95298
	adds r0, r0, r1	@ 00095298 4018
.org 0x9529a
	movs r6, #1	@ 0009529a 0126
.org 0x9529c
	str r6, [r7, #12]	@ 0009529c fe60
.org 0x9529e
	ldr r0, [r0, #0]	@ 0009529e 0068
.org 0x952a0
	ldr r0, [r0, #4]	@ 000952a0 4068
.org 0x952a2
	str r0, [r7, #20]	@ 000952a2 7861
.org 0x952a4
	ldrb r1, [r7, #10]	@ 000952a4 b97a
.org 0x952a6
	movs r0, #1	@ 000952a6 0120
.org 0x952a8
	orrs r0, r1	@ 000952a8 0843
.org 0x952aa
	movs r1, #2	@ 000952aa 0221
.org 0x952ac
	orrs r0, r1	@ 000952ac 0843
.org 0x952ae
	strb r0, [r7, #10]	@ 000952ae b872
.org 0x952b0
	adds r1, r7, #0	@ 000952b0 391c
.org 0x952b2
	adds r1, #180	@ 000952b2 b431
.org 0x952b4
	movs r0, #64	@ 000952b4 4020
.org 0x952b6
	strb r0, [r1, #0]	@ 000952b6 0870
.org 0x952b8
	adds r1, #4	@ 000952b8 0431
.org 0x952ba
	movs r2, #0	@ 000952ba 0022
.org 0x952bc
	movs r0, #128	@ 000952bc 8020
.org 0x952be
	lsls r0, r0, #5	@ 000952be 4001
.org 0x952c0
	strh r0, [r1, #0]	@ 000952c0 0880
.org 0x952c2
	adds r0, r7, #0	@ 000952c2 381c
.org 0x952c4
	adds r0, #181	@ 000952c4 b530
.org 0x952c6
	strb r2, [r0, #0]	@ 000952c6 0270
.org 0x952c8
	adds r0, r7, #0	@ 000952c8 381c
.org 0x952ca
	bl 0x1cd28	@ 000952ca 87f72dfd
.org 0x952ce
	add r4, r9	@ 000952ce 4c44
.org 0x952d0
	ldrb r2, [r4, #0]	@ 000952d0 2278
.org 0x952d2
	mov r3, r8	@ 000952d2 4346
.org 0x952d4
	ldrb r1, [r3, #10]	@ 000952d4 997a
.org 0x952d6
	movs r0, #16	@ 000952d6 1020
.org 0x952d8
	ands r0, r1	@ 000952d8 0840
.org 0x952da
	cmp r0, #0	@ 000952da 0028
.org 0x952dc
	beq.n 0x952f8	@ 000952dc 0cd0
.org 0x952de
	adds r1, r2, #1	@ 000952de 511c
.org 0x952e0
	ands r1, r6	@ 000952e0 3140
.org 0x952e2
	b.n 0x952fc	@ 000952e2 0be0
.org 0x952e4
	.byte 0xcc,0x9b,0x12,0x08	@ 000952e4 data
.org 0x952e8
	.byte 0xdc,0x9b,0x12,0x08	@ 000952e8 data
.org 0x952ec
	.byte 0xe0,0x9b,0x12,0x08	@ 000952ec data
.org 0x952f0
	.byte 0xe4,0x9b,0x12,0x08	@ 000952f0 data
.org 0x952f4
	.byte 0x40,0xdb,0x85,0x08	@ 000952f4 data
.org 0x952f8
	adds r1, r6, #0	@ 000952f8 311c
.org 0x952fa
	ands r1, r2	@ 000952fa 1140
.org 0x952fc
	adds r2, r1, #0	@ 000952fc 0a1c
.org 0x952fe
	cmp r2, #0	@ 000952fe 002a
.org 0x95300
	beq.n 0x9530a	@ 00095300 03d0
.org 0x95302
	ldrb r1, [r7, #10]	@ 00095302 b97a
.org 0x95304
	movs r0, #16	@ 00095304 1020
.org 0x95306
	orrs r0, r1	@ 00095306 0843
.org 0x95308
	b.n 0x95310	@ 00095308 02e0
.org 0x9530a
	ldrb r1, [r7, #10]	@ 0009530a b97a
.org 0x9530c
	movs r0, #239	@ 0009530c ef20
.org 0x9530e
	ands r0, r1	@ 0009530e 0840
.org 0x95310
	strb r0, [r7, #10]	@ 00095310 b872
.org 0x95312
	adds r1, r2, #0	@ 00095312 111c
.org 0x95314
	adds r0, r7, #0	@ 00095314 381c
.org 0x95316
	adds r0, #76	@ 00095316 4c30
.org 0x95318
	movs r4, #0	@ 00095318 0024
.org 0x9531a
	mov r8, r4	@ 0009531a a046
.org 0x9531c
	strb r1, [r0, #0]	@ 0009531c 0170
.org 0x9531e
	adds r3, r7, #0	@ 0009531e 3b1c
.org 0x95320
	adds r3, #74	@ 00095320 4a33
.org 0x95322
	lsls r1, r1, #4	@ 00095322 0901
.org 0x95324
	ldrb r2, [r3, #0]	@ 00095324 1a78
.org 0x95326
	movs r0, #17	@ 00095326 1120
.org 0x95328
	negs r0, r0	@ 00095328 4042
.org 0x9532a
	ands r0, r2	@ 0009532a 1040
.org 0x9532c
	orrs r0, r1	@ 0009532c 0843
.org 0x9532e
	strb r0, [r3, #0]	@ 0009532e 1870
.org 0x95330
	mov r6, r9	@ 00095330 4e46
.org 0x95332
	lsls r4, r6, #2	@ 00095332 b400
.org 0x95334
	mov r1, sp	@ 00095334 6946
.org 0x95336
	adds r0, r1, r4	@ 00095336 0819
.org 0x95338
	ldrh r1, [r0, #0]	@ 00095338 0188
.org 0x9533a
	adds r0, r7, #0	@ 0009533a 381c
.org 0x9533c
	bl 0x1cf00	@ 0009533c 87f7e0fd
.org 0x95340
	ldrb r1, [r7, #10]	@ 00095340 b97a
.org 0x95342
	movs r0, #4	@ 00095342 0420
.org 0x95344
	orrs r0, r1	@ 00095344 0843
.org 0x95346
	strb r0, [r7, #10]	@ 00095346 b872
.org 0x95348
	adds r5, r7, #0	@ 00095348 3d1c
.org 0x9534a
	adds r5, #116	@ 0009534a 7435
.org 0x9534c
	mov r0, sl	@ 0009534c 5046
.org 0x9534e
	add r0, r9	@ 0009534e 4844
.org 0x95350
	ldrb r0, [r0, #0]	@ 00095350 0078
.org 0x95352
	lsls r1, r0, #1	@ 00095352 4100
.org 0x95354
	adds r1, r1, r0	@ 00095354 0918
.org 0x95356
	lsls r1, r1, #3	@ 00095356 c900
.org 0x95358
	ldr r0, [pc, #48]	@ 00095358 0c48
.org 0x9535a
	adds r1, r1, r0	@ 0009535a 0918
.org 0x9535c
	adds r2, r7, #0	@ 0009535c 3a1c
.org 0x9535e
	adds r2, #84	@ 0009535e 5432
.org 0x95360
	add r4, sp	@ 00095360 6c44
.org 0x95362
	adds r4, #24	@ 00095362 1834
.org 0x95364
	movs r6, #0	@ 00095364 0026
.org 0x95366
	ldrsh r3, [r4, r6]	@ 00095366 a35f
.org 0x95368
	adds r0, r5, #0	@ 00095368 281c
.org 0x9536a
	bl 0x5760	@ 0009536a 70f7f9f9
.org 0x9536e
	str r7, [r5, #44]	@ 0009536e ef62
.org 0x95370
	mov r0, r8	@ 00095370 4046
.org 0x95372
	str r0, [r5, #36]	@ 00095372 6862
.org 0x95374
	adds r0, r7, #0	@ 00095374 381c
