@ FUN_08033704  entry 0x08033704  size 84
.thumb
.org 0x33704
FUN_08033704:
	push {r4, lr}	@ 00033704 10b5
.org 0x33706
	adds r3, r0, #0	@ 00033706 031c
.org 0x33708
	adds r4, r3, #0	@ 00033708 1c1c
.org 0x3370a
	adds r4, #180	@ 0003370a b434
.org 0x3370c
	ldr r0, [pc, #40]	@ 0003370c 0a48
.org 0x3370e
	adds r2, r3, r0	@ 0003370e 1a18
.org 0x33710
	ldrb r1, [r2, #0]	@ 00033710 1178
.org 0x33712
	movs r0, #1	@ 00033712 0120
.org 0x33714
	ands r0, r1	@ 00033714 0840
.org 0x33716
	cmp r0, #0	@ 00033716 0028
.org 0x33718
	beq.n 0x33722	@ 00033718 03d0
.org 0x3371a
	ldr r0, [pc, #32]	@ 0003371a 0848
.org 0x3371c
	adds r1, r3, r0	@ 0003371c 1918
.org 0x3371e
	movs r0, #4	@ 0003371e 0420
.org 0x33720
	strb r0, [r1, #0]	@ 00033720 0870
.org 0x33722
	ldrb r1, [r2, #0]	@ 00033722 1178
.org 0x33724
	movs r0, #2	@ 00033724 0220
.org 0x33726
	orrs r1, r0	@ 00033726 0143
.org 0x33728
	movs r0, #8	@ 00033728 0820
.org 0x3372a
	orrs r1, r0	@ 0003372a 0143
.org 0x3372c
	strb r1, [r2, #0]	@ 0003372c 1170
.org 0x3372e
	ldrb r0, [r4, #12]	@ 0003372e 207b
.org 0x33730
	cmp r0, #1	@ 00033730 0128
.org 0x33732
	bne.n 0x33740	@ 00033732 05d1
.org 0x33734
	movs r0, #16	@ 00033734 1020
.org 0x33736
	b.n 0x33742	@ 00033736 04e0
.org 0x33738
	.byte 0x53,0x01,0x00,0x00	@ 00033738 data
.org 0x3373c
	.byte 0x01,0x01,0x00,0x00	@ 0003373c data
.org 0x33740
	movs r0, #32	@ 00033740 2020
.org 0x33742
	orrs r1, r0	@ 00033742 0143
.org 0x33744
	strb r1, [r2, #0]	@ 00033744 1170
.org 0x33746
	ldr r0, [pc, #24]	@ 00033746 0648
.org 0x33748
	ldr r2, [pc, #24]	@ 00033748 064a
.org 0x3374a
	adds r1, r3, r2	@ 0003374a 9918
.org 0x3374c
	ldrb r1, [r1, #0]	@ 0003374c 0978
.org 0x3374e
	lsls r1, r1, #2	@ 0003374e 8900
.org 0x33750
	adds r1, r1, r0	@ 00033750 0918
.org 0x33752
	ldr r1, [r1, #0]	@ 00033752 0968
.org 0x33754
	adds r0, r3, #0	@ 00033754 181c
.org 0x33756
	bl 0x128f80	@ 00033756 f5f013fc
