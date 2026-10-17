@ FUN_080fe328  entry 0x080fe328  size 214
.thumb
.org 0xfe328
FUN_080fe328:
	push {r4, r5, r6, r7, lr}	@ 000fe328 f0b5
.org 0xfe32a
	mov r7, sl	@ 000fe32a 5746
.org 0xfe32c
	mov r6, r9	@ 000fe32c 4e46
.org 0xfe32e
	mov r5, r8	@ 000fe32e 4546
.org 0xfe330
	push {r5, r6, r7}	@ 000fe330 e0b4
.org 0xfe332
	sub sp, #8	@ 000fe332 82b0
.org 0xfe334
	str r0, [sp, #0]	@ 000fe334 0090
.org 0xfe336
	ldr r0, [r0, #44]	@ 000fe336 c06a
.org 0xfe338
	mov r8, r0	@ 000fe338 8046
.org 0xfe33a
	ldrb r0, [r0, #13]	@ 000fe33a 407b
.org 0xfe33c
	cmp r0, #0	@ 000fe33c 0028
.org 0xfe33e
	bne.n 0xfe3ee	@ 000fe33e 56d1
.org 0xfe340
	ldr r1, [sp, #0]	@ 000fe340 0099
.org 0xfe342
	ldr r0, [r1, #12]	@ 000fe342 c868
.org 0xfe344
	ldr r2, [r0, #4]	@ 000fe344 4268
.org 0xfe346
	ldr r3, [r0, #8]	@ 000fe346 8368
.org 0xfe348
	adds r4, r2, #0	@ 000fe348 141c
.org 0xfe34a
	adds r4, #16	@ 000fe34a 1034
.org 0xfe34c
	ldr r0, [r0, #44]	@ 000fe34c c06a
.org 0xfe34e
	ldrb r1, [r0, #10]	@ 000fe34e 817a
.org 0xfe350
	movs r0, #16	@ 000fe350 1020
.org 0xfe352
	ands r0, r1	@ 000fe352 0840
.org 0xfe354
	cmp r0, #0	@ 000fe354 0028
.org 0xfe356
	bne.n 0xfe362	@ 000fe356 04d1
.org 0xfe358
	movs r0, #16	@ 000fe358 1020
.org 0xfe35a
	ldrsh r1, [r2, r0]	@ 000fe35a 115e
.org 0xfe35c
	ldr r0, [r3, #0]	@ 000fe35c 1868
.org 0xfe35e
	adds r5, r0, r1	@ 000fe35e 4518
.org 0xfe360
	b.n 0xfe36a	@ 000fe360 03e0
.org 0xfe362
	movs r0, #16	@ 000fe362 1020
.org 0xfe364
	ldrsh r1, [r2, r0]	@ 000fe364 115e
.org 0xfe366
	ldr r0, [r3, #0]	@ 000fe366 1868
.org 0xfe368
	subs r5, r0, r1	@ 000fe368 451a
.org 0xfe36a
	movs r0, #2	@ 000fe36a 0220
.org 0xfe36c
	ldrsh r1, [r4, r0]	@ 000fe36c 215e
.org 0xfe36e
	ldr r0, [r3, #4]	@ 000fe36e 5868
.org 0xfe370
	adds r6, r0, r1	@ 000fe370 4618
.org 0xfe372
	ldrh r0, [r4, #4]	@ 000fe372 a088
.org 0xfe374
	lsrs r0, r0, #1	@ 000fe374 4008
.org 0xfe376
	mov r9, r0	@ 000fe376 8146
.org 0xfe378
	ldrh r0, [r4, #6]	@ 000fe378 e088
.org 0xfe37a
	lsrs r7, r0, #1	@ 000fe37a 4708
.org 0xfe37c
	adds r0, r5, #0	@ 000fe37c 281c
.org 0xfe37e
	adds r1, r6, #0	@ 000fe37e 311c
.org 0xfe380
	bl 0x146bc	@ 000fe380 16f79cf9
.org 0xfe384
	lsls r0, r0, #16	@ 000fe384 0004
.org 0xfe386
	cmp r0, #0	@ 000fe386 0028
.org 0xfe388
	bne.n 0xfe3d0	@ 000fe388 22d1
.org 0xfe38a
	mov r1, r9	@ 000fe38a 4946
.org 0xfe38c
	adds r4, r5, r1	@ 000fe38c 6c18
.org 0xfe38e
	adds r0, r6, r7	@ 000fe38e f019
.org 0xfe390
	str r0, [sp, #4]	@ 000fe390 0190
.org 0xfe392
	adds r0, r4, #0	@ 000fe392 201c
.org 0xfe394
	ldr r1, [sp, #4]	@ 000fe394 0199
.org 0xfe396
	bl 0x146bc	@ 000fe396 16f791f9
.org 0xfe39a
	lsls r0, r0, #16	@ 000fe39a 0004
.org 0xfe39c
	cmp r0, #0	@ 000fe39c 0028
.org 0xfe39e
	bne.n 0xfe3d0	@ 000fe39e 17d1
.org 0xfe3a0
	subs r1, r6, r7	@ 000fe3a0 f11b
.org 0xfe3a2
	mov sl, r1	@ 000fe3a2 8a46
.org 0xfe3a4
	adds r0, r4, #0	@ 000fe3a4 201c
.org 0xfe3a6
	bl 0x146bc	@ 000fe3a6 16f789f9
.org 0xfe3aa
	lsls r0, r0, #16	@ 000fe3aa 0004
.org 0xfe3ac
	cmp r0, #0	@ 000fe3ac 0028
.org 0xfe3ae
	bne.n 0xfe3d0	@ 000fe3ae 0fd1
.org 0xfe3b0
	mov r0, r9	@ 000fe3b0 4846
.org 0xfe3b2
	subs r4, r5, r0	@ 000fe3b2 2c1a
.org 0xfe3b4
	adds r0, r4, #0	@ 000fe3b4 201c
.org 0xfe3b6
	ldr r1, [sp, #4]	@ 000fe3b6 0199
.org 0xfe3b8
	bl 0x146bc	@ 000fe3b8 16f780f9
.org 0xfe3bc
	lsls r0, r0, #16	@ 000fe3bc 0004
.org 0xfe3be
	cmp r0, #0	@ 000fe3be 0028
.org 0xfe3c0
	bne.n 0xfe3d0	@ 000fe3c0 06d1
.org 0xfe3c2
	adds r0, r4, #0	@ 000fe3c2 201c
.org 0xfe3c4
	mov r1, sl	@ 000fe3c4 5146
.org 0xfe3c6
	bl 0x146bc	@ 000fe3c6 16f779f9
.org 0xfe3ca
	lsls r0, r0, #16	@ 000fe3ca 0004
.org 0xfe3cc
	cmp r0, #0	@ 000fe3cc 0028
.org 0xfe3ce
	beq.n 0xfe3e0	@ 000fe3ce 07d0
.org 0xfe3d0
	mov r1, r8	@ 000fe3d0 4146
.org 0xfe3d2
	str r5, [r1, #100]	@ 000fe3d2 4d66
.org 0xfe3d4
	str r6, [r1, #104]	@ 000fe3d4 8e66
.org 0xfe3d6
	mov r0, r9	@ 000fe3d6 4846
.org 0xfe3d8
	str r0, [r1, #92]	@ 000fe3d8 c865
.org 0xfe3da
	str r7, [r1, #96]	@ 000fe3da 0f66
.org 0xfe3dc
	movs r0, #1	@ 000fe3dc 0120
.org 0xfe3de
	strb r0, [r1, #13]	@ 000fe3de 4873
.org 0xfe3e0
	ldr r1, [sp, #0]	@ 000fe3e0 0099
.org 0xfe3e2
	ldr r0, [r1, #24]	@ 000fe3e2 8869
.org 0xfe3e4
	movs r1, #2	@ 000fe3e4 0221
.org 0xfe3e6
	negs r1, r1	@ 000fe3e6 4942
.org 0xfe3e8
	ands r0, r1	@ 000fe3e8 0840
.org 0xfe3ea
	ldr r1, [sp, #0]	@ 000fe3ea 0099
.org 0xfe3ec
	str r0, [r1, #24]	@ 000fe3ec 8861
.org 0xfe3ee
	add sp, #8	@ 000fe3ee 02b0
.org 0xfe3f0
	pop {r3, r4, r5}	@ 000fe3f0 38bc
.org 0xfe3f2
	mov r8, r3	@ 000fe3f2 9846
.org 0xfe3f4
	mov r9, r4	@ 000fe3f4 a146
.org 0xfe3f6
	mov sl, r5	@ 000fe3f6 aa46
.org 0xfe3f8
	pop {r4, r5, r6, r7}	@ 000fe3f8 f0bc
.org 0xfe3fa
	pop {r0}	@ 000fe3fa 01bc
.org 0xfe3fc
	bx r0	@ 000fe3fc 0047
