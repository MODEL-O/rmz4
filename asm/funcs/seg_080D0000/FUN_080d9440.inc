@ FUN_080d9440  entry 0x080d9440  size 94
.thumb
.org 0xd9440
FUN_080d9440:
	push {lr}	@ 000d9440 00b5
.org 0xd9442
	adds r2, r0, #0	@ 000d9442 021c
.org 0xd9444
	ldr r0, [pc, #20]	@ 000d9444 0548
.org 0xd9446
	ldr r1, [r0, #0]	@ 000d9446 0168
.org 0xd9448
	adds r0, r1, #0	@ 000d9448 081c
.org 0xd944a
	adds r0, #248	@ 000d944a f830
.org 0xd944c
	ldrb r0, [r0, #0]	@ 000d944c 0078
.org 0xd944e
	cmp r0, #2	@ 000d944e 0228
.org 0xd9450
	bne.n 0xd9460	@ 000d9450 06d1
.org 0xd9452
	adds r1, r2, #0	@ 000d9452 111c
.org 0xd9454
	adds r1, #34	@ 000d9454 2231
.org 0xd9456
	movs r0, #1	@ 000d9456 0120
.org 0xd9458
	b.n 0xd9494	@ 000d9458 1ce0
.org 0xd945a
	.byte 0x00	@ 000d945a data
.org 0xd945b
	.byte 0x00	@ 000d945b data
.org 0xd945c
	.byte 0xf0,0xdb,0x02,0x02	@ 000d945c data
.org 0xd9460
	adds r0, r1, #0	@ 000d9460 081c
.org 0xd9462
	adds r0, #249	@ 000d9462 f930
.org 0xd9464
	ldrb r0, [r0, #0]	@ 000d9464 0078
.org 0xd9466
	cmp r0, #2	@ 000d9466 0228
.org 0xd9468
	beq.n 0xd9490	@ 000d9468 12d0
.org 0xd946a
	ldrb r1, [r2, #10]	@ 000d946a 917a
.org 0xd946c
	movs r0, #254	@ 000d946c fe20
.org 0xd946e
	ands r0, r1	@ 000d946e 0840
.org 0xd9470
	movs r1, #253	@ 000d9470 fd21
.org 0xd9472
	ands r0, r1	@ 000d9472 0840
.org 0xd9474
	strb r0, [r2, #10]	@ 000d9474 9072
.org 0xd9476
	ldr r1, [pc, #20]	@ 000d9476 0549
.org 0xd9478
	ldrb r0, [r2, #9]	@ 000d9478 507a
.org 0xd947a
	lsls r0, r0, #2	@ 000d947a 8000
.org 0xd947c
	adds r0, r0, r1	@ 000d947c 4018
.org 0xd947e
	movs r1, #3	@ 000d947e 0321
.org 0xd9480
	str r1, [r2, #12]	@ 000d9480 d160
.org 0xd9482
	ldr r0, [r0, #0]	@ 000d9482 0068
.org 0xd9484
	ldr r0, [r0, #12]	@ 000d9484 c068
.org 0xd9486
	str r0, [r2, #20]	@ 000d9486 5061
.org 0xd9488
	b.n 0xd94a6	@ 000d9488 0de0
.org 0xd948a
	.byte 0x00	@ 000d948a data
.org 0xd948b
	.byte 0x00	@ 000d948b data
.org 0xd948c
	.byte 0x64,0x6f,0x86,0x08	@ 000d948c data
.org 0xd9490
	adds r1, r2, #0	@ 000d9490 111c
.org 0xd9492
	adds r1, #34	@ 000d9492 2231
.org 0xd9494
	strb r0, [r1, #0]	@ 000d9494 0870
.org 0xd9496
	ldr r0, [pc, #20]	@ 000d9496 0548
.org 0xd9498
	ldrb r1, [r2, #16]	@ 000d9498 117c
.org 0xd949a
	lsls r1, r1, #2	@ 000d949a 8900
.org 0xd949c
	adds r1, r1, r0	@ 000d949c 0918
