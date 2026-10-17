@ FUN_0801e608  entry 0x0801e608  size 96
.thumb
.org 0x1e608
FUN_0801e608:
	push {lr}	@ 0001e608 00b5
.org 0x1e60a
	adds r2, r0, #0	@ 0001e60a 021c
.org 0x1e60c
	ldr r1, [r2, #0]	@ 0001e60c 1168
.org 0x1e60e
	ldr r0, [pc, #28]	@ 0001e60e 0748
.org 0x1e610
	cmp r1, r0	@ 0001e610 8142
.org 0x1e612
	ble.n 0x1e640	@ 0001e612 15dd
.org 0x1e614
	ldr r0, [pc, #24]	@ 0001e614 0648
.org 0x1e616
	adds r1, r1, r0	@ 0001e616 0918
.org 0x1e618
	ldr r0, [pc, #24]	@ 0001e618 0648
.org 0x1e61a
	cmp r1, r0	@ 0001e61a 8142
.org 0x1e61c
	bhi.n 0x1e63c	@ 0001e61c 0ed8
.org 0x1e61e
	ldr r1, [r2, #4]	@ 0001e61e 5168
.org 0x1e620
	ldr r0, [pc, #20]	@ 0001e620 0548
.org 0x1e622
	cmp r1, r0	@ 0001e622 8142
.org 0x1e624
	ble.n 0x1e63c	@ 0001e624 0add
.org 0x1e626
	movs r0, #4	@ 0001e626 0420
.org 0x1e628
	b.n 0x1e692	@ 0001e628 33e0
.org 0x1e62a
	.byte 0x00	@ 0001e62a data
.org 0x1e62b
	.byte 0x00	@ 0001e62b data
.org 0x1e62c
	.byte 0xff,0x1f,0x0d,0x00	@ 0001e62c data
.org 0x1e630
	.byte 0x00,0x10,0xf0,0xff	@ 0001e630 data
.org 0x1e634
	.byte 0xff,0xef,0x00,0x00	@ 0001e634 data
.org 0x1e638
	.byte 0xff,0x1f,0x03,0x00	@ 0001e638 data
.org 0x1e63c
	movs r0, #3	@ 0001e63c 0320
.org 0x1e63e
	b.n 0x1e692	@ 0001e63e 28e0
.org 0x1e640
	ldr r0, [pc, #36]	@ 0001e640 0948
.org 0x1e642
	cmp r1, r0	@ 0001e642 8142
.org 0x1e644
	ble.n 0x1e690	@ 0001e644 24dd
.org 0x1e646
	ldr r3, [r2, #4]	@ 0001e646 5368
.org 0x1e648
	ldr r0, [pc, #32]	@ 0001e648 0848
.org 0x1e64a
	cmp r3, r0	@ 0001e64a 8342
.org 0x1e64c
	bgt.n 0x1e67c	@ 0001e64c 16dc
.org 0x1e64e
	ldr r0, [pc, #32]	@ 0001e64e 0848
.org 0x1e650
	cmp r1, r0	@ 0001e650 8142
.org 0x1e652
	bgt.n 0x1e65a	@ 0001e652 02dc
.org 0x1e654
	ldr r0, [pc, #28]	@ 0001e654 0748
.org 0x1e656
	cmp r3, r0	@ 0001e656 8342
.org 0x1e658
	bgt.n 0x1e682	@ 0001e658 13dc
.org 0x1e65a
	ldr r1, [r2, #0]	@ 0001e65a 1168
.org 0x1e65c
	ldr r0, [pc, #24]	@ 0001e65c 0648
.org 0x1e65e
	cmp r1, r0	@ 0001e65e 8142
.org 0x1e660
	ble.n 0x1e690	@ 0001e660 16dd
.org 0x1e662
	movs r0, #1	@ 0001e662 0120
.org 0x1e664
	b.n 0x1e692	@ 0001e664 15e0
.org 0x1e666
	.byte 0x00	@ 0001e666 data
.org 0x1e667
	.byte 0x00	@ 0001e667 data
