@ FUN_0803e254  entry 0x0803e254  size 252
.thumb
.org 0x3e254
FUN_0803e254:
	push {r4, r5, lr}	@ 0003e254 30b5
.org 0x3e256
	adds r4, r0, #0	@ 0003e256 041c
.org 0x3e258
	adds r0, #180	@ 0003e258 b430
.org 0x3e25a
	ldr r5, [r0, #0]	@ 0003e25a 0568
.org 0x3e25c
	ldrb r1, [r4, #13]	@ 0003e25c 617b
.org 0x3e25e
	cmp r1, #1	@ 0003e25e 0129
.org 0x3e260
	beq.n 0x3e2d8	@ 0003e260 3ad0
.org 0x3e262
	cmp r1, #1	@ 0003e262 0129
.org 0x3e264
	bgt.n 0x3e26c	@ 0003e264 02dc
.org 0x3e266
	cmp r1, #0	@ 0003e266 0029
.org 0x3e268
	beq.n 0x3e276	@ 0003e268 05d0
.org 0x3e26a
	b.n 0x3e354	@ 0003e26a 73e0
.org 0x3e26c
	cmp r1, #2	@ 0003e26c 0229
.org 0x3e26e
	beq.n 0x3e2f4	@ 0003e26e 41d0
.org 0x3e270
	cmp r1, #3	@ 0003e270 0329
.org 0x3e272
	beq.n 0x3e338	@ 0003e272 61d0
.org 0x3e274
	b.n 0x3e354	@ 0003e274 6ee0
.org 0x3e276
	ldr r1, [pc, #28]	@ 0003e276 0749
.org 0x3e278
	adds r0, r4, #0	@ 0003e278 201c
.org 0x3e27a
	bl 0x1cf00	@ 0003e27a def741fe
.org 0x3e27e
	ldrb r0, [r4, #19]	@ 0003e27e e07c
.org 0x3e280
	lsls r0, r0, #24	@ 0003e280 0006
.org 0x3e282
	cmp r0, #0	@ 0003e282 0028
.org 0x3e284
	beq.n 0x3e298	@ 0003e284 08d0
.org 0x3e286
	lsrs r2, r0, #26	@ 0003e286 820e
.org 0x3e288
	adds r0, r5, #0	@ 0003e288 281c
.org 0x3e28a
	adds r1, r4, #0	@ 0003e28a 211c
.org 0x3e28c
	bl 0x3f608	@ 0003e28c 01f0bcf9
.org 0x3e290
	b.n 0x3e2c4	@ 0003e290 18e0
.org 0x3e292
	.byte 0x00	@ 0003e292 data
.org 0x3e293
	.byte 0x00	@ 0003e293 data
.org 0x3e294
	.byte 0x13,0x80,0x00,0x00	@ 0003e294 data
.org 0x3e298
	adds r2, r5, #0	@ 0003e298 2a1c
.org 0x3e29a
	adds r2, #230	@ 0003e29a e632
.org 0x3e29c
	ldrb r0, [r2, #0]	@ 0003e29c 1078
.org 0x3e29e
	adds r1, r0, #0	@ 0003e29e 011c
.org 0x3e2a0
	cmp r1, #0	@ 0003e2a0 0029
.org 0x3e2a2
	beq.n 0x3e2c0	@ 0003e2a2 0dd0
.org 0x3e2a4
	cmp r1, #255	@ 0003e2a4 ff29
.org 0x3e2a6
	beq.n 0x3e2ac	@ 0003e2a6 01d0
.org 0x3e2a8
	subs r0, #1	@ 0003e2a8 0138
.org 0x3e2aa
	strb r0, [r2, #0]	@ 0003e2aa 1070
.org 0x3e2ac
	ldrb r2, [r4, #19]	@ 0003e2ac e27c
.org 0x3e2ae
	lsrs r2, r2, #2	@ 0003e2ae 9208
.org 0x3e2b0
	adds r0, r5, #0	@ 0003e2b0 281c
.org 0x3e2b2
	adds r1, r4, #0	@ 0003e2b2 211c
.org 0x3e2b4
	bl 0x3f608	@ 0003e2b4 01f0a8f9
.org 0x3e2b8
	movs r0, #62	@ 0003e2b8 3e20
.org 0x3e2ba
	bl 0x2b10	@ 0003e2ba c4f729fc
.org 0x3e2be
	b.n 0x3e2c4	@ 0003e2be 01e0
.org 0x3e2c0
	movs r0, #16	@ 0003e2c0 1020
.org 0x3e2c2
	strb r0, [r4, #19]	@ 0003e2c2 e074
.org 0x3e2c4
	movs r0, #170	@ 0003e2c4 aa20
.org 0x3e2c6
	lsls r0, r0, #1	@ 0003e2c6 4000
.org 0x3e2c8
	adds r1, r5, r0	@ 0003e2c8 2918
.org 0x3e2ca
	movs r0, #0	@ 0003e2ca 0020
.org 0x3e2cc
	strb r0, [r1, #0]	@ 0003e2cc 0870
.org 0x3e2ce
	movs r0, #2	@ 0003e2ce 0220
.org 0x3e2d0
	strb r0, [r4, #18]	@ 0003e2d0 a074
.org 0x3e2d2
	ldrb r0, [r4, #13]	@ 0003e2d2 607b
.org 0x3e2d4
	adds r0, #1	@ 0003e2d4 0130
.org 0x3e2d6
	strb r0, [r4, #13]	@ 0003e2d6 6073
.org 0x3e2d8
	ldrb r0, [r4, #18]	@ 0003e2d8 a07c
.org 0x3e2da
	subs r0, #1	@ 0003e2da 0138
.org 0x3e2dc
	strb r0, [r4, #18]	@ 0003e2dc a074
.org 0x3e2de
	lsls r0, r0, #24	@ 0003e2de 0006
.org 0x3e2e0
	cmp r0, #0	@ 0003e2e0 0028
.org 0x3e2e2
	bne.n 0x3e354	@ 0003e2e2 37d1
.org 0x3e2e4
	movs r3, #170	@ 0003e2e4 aa23
.org 0x3e2e6
	lsls r3, r3, #1	@ 0003e2e6 5b00
.org 0x3e2e8
	adds r1, r5, r3	@ 0003e2e8 e918
.org 0x3e2ea
	movs r0, #1	@ 0003e2ea 0120
.org 0x3e2ec
	strb r0, [r1, #0]	@ 0003e2ec 0870
.org 0x3e2ee
	movs r0, #2	@ 0003e2ee 0220
.org 0x3e2f0
	strb r0, [r4, #18]	@ 0003e2f0 a074
.org 0x3e2f2
	b.n 0x3e34e	@ 0003e2f2 2ce0
.org 0x3e2f4
	ldrb r0, [r4, #18]	@ 0003e2f4 a07c
.org 0x3e2f6
	subs r0, #1	@ 0003e2f6 0138
.org 0x3e2f8
	strb r0, [r4, #18]	@ 0003e2f8 a074
.org 0x3e2fa
	movs r3, #255	@ 0003e2fa ff23
.org 0x3e2fc
	lsls r0, r0, #24	@ 0003e2fc 0006
.org 0x3e2fe
	lsrs r2, r0, #24	@ 0003e2fe 020e
.org 0x3e300
	cmp r2, #0	@ 0003e300 002a
.org 0x3e302
	bne.n 0x3e354	@ 0003e302 27d1
.org 0x3e304
	ldrb r0, [r4, #19]	@ 0003e304 e07c
.org 0x3e306
	adds r0, #1	@ 0003e306 0130
.org 0x3e308
	strb r0, [r4, #19]	@ 0003e308 e074
.org 0x3e30a
	ands r0, r3	@ 0003e30a 1840
.org 0x3e30c
	cmp r0, #15	@ 0003e30c 0f28
.org 0x3e30e
	bhi.n 0x3e31c	@ 0003e30e 05d8
.org 0x3e310
	movs r3, #170	@ 0003e310 aa23
.org 0x3e312
	lsls r3, r3, #1	@ 0003e312 5b00
.org 0x3e314
	adds r0, r5, r3	@ 0003e314 e818
.org 0x3e316
	strb r1, [r0, #0]	@ 0003e316 0170
.org 0x3e318
	strb r2, [r4, #13]	@ 0003e318 6273
.org 0x3e31a
	b.n 0x3e354	@ 0003e31a 1be0
.org 0x3e31c
	ldr r1, [pc, #20]	@ 0003e31c 0549
.org 0x3e31e
	adds r0, r4, #0	@ 0003e31e 201c
.org 0x3e320
	bl 0x1cf00	@ 0003e320 def7eefd
.org 0x3e324
	movs r0, #170	@ 0003e324 aa20
.org 0x3e326
	lsls r0, r0, #1	@ 0003e326 4000
.org 0x3e328
	adds r1, r5, r0	@ 0003e328 2918
.org 0x3e32a
	movs r0, #3	@ 0003e32a 0320
.org 0x3e32c
	strb r0, [r1, #0]	@ 0003e32c 0870
.org 0x3e32e
	movs r0, #16	@ 0003e32e 1020
.org 0x3e330
	strb r0, [r4, #18]	@ 0003e330 a074
.org 0x3e332
	b.n 0x3e34e	@ 0003e332 0ce0
.org 0x3e334
	.byte 0x12,0x80,0x00,0x00	@ 0003e334 data
.org 0x3e338
	ldrb r0, [r4, #18]	@ 0003e338 a07c
.org 0x3e33a
	subs r0, #1	@ 0003e33a 0138
.org 0x3e33c
	strb r0, [r4, #18]	@ 0003e33c a074
.org 0x3e33e
	lsls r0, r0, #24	@ 0003e33e 0006
.org 0x3e340
	cmp r0, #0	@ 0003e340 0028
.org 0x3e342
	bne.n 0x3e354	@ 0003e342 07d1
.org 0x3e344
	movs r3, #170	@ 0003e344 aa23
.org 0x3e346
	lsls r3, r3, #1	@ 0003e346 5b00
.org 0x3e348
	adds r1, r5, r3	@ 0003e348 e918
.org 0x3e34a
	movs r0, #4	@ 0003e34a 0420
.org 0x3e34c
	strb r0, [r1, #0]	@ 0003e34c 0870
.org 0x3e34e
	ldrb r0, [r4, #13]	@ 0003e34e 607b
