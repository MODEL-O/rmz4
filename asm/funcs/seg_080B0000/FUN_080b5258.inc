@ FUN_080b5258  entry 0x080b5258  size 196
.thumb
.org 0xb5258
FUN_080b5258:
	push {r4, r5, lr}	@ 000b5258 30b5
.org 0xb525a
	adds r5, r0, #0	@ 000b525a 051c
.org 0xb525c
	ldrb r0, [r5, #14]	@ 000b525c a87b
.org 0xb525e
	cmp r0, #0	@ 000b525e 0028
.org 0xb5260
	bne.n 0xb52c2	@ 000b5260 2fd1
.org 0xb5262
	ldr r2, [r5, #44]	@ 000b5262 ea6a
.org 0xb5264
	cmp r2, #0	@ 000b5264 002a
.org 0xb5266
	beq.n 0xb527a	@ 000b5266 08d0
.org 0xb5268
	ldr r1, [pc, #176]	@ 000b5268 2c49
.org 0xb526a
	ldrb r0, [r2, #9]	@ 000b526a 507a
.org 0xb526c
	lsls r0, r0, #2	@ 000b526c 8000
.org 0xb526e
	adds r0, r0, r1	@ 000b526e 4018
.org 0xb5270
	movs r1, #2	@ 000b5270 0221
.org 0xb5272
	str r1, [r2, #12]	@ 000b5272 d160
.org 0xb5274
	ldr r0, [r0, #0]	@ 000b5274 0068
.org 0xb5276
	ldr r0, [r0, #8]	@ 000b5276 8068
.org 0xb5278
	str r0, [r2, #20]	@ 000b5278 5061
.org 0xb527a
	ldrb r1, [r5, #10]	@ 000b527a a97a
.org 0xb527c
	movs r0, #1	@ 000b527c 0120
.org 0xb527e
	orrs r0, r1	@ 000b527e 0843
.org 0xb5280
	movs r1, #4	@ 000b5280 0421
.org 0xb5282
	orrs r0, r1	@ 000b5282 0843
.org 0xb5284
	strb r0, [r5, #10]	@ 000b5284 a872
.org 0xb5286
	adds r4, r5, #0	@ 000b5286 2c1c
.org 0xb5288
	adds r4, #116	@ 000b5288 7434
.org 0xb528a
	ldr r1, [pc, #148]	@ 000b528a 2549
.org 0xb528c
	adds r2, r5, #0	@ 000b528c 2a1c
.org 0xb528e
	adds r2, #84	@ 000b528e 5432
.org 0xb5290
	adds r0, r4, #0	@ 000b5290 201c
.org 0xb5292
	movs r3, #8	@ 000b5292 0823
.org 0xb5294
	bl 0x5760	@ 000b5294 50f764fa
.org 0xb5298
	str r5, [r4, #44]	@ 000b5298 e562
.org 0xb529a
	ldr r0, [pc, #136]	@ 000b529a 2248
.org 0xb529c
	str r0, [r4, #36]	@ 000b529c 6062
.org 0xb529e
	adds r1, r5, #0	@ 000b529e 291c
.org 0xb52a0
	adds r1, #183	@ 000b52a0 b731
.org 0xb52a2
	movs r0, #1	@ 000b52a2 0120
.org 0xb52a4
	strb r0, [r1, #0]	@ 000b52a4 0870
.org 0xb52a6
	ldr r0, [pc, #128]	@ 000b52a6 2048
.org 0xb52a8
	str r0, [r5, #96]	@ 000b52a8 2866
.org 0xb52aa
	movs r0, #64	@ 000b52aa 4020
.org 0xb52ac
	str r0, [r5, #104]	@ 000b52ac a866
.org 0xb52ae
	ldr r1, [pc, #124]	@ 000b52ae 1f49
.org 0xb52b0
	adds r0, r5, #0	@ 000b52b0 281c
.org 0xb52b2
	bl 0x1cf00	@ 000b52b2 67f725fe
.org 0xb52b6
	ldr r0, [pc, #120]	@ 000b52b6 1e48
.org 0xb52b8
	bl 0x2b10	@ 000b52b8 4df72afc
.org 0xb52bc
	ldrb r0, [r5, #14]	@ 000b52bc a87b
.org 0xb52be
	adds r0, #1	@ 000b52be 0130
.org 0xb52c0
	strb r0, [r5, #14]	@ 000b52c0 a873
.org 0xb52c2
	ldr r0, [r5, #88]	@ 000b52c2 a86d
.org 0xb52c4
	ldr r1, [r5, #96]	@ 000b52c4 296e
.org 0xb52c6
	adds r2, r0, r1	@ 000b52c6 4218
.org 0xb52c8
	str r2, [r5, #88]	@ 000b52c8 aa65
.org 0xb52ca
	ldr r0, [r5, #104]	@ 000b52ca a86e
.org 0xb52cc
	adds r1, r1, r0	@ 000b52cc 0918
.org 0xb52ce
	str r1, [r5, #96]	@ 000b52ce 2966
.org 0xb52d0
	cmp r1, #0	@ 000b52d0 0029
.org 0xb52d2
	ble.n 0xb5306	@ 000b52d2 18dd
.org 0xb52d4
	ldrb r0, [r5, #14]	@ 000b52d4 a87b
.org 0xb52d6
	cmp r0, #1	@ 000b52d6 0128
.org 0xb52d8
	bne.n 0xb5306	@ 000b52d8 15d1
.org 0xb52da
	ldr r0, [r5, #84]	@ 000b52da 686d
.org 0xb52dc
	adds r1, r2, #0	@ 000b52dc 111c
.org 0xb52de
	bl 0x7c7c	@ 000b52de 52f7cdfc
.org 0xb52e2
	lsls r0, r0, #16	@ 000b52e2 0004
.org 0xb52e4
	cmp r0, #0	@ 000b52e4 0028
.org 0xb52e6
	beq.n 0xb5306	@ 000b52e6 0ed0
.org 0xb52e8
	ldr r0, [r5, #84]	@ 000b52e8 686d
.org 0xb52ea
	ldr r1, [r5, #88]	@ 000b52ea a96d
.org 0xb52ec
	bl 0x8534	@ 000b52ec 53f722f9
.org 0xb52f0
	str r0, [r5, #88]	@ 000b52f0 a865
.org 0xb52f2
	ldr r1, [pc, #64]	@ 000b52f2 1049
.org 0xb52f4
	adds r0, r5, #0	@ 000b52f4 281c
.org 0xb52f6
	bl 0x1cf00	@ 000b52f6 67f703fe
.org 0xb52fa
	movs r0, #0	@ 000b52fa 0020
.org 0xb52fc
	str r0, [r5, #96]	@ 000b52fc 2866
.org 0xb52fe
	str r0, [r5, #104]	@ 000b52fe a866
.org 0xb5300
	ldrb r0, [r5, #14]	@ 000b5300 a87b
.org 0xb5302
	adds r0, #1	@ 000b5302 0130
.org 0xb5304
	strb r0, [r5, #14]	@ 000b5304 a873
.org 0xb5306
	adds r0, r5, #0	@ 000b5306 281c
.org 0xb5308
	adds r0, #115	@ 000b5308 7330
.org 0xb530a
	ldrb r0, [r0, #0]	@ 000b530a 0078
.org 0xb530c
	cmp r0, #3	@ 000b530c 0328
.org 0xb530e
	bne.n 0xb5316	@ 000b530e 02d1
.org 0xb5310
	movs r0, #0	@ 000b5310 0020
.org 0xb5312
	strb r0, [r5, #13]	@ 000b5312 6873
.org 0xb5314
	strb r0, [r5, #14]	@ 000b5314 a873
.org 0xb5316
	pop {r4, r5}	@ 000b5316 30bc
.org 0xb5318
	pop {r0}	@ 000b5318 01bc
.org 0xb531a
	bx r0	@ 000b531a 0047
