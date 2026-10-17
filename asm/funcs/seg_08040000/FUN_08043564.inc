@ FUN_08043564  entry 0x08043564  size 128
.thumb
.org 0x43564
FUN_08043564:
	push {r4, r5, lr}	@ 00043564 30b5
.org 0x43566
	adds r4, r0, #0	@ 00043566 041c
.org 0x43568
	lsls r1, r1, #24	@ 00043568 0906
.org 0x4356a
	lsrs r5, r1, #24	@ 0004356a 0d0e
.org 0x4356c
	ldr r0, [pc, #60]	@ 0004356c 0f48
.org 0x4356e
	ldr r0, [r0, #0]	@ 0004356e 0068
.org 0x43570
	bl 0x5500	@ 00043570 c1f7c6ff
.org 0x43574
	adds r3, r0, #0	@ 00043574 031c
.org 0x43576
	cmp r3, #0	@ 00043576 002b
.org 0x43578
	beq.n 0x435ee	@ 00043578 39d0
.org 0x4357a
	adds r0, r4, #0	@ 0004357a 201c
.org 0x4357c
	adds r0, #248	@ 0004357c f830
.org 0x4357e
	ldrb r0, [r0, #0]	@ 0004357e 0078
.org 0x43580
	cmp r0, #2	@ 00043580 0228
.org 0x43582
	bne.n 0x435bc	@ 00043582 1bd1
.org 0x43584
	ldr r0, [pc, #40]	@ 00043584 0a48
.org 0x43586
	movs r2, #16	@ 00043586 1022
.org 0x43588
	strb r2, [r3, #9]	@ 00043588 5a72
.org 0x4358a
	ldr r0, [r0, #64]	@ 0004358a 006c
.org 0x4358c
	ldr r0, [r0, #0]	@ 0004358c 0068
.org 0x4358e
	str r0, [r3, #20]	@ 0004358e 5861
.org 0x43590
	ldrb r1, [r3, #11]	@ 00043590 d97a
.org 0x43592
	movs r0, #191	@ 00043592 bf20
.org 0x43594
	ands r0, r1	@ 00043594 0840
.org 0x43596
	strb r0, [r3, #11]	@ 00043596 d872
.org 0x43598
	adds r0, r3, #0	@ 00043598 181c
.org 0x4359a
	adds r0, #37	@ 0004359a 2530
.org 0x4359c
	strb r2, [r0, #0]	@ 0004359c 0270
.org 0x4359e
	ldr r0, [pc, #20]	@ 0004359e 0548
.org 0x435a0
	ldrh r0, [r0, #0]	@ 000435a0 0088
.org 0x435a2
	strh r0, [r3, #32]	@ 000435a2 1884
.org 0x435a4
	ldr r0, [pc, #16]	@ 000435a4 0448
.org 0x435a6
	ldrb r0, [r0, #0]	@ 000435a6 0078
.org 0x435a8
	b.n 0x435e0	@ 000435a8 1ae0
.org 0x435aa
	.byte 0x00	@ 000435aa data
.org 0x435ab
	.byte 0x00	@ 000435ab data
.org 0x435ac
	.byte 0x88,0xed,0x02,0x02	@ 000435ac data
.org 0x435b0
	.byte 0xf8,0x39,0x85,0x08	@ 000435b0 data
.org 0x435b4
	.byte 0xfc,0x36,0x85,0x08	@ 000435b4 data
.org 0x435b8
	.byte 0x04,0x37,0x85,0x08	@ 000435b8 data
.org 0x435bc
	ldr r0, [pc, #56]	@ 000435bc 0e48
.org 0x435be
	movs r2, #16	@ 000435be 1022
.org 0x435c0
	strb r2, [r3, #9]	@ 000435c0 5a72
.org 0x435c2
	ldr r0, [r0, #64]	@ 000435c2 006c
.org 0x435c4
	ldr r0, [r0, #0]	@ 000435c4 0068
.org 0x435c6
	str r0, [r3, #20]	@ 000435c6 5861
.org 0x435c8
	ldrb r1, [r3, #11]	@ 000435c8 d97a
.org 0x435ca
	movs r0, #191	@ 000435ca bf20
.org 0x435cc
	ands r0, r1	@ 000435cc 0840
.org 0x435ce
	strb r0, [r3, #11]	@ 000435ce d872
.org 0x435d0
	adds r0, r3, #0	@ 000435d0 181c
.org 0x435d2
	adds r0, #37	@ 000435d2 2530
.org 0x435d4
	strb r2, [r0, #0]	@ 000435d4 0270
.org 0x435d6
	ldr r0, [pc, #36]	@ 000435d6 0948
.org 0x435d8
	ldrh r0, [r0, #2]	@ 000435d8 4088
.org 0x435da
	strh r0, [r3, #32]	@ 000435da 1884
.org 0x435dc
	ldr r0, [pc, #32]	@ 000435dc 0848
.org 0x435de
	ldrb r0, [r0, #1]	@ 000435de 4078
.org 0x435e0
	adds r1, r3, #0	@ 000435e0 191c
.org 0x435e2
	adds r1, #34	@ 000435e2 2231
