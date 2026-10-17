@ FUN_080bc2d4  entry 0x080bc2d4  size 222
.thumb
.org 0xbc2d4
FUN_080bc2d4:
	push {r4, r5, lr}	@ 000bc2d4 30b5
.org 0xbc2d6
	adds r5, r0, #0	@ 000bc2d6 051c
.org 0xbc2d8
	ldr r1, [r5, #40]	@ 000bc2d8 a96a
.org 0xbc2da
	ldrb r0, [r5, #15]	@ 000bc2da e87b
.org 0xbc2dc
	cmp r0, #0	@ 000bc2dc 0028
.org 0xbc2de
	bne.n 0xbc314	@ 000bc2de 19d1
.org 0xbc2e0
	adds r1, #191	@ 000bc2e0 bf31
.org 0xbc2e2
	ldrb r0, [r1, #0]	@ 000bc2e2 0878
.org 0xbc2e4
	movs r4, #4	@ 000bc2e4 0424
.org 0xbc2e6
	orrs r0, r4	@ 000bc2e6 2043
.org 0xbc2e8
	strb r0, [r1, #0]	@ 000bc2e8 0870
.org 0xbc2ea
	adds r0, r5, #0	@ 000bc2ea 281c
.org 0xbc2ec
	adds r0, #116	@ 000bc2ec 7430
.org 0xbc2ee
	ldr r1, [pc, #196]	@ 000bc2ee 3149
.org 0xbc2f0
	bl 0x5784	@ 000bc2f0 49f748fa
.org 0xbc2f4
	ldr r1, [pc, #192]	@ 000bc2f4 3049
.org 0xbc2f6
	ldr r0, [pc, #196]	@ 000bc2f6 3148
.org 0xbc2f8
	strh r0, [r1, #0]	@ 000bc2f8 0880
.org 0xbc2fa
	adds r2, r5, #0	@ 000bc2fa 2a1c
.org 0xbc2fc
	adds r2, #69	@ 000bc2fc 4532
.org 0xbc2fe
	ldrb r1, [r2, #0]	@ 000bc2fe 1178
.org 0xbc300
	movs r0, #13	@ 000bc300 0d20
.org 0xbc302
	negs r0, r0	@ 000bc302 4042
.org 0xbc304
	ands r0, r1	@ 000bc304 0840
.org 0xbc306
	orrs r0, r4	@ 000bc306 2043
.org 0xbc308
	strb r0, [r2, #0]	@ 000bc308 1070
.org 0xbc30a
	movs r0, #32	@ 000bc30a 2020
.org 0xbc30c
	strb r0, [r5, #18]	@ 000bc30c a874
.org 0xbc30e
	ldrb r0, [r5, #15]	@ 000bc30e e87b
.org 0xbc310
	adds r0, #1	@ 000bc310 0130
.org 0xbc312
	strb r0, [r5, #15]	@ 000bc312 e873
.org 0xbc314
	adds r0, r5, #0	@ 000bc314 281c
.org 0xbc316
	bl 0x1cff0	@ 000bc316 60f76bfe
.org 0xbc31a
	ldrb r0, [r5, #18]	@ 000bc31a a87c
.org 0xbc31c
	subs r4, r0, #1	@ 000bc31c 441e
.org 0xbc31e
	strb r4, [r5, #18]	@ 000bc31e ac74
.org 0xbc320
	ldrb r0, [r5, #18]	@ 000bc320 a87c
.org 0xbc322
	ldr r2, [pc, #156]	@ 000bc322 274a
.org 0xbc324
	lsls r0, r0, #25	@ 000bc324 4006
.org 0xbc326
	lsrs r0, r0, #23	@ 000bc326 c00d
.org 0xbc328
	adds r0, r0, r2	@ 000bc328 8018
.org 0xbc32a
	movs r1, #0	@ 000bc32a 0021
.org 0xbc32c
	ldrsh r0, [r0, r1]	@ 000bc32c 405e
.org 0xbc32e
	adds r1, r0, #0	@ 000bc32e 011c
.org 0xbc330
	cmp r0, #0	@ 000bc330 0028
.org 0xbc332
	bge.n 0xbc336	@ 000bc332 00da
.org 0xbc334
	adds r1, r0, #3	@ 000bc334 c11c
.org 0xbc336
	asrs r0, r1, #2	@ 000bc336 8810
.org 0xbc338
	lsls r0, r0, #24	@ 000bc338 0006
.org 0xbc33a
	lsrs r0, r0, #23	@ 000bc33a c00d
.org 0xbc33c
	adds r0, r0, r2	@ 000bc33c 8018
.org 0xbc33e
	movs r1, #0	@ 000bc33e 0021
.org 0xbc340
	ldrsh r0, [r0, r1]	@ 000bc340 405e
.org 0xbc342
	cmp r0, #0	@ 000bc342 0028
.org 0xbc344
	bge.n 0xbc348	@ 000bc344 00da
.org 0xbc346
	adds r0, #15	@ 000bc346 0f30
.org 0xbc348
	asrs r2, r0, #4	@ 000bc348 0211
.org 0xbc34a
	ldr r3, [pc, #108]	@ 000bc34a 1b4b
.org 0xbc34c
	movs r0, #31	@ 000bc34c 1f20
.org 0xbc34e
	adds r1, r2, #0	@ 000bc34e 111c
.org 0xbc350
	ands r1, r0	@ 000bc350 0140
.org 0xbc352
	movs r0, #16	@ 000bc352 1020
.org 0xbc354
	subs r0, r0, r2	@ 000bc354 801a
.org 0xbc356
	lsls r0, r0, #8	@ 000bc356 0002
.org 0xbc358
	orrs r1, r0	@ 000bc358 0143
.org 0xbc35a
	strh r1, [r3, #2]	@ 000bc35a 5980
.org 0xbc35c
	lsls r0, r4, #24	@ 000bc35c 2006
.org 0xbc35e
	lsrs r2, r0, #24	@ 000bc35e 020e
.org 0xbc360
	cmp r2, #0	@ 000bc360 002a
.org 0xbc362
	bne.n 0xbc3ac	@ 000bc362 23d1
.org 0xbc364
	strh r2, [r3, #0]	@ 000bc364 1a80
.org 0xbc366
	adds r3, r5, #0	@ 000bc366 2b1c
.org 0xbc368
	adds r3, #69	@ 000bc368 4533
.org 0xbc36a
	ldrb r1, [r3, #0]	@ 000bc36a 1978
.org 0xbc36c
	movs r0, #13	@ 000bc36c 0d20
.org 0xbc36e
	negs r0, r0	@ 000bc36e 4042
.org 0xbc370
	ands r0, r1	@ 000bc370 0840
.org 0xbc372
	strb r0, [r3, #0]	@ 000bc372 1870
.org 0xbc374
	ldrb r1, [r5, #10]	@ 000bc374 a97a
.org 0xbc376
	movs r0, #254	@ 000bc376 fe20
.org 0xbc378
	ands r0, r1	@ 000bc378 0840
.org 0xbc37a
	movs r1, #253	@ 000bc37a fd21
.org 0xbc37c
	ands r0, r1	@ 000bc37c 0840
.org 0xbc37e
	strb r0, [r5, #10]	@ 000bc37e a872
.org 0xbc380
	adds r0, r5, #0	@ 000bc380 281c
.org 0xbc382
	adds r0, #140	@ 000bc382 8c30
.org 0xbc384
	str r2, [r0, #0]	@ 000bc384 0260
.org 0xbc386
	adds r0, #4	@ 000bc386 0430
.org 0xbc388
	str r2, [r0, #0]	@ 000bc388 0260
.org 0xbc38a
	adds r1, r5, #0	@ 000bc38a 291c
.org 0xbc38c
	adds r1, #148	@ 000bc38c 9431
.org 0xbc38e
	movs r0, #0	@ 000bc38e 0020
.org 0xbc390
	strb r0, [r1, #0]	@ 000bc390 0870
.org 0xbc392
	ldrb r1, [r5, #10]	@ 000bc392 a97a
.org 0xbc394
	movs r0, #251	@ 000bc394 fb20
.org 0xbc396
	ands r0, r1	@ 000bc396 0840
.org 0xbc398
	strb r0, [r5, #10]	@ 000bc398 a872
.org 0xbc39a
	ldr r1, [pc, #40]	@ 000bc39a 0a49
.org 0xbc39c
	ldrb r0, [r5, #9]	@ 000bc39c 687a
.org 0xbc39e
	lsls r0, r0, #2	@ 000bc39e 8000
.org 0xbc3a0
	adds r0, r0, r1	@ 000bc3a0 4018
.org 0xbc3a2
	movs r1, #3	@ 000bc3a2 0321
.org 0xbc3a4
	str r1, [r5, #12]	@ 000bc3a4 e960
.org 0xbc3a6
	ldr r0, [r0, #0]	@ 000bc3a6 0068
.org 0xbc3a8
	ldr r0, [r0, #12]	@ 000bc3a8 c068
.org 0xbc3aa
	str r0, [r5, #20]	@ 000bc3aa 6861
.org 0xbc3ac
	pop {r4, r5}	@ 000bc3ac 30bc
.org 0xbc3ae
	pop {r0}	@ 000bc3ae 01bc
.org 0xbc3b0
	bx r0	@ 000bc3b0 0047
