@ FUN_080db850  entry 0x080db850  size 130
.thumb
.org 0xdb850
FUN_080db850:
	push {r4, r5, r6, lr}	@ 000db850 70b5
.org 0xdb852
	adds r4, r0, #0	@ 000db852 041c
.org 0xdb854
	ldr r3, [r4, #40]	@ 000db854 a36a
.org 0xdb856
	ldrb r2, [r4, #16]	@ 000db856 227c
.org 0xdb858
	ldrb r6, [r4, #17]	@ 000db858 667c
.org 0xdb85a
	ldr r1, [pc, #72]	@ 000db85a 1249
.org 0xdb85c
	ldrb r0, [r4, #9]	@ 000db85c 607a
.org 0xdb85e
	lsls r0, r0, #2	@ 000db85e 8000
.org 0xdb860
	adds r0, r0, r1	@ 000db860 4018
.org 0xdb862
	movs r1, #1	@ 000db862 0121
.org 0xdb864
	str r1, [r4, #12]	@ 000db864 e160
.org 0xdb866
	ldr r0, [r0, #0]	@ 000db866 0068
.org 0xdb868
	ldr r0, [r0, #4]	@ 000db868 4068
.org 0xdb86a
	str r0, [r4, #20]	@ 000db86a 6061
.org 0xdb86c
	ldrb r1, [r4, #10]	@ 000db86c a17a
.org 0xdb86e
	movs r0, #1	@ 000db86e 0120
.org 0xdb870
	movs r5, #0	@ 000db870 0025
.org 0xdb872
	orrs r0, r1	@ 000db872 0843
.org 0xdb874
	movs r1, #2	@ 000db874 0221
.org 0xdb876
	orrs r0, r1	@ 000db876 0843
.org 0xdb878
	strb r0, [r4, #10]	@ 000db878 a072
.org 0xdb87a
	cmp r2, #2	@ 000db87a 022a
.org 0xdb87c
	bne.n 0xdb88e	@ 000db87c 07d1
.org 0xdb87e
	ldr r0, [r4, #84]	@ 000db87e 606d
.org 0xdb880
	ldr r1, [r3, #84]	@ 000db880 596d
.org 0xdb882
	subs r0, r0, r1	@ 000db882 401a
.org 0xdb884
	str r0, [r4, #120]	@ 000db884 a067
.org 0xdb886
	ldr r0, [r4, #88]	@ 000db886 a06d
.org 0xdb888
	ldr r1, [r3, #88]	@ 000db888 996d
.org 0xdb88a
	subs r0, r0, r1	@ 000db88a 401a
.org 0xdb88c
	str r0, [r4, #124]	@ 000db88c e067
.org 0xdb88e
	adds r0, r4, #0	@ 000db88e 201c
.org 0xdb890
	bl 0x1cc9c	@ 000db890 41f704fa
.org 0xdb894
	adds r2, r6, #0	@ 000db894 321c
.org 0xdb896
	cmp r2, #0	@ 000db896 002a
.org 0xdb898
	beq.n 0xdb8a8	@ 000db898 06d0
.org 0xdb89a
	ldrb r0, [r4, #10]	@ 000db89a a07a
.org 0xdb89c
	movs r1, #16	@ 000db89c 1021
.org 0xdb89e
	orrs r0, r1	@ 000db89e 0843
.org 0xdb8a0
	b.n 0xdb8ae	@ 000db8a0 05e0
.org 0xdb8a2
	.byte 0x00	@ 000db8a2 data
.org 0xdb8a3
	.byte 0x00	@ 000db8a3 data
.org 0xdb8a4
	.byte 0x64,0x6f,0x86,0x08	@ 000db8a4 data
.org 0xdb8a8
	ldrb r1, [r4, #10]	@ 000db8a8 a17a
.org 0xdb8aa
	movs r0, #239	@ 000db8aa ef20
.org 0xdb8ac
	ands r0, r1	@ 000db8ac 0840
.org 0xdb8ae
	strb r0, [r4, #10]	@ 000db8ae a072
.org 0xdb8b0
	movs r1, #1	@ 000db8b0 0121
.org 0xdb8b2
	ands r1, r2	@ 000db8b2 1140
.org 0xdb8b4
	adds r0, r4, #0	@ 000db8b4 201c
.org 0xdb8b6
	adds r0, #76	@ 000db8b6 4c30
.org 0xdb8b8
	strb r1, [r0, #0]	@ 000db8b8 0170
.org 0xdb8ba
	adds r3, r4, #0	@ 000db8ba 231c
.org 0xdb8bc
	adds r3, #74	@ 000db8bc 4a33
.org 0xdb8be
	lsls r1, r1, #4	@ 000db8be 0901
.org 0xdb8c0
	ldrb r2, [r3, #0]	@ 000db8c0 1a78
.org 0xdb8c2
	movs r0, #17	@ 000db8c2 1120
.org 0xdb8c4
	negs r0, r0	@ 000db8c4 4042
.org 0xdb8c6
	ands r0, r2	@ 000db8c6 1040
.org 0xdb8c8
	orrs r0, r1	@ 000db8c8 0843
.org 0xdb8ca
	strb r0, [r3, #0]	@ 000db8ca 1870
.org 0xdb8cc
	adds r0, r4, #0	@ 000db8cc 201c
.org 0xdb8ce
	bl 0xdb8d8	@ 000db8ce 00f003f8
