@ FUN_080ce234  entry 0x080ce234  size 132
.thumb
.org 0xce234
FUN_080ce234:
	push {r4, r5, lr}	@ 000ce234 30b5
.org 0xce236
	adds r5, r0, #0	@ 000ce236 051c
.org 0xce238
	movs r4, #0	@ 000ce238 0024
.org 0xce23a
	ldr r1, [pc, #124]	@ 000ce23a 1f49
.org 0xce23c
	ldrb r0, [r5, #9]	@ 000ce23c 687a
.org 0xce23e
	lsls r0, r0, #2	@ 000ce23e 8000
.org 0xce240
	adds r0, r0, r1	@ 000ce240 4018
.org 0xce242
	movs r2, #1	@ 000ce242 0122
.org 0xce244
	str r2, [r5, #12]	@ 000ce244 ea60
.org 0xce246
	ldr r0, [r0, #0]	@ 000ce246 0068
.org 0xce248
	ldr r0, [r0, #4]	@ 000ce248 4068
.org 0xce24a
	str r0, [r5, #20]	@ 000ce24a 6861
.org 0xce24c
	ldrb r1, [r5, #10]	@ 000ce24c a97a
.org 0xce24e
	movs r0, #1	@ 000ce24e 0120
.org 0xce250
	orrs r0, r1	@ 000ce250 0843
.org 0xce252
	movs r1, #2	@ 000ce252 0221
.org 0xce254
	orrs r0, r1	@ 000ce254 0843
.org 0xce256
	strb r0, [r5, #10]	@ 000ce256 a872
.org 0xce258
	adds r1, r5, #0	@ 000ce258 291c
.org 0xce25a
	adds r1, #184	@ 000ce25a b831
.org 0xce25c
	movs r0, #250	@ 000ce25c fa20
.org 0xce25e
	lsls r0, r0, #1	@ 000ce25e 4000
.org 0xce260
	str r0, [r1, #0]	@ 000ce260 0860
.org 0xce262
	adds r0, r5, #0	@ 000ce262 281c
.org 0xce264
	adds r0, #182	@ 000ce264 b630
.org 0xce266
	strb r2, [r0, #0]	@ 000ce266 0270
.org 0xce268
	subs r0, #1	@ 000ce268 0138
.org 0xce26a
	strb r4, [r0, #0]	@ 000ce26a 0470
.org 0xce26c
	adds r0, r5, #0	@ 000ce26c 281c
.org 0xce26e
	bl 0x1cc9c	@ 000ce26e 4ef715fd
.org 0xce272
	ldrb r1, [r5, #10]	@ 000ce272 a97a
.org 0xce274
	movs r0, #239	@ 000ce274 ef20
.org 0xce276
	ands r0, r1	@ 000ce276 0840
.org 0xce278
	strb r0, [r5, #10]	@ 000ce278 a872
.org 0xce27a
	adds r0, r5, #0	@ 000ce27a 281c
.org 0xce27c
	adds r0, #76	@ 000ce27c 4c30
.org 0xce27e
	strb r4, [r0, #0]	@ 000ce27e 0470
.org 0xce280
	adds r2, r5, #0	@ 000ce280 2a1c
.org 0xce282
	adds r2, #74	@ 000ce282 4a32
.org 0xce284
	ldrb r1, [r2, #0]	@ 000ce284 1178
.org 0xce286
	movs r0, #17	@ 000ce286 1120
.org 0xce288
	negs r0, r0	@ 000ce288 4042
.org 0xce28a
	ands r0, r1	@ 000ce28a 0840
.org 0xce28c
	strb r0, [r2, #0]	@ 000ce28c 1070
.org 0xce28e
	ldrb r1, [r5, #10]	@ 000ce28e a97a
.org 0xce290
	movs r0, #4	@ 000ce290 0420
.org 0xce292
	orrs r0, r1	@ 000ce292 0843
.org 0xce294
	strb r0, [r5, #10]	@ 000ce294 a872
.org 0xce296
	adds r4, r5, #0	@ 000ce296 2c1c
.org 0xce298
	adds r4, #116	@ 000ce298 7434
.org 0xce29a
	ldr r1, [pc, #32]	@ 000ce29a 0849
.org 0xce29c
	adds r2, #10	@ 000ce29c 0a32
.org 0xce29e
	adds r0, r4, #0	@ 000ce29e 201c
.org 0xce2a0
	movs r3, #64	@ 000ce2a0 4023
.org 0xce2a2
	bl 0x5760	@ 000ce2a2 37f75dfa
.org 0xce2a6
	str r5, [r4, #44]	@ 000ce2a6 e562
.org 0xce2a8
	ldr r0, [pc, #20]	@ 000ce2a8 0548
.org 0xce2aa
	str r0, [r4, #36]	@ 000ce2aa 6062
.org 0xce2ac
	adds r0, r5, #0	@ 000ce2ac 281c
.org 0xce2ae
	bl 0xce2c4	@ 000ce2ae 00f009f8
.org 0xce2b2
	pop {r4, r5}	@ 000ce2b2 30bc
.org 0xce2b4
	pop {r0}	@ 000ce2b4 01bc
.org 0xce2b6
	bx r0	@ 000ce2b6 0047
