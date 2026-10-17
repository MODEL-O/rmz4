@ FUN_080d33d0  entry 0x080d33d0  size 278
.thumb
.org 0xd33d0
FUN_080d33d0:
	push {r4, r5, lr}	@ 000d33d0 30b5
.org 0xd33d2
	adds r4, r0, #0	@ 000d33d2 041c
.org 0xd33d4
	ldr r5, [r4, #40]	@ 000d33d4 a56a
.org 0xd33d6
	ldrb r0, [r5, #12]	@ 000d33d6 287b
.org 0xd33d8
	cmp r0, #1	@ 000d33d8 0128
.org 0xd33da
	bls.n 0xd33e8	@ 000d33da 05d9
.org 0xd33dc
	ldrb r1, [r4, #18]	@ 000d33dc a17c
.org 0xd33de
	cmp r1, #15	@ 000d33de 0f29
.org 0xd33e0
	bls.n 0xd33e8	@ 000d33e0 02d9
.org 0xd33e2
	movs r0, #15	@ 000d33e2 0f20
.org 0xd33e4
	ands r0, r1	@ 000d33e4 0840
.org 0xd33e6
	strb r0, [r4, #18]	@ 000d33e6 a074
.org 0xd33e8
	ldrb r0, [r4, #18]	@ 000d33e8 a07c
.org 0xd33ea
	subs r1, r0, #1	@ 000d33ea 411e
.org 0xd33ec
	strb r1, [r4, #18]	@ 000d33ec a174
.org 0xd33ee
	ldr r0, [pc, #56]	@ 000d33ee 0e48
.org 0xd33f0
	ldrb r0, [r0, #2]	@ 000d33f0 8078
.org 0xd33f2
	cmp r0, #0	@ 000d33f2 0028
.org 0xd33f4
	bne.n 0xd3436	@ 000d33f4 1fd1
.org 0xd33f6
	adds r0, r4, #0	@ 000d33f6 201c
.org 0xd33f8
	adds r0, #124	@ 000d33f8 7c30
.org 0xd33fa
	ldrb r0, [r0, #0]	@ 000d33fa 0078
.org 0xd33fc
	lsls r2, r0, #24	@ 000d33fc 0206
.org 0xd33fe
	lsls r0, r1, #24	@ 000d33fe 0806
.org 0xd3400
	lsrs r3, r0, #24	@ 000d3400 030e
.org 0xd3402
	lsrs r0, r2, #25	@ 000d3402 500e
.org 0xd3404
	cmp r3, r0	@ 000d3404 8342
.org 0xd3406
	bhi.n 0xd341e	@ 000d3406 0ad8
.org 0xd3408
	lsrs r0, r2, #26	@ 000d3408 900e
.org 0xd340a
	cmp r3, r0	@ 000d340a 8342
.org 0xd340c
	bls.n 0xd3416	@ 000d340c 03d9
.org 0xd340e
	movs r0, #1	@ 000d340e 0120
.org 0xd3410
	ands r0, r1	@ 000d3410 0840
.org 0xd3412
	cmp r0, #0	@ 000d3412 0028
.org 0xd3414
	beq.n 0xd341e	@ 000d3414 03d0
.org 0xd3416
	movs r0, #3	@ 000d3416 0320
.org 0xd3418
	ands r1, r0	@ 000d3418 0140
.org 0xd341a
	cmp r1, #0	@ 000d341a 0029
.org 0xd341c
	bne.n 0xd342c	@ 000d341c 06d1
.org 0xd341e
	ldrb r1, [r4, #10]	@ 000d341e a17a
.org 0xd3420
	movs r0, #1	@ 000d3420 0120
.org 0xd3422
	orrs r0, r1	@ 000d3422 0843
.org 0xd3424
	strb r0, [r4, #10]	@ 000d3424 a072
.org 0xd3426
	b.n 0xd3458	@ 000d3426 17e0
.org 0xd3428
	.byte 0x50,0xed,0x02,0x02	@ 000d3428 data
.org 0xd342c
	ldrb r1, [r4, #10]	@ 000d342c a17a
.org 0xd342e
	movs r0, #254	@ 000d342e fe20
.org 0xd3430
	ands r0, r1	@ 000d3430 0840
.org 0xd3432
	strb r0, [r4, #10]	@ 000d3432 a072
.org 0xd3434
	b.n 0xd3458	@ 000d3434 10e0
.org 0xd3436
	ldrb r1, [r4, #10]	@ 000d3436 a17a
.org 0xd3438
	movs r0, #254	@ 000d3438 fe20
.org 0xd343a
	ands r0, r1	@ 000d343a 0840
.org 0xd343c
	movs r1, #253	@ 000d343c fd21
.org 0xd343e
	ands r0, r1	@ 000d343e 0840
.org 0xd3440
	strb r0, [r4, #10]	@ 000d3440 a072
.org 0xd3442
	ldr r1, [pc, #16]	@ 000d3442 0449
.org 0xd3444
	ldrb r0, [r4, #9]	@ 000d3444 607a
.org 0xd3446
	lsls r0, r0, #2	@ 000d3446 8000
.org 0xd3448
	adds r0, r0, r1	@ 000d3448 4018
.org 0xd344a
	movs r1, #3	@ 000d344a 0321
.org 0xd344c
	str r1, [r4, #12]	@ 000d344c e160
.org 0xd344e
	ldr r0, [r0, #0]	@ 000d344e 0068
.org 0xd3450
	ldr r0, [r0, #12]	@ 000d3450 c068
.org 0xd3452
	b.n 0xd34ec	@ 000d3452 4be0
.org 0xd3454
	.byte 0x64,0x6f,0x86,0x08	@ 000d3454 data
.org 0xd3458
	ldrb r1, [r5, #10]	@ 000d3458 a97a
.org 0xd345a
	movs r0, #64	@ 000d345a 4020
.org 0xd345c
	ands r0, r1	@ 000d345c 0840
.org 0xd345e
	cmp r0, #0	@ 000d345e 0028
.org 0xd3460
	beq.n 0xd348c	@ 000d3460 14d0
.org 0xd3462
	ldrh r1, [r5, #8]	@ 000d3462 2989
.org 0xd3464
	ldr r0, [pc, #24]	@ 000d3464 0648
.org 0xd3466
	cmp r1, r0	@ 000d3466 8142
.org 0xd3468
	bne.n 0xd3484	@ 000d3468 0cd1
.org 0xd346a
	ldr r0, [r5, #84]	@ 000d346a 686d
.org 0xd346c
	ldr r1, [r4, #116]	@ 000d346c 616f
.org 0xd346e
	adds r0, r0, r1	@ 000d346e 4018
.org 0xd3470
	str r0, [r4, #84]	@ 000d3470 6065
.org 0xd3472
	ldr r0, [r5, #88]	@ 000d3472 a86d
.org 0xd3474
	ldr r1, [r4, #120]	@ 000d3474 a16f
.org 0xd3476
	adds r0, r0, r1	@ 000d3476 4018
.org 0xd3478
	movs r1, #240	@ 000d3478 f021
.org 0xd347a
	lsls r1, r1, #5	@ 000d347a 4901
.org 0xd347c
	b.n 0xd34c6	@ 000d347c 23e0
.org 0xd347e
	.byte 0x00	@ 000d347e data
.org 0xd347f
	.byte 0x00	@ 000d347f data
.org 0xd3480
	.byte 0x02,0x10,0x00,0x00	@ 000d3480 data
.org 0xd3484
	ldr r0, [r5, #84]	@ 000d3484 686d
.org 0xd3486
	str r0, [r4, #84]	@ 000d3486 6065
.org 0xd3488
	ldr r0, [r5, #88]	@ 000d3488 a86d
.org 0xd348a
	b.n 0xd34c8	@ 000d348a 1de0
.org 0xd348c
	movs r0, #48	@ 000d348c 3020
.org 0xd348e
	ands r0, r1	@ 000d348e 0840
.org 0xd3490
	lsrs r0, r0, #4	@ 000d3490 0009
.org 0xd3492
	movs r1, #1	@ 000d3492 0121
.org 0xd3494
	ands r0, r1	@ 000d3494 0840
.org 0xd3496
	cmp r0, #0	@ 000d3496 0028
.org 0xd3498
	beq.n 0xd34a2	@ 000d3498 03d0
.org 0xd349a
	ldr r0, [r5, #84]	@ 000d349a 686d
.org 0xd349c
	ldr r1, [r4, #116]	@ 000d349c 616f
.org 0xd349e
	subs r0, r0, r1	@ 000d349e 401a
.org 0xd34a0
	b.n 0xd34a8	@ 000d34a0 02e0
.org 0xd34a2
	ldr r0, [r5, #84]	@ 000d34a2 686d
.org 0xd34a4
	ldr r1, [r4, #116]	@ 000d34a4 616f
.org 0xd34a6
	adds r0, r0, r1	@ 000d34a6 4018
.org 0xd34a8
	str r0, [r4, #84]	@ 000d34a8 6065
.org 0xd34aa
	ldrb r0, [r5, #10]	@ 000d34aa a87a
.org 0xd34ac
	movs r1, #48	@ 000d34ac 3021
.org 0xd34ae
	ands r1, r0	@ 000d34ae 0140
.org 0xd34b0
	lsrs r1, r1, #4	@ 000d34b0 0909
.org 0xd34b2
	movs r0, #2	@ 000d34b2 0220
.org 0xd34b4
	ands r1, r0	@ 000d34b4 0140
.org 0xd34b6
	cmp r1, #0	@ 000d34b6 0029
.org 0xd34b8
	beq.n 0xd34c2	@ 000d34b8 03d0
.org 0xd34ba
	ldr r0, [r5, #88]	@ 000d34ba a86d
.org 0xd34bc
	ldr r1, [r4, #120]	@ 000d34bc a16f
.org 0xd34be
	subs r0, r0, r1	@ 000d34be 401a
.org 0xd34c0
	b.n 0xd34c8	@ 000d34c0 02e0
.org 0xd34c2
	ldr r0, [r5, #88]	@ 000d34c2 a86d
.org 0xd34c4
	ldr r1, [r4, #120]	@ 000d34c4 a16f
.org 0xd34c6
	adds r0, r0, r1	@ 000d34c6 4018
.org 0xd34c8
	str r0, [r4, #88]	@ 000d34c8 a065
.org 0xd34ca
	adds r0, r4, #0	@ 000d34ca 201c
.org 0xd34cc
	bl 0x1cff0	@ 000d34cc 49f790fd
.org 0xd34d0
	ldrb r0, [r4, #18]	@ 000d34d0 a07c
.org 0xd34d2
	cmp r0, #0	@ 000d34d2 0028
.org 0xd34d4
	beq.n 0xd34dc	@ 000d34d4 02d0
.org 0xd34d6
	ldrb r0, [r5, #12]	@ 000d34d6 287b
.org 0xd34d8
	cmp r0, #2	@ 000d34d8 0228
.org 0xd34da
	bls.n 0xd34ee	@ 000d34da 08d9
.org 0xd34dc
	ldr r1, [pc, #20]	@ 000d34dc 0549
.org 0xd34de
	ldrb r0, [r4, #9]	@ 000d34de 607a
.org 0xd34e0
	lsls r0, r0, #2	@ 000d34e0 8000
.org 0xd34e2
	adds r0, r0, r1	@ 000d34e2 4018
.org 0xd34e4
	movs r1, #2	@ 000d34e4 0221
