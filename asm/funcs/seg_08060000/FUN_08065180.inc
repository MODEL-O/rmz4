@ FUN_08065180  entry 0x08065180  size 622
.thumb
.org 0x65180
FUN_08065180:
	push {r4, r5, r6, r7, lr}	@ 00065180 f0b5
.org 0x65182
	mov r7, sl	@ 00065182 5746
.org 0x65184
	mov r6, r9	@ 00065184 4e46
.org 0x65186
	mov r5, r8	@ 00065186 4546
.org 0x65188
	push {r5, r6, r7}	@ 00065188 e0b4
.org 0x6518a
	sub sp, #8	@ 0006518a 82b0
.org 0x6518c
	adds r7, r0, #0	@ 0006518c 071c
.org 0x6518e
	ldrb r0, [r7, #10]	@ 0006518e b87a
.org 0x65190
	lsrs r0, r0, #4	@ 00065190 0009
.org 0x65192
	str r0, [sp, #0]	@ 00065192 0090
.org 0x65194
	movs r0, #1	@ 00065194 0120
.org 0x65196
	ldr r1, [sp, #0]	@ 00065196 0099
.org 0x65198
	ands r1, r0	@ 00065198 0140
.org 0x6519a
	str r1, [sp, #0]	@ 0006519a 0091
.org 0x6519c
	ldrb r0, [r7, #15]	@ 0006519c f87b
.org 0x6519e
	cmp r0, #0	@ 0006519e 0028
.org 0x651a0
	bne.n 0x6522c	@ 000651a0 44d1
.org 0x651a2
	adds r0, r7, #0	@ 000651a2 381c
.org 0x651a4
	movs r1, #0	@ 000651a4 0021
.org 0x651a6
	bl 0x65a94	@ 000651a6 00f075fc
.org 0x651aa
	adds r0, r7, #0	@ 000651aa 381c
.org 0x651ac
	adds r0, #208	@ 000651ac d030
.org 0x651ae
	ldr r0, [r0, #0]	@ 000651ae 0068
.org 0x651b0
	movs r2, #160	@ 000651b0 a022
.org 0x651b2
	lsls r2, r2, #6	@ 000651b2 9201
.org 0x651b4
	adds r3, r0, r2	@ 000651b4 8318
.org 0x651b6
	ldr r2, [r7, #84]	@ 000651b6 7a6d
.org 0x651b8
	cmp r2, r3	@ 000651b8 9a42
.org 0x651ba
	beq.n 0x651c6	@ 000651ba 04d0
.org 0x651bc
	movs r4, #200	@ 000651bc c824
.org 0x651be
	lsls r4, r4, #8	@ 000651be 2402
.org 0x651c0
	adds r1, r0, r4	@ 000651c0 0119
.org 0x651c2
	cmp r2, r1	@ 000651c2 8a42
.org 0x651c4
	bne.n 0x651d2	@ 000651c4 05d1
.org 0x651c6
	movs r0, #0	@ 000651c6 0020
.org 0x651c8
	mov r8, r0	@ 000651c8 8046
.org 0x651ca
	adds r6, r2, #0	@ 000651ca 161c
.org 0x651cc
	str r0, [r7, #100]	@ 000651cc 7866
.org 0x651ce
	str r0, [r7, #92]	@ 000651ce f865
.org 0x651d0
	b.n 0x651fa	@ 000651d0 13e0
.org 0x651d2
	movs r4, #240	@ 000651d2 f024
.org 0x651d4
	lsls r4, r4, #7	@ 000651d4 e401
.org 0x651d6
	adds r0, r0, r4	@ 000651d6 0019
.org 0x651d8
	cmp r2, r0	@ 000651d8 8242
.org 0x651da
	bge.n 0x651e0	@ 000651da 01da
.org 0x651dc
	adds r6, r3, #0	@ 000651dc 1e1c
.org 0x651de
	b.n 0x651e2	@ 000651de 00e0
.org 0x651e0
	adds r6, r1, #0	@ 000651e0 0e1c
.org 0x651e2
	movs r0, #0	@ 000651e2 0020
.org 0x651e4
	cmp r2, r6	@ 000651e4 b242
.org 0x651e6
	bge.n 0x651ea	@ 000651e6 00da
.org 0x651e8
	movs r0, #1	@ 000651e8 0120
.org 0x651ea
	mov r8, r0	@ 000651ea 8046
.org 0x651ec
	mov r0, r8	@ 000651ec 4046
.org 0x651ee
	lsls r2, r0, #4	@ 000651ee 0201
.org 0x651f0
	movs r0, #0	@ 000651f0 0020
.org 0x651f2
	str r0, [r7, #92]	@ 000651f2 f865
.org 0x651f4
	adds r0, r2, #0	@ 000651f4 101c
.org 0x651f6
	subs r0, #8	@ 000651f6 0838
.org 0x651f8
	str r0, [r7, #100]	@ 000651f8 7866
.org 0x651fa
	adds r0, r7, #0	@ 000651fa 381c
.org 0x651fc
	adds r0, #220	@ 000651fc dc30
.org 0x651fe
	str r6, [r0, #0]	@ 000651fe 0660
.org 0x65200
	movs r2, #0	@ 00065200 0022
.org 0x65202
	subs r0, #8	@ 00065202 0838
.org 0x65204
	ldr r0, [r0, #0]	@ 00065204 0068
.org 0x65206
	movs r1, #136	@ 00065206 8821
.org 0x65208
	lsls r1, r1, #8	@ 00065208 0902
.org 0x6520a
	adds r0, r0, r1	@ 0006520a 4018
.org 0x6520c
	ldr r1, [r7, #88]	@ 0006520c b96d
.org 0x6520e
	cmp r1, r0	@ 0006520e 8142
.org 0x65210
	bge.n 0x65214	@ 00065210 00da
.org 0x65212
	movs r2, #1	@ 00065212 0122
.org 0x65214
	lsls r1, r2, #1	@ 00065214 5100
.org 0x65216
	subs r2, r1, #1	@ 00065216 4a1e
.org 0x65218
	movs r0, #0	@ 00065218 0020
.org 0x6521a
	str r0, [r7, #96]	@ 0006521a 3866
.org 0x6521c
	lsls r0, r2, #3	@ 0006521c d000
.org 0x6521e
	str r0, [r7, #104]	@ 0006521e b866
.org 0x65220
	mov r2, r8	@ 00065220 4246
.org 0x65222
	orrs r1, r2	@ 00065222 1143
.org 0x65224
	strb r1, [r7, #19]	@ 00065224 f974
.org 0x65226
	ldrb r0, [r7, #15]	@ 00065226 f87b
.org 0x65228
	adds r0, #1	@ 00065228 0130
.org 0x6522a
	strb r0, [r7, #15]	@ 0006522a f873
.org 0x6522c
	ldrb r0, [r7, #19]	@ 0006522c f87c
.org 0x6522e
	movs r1, #1	@ 0006522e 0121
.org 0x65230
	movs r3, #1	@ 00065230 0123
.org 0x65232
	mov r8, r3	@ 00065232 9846
.org 0x65234
	mov r4, r8	@ 00065234 4446
.org 0x65236
	ands r4, r0	@ 00065236 0440
.org 0x65238
	mov r8, r4	@ 00065238 a046
.org 0x6523a
	lsrs r0, r0, #1	@ 0006523a 4008
.org 0x6523c
	mov r9, r0	@ 0006523c 8146
.org 0x6523e
	ands r0, r1	@ 0006523e 0840
.org 0x65240
	mov r9, r0	@ 00065240 8146
.org 0x65242
	adds r0, r7, #0	@ 00065242 381c
.org 0x65244
	adds r0, #220	@ 00065244 dc30
.org 0x65246
	ldr r6, [r0, #0]	@ 00065246 0668
.org 0x65248
	mov r1, r9	@ 00065248 4946
.org 0x6524a
	lsls r0, r1, #1	@ 0006524a 4800
.org 0x6524c
	subs r2, r0, #1	@ 0006524c 421e
.org 0x6524e
	movs r3, #212	@ 0006524e d423
.org 0x65250
	adds r3, r3, r7	@ 00065250 db19
.org 0x65252
	mov sl, r3	@ 00065252 9a46
.org 0x65254
	lsls r0, r2, #1	@ 00065254 5000
.org 0x65256
	adds r0, r0, r2	@ 00065256 8018
.org 0x65258
	lsls r0, r0, #11	@ 00065258 c002
.org 0x6525a
	movs r1, #136	@ 0006525a 8821
.org 0x6525c
	lsls r1, r1, #8	@ 0006525c 0902
.org 0x6525e
	subs r1, r1, r0	@ 0006525e 091a
.org 0x65260
	ldr r0, [r3, #0]	@ 00065260 1868
.org 0x65262
	adds r0, r0, r1	@ 00065262 4018
.org 0x65264
	str r0, [sp, #4]	@ 00065264 0190
.org 0x65266
	adds r0, r7, #0	@ 00065266 381c
.org 0x65268
	bl 0x1cff0	@ 00065268 b7f7c2fe
.org 0x6526c
	adds r0, r7, #0	@ 0006526c 381c
.org 0x6526e
	adds r0, #116	@ 0006526e 7430
.org 0x65270
	ldr r4, [pc, #144]	@ 00065270 244c
.org 0x65272
	ldr r3, [pc, #148]	@ 00065272 254b
.org 0x65274
	adds r1, r7, #0	@ 00065274 391c
.org 0x65276
	adds r1, #180	@ 00065276 b431
.org 0x65278
	ldrb r2, [r1, #0]	@ 00065278 0a78
.org 0x6527a
	lsls r1, r2, #1	@ 0006527a 5100
.org 0x6527c
	adds r1, r1, r3	@ 0006527c c918
.org 0x6527e
	ldrh r1, [r1, #0]	@ 0006527e 0988
.org 0x65280
	lsls r1, r1, #2	@ 00065280 8900
.org 0x65282
	adds r1, r1, r4	@ 00065282 0919
.org 0x65284
	adds r3, r7, #0	@ 00065284 3b1c
.org 0x65286
	adds r3, #113	@ 00065286 7133
.org 0x65288
	movs r5, #0	@ 00065288 0025
.org 0x6528a
	ldrsb r5, [r3, r5]	@ 0006528a 5d57
.org 0x6528c
	ldr r1, [r1, #0]	@ 0006528c 0968
.org 0x6528e
	lsls r3, r5, #2	@ 0006528e ab00
.org 0x65290
	adds r3, r3, r1	@ 00065290 5b18
.org 0x65292
	ldr r4, [pc, #120]	@ 00065292 1e4c
.org 0x65294
	adds r1, r7, #0	@ 00065294 391c
.org 0x65296
	adds r1, #181	@ 00065296 b531
.org 0x65298
	ldrb r1, [r1, #0]	@ 00065298 0978
.org 0x6529a
	lsls r1, r1, #2	@ 0006529a 8900
.org 0x6529c
	adds r1, r1, r4	@ 0006529c 0919
.org 0x6529e
	ldr r1, [r1, #0]	@ 0006529e 0968
.org 0x652a0
	lsls r2, r2, #2	@ 000652a0 9200
.org 0x652a2
	adds r2, r2, r1	@ 000652a2 5218
.org 0x652a4
	ldr r1, [r2, #0]	@ 000652a4 1168
.org 0x652a6
	adds r1, r1, r5	@ 000652a6 4919
.org 0x652a8
	ldrb r1, [r1, #0]	@ 000652a8 0978
.org 0x652aa
	lsls r2, r1, #1	@ 000652aa 4a00
.org 0x652ac
	adds r2, r2, r1	@ 000652ac 5218
.org 0x652ae
	lsls r2, r2, #3	@ 000652ae d200
.org 0x652b0
	ldr r1, [r3, #0]	@ 000652b0 1968
.org 0x652b2
	adds r1, r1, r2	@ 000652b2 8918
.org 0x652b4
	bl 0x5784	@ 000652b4 a0f766fa
.org 0x652b8
	ldr r4, [r7, #92]	@ 000652b8 fc6d
.org 0x652ba
	negs r0, r4	@ 000652ba 6042
.org 0x652bc
	ldr r1, [r7, #100]	@ 000652bc 796e
.org 0x652be
	negs r5, r1	@ 000652be 4d42
.org 0x652c0
	adds r1, r5, #0	@ 000652c0 291c
.org 0x652c2
	bl 0x128fb8	@ 000652c2 c3f079fe
.org 0x652c6
	adds r1, r0, #1	@ 000652c6 411c
.org 0x652c8
	lsls r4, r4, #1	@ 000652c8 6400
.org 0x652ca
	muls r0, r5	@ 000652ca 6843
.org 0x652cc
	adds r4, r4, r0	@ 000652cc 2418
.org 0x652ce
	adds r0, r1, #0	@ 000652ce 081c
.org 0x652d0
	muls r0, r4	@ 000652d0 6043
.org 0x652d2
	asrs r0, r0, #1	@ 000652d2 4010
.org 0x652d4
	ldr r1, [r7, #84]	@ 000652d4 796d
.org 0x652d6
	adds r2, r1, r0	@ 000652d6 0a18
.org 0x652d8
	subs r1, r2, r6	@ 000652d8 911b
.org 0x652da
	mov r4, r8	@ 000652da 4446
.org 0x652dc
	lsls r0, r4, #1	@ 000652dc 6000
.org 0x652de
	subs r0, #1	@ 000652de 0138
.org 0x652e0
	muls r0, r1	@ 000652e0 4843
.org 0x652e2
	cmp r0, #0	@ 000652e2 0028
.org 0x652e4
	blt.n 0x652e8	@ 000652e4 00db
.org 0x652e6
	str r5, [r7, #100]	@ 000652e6 7d66
.org 0x652e8
	ldr r0, [r7, #84]	@ 000652e8 786d
.org 0x652ea
	ldr r1, [r7, #92]	@ 000652ea f96d
.org 0x652ec
	adds r0, r0, r1	@ 000652ec 4018
.org 0x652ee
	str r0, [r7, #84]	@ 000652ee 7865
.org 0x652f0
	ldr r0, [r7, #100]	@ 000652f0 786e
.org 0x652f2
	adds r1, r1, r0	@ 000652f2 0918
.org 0x652f4
	str r1, [r7, #92]	@ 000652f4 f965
.org 0x652f6
	cmp r1, #0	@ 000652f6 0029
.org 0x652f8
	bge.n 0x65314	@ 000652f8 0cda
.org 0x652fa
	ldr r0, [pc, #20]	@ 000652fa 0548
.org 0x652fc
	cmp r1, r0	@ 000652fc 8142
.org 0x652fe
	bge.n 0x65322	@ 000652fe 10da
.org 0x65300
	b.n 0x65320	@ 00065300 0ee0
.org 0x65302
	.byte 0x00	@ 00065302 data
.org 0x65303
	.byte 0x00	@ 00065303 data
.org 0x65304
	.byte 0x80,0xaf,0x85,0x08	@ 00065304 data
.org 0x65308
	.byte 0xa0,0xb0,0x85,0x08	@ 00065308 data
.org 0x6530c
	.byte 0x98,0xb0,0x85,0x08	@ 0006530c data
.org 0x65310
	.byte 0x00,0xfe,0xff,0xff	@ 00065310 data
.org 0x65314
	cmp r1, #0	@ 00065314 0029
.org 0x65316
	ble.n 0x65322	@ 00065316 04dd
.org 0x65318
	movs r0, #128	@ 00065318 8020
.org 0x6531a
	lsls r0, r0, #2	@ 0006531a 8000
.org 0x6531c
	cmp r1, r0	@ 0006531c 8142
.org 0x6531e
	ble.n 0x65322	@ 0006531e 00dd
.org 0x65320
	str r0, [r7, #92]	@ 00065320 f865
.org 0x65322
	ldr r2, [r7, #84]	@ 00065322 7a6d
.org 0x65324
	subs r0, r2, r6	@ 00065324 901b
.org 0x65326
	mov r2, r8	@ 00065326 4246
.org 0x65328
	lsls r1, r2, #1	@ 00065328 5100
.org 0x6532a
	subs r1, #1	@ 0006532a 0139
.org 0x6532c
	muls r0, r1	@ 0006532c 4843
.org 0x6532e
	cmp r0, #0	@ 0006532e 0028
.org 0x65330
	blt.n 0x6533a	@ 00065330 03db
.org 0x65332
	str r6, [r7, #84]	@ 00065332 7e65
.org 0x65334
	movs r0, #0	@ 00065334 0020
.org 0x65336
	str r0, [r7, #100]	@ 00065336 7866
.org 0x65338
	str r0, [r7, #92]	@ 00065338 f865
.org 0x6533a
	ldr r5, [r7, #96]	@ 0006533a 3d6e
.org 0x6533c
	negs r0, r5	@ 0006533c 6842
.org 0x6533e
	ldr r1, [r7, #104]	@ 0006533e b96e
.org 0x65340
	negs r4, r1	@ 00065340 4c42
.org 0x65342
	adds r1, r4, #0	@ 00065342 211c
.org 0x65344
	bl 0x128fb8	@ 00065344 c3f038fe
.org 0x65348
	adds r2, r0, #1	@ 00065348 421c
.org 0x6534a
	lsls r1, r5, #1	@ 0006534a 6900
.org 0x6534c
	muls r0, r4	@ 0006534c 6043
.org 0x6534e
	adds r1, r1, r0	@ 0006534e 0918
.org 0x65350
	adds r0, r2, #0	@ 00065350 101c
.org 0x65352
	muls r0, r1	@ 00065352 4843
.org 0x65354
	asrs r0, r0, #1	@ 00065354 4010
.org 0x65356
	ldr r1, [r7, #88]	@ 00065356 b96d
.org 0x65358
	adds r2, r1, r0	@ 00065358 0a18
.org 0x6535a
	ldr r3, [sp, #4]	@ 0006535a 019b
.org 0x6535c
	subs r2, r2, r3	@ 0006535c d21a
.org 0x6535e
	mov r0, r9	@ 0006535e 4846
.org 0x65360
	lsls r1, r0, #1	@ 00065360 4100
.org 0x65362
	subs r0, r1, #1	@ 00065362 481e
.org 0x65364
	muls r0, r2	@ 00065364 5043
.org 0x65366
	cmp r0, #0	@ 00065366 0028
.org 0x65368
	blt.n 0x6536c	@ 00065368 00db
.org 0x6536a
	str r4, [r7, #104]	@ 0006536a bc66
.org 0x6536c
	ldr r0, [r7, #88]	@ 0006536c b86d
.org 0x6536e
	adds r0, r0, r5	@ 0006536e 4019
.org 0x65370
	str r0, [r7, #88]	@ 00065370 b865
.org 0x65372
	ldr r0, [r7, #104]	@ 00065372 b86e
.org 0x65374
	adds r0, r5, r0	@ 00065374 2818
.org 0x65376
	str r0, [r7, #96]	@ 00065376 3866
.org 0x65378
	cmp r0, #0	@ 00065378 0028
.org 0x6537a
	bge.n 0x65388	@ 0006537a 05da
.org 0x6537c
	ldr r2, [pc, #4]	@ 0006537c 014a
.org 0x6537e
	cmp r0, r2	@ 0006537e 9042
.org 0x65380
	bge.n 0x65396	@ 00065380 09da
.org 0x65382
	b.n 0x65394	@ 00065382 07e0
.org 0x65384
	.byte 0x00,0xfe,0xff,0xff	@ 00065384 data
.org 0x65388
	cmp r0, #0	@ 00065388 0028
.org 0x6538a
	ble.n 0x65396	@ 0006538a 04dd
.org 0x6538c
	movs r2, #128	@ 0006538c 8022
.org 0x6538e
	lsls r2, r2, #2	@ 0006538e 9200
.org 0x65390
	cmp r0, r2	@ 00065390 9042
.org 0x65392
	ble.n 0x65396	@ 00065392 00dd
.org 0x65394
	str r2, [r7, #96]	@ 00065394 3a66
.org 0x65396
	ldr r2, [r7, #88]	@ 00065396 ba6d
.org 0x65398
	ldr r3, [sp, #4]	@ 00065398 019b
.org 0x6539a
	subs r0, r2, r3	@ 0006539a d01a
.org 0x6539c
	subs r1, #1	@ 0006539c 0139
.org 0x6539e
	muls r0, r1	@ 0006539e 4843
.org 0x653a0
	cmp r0, #0	@ 000653a0 0028
.org 0x653a2
	blt.n 0x653aa	@ 000653a2 02db
.org 0x653a4
	movs r0, #0	@ 000653a4 0020
.org 0x653a6
	str r0, [r7, #104]	@ 000653a6 b866
.org 0x653a8
	str r0, [r7, #96]	@ 000653a8 3866
.org 0x653aa
	mov r4, sl	@ 000653aa 5446
.org 0x653ac
	ldr r0, [r4, #0]	@ 000653ac 2068
.org 0x653ae
	movs r1, #136	@ 000653ae 8821
.org 0x653b0
	lsls r1, r1, #8	@ 000653b0 0902
.org 0x653b2
	adds r2, r0, r1	@ 000653b2 4218
.org 0x653b4
	ldr r3, [r7, #84]	@ 000653b4 7b6d
.org 0x653b6
	cmp r3, r6	@ 000653b6 b342
.org 0x653b8
	bne.n 0x653f4	@ 000653b8 1cd1
.org 0x653ba
	ldr r0, [r7, #88]	@ 000653ba b86d
.org 0x653bc
	subs r0, r2, r0	@ 000653bc 101a
.org 0x653be
	movs r2, #192	@ 000653be c022
.org 0x653c0
	lsls r2, r2, #5	@ 000653c0 5201
.org 0x653c2
	adds r0, r0, r2	@ 000653c2 8018
.org 0x653c4
	movs r1, #192	@ 000653c4 c021
.org 0x653c6
	lsls r1, r1, #6	@ 000653c6 8901
.org 0x653c8
	cmp r0, r1	@ 000653c8 8842
.org 0x653ca
	bhi.n 0x653f4	@ 000653ca 13d8
.org 0x653cc
	movs r2, #0	@ 000653cc 0022
.org 0x653ce
	adds r0, r7, #0	@ 000653ce 381c
.org 0x653d0
	adds r0, #208	@ 000653d0 d030
.org 0x653d2
	ldr r0, [r0, #0]	@ 000653d2 0068
.org 0x653d4
	movs r4, #240	@ 000653d4 f024
.org 0x653d6
	lsls r4, r4, #7	@ 000653d6 e401
.org 0x653d8
	adds r0, r0, r4	@ 000653d8 0019
.org 0x653da
	cmp r3, r0	@ 000653da 8342
.org 0x653dc
	bge.n 0x653e0	@ 000653dc 00da
.org 0x653de
	movs r2, #1	@ 000653de 0122
.org 0x653e0
	ldr r0, [sp, #0]	@ 000653e0 0098
.org 0x653e2
	cmp r0, r2	@ 000653e2 9042
.org 0x653e4
	beq.n 0x653ec	@ 000653e4 02d0
.org 0x653e6
	movs r1, #0	@ 000653e6 0021
.org 0x653e8
	movs r0, #1	@ 000653e8 0120
.org 0x653ea
	b.n 0x653f0	@ 000653ea 01e0
.org 0x653ec
	movs r1, #0	@ 000653ec 0021
