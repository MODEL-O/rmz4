@ FUN_080042a4  entry 0x080042a4  size 1134
.thumb
.org 0x42a4
FUN_080042a4:
	push {r4, r5, r6, r7, lr}	@ 000042a4 f0b5
.org 0x42a6
	mov r7, sl	@ 000042a6 5746
.org 0x42a8
	mov r6, r9	@ 000042a8 4e46
.org 0x42aa
	mov r5, r8	@ 000042aa 4546
.org 0x42ac
	push {r5, r6, r7}	@ 000042ac e0b4
.org 0x42ae
	sub sp, #80	@ 000042ae 94b0
.org 0x42b0
	str r0, [sp, #0]	@ 000042b0 0090
.org 0x42b2
	adds r6, r1, #0	@ 000042b2 0e1c
.org 0x42b4
	str r2, [sp, #4]	@ 000042b4 0192
.org 0x42b6
	movs r1, #0	@ 000042b6 0021
.org 0x42b8
	ldrsh r0, [r6, r1]	@ 000042b8 705e
.org 0x42ba
	mov r9, r0	@ 000042ba 8146
.org 0x42bc
	movs r1, #15	@ 000042bc 0f21
.org 0x42be
	bl 0x128fb8	@ 000042be 24f17bfe
.org 0x42c2
	adds r4, r0, #0	@ 000042c2 041c
.org 0x42c4
	lsls r4, r4, #16	@ 000042c4 2404
.org 0x42c6
	asrs r4, r4, #16	@ 000042c6 2414
.org 0x42c8
	adds r4, #4	@ 000042c8 0434
.org 0x42ca
	ldr r2, [sp, #0]	@ 000042ca 009a
.org 0x42cc
	ldr r5, [r2, #20]	@ 000042cc 5569
.org 0x42ce
	adds r4, r5, r4	@ 000042ce 2c19
.org 0x42d0
	movs r0, #2	@ 000042d0 0220
.org 0x42d2
	ldrsh r3, [r6, r0]	@ 000042d2 335e
.org 0x42d4
	mov r8, r3	@ 000042d4 9846
.org 0x42d6
	movs r1, #10	@ 000042d6 0a21
.org 0x42d8
	mov sl, r1	@ 000042d8 8a46
.org 0x42da
	mov r0, r8	@ 000042da 4046
.org 0x42dc
	bl 0x128fb8	@ 000042dc 24f16cfe
.org 0x42e0
	lsls r0, r0, #16	@ 000042e0 0004
.org 0x42e2
	asrs r0, r0, #16	@ 000042e2 0014
.org 0x42e4
	ldrb r1, [r5, #0]	@ 000042e4 2978
.org 0x42e6
	muls r0, r1	@ 000042e6 4843
.org 0x42e8
	adds r4, r4, r0	@ 000042e8 2418
.org 0x42ea
	str r4, [sp, #8]	@ 000042ea 0294
.org 0x42ec
	mov r0, r9	@ 000042ec 4846
.org 0x42ee
	movs r1, #15	@ 000042ee 0f21
.org 0x42f0
	bl 0x129050	@ 000042f0 24f1aefe
.org 0x42f4
	lsls r0, r0, #16	@ 000042f4 0004
.org 0x42f6
	lsrs r0, r0, #16	@ 000042f6 000c
.org 0x42f8
	str r0, [sp, #12]	@ 000042f8 0390
.org 0x42fa
	mov r0, r8	@ 000042fa 4046
.org 0x42fc
	movs r1, #10	@ 000042fc 0a21
.org 0x42fe
	bl 0x129050	@ 000042fe 24f1a7fe
.org 0x4302
	lsls r0, r0, #16	@ 00004302 0004
.org 0x4304
	ldrb r2, [r4, #0]	@ 00004304 2278
.org 0x4306
	lsls r1, r2, #2	@ 00004306 9100
.org 0x4308
	adds r1, r1, r2	@ 00004308 8918
.org 0x430a
	lsls r2, r1, #4	@ 0000430a 0a01
.org 0x430c
	subs r2, r2, r1	@ 0000430c 521a
.org 0x430e
	lsls r2, r2, #2	@ 0000430e 9200
.org 0x4310
	ldr r5, [sp, #0]	@ 00004310 009d
.org 0x4312
	ldr r3, [r5, #16]	@ 00004312 2b69
.org 0x4314
	adds r3, r3, r2	@ 00004314 9b18
.org 0x4316
	ldr r1, [sp, #12]	@ 00004316 0399
.org 0x4318
	lsls r4, r1, #16	@ 00004318 0c04
.org 0x431a
	asrs r5, r4, #16	@ 0000431a 2514
.org 0x431c
	lsls r1, r5, #1	@ 0000431c 6900
.org 0x431e
	adds r3, r3, r1	@ 0000431e 5b18
.org 0x4320
	lsrs r2, r0, #16	@ 00004320 020c
.org 0x4322
	str r2, [sp, #16]	@ 00004322 0492
.org 0x4324
	asrs r2, r0, #16	@ 00004324 0214
.org 0x4326
	lsls r0, r2, #4	@ 00004326 1001
.org 0x4328
	subs r0, r0, r2	@ 00004328 801a
.org 0x432a
	lsls r0, r0, #1	@ 0000432a 4000
.org 0x432c
	adds r7, r3, r0	@ 0000432c 1f18
.org 0x432e
	movs r3, #0	@ 0000432e 0023
.org 0x4330
	mov r9, r3	@ 00004330 9946
.org 0x4332
	mov r8, r3	@ 00004332 9846
.org 0x4334
	mov r0, sl	@ 00004334 5046
.org 0x4336
	subs r0, r0, r2	@ 00004336 801a
.org 0x4338
	cmp r9, r0	@ 00004338 8145
.org 0x433a
	bge.n 0x4416	@ 0000433a 6cda
.org 0x433c
	movs r1, #6	@ 0000433c 0621
.org 0x433e
	ldrsh r0, [r6, r1]	@ 0000433e 705e
.org 0x4340
	str r4, [sp, #64]	@ 00004340 1094
.org 0x4342
	cmp r9, r0	@ 00004342 8145
.org 0x4344
	bge.n 0x4416	@ 00004344 67da
.org 0x4346
	str r4, [sp, #48]	@ 00004346 0c94
.org 0x4348
	movs r3, #15	@ 00004348 0f23
.org 0x434a
	subs r5, r3, r5	@ 0000434a 5d1b
.org 0x434c
	str r5, [sp, #52]	@ 0000434c 0d95
.org 0x434e
	str r2, [sp, #28]	@ 0000434e 0792
.org 0x4350
	ldrh r1, [r6, #2]	@ 00004350 7188
.org 0x4352
	lsls r1, r1, #4	@ 00004352 0901
.org 0x4354
	mov r5, r9	@ 00004354 4d46
.org 0x4356
	lsls r0, r5, #16	@ 00004356 2804
.org 0x4358
	asrs r0, r0, #12	@ 00004358 0013
.org 0x435a
	adds r1, r1, r0	@ 0000435a 0918
.org 0x435c
	lsls r1, r1, #16	@ 0000435c 0904
.org 0x435e
	lsrs r2, r1, #16	@ 0000435e 0a0c
.org 0x4360
	movs r0, #0	@ 00004360 0020
.org 0x4362
	mov r8, r0	@ 00004362 8046
.org 0x4364
	ldr r1, [sp, #52]	@ 00004364 0d99
.org 0x4366
	cmp r8, r1	@ 00004366 8845
.org 0x4368
	bge.n 0x43e6	@ 00004368 3dda
.org 0x436a
	movs r3, #4	@ 0000436a 0423
.org 0x436c
	ldrsh r0, [r6, r3]	@ 0000436c f05e
.org 0x436e
	cmp r8, r0	@ 0000436e 8045
.org 0x4370
	bge.n 0x43e6	@ 00004370 39da
.org 0x4372
	lsls r0, r2, #16	@ 00004372 1004
.org 0x4374
	asrs r0, r0, #14	@ 00004374 8013
.org 0x4376
	str r0, [sp, #76]	@ 00004376 1390
.org 0x4378
	movs r0, #240	@ 00004378 f020
.org 0x437a
	lsls r0, r0, #2	@ 0000437a 8000
.org 0x437c
	ldr r5, [sp, #76]	@ 0000437c 139d
.org 0x437e
	ands r5, r0	@ 0000437e 0540
.org 0x4380
	str r5, [sp, #76]	@ 00004380 1395
.org 0x4382
	ldr r0, [sp, #48]	@ 00004382 0c98
.org 0x4384
	asrs r0, r0, #16	@ 00004384 0014
.org 0x4386
	mov ip, r0	@ 00004386 8446
.org 0x4388
	movs r1, #128	@ 00004388 8021
.org 0x438a
	lsls r1, r1, #1	@ 0000438a 4900
.org 0x438c
	mov sl, r1	@ 0000438c 8a46
.org 0x438e
	ldrh r2, [r6, #0]	@ 0000438e 3288
.org 0x4390
	mov r5, r8	@ 00004390 4546
.org 0x4392
	lsls r3, r5, #16	@ 00004392 2b04
.org 0x4394
	asrs r3, r3, #16	@ 00004394 1b14
.org 0x4396
	adds r2, r2, r3	@ 00004396 d218
.org 0x4398
	ldrh r0, [r7, #0]	@ 00004398 3888
.org 0x439a
	lsls r0, r0, #3	@ 0000439a c000
.org 0x439c
	ldr r1, [sp, #0]	@ 0000439c 0099
.org 0x439e
	ldr r4, [r1, #12]	@ 0000439e cc68
.org 0x43a0
	adds r4, r4, r0	@ 000043a0 2418
.org 0x43a2
	lsls r2, r2, #20	@ 000043a2 1205
.org 0x43a4
	asrs r1, r2, #19	@ 000043a4 d114
.org 0x43a6
	movs r0, #30	@ 000043a6 1e20
.org 0x43a8
	ands r1, r0	@ 000043a8 0140
.org 0x43aa
	ldr r5, [sp, #76]	@ 000043aa 139d
.org 0x43ac
	adds r1, r5, r1	@ 000043ac 6918
.org 0x43ae
	mov r5, sl	@ 000043ae 5546
.org 0x43b0
	lsls r0, r5, #16	@ 000043b0 2804
.org 0x43b2
	ands r0, r2	@ 000043b2 1040
.org 0x43b4
	asrs r0, r0, #16	@ 000043b4 0014
.org 0x43b6
	lsls r0, r0, #3	@ 000043b6 c000
.org 0x43b8
	lsls r1, r1, #1	@ 000043b8 4900
.org 0x43ba
	ldr r2, [sp, #4]	@ 000043ba 019a
.org 0x43bc
	adds r1, r1, r2	@ 000043bc 8918
.org 0x43be
	adds r0, r0, r1	@ 000043be 4018
.org 0x43c0
	ldr r1, [r4, #0]	@ 000043c0 2168
.org 0x43c2
	str r1, [r0, #0]	@ 000043c2 0160
.org 0x43c4
	ldr r1, [r4, #4]	@ 000043c4 6168
.org 0x43c6
	str r1, [r0, #64]	@ 000043c6 0164
.org 0x43c8
	adds r7, #2	@ 000043c8 0237
.org 0x43ca
	adds r3, #1	@ 000043ca 0133
.org 0x43cc
	lsls r3, r3, #16	@ 000043cc 1b04
.org 0x43ce
	lsrs r5, r3, #16	@ 000043ce 1d0c
.org 0x43d0
	mov r8, r5	@ 000043d0 a846
.org 0x43d2
	asrs r1, r3, #16	@ 000043d2 1914
.org 0x43d4
	movs r2, #15	@ 000043d4 0f22
.org 0x43d6
	mov r3, ip	@ 000043d6 6346
.org 0x43d8
	subs r0, r2, r3	@ 000043d8 d01a
.org 0x43da
	cmp r1, r0	@ 000043da 8142
.org 0x43dc
	bge.n 0x43e6	@ 000043dc 03da
.org 0x43de
	movs r5, #4	@ 000043de 0425
.org 0x43e0
	ldrsh r0, [r6, r5]	@ 000043e0 705f
.org 0x43e2
	cmp r1, r0	@ 000043e2 8142
.org 0x43e4
	blt.n 0x438e	@ 000043e4 d3db
.org 0x43e6
	mov r1, r8	@ 000043e6 4146
.org 0x43e8
	lsls r0, r1, #16	@ 000043e8 0804
.org 0x43ea
	asrs r0, r0, #16	@ 000043ea 0014
.org 0x43ec
	movs r2, #15	@ 000043ec 0f22
.org 0x43ee
	subs r0, r2, r0	@ 000043ee 101a
.org 0x43f0
	lsls r0, r0, #1	@ 000043f0 4000
.org 0x43f2
	adds r7, r7, r0	@ 000043f2 3f18
.org 0x43f4
	mov r3, r9	@ 000043f4 4b46
.org 0x43f6
	lsls r0, r3, #16	@ 000043f6 1804
.org 0x43f8
	movs r5, #128	@ 000043f8 8025
.org 0x43fa
	lsls r5, r5, #9	@ 000043fa 6d02
.org 0x43fc
	adds r0, r0, r5	@ 000043fc 4019
.org 0x43fe
	lsrs r1, r0, #16	@ 000043fe 010c
.org 0x4400
	mov r9, r1	@ 00004400 8946
.org 0x4402
	asrs r1, r0, #16	@ 00004402 0114
.org 0x4404
	movs r0, #10	@ 00004404 0a20
.org 0x4406
	ldr r2, [sp, #28]	@ 00004406 079a
.org 0x4408
	subs r0, r0, r2	@ 00004408 801a
.org 0x440a
	cmp r1, r0	@ 0000440a 8142
.org 0x440c
	bge.n 0x4416	@ 0000440c 03da
.org 0x440e
	movs r3, #6	@ 0000440e 0623
.org 0x4410
	ldrsh r0, [r6, r3]	@ 00004410 f05e
.org 0x4412
	cmp r1, r0	@ 00004412 8142
.org 0x4414
	blt.n 0x4350	@ 00004414 9cdb
.org 0x4416
	ldr r5, [sp, #8]	@ 00004416 029d
.org 0x4418
	adds r5, #1	@ 00004418 0135
.org 0x441a
	str r5, [sp, #8]	@ 0000441a 0295
.org 0x441c
	ldrb r1, [r5, #0]	@ 0000441c 2978
.org 0x441e
	lsls r0, r1, #2	@ 0000441e 8800
.org 0x4420
	adds r0, r0, r1	@ 00004420 4018
.org 0x4422
	lsls r1, r0, #4	@ 00004422 0101
.org 0x4424
	subs r1, r1, r0	@ 00004424 091a
.org 0x4426
	lsls r1, r1, #2	@ 00004426 8900
.org 0x4428
	ldr r0, [sp, #0]	@ 00004428 0098
.org 0x442a
	ldr r3, [r0, #16]	@ 0000442a 0369
.org 0x442c
	adds r1, r3, r1	@ 0000442c 5918
.org 0x442e
	ldr r5, [sp, #16]	@ 0000442e 049d
.org 0x4430
	lsls r2, r5, #16	@ 00004430 2a04
.org 0x4432
	asrs r2, r2, #16	@ 00004432 1214
.org 0x4434
	lsls r0, r2, #4	@ 00004434 1001
.org 0x4436
	subs r0, r0, r2	@ 00004436 801a
.org 0x4438
	lsls r0, r0, #1	@ 00004438 4000
.org 0x443a
	adds r7, r1, r0	@ 0000443a 0f18
.org 0x443c
	mov r0, r8	@ 0000443c 4046
.org 0x443e
	lsls r1, r0, #16	@ 0000443e 0104
.org 0x4440
	lsrs r5, r1, #16	@ 00004440 0d0c
.org 0x4442
	str r5, [sp, #20]	@ 00004442 0595
.org 0x4444
	movs r0, #0	@ 00004444 0020
.org 0x4446
	mov r9, r0	@ 00004446 8146
.org 0x4448
	movs r0, #10	@ 00004448 0a20
.org 0x444a
	subs r4, r0, r2	@ 0000444a 841a
.org 0x444c
	ldr r2, [sp, #0]	@ 0000444c 009a
.org 0x444e
	ldr r2, [r2, #20]	@ 0000444e 5269
.org 0x4450
	str r2, [sp, #72]	@ 00004450 1292
.org 0x4452
	str r3, [sp, #68]	@ 00004452 1193
.org 0x4454
	ldr r3, [sp, #12]	@ 00004454 039b
.org 0x4456
	lsls r3, r3, #16	@ 00004456 1b04
.org 0x4458
	str r3, [sp, #64]	@ 00004458 1093
.org 0x445a
	ldrh r3, [r6, #6]	@ 0000445a f388
.org 0x445c
	adds r2, r1, #0	@ 0000445c 0a1c
.org 0x445e
	cmp r9, r4	@ 0000445e a145
.org 0x4460
	bge.n 0x4528	@ 00004460 62da
.org 0x4462
	lsls r0, r3, #16	@ 00004462 1804
.org 0x4464
	asrs r0, r0, #16	@ 00004464 0014
.org 0x4466
	cmp r9, r0	@ 00004466 8145
.org 0x4468
	bge.n 0x4528	@ 00004468 5eda
.org 0x446a
	lsls r0, r5, #16	@ 0000446a 2804
.org 0x446c
	asrs r0, r0, #16	@ 0000446c 0014
.org 0x446e
	str r0, [sp, #36]	@ 0000446e 0990
.org 0x4470
	str r4, [sp, #32]	@ 00004470 0894
.org 0x4472
	ldrh r1, [r6, #2]	@ 00004472 7188
.org 0x4474
	lsls r1, r1, #4	@ 00004474 0901
.org 0x4476
	mov r5, r9	@ 00004476 4d46
.org 0x4478
	lsls r0, r5, #16	@ 00004478 2804
.org 0x447a
	asrs r0, r0, #12	@ 0000447a 0013
.org 0x447c
	adds r1, r1, r0	@ 0000447c 0918
.org 0x447e
	lsls r1, r1, #16	@ 0000447e 0904
.org 0x4480
	lsrs r2, r1, #16	@ 00004480 0a0c
.org 0x4482
	ldr r0, [sp, #20]	@ 00004482 0598
.org 0x4484
	mov r8, r0	@ 00004484 8046
.org 0x4486
	lsls r4, r0, #16	@ 00004486 0404
.org 0x4488
	asrs r1, r4, #16	@ 00004488 2114
.org 0x448a
	movs r3, #4	@ 0000448a 0423
.org 0x448c
	ldrsh r0, [r6, r3]	@ 0000448c f05e
.org 0x448e
	cmp r1, r0	@ 0000448e 8142
.org 0x4490
	bge.n 0x44f6	@ 00004490 31da
.org 0x4492
	lsls r0, r2, #16	@ 00004492 1004
.org 0x4494
	asrs r0, r0, #14	@ 00004494 8013
.org 0x4496
	str r0, [sp, #76]	@ 00004496 1390
.org 0x4498
	movs r0, #240	@ 00004498 f020
.org 0x449a
	lsls r0, r0, #2	@ 0000449a 8000
.org 0x449c
	ldr r5, [sp, #76]	@ 0000449c 139d
.org 0x449e
	ands r5, r0	@ 0000449e 0540
.org 0x44a0
	str r5, [sp, #76]	@ 000044a0 1395
.org 0x44a2
	ldr r0, [sp, #0]	@ 000044a2 0098
.org 0x44a4
	ldr r0, [r0, #12]	@ 000044a4 c068
.org 0x44a6
	mov ip, r0	@ 000044a6 8446
.org 0x44a8
	movs r1, #128	@ 000044a8 8021
.org 0x44aa
	lsls r1, r1, #1	@ 000044aa 4900
.org 0x44ac
	mov sl, r1	@ 000044ac 8a46
.org 0x44ae
	ldrh r2, [r6, #0]	@ 000044ae 3288
.org 0x44b0
	asrs r4, r4, #16	@ 000044b0 2414
.org 0x44b2
	adds r2, r2, r4	@ 000044b2 1219
.org 0x44b4
	ldrh r3, [r7, #0]	@ 000044b4 3b88
.org 0x44b6
	lsls r3, r3, #3	@ 000044b6 db00
.org 0x44b8
	add r3, ip	@ 000044b8 6344
.org 0x44ba
	lsls r2, r2, #20	@ 000044ba 1205
.org 0x44bc
	asrs r1, r2, #19	@ 000044bc d114
.org 0x44be
	movs r0, #30	@ 000044be 1e20
.org 0x44c0
	ands r1, r0	@ 000044c0 0140
.org 0x44c2
	ldr r5, [sp, #76]	@ 000044c2 139d
.org 0x44c4
	adds r1, r5, r1	@ 000044c4 6918
.org 0x44c6
	mov r5, sl	@ 000044c6 5546
.org 0x44c8
	lsls r0, r5, #16	@ 000044c8 2804
.org 0x44ca
	ands r0, r2	@ 000044ca 1040
.org 0x44cc
	asrs r0, r0, #16	@ 000044cc 0014
.org 0x44ce
	lsls r0, r0, #3	@ 000044ce c000
.org 0x44d0
	lsls r1, r1, #1	@ 000044d0 4900
.org 0x44d2
	ldr r2, [sp, #4]	@ 000044d2 019a
.org 0x44d4
	adds r1, r1, r2	@ 000044d4 8918
.org 0x44d6
	adds r0, r0, r1	@ 000044d6 4018
.org 0x44d8
	ldr r1, [r3, #0]	@ 000044d8 1968
.org 0x44da
	str r1, [r0, #0]	@ 000044da 0160
.org 0x44dc
	ldr r1, [r3, #4]	@ 000044dc 5968
.org 0x44de
	str r1, [r0, #64]	@ 000044de 0164
.org 0x44e0
	adds r7, #2	@ 000044e0 0237
.org 0x44e2
	adds r4, #1	@ 000044e2 0134
.org 0x44e4
	lsls r4, r4, #16	@ 000044e4 2404
.org 0x44e6
	lsrs r4, r4, #16	@ 000044e6 240c
.org 0x44e8
	mov r8, r4	@ 000044e8 a046
.org 0x44ea
	lsls r4, r4, #16	@ 000044ea 2404
.org 0x44ec
	asrs r1, r4, #16	@ 000044ec 2114
.org 0x44ee
	movs r3, #4	@ 000044ee 0423
.org 0x44f0
	ldrsh r0, [r6, r3]	@ 000044f0 f05e
.org 0x44f2
	cmp r1, r0	@ 000044f2 8142
.org 0x44f4
	blt.n 0x44ae	@ 000044f4 dbdb
.org 0x44f6
	mov r5, r8	@ 000044f6 4546
.org 0x44f8
	lsls r2, r5, #16	@ 000044f8 2a04
.org 0x44fa
	asrs r1, r2, #16	@ 000044fa 1114
.org 0x44fc
	ldr r0, [sp, #36]	@ 000044fc 0998
.org 0x44fe
	subs r1, r1, r0	@ 000044fe 091a
.org 0x4500
	movs r0, #15	@ 00004500 0f20
.org 0x4502
	subs r0, r0, r1	@ 00004502 401a
.org 0x4504
	lsls r0, r0, #1	@ 00004504 4000
.org 0x4506
	adds r7, r7, r0	@ 00004506 3f18
.org 0x4508
	mov r1, r9	@ 00004508 4946
.org 0x450a
	lsls r0, r1, #16	@ 0000450a 0804
.org 0x450c
	movs r3, #128	@ 0000450c 8023
.org 0x450e
	lsls r3, r3, #9	@ 0000450e 5b02
.org 0x4510
	adds r0, r0, r3	@ 00004510 c018
.org 0x4512
	lsrs r5, r0, #16	@ 00004512 050c
.org 0x4514
	mov r9, r5	@ 00004514 a946
.org 0x4516
	asrs r1, r0, #16	@ 00004516 0114
.org 0x4518
	ldrh r3, [r6, #6]	@ 00004518 f388
.org 0x451a
	ldr r0, [sp, #32]	@ 0000451a 0898
.org 0x451c
	cmp r1, r0	@ 0000451c 8142
.org 0x451e
	bge.n 0x4528	@ 0000451e 03da
.org 0x4520
	lsls r0, r3, #16	@ 00004520 1804
.org 0x4522
	asrs r0, r0, #16	@ 00004522 0014
.org 0x4524
	cmp r1, r0	@ 00004524 8142
.org 0x4526
	blt.n 0x4472	@ 00004526 a4db
.org 0x4528
	ldr r1, [sp, #72]	@ 00004528 1299
.org 0x452a
	ldrb r0, [r1, #0]	@ 0000452a 0878
.org 0x452c
	ldr r5, [sp, #8]	@ 0000452c 029d
.org 0x452e
	adds r0, r5, r0	@ 0000452e 2818
.org 0x4530
	subs r0, #1	@ 00004530 0138
.org 0x4532
	str r0, [sp, #8]	@ 00004532 0290
.org 0x4534
	ldrb r0, [r0, #0]	@ 00004534 0078
.org 0x4536
	lsls r1, r0, #2	@ 00004536 8100
.org 0x4538
	adds r1, r1, r0	@ 00004538 0918
.org 0x453a
	lsls r0, r1, #4	@ 0000453a 0801
.org 0x453c
	subs r0, r0, r1	@ 0000453c 401a
.org 0x453e
	lsls r0, r0, #2	@ 0000453e 8000
.org 0x4540
	ldr r1, [sp, #68]	@ 00004540 1199
.org 0x4542
	adds r0, r1, r0	@ 00004542 0818
.org 0x4544
	ldr r5, [sp, #64]	@ 00004544 109d
.org 0x4546
	asrs r4, r5, #16	@ 00004546 2c14
.org 0x4548
	lsls r1, r4, #1	@ 00004548 6100
.org 0x454a
	adds r7, r0, r1	@ 0000454a 4718
.org 0x454c
	mov r0, r9	@ 0000454c 4846
.org 0x454e
	str r0, [sp, #24]	@ 0000454e 0690
.org 0x4550
	lsls r0, r0, #16	@ 00004550 0004
.org 0x4552
	lsrs r0, r0, #16	@ 00004552 000c
.org 0x4554
	mov r9, r0	@ 00004554 8146
.org 0x4556
	lsls r5, r0, #16	@ 00004556 0504
.org 0x4558
	lsls r0, r3, #16	@ 00004558 1804
.org 0x455a
	cmp r5, r0	@ 0000455a 8542
.org 0x455c
	bge.n 0x4626	@ 0000455c 63da
.org 0x455e
	ldr r1, [sp, #64]	@ 0000455e 1099
.org 0x4560
	str r1, [sp, #56]	@ 00004560 0e91
.org 0x4562
	movs r2, #15	@ 00004562 0f22
.org 0x4564
	subs r4, r2, r4	@ 00004564 141b
.org 0x4566
	str r4, [sp, #60]	@ 00004566 0f94
.org 0x4568
	ldrh r0, [r6, #2]	@ 00004568 7088
.org 0x456a
	lsls r0, r0, #4	@ 0000456a 0001
.org 0x456c
	asrs r1, r5, #12	@ 0000456c 2913
.org 0x456e
	adds r0, r0, r1	@ 0000456e 4018
.org 0x4570
	lsls r0, r0, #16	@ 00004570 0004
.org 0x4572
	lsrs r2, r0, #16	@ 00004572 020c
.org 0x4574
	movs r3, #0	@ 00004574 0023
.org 0x4576
	mov r8, r3	@ 00004576 9846
.org 0x4578
	mov r5, r9	@ 00004578 4d46
.org 0x457a
	lsls r5, r5, #16	@ 0000457a 2d04
.org 0x457c
	mov ip, r5	@ 0000457c ac46
.org 0x457e
	ldr r0, [sp, #60]	@ 0000457e 0f98
.org 0x4580
	cmp r8, r0	@ 00004580 8045
.org 0x4582
	bge.n 0x4600	@ 00004582 3dda
.org 0x4584
	movs r1, #4	@ 00004584 0421
.org 0x4586
	ldrsh r0, [r6, r1]	@ 00004586 705e
.org 0x4588
	cmp r8, r0	@ 00004588 8045
.org 0x458a
	bge.n 0x4600	@ 0000458a 39da
.org 0x458c
	lsls r0, r2, #16	@ 0000458c 1004
.org 0x458e
	asrs r0, r0, #14	@ 0000458e 8013
.org 0x4590
	str r0, [sp, #76]	@ 00004590 1390
.org 0x4592
	movs r0, #240	@ 00004592 f020
.org 0x4594
	lsls r0, r0, #2	@ 00004594 8000
.org 0x4596
	ldr r2, [sp, #76]	@ 00004596 139a
.org 0x4598
	ands r2, r0	@ 00004598 0240
.org 0x459a
	str r2, [sp, #76]	@ 0000459a 1392
.org 0x459c
	ldr r3, [sp, #56]	@ 0000459c 0e9b
.org 0x459e
	asrs r3, r3, #16	@ 0000459e 1b14
.org 0x45a0
	mov r9, r3	@ 000045a0 9946
.org 0x45a2
	movs r5, #128	@ 000045a2 8025
.org 0x45a4
	lsls r5, r5, #1	@ 000045a4 6d00
.org 0x45a6
	mov sl, r5	@ 000045a6 aa46
.org 0x45a8
	ldrh r2, [r6, #0]	@ 000045a8 3288
.org 0x45aa
	mov r0, r8	@ 000045aa 4046
.org 0x45ac
	lsls r3, r0, #16	@ 000045ac 0304
.org 0x45ae
	asrs r3, r3, #16	@ 000045ae 1b14
.org 0x45b0
	adds r2, r2, r3	@ 000045b0 d218
.org 0x45b2
	ldrh r0, [r7, #0]	@ 000045b2 3888
.org 0x45b4
	lsls r0, r0, #3	@ 000045b4 c000
.org 0x45b6
	ldr r1, [sp, #0]	@ 000045b6 0099
.org 0x45b8
	ldr r4, [r1, #12]	@ 000045b8 cc68
.org 0x45ba
	adds r4, r4, r0	@ 000045ba 2418
.org 0x45bc
	lsls r2, r2, #20	@ 000045bc 1205
.org 0x45be
	asrs r1, r2, #19	@ 000045be d114
.org 0x45c0
	movs r0, #30	@ 000045c0 1e20
.org 0x45c2
	ands r1, r0	@ 000045c2 0140
.org 0x45c4
	ldr r5, [sp, #76]	@ 000045c4 139d
.org 0x45c6
	adds r1, r5, r1	@ 000045c6 6918
.org 0x45c8
	mov r5, sl	@ 000045c8 5546
.org 0x45ca
	lsls r0, r5, #16	@ 000045ca 2804
.org 0x45cc
	ands r0, r2	@ 000045cc 1040
.org 0x45ce
	asrs r0, r0, #16	@ 000045ce 0014
.org 0x45d0
	lsls r0, r0, #3	@ 000045d0 c000
.org 0x45d2
	lsls r1, r1, #1	@ 000045d2 4900
.org 0x45d4
	ldr r2, [sp, #4]	@ 000045d4 019a
.org 0x45d6
	adds r1, r1, r2	@ 000045d6 8918
.org 0x45d8
	adds r0, r0, r1	@ 000045d8 4018
.org 0x45da
	ldr r1, [r4, #0]	@ 000045da 2168
.org 0x45dc
	str r1, [r0, #0]	@ 000045dc 0160
.org 0x45de
	ldr r1, [r4, #4]	@ 000045de 6168
.org 0x45e0
	str r1, [r0, #64]	@ 000045e0 0164
.org 0x45e2
	adds r7, #2	@ 000045e2 0237
.org 0x45e4
	adds r3, #1	@ 000045e4 0133
.org 0x45e6
	lsls r3, r3, #16	@ 000045e6 1b04
.org 0x45e8
	lsrs r5, r3, #16	@ 000045e8 1d0c
.org 0x45ea
	mov r8, r5	@ 000045ea a846
.org 0x45ec
	asrs r1, r3, #16	@ 000045ec 1914
.org 0x45ee
	movs r2, #15	@ 000045ee 0f22
.org 0x45f0
	mov r3, r9	@ 000045f0 4b46
.org 0x45f2
	subs r0, r2, r3	@ 000045f2 d01a
.org 0x45f4
	cmp r1, r0	@ 000045f4 8142
.org 0x45f6
	bge.n 0x4600	@ 000045f6 03da
.org 0x45f8
	movs r5, #4	@ 000045f8 0425
.org 0x45fa
	ldrsh r0, [r6, r5]	@ 000045fa 705f
.org 0x45fc
	cmp r1, r0	@ 000045fc 8142
.org 0x45fe
	blt.n 0x45a8	@ 000045fe d3db
.org 0x4600
	mov r0, r8	@ 00004600 4046
.org 0x4602
	lsls r2, r0, #16	@ 00004602 0204
.org 0x4604
	asrs r0, r2, #16	@ 00004604 1014
.org 0x4606
	movs r1, #15	@ 00004606 0f21
.org 0x4608
	subs r0, r1, r0	@ 00004608 081a
.org 0x460a
	lsls r0, r0, #1	@ 0000460a 4000
.org 0x460c
	adds r7, r7, r0	@ 0000460c 3f18
.org 0x460e
	movs r0, #128	@ 0000460e 8020
.org 0x4610
	lsls r0, r0, #9	@ 00004610 4002
.org 0x4612
	add r0, ip	@ 00004612 6044
.org 0x4614
	lsrs r0, r0, #16	@ 00004614 000c
.org 0x4616
	mov r9, r0	@ 00004616 8146
.org 0x4618
	lsls r5, r0, #16	@ 00004618 0504
.org 0x461a
	asrs r1, r5, #16	@ 0000461a 2914
.org 0x461c
	movs r3, #6	@ 0000461c 0623
.org 0x461e
	ldrsh r0, [r6, r3]	@ 0000461e f05e
.org 0x4620
	ldrh r3, [r6, #6]	@ 00004620 f388
.org 0x4622
	cmp r1, r0	@ 00004622 8142
.org 0x4624
	blt.n 0x4568	@ 00004624 a0db
.org 0x4626
	ldr r5, [sp, #8]	@ 00004626 029d
.org 0x4628
	ldrb r0, [r5, #1]	@ 00004628 6878
.org 0x462a
	lsls r1, r0, #2	@ 0000462a 8100
.org 0x462c
	adds r1, r1, r0	@ 0000462c 0918
.org 0x462e
	lsls r0, r1, #4	@ 0000462e 0801
.org 0x4630
	subs r0, r0, r1	@ 00004630 401a
.org 0x4632
	lsls r0, r0, #2	@ 00004632 8000
.org 0x4634
	ldr r1, [sp, #68]	@ 00004634 1199
.org 0x4636
	adds r7, r1, r0	@ 00004636 0f18
.org 0x4638
	lsrs r2, r2, #16	@ 00004638 120c
.org 0x463a
	str r2, [sp, #20]	@ 0000463a 0592
.org 0x463c
	ldr r2, [sp, #24]	@ 0000463c 069a
.org 0x463e
	lsls r0, r2, #16	@ 0000463e 1004
.org 0x4640
	lsrs r0, r0, #16	@ 00004640 000c
.org 0x4642
	mov r9, r0	@ 00004642 8146
.org 0x4644
	lsls r2, r0, #16	@ 00004644 0204
.org 0x4646
	lsls r0, r3, #16	@ 00004646 1804
.org 0x4648
	cmp r2, r0	@ 00004648 8242
.org 0x464a
	bge.n 0x4702	@ 0000464a 5ada
.org 0x464c
	ldr r3, [sp, #20]	@ 0000464c 059b
.org 0x464e
	lsls r0, r3, #16	@ 0000464e 1804
.org 0x4650
	asrs r0, r0, #16	@ 00004650 0014
.org 0x4652
	str r0, [sp, #40]	@ 00004652 0a90
.org 0x4654
	ldrh r0, [r6, #2]	@ 00004654 7088
.org 0x4656
	lsls r0, r0, #4	@ 00004656 0001
.org 0x4658
	asrs r1, r2, #12	@ 00004658 1113
.org 0x465a
	adds r0, r0, r1	@ 0000465a 4018
.org 0x465c
	lsls r0, r0, #16	@ 0000465c 0004
.org 0x465e
	lsrs r2, r0, #16	@ 0000465e 020c
.org 0x4660
	ldr r5, [sp, #20]	@ 00004660 059d
.org 0x4662
	mov r8, r5	@ 00004662 a846
.org 0x4664
	lsls r4, r5, #16	@ 00004664 2c04
.org 0x4666
	asrs r1, r4, #16	@ 00004666 2114
.org 0x4668
	movs r3, #4	@ 00004668 0423
.org 0x466a
	ldrsh r0, [r6, r3]	@ 0000466a f05e
.org 0x466c
	mov r5, r9	@ 0000466c 4d46
.org 0x466e
	lsls r5, r5, #16	@ 0000466e 2d04
.org 0x4670
	mov ip, r5	@ 00004670 ac46
.org 0x4672
	cmp r1, r0	@ 00004672 8142
.org 0x4674
	bge.n 0x46da	@ 00004674 31da
.org 0x4676
	lsls r0, r2, #16	@ 00004676 1004
.org 0x4678
	asrs r0, r0, #14	@ 00004678 8013
.org 0x467a
	str r0, [sp, #76]	@ 0000467a 1390
.org 0x467c
	movs r0, #240	@ 0000467c f020
.org 0x467e
	lsls r0, r0, #2	@ 0000467e 8000
.org 0x4680
	ldr r1, [sp, #76]	@ 00004680 1399
.org 0x4682
	ands r1, r0	@ 00004682 0140
.org 0x4684
	str r1, [sp, #76]	@ 00004684 1391
.org 0x4686
	ldr r2, [sp, #0]	@ 00004686 009a
.org 0x4688
	ldr r2, [r2, #12]	@ 00004688 d268
.org 0x468a
	mov r9, r2	@ 0000468a 9146
.org 0x468c
	movs r3, #128	@ 0000468c 8023
.org 0x468e
	lsls r3, r3, #1	@ 0000468e 5b00
.org 0x4690
	mov sl, r3	@ 00004690 9a46
.org 0x4692
	ldrh r2, [r6, #0]	@ 00004692 3288
.org 0x4694
	asrs r4, r4, #16	@ 00004694 2414
.org 0x4696
	adds r2, r2, r4	@ 00004696 1219
.org 0x4698
	ldrh r3, [r7, #0]	@ 00004698 3b88
.org 0x469a
	lsls r3, r3, #3	@ 0000469a db00
.org 0x469c
	add r3, r9	@ 0000469c 4b44
.org 0x469e
	lsls r2, r2, #20	@ 0000469e 1205
.org 0x46a0
	asrs r1, r2, #19	@ 000046a0 d114
.org 0x46a2
	movs r0, #30	@ 000046a2 1e20
.org 0x46a4
	ands r1, r0	@ 000046a4 0140
.org 0x46a6
	ldr r5, [sp, #76]	@ 000046a6 139d
.org 0x46a8
	adds r1, r5, r1	@ 000046a8 6918
.org 0x46aa
	mov r5, sl	@ 000046aa 5546
.org 0x46ac
	lsls r0, r5, #16	@ 000046ac 2804
.org 0x46ae
	ands r0, r2	@ 000046ae 1040
.org 0x46b0
	asrs r0, r0, #16	@ 000046b0 0014
.org 0x46b2
	lsls r0, r0, #3	@ 000046b2 c000
.org 0x46b4
	lsls r1, r1, #1	@ 000046b4 4900
.org 0x46b6
	ldr r2, [sp, #4]	@ 000046b6 019a
.org 0x46b8
	adds r1, r1, r2	@ 000046b8 8918
.org 0x46ba
	adds r0, r0, r1	@ 000046ba 4018
.org 0x46bc
	ldr r1, [r3, #0]	@ 000046bc 1968
.org 0x46be
	str r1, [r0, #0]	@ 000046be 0160
.org 0x46c0
	ldr r1, [r3, #4]	@ 000046c0 5968
.org 0x46c2
	str r1, [r0, #64]	@ 000046c2 0164
.org 0x46c4
	adds r7, #2	@ 000046c4 0237
.org 0x46c6
	adds r4, #1	@ 000046c6 0134
.org 0x46c8
	lsls r4, r4, #16	@ 000046c8 2404
.org 0x46ca
	lsrs r4, r4, #16	@ 000046ca 240c
.org 0x46cc
	mov r8, r4	@ 000046cc a046
.org 0x46ce
	lsls r4, r4, #16	@ 000046ce 2404
.org 0x46d0
	asrs r1, r4, #16	@ 000046d0 2114
.org 0x46d2
	movs r3, #4	@ 000046d2 0423
.org 0x46d4
	ldrsh r0, [r6, r3]	@ 000046d4 f05e
.org 0x46d6
	cmp r1, r0	@ 000046d6 8142
.org 0x46d8
	blt.n 0x4692	@ 000046d8 dbdb
.org 0x46da
	mov r5, r8	@ 000046da 4546
.org 0x46dc
	lsls r1, r5, #16	@ 000046dc 2904
.org 0x46de
	asrs r1, r1, #16	@ 000046de 0914
.org 0x46e0
	ldr r0, [sp, #40]	@ 000046e0 0a98
.org 0x46e2
	subs r1, r1, r0	@ 000046e2 091a
.org 0x46e4
	movs r0, #15	@ 000046e4 0f20
.org 0x46e6
	subs r0, r0, r1	@ 000046e6 401a
.org 0x46e8
	lsls r0, r0, #1	@ 000046e8 4000
.org 0x46ea
	adds r7, r7, r0	@ 000046ea 3f18
.org 0x46ec
	movs r0, #128	@ 000046ec 8020
.org 0x46ee
	lsls r0, r0, #9	@ 000046ee 4002
.org 0x46f0
	add r0, ip	@ 000046f0 6044
.org 0x46f2
	lsrs r0, r0, #16	@ 000046f2 000c
.org 0x46f4
	mov r9, r0	@ 000046f4 8146
.org 0x46f6
	lsls r2, r0, #16	@ 000046f6 0204
.org 0x46f8
	asrs r1, r2, #16	@ 000046f8 1114
.org 0x46fa
	movs r3, #6	@ 000046fa 0623
.org 0x46fc
	ldrsh r0, [r6, r3]	@ 000046fc f05e
.org 0x46fe
	cmp r1, r0	@ 000046fe 8142
.org 0x4700
	blt.n 0x4654	@ 00004700 a8db
.org 0x4702
	add sp, #80	@ 00004702 14b0
.org 0x4704
	pop {r3, r4, r5}	@ 00004704 38bc
.org 0x4706
	mov r8, r3	@ 00004706 9846
.org 0x4708
	mov r9, r4	@ 00004708 a146
.org 0x470a
	mov sl, r5	@ 0000470a aa46
.org 0x470c
	pop {r4, r5, r6, r7}	@ 0000470c f0bc
.org 0x470e
	pop {r0}	@ 0000470e 01bc
.org 0x4710
	bx r0	@ 00004710 0047
