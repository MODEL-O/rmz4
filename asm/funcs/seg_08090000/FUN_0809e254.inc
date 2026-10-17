@ FUN_0809e254  entry 0x0809e254  size 94
.thumb
.org 0x9e254
FUN_0809e254:
	push {r4, r5, r6, lr}	@ 0009e254 70b5
.org 0x9e256
	adds r4, r0, #0	@ 0009e256 041c
.org 0x9e258
	ldr r1, [pc, #88]	@ 0009e258 1649
.org 0x9e25a
	ldrb r0, [r4, #9]	@ 0009e25a 607a
.org 0x9e25c
	lsls r0, r0, #2	@ 0009e25c 8000
.org 0x9e25e
	adds r0, r0, r1	@ 0009e25e 4018
.org 0x9e260
	movs r1, #1	@ 0009e260 0121
.org 0x9e262
	str r1, [r4, #12]	@ 0009e262 e160
.org 0x9e264
	ldr r0, [r0, #0]	@ 0009e264 0068
.org 0x9e266
	ldr r0, [r0, #4]	@ 0009e266 4068
.org 0x9e268
	str r0, [r4, #20]	@ 0009e268 6061
.org 0x9e26a
	ldrb r1, [r4, #10]	@ 0009e26a a17a
.org 0x9e26c
	movs r0, #254	@ 0009e26c fe20
.org 0x9e26e
	ands r0, r1	@ 0009e26e 0840
.org 0x9e270
	movs r6, #0	@ 0009e270 0026
.org 0x9e272
	movs r1, #2	@ 0009e272 0221
.org 0x9e274
	orrs r0, r1	@ 0009e274 0843
.org 0x9e276
	strb r0, [r4, #10]	@ 0009e276 a072
.org 0x9e278
	adds r0, r4, #0	@ 0009e278 201c
.org 0x9e27a
	bl 0x1cc9c	@ 0009e27a 7ef70ffd
.org 0x9e27e
	adds r1, r4, #0	@ 0009e27e 211c
.org 0x9e280
	adds r1, #37	@ 0009e280 2531
.org 0x9e282
	movs r0, #8	@ 0009e282 0820
.org 0x9e284
	strb r0, [r1, #0]	@ 0009e284 0870
.org 0x9e286
	ldrb r1, [r4, #10]	@ 0009e286 a17a
.org 0x9e288
	movs r0, #4	@ 0009e288 0420
.org 0x9e28a
	orrs r0, r1	@ 0009e28a 0843
.org 0x9e28c
	strb r0, [r4, #10]	@ 0009e28c a072
.org 0x9e28e
	adds r5, r4, #0	@ 0009e28e 251c
.org 0x9e290
	adds r5, #116	@ 0009e290 7435
.org 0x9e292
	ldr r0, [pc, #36]	@ 0009e292 0948
.org 0x9e294
	ldr r1, [r0, #0]	@ 0009e294 0168
.org 0x9e296
	adds r2, r4, #0	@ 0009e296 221c
.org 0x9e298
	adds r2, #84	@ 0009e298 5432
.org 0x9e29a
	adds r0, r5, #0	@ 0009e29a 281c
.org 0x9e29c
	movs r3, #64	@ 0009e29c 4023
.org 0x9e29e
	bl 0x5760	@ 0009e29e 67f75ffa
.org 0x9e2a2
	str r4, [r5, #44]	@ 0009e2a2 ec62
.org 0x9e2a4
	str r6, [r5, #36]	@ 0009e2a4 6e62
.org 0x9e2a6
	adds r0, r4, #0	@ 0009e2a6 201c
.org 0x9e2a8
	bl 0x9e2bc	@ 0009e2a8 00f008f8
.org 0x9e2ac
	pop {r4, r5, r6}	@ 0009e2ac 70bc
.org 0x9e2ae
	pop {r0}	@ 0009e2ae 01bc
.org 0x9e2b0
	bx r0	@ 0009e2b0 0047
