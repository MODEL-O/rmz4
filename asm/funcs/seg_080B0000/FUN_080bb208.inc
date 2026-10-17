@ FUN_080bb208  entry 0x080bb208  size 138
.thumb
.org 0xbb208
FUN_080bb208:
	push {r4, r5, lr}	@ 000bb208 30b5
.org 0xbb20a
	adds r4, r0, #0	@ 000bb20a 041c
.org 0xbb20c
	ldr r5, [r4, #40]	@ 000bb20c a56a
.org 0xbb20e
	ldrb r0, [r4, #15]	@ 000bb20e e07b
.org 0xbb210
	cmp r0, #0	@ 000bb210 0028
.org 0xbb212
	bne.n 0xbb24c	@ 000bb212 1bd1
.org 0xbb214
	movs r0, #202	@ 000bb214 ca20
.org 0xbb216
	lsls r0, r0, #1	@ 000bb216 4000
.org 0xbb218
	bl 0x2b10	@ 000bb218 47f77afc
.org 0xbb21c
	adds r0, r4, #0	@ 000bb21c 201c
.org 0xbb21e
	adds r0, #116	@ 000bb21e 7430
.org 0xbb220
	ldr r1, [pc, #112]	@ 000bb220 1c49
.org 0xbb222
	bl 0x5784	@ 000bb222 4af7affa
.org 0xbb226
	movs r1, #182	@ 000bb226 b621
.org 0xbb228
	lsls r1, r1, #8	@ 000bb228 0902
.org 0xbb22a
	adds r0, r4, #0	@ 000bb22a 201c
.org 0xbb22c
	bl 0x1cf00	@ 000bb22c 61f768fe
.org 0xbb230
	ldr r1, [r4, #88]	@ 000bb230 a16d
.org 0xbb232
	str r1, [r4, #96]	@ 000bb232 2166
.org 0xbb234
	adds r0, r5, #0	@ 000bb234 281c
.org 0xbb236
	adds r0, #184	@ 000bb236 b830
.org 0xbb238
	ldr r2, [pc, #92]	@ 000bb238 174a
.org 0xbb23a
	adds r1, r1, r2	@ 000bb23a 8918
.org 0xbb23c
	ldr r0, [r0, #0]	@ 000bb23c 0068
.org 0xbb23e
	subs r0, r0, r1	@ 000bb23e 401a
.org 0xbb240
	str r0, [r4, #104]	@ 000bb240 a066
.org 0xbb242
	movs r0, #16	@ 000bb242 1020
.org 0xbb244
	strb r0, [r4, #18]	@ 000bb244 a074
.org 0xbb246
	ldrb r0, [r4, #15]	@ 000bb246 e07b
.org 0xbb248
	adds r0, #1	@ 000bb248 0130
.org 0xbb24a
	strb r0, [r4, #15]	@ 000bb24a e073
.org 0xbb24c
	adds r0, r4, #0	@ 000bb24c 201c
.org 0xbb24e
	bl 0x1cff0	@ 000bb24e 61f7cffe
.org 0xbb252
	ldrb r0, [r4, #18]	@ 000bb252 a07c
.org 0xbb254
	subs r2, r0, #1	@ 000bb254 421e
.org 0xbb256
	strb r2, [r4, #18]	@ 000bb256 a274
.org 0xbb258
	ldrb r1, [r4, #18]	@ 000bb258 a17c
.org 0xbb25a
	movs r0, #16	@ 000bb25a 1020
.org 0xbb25c
	subs r0, r0, r1	@ 000bb25c 401a
.org 0xbb25e
	lsls r0, r0, #26	@ 000bb25e 8006
.org 0xbb260
	ldr r1, [pc, #56]	@ 000bb260 0e49
.org 0xbb262
	lsrs r0, r0, #23	@ 000bb262 c00d
.org 0xbb264
	adds r0, r0, r1	@ 000bb264 4018
.org 0xbb266
	movs r3, #0	@ 000bb266 0023
.org 0xbb268
	ldrsh r1, [r0, r3]	@ 000bb268 c15e
.org 0xbb26a
	ldr r0, [r4, #104]	@ 000bb26a a06e
.org 0xbb26c
	muls r0, r1	@ 000bb26c 4843
.org 0xbb26e
	cmp r0, #0	@ 000bb26e 0028
.org 0xbb270
	bge.n 0xbb274	@ 000bb270 00da
.org 0xbb272
	adds r0, #255	@ 000bb272 ff30
.org 0xbb274
	asrs r0, r0, #8	@ 000bb274 0012
.org 0xbb276
	ldr r1, [r4, #96]	@ 000bb276 216e
.org 0xbb278
	adds r1, r1, r0	@ 000bb278 0918
.org 0xbb27a
	str r1, [r4, #88]	@ 000bb27a a165
.org 0xbb27c
	lsls r0, r2, #24	@ 000bb27c 1006
.org 0xbb27e
	lsrs r1, r0, #24	@ 000bb27e 010e
.org 0xbb280
	cmp r1, #0	@ 000bb280 0029
.org 0xbb282
	bne.n 0xbb28c	@ 000bb282 03d1
.org 0xbb284
	movs r0, #1	@ 000bb284 0120
.org 0xbb286
	strb r0, [r4, #13]	@ 000bb286 6073
.org 0xbb288
	strb r1, [r4, #14]	@ 000bb288 a173
.org 0xbb28a
	strb r1, [r4, #15]	@ 000bb28a e173
.org 0xbb28c
	pop {r4, r5}	@ 000bb28c 30bc
.org 0xbb28e
	pop {r0}	@ 000bb28e 01bc
.org 0xbb290
	bx r0	@ 000bb290 0047
