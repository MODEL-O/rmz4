@ FUN_080c01fc  entry 0x080c01fc  size 128
.thumb
.org 0xc01fc
FUN_080c01fc:
	push {r4, r5, r6, lr}	@ 000c01fc 70b5
.org 0xc01fe
	adds r4, r0, #0	@ 000c01fe 041c
.org 0xc0200
	movs r6, #0	@ 000c0200 0026
.org 0xc0202
	ldr r1, [pc, #120]	@ 000c0202 1e49
.org 0xc0204
	ldrb r0, [r4, #9]	@ 000c0204 607a
.org 0xc0206
	lsls r0, r0, #2	@ 000c0206 8000
.org 0xc0208
	adds r0, r0, r1	@ 000c0208 4018
.org 0xc020a
	movs r1, #1	@ 000c020a 0121
.org 0xc020c
	str r1, [r4, #12]	@ 000c020c e160
.org 0xc020e
	ldr r0, [r0, #0]	@ 000c020e 0068
.org 0xc0210
	ldr r0, [r0, #4]	@ 000c0210 4068
.org 0xc0212
	str r0, [r4, #20]	@ 000c0212 6061
.org 0xc0214
	ldrb r1, [r4, #10]	@ 000c0214 a17a
.org 0xc0216
	movs r0, #1	@ 000c0216 0120
.org 0xc0218
	orrs r0, r1	@ 000c0218 0843
.org 0xc021a
	movs r1, #2	@ 000c021a 0221
.org 0xc021c
	orrs r0, r1	@ 000c021c 0843
.org 0xc021e
	strb r0, [r4, #10]	@ 000c021e a072
.org 0xc0220
	adds r0, r4, #0	@ 000c0220 201c
.org 0xc0222
	adds r0, #180	@ 000c0222 b430
.org 0xc0224
	strb r6, [r0, #0]	@ 000c0224 0670
.org 0xc0226
	adds r0, r4, #0	@ 000c0226 201c
.org 0xc0228
	bl 0x1cc9c	@ 000c0228 5cf738fd
.org 0xc022c
	ldrb r1, [r4, #10]	@ 000c022c a17a
.org 0xc022e
	movs r0, #239	@ 000c022e ef20
.org 0xc0230
	ands r0, r1	@ 000c0230 0840
.org 0xc0232
	strb r0, [r4, #10]	@ 000c0232 a072
.org 0xc0234
	adds r0, r4, #0	@ 000c0234 201c
.org 0xc0236
	adds r0, #76	@ 000c0236 4c30
.org 0xc0238
	strb r6, [r0, #0]	@ 000c0238 0670
.org 0xc023a
	adds r2, r4, #0	@ 000c023a 221c
.org 0xc023c
	adds r2, #74	@ 000c023c 4a32
.org 0xc023e
	ldrb r1, [r2, #0]	@ 000c023e 1178
.org 0xc0240
	movs r0, #17	@ 000c0240 1120
.org 0xc0242
	negs r0, r0	@ 000c0242 4042
.org 0xc0244
	ands r0, r1	@ 000c0244 0840
.org 0xc0246
	strb r0, [r2, #0]	@ 000c0246 1070
.org 0xc0248
	movs r1, #180	@ 000c0248 b421
.org 0xc024a
	lsls r1, r1, #6	@ 000c024a 8901
.org 0xc024c
	adds r0, r4, #0	@ 000c024c 201c
.org 0xc024e
	bl 0x1cf00	@ 000c024e 5cf757fe
.org 0xc0252
	ldrb r1, [r4, #10]	@ 000c0252 a17a
.org 0xc0254
	movs r0, #4	@ 000c0254 0420
.org 0xc0256
	orrs r0, r1	@ 000c0256 0843
.org 0xc0258
	strb r0, [r4, #10]	@ 000c0258 a072
.org 0xc025a
	adds r5, r4, #0	@ 000c025a 251c
.org 0xc025c
	adds r5, #116	@ 000c025c 7435
.org 0xc025e
	ldr r1, [pc, #32]	@ 000c025e 0849
.org 0xc0260
	adds r2, r4, #0	@ 000c0260 221c
.org 0xc0262
	adds r2, #84	@ 000c0262 5432
.org 0xc0264
	adds r0, r5, #0	@ 000c0264 281c
.org 0xc0266
	movs r3, #64	@ 000c0266 4023
.org 0xc0268
	bl 0x5760	@ 000c0268 45f77afa
.org 0xc026c
	str r4, [r5, #44]	@ 000c026c ec62
.org 0xc026e
	str r6, [r5, #36]	@ 000c026e 6e62
.org 0xc0270
	adds r0, r4, #0	@ 000c0270 201c
.org 0xc0272
	bl 0xc0284	@ 000c0272 00f007f8
.org 0xc0276
	pop {r4, r5, r6}	@ 000c0276 70bc
.org 0xc0278
	pop {r0}	@ 000c0278 01bc
.org 0xc027a
	bx r0	@ 000c027a 0047
