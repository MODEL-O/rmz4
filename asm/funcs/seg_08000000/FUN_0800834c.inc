@ FUN_0800834c  entry 0x0800834c  size 232
.thumb
.org 0x834c
FUN_0800834c:
	push {r4, r5, r6, r7, lr}	@ 0000834c f0b5
.org 0x834e
	mov r7, sl	@ 0000834e 5746
.org 0x8350
	mov r6, r9	@ 00008350 4e46
.org 0x8352
	mov r5, r8	@ 00008352 4546
.org 0x8354
	push {r5, r6, r7}	@ 00008354 e0b4
.org 0x8356
	sub sp, #8	@ 00008356 82b0
.org 0x8358
	adds r4, r0, #0	@ 00008358 041c
.org 0x835a
	mov r8, r1	@ 0000835a 8846
.org 0x835c
	str r4, [sp, #4]	@ 0000835c 0194
.org 0x835e
	ldr r6, [pc, #124]	@ 0000835e 1f4e
.org 0x8360
	movs r1, #232	@ 00008360 e821
.org 0x8362
	lsls r1, r1, #1	@ 00008362 4900
.org 0x8364
	adds r0, r6, r1	@ 00008364 7018
.org 0x8366
	ldrh r0, [r0, #0]	@ 00008366 0088
.org 0x8368
	cmp r0, #4	@ 00008368 0428
.org 0x836a
	bne.n 0x8382	@ 0000836a 0ad1
.org 0x836c
	ldr r2, [pc, #112]	@ 0000836c 1c4a
.org 0x836e
	adds r0, r4, r2	@ 0000836e a018
.org 0x8370
	movs r1, #240	@ 00008370 f021
.org 0x8372
	lsls r1, r1, #10	@ 00008372 8902
.org 0x8374
	bl 0x129050	@ 00008374 20f16cfe
.org 0x8378
	movs r7, #240	@ 00008378 f027
.org 0x837a
	lsls r7, r7, #8	@ 0000837a 3f02
.org 0x837c
	adds r7, r0, r7	@ 0000837c c719
.org 0x837e
	str r7, [sp, #4]	@ 0000837e 0197
.org 0x8380
	adds r4, r7, #0	@ 00008380 3c1c
.org 0x8382
	movs r5, #0	@ 00008382 0025
.org 0x8384
	mov r0, r8	@ 00008384 4046
.org 0x8386
	asrs r0, r0, #12	@ 00008386 0013
.org 0x8388
	mov r9, r0	@ 00008388 8146
.org 0x838a
	movs r1, #220	@ 0000838a dc21
.org 0x838c
	lsls r1, r1, #1	@ 0000838c 4900
.org 0x838e
	adds r1, r1, r6	@ 0000838e 8919
.org 0x8390
	mov sl, r1	@ 00008390 8a46
.org 0x8392
	movs r2, #252	@ 00008392 fc22
.org 0x8394
	lsls r2, r2, #3	@ 00008394 d200
.org 0x8396
	adds r6, r6, r2	@ 00008396 b618
.org 0x8398
	ldr r3, [pc, #72]	@ 00008398 124b
.org 0x839a
	ldrh r0, [r6, #0]	@ 0000839a 3088
.org 0x839c
	mov r7, r9	@ 0000839c 4f46
.org 0x839e
	muls r7, r0	@ 0000839e 4743
.org 0x83a0
	adds r0, r7, #0	@ 000083a0 381c
.org 0x83a2
	asrs r1, r4, #12	@ 000083a2 2113
.org 0x83a4
	adds r0, r0, r1	@ 000083a4 4018
.org 0x83a6
	adds r0, #2	@ 000083a6 0230
.org 0x83a8
	lsls r0, r0, #1	@ 000083a8 4000
.org 0x83aa
	adds r0, r0, r6	@ 000083aa 8019
.org 0x83ac
	ldrh r0, [r0, #0]	@ 000083ac 0088
.org 0x83ae
	mov r2, sl	@ 000083ae 5246
.org 0x83b0
	ldr r1, [r2, #0]	@ 000083b0 1168
.org 0x83b2
	lsls r0, r0, #1	@ 000083b2 4000
.org 0x83b4
	adds r0, r0, r1	@ 000083b4 4018
.org 0x83b6
	ldrh r1, [r0, #0]	@ 000083b6 0188
.org 0x83b8
	movs r2, #15	@ 000083b8 0f22
.org 0x83ba
	ands r2, r1	@ 000083ba 0a40
.org 0x83bc
	cmp r2, #0	@ 000083bc 002a
.org 0x83be
	beq.n 0x841e	@ 000083be 2ed0
.org 0x83c0
	movs r7, #132	@ 000083c0 8427
.org 0x83c2
	lsls r7, r7, #8	@ 000083c2 3f02
.org 0x83c4
	adds r0, r7, #0	@ 000083c4 381c
.org 0x83c6
	ands r1, r0	@ 000083c6 0140
.org 0x83c8
	cmp r1, #0	@ 000083c8 0029
.org 0x83ca
	bne.n 0x841e	@ 000083ca 28d1
.org 0x83cc
	cmp r2, #1	@ 000083cc 012a
.org 0x83ce
	bne.n 0x83ec	@ 000083ce 0dd1
.org 0x83d0
	movs r0, #128	@ 000083d0 8020
.org 0x83d2
	lsls r0, r0, #5	@ 000083d2 4001
.org 0x83d4
	adds r4, r4, r0	@ 000083d4 2418
.org 0x83d6
	ldr r0, [pc, #16]	@ 000083d6 0448
.org 0x83d8
	ands r4, r0	@ 000083d8 0440
.org 0x83da
	b.n 0x8418	@ 000083da 1de0
.org 0x83dc
	.byte 0xb0,0x0a,0x00,0x02	@ 000083dc data
.org 0x83e0
	.byte 0x00,0x10,0xff,0xff	@ 000083e0 data
.org 0x83e4
	.byte 0xff,0x0f,0x00,0x00	@ 000083e4 data
.org 0x83e8
	.byte 0x00,0xf0,0xff,0xff	@ 000083e8 data
.org 0x83ec
	ldr r1, [pc, #64]	@ 000083ec 1049
.org 0x83ee
	lsls r0, r2, #2	@ 000083ee 9000
.org 0x83f0
	adds r0, r0, r1	@ 000083f0 4018
.org 0x83f2
	adds r1, r3, #0	@ 000083f2 191c
.org 0x83f4
	bics r1, r4	@ 000083f4 a143
.org 0x83f6
	ldr r2, [r0, #0]	@ 000083f6 0268
.org 0x83f8
	mov r0, r8	@ 000083f8 4046
.org 0x83fa
	ands r0, r3	@ 000083fa 1840
.org 0x83fc
	str r3, [sp, #0]	@ 000083fc 0093
.org 0x83fe
	bl 0x128f84	@ 000083fe 20f1c1fd
.org 0x8402
	ldr r3, [sp, #0]	@ 00008402 009b
.org 0x8404
	cmp r0, #0	@ 00008404 0028
.org 0x8406
	beq.n 0x841e	@ 00008406 0ad0
.org 0x8408
	adds r1, r4, #0	@ 00008408 211c
.org 0x840a
	subs r4, r4, r0	@ 0000840a 241a
.org 0x840c
	eors r1, r4	@ 0000840c 6140
.org 0x840e
	movs r0, #128	@ 0000840e 8020
.org 0x8410
	lsls r0, r0, #5	@ 00008410 4001
.org 0x8412
	ands r1, r0	@ 00008412 0140
.org 0x8414
	cmp r1, #0	@ 00008414 0029
.org 0x8416
	beq.n 0x841e	@ 00008416 02d0
.org 0x8418
	adds r5, #1	@ 00008418 0135
.org 0x841a
	cmp r5, #15	@ 0000841a 0f2d
.org 0x841c
	ble.n 0x839a	@ 0000841c bddd
.org 0x841e
	cmp r5, #15	@ 0000841e 0f2d
.org 0x8420
	bgt.n 0x8434	@ 00008420 08dc
.org 0x8422
	adds r0, r4, #0	@ 00008422 201c
.org 0x8424
	mov r1, r8	@ 00008424 4146
.org 0x8426
	bl 0x95e8	@ 00008426 01f0dff8
.org 0x842a
	ldr r1, [sp, #4]	@ 0000842a 0199
.org 0x842c
	subs r0, r0, r1	@ 0000842c 401a
.org 0x842e
	b.n 0x8438	@ 0000842e 03e0
.org 0x8430
	.byte 0x94,0xb1,0x82,0x08	@ 00008430 data
