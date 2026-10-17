@ FUN_0803d420  entry 0x0803d420  size 176
.thumb
.org 0x3d420
FUN_0803d420:
	push {r4, r5, r6, r7, lr}	@ 0003d420 f0b5
.org 0x3d422
	mov r7, r8	@ 0003d422 4746
.org 0x3d424
	push {r7}	@ 0003d424 80b4
.org 0x3d426
	adds r7, r0, #0	@ 0003d426 071c
.org 0x3d428
	adds r6, r7, #0	@ 0003d428 3e1c
.org 0x3d42a
	adds r6, #180	@ 0003d42a b436
.org 0x3d42c
	ldr r5, [r6, #0]	@ 0003d42c 3568
.org 0x3d42e
	ldr r1, [pc, #140]	@ 0003d42e 2349
.org 0x3d430
	ldrb r0, [r7, #9]	@ 0003d430 787a
.org 0x3d432
	lsls r0, r0, #2	@ 0003d432 8000
.org 0x3d434
	adds r0, r0, r1	@ 0003d434 4018
.org 0x3d436
	movs r1, #1	@ 0003d436 0121
.org 0x3d438
	str r1, [r7, #12]	@ 0003d438 f960
.org 0x3d43a
	ldr r0, [r0, #0]	@ 0003d43a 0068
.org 0x3d43c
	ldr r0, [r0, #4]	@ 0003d43c 4068
.org 0x3d43e
	str r0, [r7, #20]	@ 0003d43e 7861
.org 0x3d440
	adds r0, r7, #0	@ 0003d440 381c
.org 0x3d442
	bl 0x1cc9c	@ 0003d442 dff72bfc
.org 0x3d446
	adds r0, r7, #0	@ 0003d446 381c
.org 0x3d448
	bl 0x1ceec	@ 0003d448 dff750fd
.org 0x3d44c
	ldrb r1, [r7, #10]	@ 0003d44c b97a
.org 0x3d44e
	movs r0, #1	@ 0003d44e 0120
.org 0x3d450
	movs r2, #0	@ 0003d450 0022
.org 0x3d452
	mov r8, r2	@ 0003d452 9046
.org 0x3d454
	orrs r0, r1	@ 0003d454 0843
.org 0x3d456
	movs r1, #2	@ 0003d456 0221
.org 0x3d458
	orrs r0, r1	@ 0003d458 0843
.org 0x3d45a
	strb r0, [r7, #10]	@ 0003d45a b872
.org 0x3d45c
	ldr r1, [pc, #96]	@ 0003d45c 1849
.org 0x3d45e
	adds r5, #180	@ 0003d45e b435
.org 0x3d460
	ldrb r0, [r5, #15]	@ 0003d460 e87b
.org 0x3d462
	lsls r0, r0, #1	@ 0003d462 4000
.org 0x3d464
	adds r0, r0, r1	@ 0003d464 4018
.org 0x3d466
	ldrh r1, [r0, #0]	@ 0003d466 0188
.org 0x3d468
	adds r0, r7, #0	@ 0003d468 381c
.org 0x3d46a
	bl 0x1cf00	@ 0003d46a dff749fd
.org 0x3d46e
	ldrb r1, [r7, #10]	@ 0003d46e b97a
.org 0x3d470
	movs r0, #4	@ 0003d470 0420
.org 0x3d472
	orrs r0, r1	@ 0003d472 0843
.org 0x3d474
	strb r0, [r7, #10]	@ 0003d474 b872
.org 0x3d476
	adds r4, r7, #0	@ 0003d476 3c1c
.org 0x3d478
	adds r4, #116	@ 0003d478 7434
.org 0x3d47a
	ldr r1, [pc, #72]	@ 0003d47a 1249
.org 0x3d47c
	ldrb r0, [r5, #15]	@ 0003d47c e87b
.org 0x3d47e
	adds r0, r0, r1	@ 0003d47e 4018
.org 0x3d480
	ldrb r0, [r0, #0]	@ 0003d480 0078
.org 0x3d482
	lsls r1, r0, #1	@ 0003d482 4100
.org 0x3d484
	adds r1, r1, r0	@ 0003d484 0918
.org 0x3d486
	lsls r1, r1, #3	@ 0003d486 c900
.org 0x3d488
	ldr r0, [pc, #60]	@ 0003d488 0f48
.org 0x3d48a
	adds r1, r1, r0	@ 0003d48a 0918
.org 0x3d48c
	adds r2, r7, #0	@ 0003d48c 3a1c
.org 0x3d48e
	adds r2, #84	@ 0003d48e 5432
.org 0x3d490
	adds r0, r4, #0	@ 0003d490 201c
.org 0x3d492
	movs r3, #1	@ 0003d492 0123
.org 0x3d494
	bl 0x5760	@ 0003d494 c8f764f9
.org 0x3d498
	str r7, [r4, #44]	@ 0003d498 e762
.org 0x3d49a
	ldr r0, [pc, #48]	@ 0003d49a 0c48
.org 0x3d49c
	str r0, [r4, #36]	@ 0003d49c 6062
.org 0x3d49e
	mov r0, r8	@ 0003d49e 4046
.org 0x3d4a0
	strb r0, [r6, #15]	@ 0003d4a0 f073
.org 0x3d4a2
	strb r0, [r6, #16]	@ 0003d4a2 3074
.org 0x3d4a4
	movs r0, #67	@ 0003d4a4 4320
.org 0x3d4a6
	bl 0x2b10	@ 0003d4a6 c5f733fb
.org 0x3d4aa
	ldrb r0, [r5, #15]	@ 0003d4aa e87b
.org 0x3d4ac
	subs r0, #3	@ 0003d4ac 0338
.org 0x3d4ae
	lsls r0, r0, #24	@ 0003d4ae 0006
.org 0x3d4b0
	lsrs r0, r0, #24	@ 0003d4b0 000e
.org 0x3d4b2
	cmp r0, #1	@ 0003d4b2 0128
.org 0x3d4b4
	bhi.n 0x3d4d0	@ 0003d4b4 0cd8
.org 0x3d4b6
	movs r0, #2	@ 0003d4b6 0220
.org 0x3d4b8
	strb r0, [r7, #18]	@ 0003d4b8 b874
.org 0x3d4ba
	b.n 0x3d4d4	@ 0003d4ba 0be0
.org 0x3d4bc
	.byte 0xf8,0x39,0x85,0x08	@ 0003d4bc data
.org 0x3d4c0
	.byte 0xb4,0x50,0x85,0x08	@ 0003d4c0 data
.org 0x3d4c4
	.byte 0x3c,0x52,0x85,0x08	@ 0003d4c4 data
.org 0x3d4c8
	.byte 0xc0,0x50,0x85,0x08	@ 0003d4c8 data
.org 0x3d4cc
	.byte 0xd1,0xd6,0x03,0x08	@ 0003d4cc data
