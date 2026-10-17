@ FUN_0806f608  entry 0x0806f608  size 114
.thumb
.org 0x6f608
FUN_0806f608:
	push {r4, lr}	@ 0006f608 10b5
.org 0x6f60a
	sub sp, #8	@ 0006f60a 82b0
.org 0x6f60c
	adds r4, r0, #0	@ 0006f60c 041c
.org 0x6f60e
	adds r0, #140	@ 0006f60e 8c30
.org 0x6f610
	ldr r0, [r0, #0]	@ 0006f610 0068
.org 0x6f612
	movs r1, #128	@ 0006f612 8021
.org 0x6f614
	lsls r1, r1, #2	@ 0006f614 8900
.org 0x6f616
	ands r0, r1	@ 0006f616 0840
.org 0x6f618
	cmp r0, #0	@ 0006f618 0028
.org 0x6f61a
	bne.n 0x6f628	@ 0006f61a 05d1
.org 0x6f61c
	adds r0, r4, #0	@ 0006f61c 201c
.org 0x6f61e
	adds r0, #164	@ 0006f61e a430
.org 0x6f620
	movs r1, #0	@ 0006f620 0021
.org 0x6f622
	ldrsh r0, [r0, r1]	@ 0006f622 405e
.org 0x6f624
	cmp r0, #0	@ 0006f624 0028
.org 0x6f626
	bne.n 0x6f658	@ 0006f626 17d1
.org 0x6f628
	ldr r0, [pc, #36]	@ 0006f628 0948
.org 0x6f62a
	ldrh r1, [r0, #8]	@ 0006f62a 0189
.org 0x6f62c
	movs r0, #8	@ 0006f62c 0820
.org 0x6f62e
	ands r0, r1	@ 0006f62e 0840
.org 0x6f630
	cmp r0, #0	@ 0006f630 0028
.org 0x6f632
	bne.n 0x6f658	@ 0006f632 11d1
.org 0x6f634
	ldr r1, [pc, #28]	@ 0006f634 0749
.org 0x6f636
	ldrb r0, [r4, #9]	@ 0006f636 607a
.org 0x6f638
	lsls r0, r0, #2	@ 0006f638 8000
.org 0x6f63a
	adds r0, r0, r1	@ 0006f63a 4018
.org 0x6f63c
	movs r1, #2	@ 0006f63c 0221
.org 0x6f63e
	str r1, [r4, #12]	@ 0006f63e e160
.org 0x6f640
	ldr r0, [r0, #0]	@ 0006f640 0068
.org 0x6f642
	ldr r0, [r0, #8]	@ 0006f642 8068
.org 0x6f644
	str r0, [r4, #20]	@ 0006f644 6061
.org 0x6f646
	adds r0, r4, #0	@ 0006f646 201c
.org 0x6f648
	bl 0x6f688	@ 0006f648 00f01ef8
.org 0x6f64c
	b.n 0x6f67c	@ 0006f64c 16e0
.org 0x6f64e
	.byte 0x00	@ 0006f64e data
.org 0x6f64f
	.byte 0x00	@ 0006f64f data
.org 0x6f650
	.byte 0x10,0xe9,0x02,0x02	@ 0006f650 data
.org 0x6f654
	.byte 0x70,0x7d,0x85,0x08	@ 0006f654 data
.org 0x6f658
	ldr r1, [pc, #40]	@ 0006f658 0a49
.org 0x6f65a
	ldrb r0, [r4, #13]	@ 0006f65a 607b
.org 0x6f65c
	lsls r0, r0, #2	@ 0006f65c 8000
.org 0x6f65e
	adds r0, r0, r1	@ 0006f65e 4018
.org 0x6f660
	ldr r1, [r0, #0]	@ 0006f660 0168
.org 0x6f662
	adds r0, r4, #0	@ 0006f662 201c
.org 0x6f664
	bl 0x128f80	@ 0006f664 b9f08cfc
.org 0x6f668
	ldr r0, [r4, #84]	@ 0006f668 606d
.org 0x6f66a
	str r0, [sp, #0]	@ 0006f66a 0090
.org 0x6f66c
	ldr r0, [r4, #88]	@ 0006f66c a06d
.org 0x6f66e
	movs r1, #192	@ 0006f66e c021
.org 0x6f670
	lsls r1, r1, #8	@ 0006f670 0902
.org 0x6f672
	adds r0, r0, r1	@ 0006f672 4018
.org 0x6f674
	str r0, [sp, #4]	@ 0006f674 0190
.org 0x6f676
	mov r0, sp	@ 0006f676 6846
.org 0x6f678
	bl 0x18eac	@ 0006f678 a9f718fc
