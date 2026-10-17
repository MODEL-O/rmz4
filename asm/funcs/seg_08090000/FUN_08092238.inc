@ FUN_08092238  entry 0x08092238  size 102
.thumb
.org 0x92238
FUN_08092238:
	push {r4, r5, r6, lr}	@ 00092238 70b5
.org 0x9223a
	adds r4, r0, #0	@ 0009223a 041c
.org 0x9223c
	ldr r1, [pc, #96]	@ 0009223c 1849
.org 0x9223e
	ldrb r0, [r4, #9]	@ 0009223e 607a
.org 0x92240
	lsls r0, r0, #2	@ 00092240 8000
.org 0x92242
	adds r0, r0, r1	@ 00092242 4018
.org 0x92244
	movs r1, #1	@ 00092244 0121
.org 0x92246
	str r1, [r4, #12]	@ 00092246 e160
.org 0x92248
	ldr r0, [r0, #0]	@ 00092248 0068
.org 0x9224a
	ldr r0, [r0, #4]	@ 0009224a 4068
.org 0x9224c
	str r0, [r4, #20]	@ 0009224c 6061
.org 0x9224e
	ldr r1, [pc, #84]	@ 0009224e 1549
.org 0x92250
	ldrb r0, [r4, #16]	@ 00092250 207c
.org 0x92252
	adds r0, r0, r1	@ 00092252 4018
.org 0x92254
	ldrb r0, [r0, #0]	@ 00092254 0078
.org 0x92256
	movs r6, #0	@ 00092256 0026
.org 0x92258
	strb r0, [r4, #13]	@ 00092258 6073
.org 0x9225a
	ldrb r0, [r4, #10]	@ 0009225a a07a
.org 0x9225c
	movs r1, #2	@ 0009225c 0221
.org 0x9225e
	orrs r0, r1	@ 0009225e 0843
.org 0x92260
	movs r1, #1	@ 00092260 0121
.org 0x92262
	orrs r0, r1	@ 00092262 0843
.org 0x92264
	strb r0, [r4, #10]	@ 00092264 a072
.org 0x92266
	adds r0, r4, #0	@ 00092266 201c
.org 0x92268
	bl 0x1cc9c	@ 00092268 8af718fd
.org 0x9226c
	ldrb r1, [r4, #10]	@ 0009226c a17a
.org 0x9226e
	movs r0, #4	@ 0009226e 0420
.org 0x92270
	orrs r0, r1	@ 00092270 0843
.org 0x92272
	strb r0, [r4, #10]	@ 00092272 a072
.org 0x92274
	adds r5, r4, #0	@ 00092274 251c
.org 0x92276
	adds r5, #116	@ 00092276 7435
.org 0x92278
	ldr r1, [pc, #44]	@ 00092278 0b49
.org 0x9227a
	adds r2, r4, #0	@ 0009227a 221c
.org 0x9227c
	adds r2, #84	@ 0009227c 5432
.org 0x9227e
	adds r0, r5, #0	@ 0009227e 281c
.org 0x92280
	movs r3, #4	@ 00092280 0423
.org 0x92282
	bl 0x5760	@ 00092282 73f76dfa
.org 0x92286
	str r4, [r5, #44]	@ 00092286 ec62
.org 0x92288
	ldr r0, [pc, #32]	@ 00092288 0848
.org 0x9228a
	str r0, [r5, #36]	@ 0009228a 6862
.org 0x9228c
	adds r0, r4, #0	@ 0009228c 201c
.org 0x9228e
	adds r0, #180	@ 0009228e b430
.org 0x92290
	str r6, [r0, #0]	@ 00092290 0660
.org 0x92292
	adds r0, r4, #0	@ 00092292 201c
.org 0x92294
	bl 0x922b0	@ 00092294 00f00cf8
.org 0x92298
	pop {r4, r5, r6}	@ 00092298 70bc
.org 0x9229a
	pop {r0}	@ 0009229a 01bc
.org 0x9229c
	bx r0	@ 0009229c 0047
