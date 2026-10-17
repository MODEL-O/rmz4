@ FUN_080fa21c  entry 0x080fa21c  size 144
.thumb
.org 0xfa21c
FUN_080fa21c:
	push {r4, r5, r6, r7, lr}	@ 000fa21c f0b5
.org 0xfa21e
	adds r5, r0, #0	@ 000fa21e 051c
.org 0xfa220
	ldr r6, [r5, #40]	@ 000fa220 ae6a
.org 0xfa222
	ldrb r4, [r6, #10]	@ 000fa222 b47a
.org 0xfa224
	lsrs r4, r4, #4	@ 000fa224 2409
.org 0xfa226
	movs r2, #1	@ 000fa226 0122
.org 0xfa228
	ands r4, r2	@ 000fa228 1440
.org 0xfa22a
	ldr r1, [pc, #64]	@ 000fa22a 1049
.org 0xfa22c
	ldrb r0, [r5, #9]	@ 000fa22c 687a
.org 0xfa22e
	lsls r0, r0, #2	@ 000fa22e 8000
.org 0xfa230
	adds r0, r0, r1	@ 000fa230 4018
.org 0xfa232
	str r2, [r5, #12]	@ 000fa232 ea60
.org 0xfa234
	ldr r0, [r0, #0]	@ 000fa234 0068
.org 0xfa236
	ldr r0, [r0, #4]	@ 000fa236 4068
.org 0xfa238
	str r0, [r5, #20]	@ 000fa238 6861
.org 0xfa23a
	ldrb r1, [r5, #10]	@ 000fa23a a97a
.org 0xfa23c
	movs r0, #1	@ 000fa23c 0120
.org 0xfa23e
	movs r7, #0	@ 000fa23e 0027
.org 0xfa240
	orrs r0, r1	@ 000fa240 0843
.org 0xfa242
	movs r1, #2	@ 000fa242 0221
.org 0xfa244
	orrs r0, r1	@ 000fa244 0843
.org 0xfa246
	strb r0, [r5, #10]	@ 000fa246 a872
.org 0xfa248
	ldr r0, [r6, #84]	@ 000fa248 706d
.org 0xfa24a
	ldr r1, [r6, #88]	@ 000fa24a b16d
.org 0xfa24c
	str r0, [r5, #84]	@ 000fa24c 6865
.org 0xfa24e
	str r1, [r5, #88]	@ 000fa24e a965
.org 0xfa250
	adds r0, r5, #0	@ 000fa250 281c
.org 0xfa252
	bl 0x1cc9c	@ 000fa252 22f723fd
.org 0xfa256
	adds r1, r5, #0	@ 000fa256 291c
.org 0xfa258
	adds r1, #37	@ 000fa258 2531
.org 0xfa25a
	movs r0, #26	@ 000fa25a 1a20
.org 0xfa25c
	strb r0, [r1, #0]	@ 000fa25c 0870
.org 0xfa25e
	cmp r4, #0	@ 000fa25e 002c
.org 0xfa260
	beq.n 0xfa270	@ 000fa260 06d0
.org 0xfa262
	ldrb r0, [r5, #10]	@ 000fa262 a87a
.org 0xfa264
	movs r1, #16	@ 000fa264 1021
.org 0xfa266
	orrs r0, r1	@ 000fa266 0843
.org 0xfa268
	b.n 0xfa276	@ 000fa268 05e0
.org 0xfa26a
	.byte 0x00	@ 000fa26a data
.org 0xfa26b
	.byte 0x00	@ 000fa26b data
.org 0xfa26c
	.byte 0xfc,0x92,0x86,0x08	@ 000fa26c data
.org 0xfa270
	ldrb r1, [r5, #10]	@ 000fa270 a97a
.org 0xfa272
	movs r0, #239	@ 000fa272 ef20
.org 0xfa274
	ands r0, r1	@ 000fa274 0840
.org 0xfa276
	strb r0, [r5, #10]	@ 000fa276 a872
.org 0xfa278
	adds r1, r4, #0	@ 000fa278 211c
.org 0xfa27a
	adds r0, r5, #0	@ 000fa27a 281c
.org 0xfa27c
	adds r0, #76	@ 000fa27c 4c30
.org 0xfa27e
	strb r1, [r0, #0]	@ 000fa27e 0170
.org 0xfa280
	adds r3, r5, #0	@ 000fa280 2b1c
.org 0xfa282
	adds r3, #74	@ 000fa282 4a33
.org 0xfa284
	lsls r1, r1, #4	@ 000fa284 0901
.org 0xfa286
	ldrb r2, [r3, #0]	@ 000fa286 1a78
.org 0xfa288
	movs r0, #17	@ 000fa288 1120
.org 0xfa28a
	negs r0, r0	@ 000fa28a 4042
.org 0xfa28c
	ands r0, r2	@ 000fa28c 1040
.org 0xfa28e
	orrs r0, r1	@ 000fa28e 0843
.org 0xfa290
	strb r0, [r3, #0]	@ 000fa290 1870
.org 0xfa292
	ldr r1, [pc, #32]	@ 000fa292 0849
.org 0xfa294
	adds r0, r5, #0	@ 000fa294 281c
.org 0xfa296
	bl 0x1cf00	@ 000fa296 22f733fe
.org 0xfa29a
	ldrb r1, [r5, #11]	@ 000fa29a e97a
.org 0xfa29c
	movs r0, #16	@ 000fa29c 1020
.org 0xfa29e
	orrs r0, r1	@ 000fa29e 0843
.org 0xfa2a0
	strb r0, [r5, #11]	@ 000fa2a0 e872
.org 0xfa2a2
	ldrb r0, [r6, #28]	@ 000fa2a2 307f
.org 0xfa2a4
	strb r0, [r5, #29]	@ 000fa2a4 6877
.org 0xfa2a6
	adds r0, r5, #0	@ 000fa2a6 281c
.org 0xfa2a8
	bl 0xfa2b8	@ 000fa2a8 00f006f8
