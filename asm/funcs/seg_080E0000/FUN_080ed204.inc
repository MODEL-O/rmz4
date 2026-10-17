@ FUN_080ed204  entry 0x080ed204  size 196
.thumb
.org 0xed204
FUN_080ed204:
	push {r4, r5, r6, r7, lr}	@ 000ed204 f0b5
.org 0xed206
	adds r5, r0, #0	@ 000ed206 051c
.org 0xed208
	adds r4, r5, #0	@ 000ed208 2c1c
.org 0xed20a
	adds r4, #188	@ 000ed20a bc34
.org 0xed20c
	ldr r6, [r4, #0]	@ 000ed20c 2668
.org 0xed20e
	bl 0x1cff0	@ 000ed20e 2ff7effe
.org 0xed212
	ldr r7, [r5, #88]	@ 000ed212 af6d
.org 0xed214
	ldr r0, [r4, #0]	@ 000ed214 2068
.org 0xed216
	cmp r0, #0	@ 000ed216 0028
.org 0xed218
	beq.n 0xed258	@ 000ed218 1ed0
.org 0xed21a
	ldrb r0, [r6, #13]	@ 000ed21a 707b
.org 0xed21c
	cmp r0, #3	@ 000ed21c 0328
.org 0xed21e
	bne.n 0xed258	@ 000ed21e 1bd1
.org 0xed220
	ldrb r0, [r6, #14]	@ 000ed220 b07b
.org 0xed222
	cmp r0, #1	@ 000ed222 0128
.org 0xed224
	bls.n 0xed258	@ 000ed224 18d9
.org 0xed226
	movs r0, #150	@ 000ed226 9620
.org 0xed228
	lsls r0, r0, #2	@ 000ed228 8000
.org 0xed22a
	adds r4, r6, r0	@ 000ed22a 3418
.org 0xed22c
	ldr r0, [r4, #0]	@ 000ed22c 2068
.org 0xed22e
	movs r1, #64	@ 000ed22e 4021
.org 0xed230
	ands r0, r1	@ 000ed230 0840
.org 0xed232
	cmp r0, #0	@ 000ed232 0028
.org 0xed234
	beq.n 0xed23c	@ 000ed234 02d0
.org 0xed236
	ldr r1, [pc, #28]	@ 000ed236 0749
.org 0xed238
	adds r0, r7, r1	@ 000ed238 7818
.org 0xed23a
	str r0, [r5, #88]	@ 000ed23a a865
.org 0xed23c
	ldr r0, [r4, #0]	@ 000ed23c 2068
.org 0xed23e
	movs r1, #128	@ 000ed23e 8021
.org 0xed240
	ands r0, r1	@ 000ed240 0840
.org 0xed242
	adds r3, r5, #0	@ 000ed242 2b1c
.org 0xed244
	adds r3, #184	@ 000ed244 b833
.org 0xed246
	cmp r0, #0	@ 000ed246 0028
.org 0xed248
	beq.n 0xed27c	@ 000ed248 18d0
.org 0xed24a
	ldr r0, [r5, #88]	@ 000ed24a a86d
.org 0xed24c
	movs r2, #128	@ 000ed24c 8022
.org 0xed24e
	lsls r2, r2, #2	@ 000ed24e 9200
.org 0xed250
	adds r0, r0, r2	@ 000ed250 8018
.org 0xed252
	b.n 0xed27a	@ 000ed252 12e0
.org 0xed254
	.byte 0x00,0xfe,0xff,0xff	@ 000ed254 data
.org 0xed258
	adds r0, r5, #0	@ 000ed258 281c
.org 0xed25a
	adds r0, #184	@ 000ed25a b830
.org 0xed25c
	ldr r2, [r5, #88]	@ 000ed25c aa6d
.org 0xed25e
	ldr r1, [r0, #0]	@ 000ed25e 0168
.org 0xed260
	adds r3, r0, #0	@ 000ed260 031c
.org 0xed262
	cmp r2, r1	@ 000ed262 8a42
.org 0xed264
	bge.n 0xed26e	@ 000ed264 03da
.org 0xed266
	movs r1, #128	@ 000ed266 8021
.org 0xed268
	lsls r1, r1, #2	@ 000ed268 8900
.org 0xed26a
	adds r0, r2, r1	@ 000ed26a 5018
.org 0xed26c
	str r0, [r5, #88]	@ 000ed26c a865
.org 0xed26e
	ldr r1, [r5, #88]	@ 000ed26e a96d
.org 0xed270
	ldr r0, [r3, #0]	@ 000ed270 1868
.org 0xed272
	cmp r1, r0	@ 000ed272 8142
.org 0xed274
	ble.n 0xed284	@ 000ed274 06dd
.org 0xed276
	ldr r2, [pc, #52]	@ 000ed276 0d4a
.org 0xed278
	adds r0, r1, r2	@ 000ed278 8818
.org 0xed27a
	str r0, [r5, #88]	@ 000ed27a a865
.org 0xed27c
	ldr r0, [r5, #88]	@ 000ed27c a86d
.org 0xed27e
	ldr r1, [r3, #0]	@ 000ed27e 1968
.org 0xed280
	cmp r0, r1	@ 000ed280 8842
.org 0xed282
	bgt.n 0xed290	@ 000ed282 05dc
.org 0xed284
	ldr r0, [r3, #0]	@ 000ed284 1868
.org 0xed286
	ldr r2, [pc, #40]	@ 000ed286 0a4a
.org 0xed288
	adds r1, r0, r2	@ 000ed288 8118
.org 0xed28a
	ldr r0, [r5, #88]	@ 000ed28a a86d
.org 0xed28c
	cmp r0, r1	@ 000ed28c 8842
.org 0xed28e
	bge.n 0xed292	@ 000ed28e 00da
.org 0xed290
	str r1, [r5, #88]	@ 000ed290 a965
.org 0xed292
	ldr r0, [r5, #88]	@ 000ed292 a86d
.org 0xed294
	cmp r7, r0	@ 000ed294 8742
.org 0xed296
	beq.n 0xed2b4	@ 000ed296 0dd0
.org 0xed298
	adds r4, r5, #0	@ 000ed298 2c1c
.org 0xed29a
	adds r4, #192	@ 000ed29a c034
.org 0xed29c
	ldrh r0, [r4, #0]	@ 000ed29c 2088
.org 0xed29e
	cmp r0, #0	@ 000ed29e 0028
.org 0xed2a0
	bne.n 0xed2ce	@ 000ed2a0 15d1
.org 0xed2a2
	movs r0, #119	@ 000ed2a2 7720
.org 0xed2a4
	bl 0x2b10	@ 000ed2a4 15f734fc
.org 0xed2a8
	movs r0, #119	@ 000ed2a8 7720
.org 0xed2aa
	b.n 0xed2cc	@ 000ed2aa 0fe0
.org 0xed2ac
	.byte 0x00,0xfe,0xff,0xff	@ 000ed2ac data
.org 0xed2b0
	.byte 0x00,0x80,0xff,0xff	@ 000ed2b0 data
.org 0xed2b4
	adds r4, r5, #0	@ 000ed2b4 2c1c
.org 0xed2b6
	adds r4, #192	@ 000ed2b6 c034
.org 0xed2b8
	ldrh r0, [r4, #0]	@ 000ed2b8 2088
.org 0xed2ba
	cmp r0, #0	@ 000ed2ba 0028
.org 0xed2bc
	beq.n 0xed2ce	@ 000ed2bc 07d0
.org 0xed2be
	movs r0, #119	@ 000ed2be 7720
.org 0xed2c0
	bl 0x2b5c	@ 000ed2c0 15f74cfc
.org 0xed2c4
	ldr r0, [pc, #12]	@ 000ed2c4 0348
.org 0xed2c6
	bl 0x2b10	@ 000ed2c6 15f723fc
