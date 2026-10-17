@ FUN_0807f7cc  entry 0x0807f7cc  size 174
.thumb
.org 0x7f7cc
FUN_0807f7cc:
	push {r4, r5, r6, r7, lr}	@ 0007f7cc f0b5
.org 0x7f7ce
	mov r7, r8	@ 0007f7ce 4746
.org 0x7f7d0
	push {r7}	@ 0007f7d0 80b4
.org 0x7f7d2
	mov ip, r0	@ 0007f7d2 8446
.org 0x7f7d4
	lsls r1, r1, #24	@ 0007f7d4 0906
.org 0x7f7d6
	lsrs r7, r1, #24	@ 0007f7d6 0f0e
.org 0x7f7d8
	lsls r2, r2, #24	@ 0007f7d8 1206
.org 0x7f7da
	lsrs r2, r2, #24	@ 0007f7da 120e
.org 0x7f7dc
	lsls r0, r7, #2	@ 0007f7dc b800
.org 0x7f7de
	mov r1, ip	@ 0007f7de 6146
.org 0x7f7e0
	adds r1, #188	@ 0007f7e0 bc31
.org 0x7f7e2
	adds r0, r1, r0	@ 0007f7e2 0818
.org 0x7f7e4
	ldr r3, [r0, #0]	@ 0007f7e4 0368
.org 0x7f7e6
	cmp r3, #0	@ 0007f7e6 002b
.org 0x7f7e8
	beq.n 0x7f870	@ 0007f7e8 42d0
.org 0x7f7ea
	lsls r0, r2, #2	@ 0007f7ea 9000
.org 0x7f7ec
	adds r4, r1, r0	@ 0007f7ec 0c18
.org 0x7f7ee
	ldr r1, [r4, #0]	@ 0007f7ee 2168
.org 0x7f7f0
	mov r8, r0	@ 0007f7f0 8046
.org 0x7f7f2
	cmp r1, #0	@ 0007f7f2 0029
.org 0x7f7f4
	beq.n 0x7f870	@ 0007f7f4 3cd0
.org 0x7f7f6
	ldr r5, [r1, #84]	@ 0007f7f6 4d6d
.org 0x7f7f8
	ldr r2, [r3, #84]	@ 0007f7f8 5a6d
.org 0x7f7fa
	subs r0, r5, r2	@ 0007f7fa a81a
.org 0x7f7fc
	movs r6, #128	@ 0007f7fc 8026
.org 0x7f7fe
	lsls r6, r6, #5	@ 0007f7fe 7601
.org 0x7f800
	adds r0, r0, r6	@ 0007f800 8019
.org 0x7f802
	movs r6, #128	@ 0007f802 8026
.org 0x7f804
	lsls r6, r6, #6	@ 0007f804 b601
.org 0x7f806
	cmp r0, r6	@ 0007f806 b042
.org 0x7f808
	bhi.n 0x7f870	@ 0007f808 32d8
.org 0x7f80a
	ldr r0, [r1, #88]	@ 0007f80a 886d
.org 0x7f80c
	ldr r1, [r3, #88]	@ 0007f80c 996d
.org 0x7f80e
	subs r0, r0, r1	@ 0007f80e 401a
.org 0x7f810
	movs r1, #128	@ 0007f810 8021
.org 0x7f812
	lsls r1, r1, #5	@ 0007f812 4901
.org 0x7f814
	adds r0, r0, r1	@ 0007f814 4018
.org 0x7f816
	cmp r0, r6	@ 0007f816 b042
.org 0x7f818
	bhi.n 0x7f870	@ 0007f818 2ad8
.org 0x7f81a
	cmp r2, r5	@ 0007f81a aa42
.org 0x7f81c
	ble.n 0x7f82e	@ 0007f81c 07dd
.org 0x7f81e
	adds r1, r3, #0	@ 0007f81e 191c
.org 0x7f820
	adds r1, #184	@ 0007f820 b831
.org 0x7f822
	movs r0, #2	@ 0007f822 0220
.org 0x7f824
	strb r0, [r1, #0]	@ 0007f824 0870
.org 0x7f826
	ldr r0, [r4, #0]	@ 0007f826 2068
.org 0x7f828
	adds r0, #184	@ 0007f828 b830
.org 0x7f82a
	movs r1, #1	@ 0007f82a 0121
.org 0x7f82c
	b.n 0x7f83c	@ 0007f82c 06e0
.org 0x7f82e
	adds r1, r3, #0	@ 0007f82e 191c
.org 0x7f830
	adds r1, #184	@ 0007f830 b831
.org 0x7f832
	movs r0, #1	@ 0007f832 0120
.org 0x7f834
	strb r0, [r1, #0]	@ 0007f834 0870
.org 0x7f836
	ldr r0, [r4, #0]	@ 0007f836 2068
.org 0x7f838
	adds r0, #184	@ 0007f838 b830
.org 0x7f83a
	movs r1, #2	@ 0007f83a 0221
.org 0x7f83c
	strb r1, [r0, #0]	@ 0007f83c 0170
.org 0x7f83e
	lsls r6, r7, #2	@ 0007f83e be00
.org 0x7f840
	mov r5, ip	@ 0007f840 6546
.org 0x7f842
	adds r5, #188	@ 0007f842 bc35
.org 0x7f844
	adds r6, r5, r6	@ 0007f844 ae19
.org 0x7f846
	ldr r3, [r6, #0]	@ 0007f846 3368
.org 0x7f848
	add r5, r8	@ 0007f848 4544
.org 0x7f84a
	ldr r4, [r5, #0]	@ 0007f84a 2c68
.org 0x7f84c
	ldr r0, [r4, #84]	@ 0007f84c 606d
.org 0x7f84e
	ldr r2, [r3, #84]	@ 0007f84e 5a6d
.org 0x7f850
	subs r0, r0, r2	@ 0007f850 801a
.org 0x7f852
	asrs r0, r0, #1	@ 0007f852 4010
.org 0x7f854
	adds r2, r2, r0	@ 0007f854 1218
.org 0x7f856
	str r2, [r3, #84]	@ 0007f856 5a65
.org 0x7f858
	ldr r0, [r4, #88]	@ 0007f858 a06d
.org 0x7f85a
	ldr r1, [r3, #88]	@ 0007f85a 996d
.org 0x7f85c
	subs r0, r0, r1	@ 0007f85c 401a
.org 0x7f85e
	asrs r0, r0, #1	@ 0007f85e 4010
.org 0x7f860
	adds r1, r1, r0	@ 0007f860 0918
.org 0x7f862
	str r1, [r3, #88]	@ 0007f862 9965
.org 0x7f864
	str r2, [r4, #84]	@ 0007f864 6265
.org 0x7f866
	ldr r0, [r3, #88]	@ 0007f866 986d
.org 0x7f868
	str r0, [r4, #88]	@ 0007f868 a065
.org 0x7f86a
	movs r0, #0	@ 0007f86a 0020
.org 0x7f86c
	str r0, [r6, #0]	@ 0007f86c 3060
.org 0x7f86e
	str r0, [r5, #0]	@ 0007f86e 2860
.org 0x7f870
	pop {r3}	@ 0007f870 08bc
.org 0x7f872
	mov r8, r3	@ 0007f872 9846
.org 0x7f874
	pop {r4, r5, r6, r7}	@ 0007f874 f0bc
.org 0x7f876
	pop {r0}	@ 0007f876 01bc
.org 0x7f878
	bx r0	@ 0007f878 0047
