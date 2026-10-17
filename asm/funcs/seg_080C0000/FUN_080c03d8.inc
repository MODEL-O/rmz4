@ FUN_080c03d8  entry 0x080c03d8  size 298
.thumb
.org 0xc03d8
FUN_080c03d8:
	push {r4, r5, r6, r7, lr}	@ 000c03d8 f0b5
.org 0xc03da
	sub sp, #12	@ 000c03da 83b0
.org 0xc03dc
	adds r6, r0, #0	@ 000c03dc 061c
.org 0xc03de
	ldr r1, [pc, #96]	@ 000c03de 1849
.org 0xc03e0
	mov r0, sp	@ 000c03e0 6846
.org 0xc03e2
	movs r2, #3	@ 000c03e2 0322
.org 0xc03e4
	bl 0x129258	@ 000c03e4 68f038ff
.org 0xc03e8
	add r5, sp, #4	@ 000c03e8 01ad
.org 0xc03ea
	ldr r1, [pc, #88]	@ 000c03ea 1649
.org 0xc03ec
	adds r0, r5, #0	@ 000c03ec 281c
.org 0xc03ee
	movs r2, #5	@ 000c03ee 0522
.org 0xc03f0
	bl 0x129258	@ 000c03f0 68f032ff
.org 0xc03f4
	ldr r0, [r6, #40]	@ 000c03f4 b06a
.org 0xc03f6
	ldrb r4, [r0, #10]	@ 000c03f6 847a
.org 0xc03f8
	lsrs r4, r4, #4	@ 000c03f8 2409
.org 0xc03fa
	movs r2, #1	@ 000c03fa 0122
.org 0xc03fc
	ands r4, r2	@ 000c03fc 1440
.org 0xc03fe
	ldr r1, [pc, #72]	@ 000c03fe 1249
.org 0xc0400
	ldrb r0, [r6, #9]	@ 000c0400 707a
.org 0xc0402
	lsls r0, r0, #2	@ 000c0402 8000
.org 0xc0404
	adds r0, r0, r1	@ 000c0404 4018
.org 0xc0406
	str r2, [r6, #12]	@ 000c0406 f260
.org 0xc0408
	ldr r0, [r0, #0]	@ 000c0408 0068
.org 0xc040a
	ldr r0, [r0, #4]	@ 000c040a 4068
.org 0xc040c
	str r0, [r6, #20]	@ 000c040c 7061
.org 0xc040e
	movs r2, #0	@ 000c040e 0022
.org 0xc0410
	strb r2, [r6, #13]	@ 000c0410 7273
.org 0xc0412
	strb r2, [r6, #14]	@ 000c0412 b273
.org 0xc0414
	strb r2, [r6, #15]	@ 000c0414 f273
.org 0xc0416
	ldrb r1, [r6, #10]	@ 000c0416 b17a
.org 0xc0418
	movs r0, #254	@ 000c0418 fe20
.org 0xc041a
	ands r0, r1	@ 000c041a 0840
.org 0xc041c
	movs r1, #2	@ 000c041c 0221
.org 0xc041e
	orrs r0, r1	@ 000c041e 0843
.org 0xc0420
	strb r0, [r6, #10]	@ 000c0420 b072
.org 0xc0422
	adds r0, r6, #0	@ 000c0422 301c
.org 0xc0424
	adds r0, #180	@ 000c0424 b430
.org 0xc0426
	strh r2, [r0, #0]	@ 000c0426 0280
.org 0xc0428
	adds r0, #2	@ 000c0428 0230
.org 0xc042a
	strh r2, [r0, #0]	@ 000c042a 0280
.org 0xc042c
	adds r0, r6, #0	@ 000c042c 301c
.org 0xc042e
	bl 0x1cc9c	@ 000c042e 5cf735fc
.org 0xc0432
	adds r7, r5, #0	@ 000c0432 2f1c
.org 0xc0434
	cmp r4, #0	@ 000c0434 002c
.org 0xc0436
	beq.n 0xc044c	@ 000c0436 09d0
.org 0xc0438
	ldrb r0, [r6, #10]	@ 000c0438 b07a
.org 0xc043a
	movs r1, #16	@ 000c043a 1021
.org 0xc043c
	orrs r0, r1	@ 000c043c 0843
.org 0xc043e
	b.n 0xc0452	@ 000c043e 08e0
.org 0xc0440
	.byte 0xdc,0xa0,0x12,0x08	@ 000c0440 data
.org 0xc0444
	.byte 0xdf,0xa0,0x12,0x08	@ 000c0444 data
.org 0xc0448
	.byte 0xf4,0x49,0x86,0x08	@ 000c0448 data
.org 0xc044c
	ldrb r1, [r6, #10]	@ 000c044c b17a
.org 0xc044e
	movs r0, #239	@ 000c044e ef20
.org 0xc0450
	ands r0, r1	@ 000c0450 0840
.org 0xc0452
	strb r0, [r6, #10]	@ 000c0452 b072
.org 0xc0454
	adds r1, r4, #0	@ 000c0454 211c
.org 0xc0456
	adds r0, r6, #0	@ 000c0456 301c
.org 0xc0458
	adds r0, #76	@ 000c0458 4c30
.org 0xc045a
	strb r1, [r0, #0]	@ 000c045a 0170
.org 0xc045c
	adds r3, r6, #0	@ 000c045c 331c
.org 0xc045e
	adds r3, #74	@ 000c045e 4a33
.org 0xc0460
	lsls r1, r1, #4	@ 000c0460 0901
.org 0xc0462
	ldrb r2, [r3, #0]	@ 000c0462 1a78
.org 0xc0464
	movs r0, #17	@ 000c0464 1120
.org 0xc0466
	negs r0, r0	@ 000c0466 4042
.org 0xc0468
	ands r0, r2	@ 000c0468 1040
.org 0xc046a
	orrs r0, r1	@ 000c046a 0843
.org 0xc046c
	strb r0, [r3, #0]	@ 000c046c 1870
.org 0xc046e
	adds r0, r6, #0	@ 000c046e 301c
.org 0xc0470
	movs r1, #1	@ 000c0470 0121
.org 0xc0472
	movs r2, #0	@ 000c0472 0022
.org 0xc0474
	movs r3, #0	@ 000c0474 0023
.org 0xc0476
	bl 0xc0364	@ 000c0476 fff775ff
.org 0xc047a
	cmp r0, #0	@ 000c047a 0028
.org 0xc047c
	beq.n 0xc048a	@ 000c047c 05d0
.org 0xc047e
	adds r2, r6, #0	@ 000c047e 321c
.org 0xc0480
	adds r2, #182	@ 000c0480 b632
.org 0xc0482
	ldrh r1, [r2, #0]	@ 000c0482 1188
.org 0xc0484
	movs r0, #1	@ 000c0484 0120
.org 0xc0486
	orrs r0, r1	@ 000c0486 0843
.org 0xc0488
	strh r0, [r2, #0]	@ 000c0488 1080
.org 0xc048a
	adds r0, r6, #0	@ 000c048a 301c
.org 0xc048c
	movs r1, #1	@ 000c048c 0121
.org 0xc048e
	movs r2, #1	@ 000c048e 0122
.org 0xc0490
	movs r3, #0	@ 000c0490 0023
.org 0xc0492
	bl 0xc0364	@ 000c0492 fff767ff
.org 0xc0496
	cmp r0, #0	@ 000c0496 0028
.org 0xc0498
	beq.n 0xc04a6	@ 000c0498 05d0
.org 0xc049a
	adds r2, r6, #0	@ 000c049a 321c
.org 0xc049c
	adds r2, #182	@ 000c049c b632
.org 0xc049e
	ldrh r1, [r2, #0]	@ 000c049e 1188
.org 0xc04a0
	movs r0, #2	@ 000c04a0 0220
.org 0xc04a2
	orrs r0, r1	@ 000c04a2 0843
.org 0xc04a4
	strh r0, [r2, #0]	@ 000c04a4 1080
.org 0xc04a6
	movs r4, #0	@ 000c04a6 0024
.org 0xc04a8
	adds r5, r6, #0	@ 000c04a8 351c
.org 0xc04aa
	adds r5, #182	@ 000c04aa b635
.org 0xc04ac
	lsls r3, r4, #24	@ 000c04ac 2306
.org 0xc04ae
	lsrs r3, r3, #24	@ 000c04ae 1b0e
.org 0xc04b0
	adds r0, r6, #0	@ 000c04b0 301c
.org 0xc04b2
	movs r1, #2	@ 000c04b2 0221
.org 0xc04b4
	movs r2, #0	@ 000c04b4 0022
.org 0xc04b6
	bl 0xc0364	@ 000c04b6 fff755ff
.org 0xc04ba
	cmp r0, #0	@ 000c04ba 0028
.org 0xc04bc
	beq.n 0xc04ce	@ 000c04bc 07d0
.org 0xc04be
	mov r1, sp	@ 000c04be 6946
.org 0xc04c0
	adds r0, r1, r4	@ 000c04c0 0819
.org 0xc04c2
	movs r1, #1	@ 000c04c2 0121
.org 0xc04c4
	ldrb r0, [r0, #0]	@ 000c04c4 0078
.org 0xc04c6
	lsls r1, r0	@ 000c04c6 8140
.org 0xc04c8
	ldrh r0, [r5, #0]	@ 000c04c8 2888
.org 0xc04ca
	orrs r1, r0	@ 000c04ca 0143
.org 0xc04cc
	strh r1, [r5, #0]	@ 000c04cc 2980
.org 0xc04ce
	adds r4, #1	@ 000c04ce 0134
.org 0xc04d0
	cmp r4, #2	@ 000c04d0 022c
.org 0xc04d2
	ble.n 0xc04ac	@ 000c04d2 ebdd
.org 0xc04d4
	movs r4, #0	@ 000c04d4 0024
.org 0xc04d6
	adds r5, r6, #0	@ 000c04d6 351c
.org 0xc04d8
	adds r5, #182	@ 000c04d8 b635
.org 0xc04da
	lsls r3, r4, #24	@ 000c04da 2306
.org 0xc04dc
	lsrs r3, r3, #24	@ 000c04dc 1b0e
.org 0xc04de
	adds r0, r6, #0	@ 000c04de 301c
.org 0xc04e0
	movs r1, #2	@ 000c04e0 0221
.org 0xc04e2
	movs r2, #1	@ 000c04e2 0122
.org 0xc04e4
	bl 0xc0364	@ 000c04e4 fff73eff
.org 0xc04e8
	cmp r0, #0	@ 000c04e8 0028
.org 0xc04ea
	beq.n 0xc04fa	@ 000c04ea 06d0
.org 0xc04ec
	adds r0, r7, r4	@ 000c04ec 3819
.org 0xc04ee
	movs r1, #1	@ 000c04ee 0121
.org 0xc04f0
	ldrb r0, [r0, #0]	@ 000c04f0 0078
.org 0xc04f2
	lsls r1, r0	@ 000c04f2 8140
.org 0xc04f4
	ldrh r0, [r5, #0]	@ 000c04f4 2888
.org 0xc04f6
	orrs r1, r0	@ 000c04f6 0143
.org 0xc04f8
	strh r1, [r5, #0]	@ 000c04f8 2980
.org 0xc04fa
	adds r4, #1	@ 000c04fa 0134
.org 0xc04fc
	cmp r4, #4	@ 000c04fc 042c
.org 0xc04fe
	ble.n 0xc04da	@ 000c04fe ecdd
.org 0xc0500
	adds r0, r6, #0	@ 000c0500 301c
