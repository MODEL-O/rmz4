@ FUN_0803a608  entry 0x0803a608  size 58
.thumb
.org 0x3a608
FUN_0803a608:
	push {r4, lr}	@ 0003a608 10b5
.org 0x3a60a
	adds r4, r0, #0	@ 0003a60a 041c
.org 0x3a60c
	lsls r1, r1, #24	@ 0003a60c 0906
.org 0x3a60e
	lsrs r1, r1, #24	@ 0003a60e 090e
.org 0x3a610
	lsls r2, r2, #24	@ 0003a610 1206
.org 0x3a612
	lsrs r3, r2, #24	@ 0003a612 130e
.org 0x3a614
	movs r2, #255	@ 0003a614 ff22
.org 0x3a616
	subs r0, r1, #3	@ 0003a616 c81e
.org 0x3a618
	cmp r0, #4	@ 0003a618 0428
.org 0x3a61a
	bhi.n 0x3a666	@ 0003a61a 24d8
.org 0x3a61c
	lsls r0, r0, #2	@ 0003a61c 8000
.org 0x3a61e
	ldr r1, [pc, #8]	@ 0003a61e 0249
.org 0x3a620
	adds r0, r0, r1	@ 0003a620 4018
.org 0x3a622
	ldr r0, [r0, #0]	@ 0003a622 0068
.org 0x3a624
	mov pc, r0	@ 0003a624 8746
.org 0x3a626
	.byte 0x00	@ 0003a626 data
.org 0x3a627
	.byte 0x00	@ 0003a627 data
.org 0x3a628
	.byte 0x2c,0xa6,0x03,0x08	@ 0003a628 data
.org 0x3a62c
	.byte 0x40,0xa6,0x03,0x08	@ 0003a62c data
.org 0x3a630
	.byte 0x58,0xa6,0x03,0x08	@ 0003a630 data
.org 0x3a634
	.byte 0x50,0xa6,0x03,0x08	@ 0003a634 data
.org 0x3a638
	.byte 0x48,0xa6,0x03,0x08	@ 0003a638 data
.org 0x3a63c
	.byte 0x60,0xa6,0x03,0x08	@ 0003a63c data
.org 0x3a640
	.byte 0x00	@ 0003a640 data
.org 0x3a641
	.byte 0x48	@ 0003a641 data
