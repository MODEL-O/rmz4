@ FUN_0800b4ac  entry 0x0800b4ac  size 262
.thumb
.org 0xb4ac
FUN_0800b4ac:
	.byte 0x70,0xb5	@ 0000b4ac (raw)
.org 0xb4ae
	.byte 0x05,0x1c	@ 0000b4ae (raw)
.org 0xb4b0
	.byte 0xe8,0x6d	@ 0000b4b0 (raw)
.org 0xb4b2
	lsls r0, r0, #16	@ 0000b4b2 0004
.org 0xb4b4
	ldrb r6, [r5, #14]	@ 0000b4b4 ae7b
.org 0xb4b6
	cmp r6, #0	@ 0000b4b6 002e
.org 0xb4b8
	bne.n 0xb4e4	@ 0000b4b8 14d1
.org 0xb4ba
	lsrs r3, r0, #20	@ 0000b4ba 030d
.org 0xb4bc
	lsls r2, r3, #1	@ 0000b4bc 5a00
.org 0xb4be
	ldr r4, [pc, #64]	@ 0000b4be 104c
.org 0xb4c0
	adds r2, r2, r4	@ 0000b4c0 1219
.org 0xb4c2
	ldrh r1, [r2, #0]	@ 0000b4c2 1188
.org 0xb4c4
	ldr r0, [pc, #60]	@ 0000b4c4 0f48
.org 0xb4c6
	ands r0, r1	@ 0000b4c6 0840
.org 0xb4c8
	movs r1, #2	@ 0000b4c8 0221
.org 0xb4ca
	orrs r0, r1	@ 0000b4ca 0843
.org 0xb4cc
	strh r0, [r2, #0]	@ 0000b4cc 1080
.org 0xb4ce
	str r6, [r5, #104]	@ 0000b4ce ae66
.org 0xb4d0
	str r6, [r5, #108]	@ 0000b4d0 ee66
.org 0xb4d2
	strh r6, [r5, #16]	@ 0000b4d2 2e82
.org 0xb4d4
	strh r6, [r5, #18]	@ 0000b4d4 6e82
.org 0xb4d6
	lsls r3, r3, #2	@ 0000b4d6 9b00
.org 0xb4d8
	adds r4, #8	@ 0000b4d8 0834
.org 0xb4da
	adds r3, r3, r4	@ 0000b4da 1b19
.org 0xb4dc
	str r6, [r3, #0]	@ 0000b4dc 1e60
.org 0xb4de
	ldrb r0, [r5, #14]	@ 0000b4de a87b
.org 0xb4e0
	adds r0, #1	@ 0000b4e0 0130
.org 0xb4e2
	strb r0, [r5, #14]	@ 0000b4e2 a873
.org 0xb4e4
	ldr r0, [pc, #32]	@ 0000b4e4 0848
.org 0xb4e6
	ldr r1, [pc, #36]	@ 0000b4e6 0949
.org 0xb4e8
	adds r0, r0, r1	@ 0000b4e8 4018
.org 0xb4ea
	ldr r0, [r0, #0]	@ 0000b4ea 0068
.org 0xb4ec
	ldr r1, [r0, #84]	@ 0000b4ec 416d
.org 0xb4ee
	ldr r2, [r5, #52]	@ 0000b4ee 6a6b
.org 0xb4f0
	ldr r0, [pc, #28]	@ 0000b4f0 0748
.org 0xb4f2
	cmp r2, r0	@ 0000b4f2 8242
.org 0xb4f4
	bgt.n 0xb514	@ 0000b4f4 0edc
.org 0xb4f6
	movs r0, #173	@ 0000b4f6 ad20
.org 0xb4f8
	lsls r0, r0, #11	@ 0000b4f8 c002
.org 0xb4fa
	cmp r1, r0	@ 0000b4fa 8142
.org 0xb4fc
	ble.n 0xb558	@ 0000b4fc 2cdd
.org 0xb4fe
	b.n 0xb564	@ 0000b4fe 31e0
.org 0xb500
	.byte 0x04,0x0a,0x00,0x02	@ 0000b500 data
.org 0xb504
	.byte 0xfc,0xff,0x00,0x00	@ 0000b504 data
.org 0xb508
	.byte 0x10,0xf6,0x02,0x02	@ 0000b508 data
.org 0xb50c
	.byte 0xa8,0x63,0x00,0x00	@ 0000b50c data
.org 0xb510
	.byte 0x9f,0x05,0x00,0x00	@ 0000b510 data
.org 0xb514
	ldr r0, [pc, #24]	@ 0000b514 0648
.org 0xb516
	cmp r1, r0	@ 0000b516 8142
.org 0xb518
	bgt.n 0xb538	@ 0000b518 0edc
.org 0xb51a
	ldr r0, [pc, #24]	@ 0000b51a 0648
.org 0xb51c
	cmp r2, r0	@ 0000b51c 8242
.org 0xb51e
	ble.n 0xb528	@ 0000b51e 03dd
.org 0xb520
	movs r0, #253	@ 0000b520 fd20
.org 0xb522
	lsls r0, r0, #11	@ 0000b522 c002
.org 0xb524
	cmp r1, r0	@ 0000b524 8142
.org 0xb526
	ble.n 0xb558	@ 0000b526 17dd
.org 0xb528
	movs r1, #0	@ 0000b528 0021
.org 0xb52a
	strh r1, [r5, #18]	@ 0000b52a 6982
.org 0xb52c
	b.n 0xb566	@ 0000b52c 1be0
.org 0xb52e
	.byte 0x00	@ 0000b52e data
.org 0xb52f
	.byte 0x00	@ 0000b52f data
.org 0xb530
	.byte 0xff,0x5f,0x09,0x00	@ 0000b530 data
.org 0xb534
	.byte 0x8f,0x06,0x00,0x00	@ 0000b534 data
.org 0xb538
	ldr r0, [pc, #8]	@ 0000b538 0248
.org 0xb53a
	cmp r1, r0	@ 0000b53a 8142
.org 0xb53c
	bgt.n 0xb54c	@ 0000b53c 06dc
.org 0xb53e
	ldr r0, [pc, #8]	@ 0000b53e 0248
.org 0xb540
	b.n 0xb4fa	@ 0000b540 dbe7
.org 0xb542
	.byte 0x00	@ 0000b542 data
.org 0xb543
	.byte 0x00	@ 0000b543 data
.org 0xb544
	.byte 0xff,0x1f,0x0d,0x00	@ 0000b544 data
.org 0xb548
	.byte 0x00,0x88,0x0b,0x00	@ 0000b548 data
.org 0xb54c
	ldr r0, [pc, #12]	@ 0000b54c 0348
.org 0xb54e
	cmp r1, r0	@ 0000b54e 8142
.org 0xb550
	bgt.n 0xb566	@ 0000b550 09dc
.org 0xb552
	ldr r0, [pc, #12]	@ 0000b552 0348
.org 0xb554
	cmp r1, r0	@ 0000b554 8142
.org 0xb556
	bgt.n 0xb564	@ 0000b556 05dc
.org 0xb558
	subs r1, r0, r1	@ 0000b558 411a
.org 0xb55a
	b.n 0xb566	@ 0000b55a 04e0
.org 0xb55c
	.byte 0xff,0xdf,0x10,0x00	@ 0000b55c data
.org 0xb560
	.byte 0x00,0x28,0x0f,0x00	@ 0000b560 data
.org 0xb564
	movs r1, #0	@ 0000b564 0021
.org 0xb566
	movs r2, #0	@ 0000b566 0022
.org 0xb568
	str r2, [r5, #108]	@ 0000b568 ea66
.org 0xb56a
	movs r0, #128	@ 0000b56a 8020
.org 0xb56c
	lsls r0, r0, #5	@ 0000b56c 4001
.org 0xb56e
	cmp r1, r0	@ 0000b56e 8142
.org 0xb570
	ble.n 0xb580	@ 0000b570 06dd
.org 0xb572
	movs r3, #2	@ 0000b572 0223
.org 0xb574
	ldrh r0, [r5, #18]	@ 0000b574 688a
.org 0xb576
	adds r0, #3	@ 0000b576 0330
.org 0xb578
	movs r1, #255	@ 0000b578 ff21
.org 0xb57a
	ands r0, r1	@ 0000b57a 0840
.org 0xb57c
	strh r0, [r5, #18]	@ 0000b57c 6882
.org 0xb57e
	b.n 0xb5a2	@ 0000b57e 10e0
.org 0xb580
	movs r3, #2	@ 0000b580 0223
.org 0xb582
	ldrh r0, [r5, #18]	@ 0000b582 688a
.org 0xb584
	cmp r0, #0	@ 0000b584 0028
.org 0xb586
	beq.n 0xb5a2	@ 0000b586 0cd0
.org 0xb588
	adds r1, r0, #0	@ 0000b588 011c
.org 0xb58a
	adds r1, #9	@ 0000b58a 0931
.org 0xb58c
	strh r1, [r5, #18]	@ 0000b58c 6982
.org 0xb58e
	subs r0, #119	@ 0000b58e 7738
.org 0xb590
	lsls r0, r0, #16	@ 0000b590 0004
.org 0xb592
	lsrs r0, r0, #16	@ 0000b592 000c
.org 0xb594
	cmp r0, #15	@ 0000b594 0f28
.org 0xb596
	bls.n 0xb5a0	@ 0000b596 03d9
.org 0xb598
	lsls r0, r1, #16	@ 0000b598 0804
.org 0xb59a
	lsrs r0, r0, #16	@ 0000b59a 000c
.org 0xb59c
	cmp r0, #255	@ 0000b59c ff28
.org 0xb59e
	bls.n 0xb5a2	@ 0000b59e 00d9
.org 0xb5a0
	strh r2, [r5, #18]	@ 0000b5a0 6a82
.org 0xb5a2
	ldr r1, [pc, #52]	@ 0000b5a2 0d49
.org 0xb5a4
	ldrb r0, [r5, #18]	@ 0000b5a4 a87c
.org 0xb5a6
	lsls r0, r0, #1	@ 0000b5a6 4000
.org 0xb5a8
	adds r0, r0, r1	@ 0000b5a8 4018
.org 0xb5aa
	movs r2, #0	@ 0000b5aa 0022
.org 0xb5ac
	ldrsh r1, [r0, r2]	@ 0000b5ac 815e
.org 0xb5ae
	lsls r0, r3, #24	@ 0000b5ae 1806
.org 0xb5b0
	asrs r0, r0, #24	@ 0000b5b0 0016
