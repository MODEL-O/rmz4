@ FUN_0804e52c  entry 0x0804e52c  size 196
.thumb
.org 0x4e52c
FUN_0804e52c:
	push {r4, r5, r6, r7, lr}	@ 0004e52c f0b5
.org 0x4e52e
	mov r7, sl	@ 0004e52e 5746
.org 0x4e530
	mov r6, r9	@ 0004e530 4e46
.org 0x4e532
	mov r5, r8	@ 0004e532 4546
.org 0x4e534
	push {r5, r6, r7}	@ 0004e534 e0b4
.org 0x4e536
	sub sp, #8	@ 0004e536 82b0
.org 0x4e538
	str r0, [sp, #0]	@ 0004e538 0090
.org 0x4e53a
	lsls r1, r1, #24	@ 0004e53a 0906
.org 0x4e53c
	lsrs r1, r1, #24	@ 0004e53c 090e
.org 0x4e53e
	str r1, [sp, #4]	@ 0004e53e 0191
.org 0x4e540
	ldr r0, [pc, #112]	@ 0004e540 1c48
.org 0x4e542
	ldr r0, [r0, #0]	@ 0004e542 0068
.org 0x4e544
	bl 0x5500	@ 0004e544 b6f7dcff
.org 0x4e548
	adds r2, r0, #0	@ 0004e548 021c
.org 0x4e54a
	cmp r2, #0	@ 0004e54a 002a
.org 0x4e54c
	beq.n 0x4e5f0	@ 0004e54c 50d0
.org 0x4e54e
	ldr r0, [pc, #104]	@ 0004e54e 1a48
.org 0x4e550
	movs r6, #53	@ 0004e550 3526
.org 0x4e552
	strb r6, [r2, #9]	@ 0004e552 5672
.org 0x4e554
	adds r7, r0, #0	@ 0004e554 071c
.org 0x4e556
	adds r7, #212	@ 0004e556 d437
.org 0x4e558
	ldr r0, [r7, #0]	@ 0004e558 3868
.org 0x4e55a
	ldr r0, [r0, #0]	@ 0004e55a 0068
.org 0x4e55c
	str r0, [r2, #20]	@ 0004e55c 5061
.org 0x4e55e
	ldrb r1, [r2, #11]	@ 0004e55e d17a
.org 0x4e560
	movs r0, #191	@ 0004e560 bf20
.org 0x4e562
	mov r9, r0	@ 0004e562 8146
.org 0x4e564
	ands r0, r1	@ 0004e564 0840
.org 0x4e566
	strb r0, [r2, #11]	@ 0004e566 d072
.org 0x4e568
	adds r3, r2, #0	@ 0004e568 131c
.org 0x4e56a
	adds r3, #37	@ 0004e56a 2533
.org 0x4e56c
	movs r1, #16	@ 0004e56c 1021
.org 0x4e56e
	mov r8, r1	@ 0004e56e 8846
.org 0x4e570
	mov r0, r8	@ 0004e570 4046
.org 0x4e572
	strb r0, [r3, #0]	@ 0004e572 1870
.org 0x4e574
	ldr r5, [pc, #68]	@ 0004e574 114d
.org 0x4e576
	ldrh r0, [r5, #0]	@ 0004e576 2888
.org 0x4e578
	strh r0, [r2, #32]	@ 0004e578 1084
.org 0x4e57a
	ldr r4, [pc, #68]	@ 0004e57a 114c
.org 0x4e57c
	ldrb r0, [r4, #0]	@ 0004e57c 2078
.org 0x4e57e
	movs r1, #34	@ 0004e57e 2221
.org 0x4e580
	adds r1, r1, r2	@ 0004e580 8918
.org 0x4e582
	mov ip, r1	@ 0004e582 8c46
.org 0x4e584
	strb r0, [r1, #0]	@ 0004e584 0870
.org 0x4e586
	ldr r0, [sp, #0]	@ 0004e586 0098
.org 0x4e588
	adds r0, #248	@ 0004e588 f830
.org 0x4e58a
	ldrb r0, [r0, #0]	@ 0004e58a 0078
.org 0x4e58c
	cmp r0, #2	@ 0004e58c 0228
.org 0x4e58e
	bne.n 0x4e5c4	@ 0004e58e 19d1
.org 0x4e590
	strb r6, [r2, #9]	@ 0004e590 5672
.org 0x4e592
	ldr r0, [r7, #0]	@ 0004e592 3868
.org 0x4e594
	ldr r0, [r0, #0]	@ 0004e594 0068
.org 0x4e596
	str r0, [r2, #20]	@ 0004e596 5061
.org 0x4e598
	ldrb r1, [r2, #11]	@ 0004e598 d17a
.org 0x4e59a
	mov r0, r9	@ 0004e59a 4846
.org 0x4e59c
	ands r0, r1	@ 0004e59c 0840
.org 0x4e59e
	strb r0, [r2, #11]	@ 0004e59e d072
.org 0x4e5a0
	mov r0, r8	@ 0004e5a0 4046
.org 0x4e5a2
	strb r0, [r3, #0]	@ 0004e5a2 1870
.org 0x4e5a4
	ldrh r0, [r5, #0]	@ 0004e5a4 2888
.org 0x4e5a6
	strh r0, [r2, #32]	@ 0004e5a6 1084
.org 0x4e5a8
	adds r1, r4, #0	@ 0004e5a8 211c
.org 0x4e5aa
	ldrb r0, [r1, #0]	@ 0004e5aa 0878
.org 0x4e5ac
	mov r3, ip	@ 0004e5ac 6346
.org 0x4e5ae
	strb r0, [r3, #0]	@ 0004e5ae 1870
.org 0x4e5b0
	b.n 0x4e5e2	@ 0004e5b0 17e0
.org 0x4e5b2
	.byte 0x00	@ 0004e5b2 data
.org 0x4e5b3
	.byte 0x00	@ 0004e5b3 data
.org 0x4e5b4
	.byte 0x88,0xed,0x02,0x02	@ 0004e5b4 data
.org 0x4e5b8
	.byte 0xf8,0x39,0x85,0x08	@ 0004e5b8 data
.org 0x4e5bc
	.byte 0xfc,0x36,0x85,0x08	@ 0004e5bc data
.org 0x4e5c0
	.byte 0x04,0x37,0x85,0x08	@ 0004e5c0 data
.org 0x4e5c4
	strb r6, [r2, #9]	@ 0004e5c4 5672
.org 0x4e5c6
	ldr r0, [r7, #0]	@ 0004e5c6 3868
.org 0x4e5c8
	ldr r0, [r0, #0]	@ 0004e5c8 0068
.org 0x4e5ca
	str r0, [r2, #20]	@ 0004e5ca 5061
.org 0x4e5cc
	ldrb r1, [r2, #11]	@ 0004e5cc d17a
.org 0x4e5ce
	mov r0, r9	@ 0004e5ce 4846
.org 0x4e5d0
	ands r0, r1	@ 0004e5d0 0840
.org 0x4e5d2
	strb r0, [r2, #11]	@ 0004e5d2 d072
.org 0x4e5d4
	mov r0, r8	@ 0004e5d4 4046
.org 0x4e5d6
	strb r0, [r3, #0]	@ 0004e5d6 1870
.org 0x4e5d8
	ldrh r0, [r5, #2]	@ 0004e5d8 6888
.org 0x4e5da
	strh r0, [r2, #32]	@ 0004e5da 1084
.org 0x4e5dc
	ldrb r0, [r4, #1]	@ 0004e5dc 6078
.org 0x4e5de
	mov r1, ip	@ 0004e5de 6146
.org 0x4e5e0
	strb r0, [r1, #0]	@ 0004e5e0 0870
.org 0x4e5e2
	ldr r3, [sp, #0]	@ 0004e5e2 009b
.org 0x4e5e4
	str r3, [r2, #40]	@ 0004e5e4 9362
.org 0x4e5e6
	movs r0, #0	@ 0004e5e6 0020
.org 0x4e5e8
	mov r1, sp	@ 0004e5e8 6946
.org 0x4e5ea
	ldrb r1, [r1, #4]	@ 0004e5ea 0979
.org 0x4e5ec
	strb r1, [r2, #16]	@ 0004e5ec 1174
.org 0x4e5ee
	strb r0, [r2, #17]	@ 0004e5ee 5074
