@ FUN_08045230  entry 0x08045230  size 298
.thumb
.org 0x45230
FUN_08045230:
	push {r4, r5, r6, r7, lr}	@ 00045230 f0b5
.org 0x45232
	mov r7, r8	@ 00045232 4746
.org 0x45234
	push {r7}	@ 00045234 80b4
.org 0x45236
	adds r7, r0, #0	@ 00045236 071c
.org 0x45238
	ldr r0, [r7, #44]	@ 00045238 f86a
.org 0x4523a
	mov r8, r0	@ 0004523a 8046
.org 0x4523c
	adds r0, r7, #0	@ 0004523c 381c
.org 0x4523e
	bl 0x1cff0	@ 0004523e d7f7d7fe
.org 0x45242
	ldrb r0, [r7, #13]	@ 00045242 787b
.org 0x45244
	cmp r0, #0	@ 00045244 0028
.org 0x45246
	bne.n 0x452d0	@ 00045246 43d1
.org 0x45248
	ldr r0, [r7, #84]	@ 00045248 786d
.org 0x4524a
	ldr r1, [r7, #92]	@ 0004524a f96d
.org 0x4524c
	adds r0, r0, r1	@ 0004524c 4018
.org 0x4524e
	str r0, [r7, #84]	@ 0004524e 7865
.org 0x45250
	ldr r0, [r7, #100]	@ 00045250 786e
.org 0x45252
	adds r1, r1, r0	@ 00045252 0918
.org 0x45254
	str r1, [r7, #92]	@ 00045254 f965
.org 0x45256
	cmp r1, #0	@ 00045256 0029
.org 0x45258
	bge.n 0x4525c	@ 00045258 00da
.org 0x4525a
	negs r1, r1	@ 0004525a 4942
.org 0x4525c
	ldr r0, [pc, #104]	@ 0004525c 1a48
.org 0x4525e
	cmp r1, r0	@ 0004525e 8142
.org 0x45260
	bgt.n 0x452ee	@ 00045260 45dc
.org 0x45262
	ldr r6, [r7, #44]	@ 00045262 fe6a
.org 0x45264
	ldr r1, [pc, #100]	@ 00045264 1949
.org 0x45266
	adds r0, r7, #0	@ 00045266 381c
.org 0x45268
	bl 0x1cf00	@ 00045268 d7f74afe
.org 0x4526c
	adds r0, r7, #0	@ 0004526c 381c
.org 0x4526e
	bl 0x1cff0	@ 0004526e d7f7bffe
.org 0x45272
	adds r5, r7, #0	@ 00045272 3d1c
.org 0x45274
	adds r5, #84	@ 00045274 5435
.org 0x45276
	ldrb r3, [r7, #10]	@ 00045276 bb7a
.org 0x45278
	lsrs r3, r3, #4	@ 00045278 1b09
.org 0x4527a
	movs r4, #1	@ 0004527a 0124
.org 0x4527c
	ands r3, r4	@ 0004527c 2340
.org 0x4527e
	adds r0, r6, #0	@ 0004527e 301c
.org 0x45280
	adds r1, r5, #0	@ 00045280 291c
.org 0x45282
	movs r2, #0	@ 00045282 0022
.org 0x45284
	bl 0x44fb8	@ 00045284 fff798fe
.org 0x45288
	ldrb r3, [r7, #10]	@ 00045288 bb7a
.org 0x4528a
	lsrs r3, r3, #4	@ 0004528a 1b09
.org 0x4528c
	ands r3, r4	@ 0004528c 2340
.org 0x4528e
	adds r0, r6, #0	@ 0004528e 301c
.org 0x45290
	adds r1, r5, #0	@ 00045290 291c
.org 0x45292
	movs r2, #1	@ 00045292 0122
.org 0x45294
	bl 0x44fb8	@ 00045294 fff790fe
.org 0x45298
	ldrb r3, [r7, #10]	@ 00045298 bb7a
.org 0x4529a
	lsrs r3, r3, #4	@ 0004529a 1b09
.org 0x4529c
	ands r3, r4	@ 0004529c 2340
.org 0x4529e
	adds r0, r6, #0	@ 0004529e 301c
.org 0x452a0
	adds r1, r5, #0	@ 000452a0 291c
.org 0x452a2
	movs r2, #2	@ 000452a2 0222
.org 0x452a4
	bl 0x44fb8	@ 000452a4 fff788fe
.org 0x452a8
	ldrb r3, [r7, #10]	@ 000452a8 bb7a
.org 0x452aa
	lsrs r3, r3, #4	@ 000452aa 1b09
.org 0x452ac
	ands r3, r4	@ 000452ac 2340
.org 0x452ae
	adds r0, r6, #0	@ 000452ae 301c
.org 0x452b0
	adds r1, r5, #0	@ 000452b0 291c
.org 0x452b2
	movs r2, #3	@ 000452b2 0322
.org 0x452b4
	bl 0x44fb8	@ 000452b4 fff780fe
.org 0x452b8
	movs r0, #54	@ 000452b8 3620
.org 0x452ba
	bl 0x2b10	@ 000452ba bdf729fc
.org 0x452be
	ldrb r0, [r7, #13]	@ 000452be 787b
.org 0x452c0
	adds r0, #1	@ 000452c0 0130
.org 0x452c2
	strb r0, [r7, #13]	@ 000452c2 7873
.org 0x452c4
	b.n 0x452ee	@ 000452c4 13e0
.org 0x452c6
	.byte 0x00	@ 000452c6 data
.org 0x452c7
	.byte 0x00	@ 000452c7 data
.org 0x452c8
	.byte 0x7f,0x01,0x00,0x00	@ 000452c8 data
.org 0x452cc
	.byte 0x0f,0x82,0x00,0x00	@ 000452cc data
.org 0x452d0
	ldr r0, [r7, #84]	@ 000452d0 786d
.org 0x452d2
	ldr r1, [r7, #92]	@ 000452d2 f96d
.org 0x452d4
	adds r0, r0, r1	@ 000452d4 4018
.org 0x452d6
	str r0, [r7, #84]	@ 000452d6 7865
.org 0x452d8
	adds r2, r1, #0	@ 000452d8 0a1c
.org 0x452da
	cmp r1, #0	@ 000452da 0029
.org 0x452dc
	bge.n 0x452e0	@ 000452dc 00da
.org 0x452de
	negs r2, r1	@ 000452de 4a42
.org 0x452e0
	ldr r0, [pc, #128]	@ 000452e0 2048
.org 0x452e2
	cmp r2, r0	@ 000452e2 8242
.org 0x452e4
	bgt.n 0x452ee	@ 000452e4 03dc
.org 0x452e6
	ldr r0, [r7, #100]	@ 000452e6 786e
.org 0x452e8
	lsls r0, r0, #2	@ 000452e8 8000
.org 0x452ea
	subs r0, r1, r0	@ 000452ea 081a
.org 0x452ec
	str r0, [r7, #92]	@ 000452ec f865
.org 0x452ee
	adds r0, r7, #0	@ 000452ee 381c
.org 0x452f0
	movs r1, #3	@ 000452f0 0321
.org 0x452f2
	bl 0x3a99c	@ 000452f2 f5f753fb
.org 0x452f6
	lsls r0, r0, #24	@ 000452f6 0006
.org 0x452f8
	lsrs r2, r0, #24	@ 000452f8 020e
.org 0x452fa
	mov r0, r8	@ 000452fa 4046
.org 0x452fc
	adds r0, #250	@ 000452fc fa30
.org 0x452fe
	ldrb r0, [r0, #0]	@ 000452fe 0078
.org 0x45300
	cmp r0, #2	@ 00045300 0228
.org 0x45302
	bne.n 0x45306	@ 00045302 00d1
.org 0x45304
	movs r2, #1	@ 00045304 0122
.org 0x45306
	cmp r2, #0	@ 00045306 002a
.org 0x45308
	bne.n 0x45326	@ 00045308 0dd1
.org 0x4530a
	ldrb r0, [r7, #18]	@ 0004530a b87c
.org 0x4530c
	subs r0, #1	@ 0004530c 0138
.org 0x4530e
	strb r0, [r7, #18]	@ 0004530e b874
.org 0x45310
	lsls r0, r0, #24	@ 00045310 0006
.org 0x45312
	lsrs r0, r0, #24	@ 00045312 000e
.org 0x45314
	cmp r0, #255	@ 00045314 ff28
.org 0x45316
	beq.n 0x45326	@ 00045316 06d0
.org 0x45318
	adds r0, r7, #0	@ 00045318 381c
.org 0x4531a
	adds r0, #140	@ 0004531a 8c30
.org 0x4531c
	ldr r0, [r0, #0]	@ 0004531c 0068
.org 0x4531e
	movs r1, #4	@ 0004531e 0421
.org 0x45320
	ands r0, r1	@ 00045320 0840
.org 0x45322
	cmp r0, #0	@ 00045322 0028
.org 0x45324
	beq.n 0x4535a	@ 00045324 19d0
.org 0x45326
	cmp r2, #255	@ 00045326 ff2a
.org 0x45328
	beq.n 0x4533a	@ 00045328 07d0
.org 0x4532a
	adds r1, r7, #0	@ 0004532a 391c
.org 0x4532c
	adds r1, #84	@ 0004532c 5431
.org 0x4532e
	movs r0, #1	@ 0004532e 0120
.org 0x45330
	bl 0xd0c88	@ 00045330 8bf0aafc
.org 0x45334
	movs r0, #53	@ 00045334 3520
.org 0x45336
	bl 0x2b10	@ 00045336 bdf7ebfb
.org 0x4533a
	ldr r0, [r7, #84]	@ 0004533a 786d
.org 0x4533c
	ldr r1, [r7, #92]	@ 0004533c f96d
.org 0x4533e
	subs r0, r0, r1	@ 0004533e 401a
.org 0x45340
	str r0, [r7, #84]	@ 00045340 7865
.org 0x45342
	ldr r1, [pc, #36]	@ 00045342 0949
.org 0x45344
	ldrb r0, [r7, #9]	@ 00045344 787a
.org 0x45346
	lsls r0, r0, #2	@ 00045346 8000
.org 0x45348
	adds r0, r0, r1	@ 00045348 4018
.org 0x4534a
	movs r1, #2	@ 0004534a 0221
.org 0x4534c
	str r1, [r7, #12]	@ 0004534c f960
.org 0x4534e
	ldr r0, [r0, #0]	@ 0004534e 0068
.org 0x45350
	ldr r0, [r0, #8]	@ 00045350 8068
.org 0x45352
	str r0, [r7, #20]	@ 00045352 7861
.org 0x45354
	adds r0, r7, #0	@ 00045354 381c
.org 0x45356
	bl 0x45218	@ 00045356 fff75fff
