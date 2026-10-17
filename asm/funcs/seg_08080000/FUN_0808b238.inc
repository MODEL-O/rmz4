@ FUN_0808b238  entry 0x0808b238  size 282
.thumb
.org 0x8b238
FUN_0808b238:
	push {r4, r5, r6, r7, lr}	@ 0008b238 f0b5
.org 0x8b23a
	adds r6, r0, #0	@ 0008b23a 061c
.org 0x8b23c
	movs r5, #0	@ 0008b23c 0025
.org 0x8b23e
	ldr r0, [pc, #108]	@ 0008b23e 1b48
.org 0x8b240
	ldr r0, [r0, #0]	@ 0008b240 0068
.org 0x8b242
	ldr r3, [r6, #84]	@ 0008b242 736d
.org 0x8b244
	ldr r0, [r0, #84]	@ 0008b244 406d
.org 0x8b246
	cmp r3, r0	@ 0008b246 8342
.org 0x8b248
	bge.n 0x8b24c	@ 0008b248 00da
.org 0x8b24a
	movs r5, #1	@ 0008b24a 0125
.org 0x8b24c
	ldr r1, [pc, #96]	@ 0008b24c 1849
.org 0x8b24e
	ldrb r0, [r6, #9]	@ 0008b24e 707a
.org 0x8b250
	lsls r0, r0, #2	@ 0008b250 8000
.org 0x8b252
	adds r0, r0, r1	@ 0008b252 4018
.org 0x8b254
	movs r1, #1	@ 0008b254 0121
.org 0x8b256
	str r1, [r6, #12]	@ 0008b256 f160
.org 0x8b258
	ldr r0, [r0, #0]	@ 0008b258 0068
.org 0x8b25a
	ldr r0, [r0, #4]	@ 0008b25a 4068
.org 0x8b25c
	str r0, [r6, #20]	@ 0008b25c 7061
.org 0x8b25e
	movs r4, #0	@ 0008b25e 0024
.org 0x8b260
	movs r2, #1	@ 0008b260 0122
.org 0x8b262
	strb r1, [r6, #13]	@ 0008b262 7173
.org 0x8b264
	strb r4, [r6, #14]	@ 0008b264 b473
.org 0x8b266
	strb r4, [r6, #15]	@ 0008b266 f473
.org 0x8b268
	ldrb r0, [r6, #10]	@ 0008b268 b07a
.org 0x8b26a
	movs r7, #0	@ 0008b26a 0027
.org 0x8b26c
	orrs r0, r2	@ 0008b26c 1043
.org 0x8b26e
	movs r1, #2	@ 0008b26e 0221
.org 0x8b270
	orrs r0, r1	@ 0008b270 0843
.org 0x8b272
	strb r0, [r6, #10]	@ 0008b272 b072
.org 0x8b274
	ldr r1, [r6, #88]	@ 0008b274 b16d
.org 0x8b276
	adds r0, r3, #0	@ 0008b276 181c
.org 0x8b278
	bl 0x8534	@ 0008b278 7df75cf9
.org 0x8b27c
	str r0, [r6, #88]	@ 0008b27c b065
.org 0x8b27e
	adds r1, r6, #0	@ 0008b27e 311c
.org 0x8b280
	adds r1, #180	@ 0008b280 b431
.org 0x8b282
	ldr r0, [r6, #84]	@ 0008b282 706d
.org 0x8b284
	str r0, [r1, #0]	@ 0008b284 0860
.org 0x8b286
	adds r0, r6, #0	@ 0008b286 301c
.org 0x8b288
	adds r0, #184	@ 0008b288 b830
.org 0x8b28a
	strb r5, [r0, #0]	@ 0008b28a 0570
.org 0x8b28c
	adds r0, #4	@ 0008b28c 0430
.org 0x8b28e
	strb r4, [r0, #0]	@ 0008b28e 0470
.org 0x8b290
	str r4, [r6, #44]	@ 0008b290 f462
.org 0x8b292
	adds r0, #1	@ 0008b292 0130
.org 0x8b294
	strb r4, [r0, #0]	@ 0008b294 0470
.org 0x8b296
	adds r0, r6, #0	@ 0008b296 301c
.org 0x8b298
	bl 0x1cc9c	@ 0008b298 91f700fd
.org 0x8b29c
	adds r2, r5, #0	@ 0008b29c 2a1c
.org 0x8b29e
	cmp r2, #0	@ 0008b29e 002a
.org 0x8b2a0
	beq.n 0x8b2b4	@ 0008b2a0 08d0
.org 0x8b2a2
	ldrb r0, [r6, #10]	@ 0008b2a2 b07a
.org 0x8b2a4
	movs r1, #16	@ 0008b2a4 1021
.org 0x8b2a6
	orrs r0, r1	@ 0008b2a6 0843
.org 0x8b2a8
	b.n 0x8b2ba	@ 0008b2a8 07e0
.org 0x8b2aa
	.byte 0x00	@ 0008b2aa data
.org 0x8b2ab
	.byte 0x00	@ 0008b2ab data
.org 0x8b2ac
	.byte 0xf0,0xdb,0x02,0x02	@ 0008b2ac data
.org 0x8b2b0
	.byte 0x40,0xdb,0x85,0x08	@ 0008b2b0 data
.org 0x8b2b4
	ldrb r1, [r6, #10]	@ 0008b2b4 b17a
.org 0x8b2b6
	movs r0, #239	@ 0008b2b6 ef20
.org 0x8b2b8
	ands r0, r1	@ 0008b2b8 0840
.org 0x8b2ba
	strb r0, [r6, #10]	@ 0008b2ba b072
.org 0x8b2bc
	adds r1, r2, #0	@ 0008b2bc 111c
.org 0x8b2be
	adds r0, r6, #0	@ 0008b2be 301c
.org 0x8b2c0
	adds r0, #76	@ 0008b2c0 4c30
.org 0x8b2c2
	strb r1, [r0, #0]	@ 0008b2c2 0170
.org 0x8b2c4
	adds r3, r6, #0	@ 0008b2c4 331c
.org 0x8b2c6
	adds r3, #74	@ 0008b2c6 4a33
.org 0x8b2c8
	lsls r1, r1, #4	@ 0008b2c8 0901
.org 0x8b2ca
	ldrb r2, [r3, #0]	@ 0008b2ca 1a78
.org 0x8b2cc
	movs r0, #17	@ 0008b2cc 1120
.org 0x8b2ce
	negs r0, r0	@ 0008b2ce 4042
.org 0x8b2d0
	ands r0, r2	@ 0008b2d0 1040
.org 0x8b2d2
	orrs r0, r1	@ 0008b2d2 0843
.org 0x8b2d4
	strb r0, [r3, #0]	@ 0008b2d4 1870
.org 0x8b2d6
	movs r1, #132	@ 0008b2d6 8421
.org 0x8b2d8
	lsls r1, r1, #6	@ 0008b2d8 8901
.org 0x8b2da
	adds r0, r6, #0	@ 0008b2da 301c
.org 0x8b2dc
	bl 0x1cf00	@ 0008b2dc 91f710fe
.org 0x8b2e0
	adds r0, r6, #0	@ 0008b2e0 301c
.org 0x8b2e2
	bl 0x1cff0	@ 0008b2e2 91f785fe
.org 0x8b2e6
	ldrb r1, [r6, #10]	@ 0008b2e6 b17a
.org 0x8b2e8
	movs r0, #4	@ 0008b2e8 0420
.org 0x8b2ea
	orrs r0, r1	@ 0008b2ea 0843
.org 0x8b2ec
	strb r0, [r6, #10]	@ 0008b2ec b072
.org 0x8b2ee
	adds r4, r6, #0	@ 0008b2ee 341c
.org 0x8b2f0
	adds r4, #116	@ 0008b2f0 7434
.org 0x8b2f2
	ldr r1, [pc, #92]	@ 0008b2f2 1749
.org 0x8b2f4
	adds r5, r6, #0	@ 0008b2f4 351c
.org 0x8b2f6
	adds r5, #84	@ 0008b2f6 5435
.org 0x8b2f8
	adds r0, r4, #0	@ 0008b2f8 201c
.org 0x8b2fa
	adds r2, r5, #0	@ 0008b2fa 2a1c
.org 0x8b2fc
	movs r3, #6	@ 0008b2fc 0623
.org 0x8b2fe
	bl 0x5760	@ 0008b2fe 7af72ffa
.org 0x8b302
	str r6, [r4, #44]	@ 0008b302 e662
.org 0x8b304
	ldr r0, [pc, #76]	@ 0008b304 1348
.org 0x8b306
	str r0, [r4, #36]	@ 0008b306 6062
.org 0x8b308
	adds r0, r6, #0	@ 0008b308 301c
.org 0x8b30a
	adds r1, r5, #0	@ 0008b30a 291c
.org 0x8b30c
	movs r2, #0	@ 0008b30c 0022
.org 0x8b30e
	movs r3, #0	@ 0008b30e 0023
.org 0x8b310
	bl 0x8bfc8	@ 0008b310 00f05afe
.org 0x8b314
	adds r2, r0, #0	@ 0008b314 021c
.org 0x8b316
	cmp r2, #0	@ 0008b316 002a
.org 0x8b318
	bne.n 0x8b35c	@ 0008b318 20d1
.org 0x8b31a
	ldrb r1, [r6, #10]	@ 0008b31a b17a
.org 0x8b31c
	movs r0, #254	@ 0008b31c fe20
.org 0x8b31e
	ands r0, r1	@ 0008b31e 0840
.org 0x8b320
	movs r1, #253	@ 0008b320 fd21
.org 0x8b322
	ands r0, r1	@ 0008b322 0840
.org 0x8b324
	strb r0, [r6, #10]	@ 0008b324 b072
.org 0x8b326
	adds r0, r6, #0	@ 0008b326 301c
.org 0x8b328
	adds r0, #140	@ 0008b328 8c30
.org 0x8b32a
	str r2, [r0, #0]	@ 0008b32a 0260
.org 0x8b32c
	adds r0, #4	@ 0008b32c 0430
.org 0x8b32e
	str r2, [r0, #0]	@ 0008b32e 0260
.org 0x8b330
	adds r0, #4	@ 0008b330 0430
.org 0x8b332
	strb r2, [r0, #0]	@ 0008b332 0270
.org 0x8b334
	ldrb r1, [r6, #10]	@ 0008b334 b17a
.org 0x8b336
	movs r0, #251	@ 0008b336 fb20
.org 0x8b338
	ands r0, r1	@ 0008b338 0840
.org 0x8b33a
	strb r0, [r6, #10]	@ 0008b33a b072
.org 0x8b33c
	ldr r1, [pc, #24]	@ 0008b33c 0649
.org 0x8b33e
	ldrb r0, [r6, #9]	@ 0008b33e 707a
.org 0x8b340
	lsls r0, r0, #2	@ 0008b340 8000
.org 0x8b342
	adds r0, r0, r1	@ 0008b342 4018
.org 0x8b344
	movs r1, #3	@ 0008b344 0321
.org 0x8b346
	str r1, [r6, #12]	@ 0008b346 f160
.org 0x8b348
	ldr r0, [r0, #0]	@ 0008b348 0068
.org 0x8b34a
	ldr r0, [r0, #12]	@ 0008b34a c068
.org 0x8b34c
	str r0, [r6, #20]	@ 0008b34c 7061
.org 0x8b34e
	b.n 0x8b362	@ 0008b34e 08e0
.org 0x8b350
	.byte 0x84,0xf5,0x85,0x08	@ 0008b350 data
