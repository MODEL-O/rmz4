@ FUN_0807a208  entry 0x0807a208  size 658
.thumb
.org 0x7a208
FUN_0807a208:
	push {r4, r5, r6, r7, lr}	@ 0007a208 f0b5
.org 0x7a20a
	mov r7, sl	@ 0007a20a 5746
.org 0x7a20c
	mov r6, r9	@ 0007a20c 4e46
.org 0x7a20e
	mov r5, r8	@ 0007a20e 4546
.org 0x7a210
	push {r5, r6, r7}	@ 0007a210 e0b4
.org 0x7a212
	sub sp, #8	@ 0007a212 82b0
.org 0x7a214
	adds r7, r0, #0	@ 0007a214 071c
.org 0x7a216
	ldrb r0, [r7, #14]	@ 0007a216 b87b
.org 0x7a218
	cmp r0, #0	@ 0007a218 0028
.org 0x7a21a
	beq.n 0x7a21e	@ 0007a21a 00d0
.org 0x7a21c
	b.n 0x7a35e	@ 0007a21c 9fe0
.org 0x7a21e
	ldr r1, [pc, #348]	@ 0007a21e 5749
.org 0x7a220
	adds r0, r7, #0	@ 0007a220 381c
.org 0x7a222
	bl 0x1cf00	@ 0007a222 a2f76dfe
.org 0x7a226
	ldr r0, [pc, #344]	@ 0007a226 5648
.org 0x7a228
	bl 0x2b10	@ 0007a228 88f772fc
.org 0x7a22c
	ldr r2, [pc, #340]	@ 0007a22c 554a
.org 0x7a22e
	ldr r1, [r2, #0]	@ 0007a22e 1168
.org 0x7a230
	ldr r0, [pc, #340]	@ 0007a230 5548
.org 0x7a232
	muls r0, r1	@ 0007a232 4843
.org 0x7a234
	ldr r1, [pc, #340]	@ 0007a234 5549
.org 0x7a236
	adds r0, r0, r1	@ 0007a236 4018
.org 0x7a238
	lsls r0, r0, #1	@ 0007a238 4000
.org 0x7a23a
	lsrs r1, r0, #1	@ 0007a23a 4108
.org 0x7a23c
	str r1, [r2, #0]	@ 0007a23c 1160
.org 0x7a23e
	lsrs r0, r0, #17	@ 0007a23e 400c
.org 0x7a240
	movs r1, #6	@ 0007a240 0621
.org 0x7a242
	bl 0x129198	@ 0007a242 aef0a9ff
.org 0x7a246
	strb r0, [r7, #19]	@ 0007a246 f874
.org 0x7a248
	ldr r6, [pc, #324]	@ 0007a248 514e
.org 0x7a24a
	adds r0, r6, #0	@ 0007a24a 301c
.org 0x7a24c
	adds r0, #136	@ 0007a24c 8830
.org 0x7a24e
	movs r1, #238	@ 0007a24e ee21
.org 0x7a250
	lsls r1, r1, #2	@ 0007a250 8900
.org 0x7a252
	strh r1, [r0, #0]	@ 0007a252 0180
.org 0x7a254
	ldr r2, [pc, #316]	@ 0007a254 4f4a
.org 0x7a256
	adds r2, #136	@ 0007a256 8832
.org 0x7a258
	mov r8, r2	@ 0007a258 9046
.org 0x7a25a
	movs r0, #9	@ 0007a25a 0920
.org 0x7a25c
	strh r0, [r2, #0]	@ 0007a25c 1080
.org 0x7a25e
	movs r4, #170	@ 0007a25e aa24
.org 0x7a260
	lsls r4, r4, #3	@ 0007a260 e400
.org 0x7a262
	ldr r5, [pc, #308]	@ 0007a262 4d4d
.org 0x7a264
	adds r0, r4, r5	@ 0007a264 6019
.org 0x7a266
	ldrh r2, [r0, #6]	@ 0007a266 c288
.org 0x7a268
	lsrs r2, r2, #6	@ 0007a268 9209
.org 0x7a26a
	subs r1, r1, r2	@ 0007a26a 891a
.org 0x7a26c
	lsls r1, r1, #5	@ 0007a26c 4901
.org 0x7a26e
	movs r2, #128	@ 0007a26e 8022
.org 0x7a270
	lsls r2, r2, #9	@ 0007a270 5202
.org 0x7a272
	mov r9, r2	@ 0007a272 9146
.org 0x7a274
	add r1, r9	@ 0007a274 4944
.org 0x7a276
	bl 0x1d30	@ 0007a276 87f75bfd
.org 0x7a27a
	ldr r0, [pc, #288]	@ 0007a27a 4848
.org 0x7a27c
	adds r4, r4, r0	@ 0007a27c 2418
.org 0x7a27e
	mov r2, r8	@ 0007a27e 4246
.org 0x7a280
	ldrh r1, [r2, #0]	@ 0007a280 1188
.org 0x7a282
	ldrb r0, [r4, #7]	@ 0007a282 e079
.org 0x7a284
	subs r1, r1, r0	@ 0007a284 091a
.org 0x7a286
	lsls r1, r1, #5	@ 0007a286 4901
.org 0x7a288
	movs r0, #128	@ 0007a288 8020
.org 0x7a28a
	lsls r0, r0, #2	@ 0007a28a 8000
.org 0x7a28c
	mov sl, r0	@ 0007a28c 8246
.org 0x7a28e
	add r1, sl	@ 0007a28e 5144
.org 0x7a290
	adds r0, r4, #0	@ 0007a290 201c
.org 0x7a292
	bl 0x2208	@ 0007a292 87f7b9ff
.org 0x7a296
	ldr r4, [pc, #264]	@ 0007a296 424c
.org 0x7a298
	adds r5, r4, r5	@ 0007a298 6519
.org 0x7a29a
	movs r1, #215	@ 0007a29a d721
.org 0x7a29c
	lsls r1, r1, #1	@ 0007a29c 4900
.org 0x7a29e
	mov r8, r1	@ 0007a29e 8846
.org 0x7a2a0
	add r6, r8	@ 0007a2a0 4644
.org 0x7a2a2
	ldrh r1, [r6, #0]	@ 0007a2a2 3188
.org 0x7a2a4
	ldrh r0, [r5, #6]	@ 0007a2a4 e888
.org 0x7a2a6
	lsrs r0, r0, #6	@ 0007a2a6 8009
.org 0x7a2a8
	subs r1, r1, r0	@ 0007a2a8 091a
.org 0x7a2aa
	lsls r1, r1, #5	@ 0007a2aa 4901
.org 0x7a2ac
	add r1, r9	@ 0007a2ac 4944
.org 0x7a2ae
	adds r0, r5, #0	@ 0007a2ae 281c
.org 0x7a2b0
	bl 0x1d30	@ 0007a2b0 87f73efd
.org 0x7a2b4
	ldr r2, [pc, #228]	@ 0007a2b4 394a
.org 0x7a2b6
	adds r4, r4, r2	@ 0007a2b6 a418
.org 0x7a2b8
	ldr r0, [pc, #232]	@ 0007a2b8 3a48
.org 0x7a2ba
	ldrh r1, [r0, #0]	@ 0007a2ba 0188
.org 0x7a2bc
	ldrb r0, [r4, #7]	@ 0007a2bc e079
.org 0x7a2be
	subs r1, r1, r0	@ 0007a2be 091a
.org 0x7a2c0
	lsls r1, r1, #5	@ 0007a2c0 4901
.org 0x7a2c2
	add r1, sl	@ 0007a2c2 5144
.org 0x7a2c4
	adds r0, r4, #0	@ 0007a2c4 201c
.org 0x7a2c6
	bl 0x2208	@ 0007a2c6 87f79fff
.org 0x7a2ca
	ldr r5, [pc, #220]	@ 0007a2ca 374d
.org 0x7a2cc
	ldr r4, [pc, #220]	@ 0007a2cc 374c
.org 0x7a2ce
	ldrb r0, [r7, #19]	@ 0007a2ce f87c
.org 0x7a2d0
	lsls r0, r0, #1	@ 0007a2d0 4000
.org 0x7a2d2
	adds r0, r0, r4	@ 0007a2d2 0019
.org 0x7a2d4
	ldrb r0, [r0, #0]	@ 0007a2d4 0078
.org 0x7a2d6
	lsls r0, r0, #2	@ 0007a2d6 8000
.org 0x7a2d8
	ldr r1, [pc, #212]	@ 0007a2d8 3549
.org 0x7a2da
	adds r0, r0, r1	@ 0007a2da 4018
.org 0x7a2dc
	ldr r1, [r0, #0]	@ 0007a2dc 0168
.org 0x7a2de
	ldr r2, [pc, #212]	@ 0007a2de 354a
.org 0x7a2e0
	mov r8, r2	@ 0007a2e0 9046
.org 0x7a2e2
	add r1, r8	@ 0007a2e2 4144
.org 0x7a2e4
	ldr r0, [r5, #56]	@ 0007a2e4 a86b
.org 0x7a2e6
	adds r0, r0, r1	@ 0007a2e6 4018
.org 0x7a2e8
	str r0, [sp, #0]	@ 0007a2e8 0090
.org 0x7a2ea
	ldrb r0, [r7, #19]	@ 0007a2ea f87c
.org 0x7a2ec
	lsls r0, r0, #1	@ 0007a2ec 4000
.org 0x7a2ee
	adds r0, r0, r4	@ 0007a2ee 0019
.org 0x7a2f0
	ldrb r0, [r0, #0]	@ 0007a2f0 0078
.org 0x7a2f2
	lsls r0, r0, #2	@ 0007a2f2 8000
.org 0x7a2f4
	ldr r1, [pc, #192]	@ 0007a2f4 3049
.org 0x7a2f6
	adds r0, r0, r1	@ 0007a2f6 4018
.org 0x7a2f8
	ldr r1, [r0, #0]	@ 0007a2f8 0168
.org 0x7a2fa
	ldr r6, [pc, #192]	@ 0007a2fa 304e
.org 0x7a2fc
	adds r1, r1, r6	@ 0007a2fc 8919
.org 0x7a2fe
	ldr r0, [r5, #60]	@ 0007a2fe e86b
.org 0x7a300
	adds r0, r0, r1	@ 0007a300 4018
.org 0x7a302
	str r0, [sp, #4]	@ 0007a302 0190
.org 0x7a304
	mov r0, sp	@ 0007a304 6846
.org 0x7a306
	movs r1, #0	@ 0007a306 0021
.org 0x7a308
	movs r2, #0	@ 0007a308 0022
.org 0x7a30a
	bl 0xe41b8	@ 0007a30a 69f055ff
.org 0x7a30e
	ldrb r0, [r7, #19]	@ 0007a30e f87c
.org 0x7a310
	lsls r0, r0, #1	@ 0007a310 4000
.org 0x7a312
	adds r4, #1	@ 0007a312 0134
.org 0x7a314
	adds r0, r0, r4	@ 0007a314 0019
.org 0x7a316
	ldrb r0, [r0, #0]	@ 0007a316 0078
.org 0x7a318
	lsls r0, r0, #2	@ 0007a318 8000
.org 0x7a31a
	ldr r2, [pc, #148]	@ 0007a31a 254a
.org 0x7a31c
	adds r0, r0, r2	@ 0007a31c 8018
.org 0x7a31e
	ldr r1, [r0, #0]	@ 0007a31e 0168
.org 0x7a320
	add r1, r8	@ 0007a320 4144
.org 0x7a322
	ldr r0, [r5, #56]	@ 0007a322 a86b
.org 0x7a324
	adds r0, r0, r1	@ 0007a324 4018
.org 0x7a326
	str r0, [sp, #0]	@ 0007a326 0090
.org 0x7a328
	ldrb r0, [r7, #19]	@ 0007a328 f87c
.org 0x7a32a
	lsls r0, r0, #1	@ 0007a32a 4000
.org 0x7a32c
	adds r0, r0, r4	@ 0007a32c 0019
.org 0x7a32e
	ldrb r0, [r0, #0]	@ 0007a32e 0078
.org 0x7a330
	lsls r0, r0, #2	@ 0007a330 8000
.org 0x7a332
	ldr r1, [pc, #132]	@ 0007a332 2149
.org 0x7a334
	adds r0, r0, r1	@ 0007a334 4018
.org 0x7a336
	ldr r1, [r0, #0]	@ 0007a336 0168
.org 0x7a338
	adds r1, r1, r6	@ 0007a338 8919
.org 0x7a33a
	ldr r0, [r5, #60]	@ 0007a33a e86b
.org 0x7a33c
	adds r0, r0, r1	@ 0007a33c 4018
.org 0x7a33e
	str r0, [sp, #4]	@ 0007a33e 0190
.org 0x7a340
	mov r0, sp	@ 0007a340 6846
.org 0x7a342
	movs r1, #0	@ 0007a342 0021
.org 0x7a344
	movs r2, #0	@ 0007a344 0022
.org 0x7a346
	bl 0xe41b8	@ 0007a346 69f037ff
.org 0x7a34a
	movs r1, #176	@ 0007a34a b021
.org 0x7a34c
	lsls r1, r1, #2	@ 0007a34c 8900
.org 0x7a34e
	movs r0, #136	@ 0007a34e 8820
.org 0x7a350
	bl 0x249c	@ 0007a350 88f7a4f8
.org 0x7a354
	movs r2, #0	@ 0007a354 0022
.org 0x7a356
	strb r2, [r7, #15]	@ 0007a356 fa73
.org 0x7a358
	ldrb r0, [r7, #14]	@ 0007a358 b87b
.org 0x7a35a
	adds r0, #1	@ 0007a35a 0130
.org 0x7a35c
	strb r0, [r7, #14]	@ 0007a35c b873
.org 0x7a35e
	adds r0, r7, #0	@ 0007a35e 381c
.org 0x7a360
	bl 0x1cff0	@ 0007a360 a2f746fe
.org 0x7a364
	movs r0, #136	@ 0007a364 8820
.org 0x7a366
	bl 0x25d8	@ 0007a366 88f737f9
.org 0x7a36a
	ldrb r0, [r7, #15]	@ 0007a36a f87b
.org 0x7a36c
	cmp r0, #1	@ 0007a36c 0128
.org 0x7a36e
	beq.n 0x7a3ec	@ 0007a36e 3dd0
.org 0x7a370
	cmp r0, #1	@ 0007a370 0128
.org 0x7a372
	bgt.n 0x7a3c0	@ 0007a372 25dc
.org 0x7a374
	cmp r0, #0	@ 0007a374 0028
.org 0x7a376
	beq.n 0x7a3c8	@ 0007a376 27d0
.org 0x7a378
	b.n 0x7a4f4	@ 0007a378 bce0
.org 0x7a37a
	.byte 0x00	@ 0007a37a data
.org 0x7a37b
	.byte 0x00	@ 0007a37b data
.org 0x7a37c
	.byte 0x02,0xb1,0x00,0x00	@ 0007a37c data
.org 0x7a380
	.byte 0x51,0x01,0x00,0x00	@ 0007a380 data
.org 0x7a384
	.byte 0x38,0xdc,0x02,0x02	@ 0007a384 data
.org 0x7a388
	.byte 0xfd,0x43,0x03,0x00	@ 0007a388 data
.org 0x7a38c
	.byte 0xc3,0x9e,0x26,0x00	@ 0007a38c data
.org 0x7a390
	.byte 0x40,0xe0,0x02,0x02	@ 0007a390 data
.org 0x7a394
	.byte 0x40,0xde,0x02,0x02	@ 0007a394 data
.org 0x7a398
	.byte 0x00,0x40,0xc4,0x08	@ 0007a398 data
.org 0x7a39c
	.byte 0x0c,0x40,0xc4,0x08	@ 0007a39c data
.org 0x7a3a0
	.byte 0xcc,0x10,0x00,0x00	@ 0007a3a0 data
.org 0x7a3a4
	.byte 0xee,0xdf,0x02,0x02	@ 0007a3a4 data
.org 0x7a3a8
	.byte 0xf8,0xe9,0x02,0x02	@ 0007a3a8 data
.org 0x7a3ac
	.byte 0x64,0xd4,0x85,0x08	@ 0007a3ac data
.org 0x7a3b0
	.byte 0x70,0xd4,0x85,0x08	@ 0007a3b0 data
.org 0x7a3b4
	.byte 0x00,0x88,0xff,0xff	@ 0007a3b4 data
.org 0x7a3b8
	.byte 0x80,0xd4,0x85,0x08	@ 0007a3b8 data
.org 0x7a3bc
	.byte 0x00,0xb0,0xff,0xff	@ 0007a3bc data
.org 0x7a3c0
	cmp r0, #2	@ 0007a3c0 0228
.org 0x7a3c2
	bne.n 0x7a3c6	@ 0007a3c2 00d1
.org 0x7a3c4
	b.n 0x7a4d8	@ 0007a3c4 88e0
.org 0x7a3c6
	b.n 0x7a4f4	@ 0007a3c6 95e0
.org 0x7a3c8
	adds r0, r7, #0	@ 0007a3c8 381c
.org 0x7a3ca
	adds r0, #115	@ 0007a3ca 7330
.org 0x7a3cc
	ldrb r0, [r0, #0]	@ 0007a3cc 0078
.org 0x7a3ce
	cmp r0, #3	@ 0007a3ce 0328
.org 0x7a3d0
	beq.n 0x7a3d4	@ 0007a3d0 00d0
.org 0x7a3d2
	b.n 0x7a4f4	@ 0007a3d2 8fe0
.org 0x7a3d4
	ldr r1, [pc, #16]	@ 0007a3d4 0449
.org 0x7a3d6
	adds r0, r7, #0	@ 0007a3d6 381c
.org 0x7a3d8
	bl 0x1cf00	@ 0007a3d8 a2f792fd
.org 0x7a3dc
	adds r0, r7, #0	@ 0007a3dc 381c
.org 0x7a3de
	bl 0x1cff0	@ 0007a3de a2f707fe
.org 0x7a3e2
	movs r0, #30	@ 0007a3e2 1e20
.org 0x7a3e4
	b.n 0x7a4b0	@ 0007a3e4 64e0
.org 0x7a3e6
	.byte 0x00	@ 0007a3e6 data
.org 0x7a3e7
	.byte 0x00	@ 0007a3e7 data
.org 0x7a3e8
	.byte 0x03,0xb1,0x00,0x00	@ 0007a3e8 data
.org 0x7a3ec
	ldrb r0, [r7, #30]	@ 0007a3ec b87f
.org 0x7a3ee
	lsls r0, r0, #8	@ 0007a3ee 0002
.org 0x7a3f0
	adds r1, r7, #0	@ 0007a3f0 391c
.org 0x7a3f2
	adds r1, #112	@ 0007a3f2 7031
.org 0x7a3f4
	ldrb r1, [r1, #0]	@ 0007a3f4 0978
.org 0x7a3f6
	orrs r0, r1	@ 0007a3f6 0843
.org 0x7a3f8
	ldr r1, [pc, #192]	@ 0007a3f8 3049
.org 0x7a3fa
	cmp r0, r1	@ 0007a3fa 8842
.org 0x7a3fc
	bne.n 0x7a416	@ 0007a3fc 0bd1
.org 0x7a3fe
	adds r0, r7, #0	@ 0007a3fe 381c
.org 0x7a400
	adds r0, #115	@ 0007a400 7330
.org 0x7a402
	ldrb r0, [r0, #0]	@ 0007a402 0078
.org 0x7a404
	cmp r0, #3	@ 0007a404 0328
.org 0x7a406
	bne.n 0x7a416	@ 0007a406 06d1
.org 0x7a408
	subs r1, #2	@ 0007a408 0239
.org 0x7a40a
	adds r0, r7, #0	@ 0007a40a 381c
.org 0x7a40c
	bl 0x1cf00	@ 0007a40c a2f778fd
.org 0x7a410
	adds r0, r7, #0	@ 0007a410 381c
.org 0x7a412
	bl 0x1cff0	@ 0007a412 a2f7edfd
.org 0x7a416
	ldrb r0, [r7, #18]	@ 0007a416 b87c
.org 0x7a418
	subs r0, #1	@ 0007a418 0138
.org 0x7a41a
	strb r0, [r7, #18]	@ 0007a41a b874
.org 0x7a41c
	lsls r0, r0, #24	@ 0007a41c 0006
.org 0x7a41e
	lsrs r0, r0, #24	@ 0007a41e 000e
.org 0x7a420
	cmp r0, #255	@ 0007a420 ff28
.org 0x7a422
	bne.n 0x7a4f4	@ 0007a422 67d1
.org 0x7a424
	ldr r5, [pc, #152]	@ 0007a424 264d
.org 0x7a426
	ldr r4, [pc, #156]	@ 0007a426 274c
.org 0x7a428
	ldrb r0, [r7, #19]	@ 0007a428 f87c
.org 0x7a42a
	lsls r0, r0, #1	@ 0007a42a 4000
.org 0x7a42c
	adds r0, r0, r4	@ 0007a42c 0019
.org 0x7a42e
	ldrb r0, [r0, #0]	@ 0007a42e 0078
.org 0x7a430
	lsls r0, r0, #2	@ 0007a430 8000
.org 0x7a432
	ldr r1, [pc, #148]	@ 0007a432 2549
.org 0x7a434
	adds r0, r0, r1	@ 0007a434 4018
.org 0x7a436
	ldr r1, [r0, #0]	@ 0007a436 0168
.org 0x7a438
	ldr r2, [pc, #144]	@ 0007a438 244a
.org 0x7a43a
	adds r1, r1, r2	@ 0007a43a 8918
.org 0x7a43c
	ldr r0, [r5, #56]	@ 0007a43c a86b
.org 0x7a43e
	adds r0, r0, r1	@ 0007a43e 4018
.org 0x7a440
	str r0, [sp, #0]	@ 0007a440 0090
.org 0x7a442
	ldrb r0, [r7, #19]	@ 0007a442 f87c
.org 0x7a444
	lsls r0, r0, #1	@ 0007a444 4000
.org 0x7a446
	adds r0, r0, r4	@ 0007a446 0019
.org 0x7a448
	ldrb r0, [r0, #0]	@ 0007a448 0078
.org 0x7a44a
	lsls r0, r0, #2	@ 0007a44a 8000
.org 0x7a44c
	ldr r1, [pc, #128]	@ 0007a44c 2049
.org 0x7a44e
	adds r0, r0, r1	@ 0007a44e 4018
.org 0x7a450
	ldr r1, [r0, #0]	@ 0007a450 0168
.org 0x7a452
	ldr r2, [pc, #128]	@ 0007a452 204a
.org 0x7a454
	mov r8, r2	@ 0007a454 9046
.org 0x7a456
	add r1, r8	@ 0007a456 4144
.org 0x7a458
	ldr r0, [r5, #60]	@ 0007a458 e86b
.org 0x7a45a
	adds r0, r0, r1	@ 0007a45a 4018
.org 0x7a45c
	str r0, [sp, #4]	@ 0007a45c 0190
.org 0x7a45e
	mov r0, sp	@ 0007a45e 6846
.org 0x7a460
	movs r1, #0	@ 0007a460 0021
.org 0x7a462
	movs r2, #0	@ 0007a462 0022
.org 0x7a464
	bl 0x965b8	@ 0007a464 1cf0a8f8
.org 0x7a468
	adds r6, r7, #0	@ 0007a468 3e1c
.org 0x7a46a
	adds r6, #180	@ 0007a46a b436
.org 0x7a46c
	str r0, [r6, #20]	@ 0007a46c 7061
.org 0x7a46e
	ldrb r0, [r7, #19]	@ 0007a46e f87c
.org 0x7a470
	lsls r0, r0, #1	@ 0007a470 4000
.org 0x7a472
	adds r4, #1	@ 0007a472 0134
.org 0x7a474
	adds r0, r0, r4	@ 0007a474 0019
.org 0x7a476
	ldrb r0, [r0, #0]	@ 0007a476 0078
.org 0x7a478
	lsls r0, r0, #2	@ 0007a478 8000
.org 0x7a47a
	ldr r1, [pc, #76]	@ 0007a47a 1349
.org 0x7a47c
	adds r0, r0, r1	@ 0007a47c 4018
.org 0x7a47e
	ldr r1, [r0, #0]	@ 0007a47e 0168
.org 0x7a480
	ldr r2, [pc, #72]	@ 0007a480 124a
.org 0x7a482
	adds r1, r1, r2	@ 0007a482 8918
.org 0x7a484
	ldr r0, [r5, #56]	@ 0007a484 a86b
.org 0x7a486
	adds r0, r0, r1	@ 0007a486 4018
.org 0x7a488
	str r0, [sp, #0]	@ 0007a488 0090
.org 0x7a48a
	ldrb r0, [r7, #19]	@ 0007a48a f87c
.org 0x7a48c
	lsls r0, r0, #1	@ 0007a48c 4000
.org 0x7a48e
	adds r0, r0, r4	@ 0007a48e 0019
.org 0x7a490
	ldrb r0, [r0, #0]	@ 0007a490 0078
.org 0x7a492
	lsls r0, r0, #2	@ 0007a492 8000
.org 0x7a494
	ldr r1, [pc, #56]	@ 0007a494 0e49
.org 0x7a496
	adds r0, r0, r1	@ 0007a496 4018
.org 0x7a498
	ldr r1, [r0, #0]	@ 0007a498 0168
