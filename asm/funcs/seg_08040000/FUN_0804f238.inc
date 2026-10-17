@ FUN_0804f238  entry 0x0804f238  size 164
.thumb
.org 0x4f238
FUN_0804f238:
	push {r4, lr}	@ 0004f238 10b5
.org 0x4f23a
	adds r4, r0, #0	@ 0004f23a 041c
.org 0x4f23c
	ldrb r1, [r4, #13]	@ 0004f23c 617b
.org 0x4f23e
	cmp r1, #0	@ 0004f23e 0029
.org 0x4f240
	bne.n 0x4f266	@ 0004f240 11d1
.org 0x4f242
	ldr r0, [pc, #80]	@ 0004f242 1448
.org 0x4f244
	str r0, [r4, #96]	@ 0004f244 2066
.org 0x4f246
	movs r0, #60	@ 0004f246 3c20
.org 0x4f248
	strb r0, [r4, #18]	@ 0004f248 a074
.org 0x4f24a
	adds r0, r4, #0	@ 0004f24a 201c
.org 0x4f24c
	adds r0, #140	@ 0004f24c 8c30
.org 0x4f24e
	str r1, [r0, #0]	@ 0004f24e 0160
.org 0x4f250
	adds r0, #4	@ 0004f250 0430
.org 0x4f252
	str r1, [r0, #0]	@ 0004f252 0160
.org 0x4f254
	adds r0, #4	@ 0004f254 0430
.org 0x4f256
	strb r1, [r0, #0]	@ 0004f256 0170
.org 0x4f258
	ldrb r1, [r4, #10]	@ 0004f258 a17a
.org 0x4f25a
	movs r0, #251	@ 0004f25a fb20
.org 0x4f25c
	ands r0, r1	@ 0004f25c 0840
.org 0x4f25e
	strb r0, [r4, #10]	@ 0004f25e a072
.org 0x4f260
	ldrb r0, [r4, #13]	@ 0004f260 607b
.org 0x4f262
	adds r0, #1	@ 0004f262 0130
.org 0x4f264
	strb r0, [r4, #13]	@ 0004f264 6073
.org 0x4f266
	adds r0, r4, #0	@ 0004f266 201c
.org 0x4f268
	bl 0x1cff0	@ 0004f268 cdf7c2fe
.org 0x4f26c
	ldr r0, [r4, #84]	@ 0004f26c 606d
.org 0x4f26e
	ldr r1, [r4, #92]	@ 0004f26e e16d
.org 0x4f270
	adds r0, r0, r1	@ 0004f270 4018
.org 0x4f272
	str r0, [r4, #84]	@ 0004f272 6065
.org 0x4f274
	ldr r1, [r4, #96]	@ 0004f274 216e
.org 0x4f276
	adds r1, #64	@ 0004f276 4031
.org 0x4f278
	str r1, [r4, #96]	@ 0004f278 2166
.org 0x4f27a
	ldr r0, [r4, #88]	@ 0004f27a a06d
.org 0x4f27c
	adds r0, r0, r1	@ 0004f27c 4018
.org 0x4f27e
	str r0, [r4, #88]	@ 0004f27e a065
.org 0x4f280
	ldrb r1, [r4, #18]	@ 0004f280 a17c
.org 0x4f282
	movs r0, #1	@ 0004f282 0120
.org 0x4f284
	ands r0, r1	@ 0004f284 0840
.org 0x4f286
	cmp r0, #0	@ 0004f286 0028
.org 0x4f288
	beq.n 0x4f298	@ 0004f288 06d0
.org 0x4f28a
	ldrb r1, [r4, #10]	@ 0004f28a a17a
.org 0x4f28c
	movs r0, #254	@ 0004f28c fe20
.org 0x4f28e
	ands r0, r1	@ 0004f28e 0840
.org 0x4f290
	b.n 0x4f29e	@ 0004f290 05e0
.org 0x4f292
	.byte 0x00	@ 0004f292 data
.org 0x4f293
	.byte 0x00	@ 0004f293 data
.org 0x4f294
	.byte 0x00,0xfd,0xff,0xff	@ 0004f294 data
.org 0x4f298
	ldrb r0, [r4, #10]	@ 0004f298 a07a
.org 0x4f29a
	movs r1, #1	@ 0004f29a 0121
.org 0x4f29c
	orrs r0, r1	@ 0004f29c 0843
.org 0x4f29e
	strb r0, [r4, #10]	@ 0004f29e a072
.org 0x4f2a0
	ldrb r0, [r4, #18]	@ 0004f2a0 a07c
.org 0x4f2a2
	subs r0, #1	@ 0004f2a2 0138
.org 0x4f2a4
	movs r1, #0	@ 0004f2a4 0021
.org 0x4f2a6
	strb r0, [r4, #18]	@ 0004f2a6 a074
.org 0x4f2a8
	lsls r0, r0, #24	@ 0004f2a8 0006
.org 0x4f2aa
	lsrs r0, r0, #24	@ 0004f2aa 000e
.org 0x4f2ac
	cmp r0, #255	@ 0004f2ac ff28
.org 0x4f2ae
	bne.n 0x4f2dc	@ 0004f2ae 15d1
.org 0x4f2b0
	adds r0, r4, #0	@ 0004f2b0 201c
.org 0x4f2b2
	adds r0, #140	@ 0004f2b2 8c30
.org 0x4f2b4
	str r1, [r0, #0]	@ 0004f2b4 0160
.org 0x4f2b6
	adds r0, #4	@ 0004f2b6 0430
.org 0x4f2b8
	str r1, [r0, #0]	@ 0004f2b8 0160
.org 0x4f2ba
	adds r0, #4	@ 0004f2ba 0430
.org 0x4f2bc
	strb r1, [r0, #0]	@ 0004f2bc 0170
.org 0x4f2be
	ldrb r1, [r4, #10]	@ 0004f2be a17a
.org 0x4f2c0
	movs r0, #251	@ 0004f2c0 fb20
.org 0x4f2c2
	ands r0, r1	@ 0004f2c2 0840
.org 0x4f2c4
	movs r1, #254	@ 0004f2c4 fe21
.org 0x4f2c6
	ands r0, r1	@ 0004f2c6 0840
.org 0x4f2c8
	strb r0, [r4, #10]	@ 0004f2c8 a072
.org 0x4f2ca
	ldr r1, [pc, #24]	@ 0004f2ca 0649
.org 0x4f2cc
	ldrb r0, [r4, #9]	@ 0004f2cc 607a
.org 0x4f2ce
	lsls r0, r0, #2	@ 0004f2ce 8000
.org 0x4f2d0
	adds r0, r0, r1	@ 0004f2d0 4018
.org 0x4f2d2
	movs r1, #4	@ 0004f2d2 0421
.org 0x4f2d4
	str r1, [r4, #12]	@ 0004f2d4 e160
.org 0x4f2d6
	ldr r0, [r0, #0]	@ 0004f2d6 0068
.org 0x4f2d8
	ldr r0, [r0, #16]	@ 0004f2d8 0069
.org 0x4f2da
	str r0, [r4, #20]	@ 0004f2da 6061
