@ FUN_0805f214  entry 0x0805f214  size 162
.thumb
.org 0x5f214
FUN_0805f214:
	push {r4, r5, lr}	@ 0005f214 30b5
.org 0x5f216
	adds r4, r0, #0	@ 0005f216 041c
.org 0x5f218
	bl 0x1cc9c	@ 0005f218 bdf740fd
.org 0x5f21c
	ldrb r1, [r4, #10]	@ 0005f21c a17a
.org 0x5f21e
	movs r0, #1	@ 0005f21e 0120
.org 0x5f220
	movs r5, #0	@ 0005f220 0025
.org 0x5f222
	orrs r0, r1	@ 0005f222 0843
.org 0x5f224
	movs r1, #2	@ 0005f224 0221
.org 0x5f226
	orrs r0, r1	@ 0005f226 0843
.org 0x5f228
	strb r0, [r4, #10]	@ 0005f228 a072
.org 0x5f22a
	adds r0, r4, #0	@ 0005f22a 201c
.org 0x5f22c
	bl 0x1ceec	@ 0005f22c bdf75efe
.org 0x5f230
	ldr r1, [pc, #132]	@ 0005f230 2149
.org 0x5f232
	adds r0, r4, #0	@ 0005f232 201c
.org 0x5f234
	bl 0x1cf00	@ 0005f234 bdf764fe
.org 0x5f238
	adds r0, r4, #0	@ 0005f238 201c
.org 0x5f23a
	bl 0x1cff0	@ 0005f23a bdf7d9fe
.org 0x5f23e
	adds r0, r4, #0	@ 0005f23e 201c
.org 0x5f240
	adds r0, #76	@ 0005f240 4c30
.org 0x5f242
	strb r5, [r0, #0]	@ 0005f242 0570
.org 0x5f244
	adds r2, r4, #0	@ 0005f244 221c
.org 0x5f246
	adds r2, #74	@ 0005f246 4a32
.org 0x5f248
	ldrb r1, [r2, #0]	@ 0005f248 1178
.org 0x5f24a
	movs r0, #17	@ 0005f24a 1120
.org 0x5f24c
	negs r0, r0	@ 0005f24c 4042
.org 0x5f24e
	ands r0, r1	@ 0005f24e 0840
.org 0x5f250
	strb r0, [r2, #0]	@ 0005f250 1070
.org 0x5f252
	ldrb r1, [r4, #10]	@ 0005f252 a17a
.org 0x5f254
	movs r0, #239	@ 0005f254 ef20
.org 0x5f256
	ands r0, r1	@ 0005f256 0840
.org 0x5f258
	strb r0, [r4, #10]	@ 0005f258 a072
.org 0x5f25a
	ldr r1, [pc, #96]	@ 0005f25a 1849
.org 0x5f25c
	adds r0, r4, #0	@ 0005f25c 201c
.org 0x5f25e
	movs r2, #96	@ 0005f25e 6022
.org 0x5f260
	bl 0x503cc	@ 0005f260 f1f7b4f8
.org 0x5f264
	ldr r1, [pc, #88]	@ 0005f264 1649
.org 0x5f266
	adds r0, r4, #0	@ 0005f266 201c
.org 0x5f268
	adds r0, #116	@ 0005f268 7430
.org 0x5f26a
	str r1, [r0, #36]	@ 0005f26a 4162
.org 0x5f26c
	ldr r0, [r4, #84]	@ 0005f26c 606d
.org 0x5f26e
	ldr r1, [r4, #88]	@ 0005f26e a16d
.org 0x5f270
	bl 0x8534	@ 0005f270 a9f760f9
.org 0x5f274
	str r0, [r4, #88]	@ 0005f274 a065
.org 0x5f276
	adds r0, r4, #0	@ 0005f276 201c
.org 0x5f278
	adds r0, #180	@ 0005f278 b430
.org 0x5f27a
	ldr r1, [r4, #84]	@ 0005f27a 616d
.org 0x5f27c
	str r1, [r0, #0]	@ 0005f27c 0160
.org 0x5f27e
	ldr r1, [r4, #88]	@ 0005f27e a16d
.org 0x5f280
	str r1, [r0, #4]	@ 0005f280 4160
.org 0x5f282
	movs r1, #3	@ 0005f282 0321
.org 0x5f284
	strb r1, [r0, #25]	@ 0005f284 4176
.org 0x5f286
	strb r5, [r0, #26]	@ 0005f286 8576
.org 0x5f288
	strb r5, [r0, #27]	@ 0005f288 c576
.org 0x5f28a
	str r5, [r0, #8]	@ 0005f28a 8560
.org 0x5f28c
	movs r2, #0	@ 0005f28c 0022
.org 0x5f28e
	strh r5, [r0, #22]	@ 0005f28e c582
.org 0x5f290
	strb r1, [r0, #28]	@ 0005f290 0177
.org 0x5f292
	str r5, [r4, #44]	@ 0005f292 e562
.org 0x5f294
	str r5, [r0, #12]	@ 0005f294 c560
.org 0x5f296
	ldr r1, [pc, #44]	@ 0005f296 0b49
.org 0x5f298
	ldrb r0, [r4, #9]	@ 0005f298 607a
.org 0x5f29a
	lsls r0, r0, #2	@ 0005f29a 8000
.org 0x5f29c
	adds r0, r0, r1	@ 0005f29c 4018
.org 0x5f29e
	movs r1, #1	@ 0005f29e 0121
.org 0x5f2a0
	str r1, [r4, #12]	@ 0005f2a0 e160
.org 0x5f2a2
	ldr r0, [r0, #0]	@ 0005f2a2 0068
.org 0x5f2a4
	ldr r0, [r0, #4]	@ 0005f2a4 4068
.org 0x5f2a6
	str r0, [r4, #20]	@ 0005f2a6 6061
.org 0x5f2a8
	strb r2, [r4, #13]	@ 0005f2a8 6273
.org 0x5f2aa
	adds r0, r4, #0	@ 0005f2aa 201c
.org 0x5f2ac
	bl 0x5f2c8	@ 0005f2ac 00f00cf8
.org 0x5f2b0
	pop {r4, r5}	@ 0005f2b0 30bc
.org 0x5f2b2
	pop {r0}	@ 0005f2b2 01bc
.org 0x5f2b4
	bx r0	@ 0005f2b4 0047
