@ FUN_080ff21c  entry 0x080ff21c  size 190
.thumb
.org 0xff21c
FUN_080ff21c:
	push {r4, r5, r6, lr}	@ 000ff21c 70b5
.org 0xff21e
	mov r6, r8	@ 000ff21e 4646
.org 0xff220
	push {r6}	@ 000ff220 40b4
.org 0xff222
	adds r4, r0, #0	@ 000ff222 041c
.org 0xff224
	bl 0x1cc9c	@ 000ff224 1df73afd
.org 0xff228
	ldrb r1, [r4, #10]	@ 000ff228 a17a
.org 0xff22a
	movs r0, #1	@ 000ff22a 0120
.org 0xff22c
	orrs r0, r1	@ 000ff22c 0843
.org 0xff22e
	movs r1, #2	@ 000ff22e 0221
.org 0xff230
	orrs r0, r1	@ 000ff230 0843
.org 0xff232
	strb r0, [r4, #10]	@ 000ff232 a072
.org 0xff234
	movs r1, #169	@ 000ff234 a921
.org 0xff236
	lsls r1, r1, #8	@ 000ff236 0902
.org 0xff238
	adds r0, r4, #0	@ 000ff238 201c
.org 0xff23a
	bl 0x1cf00	@ 000ff23a 1df761fe
.org 0xff23e
	adds r0, r4, #0	@ 000ff23e 201c
.org 0xff240
	bl 0x1cff0	@ 000ff240 1df7d6fe
.org 0xff244
	movs r6, #0	@ 000ff244 0026
.org 0xff246
	ldrb r1, [r4, #10]	@ 000ff246 a17a
.org 0xff248
	movs r0, #239	@ 000ff248 ef20
.org 0xff24a
	ands r0, r1	@ 000ff24a 0840
.org 0xff24c
	strb r0, [r4, #10]	@ 000ff24c a072
.org 0xff24e
	movs r0, #1	@ 000ff24e 0120
.org 0xff250
	mov r8, r0	@ 000ff250 8046
.org 0xff252
	adds r0, r4, #0	@ 000ff252 201c
.org 0xff254
	adds r0, #76	@ 000ff254 4c30
.org 0xff256
	strb r6, [r0, #0]	@ 000ff256 0670
.org 0xff258
	adds r2, r4, #0	@ 000ff258 221c
.org 0xff25a
	adds r2, #74	@ 000ff25a 4a32
.org 0xff25c
	ldrb r1, [r2, #0]	@ 000ff25c 1178
.org 0xff25e
	movs r0, #17	@ 000ff25e 1120
.org 0xff260
	negs r0, r0	@ 000ff260 4042
.org 0xff262
	ands r0, r1	@ 000ff262 0840
.org 0xff264
	strb r0, [r2, #0]	@ 000ff264 1070
.org 0xff266
	ldrb r0, [r4, #10]	@ 000ff266 a07a
.org 0xff268
	movs r1, #4	@ 000ff268 0421
.org 0xff26a
	orrs r0, r1	@ 000ff26a 0843
.org 0xff26c
	strb r0, [r4, #10]	@ 000ff26c a072
.org 0xff26e
	adds r5, r4, #0	@ 000ff26e 251c
.org 0xff270
	adds r5, #116	@ 000ff270 7435
.org 0xff272
	ldr r1, [pc, #104]	@ 000ff272 1a49
.org 0xff274
	adds r2, #10	@ 000ff274 0a32
.org 0xff276
	adds r0, r5, #0	@ 000ff276 281c
.org 0xff278
	movs r3, #8	@ 000ff278 0823
.org 0xff27a
	bl 0x5760	@ 000ff27a 06f771fa
.org 0xff27e
	str r4, [r5, #44]	@ 000ff27e ec62
.org 0xff280
	ldr r0, [pc, #92]	@ 000ff280 1748
.org 0xff282
	str r0, [r5, #36]	@ 000ff282 6862
.org 0xff284
	ldrb r1, [r4, #11]	@ 000ff284 e17a
.org 0xff286
	movs r0, #8	@ 000ff286 0820
.org 0xff288
	orrs r0, r1	@ 000ff288 0843
.org 0xff28a
	strb r0, [r4, #11]	@ 000ff28a e072
.org 0xff28c
	ldr r0, [pc, #84]	@ 000ff28c 1548
.org 0xff28e
	str r0, [r4, #48]	@ 000ff28e 2063
.org 0xff290
	mov r1, r8	@ 000ff290 4146
.org 0xff292
	strh r1, [r4, #38]	@ 000ff292 e184
.org 0xff294
	ldr r0, [r4, #84]	@ 000ff294 606d
.org 0xff296
	ldr r1, [r4, #88]	@ 000ff296 a16d
.org 0xff298
	bl 0x8534	@ 000ff298 09f74cf9
.org 0xff29c
	str r0, [r4, #88]	@ 000ff29c a065
.org 0xff29e
	adds r1, r4, #0	@ 000ff29e 211c
.org 0xff2a0
	adds r1, #184	@ 000ff2a0 b831
.org 0xff2a2
	str r0, [r1, #0]	@ 000ff2a2 0860
.org 0xff2a4
	ldr r0, [r4, #84]	@ 000ff2a4 606d
.org 0xff2a6
	ldr r1, [r4, #88]	@ 000ff2a6 a16d
.org 0xff2a8
	str r0, [r4, #100]	@ 000ff2a8 6066
.org 0xff2aa
	str r1, [r4, #104]	@ 000ff2aa a166
.org 0xff2ac
	adds r0, r4, #0	@ 000ff2ac 201c
.org 0xff2ae
	adds r0, #100	@ 000ff2ae 6430
.org 0xff2b0
	str r0, [r4, #64]	@ 000ff2b0 2064
.org 0xff2b2
	str r6, [r4, #44]	@ 000ff2b2 e662
.org 0xff2b4
	movs r0, #8	@ 000ff2b4 0820
.org 0xff2b6
	strb r0, [r4, #18]	@ 000ff2b6 a074
.org 0xff2b8
	ldr r1, [pc, #44]	@ 000ff2b8 0b49
.org 0xff2ba
	ldrb r0, [r4, #9]	@ 000ff2ba 607a
.org 0xff2bc
	lsls r0, r0, #2	@ 000ff2bc 8000
.org 0xff2be
	adds r0, r0, r1	@ 000ff2be 4018
.org 0xff2c0
	mov r1, r8	@ 000ff2c0 4146
.org 0xff2c2
	str r1, [r4, #12]	@ 000ff2c2 e160
.org 0xff2c4
	ldr r0, [r0, #0]	@ 000ff2c4 0068
.org 0xff2c6
	ldr r0, [r0, #4]	@ 000ff2c6 4068
.org 0xff2c8
	str r0, [r4, #20]	@ 000ff2c8 6061
.org 0xff2ca
	adds r0, r4, #0	@ 000ff2ca 201c
.org 0xff2cc
	bl 0xff134	@ 000ff2cc fff732ff
.org 0xff2d0
	pop {r3}	@ 000ff2d0 08bc
.org 0xff2d2
	mov r8, r3	@ 000ff2d2 9846
.org 0xff2d4
	pop {r4, r5, r6}	@ 000ff2d4 70bc
.org 0xff2d6
	pop {r0}	@ 000ff2d6 01bc
.org 0xff2d8
	bx r0	@ 000ff2d8 0047
