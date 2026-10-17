@ FUN_0803a19c  entry 0x0803a19c  size 270
.thumb
.org 0x3a19c
FUN_0803a19c:
	push {r4, r5, r6, r7, lr}	@ 0003a19c f0b5
.org 0x3a19e
	adds r5, r0, #0	@ 0003a19e 051c
.org 0x3a1a0
	adds r0, #180	@ 0003a1a0 b430
.org 0x3a1a2
	movs r2, #162	@ 0003a1a2 a222
.org 0x3a1a4
	lsls r2, r2, #1	@ 0003a1a4 5200
.org 0x3a1a6
	adds r1, r5, r2	@ 0003a1a6 a918
.org 0x3a1a8
	ldrb r4, [r1, #0]	@ 0003a1a8 0c78
.org 0x3a1aa
	ldrb r0, [r0, #12]	@ 0003a1aa 007b
.org 0x3a1ac
	cmp r0, r4	@ 0003a1ac a042
.org 0x3a1ae
	bne.n 0x3a1b6	@ 0003a1ae 02d1
.org 0x3a1b0
	adds r0, r5, #0	@ 0003a1b0 281c
.org 0x3a1b2
	movs r1, #0	@ 0003a1b2 0021
.org 0x3a1b4
	b.n 0x3a1ba	@ 0003a1b4 01e0
.org 0x3a1b6
	adds r0, r5, #0	@ 0003a1b6 281c
.org 0x3a1b8
	movs r1, #1	@ 0003a1b8 0121
.org 0x3a1ba
	bl 0x3a428	@ 0003a1ba 00f035f9
.org 0x3a1be
	lsls r0, r0, #24	@ 0003a1be 0006
.org 0x3a1c0
	lsrs r2, r0, #24	@ 0003a1c0 020e
.org 0x3a1c2
	negs r0, r4	@ 0003a1c2 6042
.org 0x3a1c4
	orrs r0, r4	@ 0003a1c4 2043
.org 0x3a1c6
	lsrs r7, r0, #31	@ 0003a1c6 c70f
.org 0x3a1c8
	cmp r7, #0	@ 0003a1c8 002f
.org 0x3a1ca
	beq.n 0x3a1d6	@ 0003a1ca 04d0
.org 0x3a1cc
	ldrb r0, [r5, #13]	@ 0003a1cc 687b
.org 0x3a1ce
	cmp r0, #3	@ 0003a1ce 0328
.org 0x3a1d0
	bne.n 0x3a1d6	@ 0003a1d0 01d1
.org 0x3a1d2
	movs r0, #0	@ 0003a1d2 0020
.org 0x3a1d4
	b.n 0x3a2b2	@ 0003a1d4 6de0
.org 0x3a1d6
	cmp r2, #2	@ 0003a1d6 022a
.org 0x3a1d8
	beq.n 0x3a242	@ 0003a1d8 33d0
.org 0x3a1da
	ldr r1, [pc, #84]	@ 0003a1da 1549
.org 0x3a1dc
	adds r0, r5, r1	@ 0003a1dc 6818
.org 0x3a1de
	ldrb r1, [r0, #0]	@ 0003a1de 0178
.org 0x3a1e0
	adds r6, r0, #0	@ 0003a1e0 061c
.org 0x3a1e2
	cmp r1, #3	@ 0003a1e2 0329
.org 0x3a1e4
	bne.n 0x3a242	@ 0003a1e4 2dd1
.org 0x3a1e6
	ldrb r0, [r5, #13]	@ 0003a1e6 687b
.org 0x3a1e8
	cmp r0, #3	@ 0003a1e8 0328
.org 0x3a1ea
	bne.n 0x3a23c	@ 0003a1ea 27d1
.org 0x3a1ec
	movs r2, #154	@ 0003a1ec 9a22
.org 0x3a1ee
	lsls r2, r2, #2	@ 0003a1ee 9200
.org 0x3a1f0
	adds r4, r5, r2	@ 0003a1f0 ac18
.org 0x3a1f2
	ldrb r1, [r4, #0]	@ 0003a1f2 2178
.org 0x3a1f4
	movs r2, #1	@ 0003a1f4 0122
.org 0x3a1f6
	adds r0, r2, #0	@ 0003a1f6 101c
.org 0x3a1f8
	ands r0, r1	@ 0003a1f8 0840
.org 0x3a1fa
	adds r1, r5, #0	@ 0003a1fa 291c
.org 0x3a1fc
	adds r1, #76	@ 0003a1fc 4c31
.org 0x3a1fe
	strb r0, [r1, #0]	@ 0003a1fe 0870
.org 0x3a200
	ldrb r0, [r4, #0]	@ 0003a200 2078
.org 0x3a202
	movs r1, #74	@ 0003a202 4a21
.org 0x3a204
	adds r1, r1, r5	@ 0003a204 4919
.org 0x3a206
	mov ip, r1	@ 0003a206 8c46
.org 0x3a208
	adds r1, r2, #0	@ 0003a208 111c
.org 0x3a20a
	ands r1, r0	@ 0003a20a 0140
.org 0x3a20c
	lsls r1, r1, #4	@ 0003a20c 0901
.org 0x3a20e
	mov r0, ip	@ 0003a20e 6046
.org 0x3a210
	ldrb r3, [r0, #0]	@ 0003a210 0378
.org 0x3a212
	movs r0, #17	@ 0003a212 1120
.org 0x3a214
	negs r0, r0	@ 0003a214 4042
.org 0x3a216
	ands r0, r3	@ 0003a216 1840
.org 0x3a218
	orrs r0, r1	@ 0003a218 0843
.org 0x3a21a
	mov r1, ip	@ 0003a21a 6146
.org 0x3a21c
	strb r0, [r1, #0]	@ 0003a21c 0870
.org 0x3a21e
	ldrb r0, [r4, #0]	@ 0003a21e 2078
.org 0x3a220
	ands r2, r0	@ 0003a220 0240
.org 0x3a222
	cmp r2, #0	@ 0003a222 002a
.org 0x3a224
	beq.n 0x3a234	@ 0003a224 06d0
.org 0x3a226
	ldrb r0, [r5, #10]	@ 0003a226 a87a
.org 0x3a228
	movs r1, #16	@ 0003a228 1021
.org 0x3a22a
	orrs r0, r1	@ 0003a22a 0843
.org 0x3a22c
	b.n 0x3a23a	@ 0003a22c 05e0
.org 0x3a22e
	.byte 0x00	@ 0003a22e data
.org 0x3a22f
	.byte 0x00	@ 0003a22f data
.org 0x3a230
	.byte 0x67,0x02,0x00,0x00	@ 0003a230 data
.org 0x3a234
	ldrb r1, [r5, #10]	@ 0003a234 a97a
.org 0x3a236
	movs r0, #239	@ 0003a236 ef20
.org 0x3a238
	ands r0, r1	@ 0003a238 0840
.org 0x3a23a
	strb r0, [r5, #10]	@ 0003a23a a872
.org 0x3a23c
	movs r2, #1	@ 0003a23c 0122
.org 0x3a23e
	movs r0, #0	@ 0003a23e 0020
.org 0x3a240
	strb r0, [r6, #0]	@ 0003a240 3070
.org 0x3a242
	ldr r1, [pc, #80]	@ 0003a242 1449
.org 0x3a244
	adds r0, r5, r1	@ 0003a244 6818
.org 0x3a246
	ldrb r1, [r0, #0]	@ 0003a246 0178
.org 0x3a248
	adds r6, r0, #0	@ 0003a248 061c
.org 0x3a24a
	cmp r1, #6	@ 0003a24a 0629
.org 0x3a24c
	bne.n 0x3a2aa	@ 0003a24c 2dd1
.org 0x3a24e
	ldrb r0, [r5, #13]	@ 0003a24e 687b
.org 0x3a250
	cmp r0, #3	@ 0003a250 0328
.org 0x3a252
	bne.n 0x3a2a4	@ 0003a252 27d1
.org 0x3a254
	ldr r2, [pc, #64]	@ 0003a254 104a
.org 0x3a256
	adds r4, r5, r2	@ 0003a256 ac18
.org 0x3a258
	ldrb r1, [r4, #0]	@ 0003a258 2178
.org 0x3a25a
	movs r2, #1	@ 0003a25a 0122
.org 0x3a25c
	adds r0, r2, #0	@ 0003a25c 101c
.org 0x3a25e
	ands r0, r1	@ 0003a25e 0840
.org 0x3a260
	adds r1, r5, #0	@ 0003a260 291c
.org 0x3a262
	adds r1, #76	@ 0003a262 4c31
.org 0x3a264
	strb r0, [r1, #0]	@ 0003a264 0870
.org 0x3a266
	ldrb r0, [r4, #0]	@ 0003a266 2078
.org 0x3a268
	movs r1, #74	@ 0003a268 4a21
.org 0x3a26a
	adds r1, r1, r5	@ 0003a26a 4919
.org 0x3a26c
	mov ip, r1	@ 0003a26c 8c46
.org 0x3a26e
	adds r1, r2, #0	@ 0003a26e 111c
.org 0x3a270
	ands r1, r0	@ 0003a270 0140
.org 0x3a272
	lsls r1, r1, #4	@ 0003a272 0901
.org 0x3a274
	mov r0, ip	@ 0003a274 6046
.org 0x3a276
	ldrb r3, [r0, #0]	@ 0003a276 0378
.org 0x3a278
	movs r0, #17	@ 0003a278 1120
.org 0x3a27a
	negs r0, r0	@ 0003a27a 4042
.org 0x3a27c
	ands r0, r3	@ 0003a27c 1840
.org 0x3a27e
	orrs r0, r1	@ 0003a27e 0843
.org 0x3a280
	mov r1, ip	@ 0003a280 6146
.org 0x3a282
	strb r0, [r1, #0]	@ 0003a282 0870
.org 0x3a284
	ldrb r0, [r4, #0]	@ 0003a284 2078
.org 0x3a286
	ands r2, r0	@ 0003a286 0240
.org 0x3a288
	cmp r2, #0	@ 0003a288 002a
.org 0x3a28a
	beq.n 0x3a29c	@ 0003a28a 07d0
.org 0x3a28c
	ldrb r0, [r5, #10]	@ 0003a28c a87a
.org 0x3a28e
	movs r1, #16	@ 0003a28e 1021
.org 0x3a290
	orrs r0, r1	@ 0003a290 0843
.org 0x3a292
	b.n 0x3a2a2	@ 0003a292 06e0
.org 0x3a294
	.byte 0x6a,0x02,0x00,0x00	@ 0003a294 data
.org 0x3a298
	.byte 0x6b,0x02,0x00,0x00	@ 0003a298 data
.org 0x3a29c
	ldrb r1, [r5, #10]	@ 0003a29c a97a
.org 0x3a29e
	movs r0, #239	@ 0003a29e ef20
.org 0x3a2a0
	ands r0, r1	@ 0003a2a0 0840
.org 0x3a2a2
	strb r0, [r5, #10]	@ 0003a2a2 a872
.org 0x3a2a4
	movs r2, #2	@ 0003a2a4 0222
.org 0x3a2a6
	movs r0, #0	@ 0003a2a6 0020
.org 0x3a2a8
	strb r0, [r6, #0]	@ 0003a2a8 3070
