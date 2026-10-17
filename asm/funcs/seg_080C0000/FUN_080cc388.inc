@ FUN_080cc388  entry 0x080cc388  size 212
.thumb
.org 0xcc388
FUN_080cc388:
	push {r4, r5, r6, r7, lr}	@ 000cc388 f0b5
.org 0xcc38a
	adds r7, r0, #0	@ 000cc38a 071c
.org 0xcc38c
	ldr r6, [r7, #40]	@ 000cc38c be6a
.org 0xcc38e
	bl 0x1cc9c	@ 000cc38e 50f785fc
.org 0xcc392
	ldrb r1, [r7, #10]	@ 000cc392 b97a
.org 0xcc394
	movs r0, #1	@ 000cc394 0120
.org 0xcc396
	orrs r0, r1	@ 000cc396 0843
.org 0xcc398
	movs r1, #2	@ 000cc398 0221
.org 0xcc39a
	orrs r0, r1	@ 000cc39a 0843
.org 0xcc39c
	strb r0, [r7, #10]	@ 000cc39c b872
.org 0xcc39e
	ldr r1, [pc, #92]	@ 000cc39e 1749
.org 0xcc3a0
	adds r0, r7, #0	@ 000cc3a0 381c
.org 0xcc3a2
	bl 0x1cf00	@ 000cc3a2 50f7adfd
.org 0xcc3a6
	adds r0, r7, #0	@ 000cc3a6 381c
.org 0xcc3a8
	bl 0x1cff0	@ 000cc3a8 50f722fe
.org 0xcc3ac
	movs r5, #0	@ 000cc3ac 0025
.org 0xcc3ae
	ldrb r1, [r7, #10]	@ 000cc3ae b97a
.org 0xcc3b0
	movs r0, #239	@ 000cc3b0 ef20
.org 0xcc3b2
	ands r0, r1	@ 000cc3b2 0840
.org 0xcc3b4
	strb r0, [r7, #10]	@ 000cc3b4 b872
.org 0xcc3b6
	adds r0, r7, #0	@ 000cc3b6 381c
.org 0xcc3b8
	adds r0, #76	@ 000cc3b8 4c30
.org 0xcc3ba
	strb r5, [r0, #0]	@ 000cc3ba 0570
.org 0xcc3bc
	adds r2, r7, #0	@ 000cc3bc 3a1c
.org 0xcc3be
	adds r2, #74	@ 000cc3be 4a32
.org 0xcc3c0
	ldrb r1, [r2, #0]	@ 000cc3c0 1178
.org 0xcc3c2
	movs r0, #17	@ 000cc3c2 1120
.org 0xcc3c4
	negs r0, r0	@ 000cc3c4 4042
.org 0xcc3c6
	ands r0, r1	@ 000cc3c6 0840
.org 0xcc3c8
	strb r0, [r2, #0]	@ 000cc3c8 1070
.org 0xcc3ca
	ldrb r1, [r7, #10]	@ 000cc3ca b97a
.org 0xcc3cc
	movs r0, #4	@ 000cc3cc 0420
.org 0xcc3ce
	orrs r0, r1	@ 000cc3ce 0843
.org 0xcc3d0
	strb r0, [r7, #10]	@ 000cc3d0 b872
.org 0xcc3d2
	adds r4, r7, #0	@ 000cc3d2 3c1c
.org 0xcc3d4
	adds r4, #116	@ 000cc3d4 7434
.org 0xcc3d6
	ldr r1, [pc, #40]	@ 000cc3d6 0a49
.org 0xcc3d8
	adds r2, #10	@ 000cc3d8 0a32
.org 0xcc3da
	adds r0, r4, #0	@ 000cc3da 201c
.org 0xcc3dc
	movs r3, #8	@ 000cc3dc 0823
.org 0xcc3de
	bl 0x5760	@ 000cc3de 39f7bff9
.org 0xcc3e2
	str r7, [r4, #44]	@ 000cc3e2 e762
.org 0xcc3e4
	str r5, [r4, #36]	@ 000cc3e4 6562
.org 0xcc3e6
	ldrb r1, [r6, #10]	@ 000cc3e6 b17a
.org 0xcc3e8
	movs r0, #16	@ 000cc3e8 1020
.org 0xcc3ea
	ands r0, r1	@ 000cc3ea 0840
.org 0xcc3ec
	cmp r0, #0	@ 000cc3ec 0028
.org 0xcc3ee
	beq.n 0xcc404	@ 000cc3ee 09d0
.org 0xcc3f0
	ldr r0, [r7, #84]	@ 000cc3f0 786d
.org 0xcc3f2
	movs r1, #144	@ 000cc3f2 9021
.org 0xcc3f4
	lsls r1, r1, #6	@ 000cc3f4 8901
.org 0xcc3f6
	adds r0, r0, r1	@ 000cc3f6 4018
.org 0xcc3f8
	b.n 0xcc40a	@ 000cc3f8 07e0
.org 0xcc3fa
	.byte 0x00	@ 000cc3fa data
.org 0xcc3fb
	.byte 0x00	@ 000cc3fb data
.org 0xcc3fc
	.byte 0x04,0x95,0x00,0x00	@ 000cc3fc data
.org 0xcc400
	.byte 0x08,0x67,0x86,0x08	@ 000cc400 data
.org 0xcc404
	ldr r0, [r7, #84]	@ 000cc404 786d
.org 0xcc406
	ldr r2, [pc, #96]	@ 000cc406 184a
.org 0xcc408
	adds r0, r0, r2	@ 000cc408 8018
.org 0xcc40a
	str r0, [r7, #84]	@ 000cc40a 7865
.org 0xcc40c
	ldr r0, [r7, #88]	@ 000cc40c b86d
.org 0xcc40e
	ldr r3, [pc, #92]	@ 000cc40e 174b
.org 0xcc410
	adds r0, r0, r3	@ 000cc410 c018
.org 0xcc412
	str r0, [r7, #88]	@ 000cc412 b865
.org 0xcc414
	ldr r2, [pc, #88]	@ 000cc414 164a
.org 0xcc416
	ldrb r0, [r7, #17]	@ 000cc416 787c
.org 0xcc418
	adds r0, #64	@ 000cc418 4030
.org 0xcc41a
	lsls r0, r0, #24	@ 000cc41a 0006
.org 0xcc41c
	lsrs r0, r0, #23	@ 000cc41c c00d
.org 0xcc41e
	adds r0, r0, r2	@ 000cc41e 8018
.org 0xcc420
	movs r3, #0	@ 000cc420 0023
.org 0xcc422
	ldrsh r1, [r0, r3]	@ 000cc422 c15e
.org 0xcc424
	lsls r0, r1, #1	@ 000cc424 4800
.org 0xcc426
	adds r0, r0, r1	@ 000cc426 4018
.org 0xcc428
	str r0, [r7, #92]	@ 000cc428 f865
.org 0xcc42a
	ldrb r0, [r7, #17]	@ 000cc42a 787c
.org 0xcc42c
	lsls r0, r0, #1	@ 000cc42c 4000
.org 0xcc42e
	adds r0, r0, r2	@ 000cc42e 8018
.org 0xcc430
	movs r2, #0	@ 000cc430 0022
.org 0xcc432
	ldrsh r1, [r0, r2]	@ 000cc432 815e
.org 0xcc434
	lsls r0, r1, #1	@ 000cc434 4800
.org 0xcc436
	adds r0, r0, r1	@ 000cc436 4018
.org 0xcc438
	str r0, [r7, #96]	@ 000cc438 3866
.org 0xcc43a
	adds r0, r7, #0	@ 000cc43a 381c
.org 0xcc43c
	adds r0, #84	@ 000cc43c 5430
.org 0xcc43e
	ldrb r3, [r7, #17]	@ 000cc43e 7b7c
.org 0xcc440
	movs r1, #0	@ 000cc440 0021
.org 0xcc442
	movs r2, #1	@ 000cc442 0122
.org 0xcc444
	bl 0xcbf1c	@ 000cc444 fff76afd
.org 0xcc448
	ldr r1, [pc, #40]	@ 000cc448 0a49
.org 0xcc44a
	ldrb r0, [r7, #9]	@ 000cc44a 787a
.org 0xcc44c
	lsls r0, r0, #2	@ 000cc44c 8000
.org 0xcc44e
	adds r0, r0, r1	@ 000cc44e 4018
.org 0xcc450
	movs r1, #1	@ 000cc450 0121
.org 0xcc452
	str r1, [r7, #12]	@ 000cc452 f960
.org 0xcc454
	ldr r0, [r0, #0]	@ 000cc454 0068
.org 0xcc456
	ldr r0, [r0, #4]	@ 000cc456 4068
.org 0xcc458
	str r0, [r7, #20]	@ 000cc458 7861
.org 0xcc45a
	adds r0, r7, #0	@ 000cc45a 381c
