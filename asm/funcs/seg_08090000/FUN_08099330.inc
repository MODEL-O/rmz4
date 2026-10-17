@ FUN_08099330  entry 0x08099330  size 210
.thumb
.org 0x99330
FUN_08099330:
	push {r4, r5, r6, r7, lr}	@ 00099330 f0b5
.org 0x99332
	sub sp, #8	@ 00099332 82b0
.org 0x99334
	adds r4, r0, #0	@ 00099334 041c
.org 0x99336
	ldr r0, [r4, #84]	@ 00099336 606d
.org 0x99338
	str r0, [sp, #0]	@ 00099338 0090
.org 0x9933a
	ldr r0, [r4, #88]	@ 0009933a a06d
.org 0x9933c
	str r0, [sp, #4]	@ 0009933c 0190
.org 0x9933e
	ldr r5, [pc, #24]	@ 0009933e 064d
.org 0x99340
	adds r0, r4, #0	@ 00099340 201c
.org 0x99342
	adds r0, #188	@ 00099342 bc30
.org 0x99344
	ldrb r2, [r0, #0]	@ 00099344 0278
.org 0x99346
	ldrb r1, [r4, #10]	@ 00099346 a17a
.org 0x99348
	movs r3, #16	@ 00099348 1023
.org 0x9934a
	adds r0, r3, #0	@ 0009934a 181c
.org 0x9934c
	ands r0, r1	@ 0009934c 0840
.org 0x9934e
	cmp r0, #0	@ 0009934e 0028
.org 0x99350
	beq.n 0x9935c	@ 00099350 04d0
.org 0x99352
	orrs r3, r2	@ 00099352 1343
.org 0x99354
	b.n 0x9935e	@ 00099354 03e0
.org 0x99356
	.byte 0x00	@ 00099356 data
.org 0x99357
	.byte 0x00	@ 00099357 data
.org 0x99358
	.byte 0xd8,0x0c,0x86,0x08	@ 00099358 data
.org 0x9935c
	adds r3, r2, #0	@ 0009935c 131c
.org 0x9935e
	mov r0, sp	@ 0009935e 6846
.org 0x99360
	adds r1, r5, #0	@ 00099360 291c
.org 0x99362
	movs r2, #0	@ 00099362 0022
.org 0x99364
	bl 0xd4c8c	@ 00099364 3bf092fc
.org 0x99368
	mov r7, sp	@ 00099368 6f46
.org 0x9936a
	ldr r0, [pc, #28]	@ 0009936a 0748
.org 0x9936c
	mov ip, r0	@ 0009936c 8446
.org 0x9936e
	adds r2, r4, #0	@ 0009936e 221c
.org 0x99370
	adds r2, #188	@ 00099370 bc32
.org 0x99372
	ldrb r5, [r2, #0]	@ 00099372 1578
.org 0x99374
	ldrb r1, [r4, #10]	@ 00099374 a17a
.org 0x99376
	movs r3, #16	@ 00099376 1023
.org 0x99378
	adds r0, r3, #0	@ 00099378 181c
.org 0x9937a
	ands r0, r1	@ 0009937a 0840
.org 0x9937c
	adds r6, r2, #0	@ 0009937c 161c
.org 0x9937e
	cmp r0, #0	@ 0009937e 0028
.org 0x99380
	beq.n 0x9938c	@ 00099380 04d0
.org 0x99382
	orrs r3, r5	@ 00099382 2b43
.org 0x99384
	b.n 0x9938e	@ 00099384 03e0
.org 0x99386
	.byte 0x00	@ 00099386 data
.org 0x99387
	.byte 0x00	@ 00099387 data
.org 0x99388
	.byte 0xf4,0x0c,0x86,0x08	@ 00099388 data
.org 0x9938c
	adds r3, r5, #0	@ 0009938c 2b1c
.org 0x9938e
	adds r0, r7, #0	@ 0009938e 381c
.org 0x99390
	mov r1, ip	@ 00099390 6146
.org 0x99392
	movs r2, #0	@ 00099392 0022
.org 0x99394
	bl 0xd4c8c	@ 00099394 3bf07afc
.org 0x99398
	mov r5, sp	@ 00099398 6d46
.org 0x9939a
	ldr r7, [pc, #20]	@ 0009939a 054f
.org 0x9939c
	ldrb r2, [r6, #0]	@ 0009939c 3278
.org 0x9939e
	ldrb r1, [r4, #10]	@ 0009939e a17a
.org 0x993a0
	movs r3, #16	@ 000993a0 1023
.org 0x993a2
	adds r0, r3, #0	@ 000993a2 181c
.org 0x993a4
	ands r0, r1	@ 000993a4 0840
.org 0x993a6
	cmp r0, #0	@ 000993a6 0028
.org 0x993a8
	beq.n 0x993b4	@ 000993a8 04d0
.org 0x993aa
	orrs r3, r2	@ 000993aa 1343
.org 0x993ac
	b.n 0x993b6	@ 000993ac 03e0
.org 0x993ae
	.byte 0x00	@ 000993ae data
.org 0x993af
	.byte 0x00	@ 000993af data
.org 0x993b0
	.byte 0x10,0x0d,0x86,0x08	@ 000993b0 data
.org 0x993b4
	adds r3, r2, #0	@ 000993b4 131c
.org 0x993b6
	adds r0, r5, #0	@ 000993b6 281c
.org 0x993b8
	adds r1, r7, #0	@ 000993b8 391c
.org 0x993ba
	movs r2, #0	@ 000993ba 0022
.org 0x993bc
	bl 0xd4c8c	@ 000993bc 3bf066fc
.org 0x993c0
	movs r0, #1	@ 000993c0 0120
.org 0x993c2
	mov r1, sp	@ 000993c2 6946
.org 0x993c4
	bl 0xd0c88	@ 000993c4 37f060fc
.org 0x993c8
	movs r0, #42	@ 000993c8 2a20
.org 0x993ca
	bl 0x2b10	@ 000993ca 69f7a1fb
.org 0x993ce
	adds r5, r4, #0	@ 000993ce 251c
.org 0x993d0
	adds r5, #84	@ 000993d0 5435
.org 0x993d2
	movs r0, #3	@ 000993d2 0320
.org 0x993d4
	movs r1, #21	@ 000993d4 1521
.org 0x993d6
	adds r2, r5, #0	@ 000993d6 2a1c
.org 0x993d8
	bl 0x2ab88	@ 000993d8 91f7d6fb
.org 0x993dc
	ldrb r0, [r4, #10]	@ 000993dc a07a
.org 0x993de
	movs r1, #254	@ 000993de fe21
.org 0x993e0
	ands r1, r0	@ 000993e0 0140
.org 0x993e2
	strb r1, [r4, #10]	@ 000993e2 a172
.org 0x993e4
	ldr r2, [pc, #44]	@ 000993e4 0b4a
.org 0x993e6
	ldrh r1, [r2, #12]	@ 000993e6 9189
.org 0x993e8
	ldr r0, [pc, #44]	@ 000993e8 0b48
.org 0x993ea
	cmp r1, r0	@ 000993ea 8142
.org 0x993ec
	bhi.n 0x993f2	@ 000993ec 01d8
.org 0x993ee
	adds r0, r1, #1	@ 000993ee 481c
.org 0x993f0
	strh r0, [r2, #12]	@ 000993f0 9081
.org 0x993f2
	adds r0, r4, #0	@ 000993f2 201c
.org 0x993f4
	adds r1, r5, #0	@ 000993f4 291c
.org 0x993f6
	bl 0x2abe0	@ 000993f6 91f7f3fb
.org 0x993fa
	ldr r1, [pc, #32]	@ 000993fa 0849
.org 0x993fc
	ldrb r0, [r4, #9]	@ 000993fc 607a
.org 0x993fe
	lsls r0, r0, #2	@ 000993fe 8000
.org 0x99400
	adds r0, r0, r1	@ 00099400 4018
