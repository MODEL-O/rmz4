@ FUN_0801c574  entry 0x0801c574  size 70
.thumb
.org 0x1c574
FUN_0801c574:
	push {r4, lr}	@ 0001c574 10b5
.org 0x1c576
	adds r4, r0, #0	@ 0001c576 041c
.org 0x1c578
	movs r0, #1	@ 0001c578 0120
.org 0x1c57a
	adds r1, r4, #0	@ 0001c57a 211c
.org 0x1c57c
	bl 0x6f94	@ 0001c57c eaf70afd
.org 0x1c580
	lsls r0, r0, #16	@ 0001c580 0004
.org 0x1c582
	lsrs r2, r0, #16	@ 0001c582 020c
.org 0x1c584
	ldr r0, [r4, #0]	@ 0001c584 2068
.org 0x1c586
	ldr r1, [pc, #44]	@ 0001c586 0b49
.org 0x1c588
	adds r0, r0, r1	@ 0001c588 4018
.org 0x1c58a
	movs r1, #240	@ 0001c58a f021
.org 0x1c58c
	lsls r1, r1, #8	@ 0001c58c 0902
.org 0x1c58e
	cmp r0, r1	@ 0001c58e 8842
.org 0x1c590
	bhi.n 0x1c5ae	@ 0001c590 0dd8
.org 0x1c592
	ldr r1, [r4, #4]	@ 0001c592 6168
.org 0x1c594
	ldr r0, [pc, #32]	@ 0001c594 0848
.org 0x1c596
	cmp r1, r0	@ 0001c596 8142
.org 0x1c598
	ble.n 0x1c5ae	@ 0001c598 09dd
.org 0x1c59a
	movs r0, #200	@ 0001c59a c820
.org 0x1c59c
	lsls r0, r0, #10	@ 0001c59c 8002
.org 0x1c59e
	cmp r1, r0	@ 0001c59e 8142
.org 0x1c5a0
	bgt.n 0x1c5ae	@ 0001c5a0 05dc
.org 0x1c5a2
	ldr r1, [pc, #24]	@ 0001c5a2 0649
.org 0x1c5a4
	adds r0, r2, r1	@ 0001c5a4 5018
.org 0x1c5a6
	lsls r0, r0, #16	@ 0001c5a6 0004
.org 0x1c5a8
	lsrs r0, r0, #16	@ 0001c5a8 000c
.org 0x1c5aa
	cmp r0, #3	@ 0001c5aa 0328
.org 0x1c5ac
	bhi.n 0x1c5c0	@ 0001c5ac 08d8
.org 0x1c5ae
	movs r0, #0	@ 0001c5ae 0020
.org 0x1c5b0
	b.n 0x1c5c2	@ 0001c5b0 07e0
.org 0x1c5b2
	.byte 0x00	@ 0001c5b2 data
.org 0x1c5b3
	.byte 0x00	@ 0001c5b3 data
.org 0x1c5b4
	.byte 0x00,0x70,0xea,0xff	@ 0001c5b4 data
.org 0x1c5b8
	.byte 0xff,0xdf,0x01,0x00	@ 0001c5b8 data
