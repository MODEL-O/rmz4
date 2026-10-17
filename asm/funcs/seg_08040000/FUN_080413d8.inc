@ FUN_080413d8  entry 0x080413d8  size 222
.thumb
.org 0x413d8
FUN_080413d8:
	push {r4, r5, lr}	@ 000413d8 30b5
.org 0x413da
	adds r5, r0, #0	@ 000413da 051c
.org 0x413dc
	adds r4, r1, #0	@ 000413dc 0c1c
.org 0x413de
	ldr r0, [pc, #64]	@ 000413de 1048
.org 0x413e0
	ldr r0, [r0, #0]	@ 000413e0 0068
.org 0x413e2
	bl 0x5500	@ 000413e2 c4f78df8
.org 0x413e6
	adds r3, r0, #0	@ 000413e6 031c
.org 0x413e8
	cmp r3, #0	@ 000413e8 002b
.org 0x413ea
	beq.n 0x414cc	@ 000413ea 6fd0
.org 0x413ec
	adds r0, r5, #0	@ 000413ec 281c
.org 0x413ee
	adds r0, #248	@ 000413ee f830
.org 0x413f0
	ldrb r0, [r0, #0]	@ 000413f0 0078
.org 0x413f2
	cmp r0, #2	@ 000413f2 0228
.org 0x413f4
	bne.n 0x41430	@ 000413f4 1cd1
.org 0x413f6
	ldr r1, [pc, #44]	@ 000413f6 0b49
.org 0x413f8
	movs r0, #11	@ 000413f8 0b20
.org 0x413fa
	strb r0, [r3, #9]	@ 000413fa 5872
.org 0x413fc
	ldr r0, [r1, #44]	@ 000413fc c86a
.org 0x413fe
	ldr r0, [r0, #0]	@ 000413fe 0068
.org 0x41400
	str r0, [r3, #20]	@ 00041400 5861
.org 0x41402
	ldrb r1, [r3, #11]	@ 00041402 d97a
.org 0x41404
	movs r0, #191	@ 00041404 bf20
.org 0x41406
	ands r0, r1	@ 00041406 0840
.org 0x41408
	strb r0, [r3, #11]	@ 00041408 d872
.org 0x4140a
	adds r1, r3, #0	@ 0004140a 191c
.org 0x4140c
	adds r1, #37	@ 0004140c 2531
.org 0x4140e
	movs r0, #16	@ 0004140e 1020
.org 0x41410
	strb r0, [r1, #0]	@ 00041410 0870
.org 0x41412
	ldr r0, [pc, #20]	@ 00041412 0548
.org 0x41414
	ldrh r0, [r0, #0]	@ 00041414 0088
.org 0x41416
	strh r0, [r3, #32]	@ 00041416 1884
.org 0x41418
	ldr r0, [pc, #16]	@ 00041418 0448
.org 0x4141a
	ldrb r0, [r0, #0]	@ 0004141a 0078
.org 0x4141c
	b.n 0x41456	@ 0004141c 1be0
.org 0x4141e
	.byte 0x00	@ 0004141e data
.org 0x4141f
	.byte 0x00	@ 0004141f data
.org 0x41420
	.byte 0x88,0xed,0x02,0x02	@ 00041420 data
.org 0x41424
	.byte 0xf8,0x39,0x85,0x08	@ 00041424 data
.org 0x41428
	.byte 0xfc,0x36,0x85,0x08	@ 00041428 data
.org 0x4142c
	.byte 0x04,0x37,0x85,0x08	@ 0004142c data
.org 0x41430
	ldr r1, [pc, #68]	@ 00041430 1149
.org 0x41432
	movs r0, #11	@ 00041432 0b20
.org 0x41434
	strb r0, [r3, #9]	@ 00041434 5872
.org 0x41436
	ldr r0, [r1, #44]	@ 00041436 c86a
.org 0x41438
	ldr r0, [r0, #0]	@ 00041438 0068
.org 0x4143a
	str r0, [r3, #20]	@ 0004143a 5861
.org 0x4143c
	ldrb r1, [r3, #11]	@ 0004143c d97a
.org 0x4143e
	movs r0, #191	@ 0004143e bf20
.org 0x41440
	ands r0, r1	@ 00041440 0840
.org 0x41442
	strb r0, [r3, #11]	@ 00041442 d872
.org 0x41444
	adds r1, r3, #0	@ 00041444 191c
.org 0x41446
	adds r1, #37	@ 00041446 2531
.org 0x41448
	movs r0, #16	@ 00041448 1020
.org 0x4144a
	strb r0, [r1, #0]	@ 0004144a 0870
.org 0x4144c
	ldr r0, [pc, #44]	@ 0004144c 0b48
.org 0x4144e
	ldrh r0, [r0, #2]	@ 0004144e 4088
.org 0x41450
	strh r0, [r3, #32]	@ 00041450 1884
.org 0x41452
	ldr r0, [pc, #44]	@ 00041452 0b48
.org 0x41454
	ldrb r0, [r0, #1]	@ 00041454 4078
.org 0x41456
	subs r1, #3	@ 00041456 0339
.org 0x41458
	strb r0, [r1, #0]	@ 00041458 0870
.org 0x4145a
	str r4, [r3, #40]	@ 0004145a 9c62
.org 0x4145c
	str r5, [r3, #44]	@ 0004145c dd62
.org 0x4145e
	movs r0, #0	@ 0004145e 0020
.org 0x41460
	strb r0, [r3, #16]	@ 00041460 1874
.org 0x41462
	strb r0, [r3, #17]	@ 00041462 5874
.org 0x41464
	ldrb r0, [r4, #10]	@ 00041464 a07a
.org 0x41466
	lsrs r2, r0, #4	@ 00041466 0209
.org 0x41468
	movs r0, #1	@ 00041468 0120
.org 0x4146a
	ands r2, r0	@ 0004146a 0240
.org 0x4146c
	cmp r2, #0	@ 0004146c 002a
.org 0x4146e
	beq.n 0x41484	@ 0004146e 09d0
.org 0x41470
	ldrb r0, [r3, #10]	@ 00041470 987a
.org 0x41472
	movs r1, #16	@ 00041472 1021
.org 0x41474
	orrs r0, r1	@ 00041474 0843
.org 0x41476
	b.n 0x4148a	@ 00041476 08e0
.org 0x41478
	.byte 0xf8,0x39,0x85,0x08	@ 00041478 data
.org 0x4147c
	.byte 0xfc,0x36,0x85,0x08	@ 0004147c data
.org 0x41480
	.byte 0x04,0x37,0x85,0x08	@ 00041480 data
.org 0x41484
	ldrb r1, [r3, #10]	@ 00041484 997a
.org 0x41486
	movs r0, #239	@ 00041486 ef20
.org 0x41488
	ands r0, r1	@ 00041488 0840
.org 0x4148a
	strb r0, [r3, #10]	@ 0004148a 9872
.org 0x4148c
	adds r1, r2, #0	@ 0004148c 111c
.org 0x4148e
	adds r0, r3, #0	@ 0004148e 181c
.org 0x41490
	adds r0, #76	@ 00041490 4c30
.org 0x41492
	strb r1, [r0, #0]	@ 00041492 0170
.org 0x41494
	movs r0, #74	@ 00041494 4a20
.org 0x41496
	adds r0, r0, r3	@ 00041496 c018
.org 0x41498
	mov ip, r0	@ 00041498 8446
.org 0x4149a
	lsls r1, r1, #4	@ 0004149a 0901
.org 0x4149c
	ldrb r2, [r0, #0]	@ 0004149c 0278
.org 0x4149e
	movs r0, #17	@ 0004149e 1120
.org 0x414a0
	negs r0, r0	@ 000414a0 4042
.org 0x414a2
	ands r0, r2	@ 000414a2 1040
.org 0x414a4
	orrs r0, r1	@ 000414a4 0843
.org 0x414a6
	mov r1, ip	@ 000414a6 6146
.org 0x414a8
	strb r0, [r1, #0]	@ 000414a8 0870
.org 0x414aa
	ldrb r1, [r3, #10]	@ 000414aa 997a
.org 0x414ac
	movs r0, #16	@ 000414ac 1020
.org 0x414ae
	ands r0, r1	@ 000414ae 0840
.org 0x414b0
	cmp r0, #0	@ 000414b0 0028
.org 0x414b2
	beq.n 0x414bc	@ 000414b2 03d0
.org 0x414b4
	ldr r0, [r4, #84]	@ 000414b4 606d
