@ FUN_080671ec  entry 0x080671ec  size 294
.thumb
.org 0x671ec
FUN_080671ec:
	push {r4, r5, lr}	@ 000671ec 30b5
.org 0x671ee
	adds r4, r0, #0	@ 000671ee 041c
.org 0x671f0
	ldrb r0, [r4, #14]	@ 000671f0 a07b
.org 0x671f2
	cmp r0, #0	@ 000671f2 0028
.org 0x671f4
	bne.n 0x6725a	@ 000671f4 31d1
.org 0x671f6
	ldr r1, [pc, #72]	@ 000671f6 1249
.org 0x671f8
	adds r0, r4, #0	@ 000671f8 201c
.org 0x671fa
	bl 0x1cf00	@ 000671fa b5f781fe
.org 0x671fe
	movs r3, #0	@ 000671fe 0023
.org 0x67200
	ldr r0, [pc, #64]	@ 00067200 1048
.org 0x67202
	ldr r2, [r0, #0]	@ 00067202 0268
.org 0x67204
	ldr r1, [r4, #84]	@ 00067204 616d
.org 0x67206
	ldr r0, [r2, #84]	@ 00067206 506d
.org 0x67208
	cmp r1, r0	@ 00067208 8142
.org 0x6720a
	bge.n 0x6720e	@ 0006720a 00da
.org 0x6720c
	movs r3, #1	@ 0006720c 0123
.org 0x6720e
	adds r0, r4, #0	@ 0006720e 201c
.org 0x67210
	adds r0, #76	@ 00067210 4c30
.org 0x67212
	strb r3, [r0, #0]	@ 00067212 0370
.org 0x67214
	movs r3, #0	@ 00067214 0023
.org 0x67216
	ldr r1, [r4, #84]	@ 00067216 616d
.org 0x67218
	ldr r0, [r2, #84]	@ 00067218 506d
.org 0x6721a
	cmp r1, r0	@ 0006721a 8142
.org 0x6721c
	bge.n 0x67220	@ 0006721c 00da
.org 0x6721e
	movs r3, #1	@ 0006721e 0123
.org 0x67220
	adds r5, r4, #0	@ 00067220 251c
.org 0x67222
	adds r5, #74	@ 00067222 4a35
.org 0x67224
	lsls r2, r3, #4	@ 00067224 1a01
.org 0x67226
	ldrb r1, [r5, #0]	@ 00067226 2978
.org 0x67228
	movs r0, #17	@ 00067228 1120
.org 0x6722a
	negs r0, r0	@ 0006722a 4042
.org 0x6722c
	ands r0, r1	@ 0006722c 0840
.org 0x6722e
	orrs r0, r2	@ 0006722e 1043
.org 0x67230
	strb r0, [r5, #0]	@ 00067230 2870
.org 0x67232
	cmp r3, #0	@ 00067232 002b
.org 0x67234
	beq.n 0x67248	@ 00067234 08d0
.org 0x67236
	ldrb r0, [r4, #10]	@ 00067236 a07a
.org 0x67238
	movs r1, #16	@ 00067238 1021
.org 0x6723a
	orrs r0, r1	@ 0006723a 0843
.org 0x6723c
	b.n 0x6724e	@ 0006723c 07e0
.org 0x6723e
	.byte 0x00	@ 0006723e data
.org 0x6723f
	.byte 0x00	@ 0006723f data
.org 0x67240
	.byte 0x02,0xa9,0x00,0x00	@ 00067240 data
.org 0x67244
	.byte 0xf0,0xdb,0x02,0x02	@ 00067244 data
.org 0x67248
	ldrb r1, [r4, #10]	@ 00067248 a17a
.org 0x6724a
	movs r0, #239	@ 0006724a ef20
.org 0x6724c
	ands r0, r1	@ 0006724c 0840
.org 0x6724e
	strb r0, [r4, #10]	@ 0006724e a072
.org 0x67250
	movs r0, #0	@ 00067250 0020
.org 0x67252
	strb r0, [r4, #15]	@ 00067252 e073
.org 0x67254
	ldrb r0, [r4, #14]	@ 00067254 a07b
.org 0x67256
	adds r0, #1	@ 00067256 0130
.org 0x67258
	strb r0, [r4, #14]	@ 00067258 a073
.org 0x6725a
	adds r0, r4, #0	@ 0006725a 201c
.org 0x6725c
	bl 0x1cff0	@ 0006725c b5f7c8fe
.org 0x67260
	ldrb r0, [r4, #15]	@ 00067260 e07b
.org 0x67262
	cmp r0, #0	@ 00067262 0028
.org 0x67264
	bne.n 0x672d4	@ 00067264 36d1
.org 0x67266
	adds r0, r4, #0	@ 00067266 201c
.org 0x67268
	adds r0, #113	@ 00067268 7130
.org 0x6726a
	ldrb r0, [r0, #0]	@ 0006726a 0078
.org 0x6726c
	lsls r0, r0, #24	@ 0006726c 0006
.org 0x6726e
	asrs r0, r0, #24	@ 0006726e 0016
.org 0x67270
	cmp r0, #4	@ 00067270 0428
.org 0x67272
	ble.n 0x67326	@ 00067272 58dd
.org 0x67274
	adds r2, r4, #0	@ 00067274 221c
.org 0x67276
	adds r2, #180	@ 00067276 b432
.org 0x67278
	adds r0, r4, #0	@ 00067278 201c
.org 0x6727a
	adds r0, #218	@ 0006727a da30
.org 0x6727c
	ldrb r0, [r0, #0]	@ 0006727c 0078
.org 0x6727e
	cmp r0, #0	@ 0006727e 0028
.org 0x67280
	bne.n 0x67294	@ 00067280 08d1
.org 0x67282
	ldr r0, [r2, #16]	@ 00067282 1069
.org 0x67284
	ldr r1, [r4, #84]	@ 00067284 616d
.org 0x67286
	ldr r0, [pc, #8]	@ 00067286 0248
.org 0x67288
	ldr r0, [r0, #0]	@ 00067288 0068
.org 0x6728a
	ldr r0, [r0, #84]	@ 0006728a 406d
.org 0x6728c
	b.n 0x672ac	@ 0006728c 0ee0
.org 0x6728e
	.byte 0x00	@ 0006728e data
.org 0x6728f
	.byte 0x00	@ 0006728f data
.org 0x67290
	.byte 0xf0,0xdb,0x02,0x02	@ 00067290 data
.org 0x67294
	ldr r0, [r2, #16]	@ 00067294 1069
.org 0x67296
	ldr r1, [r4, #84]	@ 00067296 616d
.org 0x67298
	cmp r0, r1	@ 00067298 8842
.org 0x6729a
	ble.n 0x672a6	@ 0006729a 04dd
.org 0x6729c
	movs r0, #160	@ 0006729c a020
.org 0x6729e
	lsls r0, r0, #6	@ 0006729e 8001
.org 0x672a0
	adds r1, r1, r0	@ 000672a0 0918
.org 0x672a2
	ldr r0, [r2, #12]	@ 000672a2 d068
.org 0x672a4
	b.n 0x672ac	@ 000672a4 02e0
.org 0x672a6
	ldr r0, [pc, #36]	@ 000672a6 0948
.org 0x672a8
	adds r1, r1, r0	@ 000672a8 0918
.org 0x672aa
	ldr r0, [r2, #8]	@ 000672aa 9068
.org 0x672ac
	subs r0, r0, r1	@ 000672ac 401a
.org 0x672ae
	str r0, [r4, #92]	@ 000672ae e065
.org 0x672b0
	ldr r0, [r4, #92]	@ 000672b0 e06d
.org 0x672b2
	asrs r0, r0, #1	@ 000672b2 4010
.org 0x672b4
	cmp r0, #0	@ 000672b4 0028
.org 0x672b6
	bge.n 0x672ba	@ 000672b6 00da
.org 0x672b8
	adds r0, #31	@ 000672b8 1f30
.org 0x672ba
	asrs r0, r0, #5	@ 000672ba 4011
.org 0x672bc
	str r0, [r4, #92]	@ 000672bc e065
.org 0x672be
	ldr r0, [pc, #16]	@ 000672be 0448
.org 0x672c0
	str r0, [r4, #96]	@ 000672c0 2066
.org 0x672c2
	ldrb r0, [r4, #15]	@ 000672c2 e07b
.org 0x672c4
	adds r0, #1	@ 000672c4 0130
.org 0x672c6
	strb r0, [r4, #15]	@ 000672c6 e073
.org 0x672c8
	b.n 0x67326	@ 000672c8 2de0
.org 0x672ca
	.byte 0x00	@ 000672ca data
.org 0x672cb
	.byte 0x00	@ 000672cb data
.org 0x672cc
	.byte 0x00,0xd8,0xff,0xff	@ 000672cc data
.org 0x672d0
	.byte 0x00,0xf8,0xff,0xff	@ 000672d0 data
.org 0x672d4
	cmp r0, #1	@ 000672d4 0128
.org 0x672d6
	bne.n 0x672f6	@ 000672d6 0ed1
.org 0x672d8
	adds r0, r4, #0	@ 000672d8 201c
.org 0x672da
	adds r0, #113	@ 000672da 7130
.org 0x672dc
	ldrb r0, [r0, #0]	@ 000672dc 0078
.org 0x672de
	lsls r0, r0, #24	@ 000672de 0006
.org 0x672e0
	asrs r0, r0, #24	@ 000672e0 0016
.org 0x672e2
	cmp r0, #5	@ 000672e2 0528
.org 0x672e4
	ble.n 0x672f6	@ 000672e4 07dd
.org 0x672e6
	adds r0, r4, #0	@ 000672e6 201c
.org 0x672e8
	adds r0, #116	@ 000672e8 7430
.org 0x672ea
	ldr r1, [pc, #64]	@ 000672ea 1049
.org 0x672ec
	bl 0x5784	@ 000672ec 9ef74afa
.org 0x672f0
	ldrb r0, [r4, #15]	@ 000672f0 e07b
.org 0x672f2
	adds r0, #1	@ 000672f2 0130
.org 0x672f4
	strb r0, [r4, #15]	@ 000672f4 e073
.org 0x672f6
	ldr r0, [r4, #84]	@ 000672f6 606d
.org 0x672f8
	ldr r1, [r4, #92]	@ 000672f8 e16d
.org 0x672fa
	adds r0, r0, r1	@ 000672fa 4018
.org 0x672fc
	str r0, [r4, #84]	@ 000672fc 6065
.org 0x672fe
	ldr r1, [r4, #88]	@ 000672fe a16d
.org 0x67300
	ldr r0, [r4, #96]	@ 00067300 206e
.org 0x67302
	adds r1, r1, r0	@ 00067302 0918
.org 0x67304
	str r1, [r4, #88]	@ 00067304 a165
.org 0x67306
	adds r0, #64	@ 00067306 4030
.org 0x67308
	str r0, [r4, #96]	@ 00067308 2066
.org 0x6730a
	adds r5, r4, #0	@ 0006730a 251c
.org 0x6730c
	adds r5, #180	@ 0006730c b435
.org 0x6730e
	ldr r0, [r5, #4]	@ 0006730e 6868
.org 0x67310
	cmp r1, r0	@ 00067310 8142
