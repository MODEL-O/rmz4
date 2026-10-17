@ FUN_0810e248  entry 0x0810e248  size 248
.thumb
.org 0x10e248
FUN_0810e248:
	push {r4, r5, r6, r7, lr}	@ 0010e248 f0b5
.org 0x10e24a
	ldr r3, [r0, #0]	@ 0010e24a 0368
.org 0x10e24c
	ldr r4, [r0, #12]	@ 0010e24c c468
.org 0x10e24e
	cmp r4, #0	@ 0010e24e 002c
.org 0x10e250
	bne.n 0x10e254	@ 0010e250 00d1
.org 0x10e252
	b.n 0x10e364	@ 0010e252 87e0
.org 0x10e254
	ldr r2, [pc, #84]	@ 0010e254 154a
.org 0x10e256
	ldrh r1, [r2, #0]	@ 0010e256 1188
.org 0x10e258
	movs r5, #128	@ 0010e258 8025
.org 0x10e25a
	lsls r5, r5, #1	@ 0010e25a 6d00
.org 0x10e25c
	adds r0, r5, #0	@ 0010e25c 281c
.org 0x10e25e
	orrs r0, r1	@ 0010e25e 0843
.org 0x10e260
	strh r0, [r2, #0]	@ 0010e260 1080
.org 0x10e262
	adds r0, r4, #0	@ 0010e262 201c
.org 0x10e264
	adds r0, #164	@ 0010e264 a430
.org 0x10e266
	ldrh r4, [r0, #0]	@ 0010e266 0488
.org 0x10e268
	movs r0, #174	@ 0010e268 ae20
.org 0x10e26a
	lsls r0, r0, #2	@ 0010e26a 8000
.org 0x10e26c
	adds r1, r3, r0	@ 0010e26c 1918
.org 0x10e26e
	ldr r0, [pc, #64]	@ 0010e26e 1048
.org 0x10e270
	str r0, [r1, #0]	@ 0010e270 0860
.org 0x10e272
	movs r5, #190	@ 0010e272 be25
.org 0x10e274
	lsls r5, r5, #2	@ 0010e274 ad00
.org 0x10e276
	adds r1, r3, r5	@ 0010e276 5919
.org 0x10e278
	ldr r0, [pc, #56]	@ 0010e278 0e48
.org 0x10e27a
	str r0, [r1, #0]	@ 0010e27a 0860
.org 0x10e27c
	movs r0, #158	@ 0010e27c 9e20
.org 0x10e27e
	lsls r0, r0, #2	@ 0010e27e 8000
.org 0x10e280
	adds r2, r3, r0	@ 0010e280 1a18
.org 0x10e282
	lsls r0, r4, #16	@ 0010e282 2004
.org 0x10e284
	asrs r0, r0, #16	@ 0010e284 0014
.org 0x10e286
	cmp r0, #32	@ 0010e286 2028
.org 0x10e288
	bgt.n 0x10e2d6	@ 0010e288 25dc
.org 0x10e28a
	movs r3, #0	@ 0010e28a 0023
.org 0x10e28c
	adds r4, r0, #0	@ 0010e28c 041c
.org 0x10e28e
	ldr r5, [pc, #40]	@ 0010e28e 0a4d
.org 0x10e290
	movs r1, #3	@ 0010e290 0321
.org 0x10e292
	ands r1, r4	@ 0010e292 2140
.org 0x10e294
	ldr r7, [pc, #36]	@ 0010e294 094f
.org 0x10e296
	lsls r0, r1, #16	@ 0010e296 0804
.org 0x10e298
	adds r0, r0, r1	@ 0010e298 4018
.org 0x10e29a
	lsls r0, r0, #5	@ 0010e29a 4001
.org 0x10e29c
	subs r1, r5, r0	@ 0010e29c 291a
.org 0x10e29e
	movs r6, #32	@ 0010e29e 2026
.org 0x10e2a0
	adds r0, r3, #4	@ 0010e2a0 181d
.org 0x10e2a2
	cmp r0, r4	@ 0010e2a2 a042
.org 0x10e2a4
	bgt.n 0x10e2c0	@ 0010e2a4 0cdc
.org 0x10e2a6
	str r7, [r2, #0]	@ 0010e2a6 1760
.org 0x10e2a8
	b.n 0x10e2ca	@ 0010e2a8 0fe0
.org 0x10e2aa
	.byte 0x00	@ 0010e2aa data
.org 0x10e2ab
	.byte 0x00	@ 0010e2ab data
.org 0x10e2ac
	.byte 0x00,0x0a,0x00,0x02	@ 0010e2ac data
.org 0x10e2b0
	.byte 0x0b,0x12,0x4b,0x12	@ 0010e2b0 data
.org 0x10e2b4
	.byte 0x2b,0x12,0x6b,0x12	@ 0010e2b4 data
.org 0x10e2b8
	.byte 0xa4,0x12,0xa5,0x12	@ 0010e2b8 data
.org 0x10e2bc
	.byte 0x24,0x12,0x25,0x12	@ 0010e2bc data
.org 0x10e2c0
	cmp r3, r4	@ 0010e2c0 a342
.org 0x10e2c2
	ble.n 0x10e2c8	@ 0010e2c2 01dd
.org 0x10e2c4
	str r5, [r2, #0]	@ 0010e2c4 1560
.org 0x10e2c6
	b.n 0x10e2ca	@ 0010e2c6 00e0
.org 0x10e2c8
	str r1, [r2, #0]	@ 0010e2c8 1160
.org 0x10e2ca
	lsls r0, r0, #16	@ 0010e2ca 0004
.org 0x10e2cc
	lsrs r3, r0, #16	@ 0010e2cc 030c
.org 0x10e2ce
	subs r2, #64	@ 0010e2ce 403a
.org 0x10e2d0
	cmp r3, r6	@ 0010e2d0 b342
.org 0x10e2d2
	blt.n 0x10e2a0	@ 0010e2d2 e5db
.org 0x10e2d4
	b.n 0x10e360	@ 0010e2d4 44e0
.org 0x10e2d6
	cmp r0, #64	@ 0010e2d6 4028
.org 0x10e2d8
	bgt.n 0x10e31e	@ 0010e2d8 21dc
.org 0x10e2da
	subs r0, #32	@ 0010e2da 2038
.org 0x10e2dc
	movs r3, #0	@ 0010e2dc 0023
.org 0x10e2de
	lsls r0, r0, #16	@ 0010e2de 0004
.org 0x10e2e0
	asrs r4, r0, #16	@ 0010e2e0 0414
.org 0x10e2e2
	ldr r5, [pc, #28]	@ 0010e2e2 074d
.org 0x10e2e4
	movs r1, #3	@ 0010e2e4 0321
.org 0x10e2e6
	ands r1, r4	@ 0010e2e6 2140
.org 0x10e2e8
	ldr r7, [pc, #24]	@ 0010e2e8 064f
.org 0x10e2ea
	lsls r0, r1, #16	@ 0010e2ea 0804
.org 0x10e2ec
	adds r0, r0, r1	@ 0010e2ec 4018
.org 0x10e2ee
	lsls r0, r0, #5	@ 0010e2ee 4001
.org 0x10e2f0
	subs r1, r5, r0	@ 0010e2f0 291a
.org 0x10e2f2
	movs r6, #32	@ 0010e2f2 2026
.org 0x10e2f4
	adds r0, r3, #4	@ 0010e2f4 181d
.org 0x10e2f6
	cmp r0, r4	@ 0010e2f6 a042
.org 0x10e2f8
	bgt.n 0x10e308	@ 0010e2f8 06dc
.org 0x10e2fa
	str r7, [r2, #0]	@ 0010e2fa 1760
.org 0x10e2fc
	b.n 0x10e312	@ 0010e2fc 09e0
.org 0x10e2fe
	.byte 0x00	@ 0010e2fe data
.org 0x10e2ff
	.byte 0x00	@ 0010e2ff data
.org 0x10e300
	.byte 0xa6,0x12,0xa7,0x12	@ 0010e300 data
.org 0x10e304
	.byte 0x26,0x12,0x27,0x12	@ 0010e304 data
.org 0x10e308
	cmp r3, r4	@ 0010e308 a342
.org 0x10e30a
	ble.n 0x10e310	@ 0010e30a 01dd
.org 0x10e30c
	str r5, [r2, #0]	@ 0010e30c 1560
.org 0x10e30e
	b.n 0x10e312	@ 0010e30e 00e0
.org 0x10e310
	str r1, [r2, #0]	@ 0010e310 1160
.org 0x10e312
	lsls r0, r0, #16	@ 0010e312 0004
.org 0x10e314
	lsrs r3, r0, #16	@ 0010e314 030c
.org 0x10e316
	subs r2, #64	@ 0010e316 403a
.org 0x10e318
	cmp r3, r6	@ 0010e318 b342
.org 0x10e31a
	blt.n 0x10e2f4	@ 0010e31a ebdb
.org 0x10e31c
	b.n 0x10e360	@ 0010e31c 20e0
.org 0x10e31e
	subs r0, #64	@ 0010e31e 4038
.org 0x10e320
	movs r3, #0	@ 0010e320 0023
.org 0x10e322
	lsls r0, r0, #16	@ 0010e322 0004
.org 0x10e324
	asrs r4, r0, #16	@ 0010e324 0414
.org 0x10e326
	ldr r5, [pc, #28]	@ 0010e326 074d
.org 0x10e328
	movs r1, #3	@ 0010e328 0321
.org 0x10e32a
	ands r1, r4	@ 0010e32a 2140
.org 0x10e32c
	ldr r7, [pc, #24]	@ 0010e32c 064f
.org 0x10e32e
	lsls r0, r1, #16	@ 0010e32e 0804
.org 0x10e330
	adds r0, r0, r1	@ 0010e330 4018
.org 0x10e332
	lsls r0, r0, #5	@ 0010e332 4001
.org 0x10e334
	subs r1, r5, r0	@ 0010e334 291a
.org 0x10e336
	movs r6, #32	@ 0010e336 2026
.org 0x10e338
	adds r0, r3, #4	@ 0010e338 181d
.org 0x10e33a
	cmp r0, r4	@ 0010e33a a042
.org 0x10e33c
	bgt.n 0x10e34c	@ 0010e33c 06dc
.org 0x10e33e
	str r7, [r2, #0]	@ 0010e33e 1760
