@ FUN_0802a760  entry 0x0802a760  size 56
.thumb
.org 0x2a760
FUN_0802a760:
	push {r4, lr}	@ 0002a760 10b5
.org 0x2a762
	lsls r0, r0, #24	@ 0002a762 0006
.org 0x2a764
	lsrs r4, r0, #24	@ 0002a764 040e
.org 0x2a766
	movs r0, #2	@ 0002a766 0220
.org 0x2a768
	bl 0xa70	@ 0002a768 d6f782f9
.org 0x2a76c
	adds r2, r0, #0	@ 0002a76c 021c
.org 0x2a76e
	cmp r2, #0	@ 0002a76e 002a
.org 0x2a770
	beq.n 0x2a792	@ 0002a770 0fd0
.org 0x2a772
	ldr r1, [pc, #36]	@ 0002a772 0949
.org 0x2a774
	adds r0, r1, #0	@ 0002a774 081c
.org 0x2a776
	subs r0, r0, r4	@ 0002a776 001b
.org 0x2a778
	strh r0, [r2, #0]	@ 0002a778 1080
.org 0x2a77a
	ldr r0, [pc, #32]	@ 0002a77a 0848
.org 0x2a77c
	ldrh r0, [r0, #0]	@ 0002a77c 0088
.org 0x2a77e
	movs r1, #248	@ 0002a77e f821
.org 0x2a780
	lsls r1, r1, #5	@ 0002a780 4901
.org 0x2a782
	ands r1, r0	@ 0002a782 0140
.org 0x2a784
	lsls r1, r1, #3	@ 0002a784 c900
.org 0x2a786
	ldr r0, [pc, #24]	@ 0002a786 0648
.org 0x2a788
	adds r1, r1, r0	@ 0002a788 0918
.org 0x2a78a
	adds r0, r2, #0	@ 0002a78a 101c
.org 0x2a78c
	movs r2, #2	@ 0002a78c 0222
.org 0x2a78e
	bl 0x1f1c	@ 0002a78e d7f7c5fb
.org 0x2a792
	pop {r4}	@ 0002a792 10bc
.org 0x2a794
	pop {r0}	@ 0002a794 01bc
.org 0x2a796
	bx r0	@ 0002a796 0047
