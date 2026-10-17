@ FUN_08035564  entry 0x08035564  size 86
.thumb
.org 0x35564
FUN_08035564:
	push {r4, lr}	@ 00035564 10b5
.org 0x35566
	adds r3, r0, #0	@ 00035566 031c
.org 0x35568
	adds r4, r3, #0	@ 00035568 1c1c
.org 0x3556a
	adds r4, #180	@ 0003556a b434
.org 0x3556c
	ldr r0, [pc, #24]	@ 0003556c 0648
.org 0x3556e
	adds r2, r3, r0	@ 0003556e 1a18
.org 0x35570
	ldrb r1, [r2, #0]	@ 00035570 1178
.org 0x35572
	movs r0, #1	@ 00035572 0120
.org 0x35574
	ands r0, r1	@ 00035574 0840
.org 0x35576
	cmp r0, #0	@ 00035576 0028
.org 0x35578
	beq.n 0x3558c	@ 00035578 08d0
.org 0x3557a
	movs r0, #0	@ 0003557a 0020
.org 0x3557c
	strb r0, [r3, #14]	@ 0003557c 9873
.org 0x3557e
	adds r0, r3, #0	@ 0003557e 181c
.org 0x35580
	bl 0x33704	@ 00035580 fef7c0f8
.org 0x35584
	b.n 0x355ba	@ 00035584 19e0
.org 0x35586
	.byte 0x00	@ 00035586 data
.org 0x35587
	.byte 0x00	@ 00035587 data
.org 0x35588
	.byte 0x53,0x01,0x00,0x00	@ 00035588 data
.org 0x3558c
	movs r0, #2	@ 0003558c 0220
.org 0x3558e
	orrs r1, r0	@ 0003558e 0143
.org 0x35590
	movs r0, #8	@ 00035590 0820
.org 0x35592
	orrs r1, r0	@ 00035592 0143
.org 0x35594
	strb r1, [r2, #0]	@ 00035594 1170
.org 0x35596
	ldrb r0, [r4, #12]	@ 00035596 207b
.org 0x35598
	cmp r0, #1	@ 00035598 0128
.org 0x3559a
	bne.n 0x355a0	@ 0003559a 01d1
.org 0x3559c
	movs r0, #16	@ 0003559c 1020
.org 0x3559e
	b.n 0x355a2	@ 0003559e 00e0
.org 0x355a0
	movs r0, #32	@ 000355a0 2020
.org 0x355a2
	orrs r1, r0	@ 000355a2 0143
.org 0x355a4
	strb r1, [r2, #0]	@ 000355a4 1170
.org 0x355a6
	ldr r0, [pc, #24]	@ 000355a6 0648
.org 0x355a8
	ldr r2, [pc, #24]	@ 000355a8 064a
.org 0x355aa
	adds r1, r3, r2	@ 000355aa 9918
.org 0x355ac
	ldrb r1, [r1, #0]	@ 000355ac 0978
.org 0x355ae
	lsls r1, r1, #2	@ 000355ae 8900
.org 0x355b0
	adds r1, r1, r0	@ 000355b0 0918
.org 0x355b2
	ldr r1, [r1, #0]	@ 000355b2 0968
.org 0x355b4
	adds r0, r3, #0	@ 000355b4 181c
.org 0x355b6
	bl 0x128f80	@ 000355b6 f3f0e3fc
