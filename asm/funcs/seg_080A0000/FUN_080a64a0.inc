@ FUN_080a64a0  entry 0x080a64a0  size 350
.thumb
.org 0xa64a0
FUN_080a64a0:
	push {r4, r5, r6, r7, lr}	@ 000a64a0 f0b5
.org 0xa64a2
	mov r7, r8	@ 000a64a2 4746
.org 0xa64a4
	push {r7}	@ 000a64a4 80b4
.org 0xa64a6
	adds r7, r0, #0	@ 000a64a6 071c
.org 0xa64a8
	ldrb r0, [r7, #14]	@ 000a64a8 b87b
.org 0xa64aa
	cmp r0, #0	@ 000a64aa 0028
.org 0xa64ac
	bne.n 0xa64dc	@ 000a64ac 16d1
.org 0xa64ae
	ldr r1, [pc, #104]	@ 000a64ae 1a49
.org 0xa64b0
	ldrb r0, [r7, #19]	@ 000a64b0 f87c
.org 0xa64b2
	lsls r0, r0, #1	@ 000a64b2 4000
.org 0xa64b4
	adds r0, r0, r1	@ 000a64b4 4018
.org 0xa64b6
	ldrh r1, [r0, #0]	@ 000a64b6 0188
.org 0xa64b8
	adds r0, r7, #0	@ 000a64b8 381c
.org 0xa64ba
	bl 0x1cf00	@ 000a64ba 76f721fd
.org 0xa64be
	ldr r0, [r7, #92]	@ 000a64be f86d
.org 0xa64c0
	movs r4, #40	@ 000a64c0 2824
.org 0xa64c2
	movs r1, #40	@ 000a64c2 2821
.org 0xa64c4
	bl 0x128fb8	@ 000a64c4 82f078fd
.org 0xa64c8
	str r0, [r7, #100]	@ 000a64c8 7866
.org 0xa64ca
	ldr r0, [r7, #96]	@ 000a64ca 386e
.org 0xa64cc
	movs r1, #40	@ 000a64cc 2821
.org 0xa64ce
	bl 0x128fb8	@ 000a64ce 82f073fd
.org 0xa64d2
	str r0, [r7, #104]	@ 000a64d2 b866
.org 0xa64d4
	strb r4, [r7, #18]	@ 000a64d4 bc74
.org 0xa64d6
	ldrb r0, [r7, #14]	@ 000a64d6 b87b
.org 0xa64d8
	adds r0, #1	@ 000a64d8 0130
.org 0xa64da
	strb r0, [r7, #14]	@ 000a64da b873
.org 0xa64dc
	ldrb r0, [r7, #14]	@ 000a64dc b87b
.org 0xa64de
	cmp r0, #1	@ 000a64de 0128
.org 0xa64e0
	bne.n 0xa6566	@ 000a64e0 41d1
.org 0xa64e2
	adds r0, r7, #0	@ 000a64e2 381c
.org 0xa64e4
	adds r0, #114	@ 000a64e4 7230
.org 0xa64e6
	ldrb r0, [r0, #0]	@ 000a64e6 0078
.org 0xa64e8
	lsls r0, r0, #24	@ 000a64e8 0006
.org 0xa64ea
	asrs r0, r0, #24	@ 000a64ea 0016
.org 0xa64ec
	cmp r0, #1	@ 000a64ec 0128
.org 0xa64ee
	bne.n 0xa6566	@ 000a64ee 3ad1
.org 0xa64f0
	adds r0, r7, #0	@ 000a64f0 381c
.org 0xa64f2
	adds r0, #113	@ 000a64f2 7130
.org 0xa64f4
	ldrb r0, [r0, #0]	@ 000a64f4 0078
.org 0xa64f6
	lsls r0, r0, #24	@ 000a64f6 0006
.org 0xa64f8
	asrs r0, r0, #24	@ 000a64f8 0016
.org 0xa64fa
	cmp r0, #2	@ 000a64fa 0228
.org 0xa64fc
	bne.n 0xa6566	@ 000a64fc 33d1
.org 0xa64fe
	adds r0, r7, #0	@ 000a64fe 381c
.org 0xa6500
	bl 0xa66b4	@ 000a6500 00f0d8f8
.org 0xa6504
	lsls r0, r0, #24	@ 000a6504 0006
.org 0xa6506
	lsrs r2, r0, #24	@ 000a6506 020e
.org 0xa6508
	cmp r2, #2	@ 000a6508 022a
.org 0xa650a
	bne.n 0xa651c	@ 000a650a 07d1
.org 0xa650c
	movs r1, #0	@ 000a650c 0021
.org 0xa650e
	movs r0, #30	@ 000a650e 1e20
.org 0xa6510
	strb r0, [r7, #18]	@ 000a6510 b874
.org 0xa6512
	strb r2, [r7, #13]	@ 000a6512 7a73
.org 0xa6514
	strb r1, [r7, #14]	@ 000a6514 b973
.org 0xa6516
	b.n 0xa65f8	@ 000a6516 6fe0
.org 0xa6518
	.byte 0x5a,0x25,0x86,0x08	@ 000a6518 data
.org 0xa651c
	ldr r0, [r7, #84]	@ 000a651c 786d
.org 0xa651e
	ldr r4, [pc, #228]	@ 000a651e 394c
.org 0xa6520
	ldr r1, [r4, #0]	@ 000a6520 2168
.org 0xa6522
	ldr r2, [pc, #228]	@ 000a6522 394a
.org 0xa6524
	mov r8, r2	@ 000a6524 9046
.org 0xa6526
	mov r2, r8	@ 000a6526 4246
.org 0xa6528
	muls r2, r1	@ 000a6528 4a43
.org 0xa652a
	ldr r6, [pc, #224]	@ 000a652a 384e
.org 0xa652c
	adds r2, r2, r6	@ 000a652c 9219
.org 0xa652e
	lsls r2, r2, #1	@ 000a652e 5200
.org 0xa6530
	lsrs r1, r2, #1	@ 000a6530 5108
.org 0xa6532
	str r1, [r4, #0]	@ 000a6532 2160
.org 0xa6534
	lsrs r2, r2, #17	@ 000a6534 520c
.org 0xa6536
	movs r5, #15	@ 000a6536 0f25
.org 0xa6538
	ands r2, r5	@ 000a6538 2a40
.org 0xa653a
	lsls r2, r2, #8	@ 000a653a 1202
.org 0xa653c
	ldr r1, [r7, #88]	@ 000a653c b96d
.org 0xa653e
	adds r1, r1, r2	@ 000a653e 8918
.org 0xa6540
	movs r2, #1	@ 000a6540 0122
.org 0xa6542
	bl 0xd0ff4	@ 000a6542 2af057fd
.org 0xa6546
	ldr r0, [r4, #0]	@ 000a6546 2068
.org 0xa6548
	mov r1, r8	@ 000a6548 4146
.org 0xa654a
	muls r1, r0	@ 000a654a 4143
.org 0xa654c
	adds r1, r1, r6	@ 000a654c 8919
.org 0xa654e
	lsls r1, r1, #1	@ 000a654e 4900
.org 0xa6550
	lsrs r0, r1, #1	@ 000a6550 4808
.org 0xa6552
	str r0, [r4, #0]	@ 000a6552 2060
.org 0xa6554
	lsrs r1, r1, #17	@ 000a6554 490c
.org 0xa6556
	ands r1, r5	@ 000a6556 2940
.org 0xa6558
	lsls r1, r1, #8	@ 000a6558 0902
.org 0xa655a
	ldr r0, [r7, #84]	@ 000a655a 786d
.org 0xa655c
	adds r0, r0, r1	@ 000a655c 4018
.org 0xa655e
	ldr r1, [r7, #88]	@ 000a655e b96d
.org 0xa6560
	movs r2, #0	@ 000a6560 0022
.org 0xa6562
	bl 0xd0ff4	@ 000a6562 2af047fd
.org 0xa6566
	ldr r0, [r7, #84]	@ 000a6566 786d
.org 0xa6568
	ldr r1, [r7, #92]	@ 000a6568 f96d
.org 0xa656a
	adds r0, r0, r1	@ 000a656a 4018
.org 0xa656c
	str r0, [r7, #84]	@ 000a656c 7865
.org 0xa656e
	ldr r0, [r7, #88]	@ 000a656e b86d
.org 0xa6570
	ldr r2, [r7, #96]	@ 000a6570 3a6e
.org 0xa6572
	adds r3, r0, r2	@ 000a6572 8318
.org 0xa6574
	str r3, [r7, #88]	@ 000a6574 bb65
.org 0xa6576
	ldr r0, [r7, #100]	@ 000a6576 786e
.org 0xa6578
	subs r1, r1, r0	@ 000a6578 091a
.org 0xa657a
	str r1, [r7, #92]	@ 000a657a f965
.org 0xa657c
	ldr r0, [r7, #104]	@ 000a657c b86e
.org 0xa657e
	subs r2, r2, r0	@ 000a657e 121a
.org 0xa6580
	str r2, [r7, #96]	@ 000a6580 3a66
.org 0xa6582
	ldrb r0, [r7, #16]	@ 000a6582 387c
.org 0xa6584
	cmp r0, #0	@ 000a6584 0028
.org 0xa6586
	bne.n 0xa65a6	@ 000a6586 0ed1
.org 0xa6588
	ldr r0, [pc, #132]	@ 000a6588 2148
.org 0xa658a
	ldr r4, [pc, #136]	@ 000a658a 224c
.org 0xa658c
	adds r0, r0, r4	@ 000a658c 0019
.org 0xa658e
	ldr r4, [pc, #136]	@ 000a658e 224c
.org 0xa6590
	adds r1, r3, r4	@ 000a6590 1919
.org 0xa6592
	ldr r0, [r0, #0]	@ 000a6592 0068
.org 0xa6594
	cmp r0, r1	@ 000a6594 8842
.org 0xa6596
	ble.n 0xa65a6	@ 000a6596 06dd
.org 0xa6598
	lsls r0, r2, #8	@ 000a6598 1002
.org 0xa659a
	negs r0, r0	@ 000a659a 4042
.org 0xa659c
	cmp r0, #0	@ 000a659c 0028
.org 0xa659e
	bge.n 0xa65a2	@ 000a659e 00da
.org 0xa65a0
	adds r0, #255	@ 000a65a0 ff30
.org 0xa65a2
	asrs r0, r0, #8	@ 000a65a2 0012
.org 0xa65a4
	str r0, [r7, #96]	@ 000a65a4 3866
.org 0xa65a6
	adds r0, r7, #0	@ 000a65a6 381c
.org 0xa65a8
	adds r0, #115	@ 000a65a8 7330
.org 0xa65aa
	ldrb r0, [r0, #0]	@ 000a65aa 0078
.org 0xa65ac
	cmp r0, #3	@ 000a65ac 0328
.org 0xa65ae
	bne.n 0xa65d2	@ 000a65ae 10d1
.org 0xa65b0
	ldrb r0, [r7, #19]	@ 000a65b0 f87c
.org 0xa65b2
	adds r0, #1	@ 000a65b2 0130
.org 0xa65b4
	strb r0, [r7, #19]	@ 000a65b4 f874
.org 0xa65b6
	ldrb r0, [r7, #14]	@ 000a65b6 b87b
.org 0xa65b8
	adds r0, #1	@ 000a65b8 0130
.org 0xa65ba
	strb r0, [r7, #14]	@ 000a65ba b873
.org 0xa65bc
	ldr r1, [pc, #92]	@ 000a65bc 1749
.org 0xa65be
	ldrb r0, [r7, #19]	@ 000a65be f87c
.org 0xa65c0
	lsls r0, r0, #1	@ 000a65c0 4000
.org 0xa65c2
	adds r0, r0, r1	@ 000a65c2 4018
.org 0xa65c4
	ldrh r1, [r0, #0]	@ 000a65c4 0188
.org 0xa65c6
	adds r0, r7, #0	@ 000a65c6 381c
.org 0xa65c8
	bl 0x1cf00	@ 000a65c8 76f79afc
.org 0xa65cc
	movs r0, #232	@ 000a65cc e820
.org 0xa65ce
	bl 0x2b10	@ 000a65ce 5cf79ffa
.org 0xa65d2
	adds r0, r7, #0	@ 000a65d2 381c
.org 0xa65d4
	bl 0xa669c	@ 000a65d4 00f062f8
.org 0xa65d8
	lsls r0, r0, #24	@ 000a65d8 0006
.org 0xa65da
	cmp r0, #0	@ 000a65da 0028
.org 0xa65dc
	beq.n 0xa65f8	@ 000a65dc 0cd0
.org 0xa65de
	movs r0, #0	@ 000a65de 0020
.org 0xa65e0
	strb r0, [r7, #13]	@ 000a65e0 7873
.org 0xa65e2
	strb r0, [r7, #14]	@ 000a65e2 b873
.org 0xa65e4
	adds r0, r7, #0	@ 000a65e4 381c
.org 0xa65e6
	adds r0, #116	@ 000a65e6 7430
.org 0xa65e8
	ldrb r2, [r7, #19]	@ 000a65e8 fa7c
.org 0xa65ea
	lsls r1, r2, #1	@ 000a65ea 5100
.org 0xa65ec
	adds r1, r1, r2	@ 000a65ec 8918
.org 0xa65ee
	lsls r1, r1, #4	@ 000a65ee 0901
.org 0xa65f0
	ldr r2, [pc, #44]	@ 000a65f0 0b4a
.org 0xa65f2
	adds r1, r1, r2	@ 000a65f2 8918
.org 0xa65f4
	bl 0x5784	@ 000a65f4 5ff7c6f8
.org 0xa65f8
	pop {r3}	@ 000a65f8 08bc
.org 0xa65fa
	mov r8, r3	@ 000a65fa 9846
.org 0xa65fc
	pop {r4, r5, r6, r7}	@ 000a65fc f0bc
