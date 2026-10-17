@ FUN_0810a5f0  entry 0x0810a5f0  size 72
.thumb
.org 0x10a5f0
FUN_0810a5f0:
	push {r4, r5, r6, lr}	@ 0010a5f0 70b5
.org 0x10a5f2
	adds r6, r0, #0	@ 0010a5f2 061c
.org 0x10a5f4
	lsls r1, r1, #24	@ 0010a5f4 0906
.org 0x10a5f6
	lsrs r5, r1, #24	@ 0010a5f6 0d0e
.org 0x10a5f8
	lsls r2, r2, #24	@ 0010a5f8 1206
.org 0x10a5fa
	lsrs r4, r2, #24	@ 0010a5fa 140e
.org 0x10a5fc
	ldr r0, [pc, #56]	@ 0010a5fc 0e48
.org 0x10a5fe
	ldr r0, [r0, #0]	@ 0010a5fe 0068
.org 0x10a600
	bl 0x5500	@ 0010a600 faf67eff
.org 0x10a604
	adds r3, r0, #0	@ 0010a604 031c
.org 0x10a606
	cmp r3, #0	@ 0010a606 002b
.org 0x10a608
	beq.n 0x10a630	@ 0010a608 12d0
.org 0x10a60a
	adds r1, r3, #0	@ 0010a60a 191c
.org 0x10a60c
	adds r1, #37	@ 0010a60c 2531
.org 0x10a60e
	movs r2, #0	@ 0010a60e 0022
.org 0x10a610
	movs r0, #16	@ 0010a610 1020
.org 0x10a612
	strb r0, [r1, #0]	@ 0010a612 0870
.org 0x10a614
	ldr r1, [pc, #36]	@ 0010a614 0949
.org 0x10a616
	movs r0, #2	@ 0010a616 0220
.org 0x10a618
	strb r0, [r3, #9]	@ 0010a618 5872
.org 0x10a61a
	ldr r0, [r1, #8]	@ 0010a61a 8868
.org 0x10a61c
	ldr r0, [r0, #0]	@ 0010a61c 0068
.org 0x10a61e
	str r0, [r3, #20]	@ 0010a61e 5861
.org 0x10a620
	movs r0, #0	@ 0010a620 0020
.org 0x10a622
	strh r2, [r3, #32]	@ 0010a622 1a84
.org 0x10a624
	adds r1, r3, #0	@ 0010a624 191c
.org 0x10a626
	adds r1, #34	@ 0010a626 2231
.org 0x10a628
	strb r0, [r1, #0]	@ 0010a628 0870
.org 0x10a62a
	str r6, [r3, #40]	@ 0010a62a 9e62
.org 0x10a62c
	strb r5, [r3, #16]	@ 0010a62c 1d74
.org 0x10a62e
	strb r4, [r3, #17]	@ 0010a62e 5c74
.org 0x10a630
	adds r0, r3, #0	@ 0010a630 181c
.org 0x10a632
	pop {r4, r5, r6}	@ 0010a632 70bc
.org 0x10a634
	pop {r1}	@ 0010a634 02bc
.org 0x10a636
	bx r1	@ 0010a636 0847
