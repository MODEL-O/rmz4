@ FUN_0809b4e4  entry 0x0809b4e4  size 242
.thumb
.org 0x9b4e4
FUN_0809b4e4:
	push {r4, r5, r6, r7, lr}	@ 0009b4e4 f0b5
.org 0x9b4e6
	mov r7, sl	@ 0009b4e6 5746
.org 0x9b4e8
	mov r6, r9	@ 0009b4e8 4e46
.org 0x9b4ea
	mov r5, r8	@ 0009b4ea 4546
.org 0x9b4ec
	push {r5, r6, r7}	@ 0009b4ec e0b4
.org 0x9b4ee
	sub sp, #40	@ 0009b4ee 8ab0
.org 0x9b4f0
	adds r4, r0, #0	@ 0009b4f0 041c
.org 0x9b4f2
	ldr r1, [pc, #228]	@ 0009b4f2 3949
.org 0x9b4f4
	mov r0, sp	@ 0009b4f4 6846
.org 0x9b4f6
	movs r2, #12	@ 0009b4f6 0c22
.org 0x9b4f8
	bl 0x129258	@ 0009b4f8 8df0aefe
.org 0x9b4fc
	ldr r5, [r4, #40]	@ 0009b4fc a56a
.org 0x9b4fe
	movs r0, #63	@ 0009b4fe 3f20
.org 0x9b500
	bl 0x2b10	@ 0009b500 67f706fb
.org 0x9b504
	adds r0, r4, #0	@ 0009b504 201c
.org 0x9b506
	adds r0, #182	@ 0009b506 b630
.org 0x9b508
	ldrb r0, [r0, #0]	@ 0009b508 0078
.org 0x9b50a
	cmp r0, #0	@ 0009b50a 0028
.org 0x9b50c
	beq.n 0x9b516	@ 0009b50c 03d0
.org 0x9b50e
	adds r0, r5, #0	@ 0009b50e 281c
.org 0x9b510
	adds r1, r4, #0	@ 0009b510 211c
.org 0x9b512
	bl 0x66408	@ 0009b512 caf779ff
.org 0x9b516
	adds r0, r4, #0	@ 0009b516 201c
.org 0x9b518
	adds r0, #84	@ 0009b518 5430
.org 0x9b51a
	movs r1, #1	@ 0009b51a 0121
.org 0x9b51c
	movs r2, #0	@ 0009b51c 0022
.org 0x9b51e
	bl 0x664bc	@ 0009b51e caf7cdff
.org 0x9b522
	ldrb r1, [r4, #10]	@ 0009b522 a17a
.org 0x9b524
	lsrs r1, r1, #4	@ 0009b524 0909
.org 0x9b526
	movs r0, #1	@ 0009b526 0120
.org 0x9b528
	ands r1, r0	@ 0009b528 0140
.org 0x9b52a
	mov r2, sp	@ 0009b52a 6a46
.org 0x9b52c
	adds r2, #2	@ 0009b52c 0232
.org 0x9b52e
	adds r0, r4, #0	@ 0009b52e 201c
.org 0x9b530
	adds r0, #140	@ 0009b530 8c30
.org 0x9b532
	str r0, [sp, #24]	@ 0009b532 0690
.org 0x9b534
	adds r6, r4, #0	@ 0009b534 261c
.org 0x9b536
	adds r6, #144	@ 0009b536 9036
.org 0x9b538
	str r6, [sp, #28]	@ 0009b538 0796
.org 0x9b53a
	adds r0, #8	@ 0009b53a 0830
.org 0x9b53c
	str r0, [sp, #32]	@ 0009b53c 0890
.org 0x9b53e
	lsls r0, r1, #1	@ 0009b53e 4800
.org 0x9b540
	subs r0, #1	@ 0009b540 0138
.org 0x9b542
	str r0, [sp, #20]	@ 0009b542 0590
.org 0x9b544
	mov r6, sp	@ 0009b544 6e46
.org 0x9b546
	adds r6, #12	@ 0009b546 0c36
.org 0x9b548
	str r6, [sp, #36]	@ 0009b548 0996
.org 0x9b54a
	movs r0, #0	@ 0009b54a 0020
.org 0x9b54c
	mov r9, r0	@ 0009b54c 8146
.org 0x9b54e
	mov r8, r2	@ 0009b54e 9046
.org 0x9b550
	mov r5, sp	@ 0009b550 6d46
.org 0x9b552
	lsls r0, r1, #4	@ 0009b552 0801
.org 0x9b554
	orrs r1, r0	@ 0009b554 0143
.org 0x9b556
	lsls r1, r1, #24	@ 0009b556 0906
.org 0x9b558
	mov sl, r1	@ 0009b558 8a46
.org 0x9b55a
	movs r7, #2	@ 0009b55a 0227
.org 0x9b55c
	movs r1, #0	@ 0009b55c 0021
.org 0x9b55e
	ldrsh r0, [r5, r1]	@ 0009b55e 685e
.org 0x9b560
	ldr r2, [sp, #20]	@ 0009b560 059a
.org 0x9b562
	adds r1, r0, #0	@ 0009b562 011c
.org 0x9b564
	muls r1, r2	@ 0009b564 5143
.org 0x9b566
	ldr r0, [r4, #84]	@ 0009b566 606d
.org 0x9b568
	adds r0, r0, r1	@ 0009b568 4018
.org 0x9b56a
	str r0, [sp, #12]	@ 0009b56a 0390
.org 0x9b56c
	mov r6, r8	@ 0009b56c 4646
.org 0x9b56e
	movs r0, #0	@ 0009b56e 0020
.org 0x9b570
	ldrsh r1, [r6, r0]	@ 0009b570 315e
.org 0x9b572
	ldr r0, [r4, #88]	@ 0009b572 a06d
.org 0x9b574
	adds r0, r0, r1	@ 0009b574 4018
.org 0x9b576
	ldr r1, [sp, #36]	@ 0009b576 0999
.org 0x9b578
	str r0, [r1, #4]	@ 0009b578 4860
.org 0x9b57a
	ldr r1, [pc, #96]	@ 0009b57a 1849
.org 0x9b57c
	add r1, r9	@ 0009b57c 4944
.org 0x9b57e
	ldr r0, [sp, #36]	@ 0009b57e 0998
.org 0x9b580
	movs r2, #0	@ 0009b580 0022
.org 0x9b582
	mov r6, sl	@ 0009b582 5646
.org 0x9b584
	lsrs r3, r6, #24	@ 0009b584 330e
.org 0x9b586
	bl 0xd4c8c	@ 0009b586 39f081fb
.org 0x9b58a
	movs r0, #28	@ 0009b58a 1c20
.org 0x9b58c
	add r9, r0	@ 0009b58c 8144
.org 0x9b58e
	movs r1, #4	@ 0009b58e 0421
.org 0x9b590
	add r8, r1	@ 0009b590 8844
.org 0x9b592
	adds r5, #4	@ 0009b592 0435
.org 0x9b594
	subs r7, #1	@ 0009b594 013f
.org 0x9b596
	cmp r7, #0	@ 0009b596 002f
.org 0x9b598
	bge.n 0x9b55c	@ 0009b598 e0da
.org 0x9b59a
	movs r0, #0	@ 0009b59a 0020
.org 0x9b59c
	ldr r2, [sp, #24]	@ 0009b59c 069a
.org 0x9b59e
	str r0, [r2, #0]	@ 0009b59e 1060
.org 0x9b5a0
	ldr r6, [sp, #28]	@ 0009b5a0 079e
.org 0x9b5a2
	str r0, [r6, #0]	@ 0009b5a2 3060
.org 0x9b5a4
	ldr r1, [sp, #32]	@ 0009b5a4 0899
.org 0x9b5a6
	strb r0, [r1, #0]	@ 0009b5a6 0870
.org 0x9b5a8
	ldrb r1, [r4, #10]	@ 0009b5a8 a17a
.org 0x9b5aa
	movs r0, #251	@ 0009b5aa fb20
.org 0x9b5ac
	ands r0, r1	@ 0009b5ac 0840
.org 0x9b5ae
	movs r1, #254	@ 0009b5ae fe21
.org 0x9b5b0
	ands r0, r1	@ 0009b5b0 0840
.org 0x9b5b2
	strb r0, [r4, #10]	@ 0009b5b2 a072
.org 0x9b5b4
	ldr r1, [pc, #40]	@ 0009b5b4 0a49
.org 0x9b5b6
	ldrb r0, [r4, #9]	@ 0009b5b6 607a
.org 0x9b5b8
	lsls r0, r0, #2	@ 0009b5b8 8000
.org 0x9b5ba
	adds r0, r0, r1	@ 0009b5ba 4018
.org 0x9b5bc
	movs r1, #4	@ 0009b5bc 0421
.org 0x9b5be
	str r1, [r4, #12]	@ 0009b5be e160
.org 0x9b5c0
	ldr r0, [r0, #0]	@ 0009b5c0 0068
.org 0x9b5c2
	ldr r0, [r0, #16]	@ 0009b5c2 0069
.org 0x9b5c4
	str r0, [r4, #20]	@ 0009b5c4 6061
.org 0x9b5c6
	add sp, #40	@ 0009b5c6 0ab0
.org 0x9b5c8
	pop {r3, r4, r5}	@ 0009b5c8 38bc
.org 0x9b5ca
	mov r8, r3	@ 0009b5ca 9846
.org 0x9b5cc
	mov r9, r4	@ 0009b5cc a146
.org 0x9b5ce
	mov sl, r5	@ 0009b5ce aa46
.org 0x9b5d0
	pop {r4, r5, r6, r7}	@ 0009b5d0 f0bc
.org 0x9b5d2
	pop {r0}	@ 0009b5d2 01bc
.org 0x9b5d4
	bx r0	@ 0009b5d4 0047
