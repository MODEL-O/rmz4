@ FUN_0804423c  entry 0x0804423c  size 270
.thumb
.org 0x4423c
FUN_0804423c:
	push {r4, r5, lr}	@ 0004423c 30b5
.org 0x4423e
	adds r5, r0, #0	@ 0004423e 051c
.org 0x44240
	ldr r4, [r5, #40]	@ 00044240 ac6a
.org 0x44242
	bl 0x1cff0	@ 00044242 d8f7d5fe
.org 0x44246
	adds r0, r5, #0	@ 00044246 281c
.org 0x44248
	movs r1, #255	@ 00044248 ff21
.org 0x4424a
	bl 0x3a99c	@ 0004424a f6f7a7fb
.org 0x4424e
	lsls r0, r0, #24	@ 0004424e 0006
.org 0x44250
	lsrs r1, r0, #24	@ 00044250 010e
.org 0x44252
	adds r4, #250	@ 00044252 fa34
.org 0x44254
	ldrb r0, [r4, #0]	@ 00044254 2078
.org 0x44256
	cmp r0, #2	@ 00044256 0228
.org 0x44258
	bne.n 0x44298	@ 00044258 1ed1
.org 0x4425a
	ldrb r1, [r5, #10]	@ 0004425a a97a
.org 0x4425c
	movs r0, #254	@ 0004425c fe20
.org 0x4425e
	ands r0, r1	@ 0004425e 0840
.org 0x44260
	movs r2, #0	@ 00044260 0022
.org 0x44262
	movs r1, #253	@ 00044262 fd21
.org 0x44264
	ands r0, r1	@ 00044264 0840
.org 0x44266
	strb r0, [r5, #10]	@ 00044266 a872
.org 0x44268
	adds r0, r5, #0	@ 00044268 281c
.org 0x4426a
	adds r0, #140	@ 0004426a 8c30
.org 0x4426c
	str r2, [r0, #0]	@ 0004426c 0260
.org 0x4426e
	adds r0, #4	@ 0004426e 0430
.org 0x44270
	str r2, [r0, #0]	@ 00044270 0260
.org 0x44272
	adds r0, #4	@ 00044272 0430
.org 0x44274
	strb r2, [r0, #0]	@ 00044274 0270
.org 0x44276
	ldrb r1, [r5, #10]	@ 00044276 a97a
.org 0x44278
	movs r0, #251	@ 00044278 fb20
.org 0x4427a
	ands r0, r1	@ 0004427a 0840
.org 0x4427c
	strb r0, [r5, #10]	@ 0004427c a872
.org 0x4427e
	ldr r1, [pc, #20]	@ 0004427e 0549
.org 0x44280
	ldrb r0, [r5, #9]	@ 00044280 687a
.org 0x44282
	lsls r0, r0, #2	@ 00044282 8000
.org 0x44284
	adds r0, r0, r1	@ 00044284 4018
.org 0x44286
	movs r1, #3	@ 00044286 0321
.org 0x44288
	str r1, [r5, #12]	@ 00044288 e960
.org 0x4428a
	ldr r0, [r0, #0]	@ 0004428a 0068
.org 0x4428c
	ldr r0, [r0, #12]	@ 0004428c c068
.org 0x4428e
	str r0, [r5, #20]	@ 0004428e 6861
.org 0x44290
	b.n 0x44354	@ 00044290 60e0
.org 0x44292
	.byte 0x00	@ 00044292 data
.org 0x44293
	.byte 0x00	@ 00044293 data
.org 0x44294
	.byte 0xf8,0x39,0x85,0x08	@ 00044294 data
.org 0x44298
	cmp r1, #0	@ 00044298 0029
.org 0x4429a
	bne.n 0x442aa	@ 0004429a 06d1
.org 0x4429c
	adds r0, r5, #0	@ 0004429c 281c
.org 0x4429e
	adds r0, #140	@ 0004429e 8c30
.org 0x442a0
	ldr r0, [r0, #0]	@ 000442a0 0068
.org 0x442a2
	movs r1, #4	@ 000442a2 0421
.org 0x442a4
	ands r0, r1	@ 000442a4 0840
.org 0x442a6
	cmp r0, #0	@ 000442a6 0028
.org 0x442a8
	beq.n 0x442c4	@ 000442a8 0cd0
.org 0x442aa
	ldr r1, [pc, #20]	@ 000442aa 0549
.org 0x442ac
	ldrb r0, [r5, #9]	@ 000442ac 687a
.org 0x442ae
	lsls r0, r0, #2	@ 000442ae 8000
.org 0x442b0
	adds r0, r0, r1	@ 000442b0 4018
.org 0x442b2
	movs r1, #2	@ 000442b2 0221
.org 0x442b4
	str r1, [r5, #12]	@ 000442b4 e960
.org 0x442b6
	ldr r0, [r0, #0]	@ 000442b6 0068
.org 0x442b8
	ldr r0, [r0, #8]	@ 000442b8 8068
.org 0x442ba
	str r0, [r5, #20]	@ 000442ba 6861
.org 0x442bc
	b.n 0x44354	@ 000442bc 4ae0
.org 0x442be
	.byte 0x00	@ 000442be data
.org 0x442bf
	.byte 0x00	@ 000442bf data
.org 0x442c0
	.byte 0xf8,0x39,0x85,0x08	@ 000442c0 data
.org 0x442c4
	ldrb r0, [r5, #18]	@ 000442c4 a87c
.org 0x442c6
	cmp r0, #0	@ 000442c6 0028
.org 0x442c8
	beq.n 0x44344	@ 000442c8 3cd0
.org 0x442ca
	subs r0, #1	@ 000442ca 0138
.org 0x442cc
	strb r0, [r5, #18]	@ 000442cc a874
.org 0x442ce
	lsls r0, r0, #24	@ 000442ce 0006
.org 0x442d0
	cmp r0, #0	@ 000442d0 0028
.org 0x442d2
	bne.n 0x44354	@ 000442d2 3fd1
.org 0x442d4
	adds r0, r5, #0	@ 000442d4 281c
.org 0x442d6
	movs r1, #0	@ 000442d6 0021
.org 0x442d8
	bl 0x3ad84	@ 000442d8 f6f754fd
.org 0x442dc
	lsls r0, r0, #24	@ 000442dc 0006
.org 0x442de
	lsrs r3, r0, #24	@ 000442de 030e
.org 0x442e0
	ldrb r1, [r5, #10]	@ 000442e0 a97a
.org 0x442e2
	movs r0, #16	@ 000442e2 1020
.org 0x442e4
	ands r0, r1	@ 000442e4 0840
.org 0x442e6
	cmp r0, #0	@ 000442e6 0028
.org 0x442e8
	beq.n 0x442fa	@ 000442e8 07d0
.org 0x442ea
	adds r0, r3, #0	@ 000442ea 181c
.org 0x442ec
	subs r0, #41	@ 000442ec 2938
.org 0x442ee
	lsls r0, r0, #24	@ 000442ee 0006
.org 0x442f0
	lsrs r0, r0, #24	@ 000442f0 000e
.org 0x442f2
	cmp r0, #174	@ 000442f2 ae28
.org 0x442f4
	bhi.n 0x44308	@ 000442f4 08d8
.org 0x442f6
	movs r3, #0	@ 000442f6 0023
.org 0x442f8
	b.n 0x44308	@ 000442f8 06e0
.org 0x442fa
	adds r0, r3, #0	@ 000442fa 181c
.org 0x442fc
	subs r0, #88	@ 000442fc 5838
.org 0x442fe
	lsls r0, r0, #24	@ 000442fe 0006
.org 0x44300
	lsrs r0, r0, #24	@ 00044300 000e
.org 0x44302
	cmp r0, #80	@ 00044302 5028
.org 0x44304
	bls.n 0x44308	@ 00044304 00d9
.org 0x44306
	movs r3, #128	@ 00044306 8023
.org 0x44308
	ldr r2, [pc, #52]	@ 00044308 0d4a
.org 0x4430a
	adds r0, r3, #0	@ 0004430a 181c
.org 0x4430c
	adds r0, #192	@ 0004430c c030
.org 0x4430e
	lsls r0, r0, #24	@ 0004430e 0006
.org 0x44310
	lsrs r0, r0, #23	@ 00044310 c00d
.org 0x44312
	adds r0, r0, r2	@ 00044312 8018
.org 0x44314
	movs r4, #0	@ 00044314 0024
.org 0x44316
	ldrsh r1, [r0, r4]	@ 00044316 015f
.org 0x44318
	lsls r0, r1, #1	@ 00044318 4800
.org 0x4431a
	adds r0, r0, r1	@ 0004431a 4018
.org 0x4431c
	lsls r0, r0, #8	@ 0004431c 0002
.org 0x4431e
	negs r0, r0	@ 0004431e 4042
.org 0x44320
	asrs r0, r0, #8	@ 00044320 0012
.org 0x44322
	str r0, [r5, #92]	@ 00044322 e865
.org 0x44324
	adds r0, r3, #0	@ 00044324 181c
.org 0x44326
	adds r0, #128	@ 00044326 8030
.org 0x44328
	lsls r0, r0, #24	@ 00044328 0006
.org 0x4432a
	lsrs r0, r0, #23	@ 0004432a c00d
.org 0x4432c
	adds r0, r0, r2	@ 0004432c 8018
.org 0x4432e
	movs r2, #0	@ 0004432e 0022
.org 0x44330
	ldrsh r1, [r0, r2]	@ 00044330 815e
.org 0x44332
	lsls r0, r1, #1	@ 00044332 4800
.org 0x44334
	adds r0, r0, r1	@ 00044334 4018
.org 0x44336
	lsls r0, r0, #8	@ 00044336 0002
.org 0x44338
	negs r0, r0	@ 00044338 4042
.org 0x4433a
	asrs r0, r0, #8	@ 0004433a 0012
.org 0x4433c
	str r0, [r5, #96]	@ 0004433c 2866
.org 0x4433e
	b.n 0x44354	@ 0004433e 09e0
.org 0x44340
	.byte 0x0c,0x93,0x12,0x08	@ 00044340 data
.org 0x44344
	ldr r0, [r5, #84]	@ 00044344 686d
.org 0x44346
	ldr r1, [r5, #92]	@ 00044346 e96d
.org 0x44348
	adds r0, r0, r1	@ 00044348 4018
