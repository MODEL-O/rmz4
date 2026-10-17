@ FUN_0803f000  entry 0x0803f000  size 360
.thumb
.org 0x3f000
FUN_0803f000:
	push {r4, r5, r6, r7, lr}	@ 0003f000 f0b5
.org 0x3f002
	mov r7, sl	@ 0003f002 5746
.org 0x3f004
	mov r6, r9	@ 0003f004 4e46
.org 0x3f006
	mov r5, r8	@ 0003f006 4546
.org 0x3f008
	push {r5, r6, r7}	@ 0003f008 e0b4
.org 0x3f00a
	adds r6, r0, #0	@ 0003f00a 061c
.org 0x3f00c
	adds r5, r1, #0	@ 0003f00c 0d1c
.org 0x3f00e
	ldr r0, [sp, #36]	@ 0003f00e 0998
.org 0x3f010
	ldr r1, [sp, #40]	@ 0003f010 0a99
.org 0x3f012
	ldr r3, [sp, #44]	@ 0003f012 0b9b
.org 0x3f014
	lsls r2, r2, #24	@ 0003f014 1206
.org 0x3f016
	lsrs r2, r2, #24	@ 0003f016 120e
.org 0x3f018
	mov r8, r2	@ 0003f018 9046
.org 0x3f01a
	lsls r0, r0, #24	@ 0003f01a 0006
.org 0x3f01c
	lsrs r7, r0, #24	@ 0003f01c 070e
.org 0x3f01e
	lsls r1, r1, #24	@ 0003f01e 0906
.org 0x3f020
	lsrs r1, r1, #24	@ 0003f020 090e
.org 0x3f022
	mov r9, r1	@ 0003f022 8946
.org 0x3f024
	lsls r3, r3, #24	@ 0003f024 1b06
.org 0x3f026
	lsrs r3, r3, #24	@ 0003f026 1b0e
.org 0x3f028
	mov sl, r3	@ 0003f028 9a46
.org 0x3f02a
	ldr r0, [pc, #80]	@ 0003f02a 1448
.org 0x3f02c
	ldr r0, [r0, #0]	@ 0003f02c 0068
.org 0x3f02e
	bl 0x5500	@ 0003f02e c6f767fa
.org 0x3f032
	adds r4, r0, #0	@ 0003f032 041c
.org 0x3f034
	cmp r4, #0	@ 0003f034 002c
.org 0x3f036
	bne.n 0x3f03a	@ 0003f036 00d1
.org 0x3f038
	b.n 0x3f17e	@ 0003f038 a1e0
.org 0x3f03a
	adds r0, r6, #0	@ 0003f03a 301c
.org 0x3f03c
	adds r0, #248	@ 0003f03c f830
.org 0x3f03e
	ldrb r0, [r0, #0]	@ 0003f03e 0078
.org 0x3f040
	cmp r0, #2	@ 0003f040 0228
.org 0x3f042
	bne.n 0x3f08c	@ 0003f042 23d1
.org 0x3f044
	ldr r1, [pc, #56]	@ 0003f044 0e49
.org 0x3f046
	movs r0, #4	@ 0003f046 0420
.org 0x3f048
	strb r0, [r4, #9]	@ 0003f048 6072
.org 0x3f04a
	ldr r0, [r1, #16]	@ 0003f04a 0869
.org 0x3f04c
	ldr r0, [r0, #0]	@ 0003f04c 0068
.org 0x3f04e
	str r0, [r4, #20]	@ 0003f04e 6061
.org 0x3f050
	ldrb r1, [r4, #11]	@ 0003f050 e17a
.org 0x3f052
	movs r0, #191	@ 0003f052 bf20
.org 0x3f054
	ands r0, r1	@ 0003f054 0840
.org 0x3f056
	strb r0, [r4, #11]	@ 0003f056 e072
.org 0x3f058
	adds r1, r4, #0	@ 0003f058 211c
.org 0x3f05a
	adds r1, #37	@ 0003f05a 2531
.org 0x3f05c
	movs r0, #16	@ 0003f05c 1020
.org 0x3f05e
	strb r0, [r1, #0]	@ 0003f05e 0870
.org 0x3f060
	ldr r0, [pc, #32]	@ 0003f060 0848
.org 0x3f062
	ldrh r0, [r0, #0]	@ 0003f062 0088
.org 0x3f064
	strh r0, [r4, #32]	@ 0003f064 2084
.org 0x3f066
	ldr r0, [pc, #32]	@ 0003f066 0848
.org 0x3f068
	ldrb r0, [r0, #1]	@ 0003f068 4078
.org 0x3f06a
	subs r1, #3	@ 0003f06a 0339
.org 0x3f06c
	strb r0, [r1, #0]	@ 0003f06c 0870
.org 0x3f06e
	movs r0, #1	@ 0003f06e 0120
.org 0x3f070
	movs r1, #0	@ 0003f070 0021
.org 0x3f072
	movs r2, #0	@ 0003f072 0022
.org 0x3f074
	bl 0x3a8d4	@ 0003f074 fbf72efc
.org 0x3f078
	b.n 0x3f0c0	@ 0003f078 22e0
.org 0x3f07a
	.byte 0x00	@ 0003f07a data
.org 0x3f07b
	.byte 0x00	@ 0003f07b data
.org 0x3f07c
	.byte 0x88,0xed,0x02,0x02	@ 0003f07c data
.org 0x3f080
	.byte 0xf8,0x39,0x85,0x08	@ 0003f080 data
.org 0x3f084
	.byte 0xfc,0x36,0x85,0x08	@ 0003f084 data
.org 0x3f088
	.byte 0x04,0x37,0x85,0x08	@ 0003f088 data
.org 0x3f08c
	ldr r1, [pc, #80]	@ 0003f08c 1449
.org 0x3f08e
	movs r0, #4	@ 0003f08e 0420
.org 0x3f090
	strb r0, [r4, #9]	@ 0003f090 6072
.org 0x3f092
	ldr r0, [r1, #16]	@ 0003f092 0869
.org 0x3f094
	ldr r0, [r0, #0]	@ 0003f094 0068
.org 0x3f096
	str r0, [r4, #20]	@ 0003f096 6061
.org 0x3f098
	ldrb r1, [r4, #11]	@ 0003f098 e17a
.org 0x3f09a
	movs r0, #191	@ 0003f09a bf20
.org 0x3f09c
	ands r0, r1	@ 0003f09c 0840
.org 0x3f09e
	strb r0, [r4, #11]	@ 0003f09e e072
.org 0x3f0a0
	adds r1, r4, #0	@ 0003f0a0 211c
.org 0x3f0a2
	adds r1, #37	@ 0003f0a2 2531
.org 0x3f0a4
	movs r0, #16	@ 0003f0a4 1020
.org 0x3f0a6
	strb r0, [r1, #0]	@ 0003f0a6 0870
.org 0x3f0a8
	ldr r0, [pc, #56]	@ 0003f0a8 0e48
.org 0x3f0aa
	ldrh r0, [r0, #0]	@ 0003f0aa 0088
.org 0x3f0ac
	strh r0, [r4, #32]	@ 0003f0ac 2084
.org 0x3f0ae
	ldr r0, [pc, #56]	@ 0003f0ae 0e48
.org 0x3f0b0
	ldrb r0, [r0, #0]	@ 0003f0b0 0078
.org 0x3f0b2
	subs r1, #3	@ 0003f0b2 0339
.org 0x3f0b4
	strb r0, [r1, #0]	@ 0003f0b4 0870
.org 0x3f0b6
	movs r0, #0	@ 0003f0b6 0020
.org 0x3f0b8
	movs r1, #0	@ 0003f0b8 0021
.org 0x3f0ba
	movs r2, #0	@ 0003f0ba 0022
.org 0x3f0bc
	bl 0x3a8d4	@ 0003f0bc fbf70afc
.org 0x3f0c0
	str r5, [r4, #40]	@ 0003f0c0 a562
.org 0x3f0c2
	movs r0, #0	@ 0003f0c2 0020
.org 0x3f0c4
	mov r1, r8	@ 0003f0c4 4146
.org 0x3f0c6
	strb r1, [r4, #16]	@ 0003f0c6 2174
.org 0x3f0c8
	strb r0, [r4, #17]	@ 0003f0c8 6074
.org 0x3f0ca
	ldrb r0, [r5, #10]	@ 0003f0ca a87a
.org 0x3f0cc
	lsrs r2, r0, #4	@ 0003f0cc 0209
.org 0x3f0ce
	movs r0, #1	@ 0003f0ce 0120
.org 0x3f0d0
	ands r2, r0	@ 0003f0d0 0240
.org 0x3f0d2
	cmp r2, #0	@ 0003f0d2 002a
.org 0x3f0d4
	beq.n 0x3f0ec	@ 0003f0d4 0ad0
.org 0x3f0d6
	ldrb r0, [r4, #10]	@ 0003f0d6 a07a
.org 0x3f0d8
	movs r1, #16	@ 0003f0d8 1021
.org 0x3f0da
	orrs r0, r1	@ 0003f0da 0843
.org 0x3f0dc
	b.n 0x3f0f2	@ 0003f0dc 09e0
.org 0x3f0de
	.byte 0x00	@ 0003f0de data
.org 0x3f0df
	.byte 0x00	@ 0003f0df data
.org 0x3f0e0
	.byte 0xf8,0x39,0x85,0x08	@ 0003f0e0 data
.org 0x3f0e4
	.byte 0xfc,0x36,0x85,0x08	@ 0003f0e4 data
.org 0x3f0e8
	.byte 0x04,0x37,0x85,0x08	@ 0003f0e8 data
.org 0x3f0ec
	ldrb r1, [r4, #10]	@ 0003f0ec a17a
.org 0x3f0ee
	movs r0, #239	@ 0003f0ee ef20
.org 0x3f0f0
	ands r0, r1	@ 0003f0f0 0840
.org 0x3f0f2
	strb r0, [r4, #10]	@ 0003f0f2 a072
.org 0x3f0f4
	adds r1, r2, #0	@ 0003f0f4 111c
.org 0x3f0f6
	adds r0, r4, #0	@ 0003f0f6 201c
.org 0x3f0f8
	adds r0, #76	@ 0003f0f8 4c30
.org 0x3f0fa
	strb r1, [r0, #0]	@ 0003f0fa 0170
.org 0x3f0fc
	adds r3, r4, #0	@ 0003f0fc 231c
.org 0x3f0fe
	adds r3, #74	@ 0003f0fe 4a33
.org 0x3f100
	lsls r1, r1, #4	@ 0003f100 0901
.org 0x3f102
	ldrb r2, [r3, #0]	@ 0003f102 1a78
.org 0x3f104
	movs r0, #17	@ 0003f104 1120
.org 0x3f106
	negs r0, r0	@ 0003f106 4042
.org 0x3f108
	ands r0, r2	@ 0003f108 1040
.org 0x3f10a
	orrs r0, r1	@ 0003f10a 0843
.org 0x3f10c
	strb r0, [r3, #0]	@ 0003f10c 1870
.org 0x3f10e
	adds r0, r7, #0	@ 0003f10e 381c
.org 0x3f110
	adds r0, #128	@ 0003f110 8030
.org 0x3f112
	lsls r0, r0, #24	@ 0003f112 0006
.org 0x3f114
	lsrs r7, r0, #24	@ 0003f114 070e
.org 0x3f116
	ldr r1, [pc, #64]	@ 0003f116 1049
.org 0x3f118
	lsls r0, r7, #1	@ 0003f118 7800
.org 0x3f11a
	adds r0, r0, r1	@ 0003f11a 4018
.org 0x3f11c
	movs r2, #0	@ 0003f11c 0022
.org 0x3f11e
	ldrsh r0, [r0, r2]	@ 0003f11e 805e
.org 0x3f120
	ldr r2, [sp, #32]	@ 0003f120 089a
.org 0x3f122
	muls r0, r2	@ 0003f122 5043
.org 0x3f124
	asrs r2, r0, #8	@ 0003f124 0212
.org 0x3f126
	str r2, [r4, #92]	@ 0003f126 e265
.org 0x3f128
	adds r0, r7, #0	@ 0003f128 381c
.org 0x3f12a
	adds r0, #64	@ 0003f12a 4030
.org 0x3f12c
	lsls r0, r0, #24	@ 0003f12c 0006
.org 0x3f12e
	lsrs r0, r0, #23	@ 0003f12e c00d
.org 0x3f130
	adds r0, r0, r1	@ 0003f130 4018
.org 0x3f132
	movs r1, #0	@ 0003f132 0021
.org 0x3f134
	ldrsh r0, [r0, r1]	@ 0003f134 405e
.org 0x3f136
	ldr r1, [sp, #32]	@ 0003f136 0899
.org 0x3f138
	muls r0, r1	@ 0003f138 4843
.org 0x3f13a
	asrs r0, r0, #8	@ 0003f13a 0012
.org 0x3f13c
	str r0, [r4, #96]	@ 0003f13c 2066
.org 0x3f13e
	ldrb r1, [r4, #10]	@ 0003f13e a17a
.org 0x3f140
	movs r0, #16	@ 0003f140 1020
.org 0x3f142
	ands r0, r1	@ 0003f142 0840
.org 0x3f144
	cmp r0, #0	@ 0003f144 0028
.org 0x3f146
	beq.n 0x3f15c	@ 0003f146 09d0
.org 0x3f148
	ldr r0, [r5, #84]	@ 0003f148 686d
.org 0x3f14a
	ldr r1, [r5, #92]	@ 0003f14a e96d
.org 0x3f14c
	adds r0, r0, r1	@ 0003f14c 4018
.org 0x3f14e
	str r0, [r4, #84]	@ 0003f14e 6065
.org 0x3f150
	negs r0, r2	@ 0003f150 5042
.org 0x3f152
	str r0, [r4, #92]	@ 0003f152 e065
.org 0x3f154
	b.n 0x3f164	@ 0003f154 06e0
.org 0x3f156
	.byte 0x00	@ 0003f156 data
.org 0x3f157
	.byte 0x00	@ 0003f157 data
.org 0x3f158
	.byte 0x0c,0x93,0x12,0x08	@ 0003f158 data
.org 0x3f15c
	ldr r0, [r5, #84]	@ 0003f15c 686d
.org 0x3f15e
	ldr r1, [r5, #92]	@ 0003f15e e96d
.org 0x3f160
	subs r0, r0, r1	@ 0003f160 401a
.org 0x3f162
	str r0, [r4, #84]	@ 0003f162 6065
.org 0x3f164
	ldr r0, [r5, #88]	@ 0003f164 a86d
.org 0x3f166
	ldr r1, [r5, #96]	@ 0003f166 296e
