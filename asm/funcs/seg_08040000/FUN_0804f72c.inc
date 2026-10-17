@ FUN_0804f72c  entry 0x0804f72c  size 106
.thumb
.org 0x4f72c
FUN_0804f72c:
	push {r4, r5, r6, lr}	@ 0004f72c 70b5
.org 0x4f72e
	adds r4, r0, #0	@ 0004f72e 041c
.org 0x4f730
	bl 0x1cc9c	@ 0004f730 cdf7b4fa
.org 0x4f734
	adds r0, r4, #0	@ 0004f734 201c
.org 0x4f736
	bl 0x1ceec	@ 0004f736 cdf7d9fb
.org 0x4f73a
	ldrb r1, [r4, #10]	@ 0004f73a a17a
.org 0x4f73c
	movs r0, #1	@ 0004f73c 0120
.org 0x4f73e
	movs r6, #0	@ 0004f73e 0026
.org 0x4f740
	orrs r0, r1	@ 0004f740 0843
.org 0x4f742
	movs r1, #2	@ 0004f742 0221
.org 0x4f744
	orrs r0, r1	@ 0004f744 0843
.org 0x4f746
	strb r0, [r4, #10]	@ 0004f746 a072
.org 0x4f748
	ldr r1, [pc, #76]	@ 0004f748 1349
.org 0x4f74a
	adds r0, r4, #0	@ 0004f74a 201c
.org 0x4f74c
	bl 0x1cf00	@ 0004f74c cdf7d8fb
.org 0x4f750
	ldrb r1, [r4, #10]	@ 0004f750 a17a
.org 0x4f752
	movs r0, #4	@ 0004f752 0420
.org 0x4f754
	orrs r0, r1	@ 0004f754 0843
.org 0x4f756
	strb r0, [r4, #10]	@ 0004f756 a072
.org 0x4f758
	adds r5, r4, #0	@ 0004f758 251c
.org 0x4f75a
	adds r5, #116	@ 0004f75a 7435
.org 0x4f75c
	ldr r1, [pc, #60]	@ 0004f75c 0f49
.org 0x4f75e
	adds r2, r4, #0	@ 0004f75e 221c
.org 0x4f760
	adds r2, #84	@ 0004f760 5432
.org 0x4f762
	adds r0, r5, #0	@ 0004f762 281c
.org 0x4f764
	movs r3, #8	@ 0004f764 0823
.org 0x4f766
	bl 0x5760	@ 0004f766 b5f7fbff
.org 0x4f76a
	str r4, [r5, #44]	@ 0004f76a ec62
.org 0x4f76c
	ldr r0, [pc, #48]	@ 0004f76c 0c48
.org 0x4f76e
	str r0, [r5, #36]	@ 0004f76e 6862
.org 0x4f770
	strb r6, [r4, #18]	@ 0004f770 a674
.org 0x4f772
	movs r0, #69	@ 0004f772 4520
.org 0x4f774
	bl 0x2b10	@ 0004f774 b3f7ccf9
.org 0x4f778
	ldr r1, [pc, #40]	@ 0004f778 0a49
.org 0x4f77a
	ldrb r0, [r4, #9]	@ 0004f77a 607a
.org 0x4f77c
	lsls r0, r0, #2	@ 0004f77c 8000
.org 0x4f77e
	adds r0, r0, r1	@ 0004f77e 4018
.org 0x4f780
	movs r1, #1	@ 0004f780 0121
.org 0x4f782
	str r1, [r4, #12]	@ 0004f782 e160
.org 0x4f784
	ldr r0, [r0, #0]	@ 0004f784 0068
.org 0x4f786
	ldr r0, [r0, #4]	@ 0004f786 4068
.org 0x4f788
	str r0, [r4, #20]	@ 0004f788 6061
.org 0x4f78a
	adds r0, r4, #0	@ 0004f78a 201c
.org 0x4f78c
	bl 0x4f7a8	@ 0004f78c 00f00cf8
.org 0x4f790
	pop {r4, r5, r6}	@ 0004f790 70bc
.org 0x4f792
	pop {r0}	@ 0004f792 01bc
.org 0x4f794
	bx r0	@ 0004f794 0047
