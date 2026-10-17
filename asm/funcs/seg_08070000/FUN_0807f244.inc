@ FUN_0807f244  entry 0x0807f244  size 244
.thumb
.org 0x7f244
FUN_0807f244:
	push {r4, r5, r6, lr}	@ 0007f244 70b5
.org 0x7f246
	adds r3, r0, #0	@ 0007f246 031c
.org 0x7f248
	ldr r0, [pc, #44]	@ 0007f248 0b48
.org 0x7f24a
	ldrh r1, [r0, #8]	@ 0007f24a 0189
.org 0x7f24c
	movs r0, #8	@ 0007f24c 0820
.org 0x7f24e
	ands r0, r1	@ 0007f24e 0840
.org 0x7f250
	lsls r0, r0, #16	@ 0007f250 0004
.org 0x7f252
	lsrs r2, r0, #16	@ 0007f252 020c
.org 0x7f254
	cmp r2, #0	@ 0007f254 002a
.org 0x7f256
	bne.n 0x7f34c	@ 0007f256 79d1
.org 0x7f258
	adds r0, r3, #0	@ 0007f258 181c
.org 0x7f25a
	adds r0, #214	@ 0007f25a d630
.org 0x7f25c
	ldrb r1, [r0, #0]	@ 0007f25c 0178
.org 0x7f25e
	adds r6, r0, #0	@ 0007f25e 061c
.org 0x7f260
	cmp r1, #0	@ 0007f260 0029
.org 0x7f262
	beq.n 0x7f27c	@ 0007f262 0bd0
.org 0x7f264
	movs r0, #5	@ 0007f264 0520
.org 0x7f266
	strb r0, [r3, #13]	@ 0007f266 5873
.org 0x7f268
	strb r2, [r3, #14]	@ 0007f268 9a73
.org 0x7f26a
	strb r2, [r6, #0]	@ 0007f26a 3270
.org 0x7f26c
	ldrb r1, [r3, #13]	@ 0007f26c 597b
.org 0x7f26e
	adds r0, r3, #0	@ 0007f26e 181c
.org 0x7f270
	adds r0, #215	@ 0007f270 d730
.org 0x7f272
	strb r1, [r0, #0]	@ 0007f272 0170
.org 0x7f274
	b.n 0x7f34c	@ 0007f274 6ae0
.org 0x7f276
	.byte 0x00	@ 0007f276 data
.org 0x7f277
	.byte 0x00	@ 0007f277 data
.org 0x7f278
	.byte 0x10,0xe9,0x02,0x02	@ 0007f278 data
.org 0x7f27c
	movs r4, #0	@ 0007f27c 0024
.org 0x7f27e
	ldr r5, [pc, #88]	@ 0007f27e 164d
.org 0x7f280
	adds r1, r3, #0	@ 0007f280 191c
.org 0x7f282
	adds r1, #188	@ 0007f282 bc31
.org 0x7f284
	movs r2, #3	@ 0007f284 0322
.org 0x7f286
	ldr r0, [r1, #0]	@ 0007f286 0868
.org 0x7f288
	cmp r0, #0	@ 0007f288 0028
.org 0x7f28a
	bne.n 0x7f292	@ 0007f28a 02d1
.org 0x7f28c
	adds r0, r4, #1	@ 0007f28c 601c
.org 0x7f28e
	lsls r0, r0, #24	@ 0007f28e 0006
.org 0x7f290
	lsrs r4, r0, #24	@ 0007f290 040e
.org 0x7f292
	adds r1, #4	@ 0007f292 0431
.org 0x7f294
	subs r2, #1	@ 0007f294 013a
.org 0x7f296
	cmp r2, #0	@ 0007f296 002a
.org 0x7f298
	bge.n 0x7f286	@ 0007f298 f5da
.org 0x7f29a
	cmp r4, #4	@ 0007f29a 042c
.org 0x7f29c
	bne.n 0x7f304	@ 0007f29c 32d1
.org 0x7f29e
	ldr r5, [pc, #56]	@ 0007f29e 0e4d
.org 0x7f2a0
	movs r4, #4	@ 0007f2a0 0424
.org 0x7f2a2
	movs r0, #213	@ 0007f2a2 d520
.org 0x7f2a4
	adds r0, r0, r3	@ 0007f2a4 c018
.org 0x7f2a6
	mov ip, r0	@ 0007f2a6 8446
.org 0x7f2a8
	ldr r1, [r5, #0]	@ 0007f2a8 2968
.org 0x7f2aa
	ldr r0, [pc, #48]	@ 0007f2aa 0c48
.org 0x7f2ac
	muls r0, r1	@ 0007f2ac 4843
.org 0x7f2ae
	ldr r1, [pc, #48]	@ 0007f2ae 0c49
.org 0x7f2b0
	adds r0, r0, r1	@ 0007f2b0 4018
.org 0x7f2b2
	lsls r0, r0, #1	@ 0007f2b2 4000
.org 0x7f2b4
	lsrs r1, r0, #1	@ 0007f2b4 4108
.org 0x7f2b6
	str r1, [r5, #0]	@ 0007f2b6 2960
.org 0x7f2b8
	lsrs r1, r0, #17	@ 0007f2b8 410c
.org 0x7f2ba
	movs r0, #3	@ 0007f2ba 0320
.org 0x7f2bc
	ands r1, r0	@ 0007f2bc 0140
.org 0x7f2be
	cmp r1, #0	@ 0007f2be 0029
.org 0x7f2c0
	bne.n 0x7f2e8	@ 0007f2c0 12d1
.org 0x7f2c2
	adds r1, r3, #0	@ 0007f2c2 191c
.org 0x7f2c4
	adds r1, #212	@ 0007f2c4 d431
.org 0x7f2c6
	mov r2, ip	@ 0007f2c6 6246
.org 0x7f2c8
	ldrb r0, [r2, #0]	@ 0007f2c8 1078
.org 0x7f2ca
	ldrb r1, [r1, #0]	@ 0007f2ca 0978
.org 0x7f2cc
	cmp r0, r1	@ 0007f2cc 8842
.org 0x7f2ce
	bne.n 0x7f2e4	@ 0007f2ce 09d1
.org 0x7f2d0
	strb r4, [r3, #13]	@ 0007f2d0 5c73
.org 0x7f2d2
	movs r0, #1	@ 0007f2d2 0120
.org 0x7f2d4
	strb r0, [r6, #0]	@ 0007f2d4 3070
.org 0x7f2d6
	b.n 0x7f2f4	@ 0007f2d6 0de0
.org 0x7f2d8
	.byte 0x38,0xdc,0x02,0x02	@ 0007f2d8 data
.org 0x7f2dc
	.byte 0xfd,0x43,0x03,0x00	@ 0007f2dc data
.org 0x7f2e0
	.byte 0xc3,0x9e,0x26,0x00	@ 0007f2e0 data
.org 0x7f2e4
	movs r0, #5	@ 0007f2e4 0520
.org 0x7f2e6
	b.n 0x7f2f2	@ 0007f2e6 04e0
.org 0x7f2e8
	cmp r1, #1	@ 0007f2e8 0129
.org 0x7f2ea
	bne.n 0x7f2f0	@ 0007f2ea 01d1
.org 0x7f2ec
	strb r4, [r3, #13]	@ 0007f2ec 5c73
.org 0x7f2ee
	b.n 0x7f2f4	@ 0007f2ee 01e0
.org 0x7f2f0
	movs r0, #6	@ 0007f2f0 0620
.org 0x7f2f2
	strb r0, [r3, #13]	@ 0007f2f2 5873
.org 0x7f2f4
	adds r2, r3, #0	@ 0007f2f4 1a1c
.org 0x7f2f6
	adds r2, #215	@ 0007f2f6 d732
.org 0x7f2f8
	ldrb r1, [r3, #13]	@ 0007f2f8 597b
.org 0x7f2fa
	ldrb r0, [r2, #0]	@ 0007f2fa 1078
.org 0x7f2fc
	cmp r0, r1	@ 0007f2fc 8842
.org 0x7f2fe
	beq.n 0x7f2a8	@ 0007f2fe d3d0
.org 0x7f300
	strb r1, [r2, #0]	@ 0007f300 1170
.org 0x7f302
	b.n 0x7f348	@ 0007f302 21e0
.org 0x7f304
	ldr r1, [r5, #0]	@ 0007f304 2968
.org 0x7f306
	ldr r0, [pc, #48]	@ 0007f306 0c48
.org 0x7f308
	muls r0, r1	@ 0007f308 4843
.org 0x7f30a
	ldr r1, [pc, #48]	@ 0007f30a 0c49
.org 0x7f30c
	adds r0, r0, r1	@ 0007f30c 4018
.org 0x7f30e
	lsls r0, r0, #1	@ 0007f30e 4000
.org 0x7f310
	lsrs r1, r0, #1	@ 0007f310 4108
.org 0x7f312
	str r1, [r5, #0]	@ 0007f312 2960
.org 0x7f314
	lsrs r0, r0, #17	@ 0007f314 400c
.org 0x7f316
	movs r1, #1	@ 0007f316 0121
.org 0x7f318
	ands r0, r1	@ 0007f318 0840
.org 0x7f31a
	cmp r0, #0	@ 0007f31a 0028
.org 0x7f31c
	bne.n 0x7f344	@ 0007f31c 12d1
.org 0x7f31e
	adds r0, r3, #0	@ 0007f31e 181c
.org 0x7f320
	adds r0, #213	@ 0007f320 d530
.org 0x7f322
	adds r1, r3, #0	@ 0007f322 191c
.org 0x7f324
	adds r1, #212	@ 0007f324 d431
.org 0x7f326
	ldrb r0, [r0, #0]	@ 0007f326 0078
.org 0x7f328
	ldrb r1, [r1, #0]	@ 0007f328 0978
.org 0x7f32a
	cmp r0, r1	@ 0007f32a 8842
.org 0x7f32c
	bne.n 0x7f340	@ 0007f32c 08d1
.org 0x7f32e
	movs r0, #4	@ 0007f32e 0420
.org 0x7f330
	strb r0, [r3, #13]	@ 0007f330 5873
.org 0x7f332
	movs r0, #1	@ 0007f332 0120
.org 0x7f334
	strb r0, [r6, #0]	@ 0007f334 3070
.org 0x7f336
	b.n 0x7f348	@ 0007f336 07e0
