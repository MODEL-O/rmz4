@ FUN_080851fc  entry 0x080851fc  size 316
.thumb
.org 0x851fc
FUN_080851fc:
	push {r4, r5, r6, r7, lr}	@ 000851fc f0b5
.org 0x851fe
	sub sp, #16	@ 000851fe 84b0
.org 0x85200
	adds r6, r0, #0	@ 00085200 061c
.org 0x85202
	ldrb r0, [r6, #14]	@ 00085202 b07b
.org 0x85204
	cmp r0, #0	@ 00085204 0028
.org 0x85206
	beq.n 0x85210	@ 00085206 03d0
.org 0x85208
	cmp r0, #1	@ 00085208 0128
.org 0x8520a
	bne.n 0x8520e	@ 0008520a 00d1
.org 0x8520c
	b.n 0x85324	@ 0008520c 8ae0
.org 0x8520e
	b.n 0x8533c	@ 0008520e 95e0
.org 0x85210
	movs r2, #0	@ 00085210 0022
.org 0x85212
	ldr r0, [pc, #28]	@ 00085212 0748
.org 0x85214
	ldr r0, [r0, #0]	@ 00085214 0068
.org 0x85216
	ldr r0, [r0, #84]	@ 00085216 406d
.org 0x85218
	ldr r1, [r6, #84]	@ 00085218 716d
.org 0x8521a
	subs r0, r0, r1	@ 0008521a 401a
.org 0x8521c
	cmp r0, #0	@ 0008521c 0028
.org 0x8521e
	ble.n 0x85222	@ 0008521e 00dd
.org 0x85220
	movs r2, #1	@ 00085220 0122
.org 0x85222
	adds r7, r2, #0	@ 00085222 171c
.org 0x85224
	ldrb r0, [r6, #16]	@ 00085224 307c
.org 0x85226
	cmp r0, #1	@ 00085226 0128
.org 0x85228
	bne.n 0x85234	@ 00085228 04d1
.org 0x8522a
	eors r0, r7	@ 0008522a 7840
.org 0x8522c
	b.n 0x85238	@ 0008522c 04e0
.org 0x8522e
	.byte 0x00	@ 0008522e data
.org 0x8522f
	.byte 0x00	@ 0008522f data
.org 0x85230
	.byte 0xf0,0xdb,0x02,0x02	@ 00085230 data
.org 0x85234
	lsls r0, r7, #24	@ 00085234 3806
.org 0x85236
	lsrs r0, r0, #24	@ 00085236 000e
.org 0x85238
	adds r7, r0, #0	@ 00085238 071c
.org 0x8523a
	adds r2, r7, #0	@ 0008523a 3a1c
.org 0x8523c
	cmp r7, #0	@ 0008523c 002f
.org 0x8523e
	beq.n 0x85248	@ 0008523e 03d0
.org 0x85240
	ldrb r1, [r6, #10]	@ 00085240 b17a
.org 0x85242
	movs r0, #16	@ 00085242 1020
.org 0x85244
	orrs r0, r1	@ 00085244 0843
.org 0x85246
	b.n 0x8524e	@ 00085246 02e0
.org 0x85248
	ldrb r1, [r6, #10]	@ 00085248 b17a
.org 0x8524a
	movs r0, #239	@ 0008524a ef20
.org 0x8524c
	ands r0, r1	@ 0008524c 0840
.org 0x8524e
	strb r0, [r6, #10]	@ 0008524e b072
.org 0x85250
	movs r1, #1	@ 00085250 0121
.org 0x85252
	ands r1, r2	@ 00085252 1140
.org 0x85254
	adds r0, r6, #0	@ 00085254 301c
.org 0x85256
	adds r0, #76	@ 00085256 4c30
.org 0x85258
	movs r4, #0	@ 00085258 0024
.org 0x8525a
	strb r1, [r0, #0]	@ 0008525a 0170
.org 0x8525c
	adds r3, r6, #0	@ 0008525c 331c
.org 0x8525e
	adds r3, #74	@ 0008525e 4a33
.org 0x85260
	lsls r1, r1, #4	@ 00085260 0901
.org 0x85262
	ldrb r2, [r3, #0]	@ 00085262 1a78
.org 0x85264
	movs r0, #17	@ 00085264 1120
.org 0x85266
	negs r0, r0	@ 00085266 4042
.org 0x85268
	ands r0, r2	@ 00085268 1040
.org 0x8526a
	orrs r0, r1	@ 0008526a 0843
.org 0x8526c
	strb r0, [r3, #0]	@ 0008526c 1870
.org 0x8526e
	lsls r1, r7, #8	@ 0008526e 3902
.org 0x85270
	ldr r0, [r6, #84]	@ 00085270 706d
.org 0x85272
	subs r0, r0, r1	@ 00085272 401a
.org 0x85274
	str r0, [r6, #84]	@ 00085274 7065
.org 0x85276
	ldr r1, [pc, #72]	@ 00085276 1249
.org 0x85278
	ldrb r0, [r6, #16]	@ 00085278 307c
.org 0x8527a
	adds r5, r6, #0	@ 0008527a 351c
.org 0x8527c
	adds r5, #184	@ 0008527c b835
.org 0x8527e
	lsls r0, r0, #1	@ 0008527e 4000
.org 0x85280
	ldrb r2, [r5, #0]	@ 00085280 2a78
.org 0x85282
	adds r0, r0, r2	@ 00085282 8018
.org 0x85284
	lsls r0, r0, #1	@ 00085284 4000
.org 0x85286
	adds r0, r0, r1	@ 00085286 4018
.org 0x85288
	ldrh r1, [r0, #0]	@ 00085288 0188
.org 0x8528a
	adds r0, r6, #0	@ 0008528a 301c
.org 0x8528c
	bl 0x1cf00	@ 0008528c 97f738fe
.org 0x85290
	adds r0, r6, #0	@ 00085290 301c
.org 0x85292
	adds r0, #140	@ 00085292 8c30
.org 0x85294
	str r4, [r0, #0]	@ 00085294 0460
.org 0x85296
	adds r0, #4	@ 00085296 0430
.org 0x85298
	str r4, [r0, #0]	@ 00085298 0460
.org 0x8529a
	adds r0, #4	@ 0008529a 0430
.org 0x8529c
	strb r4, [r0, #0]	@ 0008529c 0470
.org 0x8529e
	ldrb r1, [r6, #10]	@ 0008529e b17a
.org 0x852a0
	movs r0, #251	@ 000852a0 fb20
.org 0x852a2
	ands r0, r1	@ 000852a2 0840
.org 0x852a4
	strb r0, [r6, #10]	@ 000852a4 b072
.org 0x852a6
	ldr r0, [r6, #84]	@ 000852a6 706d
.org 0x852a8
	str r0, [sp, #8]	@ 000852a8 0290
.org 0x852aa
	ldr r0, [r6, #88]	@ 000852aa b06d
.org 0x852ac
	str r0, [sp, #12]	@ 000852ac 0390
.org 0x852ae
	ldrb r0, [r6, #16]	@ 000852ae 307c
.org 0x852b0
	cmp r0, #1	@ 000852b0 0128
.org 0x852b2
	bne.n 0x852c4	@ 000852b2 07d1
.org 0x852b4
	adds r3, r7, #0	@ 000852b4 3b1c
.org 0x852b6
	eors r3, r0	@ 000852b6 4340
.org 0x852b8
	movs r0, #255	@ 000852b8 ff20
.org 0x852ba
	ands r3, r0	@ 000852ba 0340
.org 0x852bc
	b.n 0x852c8	@ 000852bc 04e0
.org 0x852be
	.byte 0x00	@ 000852be data
.org 0x852bf
	.byte 0x00	@ 000852bf data
.org 0x852c0
	.byte 0xba,0xeb,0x85,0x08	@ 000852c0 data
.org 0x852c4
	movs r3, #255	@ 000852c4 ff23
.org 0x852c6
	ands r3, r7	@ 000852c6 3b40
.org 0x852c8
	movs r0, #0	@ 000852c8 0020
.org 0x852ca
	add r1, sp, #8	@ 000852ca 02a9
.org 0x852cc
	movs r2, #128	@ 000852cc 8022
.org 0x852ce
	lsls r2, r2, #2	@ 000852ce 9200
.org 0x852d0
	bl 0xd0dc4	@ 000852d0 4bf078fd
.org 0x852d4
	movs r1, #96	@ 000852d4 6021
.org 0x852d6
	str r1, [sp, #8]	@ 000852d6 0291
.org 0x852d8
	ldrb r0, [r6, #16]	@ 000852d8 307c
.org 0x852da
	cmp r0, #1	@ 000852da 0128
.org 0x852dc
	bne.n 0x852ec	@ 000852dc 06d1
.org 0x852de
	eors r0, r7	@ 000852de 7840
.org 0x852e0
	lsls r1, r0, #1	@ 000852e0 4100
.org 0x852e2
	adds r1, r1, r0	@ 000852e2 0918
.org 0x852e4
	lsls r1, r1, #6	@ 000852e4 8901
.org 0x852e6
	movs r0, #96	@ 000852e6 6020
.org 0x852e8
	subs r0, r0, r1	@ 000852e8 401a
.org 0x852ea
	b.n 0x852f4	@ 000852ea 03e0
.org 0x852ec
	lsls r0, r7, #1	@ 000852ec 7800
.org 0x852ee
	adds r0, r0, r7	@ 000852ee c019
.org 0x852f0
	lsls r0, r0, #6	@ 000852f0 8001
.org 0x852f2
	subs r0, r1, r0	@ 000852f2 081a
.org 0x852f4
	str r0, [sp, #8]	@ 000852f4 0290
.org 0x852f6
	movs r0, #96	@ 000852f6 6020
.org 0x852f8
	str r0, [sp, #12]	@ 000852f8 0390
.org 0x852fa
	adds r1, r6, #0	@ 000852fa 311c
.org 0x852fc
	adds r1, #84	@ 000852fc 5431
.org 0x852fe
	ldrb r0, [r6, #16]	@ 000852fe 307c
.org 0x85300
	lsls r0, r0, #1	@ 00085300 4000
.org 0x85302
	ldrb r5, [r5, #0]	@ 00085302 2d78
.org 0x85304
	adds r0, r0, r5	@ 00085304 4019
.org 0x85306
	lsls r0, r0, #1	@ 00085306 4000
.org 0x85308
	ldr r2, [pc, #56]	@ 00085308 0e4a
.org 0x8530a
	adds r0, r0, r2	@ 0008530a 8018
.org 0x8530c
	str r0, [sp, #0]	@ 0008530c 0090
.org 0x8530e
	movs r4, #24	@ 0008530e 1824
.org 0x85310
	str r4, [sp, #4]	@ 00085310 0194
.org 0x85312
	adds r0, r6, #0	@ 00085312 301c
.org 0x85314
	add r2, sp, #8	@ 00085314 02aa
.org 0x85316
	movs r3, #0	@ 00085316 0023
.org 0x85318
	bl 0xd76bc	@ 00085318 52f0d0f9
.org 0x8531c
	strb r4, [r6, #18]	@ 0008531c b474
.org 0x8531e
	ldrb r0, [r6, #14]	@ 0008531e b07b
.org 0x85320
	adds r0, #1	@ 00085320 0130
.org 0x85322
	strb r0, [r6, #14]	@ 00085322 b073
.org 0x85324
	adds r0, r6, #0	@ 00085324 301c
.org 0x85326
	bl 0x1cff0	@ 00085326 97f763fe
.org 0x8532a
	ldrb r0, [r6, #18]	@ 0008532a b07c
.org 0x8532c
	subs r0, #1	@ 0008532c 0138
.org 0x8532e
	strb r0, [r6, #18]	@ 0008532e b074
.org 0x85330
	lsls r0, r0, #24	@ 00085330 0006
.org 0x85332
	cmp r0, #0	@ 00085332 0028
.org 0x85334
	bne.n 0x8533c	@ 00085334 02d1
.org 0x85336
	adds r0, r6, #0	@ 00085336 301c
