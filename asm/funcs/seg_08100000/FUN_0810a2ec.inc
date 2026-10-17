@ FUN_0810a2ec  entry 0x0810a2ec  size 246
.thumb
.org 0x10a2ec
FUN_0810a2ec:
	push {r4, r5, r6, r7, lr}	@ 0010a2ec f0b5
.org 0x10a2ee
	mov r7, r8	@ 0010a2ee 4746
.org 0x10a2f0
	push {r7}	@ 0010a2f0 80b4
.org 0x10a2f2
	adds r5, r0, #0	@ 0010a2f2 051c
.org 0x10a2f4
	ldr r0, [r5, #40]	@ 0010a2f4 a86a
.org 0x10a2f6
	mov r8, r0	@ 0010a2f6 8046
.org 0x10a2f8
	ldr r0, [pc, #104]	@ 0010a2f8 1a48
.org 0x10a2fa
	add r0, r8	@ 0010a2fa 4044
.org 0x10a2fc
	ldr r6, [r0, #0]	@ 0010a2fc 0668
.org 0x10a2fe
	ldrb r0, [r5, #16]	@ 0010a2fe 287c
.org 0x10a300
	lsls r0, r0, #11	@ 0010a300 c002
.org 0x10a302
	movs r1, #180	@ 0010a302 b421
.org 0x10a304
	lsls r1, r1, #6	@ 0010a304 8901
.org 0x10a306
	adds r0, r0, r1	@ 0010a306 4018
.org 0x10a308
	str r0, [r5, #84]	@ 0010a308 6865
.org 0x10a30a
	movs r0, #128	@ 0010a30a 8020
.org 0x10a30c
	lsls r0, r0, #6	@ 0010a30c 8001
.org 0x10a30e
	str r0, [r5, #88]	@ 0010a30e a865
.org 0x10a310
	adds r0, r6, #0	@ 0010a310 301c
.org 0x10a312
	bl 0x2b608	@ 0010a312 21f779f9
.org 0x10a316
	lsls r0, r0, #24	@ 0010a316 0006
.org 0x10a318
	cmp r0, #0	@ 0010a318 0028
.org 0x10a31a
	beq.n 0x10a368	@ 0010a31a 25d0
.org 0x10a31c
	adds r7, r6, #0	@ 0010a31c 371c
.org 0x10a31e
	adds r7, #164	@ 0010a31e a437
.org 0x10a320
	movs r0, #0	@ 0010a320 0020
.org 0x10a322
	ldrsh r4, [r7, r0]	@ 0010a322 3c5e
.org 0x10a324
	adds r0, r6, #0	@ 0010a324 301c
.org 0x10a326
	bl 0x2b62c	@ 0010a326 21f781f9
.org 0x10a32a
	lsls r0, r0, #24	@ 0010a32a 0006
.org 0x10a32c
	lsrs r0, r0, #24	@ 0010a32c 000e
.org 0x10a32e
	cmp r4, r0	@ 0010a32e 8442
.org 0x10a330
	ble.n 0x10a368	@ 0010a330 1add
.org 0x10a332
	adds r0, r6, #0	@ 0010a332 301c
.org 0x10a334
	bl 0x2b62c	@ 0010a334 21f77af9
.org 0x10a338
	ldrb r1, [r7, #0]	@ 0010a338 3978
.org 0x10a33a
	subs r1, r1, r0	@ 0010a33a 091a
.org 0x10a33c
	ldrb r0, [r5, #16]	@ 0010a33c 287c
.org 0x10a33e
	lsls r0, r0, #2	@ 0010a33e 8000
.org 0x10a340
	subs r1, r1, r0	@ 0010a340 091a
.org 0x10a342
	lsls r1, r1, #24	@ 0010a342 0906
.org 0x10a344
	lsrs r2, r1, #24	@ 0010a344 0a0e
.org 0x10a346
	asrs r1, r1, #24	@ 0010a346 0916
.org 0x10a348
	cmp r1, #4	@ 0010a348 0429
.org 0x10a34a
	ble.n 0x10a34e	@ 0010a34a 00dd
.org 0x10a34c
	movs r2, #4	@ 0010a34c 0422
.org 0x10a34e
	lsls r0, r2, #24	@ 0010a34e 1006
.org 0x10a350
	cmp r0, #0	@ 0010a350 0028
.org 0x10a352
	bge.n 0x10a356	@ 0010a352 00da
.org 0x10a354
	movs r2, #0	@ 0010a354 0022
.org 0x10a356
	lsls r0, r2, #24	@ 0010a356 1006
.org 0x10a358
	movs r1, #128	@ 0010a358 8021
.org 0x10a35a
	lsls r1, r1, #19	@ 0010a35a c904
.org 0x10a35c
	adds r0, r0, r1	@ 0010a35c 4018
.org 0x10a35e
	lsrs r2, r0, #24	@ 0010a35e 020e
.org 0x10a360
	b.n 0x10a388	@ 0010a360 12e0
.org 0x10a362
	.byte 0x00	@ 0010a362 data
.org 0x10a363
	.byte 0x00	@ 0010a363 data
.org 0x10a364
	.byte 0xa8,0x63,0x00,0x00	@ 0010a364 data
.org 0x10a368
	adds r0, r6, #0	@ 0010a368 301c
.org 0x10a36a
	adds r0, #164	@ 0010a36a a430
.org 0x10a36c
	ldrb r1, [r0, #0]	@ 0010a36c 0178
.org 0x10a36e
	ldrb r0, [r5, #16]	@ 0010a36e 287c
.org 0x10a370
	lsls r0, r0, #2	@ 0010a370 8000
.org 0x10a372
	subs r1, r1, r0	@ 0010a372 091a
.org 0x10a374
	lsls r1, r1, #24	@ 0010a374 0906
.org 0x10a376
	lsrs r2, r1, #24	@ 0010a376 0a0e
.org 0x10a378
	asrs r1, r1, #24	@ 0010a378 0916
.org 0x10a37a
	cmp r1, #4	@ 0010a37a 0429
.org 0x10a37c
	ble.n 0x10a380	@ 0010a37c 00dd
.org 0x10a37e
	movs r2, #4	@ 0010a37e 0422
.org 0x10a380
	lsls r0, r2, #24	@ 0010a380 1006
.org 0x10a382
	cmp r0, #0	@ 0010a382 0028
.org 0x10a384
	bge.n 0x10a388	@ 0010a384 00da
.org 0x10a386
	movs r2, #0	@ 0010a386 0022
.org 0x10a388
	lsls r1, r2, #24	@ 0010a388 1106
.org 0x10a38a
	asrs r1, r1, #8	@ 0010a38a 0912
.org 0x10a38c
	ldr r0, [pc, #56]	@ 0010a38c 0e48
.org 0x10a38e
	adds r1, r1, r0	@ 0010a38e 0918
.org 0x10a390
	lsrs r1, r1, #16	@ 0010a390 090c
.org 0x10a392
	adds r0, r5, #0	@ 0010a392 281c
.org 0x10a394
	bl 0x1cf00	@ 0010a394 12f7b4fd
.org 0x10a398
	adds r0, r5, #0	@ 0010a398 281c
.org 0x10a39a
	bl 0x1cff0	@ 0010a39a 12f729fe
.org 0x10a39e
	ldr r0, [pc, #44]	@ 0010a39e 0b48
.org 0x10a3a0
	add r0, r8	@ 0010a3a0 4044
.org 0x10a3a2
	ldrb r0, [r0, #2]	@ 0010a3a2 8078
.org 0x10a3a4
	cmp r0, #0	@ 0010a3a4 0028
.org 0x10a3a6
	beq.n 0x10a3d4	@ 0010a3a6 15d0
.org 0x10a3a8
	ldrb r1, [r5, #10]	@ 0010a3a8 a97a
.org 0x10a3aa
	movs r0, #254	@ 0010a3aa fe20
.org 0x10a3ac
	ands r0, r1	@ 0010a3ac 0840
.org 0x10a3ae
	movs r1, #253	@ 0010a3ae fd21
.org 0x10a3b0
	ands r0, r1	@ 0010a3b0 0840
.org 0x10a3b2
	strb r0, [r5, #10]	@ 0010a3b2 a872
.org 0x10a3b4
	ldr r1, [pc, #24]	@ 0010a3b4 0649
.org 0x10a3b6
	ldrb r0, [r5, #9]	@ 0010a3b6 687a
.org 0x10a3b8
	lsls r0, r0, #2	@ 0010a3b8 8000
.org 0x10a3ba
	adds r0, r0, r1	@ 0010a3ba 4018
.org 0x10a3bc
	movs r1, #3	@ 0010a3bc 0321
.org 0x10a3be
	str r1, [r5, #12]	@ 0010a3be e960
.org 0x10a3c0
	ldr r0, [r0, #0]	@ 0010a3c0 0068
.org 0x10a3c2
	ldr r0, [r0, #12]	@ 0010a3c2 c068
.org 0x10a3c4
	str r0, [r5, #20]	@ 0010a3c4 6861
.org 0x10a3c6
	b.n 0x10a3ea	@ 0010a3c6 10e0
.org 0x10a3c8
	.byte 0x00,0x00,0x08,0x34	@ 0010a3c8 data
.org 0x10a3cc
	.byte 0xcc,0x0d,0x00,0x00	@ 0010a3cc data
.org 0x10a3d0
	.byte 0xf8,0xca,0x86,0x08	@ 0010a3d0 data
.org 0x10a3d4
	ldr r0, [pc, #28]	@ 0010a3d4 0748
.org 0x10a3d6
	ldrh r1, [r0, #0]	@ 0010a3d6 0188
.org 0x10a3d8
	movs r0, #128	@ 0010a3d8 8020
.org 0x10a3da
	lsls r0, r0, #1	@ 0010a3da 4000
.org 0x10a3dc
	cmp r1, r0	@ 0010a3dc 8142
.org 0x10a3de
	bls.n 0x10a3ea	@ 0010a3de 04d9
.org 0x10a3e0
	ldr r0, [r5, #84]	@ 0010a3e0 686d
