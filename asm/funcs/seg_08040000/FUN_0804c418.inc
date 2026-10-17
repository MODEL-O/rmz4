@ FUN_0804c418  entry 0x0804c418  size 268
.thumb
.org 0x4c418
FUN_0804c418:
	push {r4, lr}	@ 0004c418 10b5
.org 0x4c41a
	sub sp, #8	@ 0004c41a 82b0
.org 0x4c41c
	adds r4, r0, #0	@ 0004c41c 041c
.org 0x4c41e
	ldrb r1, [r4, #13]	@ 0004c41e 617b
.org 0x4c420
	cmp r1, #0	@ 0004c420 0029
.org 0x4c422
	bne.n 0x4c446	@ 0004c422 10d1
.org 0x4c424
	adds r0, #140	@ 0004c424 8c30
.org 0x4c426
	str r1, [r0, #0]	@ 0004c426 0160
.org 0x4c428
	adds r0, #4	@ 0004c428 0430
.org 0x4c42a
	str r1, [r0, #0]	@ 0004c42a 0160
.org 0x4c42c
	adds r0, #4	@ 0004c42c 0430
.org 0x4c42e
	strb r1, [r0, #0]	@ 0004c42e 0170
.org 0x4c430
	ldrb r1, [r4, #10]	@ 0004c430 a17a
.org 0x4c432
	movs r0, #251	@ 0004c432 fb20
.org 0x4c434
	ands r0, r1	@ 0004c434 0840
.org 0x4c436
	movs r1, #254	@ 0004c436 fe21
.org 0x4c438
	ands r0, r1	@ 0004c438 0840
.org 0x4c43a
	strb r0, [r4, #10]	@ 0004c43a a072
.org 0x4c43c
	movs r0, #16	@ 0004c43c 1020
.org 0x4c43e
	strb r0, [r4, #18]	@ 0004c43e a074
.org 0x4c440
	ldrb r0, [r4, #13]	@ 0004c440 607b
.org 0x4c442
	adds r0, #1	@ 0004c442 0130
.org 0x4c444
	strb r0, [r4, #13]	@ 0004c444 6073
.org 0x4c446
	adds r0, r4, #0	@ 0004c446 201c
.org 0x4c448
	bl 0x1cff0	@ 0004c448 d0f7d2fd
.org 0x4c44c
	ldrb r1, [r4, #18]	@ 0004c44c a17c
.org 0x4c44e
	movs r0, #1	@ 0004c44e 0120
.org 0x4c450
	ands r0, r1	@ 0004c450 0840
.org 0x4c452
	cmp r0, #0	@ 0004c452 0028
.org 0x4c454
	bne.n 0x4c500	@ 0004c454 54d1
.org 0x4c456
	ldr r0, [r4, #84]	@ 0004c456 606d
.org 0x4c458
	ldr r1, [r4, #88]	@ 0004c458 a16d
.org 0x4c45a
	str r0, [sp, #0]	@ 0004c45a 0090
.org 0x4c45c
	str r1, [sp, #4]	@ 0004c45c 0191
.org 0x4c45e
	ldrb r1, [r4, #10]	@ 0004c45e a17a
.org 0x4c460
	movs r0, #16	@ 0004c460 1020
.org 0x4c462
	ands r0, r1	@ 0004c462 0840
.org 0x4c464
	cmp r0, #0	@ 0004c464 0028
.org 0x4c466
	beq.n 0x4c4b4	@ 0004c466 25d0
.org 0x4c468
	ldr r3, [pc, #68]	@ 0004c468 114b
.org 0x4c46a
	ldrb r1, [r4, #18]	@ 0004c46a a17c
.org 0x4c46c
	lsls r0, r1, #3	@ 0004c46c c800
.org 0x4c46e
	adds r0, r0, r1	@ 0004c46e 4018
.org 0x4c470
	lsls r0, r0, #26	@ 0004c470 8006
.org 0x4c472
	movs r1, #128	@ 0004c472 8021
.org 0x4c474
	lsls r1, r1, #23	@ 0004c474 c905
.org 0x4c476
	adds r0, r0, r1	@ 0004c476 4018
.org 0x4c478
	lsrs r0, r0, #23	@ 0004c478 c00d
.org 0x4c47a
	adds r0, r0, r3	@ 0004c47a c018
.org 0x4c47c
	movs r1, #0	@ 0004c47c 0021
.org 0x4c47e
	ldrsh r2, [r0, r1]	@ 0004c47e 425e
.org 0x4c480
	lsls r2, r2, #1	@ 0004c480 5200
.org 0x4c482
	ldr r0, [sp, #0]	@ 0004c482 0098
.org 0x4c484
	adds r2, r2, r0	@ 0004c484 1218
.org 0x4c486
	str r2, [sp, #0]	@ 0004c486 0092
.org 0x4c488
	ldrb r1, [r4, #18]	@ 0004c488 a17c
.org 0x4c48a
	lsls r0, r1, #3	@ 0004c48a c800
.org 0x4c48c
	adds r0, r0, r1	@ 0004c48c 4018
.org 0x4c48e
	lsls r0, r0, #26	@ 0004c48e 8006
.org 0x4c490
	lsrs r0, r0, #23	@ 0004c490 c00d
.org 0x4c492
	adds r0, r0, r3	@ 0004c492 c018
.org 0x4c494
	movs r1, #0	@ 0004c494 0021
.org 0x4c496
	ldrsh r0, [r0, r1]	@ 0004c496 405e
.org 0x4c498
	lsls r0, r0, #1	@ 0004c498 4000
.org 0x4c49a
	adds r0, r0, r2	@ 0004c49a 8018
.org 0x4c49c
	str r0, [sp, #0]	@ 0004c49c 0090
.org 0x4c49e
	ldrb r2, [r4, #18]	@ 0004c49e a27c
.org 0x4c4a0
	lsls r1, r2, #3	@ 0004c4a0 d100
.org 0x4c4a2
	adds r1, r1, r2	@ 0004c4a2 8918
.org 0x4c4a4
	lsls r1, r1, #26	@ 0004c4a4 8906
.org 0x4c4a6
	lsrs r1, r1, #24	@ 0004c4a6 090e
.org 0x4c4a8
	mov r0, sp	@ 0004c4a8 6846
.org 0x4c4aa
	bl 0x4bfb4	@ 0004c4aa fff783fd
.org 0x4c4ae
	b.n 0x4c500	@ 0004c4ae 27e0
.org 0x4c4b0
	.byte 0x0c,0x93,0x12,0x08	@ 0004c4b0 data
.org 0x4c4b4
	ldr r3, [pc, #112]	@ 0004c4b4 1c4b
.org 0x4c4b6
	ldrb r0, [r4, #18]	@ 0004c4b6 a07c
.org 0x4c4b8
	lsls r1, r0, #3	@ 0004c4b8 c100
.org 0x4c4ba
	adds r1, r1, r0	@ 0004c4ba 0918
.org 0x4c4bc
	lsls r1, r1, #2	@ 0004c4bc 8900
.org 0x4c4be
	movs r0, #64	@ 0004c4be 4020
.org 0x4c4c0
	subs r0, r0, r1	@ 0004c4c0 401a
.org 0x4c4c2
	lsls r0, r0, #24	@ 0004c4c2 0006
.org 0x4c4c4
	lsrs r0, r0, #23	@ 0004c4c4 c00d
.org 0x4c4c6
	adds r0, r0, r3	@ 0004c4c6 c018
.org 0x4c4c8
	movs r1, #0	@ 0004c4c8 0021
.org 0x4c4ca
	ldrsh r0, [r0, r1]	@ 0004c4ca 405e
.org 0x4c4cc
	lsls r0, r0, #1	@ 0004c4cc 4000
.org 0x4c4ce
	ldr r2, [sp, #0]	@ 0004c4ce 009a
.org 0x4c4d0
	adds r2, r2, r0	@ 0004c4d0 1218
.org 0x4c4d2
	str r2, [sp, #0]	@ 0004c4d2 0092
.org 0x4c4d4
	ldrb r1, [r4, #18]	@ 0004c4d4 a17c
.org 0x4c4d6
	lsls r0, r1, #3	@ 0004c4d6 c800
.org 0x4c4d8
	adds r0, r0, r1	@ 0004c4d8 4018
.org 0x4c4da
	lsls r0, r0, #26	@ 0004c4da 8006
.org 0x4c4dc
	negs r0, r0	@ 0004c4dc 4042
.org 0x4c4de
	lsrs r0, r0, #24	@ 0004c4de 000e
.org 0x4c4e0
	lsls r0, r0, #1	@ 0004c4e0 4000
.org 0x4c4e2
	adds r0, r0, r3	@ 0004c4e2 c018
.org 0x4c4e4
	movs r1, #0	@ 0004c4e4 0021
.org 0x4c4e6
	ldrsh r0, [r0, r1]	@ 0004c4e6 405e
.org 0x4c4e8
	lsls r0, r0, #1	@ 0004c4e8 4000
.org 0x4c4ea
	adds r2, r2, r0	@ 0004c4ea 1218
.org 0x4c4ec
	str r2, [sp, #0]	@ 0004c4ec 0092
.org 0x4c4ee
	ldrb r2, [r4, #18]	@ 0004c4ee a27c
.org 0x4c4f0
	lsls r1, r2, #3	@ 0004c4f0 d100
.org 0x4c4f2
	adds r1, r1, r2	@ 0004c4f2 8918
.org 0x4c4f4
	lsls r1, r1, #26	@ 0004c4f4 8906
.org 0x4c4f6
	negs r1, r1	@ 0004c4f6 4942
.org 0x4c4f8
	lsrs r1, r1, #24	@ 0004c4f8 090e
.org 0x4c4fa
	mov r0, sp	@ 0004c4fa 6846
.org 0x4c4fc
	bl 0x4bfb4	@ 0004c4fc fff75afd
.org 0x4c500
	ldrb r0, [r4, #18]	@ 0004c500 a07c
.org 0x4c502
	subs r0, #1	@ 0004c502 0138
.org 0x4c504
	strb r0, [r4, #18]	@ 0004c504 a074
.org 0x4c506
	lsls r0, r0, #24	@ 0004c506 0006
.org 0x4c508
	lsrs r0, r0, #24	@ 0004c508 000e
.org 0x4c50a
	cmp r0, #255	@ 0004c50a ff28
.org 0x4c50c
	bne.n 0x4c520	@ 0004c50c 08d1
.org 0x4c50e
	ldr r1, [pc, #28]	@ 0004c50e 0749
.org 0x4c510
	ldrb r0, [r4, #9]	@ 0004c510 607a
.org 0x4c512
	lsls r0, r0, #2	@ 0004c512 8000
.org 0x4c514
	adds r0, r0, r1	@ 0004c514 4018
.org 0x4c516
	movs r1, #4	@ 0004c516 0421
.org 0x4c518
	str r1, [r4, #12]	@ 0004c518 e160
.org 0x4c51a
	ldr r0, [r0, #0]	@ 0004c51a 0068
.org 0x4c51c
	ldr r0, [r0, #16]	@ 0004c51c 0069
.org 0x4c51e
	str r0, [r4, #20]	@ 0004c51e 6061
.org 0x4c520
	add sp, #8	@ 0004c520 02b0
.org 0x4c522
	pop {r4}	@ 0004c522 10bc
