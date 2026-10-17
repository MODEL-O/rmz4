@ FUN_08080488  entry 0x08080488  size 302
.thumb
.org 0x80488
FUN_08080488:
	push {r4, r5, lr}	@ 00080488 30b5
.org 0x8048a
	sub sp, #8	@ 0008048a 82b0
.org 0x8048c
	adds r4, r0, #0	@ 0008048c 041c
.org 0x8048e
	ldrb r0, [r4, #15]	@ 0008048e e07b
.org 0x80490
	cmp r0, #0	@ 00080490 0028
.org 0x80492
	bne.n 0x804fc	@ 00080492 33d1
.org 0x80494
	ldr r0, [r4, #84]	@ 00080494 606d
.org 0x80496
	ldr r1, [r4, #92]	@ 00080496 e16d
.org 0x80498
	adds r0, r0, r1	@ 00080498 4018
.org 0x8049a
	str r0, [r4, #84]	@ 0008049a 6065
.org 0x8049c
	movs r0, #250	@ 0008049c fa20
.org 0x8049e
	muls r0, r1	@ 0008049e 4843
.org 0x804a0
	cmp r0, #0	@ 000804a0 0028
.org 0x804a2
	bge.n 0x804a6	@ 000804a2 00da
.org 0x804a4
	adds r0, #255	@ 000804a4 ff30
.org 0x804a6
	asrs r0, r0, #8	@ 000804a6 0012
.org 0x804a8
	str r0, [r4, #92]	@ 000804a8 e065
.org 0x804aa
	ldr r0, [r4, #88]	@ 000804aa a06d
.org 0x804ac
	ldr r1, [r4, #96]	@ 000804ac 216e
.org 0x804ae
	adds r0, r0, r1	@ 000804ae 4018
.org 0x804b0
	str r0, [r4, #88]	@ 000804b0 a065
.org 0x804b2
	adds r1, #64	@ 000804b2 4031
.org 0x804b4
	str r1, [r4, #96]	@ 000804b4 2166
.org 0x804b6
	adds r0, r4, #0	@ 000804b6 201c
.org 0x804b8
	bl 0x806b0	@ 000804b8 00f0faf8
.org 0x804bc
	ldrb r1, [r4, #18]	@ 000804bc a17c
.org 0x804be
	movs r0, #2	@ 000804be 0220
.org 0x804c0
	ands r0, r1	@ 000804c0 0840
.org 0x804c2
	cmp r0, #0	@ 000804c2 0028
.org 0x804c4
	beq.n 0x804ce	@ 000804c4 03d0
.org 0x804c6
	ldrb r1, [r4, #10]	@ 000804c6 a17a
.org 0x804c8
	movs r0, #1	@ 000804c8 0120
.org 0x804ca
	orrs r0, r1	@ 000804ca 0843
.org 0x804cc
	b.n 0x804d4	@ 000804cc 02e0
.org 0x804ce
	ldrb r1, [r4, #10]	@ 000804ce a17a
.org 0x804d0
	movs r0, #254	@ 000804d0 fe20
.org 0x804d2
	ands r0, r1	@ 000804d2 0840
.org 0x804d4
	strb r0, [r4, #10]	@ 000804d4 a072
.org 0x804d6
	ldrb r0, [r4, #18]	@ 000804d6 a07c
.org 0x804d8
	subs r0, #1	@ 000804d8 0138
.org 0x804da
	strb r0, [r4, #18]	@ 000804da a074
.org 0x804dc
	lsls r0, r0, #24	@ 000804dc 0006
.org 0x804de
	lsrs r0, r0, #24	@ 000804de 000e
.org 0x804e0
	cmp r0, #255	@ 000804e0 ff28
.org 0x804e2
	bne.n 0x805ac	@ 000804e2 63d1
.org 0x804e4
	ldr r1, [pc, #16]	@ 000804e4 0449
.org 0x804e6
	adds r0, r4, #0	@ 000804e6 201c
.org 0x804e8
	bl 0x1cf00	@ 000804e8 9cf70afd
.org 0x804ec
	movs r0, #24	@ 000804ec 1820
.org 0x804ee
	strb r0, [r4, #18]	@ 000804ee a074
.org 0x804f0
	ldrb r0, [r4, #15]	@ 000804f0 e07b
.org 0x804f2
	adds r0, #1	@ 000804f2 0130
.org 0x804f4
	strb r0, [r4, #15]	@ 000804f4 e073
.org 0x804f6
	b.n 0x805ac	@ 000804f6 59e0
.org 0x804f8
	.byte 0x04,0x1a,0x00,0x00	@ 000804f8 data
.org 0x804fc
	ldr r0, [r4, #84]	@ 000804fc 606d
.org 0x804fe
	ldr r1, [r4, #92]	@ 000804fe e16d
.org 0x80500
	adds r0, r0, r1	@ 00080500 4018
.org 0x80502
	str r0, [r4, #84]	@ 00080502 6065
.org 0x80504
	movs r0, #250	@ 00080504 fa20
.org 0x80506
	muls r0, r1	@ 00080506 4843
.org 0x80508
	cmp r0, #0	@ 00080508 0028
.org 0x8050a
	bge.n 0x8050e	@ 0008050a 00da
.org 0x8050c
	adds r0, #255	@ 0008050c ff30
.org 0x8050e
	asrs r0, r0, #8	@ 0008050e 0012
.org 0x80510
	str r0, [r4, #92]	@ 00080510 e065
.org 0x80512
	ldr r0, [r4, #88]	@ 00080512 a06d
.org 0x80514
	ldr r1, [r4, #96]	@ 00080514 216e
.org 0x80516
	adds r0, r0, r1	@ 00080516 4018
.org 0x80518
	str r0, [r4, #88]	@ 00080518 a065
.org 0x8051a
	adds r1, #32	@ 0008051a 2031
.org 0x8051c
	str r1, [r4, #96]	@ 0008051c 2166
.org 0x8051e
	adds r0, r4, #0	@ 0008051e 201c
.org 0x80520
	bl 0x806b0	@ 00080520 00f0c6f8
.org 0x80524
	ldrb r1, [r4, #18]	@ 00080524 a17c
.org 0x80526
	movs r0, #2	@ 00080526 0220
.org 0x80528
	ands r0, r1	@ 00080528 0840
.org 0x8052a
	cmp r0, #0	@ 0008052a 0028
.org 0x8052c
	beq.n 0x80536	@ 0008052c 03d0
.org 0x8052e
	ldrb r1, [r4, #10]	@ 0008052e a17a
.org 0x80530
	movs r0, #1	@ 00080530 0120
.org 0x80532
	orrs r0, r1	@ 00080532 0843
.org 0x80534
	b.n 0x8053c	@ 00080534 02e0
.org 0x80536
	ldrb r1, [r4, #10]	@ 00080536 a17a
.org 0x80538
	movs r0, #254	@ 00080538 fe20
.org 0x8053a
	ands r0, r1	@ 0008053a 0840
.org 0x8053c
	strb r0, [r4, #10]	@ 0008053c a072
.org 0x8053e
	ldrb r0, [r4, #18]	@ 0008053e a07c
.org 0x80540
	subs r0, #1	@ 00080540 0138
.org 0x80542
	strb r0, [r4, #18]	@ 00080542 a074
.org 0x80544
	lsls r0, r0, #24	@ 00080544 0006
.org 0x80546
	lsrs r0, r0, #24	@ 00080546 000e
.org 0x80548
	cmp r0, #255	@ 00080548 ff28
.org 0x8054a
	bne.n 0x805ac	@ 0008054a 2fd1
.org 0x8054c
	ldr r0, [r4, #84]	@ 0008054c 606d
.org 0x8054e
	str r0, [sp, #0]	@ 0008054e 0090
.org 0x80550
	ldr r0, [r4, #88]	@ 00080550 a06d
.org 0x80552
	ldr r1, [pc, #104]	@ 00080552 1a49
.org 0x80554
	adds r0, r0, r1	@ 00080554 4018
.org 0x80556
	str r0, [sp, #4]	@ 00080556 0190
.org 0x80558
	movs r0, #1	@ 00080558 0120
.org 0x8055a
	mov r1, sp	@ 0008055a 6946
.org 0x8055c
	bl 0xd0c88	@ 0008055c 50f094fb
.org 0x80560
	adds r5, r4, #0	@ 00080560 251c
.org 0x80562
	adds r5, #84	@ 00080562 5435
.org 0x80564
	adds r0, r4, #0	@ 00080564 201c
.org 0x80566
	adds r1, r5, #0	@ 00080566 291c
.org 0x80568
	bl 0xd67cc	@ 00080568 56f030f9
.org 0x8056c
	movs r0, #42	@ 0008056c 2a20
.org 0x8056e
	bl 0x2b10	@ 0008056e 82f7cffa
.org 0x80572
	movs r0, #3	@ 00080572 0320
.org 0x80574
	movs r1, #13	@ 00080574 0d21
.org 0x80576
	adds r2, r5, #0	@ 00080576 2a1c
.org 0x80578
	bl 0x2ab88	@ 00080578 aaf706fb
.org 0x8057c
	ldr r2, [pc, #64]	@ 0008057c 104a
.org 0x8057e
	ldrh r1, [r2, #12]	@ 0008057e 9189
.org 0x80580
	ldr r0, [pc, #64]	@ 00080580 1048
.org 0x80582
	cmp r1, r0	@ 00080582 8142
.org 0x80584
	bhi.n 0x8058a	@ 00080584 01d8
.org 0x80586
	adds r0, r1, #1	@ 00080586 481c
.org 0x80588
	strh r0, [r2, #12]	@ 00080588 9081
.org 0x8058a
	adds r0, r4, #0	@ 0008058a 201c
.org 0x8058c
	adds r1, r5, #0	@ 0008058c 291c
.org 0x8058e
	bl 0x2abe0	@ 0008058e aaf727fb
.org 0x80592
	ldrb r1, [r4, #10]	@ 00080592 a17a
.org 0x80594
	movs r0, #254	@ 00080594 fe20
.org 0x80596
	ands r0, r1	@ 00080596 0840
.org 0x80598
	strb r0, [r4, #10]	@ 00080598 a072
.org 0x8059a
	ldr r1, [pc, #44]	@ 0008059a 0b49
.org 0x8059c
	ldrb r0, [r4, #9]	@ 0008059c 607a
.org 0x8059e
	lsls r0, r0, #2	@ 0008059e 8000
.org 0x805a0
	adds r0, r0, r1	@ 000805a0 4018
.org 0x805a2
	movs r1, #4	@ 000805a2 0421
.org 0x805a4
	str r1, [r4, #12]	@ 000805a4 e160
.org 0x805a6
	ldr r0, [r0, #0]	@ 000805a6 0068
.org 0x805a8
	ldr r0, [r0, #16]	@ 000805a8 0069
.org 0x805aa
	str r0, [r4, #20]	@ 000805aa 6061
.org 0x805ac
	adds r0, r4, #0	@ 000805ac 201c
.org 0x805ae
	bl 0x1cff0	@ 000805ae 9cf71ffd
.org 0x805b2
	add sp, #8	@ 000805b2 02b0
.org 0x805b4
	pop {r4, r5}	@ 000805b4 30bc
