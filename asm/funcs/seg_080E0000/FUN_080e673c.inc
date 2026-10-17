@ FUN_080e673c  entry 0x080e673c  size 108
.thumb
.org 0xe673c
FUN_080e673c:
	push {r4, lr}	@ 000e673c 10b5
.org 0xe673e
	adds r4, r0, #0	@ 000e673e 041c
.org 0xe6740
	ldr r0, [r4, #84]	@ 000e6740 606d
.org 0xe6742
	ldr r1, [r4, #92]	@ 000e6742 e16d
.org 0xe6744
	adds r0, r0, r1	@ 000e6744 4018
.org 0xe6746
	str r0, [r4, #84]	@ 000e6746 6065
.org 0xe6748
	ldr r0, [r4, #88]	@ 000e6748 a06d
.org 0xe674a
	ldr r1, [r4, #96]	@ 000e674a 216e
.org 0xe674c
	adds r0, r0, r1	@ 000e674c 4018
.org 0xe674e
	str r0, [r4, #88]	@ 000e674e a065
.org 0xe6750
	adds r1, #64	@ 000e6750 4031
.org 0xe6752
	str r1, [r4, #96]	@ 000e6752 2166
.org 0xe6754
	adds r3, r4, #0	@ 000e6754 231c
.org 0xe6756
	adds r3, #116	@ 000e6756 7433
.org 0xe6758
	ldrb r0, [r3, #0]	@ 000e6758 1878
.org 0xe675a
	cmp r0, #0	@ 000e675a 0028
.org 0xe675c
	bne.n 0xe676c	@ 000e675c 06d1
.org 0xe675e
	ldrb r0, [r4, #10]	@ 000e675e a07a
.org 0xe6760
	movs r1, #254	@ 000e6760 fe21
.org 0xe6762
	ands r1, r0	@ 000e6762 0140
.org 0xe6764
	strb r1, [r4, #10]	@ 000e6764 a172
.org 0xe6766
	movs r0, #1	@ 000e6766 0120
.org 0xe6768
	strb r0, [r3, #0]	@ 000e6768 1870
.org 0xe676a
	b.n 0xe6778	@ 000e676a 05e0
.org 0xe676c
	ldrb r0, [r4, #10]	@ 000e676c a07a
.org 0xe676e
	movs r1, #1	@ 000e676e 0121
.org 0xe6770
	movs r2, #0	@ 000e6770 0022
.org 0xe6772
	orrs r1, r0	@ 000e6772 0143
.org 0xe6774
	strb r1, [r4, #10]	@ 000e6774 a172
.org 0xe6776
	strb r2, [r3, #0]	@ 000e6776 1a70
.org 0xe6778
	ldr r0, [r4, #84]	@ 000e6778 606d
.org 0xe677a
	ldr r1, [r4, #88]	@ 000e677a a16d
.org 0xe677c
	bl 0x7c7c	@ 000e677c 21f77efa
.org 0xe6780
	lsls r0, r0, #16	@ 000e6780 0004
.org 0xe6782
	cmp r0, #0	@ 000e6782 0028
.org 0xe6784
	beq.n 0xe67a2	@ 000e6784 0dd0
.org 0xe6786
	adds r1, r4, #0	@ 000e6786 211c
.org 0xe6788
	adds r1, #84	@ 000e6788 5431
.org 0xe678a
	movs r0, #3	@ 000e678a 0320
.org 0xe678c
	bl 0xd0c88	@ 000e678c eaf77cfa
.org 0xe6790
	ldr r1, [pc, #20]	@ 000e6790 0549
.org 0xe6792
	ldrb r0, [r4, #9]	@ 000e6792 607a
.org 0xe6794
	lsls r0, r0, #2	@ 000e6794 8000
.org 0xe6796
	adds r0, r0, r1	@ 000e6796 4018
.org 0xe6798
	movs r1, #2	@ 000e6798 0221
.org 0xe679a
	str r1, [r4, #12]	@ 000e679a e160
.org 0xe679c
	ldr r0, [r0, #0]	@ 000e679c 0068
.org 0xe679e
	ldr r0, [r0, #8]	@ 000e679e 8068
.org 0xe67a0
	str r0, [r4, #20]	@ 000e67a0 6061
.org 0xe67a2
	pop {r4}	@ 000e67a2 10bc
.org 0xe67a4
	pop {r0}	@ 000e67a4 01bc
.org 0xe67a6
	bx r0	@ 000e67a6 0047
