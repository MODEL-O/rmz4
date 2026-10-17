@ FUN_0800b358  entry 0x0800b358  size 280
.thumb
.org 0xb358
FUN_0800b358:
	push {r4, r5, r6, r7, lr}	@ 0000b358 f0b5
.org 0xb35a
	mov r7, r8	@ 0000b35a 4746
.org 0xb35c
	push {r7}	@ 0000b35c 80b4
.org 0xb35e
	sub sp, #8	@ 0000b35e 82b0
.org 0xb360
	adds r7, r0, #0	@ 0000b360 071c
.org 0xb362
	movs r0, #20	@ 0000b362 1420
.org 0xb364
	adds r0, r0, r7	@ 0000b364 c019
.org 0xb366
	mov r8, r0	@ 0000b366 8046
.org 0xb368
	ldr r0, [r7, #52]	@ 0000b368 786b
.org 0xb36a
	ldr r1, [r7, #68]	@ 0000b36a 796c
.org 0xb36c
	adds r2, r0, #0	@ 0000b36c 021c
.org 0xb36e
	muls r2, r1	@ 0000b36e 4a43
.org 0xb370
	asrs r2, r2, #8	@ 0000b370 1212
.org 0xb372
	ldr r0, [r7, #76]	@ 0000b372 f86c
.org 0xb374
	adds r2, r2, r0	@ 0000b374 1218
.org 0xb376
	ldr r0, [r7, #56]	@ 0000b376 b86b
.org 0xb378
	ldr r4, [r7, #72]	@ 0000b378 bc6c
.org 0xb37a
	adds r3, r0, #0	@ 0000b37a 031c
.org 0xb37c
	muls r3, r4	@ 0000b37c 6343
.org 0xb37e
	asrs r3, r3, #8	@ 0000b37e 1b12
.org 0xb380
	ldr r0, [r7, #80]	@ 0000b380 386d
.org 0xb382
	adds r3, r3, r0	@ 0000b382 1b18
.org 0xb384
	ldr r0, [r7, #60]	@ 0000b384 f86b
.org 0xb386
	muls r0, r1	@ 0000b386 4843
.org 0xb388
	asrs r0, r0, #8	@ 0000b388 0012
.org 0xb38a
	ldr r1, [r7, #84]	@ 0000b38a 796d
.org 0xb38c
	adds r5, r0, r1	@ 0000b38c 4518
.org 0xb38e
	ldr r0, [r7, #64]	@ 0000b38e 386c
.org 0xb390
	muls r0, r4	@ 0000b390 6043
.org 0xb392
	asrs r0, r0, #8	@ 0000b392 0012
.org 0xb394
	ldr r1, [r7, #88]	@ 0000b394 b96d
.org 0xb396
	adds r6, r0, r1	@ 0000b396 4618
.org 0xb398
	ldr r1, [r7, #104]	@ 0000b398 b96e
.org 0xb39a
	asrs r1, r1, #4	@ 0000b39a 0911
.org 0xb39c
	adds r1, r1, r2	@ 0000b39c 8918
.org 0xb39e
	subs r0, r1, r5	@ 0000b39e 481b
.org 0xb3a0
	adds r2, r0, #0	@ 0000b3a0 021c
.org 0xb3a2
	adds r2, #15	@ 0000b3a2 0f32
.org 0xb3a4
	subs r0, r3, r6	@ 0000b3a4 981b
.org 0xb3a6
	adds r4, r0, #0	@ 0000b3a6 041c
.org 0xb3a8
	adds r4, #15	@ 0000b3a8 0f34
.org 0xb3aa
	ldr r0, [r7, #44]	@ 0000b3aa f86a
.org 0xb3ac
	asrs r0, r0, #8	@ 0000b3ac 0012
.org 0xb3ae
	adds r0, r0, r1	@ 0000b3ae 4018
.org 0xb3b0
	str r0, [sp, #0]	@ 0000b3b0 0090
.org 0xb3b2
	ldr r0, [r7, #48]	@ 0000b3b2 386b
.org 0xb3b4
	asrs r0, r0, #8	@ 0000b3b4 0012
.org 0xb3b6
	adds r0, r0, r3	@ 0000b3b6 c018
.org 0xb3b8
	str r0, [sp, #4]	@ 0000b3b8 0190
.org 0xb3ba
	ldrh r0, [r7, #12]	@ 0000b3ba b889
.org 0xb3bc
	cmp r0, #0	@ 0000b3bc 0028
.org 0xb3be
	beq.n 0xb418	@ 0000b3be 2bd0
.org 0xb3c0
	cmp r2, #30	@ 0000b3c0 1e2a
.org 0xb3c2
	bhi.n 0xb3c8	@ 0000b3c2 01d8
.org 0xb3c4
	cmp r4, #30	@ 0000b3c4 1e2c
.org 0xb3c6
	bls.n 0xb3f0	@ 0000b3c6 13d9
.org 0xb3c8
	ldr r0, [r7, #92]	@ 0000b3c8 f86d
.org 0xb3ca
	lsrs r0, r0, #4	@ 0000b3ca 0009
.org 0xb3cc
	lsls r0, r0, #1	@ 0000b3cc 4000
.org 0xb3ce
	ldr r1, [pc, #28]	@ 0000b3ce 0749
.org 0xb3d0
	adds r0, r0, r1	@ 0000b3d0 4018
.org 0xb3d2
	ldrh r0, [r0, #0]	@ 0000b3d2 0088
.org 0xb3d4
	movs r2, #248	@ 0000b3d4 f822
.org 0xb3d6
	lsls r2, r2, #5	@ 0000b3d6 5201
.org 0xb3d8
	ands r2, r0	@ 0000b3d8 0240
.org 0xb3da
	lsls r2, r2, #3	@ 0000b3da d200
.org 0xb3dc
	movs r0, #192	@ 0000b3dc c020
.org 0xb3de
	lsls r0, r0, #19	@ 0000b3de c004
.org 0xb3e0
	adds r2, r2, r0	@ 0000b3e0 1218
.org 0xb3e2
	mov r0, r8	@ 0000b3e2 4046
.org 0xb3e4
	mov r1, sp	@ 0000b3e4 6946
.org 0xb3e6
	bl 0x3fe0	@ 0000b3e6 f8f7fbfd
.org 0xb3ea
	b.n 0xb46a	@ 0000b3ea 3ee0
.org 0xb3ec
	.byte 0x04,0x0a,0x00,0x02	@ 0000b3ec data
.org 0xb3f0
	ldr r0, [r7, #92]	@ 0000b3f0 f86d
.org 0xb3f2
	lsrs r0, r0, #4	@ 0000b3f2 0009
.org 0xb3f4
	lsls r0, r0, #1	@ 0000b3f4 4000
.org 0xb3f6
	ldr r1, [pc, #28]	@ 0000b3f6 0749
.org 0xb3f8
	adds r0, r0, r1	@ 0000b3f8 4018
.org 0xb3fa
	ldrh r0, [r0, #0]	@ 0000b3fa 0088
.org 0xb3fc
	movs r2, #248	@ 0000b3fc f822
.org 0xb3fe
	lsls r2, r2, #5	@ 0000b3fe 5201
.org 0xb400
	ands r2, r0	@ 0000b400 0240
.org 0xb402
	lsls r2, r2, #3	@ 0000b402 d200
.org 0xb404
	movs r0, #192	@ 0000b404 c020
.org 0xb406
	lsls r0, r0, #19	@ 0000b406 c004
.org 0xb408
	adds r2, r2, r0	@ 0000b408 1218
.org 0xb40a
	mov r0, r8	@ 0000b40a 4046
.org 0xb40c
	mov r1, sp	@ 0000b40c 6946
.org 0xb40e
	bl 0x3620	@ 0000b40e f8f707f9
.org 0xb412
	b.n 0xb46a	@ 0000b412 2ae0
.org 0xb414
	.byte 0x04,0x0a,0x00,0x02	@ 0000b414 data
.org 0xb418
	cmp r2, #30	@ 0000b418 1e2a
.org 0xb41a
	bhi.n 0xb42e	@ 0000b41a 08d8
.org 0xb41c
	cmp r4, #30	@ 0000b41c 1e2c
.org 0xb41e
	bhi.n 0xb42e	@ 0000b41e 06d8
.org 0xb420
	ldr r3, [pc, #28]	@ 0000b420 074b
.org 0xb422
	movs r1, #176	@ 0000b422 b021
.org 0xb424
	lsls r1, r1, #10	@ 0000b424 8902
.org 0xb426
	adds r0, r3, r1	@ 0000b426 5818
.org 0xb428
	ldrh r0, [r0, #0]	@ 0000b428 0088
.org 0xb42a
	cmp r0, #0	@ 0000b42a 0028
.org 0xb42c
	beq.n 0xb44c	@ 0000b42c 0ed0
.org 0xb42e
	ldr r2, [pc, #20]	@ 0000b42e 054a
.org 0xb430
	ldr r0, [pc, #20]	@ 0000b430 0548
.org 0xb432
	adds r3, r2, r0	@ 0000b432 1318
.org 0xb434
	mov r0, r8	@ 0000b434 4046
.org 0xb436
	mov r1, sp	@ 0000b436 6946
.org 0xb438
	bl 0x4f80	@ 0000b438 f9f7a2fd
.org 0xb43c
	b.n 0xb45e	@ 0000b43c 0fe0
.org 0xb43e
	.byte 0x00	@ 0000b43e data
.org 0xb43f
	.byte 0x00	@ 0000b43f data
.org 0xb440
	.byte 0xb0,0x0a,0x00,0x02	@ 0000b440 data
.org 0xb444
	.byte 0xd4,0xca,0x02,0x02	@ 0000b444 data
.org 0xb448
	.byte 0xbc,0x47,0xfd,0xff	@ 0000b448 data
.org 0xb44c
	ldr r1, [pc, #56]	@ 0000b44c 0e49
.org 0xb44e
	adds r2, r3, r1	@ 0000b44e 5a18
.org 0xb450
	movs r0, #252	@ 0000b450 fc20
.org 0xb452
	lsls r0, r0, #3	@ 0000b452 c000
.org 0xb454
	adds r3, r3, r0	@ 0000b454 1b18
.org 0xb456
	mov r0, r8	@ 0000b456 4046
.org 0xb458
	mov r1, sp	@ 0000b458 6946
.org 0xb45a
	bl 0x5124	@ 0000b45a f9f763fe
.org 0xb45e
	ldr r0, [pc, #44]	@ 0000b45e 0b48
.org 0xb460
	movs r1, #176	@ 0000b460 b021
.org 0xb462
	lsls r1, r1, #10	@ 0000b462 8902
.org 0xb464
	adds r0, r0, r1	@ 0000b464 4018
.org 0xb466
	movs r1, #0	@ 0000b466 0021
.org 0xb468
	strh r1, [r0, #0]	@ 0000b468 0180
.org 0xb46a
	ldr r1, [r7, #92]	@ 0000b46a f96d
.org 0xb46c
	lsrs r1, r1, #4	@ 0000b46c 0909
.org 0xb46e
	lsls r1, r1, #2	@ 0000b46e 8900
