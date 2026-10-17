@ FUN_080e4498  entry 0x080e4498  size 180
.thumb
.org 0xe4498
FUN_080e4498:
	push {r4, r5, r6, lr}	@ 000e4498 70b5
.org 0xe449a
	adds r6, r0, #0	@ 000e449a 061c
.org 0xe449c
	ldr r2, [pc, #52]	@ 000e449c 0d4a
.org 0xe449e
	ldr r1, [r2, #0]	@ 000e449e 1168
.org 0xe44a0
	ldr r0, [pc, #52]	@ 000e44a0 0d48
.org 0xe44a2
	muls r0, r1	@ 000e44a2 4843
.org 0xe44a4
	ldr r1, [pc, #52]	@ 000e44a4 0d49
.org 0xe44a6
	adds r0, r0, r1	@ 000e44a6 4018
.org 0xe44a8
	lsls r0, r0, #1	@ 000e44a8 4000
.org 0xe44aa
	lsrs r1, r0, #1	@ 000e44aa 4108
.org 0xe44ac
	str r1, [r2, #0]	@ 000e44ac 1160
.org 0xe44ae
	lsrs r0, r0, #17	@ 000e44ae 400c
.org 0xe44b0
	movs r1, #3	@ 000e44b0 0321
.org 0xe44b2
	bl 0x129198	@ 000e44b2 44f071fe
.org 0xe44b6
	lsls r0, r0, #24	@ 000e44b6 0006
.org 0xe44b8
	lsrs r4, r0, #24	@ 000e44b8 040e
.org 0xe44ba
	adds r0, r6, #0	@ 000e44ba 301c
.org 0xe44bc
	bl 0x1cc9c	@ 000e44bc 38f7eefb
.org 0xe44c0
	ldrb r1, [r6, #10]	@ 000e44c0 b17a
.org 0xe44c2
	movs r0, #1	@ 000e44c2 0120
.org 0xe44c4
	orrs r0, r1	@ 000e44c4 0843
.org 0xe44c6
	movs r1, #2	@ 000e44c6 0221
.org 0xe44c8
	orrs r0, r1	@ 000e44c8 0843
.org 0xe44ca
	strb r0, [r6, #10]	@ 000e44ca b072
.org 0xe44cc
	cmp r4, #0	@ 000e44cc 002c
.org 0xe44ce
	bne.n 0xe44e4	@ 000e44ce 09d1
.org 0xe44d0
	ldr r1, [pc, #12]	@ 000e44d0 0349
.org 0xe44d2
	b.n 0xe44ea	@ 000e44d2 0ae0
.org 0xe44d4
	.byte 0x38,0xdc,0x02,0x02	@ 000e44d4 data
.org 0xe44d8
	.byte 0xfd,0x43,0x03,0x00	@ 000e44d8 data
.org 0xe44dc
	.byte 0xc3,0x9e,0x26,0x00	@ 000e44dc data
.org 0xe44e0
	.byte 0x06,0xd8,0x00,0x00	@ 000e44e0 data
.org 0xe44e4
	cmp r4, #1	@ 000e44e4 012c
.org 0xe44e6
	bne.n 0xe44f8	@ 000e44e6 07d1
.org 0xe44e8
	ldr r1, [pc, #8]	@ 000e44e8 0249
.org 0xe44ea
	adds r0, r6, #0	@ 000e44ea 301c
.org 0xe44ec
	bl 0x1cf00	@ 000e44ec 38f708fd
.org 0xe44f0
	b.n 0xe4500	@ 000e44f0 06e0
.org 0xe44f2
	.byte 0x00	@ 000e44f2 data
.org 0xe44f3
	.byte 0x00	@ 000e44f3 data
.org 0xe44f4
	.byte 0x07,0xd8,0x00,0x00	@ 000e44f4 data
.org 0xe44f8
	ldr r1, [pc, #104]	@ 000e44f8 1a49
.org 0xe44fa
	adds r0, r6, #0	@ 000e44fa 301c
.org 0xe44fc
	bl 0x1cf00	@ 000e44fc 38f700fd
.org 0xe4500
	adds r0, r6, #0	@ 000e4500 301c
.org 0xe4502
	bl 0x1cff0	@ 000e4502 38f775fd
.org 0xe4506
	adds r1, r6, #0	@ 000e4506 311c
.org 0xe4508
	adds r1, #37	@ 000e4508 2531
.org 0xe450a
	movs r0, #23	@ 000e450a 1720
.org 0xe450c
	strb r0, [r1, #0]	@ 000e450c 0870
.org 0xe450e
	ldr r5, [pc, #88]	@ 000e450e 164d
.org 0xe4510
	ldr r0, [r5, #0]	@ 000e4510 2868
.org 0xe4512
	ldr r3, [pc, #88]	@ 000e4512 164b
.org 0xe4514
	muls r0, r3	@ 000e4514 5843
.org 0xe4516
	ldr r2, [pc, #88]	@ 000e4516 164a
.org 0xe4518
	adds r0, r0, r2	@ 000e4518 8018
.org 0xe451a
	lsls r0, r0, #1	@ 000e451a 4000
.org 0xe451c
	lsrs r1, r0, #1	@ 000e451c 4108
.org 0xe451e
	lsls r0, r0, #6	@ 000e451e 8001
.org 0xe4520
	lsrs r0, r0, #23	@ 000e4520 c00d
.org 0xe4522
	movs r4, #64	@ 000e4522 4024
.org 0xe4524
	subs r0, r4, r0	@ 000e4524 201a
.org 0xe4526
	str r0, [r6, #92]	@ 000e4526 f065
.org 0xe4528
	adds r0, r1, #0	@ 000e4528 081c
.org 0xe452a
	muls r0, r3	@ 000e452a 5843
.org 0xe452c
	adds r0, r0, r2	@ 000e452c 8018
.org 0xe452e
	lsls r0, r0, #1	@ 000e452e 4000
.org 0xe4530
	lsrs r1, r0, #1	@ 000e4530 4108
.org 0xe4532
	str r1, [r5, #0]	@ 000e4532 2960
.org 0xe4534
	lsrs r0, r0, #17	@ 000e4534 400c
.org 0xe4536
	movs r1, #7	@ 000e4536 0721
.org 0xe4538
	ands r0, r1	@ 000e4538 0840
.org 0xe453a
	adds r0, #8	@ 000e453a 0830
.org 0xe453c
	lsls r0, r0, #6	@ 000e453c 8001
.org 0xe453e
	negs r0, r0	@ 000e453e 4042
.org 0xe4540
	str r0, [r6, #96]	@ 000e4540 3066
.org 0xe4542
	strb r4, [r6, #18]	@ 000e4542 b474
.org 0xe4544
	ldr r1, [pc, #44]	@ 000e4544 0b49
.org 0xe4546
	ldrb r0, [r6, #9]	@ 000e4546 707a
.org 0xe4548
	lsls r0, r0, #2	@ 000e4548 8000
.org 0xe454a
	adds r0, r0, r1	@ 000e454a 4018
