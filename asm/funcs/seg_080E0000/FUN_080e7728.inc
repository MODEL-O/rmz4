@ FUN_080e7728  entry 0x080e7728  size 130
.thumb
.org 0xe7728
FUN_080e7728:
	push {r4, r5, r6, lr}	@ 000e7728 70b5
.org 0xe772a
	adds r4, r0, #0	@ 000e772a 041c
.org 0xe772c
	ldr r0, [r4, #84]	@ 000e772c 606d
.org 0xe772e
	ldr r2, [r4, #92]	@ 000e772e e26d
.org 0xe7730
	adds r5, r0, r2	@ 000e7730 8518
.org 0xe7732
	str r5, [r4, #84]	@ 000e7732 6565
.org 0xe7734
	ldr r0, [r4, #88]	@ 000e7734 a06d
.org 0xe7736
	ldr r1, [r4, #96]	@ 000e7736 216e
.org 0xe7738
	adds r3, r0, r1	@ 000e7738 4318
.org 0xe773a
	str r3, [r4, #88]	@ 000e773a a365
.org 0xe773c
	ldr r6, [r4, #100]	@ 000e773c 666e
.org 0xe773e
	adds r2, r2, r6	@ 000e773e 9219
.org 0xe7740
	str r2, [r4, #92]	@ 000e7740 e265
.org 0xe7742
	ldr r0, [r4, #104]	@ 000e7742 a06e
.org 0xe7744
	adds r1, r1, r0	@ 000e7744 0918
.org 0xe7746
	str r1, [r4, #96]	@ 000e7746 2166
.org 0xe7748
	ldrb r0, [r4, #16]	@ 000e7748 207c
.org 0xe774a
	cmp r0, #0	@ 000e774a 0028
.org 0xe774c
	bne.n 0xe7774	@ 000e774c 12d1
.org 0xe774e
	adds r0, r5, #0	@ 000e774e 281c
.org 0xe7750
	adds r1, r3, #0	@ 000e7750 191c
.org 0xe7752
	bl 0x7c7c	@ 000e7752 20f793fa
.org 0xe7756
	lsls r0, r0, #16	@ 000e7756 0004
.org 0xe7758
	cmp r0, #0	@ 000e7758 0028
.org 0xe775a
	beq.n 0xe77a8	@ 000e775a 25d0
.org 0xe775c
	ldr r1, [pc, #16]	@ 000e775c 0449
.org 0xe775e
	ldrb r0, [r4, #9]	@ 000e775e 607a
.org 0xe7760
	lsls r0, r0, #2	@ 000e7760 8000
.org 0xe7762
	adds r0, r0, r1	@ 000e7762 4018
.org 0xe7764
	movs r1, #2	@ 000e7764 0221
.org 0xe7766
	str r1, [r4, #12]	@ 000e7766 e160
.org 0xe7768
	ldr r0, [r0, #0]	@ 000e7768 0068
.org 0xe776a
	ldr r0, [r0, #8]	@ 000e776a 8068
.org 0xe776c
	str r0, [r4, #20]	@ 000e776c 6061
.org 0xe776e
	b.n 0xe77a8	@ 000e776e 1be0
.org 0xe7770
	.byte 0x64,0x6f,0x86,0x08	@ 000e7770 data
.org 0xe7774
	cmp r2, #0	@ 000e7774 002a
.org 0xe7776
	bge.n 0xe777a	@ 000e7776 00da
.org 0xe7778
	negs r2, r2	@ 000e7778 5242
.org 0xe777a
	cmp r2, #127	@ 000e777a 7f2a
.org 0xe777c
	ble.n 0xe778c	@ 000e777c 06dd
.org 0xe777e
	lsls r0, r6, #8	@ 000e777e 3002
.org 0xe7780
	negs r0, r0	@ 000e7780 4042
.org 0xe7782
	cmp r0, #0	@ 000e7782 0028
.org 0xe7784
	bge.n 0xe7788	@ 000e7784 00da
.org 0xe7786
	adds r0, #255	@ 000e7786 ff30
.org 0xe7788
	asrs r0, r0, #8	@ 000e7788 0012
.org 0xe778a
	str r0, [r4, #100]	@ 000e778a 6066
.org 0xe778c
	ldrb r2, [r4, #18]	@ 000e778c a27c
.org 0xe778e
	cmp r2, #0	@ 000e778e 002a
.org 0xe7790
	bne.n 0xe77a4	@ 000e7790 08d1
.org 0xe7792
	ldr r1, [pc, #28]	@ 000e7792 0749
.org 0xe7794
	ldrb r0, [r4, #9]	@ 000e7794 607a
.org 0xe7796
	lsls r0, r0, #2	@ 000e7796 8000
.org 0xe7798
	adds r0, r0, r1	@ 000e7798 4018
.org 0xe779a
	movs r1, #2	@ 000e779a 0221
.org 0xe779c
	str r1, [r4, #12]	@ 000e779c e160
.org 0xe779e
	ldr r0, [r0, #0]	@ 000e779e 0068
.org 0xe77a0
	ldr r0, [r0, #8]	@ 000e77a0 8068
.org 0xe77a2
	str r0, [r4, #20]	@ 000e77a2 6061
.org 0xe77a4
	subs r0, r2, #1	@ 000e77a4 501e
.org 0xe77a6
	strb r0, [r4, #18]	@ 000e77a6 a074
.org 0xe77a8
	pop {r4, r5, r6}	@ 000e77a8 70bc
