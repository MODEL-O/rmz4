@ FUN_0811b2dc  entry 0x0811b2dc  size 258
.thumb
.org 0x11b2dc
FUN_0811b2dc:
	push {r4, r5, r6, r7, lr}	@ 0011b2dc f0b5
.org 0x11b2de
	sub sp, #4	@ 0011b2de 81b0
.org 0x11b2e0
	adds r7, r0, #0	@ 0011b2e0 071c
.org 0x11b2e2
	ldr r1, [pc, #136]	@ 0011b2e2 2249
.org 0x11b2e4
	adds r0, r7, r1	@ 0011b2e4 7818
.org 0x11b2e6
	ldr r5, [r0, #0]	@ 0011b2e6 0568
.org 0x11b2e8
	movs r2, #222	@ 0011b2e8 de22
.org 0x11b2ea
	lsls r2, r2, #4	@ 0011b2ea 1201
.org 0x11b2ec
	adds r4, r7, r2	@ 0011b2ec bc18
.org 0x11b2ee
	ldrb r0, [r4, #0]	@ 0011b2ee 2078
.org 0x11b2f0
	subs r0, #1	@ 0011b2f0 0138
.org 0x11b2f2
	lsls r0, r0, #24	@ 0011b2f2 0006
.org 0x11b2f4
	lsrs r0, r0, #24	@ 0011b2f4 000e
.org 0x11b2f6
	cmp r0, #4	@ 0011b2f6 0428
.org 0x11b2f8
	bls.n 0x11b308	@ 0011b2f8 06d9
.org 0x11b2fa
	adds r0, r7, #0	@ 0011b2fa 381c
.org 0x11b2fc
	bl 0x118248	@ 0011b2fc fcf7a4ff
.org 0x11b300
	lsls r0, r0, #24	@ 0011b300 0006
.org 0x11b302
	cmp r0, #0	@ 0011b302 0028
.org 0x11b304
	beq.n 0x11b308	@ 0011b304 00d0
.org 0x11b306
	b.n 0x11b882	@ 0011b306 bce2
.org 0x11b308
	ldrb r2, [r4, #0]	@ 0011b308 2278
.org 0x11b30a
	movs r6, #0	@ 0011b30a 0026
.org 0x11b30c
	ldr r0, [pc, #96]	@ 0011b30c 1848
.org 0x11b30e
	ldrh r1, [r0, #4]	@ 0011b30e 8188
.org 0x11b310
	movs r0, #64	@ 0011b310 4020
.org 0x11b312
	ands r0, r1	@ 0011b312 0840
.org 0x11b314
	cmp r0, #0	@ 0011b314 0028
.org 0x11b316
	beq.n 0x11b32a	@ 0011b316 08d0
.org 0x11b318
	adds r1, r2, #7	@ 0011b318 d11d
.org 0x11b31a
	adds r0, r1, #0	@ 0011b31a 081c
.org 0x11b31c
	asrs r0, r0, #3	@ 0011b31c c010
.org 0x11b31e
	lsls r0, r0, #3	@ 0011b31e c000
.org 0x11b320
	subs r0, r1, r0	@ 0011b320 081a
.org 0x11b322
	strb r0, [r4, #0]	@ 0011b322 2070
.org 0x11b324
	movs r0, #1	@ 0011b324 0120
.org 0x11b326
	bl 0x2b10	@ 0011b326 e7f6f3fb
.org 0x11b32a
	ldr r0, [pc, #68]	@ 0011b32a 1148
.org 0x11b32c
	ldrh r1, [r0, #4]	@ 0011b32c 8188
.org 0x11b32e
	movs r0, #128	@ 0011b32e 8020
.org 0x11b330
	ands r0, r1	@ 0011b330 0840
.org 0x11b332
	cmp r0, #0	@ 0011b332 0028
.org 0x11b334
	beq.n 0x11b352	@ 0011b334 0dd0
.org 0x11b336
	movs r0, #222	@ 0011b336 de20
.org 0x11b338
	lsls r0, r0, #4	@ 0011b338 0001
.org 0x11b33a
	adds r3, r7, r0	@ 0011b33a 3b18
.org 0x11b33c
	ldrb r1, [r3, #0]	@ 0011b33c 1978
.org 0x11b33e
	adds r2, r1, #1	@ 0011b33e 4a1c
.org 0x11b340
	adds r0, r2, #0	@ 0011b340 101c
.org 0x11b342
	asrs r0, r0, #3	@ 0011b342 c010
.org 0x11b344
	lsls r0, r0, #3	@ 0011b344 c000
.org 0x11b346
	subs r0, r2, r0	@ 0011b346 101a
.org 0x11b348
	strb r0, [r3, #0]	@ 0011b348 1870
.org 0x11b34a
	movs r6, #6	@ 0011b34a 0626
.org 0x11b34c
	movs r0, #1	@ 0011b34c 0120
.org 0x11b34e
	bl 0x2b10	@ 0011b34e e7f6dffb
.org 0x11b352
	movs r1, #222	@ 0011b352 de21
.org 0x11b354
	lsls r1, r1, #4	@ 0011b354 0901
.org 0x11b356
	adds r0, r7, r1	@ 0011b356 7818
.org 0x11b358
	ldrb r0, [r0, #0]	@ 0011b358 0078
.org 0x11b35a
	cmp r0, #7	@ 0011b35a 0728
.org 0x11b35c
	bls.n 0x11b360	@ 0011b35c 00d9
.org 0x11b35e
	b.n 0x11b800	@ 0011b35e 4fe2
.org 0x11b360
	lsls r0, r0, #2	@ 0011b360 8000
.org 0x11b362
	ldr r1, [pc, #16]	@ 0011b362 0449
.org 0x11b364
	adds r0, r0, r1	@ 0011b364 4018
.org 0x11b366
	ldr r0, [r0, #0]	@ 0011b366 0068
.org 0x11b368
	mov pc, r0	@ 0011b368 8746
.org 0x11b36a
	.byte 0x00	@ 0011b36a data
.org 0x11b36b
	.byte 0x00	@ 0011b36b data
.org 0x11b36c
	.byte 0xa8,0x63,0x00,0x00	@ 0011b36c data
.org 0x11b370
	.byte 0x60,0x07,0x00,0x02	@ 0011b370 data
.org 0x11b374
	.byte 0x78,0xb3,0x11,0x08	@ 0011b374 data
.org 0x11b378
	.byte 0x98,0xb3,0x11,0x08	@ 0011b378 data
.org 0x11b37c
	.byte 0x7e,0xb4,0x11,0x08	@ 0011b37c data
.org 0x11b380
	.byte 0x3e,0xb5,0x11,0x08	@ 0011b380 data
.org 0x11b384
	.byte 0xd4,0xb5,0x11,0x08	@ 0011b384 data
.org 0x11b388
	.byte 0x60,0xb6,0x11,0x08	@ 0011b388 data
.org 0x11b38c
	.byte 0xe2,0xb6,0x11,0x08	@ 0011b38c data
.org 0x11b390
	.byte 0xa6,0xb7,0x11,0x08	@ 0011b390 data
.org 0x11b394
	.byte 0xe0,0xb7,0x11,0x08	@ 0011b394 data
.org 0x11b398
	.byte 0x08	@ 0011b398 data
.org 0x11b399
	.byte 0x48	@ 0011b399 data
.org 0x11b39a
	.byte 0x81	@ 0011b39a data
.org 0x11b39b
	.byte 0x88	@ 0011b39b data
.org 0x11b39c
	.byte 0x10	@ 0011b39c data
.org 0x11b39d
	.byte 0x20	@ 0011b39d data
.org 0x11b39e
	.byte 0x08	@ 0011b39e data
.org 0x11b39f
	.byte 0x40	@ 0011b39f data
.org 0x11b3a0
	.byte 0x00	@ 0011b3a0 data
.org 0x11b3a1
	.byte 0x28	@ 0011b3a1 data
.org 0x11b3a2
	.byte 0x0d	@ 0011b3a2 data
.org 0x11b3a3
	.byte 0xd0	@ 0011b3a3 data
.org 0x11b3a4
	.byte 0x2c	@ 0011b3a4 data
.org 0x11b3a5
	.byte 0x1c	@ 0011b3a5 data
.org 0x11b3a6
	.byte 0xde	@ 0011b3a6 data
.org 0x11b3a7
	.byte 0x34	@ 0011b3a7 data
.org 0x11b3a8
	.byte 0x20	@ 0011b3a8 data
.org 0x11b3a9
	.byte 0x78	@ 0011b3a9 data
.org 0x11b3aa
	.byte 0x01	@ 0011b3aa data
.org 0x11b3ab
	.byte 0x30	@ 0011b3ab data
.org 0x11b3ac
	.byte 0x03	@ 0011b3ac data
.org 0x11b3ad
	.byte 0x21	@ 0011b3ad data
.org 0x11b3ae
	.byte 0x0d	@ 0011b3ae data
.org 0x11b3af
	.byte 0xf0	@ 0011b3af data
.org 0x11b3b0
	.byte 0x4f	@ 0011b3b0 data
.org 0x11b3b1
	.byte 0xfe	@ 0011b3b1 data
.org 0x11b3b2
	.byte 0x20	@ 0011b3b2 data
.org 0x11b3b3
	.byte 0x70	@ 0011b3b3 data
.org 0x11b3b4
	.byte 0x01	@ 0011b3b4 data
.org 0x11b3b5
	.byte 0x20	@ 0011b3b5 data
.org 0x11b3b6
	.byte 0xe7	@ 0011b3b6 data
.org 0x11b3b7
	.byte 0xf6	@ 0011b3b7 data
.org 0x11b3b8
	.byte 0xab	@ 0011b3b8 data
.org 0x11b3b9
	.byte 0xfb	@ 0011b3b9 data
.org 0x11b3ba
	.byte 0x10	@ 0011b3ba data
.org 0x11b3bb
	.byte 0xe0	@ 0011b3bb data
.org 0x11b3bc
	.byte 0x60	@ 0011b3bc data
.org 0x11b3bd
	.byte 0x07	@ 0011b3bd data
.org 0x11b3be
	.byte 0x00	@ 0011b3be data
.org 0x11b3bf
	.byte 0x02	@ 0011b3bf data
.org 0x11b3c0
	.byte 0x20	@ 0011b3c0 data
.org 0x11b3c1
	.byte 0x20	@ 0011b3c1 data
.org 0x11b3c2
	.byte 0x08	@ 0011b3c2 data
.org 0x11b3c3
	.byte 0x40	@ 0011b3c3 data
.org 0x11b3c4
	.byte 0x2c	@ 0011b3c4 data
.org 0x11b3c5
	.byte 0x1c	@ 0011b3c5 data
.org 0x11b3c6
	.byte 0xde	@ 0011b3c6 data
.org 0x11b3c7
	.byte 0x34	@ 0011b3c7 data
.org 0x11b3c8
	.byte 0x00	@ 0011b3c8 data
.org 0x11b3c9
	.byte 0x28	@ 0011b3c9 data
.org 0x11b3ca
	.byte 0x08	@ 0011b3ca data
.org 0x11b3cb
	.byte 0xd0	@ 0011b3cb data
.org 0x11b3cc
	.byte 0x20	@ 0011b3cc data
.org 0x11b3cd
	.byte 0x78	@ 0011b3cd data
.org 0x11b3ce
	.byte 0x02	@ 0011b3ce data
.org 0x11b3cf
	.byte 0x30	@ 0011b3cf data
.org 0x11b3d0
	.byte 0x03	@ 0011b3d0 data
.org 0x11b3d1
	.byte 0x21	@ 0011b3d1 data
.org 0x11b3d2
	.byte 0x0d	@ 0011b3d2 data
.org 0x11b3d3
	.byte 0xf0	@ 0011b3d3 data
.org 0x11b3d4
	.byte 0x3d	@ 0011b3d4 data
.org 0x11b3d5
	.byte 0xfe	@ 0011b3d5 data
.org 0x11b3d6
	.byte 0x20	@ 0011b3d6 data
.org 0x11b3d7
	.byte 0x70	@ 0011b3d7 data
.org 0x11b3d8
	.byte 0x01	@ 0011b3d8 data
.org 0x11b3d9
	.byte 0x20	@ 0011b3d9 data
.org 0x11b3da
	.byte 0xe7	@ 0011b3da data
.org 0x11b3db
	.byte 0xf6	@ 0011b3db data
.org 0x11b3dc
	.byte 0x99	@ 0011b3dc data
.org 0x11b3dd
	.byte 0xfb	@ 0011b3dd data
