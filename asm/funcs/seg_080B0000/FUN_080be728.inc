@ FUN_080be728  entry 0x080be728  size 78
.thumb
.org 0xbe728
FUN_080be728:
	push {r4, r5, r6, r7, lr}	@ 000be728 f0b5
.org 0xbe72a
	adds r5, r0, #0	@ 000be72a 051c
.org 0xbe72c
	adds r6, r1, #0	@ 000be72c 0e1c
.org 0xbe72e
	lsls r2, r2, #24	@ 000be72e 1206
.org 0xbe730
	lsrs r7, r2, #24	@ 000be730 170e
.org 0xbe732
	ldr r0, [pc, #68]	@ 000be732 1148
.org 0xbe734
	ldr r0, [r0, #0]	@ 000be734 0068
.org 0xbe736
	bl 0x5500	@ 000be736 46f7e3fe
.org 0xbe73a
	adds r4, r0, #0	@ 000be73a 041c
.org 0xbe73c
	cmp r4, #0	@ 000be73c 002c
.org 0xbe73e
	beq.n 0xbe76e	@ 000be73e 16d0
.org 0xbe740
	adds r1, r4, #0	@ 000be740 211c
.org 0xbe742
	adds r1, #37	@ 000be742 2531
.org 0xbe744
	movs r3, #0	@ 000be744 0023
.org 0xbe746
	movs r0, #8	@ 000be746 0820
.org 0xbe748
	strb r0, [r1, #0]	@ 000be748 0870
.org 0xbe74a
	ldr r1, [pc, #48]	@ 000be74a 0c49
.org 0xbe74c
	movs r0, #5	@ 000be74c 0520
.org 0xbe74e
	strb r0, [r4, #9]	@ 000be74e 6072
.org 0xbe750
	ldr r0, [r1, #20]	@ 000be750 4869
.org 0xbe752
	ldr r0, [r0, #0]	@ 000be752 0068
.org 0xbe754
	str r0, [r4, #20]	@ 000be754 6061
.org 0xbe756
	movs r2, #0	@ 000be756 0022
.org 0xbe758
	strh r3, [r4, #32]	@ 000be758 2384
.org 0xbe75a
	adds r0, r4, #0	@ 000be75a 201c
.org 0xbe75c
	adds r0, #34	@ 000be75c 2230
.org 0xbe75e
	strb r2, [r0, #0]	@ 000be75e 0270
.org 0xbe760
	str r5, [r4, #40]	@ 000be760 a562
.org 0xbe762
	ldr r0, [r6, #0]	@ 000be762 3068
.org 0xbe764
	ldr r1, [r6, #4]	@ 000be764 7168
.org 0xbe766
	str r0, [r4, #84]	@ 000be766 6065
.org 0xbe768
	str r1, [r4, #88]	@ 000be768 a165
.org 0xbe76a
	strb r2, [r4, #16]	@ 000be76a 2274
.org 0xbe76c
	strb r7, [r4, #17]	@ 000be76c 6774
.org 0xbe76e
	adds r0, r4, #0	@ 000be76e 201c
.org 0xbe770
	pop {r4, r5, r6, r7}	@ 000be770 f0bc
.org 0xbe772
	pop {r1}	@ 000be772 02bc
.org 0xbe774
	bx r1	@ 000be774 0847
