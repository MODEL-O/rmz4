@ FUN_0803d180  entry 0x0803d180  size 446
.thumb
.org 0x3d180
FUN_0803d180:
	push {r4, r5, lr}	@ 0003d180 30b5
.org 0x3d182
	sub sp, #16	@ 0003d182 84b0
.org 0x3d184
	adds r5, r0, #0	@ 0003d184 051c
.org 0x3d186
	adds r4, r5, #0	@ 0003d186 2c1c
.org 0x3d188
	adds r4, #180	@ 0003d188 b434
.org 0x3d18a
	ldr r1, [r4, #0]	@ 0003d18a 2168
.org 0x3d18c
	ldrb r2, [r5, #14]	@ 0003d18c aa7b
.org 0x3d18e
	cmp r2, #0	@ 0003d18e 002a
.org 0x3d190
	beq.n 0x3d194	@ 0003d190 00d0
.org 0x3d192
	b.n 0x3d342	@ 0003d192 d6e0
.org 0x3d194
	ldrb r0, [r1, #30]	@ 0003d194 887f
.org 0x3d196
	lsls r0, r0, #8	@ 0003d196 0002
.org 0x3d198
	adds r1, #112	@ 0003d198 7031
.org 0x3d19a
	ldrb r1, [r1, #0]	@ 0003d19a 0978
.org 0x3d19c
	orrs r1, r0	@ 0003d19c 0143
.org 0x3d19e
	movs r0, #216	@ 0003d19e d820
.org 0x3d1a0
	lsls r0, r0, #5	@ 0003d1a0 4001
.org 0x3d1a2
	cmp r1, r0	@ 0003d1a2 8142
.org 0x3d1a4
	bne.n 0x3d1a8	@ 0003d1a4 00d1
.org 0x3d1a6
	b.n 0x3d2e4	@ 0003d1a6 9de0
.org 0x3d1a8
	adds r0, #1	@ 0003d1a8 0130
.org 0x3d1aa
	cmp r1, r0	@ 0003d1aa 8142
.org 0x3d1ac
	beq.n 0x3d1b0	@ 0003d1ac 00d0
.org 0x3d1ae
	b.n 0x3d2ac	@ 0003d1ae 7de0
.org 0x3d1b0
	ldrb r0, [r5, #16]	@ 0003d1b0 287c
.org 0x3d1b2
	cmp r0, #22	@ 0003d1b2 1628
.org 0x3d1b4
	bne.n 0x3d1c4	@ 0003d1b4 06d1
.org 0x3d1b6
	ldr r1, [pc, #8]	@ 0003d1b6 0249
.org 0x3d1b8
	adds r0, r5, #0	@ 0003d1b8 281c
.org 0x3d1ba
	bl 0x1cf00	@ 0003d1ba dff7a1fe
.org 0x3d1be
	b.n 0x3d1cc	@ 0003d1be 05e0
.org 0x3d1c0
	.byte 0x01,0x6c,0x00,0x00	@ 0003d1c0 data
.org 0x3d1c4
	ldr r1, [pc, #36]	@ 0003d1c4 0949
.org 0x3d1c6
	adds r0, r5, #0	@ 0003d1c6 281c
.org 0x3d1c8
	bl 0x1cf00	@ 0003d1c8 dff79afe
.org 0x3d1cc
	adds r0, r5, #0	@ 0003d1cc 281c
.org 0x3d1ce
	bl 0x1cff0	@ 0003d1ce dff70fff
.org 0x3d1d2
	ldrb r0, [r5, #10]	@ 0003d1d2 a87a
.org 0x3d1d4
	movs r1, #1	@ 0003d1d4 0121
.org 0x3d1d6
	orrs r1, r0	@ 0003d1d6 0143
.org 0x3d1d8
	strb r1, [r5, #10]	@ 0003d1d8 a972
.org 0x3d1da
	movs r0, #16	@ 0003d1da 1020
.org 0x3d1dc
	ands r1, r0	@ 0003d1dc 0140
.org 0x3d1de
	cmp r1, #0	@ 0003d1de 0029
.org 0x3d1e0
	beq.n 0x3d1f0	@ 0003d1e0 06d0
.org 0x3d1e2
	ldr r0, [r5, #84]	@ 0003d1e2 686d
.org 0x3d1e4
	movs r1, #136	@ 0003d1e4 8821
.org 0x3d1e6
	lsls r1, r1, #5	@ 0003d1e6 4901
.org 0x3d1e8
	adds r0, r0, r1	@ 0003d1e8 4018
.org 0x3d1ea
	b.n 0x3d1f6	@ 0003d1ea 04e0
.org 0x3d1ec
	.byte 0x03,0x6c,0x00,0x00	@ 0003d1ec data
.org 0x3d1f0
	ldr r0, [r5, #84]	@ 0003d1f0 686d
.org 0x3d1f2
	ldr r2, [pc, #56]	@ 0003d1f2 0e4a
.org 0x3d1f4
	adds r0, r0, r2	@ 0003d1f4 8018
.org 0x3d1f6
	str r0, [sp, #8]	@ 0003d1f6 0290
.org 0x3d1f8
	ldr r1, [r5, #88]	@ 0003d1f8 a96d
.org 0x3d1fa
	ldr r2, [pc, #52]	@ 0003d1fa 0d4a
.org 0x3d1fc
	adds r0, r1, r2	@ 0003d1fc 8818
.org 0x3d1fe
	str r0, [sp, #12]	@ 0003d1fe 0390
.org 0x3d200
	movs r0, #128	@ 0003d200 8020
.org 0x3d202
	lsls r0, r0, #4	@ 0003d202 0001
.org 0x3d204
	adds r1, r1, r0	@ 0003d204 0918
.org 0x3d206
	ldr r0, [sp, #8]	@ 0003d206 0298
.org 0x3d208
	bl 0x7c7c	@ 0003d208 caf738fd
.org 0x3d20c
	lsls r0, r0, #16	@ 0003d20c 0004
.org 0x3d20e
	cmp r0, #0	@ 0003d20e 0028
.org 0x3d210
	beq.n 0x3d292	@ 0003d210 3fd0
.org 0x3d212
	ldr r0, [sp, #8]	@ 0003d212 0298
.org 0x3d214
	ldr r1, [sp, #12]	@ 0003d214 0399
.org 0x3d216
	bl 0x8534	@ 0003d216 cbf78df9
.org 0x3d21a
	adds r2, r0, #0	@ 0003d21a 021c
.org 0x3d21c
	ldr r1, [sp, #12]	@ 0003d21c 0399
.org 0x3d21e
	subs r3, r2, r1	@ 0003d21e 531a
.org 0x3d220
	cmp r3, #0	@ 0003d220 002b
.org 0x3d222
	blt.n 0x3d238	@ 0003d222 09db
.org 0x3d224
	ldr r0, [pc, #12]	@ 0003d224 0348
.org 0x3d226
	cmp r3, r0	@ 0003d226 8342
.org 0x3d228
	ble.n 0x3d240	@ 0003d228 0add
.org 0x3d22a
	b.n 0x3d292	@ 0003d22a 32e0
.org 0x3d22c
	.byte 0x00,0xef,0xff,0xff	@ 0003d22c data
.org 0x3d230
	.byte 0x00,0xfe,0xff,0xff	@ 0003d230 data
.org 0x3d234
	.byte 0xff,0x0b,0x00,0x00	@ 0003d234 data
.org 0x3d238
	subs r1, r1, r2	@ 0003d238 891a
.org 0x3d23a
	ldr r0, [pc, #96]	@ 0003d23a 1848
.org 0x3d23c
	cmp r1, r0	@ 0003d23c 8142
.org 0x3d23e
	bgt.n 0x3d292	@ 0003d23e 28dc
.org 0x3d240
	str r2, [sp, #12]	@ 0003d240 0392
.org 0x3d242
	add r0, sp, #8	@ 0003d242 02a8
.org 0x3d244
	movs r1, #0	@ 0003d244 0021
.org 0x3d246
	movs r2, #0	@ 0003d246 0022
.org 0x3d248
	bl 0x4b160	@ 0003d248 0df08aff
.org 0x3d24c
	add r0, sp, #8	@ 0003d24c 02a8
.org 0x3d24e
	movs r1, #0	@ 0003d24e 0021
.org 0x3d250
	movs r2, #1	@ 0003d250 0122
.org 0x3d252
	bl 0x4b160	@ 0003d252 0df085ff
.org 0x3d256
	ldr r3, [pc, #72]	@ 0003d256 124b
.org 0x3d258
	ldr r1, [r3, #0]	@ 0003d258 1968
.org 0x3d25a
	ldr r0, [pc, #72]	@ 0003d25a 1248
.org 0x3d25c
	adds r2, r1, #0	@ 0003d25c 0a1c
.org 0x3d25e
	muls r2, r0	@ 0003d25e 4243
.org 0x3d260
	ldr r1, [pc, #68]	@ 0003d260 1149
.org 0x3d262
	adds r2, r2, r1	@ 0003d262 5218
.org 0x3d264
	lsls r2, r2, #1	@ 0003d264 5200
.org 0x3d266
	lsrs r0, r2, #1	@ 0003d266 5008
.org 0x3d268
	str r0, [r3, #0]	@ 0003d268 1860
.org 0x3d26a
	lsrs r2, r2, #17	@ 0003d26a 520c
.org 0x3d26c
	movs r0, #1	@ 0003d26c 0120
.org 0x3d26e
	ands r2, r0	@ 0003d26e 0240
.org 0x3d270
	add r0, sp, #8	@ 0003d270 02a8
.org 0x3d272
	movs r1, #4	@ 0003d272 0421
.org 0x3d274
	bl 0xd1bcc	@ 0003d274 94f0aafc
.org 0x3d278
	add r0, sp, #8	@ 0003d278 02a8
.org 0x3d27a
	movs r1, #5	@ 0003d27a 0521
.org 0x3d27c
	movs r2, #0	@ 0003d27c 0022
.org 0x3d27e
	bl 0xd1bcc	@ 0003d27e 94f0a5fc
.org 0x3d282
	add r0, sp, #8	@ 0003d282 02a8
.org 0x3d284
	movs r1, #5	@ 0003d284 0521
.org 0x3d286
	movs r2, #1	@ 0003d286 0122
.org 0x3d288
	bl 0xd1bcc	@ 0003d288 94f0a0fc
.org 0x3d28c
	movs r0, #168	@ 0003d28c a820
.org 0x3d28e
	bl 0x2b10	@ 0003d28e c5f73ffc
.org 0x3d292
	ldrb r0, [r5, #14]	@ 0003d292 a87b
.org 0x3d294
	adds r0, #1	@ 0003d294 0130
.org 0x3d296
	strb r0, [r5, #14]	@ 0003d296 a873
.org 0x3d298
	b.n 0x3d364	@ 0003d298 64e0
.org 0x3d29a
	.byte 0x00	@ 0003d29a data
.org 0x3d29b
	.byte 0x00	@ 0003d29b data
.org 0x3d29c
	.byte 0xff,0x0b,0x00,0x00	@ 0003d29c data
.org 0x3d2a0
	.byte 0x38,0xdc,0x02,0x02	@ 0003d2a0 data
.org 0x3d2a4
	.byte 0xfd,0x43,0x03,0x00	@ 0003d2a4 data
.org 0x3d2a8
	.byte 0xc3,0x9e,0x26,0x00	@ 0003d2a8 data
.org 0x3d2ac
	ldrb r1, [r5, #10]	@ 0003d2ac a97a
.org 0x3d2ae
	movs r0, #254	@ 0003d2ae fe20
.org 0x3d2b0
	ands r0, r1	@ 0003d2b0 0840
.org 0x3d2b2
	movs r1, #253	@ 0003d2b2 fd21
.org 0x3d2b4
	ands r0, r1	@ 0003d2b4 0840
.org 0x3d2b6
	strb r0, [r5, #10]	@ 0003d2b6 a872
.org 0x3d2b8
	adds r0, r5, #0	@ 0003d2b8 281c
.org 0x3d2ba
	adds r0, #140	@ 0003d2ba 8c30
.org 0x3d2bc
	str r2, [r0, #0]	@ 0003d2bc 0260
.org 0x3d2be
	adds r0, #4	@ 0003d2be 0430
.org 0x3d2c0
	str r2, [r0, #0]	@ 0003d2c0 0260
.org 0x3d2c2
	adds r0, #4	@ 0003d2c2 0430
.org 0x3d2c4
	strb r2, [r0, #0]	@ 0003d2c4 0270
.org 0x3d2c6
	ldrb r1, [r5, #10]	@ 0003d2c6 a97a
.org 0x3d2c8
	movs r0, #251	@ 0003d2c8 fb20
.org 0x3d2ca
	ands r0, r1	@ 0003d2ca 0840
.org 0x3d2cc
	strb r0, [r5, #10]	@ 0003d2cc a872
.org 0x3d2ce
	ldr r1, [pc, #16]	@ 0003d2ce 0449
.org 0x3d2d0
	ldrb r0, [r5, #9]	@ 0003d2d0 687a
.org 0x3d2d2
	lsls r0, r0, #2	@ 0003d2d2 8000
.org 0x3d2d4
	adds r0, r0, r1	@ 0003d2d4 4018
.org 0x3d2d6
	movs r1, #3	@ 0003d2d6 0321
.org 0x3d2d8
	str r1, [r5, #12]	@ 0003d2d8 e960
.org 0x3d2da
	ldr r0, [r0, #0]	@ 0003d2da 0068
.org 0x3d2dc
	ldr r0, [r0, #12]	@ 0003d2dc c068
.org 0x3d2de
	b.n 0x3d362	@ 0003d2de 40e0
.org 0x3d2e0
	.byte 0xf8,0x39,0x85,0x08	@ 0003d2e0 data
.org 0x3d2e4
	ldrb r1, [r5, #10]	@ 0003d2e4 a97a
.org 0x3d2e6
	movs r0, #254	@ 0003d2e6 fe20
.org 0x3d2e8
	ands r0, r1	@ 0003d2e8 0840
.org 0x3d2ea
	strb r0, [r5, #10]	@ 0003d2ea a872
.org 0x3d2ec
	ldrb r0, [r5, #18]	@ 0003d2ec a87c
.org 0x3d2ee
	cmp r0, #1	@ 0003d2ee 0128
.org 0x3d2f0
	bls.n 0x3d33c	@ 0003d2f0 24d9
.org 0x3d2f2
	adds r0, r5, #0	@ 0003d2f2 281c
.org 0x3d2f4
	bl 0x1cff0	@ 0003d2f4 dff77cfe
.org 0x3d2f8
	ldrb r0, [r5, #10]	@ 0003d2f8 a87a
.org 0x3d2fa
	movs r1, #1	@ 0003d2fa 0121
.org 0x3d2fc
	orrs r0, r1	@ 0003d2fc 0843
.org 0x3d2fe
	strb r0, [r5, #10]	@ 0003d2fe a872
.org 0x3d300
	adds r0, r5, #0	@ 0003d300 281c
.org 0x3d302
	adds r0, #116	@ 0003d302 7430
.org 0x3d304
	ldr r1, [pc, #48]	@ 0003d304 0c49
.org 0x3d306
	ldrb r2, [r5, #16]	@ 0003d306 2a7c
.org 0x3d308
	lsls r2, r2, #2	@ 0003d308 9200
.org 0x3d30a
	adds r2, r2, r1	@ 0003d30a 5218
.org 0x3d30c
	adds r1, r5, #0	@ 0003d30c 291c
.org 0x3d30e
	adds r1, #113	@ 0003d30e 7131
.org 0x3d310
	ldrb r1, [r1, #0]	@ 0003d310 0978
.org 0x3d312
	lsls r1, r1, #24	@ 0003d312 0906
.org 0x3d314
	asrs r1, r1, #24	@ 0003d314 0916
.org 0x3d316
	ldr r2, [r2, #0]	@ 0003d316 1268
.org 0x3d318
	lsls r1, r1, #2	@ 0003d318 8900
.org 0x3d31a
	adds r1, r1, r2	@ 0003d31a 8918
.org 0x3d31c
	ldr r1, [r1, #0]	@ 0003d31c 0968
.org 0x3d31e
	ldrb r2, [r4, #13]	@ 0003d31e 627b
.org 0x3d320
	ldrb r3, [r4, #12]	@ 0003d320 237b
.org 0x3d322
	ldrb r4, [r4, #14]	@ 0003d322 a47b
.org 0x3d324
	str r4, [sp, #0]	@ 0003d324 0094
.org 0x3d326
	movs r4, #1	@ 0003d326 0124
.org 0x3d328
	negs r4, r4	@ 0003d328 6442
.org 0x3d32a
	str r4, [sp, #4]	@ 0003d32a 0194
.org 0x3d32c
	bl 0x5794	@ 0003d32c c8f732fa
.org 0x3d330
	ldrb r0, [r5, #15]	@ 0003d330 e87b
.org 0x3d332
	adds r0, #1	@ 0003d332 0130
.org 0x3d334
	strb r0, [r5, #15]	@ 0003d334 e873
.org 0x3d336
	b.n 0x3d364	@ 0003d336 15e0
.org 0x3d338
	.byte 0x10,0x50,0x85,0x08	@ 0003d338 data
.org 0x3d33c
	adds r0, #1	@ 0003d33c 0130
