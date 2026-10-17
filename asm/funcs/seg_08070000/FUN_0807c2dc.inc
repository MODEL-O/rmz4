@ FUN_0807c2dc  entry 0x0807c2dc  size 300
.thumb
.org 0x7c2dc
FUN_0807c2dc:
	push {r4, r5, r6, r7, lr}	@ 0007c2dc f0b5
.org 0x7c2de
	mov r7, sl	@ 0007c2de 5746
.org 0x7c2e0
	mov r6, r9	@ 0007c2e0 4e46
.org 0x7c2e2
	mov r5, r8	@ 0007c2e2 4546
.org 0x7c2e4
	push {r5, r6, r7}	@ 0007c2e4 e0b4
.org 0x7c2e6
	sub sp, #48	@ 0007c2e6 8cb0
.org 0x7c2e8
	adds r6, r0, #0	@ 0007c2e8 061c
.org 0x7c2ea
	mov r1, sp	@ 0007c2ea 6946
.org 0x7c2ec
	ldr r0, [pc, #280]	@ 0007c2ec 4648
.org 0x7c2ee
	ldmia r0!, {r2, r3, r4}	@ 0007c2ee 1cc8
.org 0x7c2f0
	stmia r1!, {r2, r3, r4}	@ 0007c2f0 1cc1
.org 0x7c2f2
	ldmia r0!, {r2, r3, r4}	@ 0007c2f2 1cc8
.org 0x7c2f4
	stmia r1!, {r2, r3, r4}	@ 0007c2f4 1cc1
.org 0x7c2f6
	ldmia r0!, {r2, r3}	@ 0007c2f6 0cc8
.org 0x7c2f8
	stmia r1!, {r2, r3}	@ 0007c2f8 0cc1
.org 0x7c2fa
	add r4, sp, #32	@ 0007c2fa 08ac
.org 0x7c2fc
	ldr r1, [pc, #268]	@ 0007c2fc 4349
.org 0x7c2fe
	adds r0, r4, #0	@ 0007c2fe 201c
.org 0x7c300
	movs r2, #4	@ 0007c300 0422
.org 0x7c302
	bl 0x129258	@ 0007c302 acf0a9ff
.org 0x7c306
	ldrb r0, [r6, #15]	@ 0007c306 f07b
.org 0x7c308
	mov sl, r4	@ 0007c308 a246
.org 0x7c30a
	cmp r0, #0	@ 0007c30a 0028
.org 0x7c30c
	bne.n 0x7c3aa	@ 0007c30c 4dd1
.org 0x7c30e
	movs r0, #162	@ 0007c30e a220
.org 0x7c310
	lsls r0, r0, #1	@ 0007c310 4000
.org 0x7c312
	bl 0x2b10	@ 0007c312 86f7fdfb
.org 0x7c316
	ldr r0, [pc, #248]	@ 0007c316 3e48
.org 0x7c318
	ldr r1, [pc, #248]	@ 0007c318 3e49
.org 0x7c31a
	movs r4, #181	@ 0007c31a b524
.org 0x7c31c
	lsls r4, r4, #1	@ 0007c31c 6400
.org 0x7c31e
	adds r1, r1, r4	@ 0007c31e 0919
.org 0x7c320
	ldrh r1, [r1, #0]	@ 0007c320 0988
.org 0x7c322
	ldrh r2, [r0, #6]	@ 0007c322 c288
.org 0x7c324
	lsrs r2, r2, #6	@ 0007c324 9209
.org 0x7c326
	subs r1, r1, r2	@ 0007c326 891a
.org 0x7c328
	lsls r1, r1, #5	@ 0007c328 4901
.org 0x7c32a
	movs r2, #128	@ 0007c32a 8022
.org 0x7c32c
	lsls r2, r2, #9	@ 0007c32c 5202
.org 0x7c32e
	adds r1, r1, r2	@ 0007c32e 8918
.org 0x7c330
	bl 0x1d30	@ 0007c330 85f7fefc
.org 0x7c334
	ldr r0, [pc, #224]	@ 0007c334 3848
.org 0x7c336
	ldr r1, [pc, #228]	@ 0007c336 3949
.org 0x7c338
	adds r1, r1, r4	@ 0007c338 0919
.org 0x7c33a
	ldrh r1, [r1, #0]	@ 0007c33a 0988
.org 0x7c33c
	ldrb r2, [r0, #7]	@ 0007c33c c279
.org 0x7c33e
	subs r1, r1, r2	@ 0007c33e 891a
.org 0x7c340
	lsls r1, r1, #5	@ 0007c340 4901
.org 0x7c342
	movs r3, #128	@ 0007c342 8023
.org 0x7c344
	lsls r3, r3, #2	@ 0007c344 9b00
.org 0x7c346
	adds r1, r1, r3	@ 0007c346 c918
.org 0x7c348
	bl 0x2208	@ 0007c348 85f75eff
.org 0x7c34c
	movs r7, #0	@ 0007c34c 0027
.org 0x7c34e
	movs r4, #180	@ 0007c34e b424
.org 0x7c350
	adds r4, r4, r6	@ 0007c350 a419
.org 0x7c352
	mov r9, r4	@ 0007c352 a146
.org 0x7c354
	movs r0, #184	@ 0007c354 b820
.org 0x7c356
	adds r0, r0, r6	@ 0007c356 8019
.org 0x7c358
	mov r8, r0	@ 0007c358 8046
.org 0x7c35a
	add r3, sp, #36	@ 0007c35a 09ab
.org 0x7c35c
	add r5, sp, #4	@ 0007c35c 01ad
.org 0x7c35e
	mov r4, sp	@ 0007c35e 6c46
.org 0x7c360
	ldr r1, [r4, #0]	@ 0007c360 2168
.org 0x7c362
	movs r2, #240	@ 0007c362 f022
.org 0x7c364
	lsls r2, r2, #7	@ 0007c364 d201
.org 0x7c366
	adds r1, r1, r2	@ 0007c366 8918
.org 0x7c368
	mov r2, r9	@ 0007c368 4a46
.org 0x7c36a
	ldr r0, [r2, #0]	@ 0007c36a 1068
.org 0x7c36c
	adds r0, r0, r1	@ 0007c36c 4018
.org 0x7c36e
	str r0, [sp, #36]	@ 0007c36e 0990
.org 0x7c370
	ldr r1, [r5, #0]	@ 0007c370 2968
.org 0x7c372
	movs r0, #160	@ 0007c372 a020
.org 0x7c374
	lsls r0, r0, #7	@ 0007c374 c001
.org 0x7c376
	adds r1, r1, r0	@ 0007c376 0918
.org 0x7c378
	mov r2, r8	@ 0007c378 4246
.org 0x7c37a
	ldr r0, [r2, #0]	@ 0007c37a 1068
.org 0x7c37c
	adds r0, r0, r1	@ 0007c37c 4018
.org 0x7c37e
	str r0, [r3, #4]	@ 0007c37e 5860
.org 0x7c380
	mov r1, sl	@ 0007c380 5146
.org 0x7c382
	adds r0, r1, r7	@ 0007c382 c819
.org 0x7c384
	ldrb r2, [r0, #0]	@ 0007c384 0278
.org 0x7c386
	adds r0, r6, #0	@ 0007c386 301c
.org 0x7c388
	adds r1, r3, #0	@ 0007c388 191c
.org 0x7c38a
	str r3, [sp, #44]	@ 0007c38a 0b93
.org 0x7c38c
	bl 0xb5cac	@ 0007c38c 39f08efc
.org 0x7c390
	adds r5, #8	@ 0007c390 0835
.org 0x7c392
	adds r4, #8	@ 0007c392 0834
.org 0x7c394
	adds r7, #1	@ 0007c394 0137
.org 0x7c396
	ldr r3, [sp, #44]	@ 0007c396 0b9b
.org 0x7c398
	cmp r7, #3	@ 0007c398 032f
.org 0x7c39a
	ble.n 0x7c360	@ 0007c39a e1dd
.org 0x7c39c
	adds r0, r6, #0	@ 0007c39c 301c
.org 0x7c39e
	movs r1, #12	@ 0007c39e 0c21
.org 0x7c3a0
	bl 0x7e8c8	@ 0007c3a0 02f092fa
.org 0x7c3a4
	ldrb r0, [r6, #15]	@ 0007c3a4 f07b
.org 0x7c3a6
	adds r0, #1	@ 0007c3a6 0130
.org 0x7c3a8
	strb r0, [r6, #15]	@ 0007c3a8 f073
.org 0x7c3aa
	adds r4, r6, #0	@ 0007c3aa 341c
.org 0x7c3ac
	adds r4, #188	@ 0007c3ac bc34
.org 0x7c3ae
	ldrb r0, [r4, #0]	@ 0007c3ae 2078
.org 0x7c3b0
	cmp r0, #0	@ 0007c3b0 0028
.org 0x7c3b2
	beq.n 0x7c3ba	@ 0007c3b2 02d0
.org 0x7c3b4
	adds r0, r6, #0	@ 0007c3b4 301c
.org 0x7c3b6
	bl 0x1cff0	@ 0007c3b6 a0f71bfe
.org 0x7c3ba
	adds r0, r6, #0	@ 0007c3ba 301c
.org 0x7c3bc
	adds r0, #116	@ 0007c3bc 7430
.org 0x7c3be
	ldr r3, [pc, #96]	@ 0007c3be 184b
.org 0x7c3c0
	ldr r2, [pc, #96]	@ 0007c3c0 184a
.org 0x7c3c2
	ldrb r1, [r4, #0]	@ 0007c3c2 2178
.org 0x7c3c4
	lsls r1, r1, #1	@ 0007c3c4 4900
.org 0x7c3c6
	adds r1, r1, r2	@ 0007c3c6 8918
.org 0x7c3c8
	ldrh r2, [r1, #0]	@ 0007c3c8 0a88
.org 0x7c3ca
	lsls r2, r2, #2	@ 0007c3ca 9200
.org 0x7c3cc
	adds r2, r2, r3	@ 0007c3cc d218
.org 0x7c3ce
	adds r1, r6, #0	@ 0007c3ce 311c
.org 0x7c3d0
	adds r1, #113	@ 0007c3d0 7131
.org 0x7c3d2
	ldrb r1, [r1, #0]	@ 0007c3d2 0978
.org 0x7c3d4
	lsls r1, r1, #24	@ 0007c3d4 0906
.org 0x7c3d6
	asrs r1, r1, #24	@ 0007c3d6 0916
.org 0x7c3d8
	ldr r2, [r2, #0]	@ 0007c3d8 1268
.org 0x7c3da
	lsls r1, r1, #2	@ 0007c3da 8900
.org 0x7c3dc
	adds r1, r1, r2	@ 0007c3dc 8918
.org 0x7c3de
	ldr r1, [r1, #0]	@ 0007c3de 0968
.org 0x7c3e0
	bl 0x5784	@ 0007c3e0 89f7d0f9
.org 0x7c3e4
	adds r0, r6, #0	@ 0007c3e4 301c
.org 0x7c3e6
	adds r0, #204	@ 0007c3e6 cc30
.org 0x7c3e8
	movs r2, #0	@ 0007c3e8 0022
.org 0x7c3ea
	ldrsh r1, [r0, r2]	@ 0007c3ea 815e
.org 0x7c3ec
	cmp r1, #0	@ 0007c3ec 0029
.org 0x7c3ee
	bne.n 0x7c3f8	@ 0007c3ee 03d1
.org 0x7c3f0
	ldrb r0, [r6, #14]	@ 0007c3f0 b07b
.org 0x7c3f2
	adds r0, #1	@ 0007c3f2 0130
.org 0x7c3f4
	strb r0, [r6, #14]	@ 0007c3f4 b073
.org 0x7c3f6
	strb r1, [r6, #15]	@ 0007c3f6 f173
.org 0x7c3f8
	add sp, #48	@ 0007c3f8 0cb0
.org 0x7c3fa
	pop {r3, r4, r5}	@ 0007c3fa 38bc
.org 0x7c3fc
	mov r8, r3	@ 0007c3fc 9846
.org 0x7c3fe
	mov r9, r4	@ 0007c3fe a146
.org 0x7c400
	mov sl, r5	@ 0007c400 aa46
.org 0x7c402
	pop {r4, r5, r6, r7}	@ 0007c402 f0bc
.org 0x7c404
	pop {r0}	@ 0007c404 01bc
.org 0x7c406
	bx r0	@ 0007c406 0047
