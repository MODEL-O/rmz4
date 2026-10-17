@ FUN_080a01c0  entry 0x080a01c0  size 220
.thumb
.org 0xa01c0
FUN_080a01c0:
	push {r4, r5, lr}	@ 000a01c0 30b5
.org 0xa01c2
	adds r5, r0, #0	@ 000a01c2 051c
.org 0xa01c4
	ldrb r0, [r5, #10]	@ 000a01c4 a87a
.org 0xa01c6
	lsrs r4, r0, #4	@ 000a01c6 0409
.org 0xa01c8
	movs r0, #1	@ 000a01c8 0120
.org 0xa01ca
	ands r4, r0	@ 000a01ca 0440
.org 0xa01cc
	ldrb r0, [r5, #15]	@ 000a01cc e87b
.org 0xa01ce
	cmp r0, #0	@ 000a01ce 0028
.org 0xa01d0
	bne.n 0xa024a	@ 000a01d0 3bd1
.org 0xa01d2
	adds r1, r5, #0	@ 000a01d2 291c
.org 0xa01d4
	adds r1, #37	@ 000a01d4 2531
.org 0xa01d6
	movs r0, #24	@ 000a01d6 1820
.org 0xa01d8
	strb r0, [r1, #0]	@ 000a01d8 0870
.org 0xa01da
	adds r0, r5, #0	@ 000a01da 281c
.org 0xa01dc
	adds r0, #116	@ 000a01dc 7430
.org 0xa01de
	ldr r1, [pc, #36]	@ 000a01de 0949
.org 0xa01e0
	bl 0x5784	@ 000a01e0 65f7d0fa
.org 0xa01e4
	adds r0, r5, #0	@ 000a01e4 281c
.org 0xa01e6
	bl 0xa0bcc	@ 000a01e6 00f0f1fc
.org 0xa01ea
	cmp r0, #0	@ 000a01ea 0028
.org 0xa01ec
	beq.n 0xa022c	@ 000a01ec 1ed0
.org 0xa01ee
	adds r4, #1	@ 000a01ee 0134
.org 0xa01f0
	movs r0, #1	@ 000a01f0 0120
.org 0xa01f2
	ands r4, r0	@ 000a01f2 0440
.org 0xa01f4
	adds r2, r4, #0	@ 000a01f4 221c
.org 0xa01f6
	cmp r4, #0	@ 000a01f6 002c
.org 0xa01f8
	beq.n 0xa0208	@ 000a01f8 06d0
.org 0xa01fa
	ldrb r0, [r5, #10]	@ 000a01fa a87a
.org 0xa01fc
	movs r1, #16	@ 000a01fc 1021
.org 0xa01fe
	orrs r0, r1	@ 000a01fe 0843
.org 0xa0200
	b.n 0xa020e	@ 000a0200 05e0
.org 0xa0202
	.byte 0x00	@ 000a0202 data
.org 0xa0203
	.byte 0x00	@ 000a0203 data
.org 0xa0204
	.byte 0x54,0x19,0x86,0x08	@ 000a0204 data
.org 0xa0208
	ldrb r1, [r5, #10]	@ 000a0208 a97a
.org 0xa020a
	movs r0, #239	@ 000a020a ef20
.org 0xa020c
	ands r0, r1	@ 000a020c 0840
.org 0xa020e
	strb r0, [r5, #10]	@ 000a020e a872
.org 0xa0210
	movs r1, #1	@ 000a0210 0121
.org 0xa0212
	ands r1, r2	@ 000a0212 1140
.org 0xa0214
	adds r0, r5, #0	@ 000a0214 281c
.org 0xa0216
	adds r0, #76	@ 000a0216 4c30
.org 0xa0218
	strb r1, [r0, #0]	@ 000a0218 0170
.org 0xa021a
	adds r3, r5, #0	@ 000a021a 2b1c
.org 0xa021c
	adds r3, #74	@ 000a021c 4a33
.org 0xa021e
	lsls r1, r1, #4	@ 000a021e 0901
.org 0xa0220
	ldrb r2, [r3, #0]	@ 000a0220 1a78
.org 0xa0222
	movs r0, #17	@ 000a0222 1120
.org 0xa0224
	negs r0, r0	@ 000a0224 4042
.org 0xa0226
	ands r0, r2	@ 000a0226 1040
.org 0xa0228
	orrs r0, r1	@ 000a0228 0843
.org 0xa022a
	strb r0, [r3, #0]	@ 000a022a 1870
.org 0xa022c
	ldr r1, [pc, #72]	@ 000a022c 1249
.org 0xa022e
	adds r0, r5, #0	@ 000a022e 281c
.org 0xa0230
	bl 0x1cf00	@ 000a0230 7cf766fe
.org 0xa0234
	lsls r1, r4, #1	@ 000a0234 6100
.org 0xa0236
	subs r1, #1	@ 000a0236 0139
.org 0xa0238
	lsls r0, r1, #3	@ 000a0238 c800
.org 0xa023a
	subs r0, r0, r1	@ 000a023a 401a
.org 0xa023c
	lsls r0, r0, #6	@ 000a023c 8001
.org 0xa023e
	str r0, [r5, #92]	@ 000a023e e865
.org 0xa0240
	ldr r0, [pc, #56]	@ 000a0240 0e48
.org 0xa0242
	str r0, [r5, #96]	@ 000a0242 2866
.org 0xa0244
	ldrb r0, [r5, #15]	@ 000a0244 e87b
.org 0xa0246
	adds r0, #1	@ 000a0246 0130
.org 0xa0248
	strb r0, [r5, #15]	@ 000a0248 e873
.org 0xa024a
	adds r0, r5, #0	@ 000a024a 281c
.org 0xa024c
	bl 0x1cff0	@ 000a024c 7cf7d0fe
.org 0xa0250
	ldr r1, [r5, #96]	@ 000a0250 296e
.org 0xa0252
	adds r0, r5, #0	@ 000a0252 281c
.org 0xa0254
	bl 0xa0a94	@ 000a0254 00f01efc
.org 0xa0258
	adds r4, r0, #0	@ 000a0258 041c
.org 0xa025a
	ldr r1, [r5, #92]	@ 000a025a e96d
.org 0xa025c
	adds r0, r5, #0	@ 000a025c 281c
.org 0xa025e
	bl 0xa09b0	@ 000a025e 00f0a7fb
.org 0xa0262
	cmp r4, #0	@ 000a0262 002c
.org 0xa0264
	bne.n 0xa0280	@ 000a0264 0cd1
.org 0xa0266
	ldr r0, [r5, #96]	@ 000a0266 286e
.org 0xa0268
	adds r0, #64	@ 000a0268 4030
.org 0xa026a
	str r0, [r5, #96]	@ 000a026a 2866
.org 0xa026c
	movs r1, #224	@ 000a026c e021
.org 0xa026e
	lsls r1, r1, #3	@ 000a026e c900
.org 0xa0270
	cmp r0, r1	@ 000a0270 8842
.org 0xa0272
	ble.n 0xa02a4	@ 000a0272 17dd
.org 0xa0274
	str r1, [r5, #96]	@ 000a0274 2966
.org 0xa0276
	b.n 0xa02a4	@ 000a0276 15e0
.org 0xa0278
	.byte 0x02,0x82,0x00,0x00	@ 000a0278 data
.org 0xa027c
	.byte 0x00,0xfc,0xff,0xff	@ 000a027c data
.org 0xa0280
	ldr r0, [r5, #96]	@ 000a0280 286e
.org 0xa0282
	cmp r0, #0	@ 000a0282 0028
.org 0xa0284
	bge.n 0xa028c	@ 000a0284 02da
.org 0xa0286
	movs r0, #0	@ 000a0286 0020
.org 0xa0288
	str r0, [r5, #96]	@ 000a0288 2866
.org 0xa028a
	b.n 0xa02a4	@ 000a028a 0be0
.org 0xa028c
	adds r0, r5, #0	@ 000a028c 281c
.org 0xa028e
	adds r0, #180	@ 000a028e b430
.org 0xa0290
	ldr r1, [r0, #0]	@ 000a0290 0168
.org 0xa0292
	cmp r1, #0	@ 000a0292 0029
.org 0xa0294
	beq.n 0xa029c	@ 000a0294 02d0
.org 0xa0296
	movs r1, #0	@ 000a0296 0021
.org 0xa0298
	movs r0, #3	@ 000a0298 0320
.org 0xa029a
	b.n 0xa029e	@ 000a029a 00e0
