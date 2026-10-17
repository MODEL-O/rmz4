@ FUN_0809c1d8  entry 0x0809c1d8  size 344
.thumb
.org 0x9c1d8
FUN_0809c1d8:
	push {r4, r5, r6, r7, lr}	@ 0009c1d8 f0b5
.org 0x9c1da
	mov r7, sl	@ 0009c1da 5746
.org 0x9c1dc
	mov r6, r9	@ 0009c1dc 4e46
.org 0x9c1de
	mov r5, r8	@ 0009c1de 4546
.org 0x9c1e0
	push {r5, r6, r7}	@ 0009c1e0 e0b4
.org 0x9c1e2
	sub sp, #52	@ 0009c1e2 8db0
.org 0x9c1e4
	adds r5, r0, #0	@ 0009c1e4 051c
.org 0x9c1e6
	mov r1, sp	@ 0009c1e6 6946
.org 0x9c1e8
	ldr r0, [pc, #88]	@ 0009c1e8 1648
.org 0x9c1ea
	ldmia r0!, {r2, r3, r4}	@ 0009c1ea 1cc8
.org 0x9c1ec
	stmia r1!, {r2, r3, r4}	@ 0009c1ec 1cc1
.org 0x9c1ee
	ldr r0, [r0, #0]	@ 0009c1ee 0068
.org 0x9c1f0
	str r0, [r1, #0]	@ 0009c1f0 0860
.org 0x9c1f2
	add r0, sp, #16	@ 0009c1f2 04a8
.org 0x9c1f4
	mov r9, r0	@ 0009c1f4 8146
.org 0x9c1f6
	mov r1, r9	@ 0009c1f6 4946
.org 0x9c1f8
	ldr r0, [pc, #76]	@ 0009c1f8 1348
.org 0x9c1fa
	ldmia r0!, {r2, r3, r4}	@ 0009c1fa 1cc8
.org 0x9c1fc
	stmia r1!, {r2, r3, r4}	@ 0009c1fc 1cc1
.org 0x9c1fe
	ldr r0, [r0, #0]	@ 0009c1fe 0068
.org 0x9c200
	str r0, [r1, #0]	@ 0009c200 0860
.org 0x9c202
	add r4, sp, #32	@ 0009c202 08ac
.org 0x9c204
	ldr r1, [pc, #68]	@ 0009c204 1149
.org 0x9c206
	adds r0, r4, #0	@ 0009c206 201c
.org 0x9c208
	movs r2, #4	@ 0009c208 0422
.org 0x9c20a
	bl 0x129258	@ 0009c20a 8df025f8
.org 0x9c20e
	ldrb r0, [r5, #17]	@ 0009c20e 687c
.org 0x9c210
	mov r8, r0	@ 0009c210 8046
.org 0x9c212
	adds r0, r5, #0	@ 0009c212 281c
.org 0x9c214
	adds r0, #181	@ 0009c214 b530
.org 0x9c216
	ldrb r7, [r0, #0]	@ 0009c216 0778
.org 0x9c218
	ldr r6, [r5, #40]	@ 0009c218 ae6a
.org 0x9c21a
	movs r1, #1	@ 0009c21a 0121
.org 0x9c21c
	mov sl, r1	@ 0009c21c 8a46
.org 0x9c21e
	ldrb r0, [r5, #15]	@ 0009c21e e87b
.org 0x9c220
	cmp r0, #0	@ 0009c220 0028
.org 0x9c222
	bne.n 0x9c268	@ 0009c222 21d1
.org 0x9c224
	adds r0, r5, #0	@ 0009c224 281c
.org 0x9c226
	adds r0, #180	@ 0009c226 b430
.org 0x9c228
	ldrb r1, [r0, #0]	@ 0009c228 0178
.org 0x9c22a
	adds r4, r0, #0	@ 0009c22a 041c
.org 0x9c22c
	cmp r1, #0	@ 0009c22c 0029
.org 0x9c22e
	beq.n 0x9c262	@ 0009c22e 18d0
.org 0x9c230
	cmp r7, #0	@ 0009c230 002f
.org 0x9c232
	beq.n 0x9c250	@ 0009c232 0dd0
.org 0x9c234
	mov r2, r8	@ 0009c234 4246
.org 0x9c236
	lsls r0, r2, #2	@ 0009c236 9000
.org 0x9c238
	add r0, sp	@ 0009c238 6844
.org 0x9c23a
	ldrh r1, [r0, #0]	@ 0009c23a 0188
.org 0x9c23c
	adds r0, r5, #0	@ 0009c23c 281c
.org 0x9c23e
	bl 0x1cf00	@ 0009c23e 80f75ffe
.org 0x9c242
	b.n 0x9c25e	@ 0009c242 0ce0
.org 0x9c244
	.byte 0xb0,0x9c,0x12,0x08	@ 0009c244 data
.org 0x9c248
	.byte 0xc0,0x9c,0x12,0x08	@ 0009c248 data
.org 0x9c24c
	.byte 0xac,0x9c,0x12,0x08	@ 0009c24c data
.org 0x9c250
	mov r3, r8	@ 0009c250 4346
.org 0x9c252
	lsls r0, r3, #2	@ 0009c252 9800
.org 0x9c254
	add r0, r9	@ 0009c254 4844
.org 0x9c256
	ldrh r1, [r0, #0]	@ 0009c256 0188
.org 0x9c258
	adds r0, r5, #0	@ 0009c258 281c
.org 0x9c25a
	bl 0x1cf00	@ 0009c25a 80f751fe
.org 0x9c25e
	movs r0, #0	@ 0009c25e 0020
.org 0x9c260
	strb r0, [r4, #0]	@ 0009c260 2070
.org 0x9c262
	ldrb r0, [r5, #15]	@ 0009c262 e87b
.org 0x9c264
	adds r0, #1	@ 0009c264 0130
.org 0x9c266
	strb r0, [r5, #15]	@ 0009c266 e873
.org 0x9c268
	adds r0, r5, #0	@ 0009c268 281c
.org 0x9c26a
	bl 0x1cff0	@ 0009c26a 80f7c1fe
.org 0x9c26e
	adds r0, r6, #0	@ 0009c26e 301c
.org 0x9c270
	adds r0, #180	@ 0009c270 b430
.org 0x9c272
	ldr r1, [r6, #84]	@ 0009c272 716d
.org 0x9c274
	ldr r3, [r0, #0]	@ 0009c274 0368
.org 0x9c276
	subs r1, r1, r3	@ 0009c276 c91a
.org 0x9c278
	mov ip, r1	@ 0009c278 8c46
.org 0x9c27a
	str r1, [sp, #36]	@ 0009c27a 0991
.org 0x9c27c
	adds r4, r6, #0	@ 0009c27c 341c
.org 0x9c27e
	adds r4, #184	@ 0009c27e b834
.org 0x9c280
	ldr r1, [r6, #88]	@ 0009c280 b16d
.org 0x9c282
	ldr r0, [r4, #0]	@ 0009c282 2068
.org 0x9c284
	subs r0, r1, r0	@ 0009c284 081a
.org 0x9c286
	str r0, [sp, #40]	@ 0009c286 0a90
.org 0x9c288
	ldr r1, [pc, #140]	@ 0009c288 2349
.org 0x9c28a
	mov r0, r8	@ 0009c28a 4046
.org 0x9c28c
	lsls r2, r0, #3	@ 0009c28c c200
.org 0x9c28e
	adds r0, r2, r1	@ 0009c28e 5018
.org 0x9c290
	ldr r6, [r0, #0]	@ 0009c290 0668
.org 0x9c292
	str r6, [sp, #44]	@ 0009c292 0b96
.org 0x9c294
	adds r1, #4	@ 0009c294 0431
.org 0x9c296
	adds r2, r2, r1	@ 0009c296 5218
.org 0x9c298
	ldr r2, [r2, #0]	@ 0009c298 1268
.org 0x9c29a
	str r2, [sp, #48]	@ 0009c29a 0c92
.org 0x9c29c
	adds r1, r6, #0	@ 0009c29c 311c
.org 0x9c29e
	adds r0, r7, #0	@ 0009c29e 381c
.org 0x9c2a0
	muls r0, r1	@ 0009c2a0 4843
.org 0x9c2a2
	adds r3, r3, r0	@ 0009c2a2 1b18
.org 0x9c2a4
	str r3, [r5, #84]	@ 0009c2a4 6b65
.org 0x9c2a6
	adds r1, r7, #0	@ 0009c2a6 391c
.org 0x9c2a8
	muls r1, r2	@ 0009c2a8 5143
.org 0x9c2aa
	ldr r0, [r4, #0]	@ 0009c2aa 2068
.org 0x9c2ac
	adds r0, r0, r1	@ 0009c2ac 4018
.org 0x9c2ae
	str r0, [r5, #88]	@ 0009c2ae a865
.org 0x9c2b0
	cmp r6, #0	@ 0009c2b0 002e
.org 0x9c2b2
	beq.n 0x9c2c6	@ 0009c2b2 08d0
.org 0x9c2b4
	mov r0, ip	@ 0009c2b4 6046
.org 0x9c2b6
	adds r1, r6, #0	@ 0009c2b6 311c
.org 0x9c2b8
	bl 0x128fb8	@ 0009c2b8 8cf07efe
.org 0x9c2bc
	adds r1, r7, #1	@ 0009c2bc 791c
.org 0x9c2be
	cmp r0, r1	@ 0009c2be 8842
.org 0x9c2c0
	bge.n 0x9c2c6	@ 0009c2c0 01da
.org 0x9c2c2
	movs r3, #0	@ 0009c2c2 0023
.org 0x9c2c4
	mov sl, r3	@ 0009c2c4 9a46
.org 0x9c2c6
	ldr r4, [sp, #48]	@ 0009c2c6 0c9c
.org 0x9c2c8
	cmp r4, #0	@ 0009c2c8 002c
.org 0x9c2ca
	beq.n 0x9c2de	@ 0009c2ca 08d0
.org 0x9c2cc
	ldr r0, [sp, #40]	@ 0009c2cc 0a98
.org 0x9c2ce
	adds r1, r4, #0	@ 0009c2ce 211c
.org 0x9c2d0
	bl 0x128fb8	@ 0009c2d0 8cf072fe
.org 0x9c2d4
	adds r1, r7, #1	@ 0009c2d4 791c
.org 0x9c2d6
	cmp r0, r1	@ 0009c2d6 8842
.org 0x9c2d8
	bge.n 0x9c2de	@ 0009c2d8 01da
.org 0x9c2da
	movs r0, #0	@ 0009c2da 0020
.org 0x9c2dc
	mov sl, r0	@ 0009c2dc 8246
.org 0x9c2de
	mov r1, sl	@ 0009c2de 5146
.org 0x9c2e0
	cmp r1, #0	@ 0009c2e0 0029
.org 0x9c2e2
	beq.n 0x9c320	@ 0009c2e2 1dd0
.org 0x9c2e4
	ldrb r1, [r5, #10]	@ 0009c2e4 a97a
.org 0x9c2e6
	movs r0, #1	@ 0009c2e6 0120
.org 0x9c2e8
	orrs r0, r1	@ 0009c2e8 0843
.org 0x9c2ea
	strb r0, [r5, #10]	@ 0009c2ea a872
.org 0x9c2ec
	adds r0, r5, #0	@ 0009c2ec 281c
.org 0x9c2ee
	adds r0, #116	@ 0009c2ee 7430
.org 0x9c2f0
	ldr r3, [pc, #40]	@ 0009c2f0 0a4b
.org 0x9c2f2
	mov r1, sp	@ 0009c2f2 6946
.org 0x9c2f4
	add r1, r8	@ 0009c2f4 4144
.org 0x9c2f6
	adds r1, #32	@ 0009c2f6 2031
.org 0x9c2f8
	ldrb r2, [r1, #0]	@ 0009c2f8 0a78
.org 0x9c2fa
	lsls r2, r2, #2	@ 0009c2fa 9200
.org 0x9c2fc
	adds r2, r2, r3	@ 0009c2fc d218
.org 0x9c2fe
	adds r1, r5, #0	@ 0009c2fe 291c
.org 0x9c300
	adds r1, #113	@ 0009c300 7131
.org 0x9c302
	ldrb r1, [r1, #0]	@ 0009c302 0978
.org 0x9c304
	lsls r1, r1, #24	@ 0009c304 0906
.org 0x9c306
	asrs r1, r1, #24	@ 0009c306 0916
.org 0x9c308
	ldr r2, [r2, #0]	@ 0009c308 1268
.org 0x9c30a
	lsls r1, r1, #2	@ 0009c30a 8900
.org 0x9c30c
	adds r1, r1, r2	@ 0009c30c 8918
.org 0x9c30e
	ldr r1, [r1, #0]	@ 0009c30e 0968
.org 0x9c310
	bl 0x5784	@ 0009c310 69f738fa
.org 0x9c314
	b.n 0x9c336	@ 0009c314 0fe0
.org 0x9c316
	.byte 0x00	@ 0009c316 data
.org 0x9c317
	.byte 0x00	@ 0009c317 data
.org 0x9c318
	.byte 0x70,0x13,0x86,0x08	@ 0009c318 data
.org 0x9c31c
	.byte 0x44,0x13,0x86,0x08	@ 0009c31c data
.org 0x9c320
	ldrb r1, [r5, #10]	@ 0009c320 a97a
.org 0x9c322
	movs r0, #254	@ 0009c322 fe20
.org 0x9c324
	ands r0, r1	@ 0009c324 0840
.org 0x9c326
	strb r0, [r5, #10]	@ 0009c326 a872
.org 0x9c328
	adds r0, r5, #0	@ 0009c328 281c
.org 0x9c32a
	adds r0, #116	@ 0009c32a 7430
.org 0x9c32c
	ldr r1, [pc, #24]	@ 0009c32c 0649
.org 0x9c32e
	ldr r1, [r1, #0]	@ 0009c32e 0968
