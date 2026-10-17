@ FUN_080ea348  entry 0x080ea348  size 150
.thumb
.org 0xea348
FUN_080ea348:
	push {r4, r5, r6, lr}	@ 000ea348 70b5
.org 0xea34a
	ldr r3, [r0, #44]	@ 000ea34a c36a
.org 0xea34c
	ldr r0, [r0, #12]	@ 000ea34c c068
.org 0xea34e
	ldr r5, [r0, #44]	@ 000ea34e c56a
.org 0xea350
	movs r0, #8	@ 000ea350 0820
.org 0xea352
	ldrsb r0, [r5, r0]	@ 000ea352 2856
.org 0xea354
	cmp r0, #0	@ 000ea354 0028
.org 0xea356
	bne.n 0xea3de	@ 000ea356 42d1
.org 0xea358
	ldr r0, [r3, #88]	@ 000ea358 986d
.org 0xea35a
	ldr r1, [r5, #88]	@ 000ea35a a96d
.org 0xea35c
	cmp r0, r1	@ 000ea35c 8842
.org 0xea35e
	blt.n 0xea3de	@ 000ea35e 3edb
.org 0xea360
	subs r1, r0, r1	@ 000ea360 411a
.org 0xea362
	movs r0, #128	@ 000ea362 8020
.org 0xea364
	lsls r0, r0, #4	@ 000ea364 0001
.org 0xea366
	cmp r1, r0	@ 000ea366 8142
.org 0xea368
	bgt.n 0xea3de	@ 000ea368 39dc
.org 0xea36a
	ldrb r2, [r3, #16]	@ 000ea36a 1a7c
.org 0xea36c
	movs r6, #2	@ 000ea36c 0226
.org 0xea36e
	adds r0, r6, #0	@ 000ea36e 301c
.org 0xea370
	ands r0, r2	@ 000ea370 1040
.org 0xea372
	lsls r0, r0, #24	@ 000ea372 0006
.org 0xea374
	lsrs r4, r0, #24	@ 000ea374 040e
.org 0xea376
	cmp r4, #0	@ 000ea376 002c
.org 0xea378
	beq.n 0xea3a6	@ 000ea378 15d0
.org 0xea37a
	ldr r0, [pc, #32]	@ 000ea37a 0848
.org 0xea37c
	ldrb r1, [r0, #4]	@ 000ea37c 0179
.org 0xea37e
	movs r0, #8	@ 000ea37e 0820
.org 0xea380
	ands r0, r1	@ 000ea380 0840
.org 0xea382
	lsls r0, r0, #24	@ 000ea382 0006
.org 0xea384
	lsrs r2, r0, #24	@ 000ea384 020e
.org 0xea386
	cmp r2, #0	@ 000ea386 002a
.org 0xea388
	bne.n 0xea3de	@ 000ea388 29d1
.org 0xea38a
	ldr r1, [r3, #84]	@ 000ea38a 596d
.org 0xea38c
	ldr r0, [r5, #84]	@ 000ea38c 686d
.org 0xea38e
	cmp r1, r0	@ 000ea38e 8142
.org 0xea390
	ble.n 0xea3a0	@ 000ea390 06dd
.org 0xea392
	movs r0, #1	@ 000ea392 0120
.org 0xea394
	strb r0, [r3, #13]	@ 000ea394 5873
.org 0xea396
	strb r2, [r3, #14]	@ 000ea396 9a73
.org 0xea398
	b.n 0xea3c8	@ 000ea398 16e0
.org 0xea39a
	.byte 0x00	@ 000ea39a data
.org 0xea39b
	.byte 0x00	@ 000ea39b data
.org 0xea39c
	.byte 0xb0,0xe8,0x02,0x02	@ 000ea39c data
.org 0xea3a0
	strb r6, [r3, #13]	@ 000ea3a0 5e73
.org 0xea3a2
	strb r2, [r3, #14]	@ 000ea3a2 9a73
.org 0xea3a4
	b.n 0xea3c8	@ 000ea3a4 10e0
.org 0xea3a6
	ldr r1, [r3, #84]	@ 000ea3a6 596d
.org 0xea3a8
	ldr r0, [r5, #84]	@ 000ea3a8 686d
.org 0xea3aa
	cmp r1, r0	@ 000ea3aa 8142
.org 0xea3ac
	ble.n 0xea3bc	@ 000ea3ac 06dd
.org 0xea3ae
	movs r1, #1	@ 000ea3ae 0121
.org 0xea3b0
	adds r0, r1, #0	@ 000ea3b0 081c
.org 0xea3b2
	ands r0, r2	@ 000ea3b2 1040
.org 0xea3b4
	cmp r0, #0	@ 000ea3b4 0028
.org 0xea3b6
	bne.n 0xea3de	@ 000ea3b6 12d1
.org 0xea3b8
	strb r1, [r3, #13]	@ 000ea3b8 5973
.org 0xea3ba
	b.n 0xea3c6	@ 000ea3ba 04e0
.org 0xea3bc
	movs r0, #1	@ 000ea3bc 0120
.org 0xea3be
	ands r0, r2	@ 000ea3be 1040
.org 0xea3c0
	cmp r0, #0	@ 000ea3c0 0028
.org 0xea3c2
	beq.n 0xea3de	@ 000ea3c2 0cd0
.org 0xea3c4
	strb r6, [r3, #13]	@ 000ea3c4 5e73
.org 0xea3c6
	strb r4, [r3, #14]	@ 000ea3c6 9c73
.org 0xea3c8
	ldr r0, [pc, #24]	@ 000ea3c8 0648
.org 0xea3ca
	adds r1, r5, r0	@ 000ea3ca 2918
.org 0xea3cc
	movs r0, #1	@ 000ea3cc 0120
.org 0xea3ce
	strb r0, [r1, #0]	@ 000ea3ce 0870
.org 0xea3d0
	ldr r2, [pc, #20]	@ 000ea3d0 054a
.org 0xea3d2
	ldrh r1, [r2, #20]	@ 000ea3d2 918a
.org 0xea3d4
	orrs r0, r1	@ 000ea3d4 0843
.org 0xea3d6
	strh r0, [r2, #20]	@ 000ea3d6 9082
.org 0xea3d8
	adds r0, r3, #0	@ 000ea3d8 181c
.org 0xea3da
	adds r0, #180	@ 000ea3da b430
.org 0xea3dc
	str r5, [r0, #0]	@ 000ea3dc 0560
