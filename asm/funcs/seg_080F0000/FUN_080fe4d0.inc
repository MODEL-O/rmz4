@ FUN_080fe4d0  entry 0x080fe4d0  size 336
.thumb
.org 0xfe4d0
FUN_080fe4d0:
	push {r4, r5, r6, r7, lr}	@ 000fe4d0 f0b5
.org 0xfe4d2
	mov r7, sl	@ 000fe4d2 5746
.org 0xfe4d4
	mov r6, r9	@ 000fe4d4 4e46
.org 0xfe4d6
	mov r5, r8	@ 000fe4d6 4546
.org 0xfe4d8
	push {r5, r6, r7}	@ 000fe4d8 e0b4
.org 0xfe4da
	sub sp, #8	@ 000fe4da 82b0
.org 0xfe4dc
	adds r7, r0, #0	@ 000fe4dc 071c
.org 0xfe4de
	lsls r1, r1, #24	@ 000fe4de 0906
.org 0xfe4e0
	cmp r1, #0	@ 000fe4e0 0029
.org 0xfe4e2
	bne.n 0xfe540	@ 000fe4e2 2dd1
.org 0xfe4e4
	ldr r0, [r7, #0]	@ 000fe4e4 3868
.org 0xfe4e6
	ldr r1, [r7, #4]	@ 000fe4e6 7968
.org 0xfe4e8
	str r0, [sp, #0]	@ 000fe4e8 0090
.org 0xfe4ea
	str r1, [sp, #4]	@ 000fe4ea 0191
.org 0xfe4ec
	ldr r0, [sp, #0]	@ 000fe4ec 0098
.org 0xfe4ee
	movs r1, #128	@ 000fe4ee 8021
.org 0xfe4f0
	lsls r1, r1, #4	@ 000fe4f0 0901
.org 0xfe4f2
	adds r0, r0, r1	@ 000fe4f2 4018
.org 0xfe4f4
	str r0, [sp, #0]	@ 000fe4f4 0090
.org 0xfe4f6
	ldr r5, [pc, #60]	@ 000fe4f6 0f4d
.org 0xfe4f8
	ldr r0, [sp, #4]	@ 000fe4f8 0198
.org 0xfe4fa
	adds r0, r0, r5	@ 000fe4fa 4019
.org 0xfe4fc
	str r0, [sp, #4]	@ 000fe4fc 0190
.org 0xfe4fe
	ldr r4, [pc, #56]	@ 000fe4fe 0e4c
.org 0xfe500
	mov r0, sp	@ 000fe500 6846
.org 0xfe502
	adds r1, r4, #0	@ 000fe502 211c
.org 0xfe504
	movs r2, #0	@ 000fe504 0022
.org 0xfe506
	movs r3, #0	@ 000fe506 0023
.org 0xfe508
	bl 0xe3db4	@ 000fe508 e5f754fc
.org 0xfe50c
	ldr r0, [r7, #0]	@ 000fe50c 3868
.org 0xfe50e
	ldr r1, [r7, #4]	@ 000fe50e 7968
.org 0xfe510
	str r0, [sp, #0]	@ 000fe510 0090
.org 0xfe512
	str r1, [sp, #4]	@ 000fe512 0191
.org 0xfe514
	ldr r0, [sp, #0]	@ 000fe514 0098
.org 0xfe516
	ldr r2, [pc, #36]	@ 000fe516 094a
.org 0xfe518
	adds r0, r0, r2	@ 000fe518 8018
.org 0xfe51a
	str r0, [sp, #0]	@ 000fe51a 0090
.org 0xfe51c
	ldr r0, [sp, #4]	@ 000fe51c 0198
.org 0xfe51e
	adds r0, r0, r5	@ 000fe51e 4019
.org 0xfe520
	str r0, [sp, #4]	@ 000fe520 0190
.org 0xfe522
	subs r4, #28	@ 000fe522 1c3c
.org 0xfe524
	mov r0, sp	@ 000fe524 6846
.org 0xfe526
	adds r1, r4, #0	@ 000fe526 211c
.org 0xfe528
	movs r2, #0	@ 000fe528 0022
.org 0xfe52a
	movs r3, #0	@ 000fe52a 0023
.org 0xfe52c
	bl 0xe3db4	@ 000fe52c e5f742fc
.org 0xfe530
	b.n 0xfe61e	@ 000fe530 75e0
.org 0xfe532
	.byte 0x00	@ 000fe532 data
.org 0xfe533
	.byte 0x00	@ 000fe533 data
.org 0xfe534
	.byte 0x80,0xf7,0xff,0xff	@ 000fe534 data
.org 0xfe538
	.byte 0x58,0xb1,0x86,0x08	@ 000fe538 data
.org 0xfe53c
	.byte 0x00,0xf8,0xff,0xff	@ 000fe53c data
.org 0xfe540
	ldr r0, [r7, #0]	@ 000fe540 3868
.org 0xfe542
	ldr r1, [r7, #4]	@ 000fe542 7968
.org 0xfe544
	str r0, [sp, #0]	@ 000fe544 0090
.org 0xfe546
	str r1, [sp, #4]	@ 000fe546 0191
.org 0xfe548
	ldr r1, [sp, #0]	@ 000fe548 0099
.org 0xfe54a
	movs r3, #128	@ 000fe54a 8023
.org 0xfe54c
	lsls r3, r3, #2	@ 000fe54c 9b00
.org 0xfe54e
	adds r1, r1, r3	@ 000fe54e c918
.org 0xfe550
	ldr r0, [pc, #220]	@ 000fe550 3748
.org 0xfe552
	mov r8, r0	@ 000fe552 8046
.org 0xfe554
	ldr r0, [r0, #0]	@ 000fe554 0068
.org 0xfe556
	ldr r6, [pc, #220]	@ 000fe556 374e
.org 0xfe558
	muls r0, r6	@ 000fe558 7043
.org 0xfe55a
	ldr r5, [pc, #220]	@ 000fe55a 374d
.org 0xfe55c
	adds r0, r0, r5	@ 000fe55c 4019
.org 0xfe55e
	lsls r0, r0, #1	@ 000fe55e 4000
.org 0xfe560
	lsrs r2, r0, #1	@ 000fe560 4208
.org 0xfe562
	lsrs r0, r0, #17	@ 000fe562 400c
.org 0xfe564
	ldr r3, [pc, #212]	@ 000fe564 354b
.org 0xfe566
	ands r0, r3	@ 000fe566 1840
.org 0xfe568
	adds r1, r1, r0	@ 000fe568 0918
.org 0xfe56a
	str r1, [sp, #0]	@ 000fe56a 0091
.org 0xfe56c
	ldr r1, [sp, #4]	@ 000fe56c 0199
.org 0xfe56e
	ldr r0, [pc, #208]	@ 000fe56e 3448
.org 0xfe570
	adds r1, r1, r0	@ 000fe570 0918
.org 0xfe572
	adds r0, r2, #0	@ 000fe572 101c
.org 0xfe574
	muls r0, r6	@ 000fe574 7043
.org 0xfe576
	adds r0, r0, r5	@ 000fe576 4019
.org 0xfe578
	lsls r0, r0, #1	@ 000fe578 4000
.org 0xfe57a
	lsrs r2, r0, #1	@ 000fe57a 4208
.org 0xfe57c
	lsrs r0, r0, #17	@ 000fe57c 400c
.org 0xfe57e
	ldr r3, [pc, #196]	@ 000fe57e 314b
.org 0xfe580
	ands r0, r3	@ 000fe580 1840
.org 0xfe582
	adds r1, r1, r0	@ 000fe582 0918
.org 0xfe584
	ldr r0, [pc, #192]	@ 000fe584 3048
.org 0xfe586
	mov sl, r0	@ 000fe586 8246
.org 0xfe588
	add r1, sl	@ 000fe588 5144
.org 0xfe58a
	str r1, [sp, #4]	@ 000fe58a 0191
.org 0xfe58c
	adds r0, r2, #0	@ 000fe58c 101c
.org 0xfe58e
	muls r0, r6	@ 000fe58e 7043
.org 0xfe590
	adds r0, r0, r5	@ 000fe590 4019
.org 0xfe592
	lsls r0, r0, #1	@ 000fe592 4000
.org 0xfe594
	lsrs r1, r0, #1	@ 000fe594 4108
.org 0xfe596
	mov r2, r8	@ 000fe596 4246
.org 0xfe598
	str r1, [r2, #0]	@ 000fe598 1160
.org 0xfe59a
	lsrs r0, r0, #17	@ 000fe59a 400c
.org 0xfe59c
	movs r3, #3	@ 000fe59c 0323
.org 0xfe59e
	mov r9, r3	@ 000fe59e 9946
.org 0xfe5a0
	ands r0, r3	@ 000fe5a0 1840
.org 0xfe5a2
	lsls r1, r0, #3	@ 000fe5a2 c100
.org 0xfe5a4
	subs r1, r1, r0	@ 000fe5a4 091a
.org 0xfe5a6
	lsls r1, r1, #2	@ 000fe5a6 8900
.org 0xfe5a8
	ldr r4, [pc, #160]	@ 000fe5a8 284c
.org 0xfe5aa
	adds r1, r1, r4	@ 000fe5aa 0919
.org 0xfe5ac
	mov r0, sp	@ 000fe5ac 6846
.org 0xfe5ae
	movs r2, #0	@ 000fe5ae 0022
.org 0xfe5b0
	movs r3, #0	@ 000fe5b0 0023
.org 0xfe5b2
	bl 0xe3db4	@ 000fe5b2 e5f7fffb
.org 0xfe5b6
	ldr r0, [r7, #0]	@ 000fe5b6 3868
.org 0xfe5b8
	ldr r1, [r7, #4]	@ 000fe5b8 7968
.org 0xfe5ba
	str r0, [sp, #0]	@ 000fe5ba 0090
.org 0xfe5bc
	str r1, [sp, #4]	@ 000fe5bc 0191
.org 0xfe5be
	ldr r1, [sp, #0]	@ 000fe5be 0099
.org 0xfe5c0
	ldr r0, [pc, #140]	@ 000fe5c0 2348
.org 0xfe5c2
	adds r1, r1, r0	@ 000fe5c2 0918
.org 0xfe5c4
	mov r2, r8	@ 000fe5c4 4246
.org 0xfe5c6
	ldr r0, [r2, #0]	@ 000fe5c6 1068
.org 0xfe5c8
	muls r0, r6	@ 000fe5c8 7043
.org 0xfe5ca
	adds r0, r0, r5	@ 000fe5ca 4019
.org 0xfe5cc
	lsls r0, r0, #1	@ 000fe5cc 4000
.org 0xfe5ce
	lsrs r2, r0, #1	@ 000fe5ce 4208
.org 0xfe5d0
	lsrs r0, r0, #17	@ 000fe5d0 400c
.org 0xfe5d2
	ldr r3, [pc, #104]	@ 000fe5d2 1a4b
.org 0xfe5d4
	ands r0, r3	@ 000fe5d4 1840
.org 0xfe5d6
	subs r1, r1, r0	@ 000fe5d6 091a
.org 0xfe5d8
	str r1, [sp, #0]	@ 000fe5d8 0091
.org 0xfe5da
	ldr r1, [sp, #4]	@ 000fe5da 0199
.org 0xfe5dc
	ldr r0, [pc, #96]	@ 000fe5dc 1848
.org 0xfe5de
	adds r1, r1, r0	@ 000fe5de 0918
.org 0xfe5e0
	adds r0, r2, #0	@ 000fe5e0 101c
.org 0xfe5e2
	muls r0, r6	@ 000fe5e2 7043
.org 0xfe5e4
	adds r0, r0, r5	@ 000fe5e4 4019
.org 0xfe5e6
	lsls r0, r0, #1	@ 000fe5e6 4000
.org 0xfe5e8
	lsrs r2, r0, #1	@ 000fe5e8 4208
.org 0xfe5ea
	lsrs r0, r0, #17	@ 000fe5ea 400c
.org 0xfe5ec
	ldr r3, [pc, #84]	@ 000fe5ec 154b
.org 0xfe5ee
	ands r0, r3	@ 000fe5ee 1840
.org 0xfe5f0
	adds r1, r1, r0	@ 000fe5f0 0918
.org 0xfe5f2
	add r1, sl	@ 000fe5f2 5144
.org 0xfe5f4
	str r1, [sp, #4]	@ 000fe5f4 0191
.org 0xfe5f6
	adds r0, r2, #0	@ 000fe5f6 101c
.org 0xfe5f8
	muls r0, r6	@ 000fe5f8 7043
.org 0xfe5fa
	adds r0, r0, r5	@ 000fe5fa 4019
.org 0xfe5fc
	lsls r0, r0, #1	@ 000fe5fc 4000
.org 0xfe5fe
	lsrs r1, r0, #1	@ 000fe5fe 4108
.org 0xfe600
	mov r2, r8	@ 000fe600 4246
.org 0xfe602
	str r1, [r2, #0]	@ 000fe602 1160
.org 0xfe604
	lsrs r0, r0, #17	@ 000fe604 400c
.org 0xfe606
	mov r3, r9	@ 000fe606 4b46
.org 0xfe608
	ands r0, r3	@ 000fe608 1840
.org 0xfe60a
	lsls r1, r0, #3	@ 000fe60a c100
.org 0xfe60c
	subs r1, r1, r0	@ 000fe60c 091a
.org 0xfe60e
	lsls r1, r1, #2	@ 000fe60e 8900
.org 0xfe610
	subs r4, #112	@ 000fe610 703c
.org 0xfe612
	adds r1, r1, r4	@ 000fe612 0919
.org 0xfe614
	mov r0, sp	@ 000fe614 6846
.org 0xfe616
	movs r2, #0	@ 000fe616 0022
.org 0xfe618
	movs r3, #0	@ 000fe618 0023
.org 0xfe61a
	bl 0xe3db4	@ 000fe61a e5f7cbfb
.org 0xfe61e
	add sp, #8	@ 000fe61e 02b0
