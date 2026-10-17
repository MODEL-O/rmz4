@ FUN_080e3630  entry 0x080e3630  size 86
.thumb
.org 0xe3630
FUN_080e3630:
	push {r4, r5, r6, r7, lr}	@ 000e3630 f0b5
.org 0xe3632
	adds r6, r0, #0	@ 000e3632 061c
.org 0xe3634
	adds r7, r1, #0	@ 000e3634 0f1c
.org 0xe3636
	lsls r2, r2, #24	@ 000e3636 1206
.org 0xe3638
	lsrs r5, r2, #24	@ 000e3638 150e
.org 0xe363a
	lsls r3, r3, #24	@ 000e363a 1b06
.org 0xe363c
	lsrs r4, r3, #24	@ 000e363c 1c0e
.org 0xe363e
	ldr r0, [pc, #72]	@ 000e363e 1248
.org 0xe3640
	ldr r0, [r0, #0]	@ 000e3640 0068
.org 0xe3642
	bl 0x5500	@ 000e3642 21f75dff
.org 0xe3646
	adds r3, r0, #0	@ 000e3646 031c
.org 0xe3648
	cmp r3, #0	@ 000e3648 002b
.org 0xe364a
	beq.n 0xe367e	@ 000e364a 18d0
.org 0xe364c
	adds r1, r3, #0	@ 000e364c 191c
.org 0xe364e
	adds r1, #37	@ 000e364e 2531
.org 0xe3650
	movs r2, #0	@ 000e3650 0022
.org 0xe3652
	movs r0, #1	@ 000e3652 0120
.org 0xe3654
	strb r0, [r1, #0]	@ 000e3654 0870
.org 0xe3656
	ldr r0, [pc, #52]	@ 000e3656 0d48
.org 0xe3658
	movs r1, #70	@ 000e3658 4621
.org 0xe365a
	strb r1, [r3, #9]	@ 000e365a 5972
.org 0xe365c
	adds r1, #210	@ 000e365c d231
.org 0xe365e
	adds r0, r0, r1	@ 000e365e 4018
.org 0xe3660
	ldr r0, [r0, #0]	@ 000e3660 0068
.org 0xe3662
	ldr r0, [r0, #0]	@ 000e3662 0068
.org 0xe3664
	str r0, [r3, #20]	@ 000e3664 5861
.org 0xe3666
	movs r0, #0	@ 000e3666 0020
.org 0xe3668
	strh r2, [r3, #32]	@ 000e3668 1a84
.org 0xe366a
	adds r1, r3, #0	@ 000e366a 191c
.org 0xe366c
	adds r1, #34	@ 000e366c 2231
.org 0xe366e
	strb r0, [r1, #0]	@ 000e366e 0870
.org 0xe3670
	str r6, [r3, #40]	@ 000e3670 9e62
.org 0xe3672
	ldr r0, [r7, #0]	@ 000e3672 3868
.org 0xe3674
	ldr r1, [r7, #4]	@ 000e3674 7968
.org 0xe3676
	str r0, [r3, #84]	@ 000e3676 5865
.org 0xe3678
	str r1, [r3, #88]	@ 000e3678 9965
.org 0xe367a
	strb r5, [r3, #16]	@ 000e367a 1d74
.org 0xe367c
	strb r4, [r3, #17]	@ 000e367c 5c74
.org 0xe367e
	adds r0, r3, #0	@ 000e367e 181c
.org 0xe3680
	pop {r4, r5, r6, r7}	@ 000e3680 f0bc
.org 0xe3682
	pop {r1}	@ 000e3682 02bc
.org 0xe3684
	bx r1	@ 000e3684 0847
