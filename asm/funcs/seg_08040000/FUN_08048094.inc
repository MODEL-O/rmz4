@ FUN_08048094  entry 0x08048094  size 306
.thumb
.org 0x48094
FUN_08048094:
	push {r4, r5, r6, lr}	@ 00048094 70b5
.org 0x48096
	adds r5, r0, #0	@ 00048096 051c
.org 0x48098
	ldr r6, [r5, #40]	@ 00048098 ae6a
.org 0x4809a
	movs r1, #168	@ 0004809a a821
.org 0x4809c
	lsls r1, r1, #1	@ 0004809c 4900
.org 0x4809e
	adds r0, r6, r1	@ 0004809e 7018
.org 0x480a0
	ldrb r0, [r0, #0]	@ 000480a0 0078
.org 0x480a2
	cmp r0, #255	@ 000480a2 ff28
.org 0x480a4
	bne.n 0x480f0	@ 000480a4 24d1
.org 0x480a6
	ldr r0, [pc, #64]	@ 000480a6 1048
.org 0x480a8
	adds r2, r6, r0	@ 000480a8 3218
.org 0x480aa
	ldrb r0, [r2, #0]	@ 000480aa 1078
.org 0x480ac
	movs r1, #64	@ 000480ac 4021
.org 0x480ae
	orrs r0, r1	@ 000480ae 0843
.org 0x480b0
	strb r0, [r2, #0]	@ 000480b0 1070
.org 0x480b2
	ldrb r1, [r5, #10]	@ 000480b2 a97a
.org 0x480b4
	movs r0, #254	@ 000480b4 fe20
.org 0x480b6
	ands r0, r1	@ 000480b6 0840
.org 0x480b8
	movs r2, #0	@ 000480b8 0022
.org 0x480ba
	movs r1, #253	@ 000480ba fd21
.org 0x480bc
	ands r0, r1	@ 000480bc 0840
.org 0x480be
	strb r0, [r5, #10]	@ 000480be a872
.org 0x480c0
	adds r0, r5, #0	@ 000480c0 281c
.org 0x480c2
	adds r0, #140	@ 000480c2 8c30
.org 0x480c4
	str r2, [r0, #0]	@ 000480c4 0260
.org 0x480c6
	adds r0, #4	@ 000480c6 0430
.org 0x480c8
	str r2, [r0, #0]	@ 000480c8 0260
.org 0x480ca
	adds r0, #4	@ 000480ca 0430
.org 0x480cc
	strb r2, [r0, #0]	@ 000480cc 0270
.org 0x480ce
	ldrb r1, [r5, #10]	@ 000480ce a97a
.org 0x480d0
	movs r0, #251	@ 000480d0 fb20
.org 0x480d2
	ands r0, r1	@ 000480d2 0840
.org 0x480d4
	strb r0, [r5, #10]	@ 000480d4 a872
.org 0x480d6
	ldr r1, [pc, #20]	@ 000480d6 0549
.org 0x480d8
	ldrb r0, [r5, #9]	@ 000480d8 687a
.org 0x480da
	lsls r0, r0, #2	@ 000480da 8000
.org 0x480dc
	adds r0, r0, r1	@ 000480dc 4018
.org 0x480de
	movs r1, #3	@ 000480de 0321
.org 0x480e0
	str r1, [r5, #12]	@ 000480e0 e960
.org 0x480e2
	ldr r0, [r0, #0]	@ 000480e2 0068
.org 0x480e4
	ldr r0, [r0, #12]	@ 000480e4 c068
.org 0x480e6
	b.n 0x481cc	@ 000480e6 71e0
.org 0x480e8
	.byte 0x53,0x01,0x00,0x00	@ 000480e8 data
.org 0x480ec
	.byte 0xf8,0x39,0x85,0x08	@ 000480ec data
.org 0x480f0
	adds r0, r5, #0	@ 000480f0 281c
.org 0x480f2
	bl 0x1cff0	@ 000480f2 d4f77dff
.org 0x480f6
	ldrb r0, [r6, #10]	@ 000480f6 b07a
.org 0x480f8
	lsrs r2, r0, #4	@ 000480f8 0209
.org 0x480fa
	movs r0, #1	@ 000480fa 0120
.org 0x480fc
	ands r2, r0	@ 000480fc 0240
.org 0x480fe
	cmp r2, #0	@ 000480fe 002a
.org 0x48100
	beq.n 0x4810a	@ 00048100 03d0
.org 0x48102
	ldrb r1, [r5, #10]	@ 00048102 a97a
.org 0x48104
	movs r0, #16	@ 00048104 1020
.org 0x48106
	orrs r0, r1	@ 00048106 0843
.org 0x48108
	b.n 0x48110	@ 00048108 02e0
.org 0x4810a
	ldrb r1, [r5, #10]	@ 0004810a a97a
.org 0x4810c
	movs r0, #239	@ 0004810c ef20
.org 0x4810e
	ands r0, r1	@ 0004810e 0840
.org 0x48110
	strb r0, [r5, #10]	@ 00048110 a872
.org 0x48112
	adds r1, r2, #0	@ 00048112 111c
.org 0x48114
	adds r0, r5, #0	@ 00048114 281c
.org 0x48116
	adds r0, #76	@ 00048116 4c30
.org 0x48118
	strb r1, [r0, #0]	@ 00048118 0170
.org 0x4811a
	adds r3, r5, #0	@ 0004811a 2b1c
.org 0x4811c
	adds r3, #74	@ 0004811c 4a33
.org 0x4811e
	lsls r1, r1, #4	@ 0004811e 0901
.org 0x48120
	ldrb r2, [r3, #0]	@ 00048120 1a78
.org 0x48122
	movs r0, #17	@ 00048122 1120
.org 0x48124
	negs r0, r0	@ 00048124 4042
.org 0x48126
	ands r0, r2	@ 00048126 1040
.org 0x48128
	orrs r0, r1	@ 00048128 0843
.org 0x4812a
	strb r0, [r3, #0]	@ 0004812a 1870
.org 0x4812c
	adds r0, r6, #0	@ 0004812c 301c
.org 0x4812e
	adds r0, #113	@ 0004812e 7130
.org 0x48130
	ldrb r0, [r0, #0]	@ 00048130 0078
.org 0x48132
	lsls r0, r0, #24	@ 00048132 0006
.org 0x48134
	asrs r0, r0, #24	@ 00048134 0016
.org 0x48136
	movs r4, #0	@ 00048136 0024
.org 0x48138
	cmp r0, #3	@ 00048138 0328
.org 0x4813a
	bne.n 0x4813e	@ 0004813a 00d1
.org 0x4813c
	movs r4, #1	@ 0004813c 0124
.org 0x4813e
	ldrb r1, [r5, #10]	@ 0004813e a97a
.org 0x48140
	movs r0, #16	@ 00048140 1020
.org 0x48142
	ands r0, r1	@ 00048142 0840
.org 0x48144
	cmp r0, #0	@ 00048144 0028
.org 0x48146
	beq.n 0x48168	@ 00048146 0fd0
.org 0x48148
	ldr r3, [pc, #24]	@ 00048148 064b
.org 0x4814a
	lsls r4, r4, #3	@ 0004814a e400
.org 0x4814c
	movs r1, #168	@ 0004814c a821
.org 0x4814e
	lsls r1, r1, #1	@ 0004814e 4900
.org 0x48150
	adds r2, r6, r1	@ 00048150 7218
.org 0x48152
	ldrb r0, [r2, #0]	@ 00048152 1078
.org 0x48154
	lsls r0, r0, #4	@ 00048154 0001
.org 0x48156
	adds r0, r4, r0	@ 00048156 2018
.org 0x48158
	adds r0, r0, r3	@ 00048158 c018
.org 0x4815a
	ldr r1, [r6, #84]	@ 0004815a 716d
.org 0x4815c
	ldr r0, [r0, #0]	@ 0004815c 0068
.org 0x4815e
	subs r1, r1, r0	@ 0004815e 091a
.org 0x48160
	b.n 0x48180	@ 00048160 0ee0
.org 0x48162
	.byte 0x00	@ 00048162 data
.org 0x48163
	.byte 0x00	@ 00048163 data
.org 0x48164
	.byte 0x4c,0x35,0x85,0x08	@ 00048164 data
.org 0x48168
	ldr r3, [pc, #104]	@ 00048168 1a4b
.org 0x4816a
	lsls r4, r4, #3	@ 0004816a e400
.org 0x4816c
	movs r0, #168	@ 0004816c a820
.org 0x4816e
	lsls r0, r0, #1	@ 0004816e 4000
.org 0x48170
	adds r2, r6, r0	@ 00048170 3218
.org 0x48172
	ldrb r0, [r2, #0]	@ 00048172 1078
.org 0x48174
	lsls r0, r0, #4	@ 00048174 0001
.org 0x48176
	adds r0, r4, r0	@ 00048176 2018
.org 0x48178
	adds r0, r0, r3	@ 00048178 c018
.org 0x4817a
	ldr r1, [r6, #84]	@ 0004817a 716d
.org 0x4817c
	ldr r0, [r0, #0]	@ 0004817c 0068
.org 0x4817e
	adds r1, r1, r0	@ 0004817e 0918
.org 0x48180
	str r1, [r5, #84]	@ 00048180 6965
.org 0x48182
	ldrb r0, [r2, #0]	@ 00048182 1078
.org 0x48184
	lsls r0, r0, #4	@ 00048184 0001
.org 0x48186
	adds r0, r4, r0	@ 00048186 2018
.org 0x48188
	adds r1, r3, #4	@ 00048188 191d
.org 0x4818a
	adds r0, r0, r1	@ 0004818a 4018
.org 0x4818c
	ldr r1, [r6, #88]	@ 0004818c b16d
.org 0x4818e
	ldr r0, [r0, #0]	@ 0004818e 0068
.org 0x48190
	adds r1, r1, r0	@ 00048190 0918
.org 0x48192
	str r1, [r5, #88]	@ 00048192 a965
.org 0x48194
	ldr r1, [pc, #64]	@ 00048194 1049
.org 0x48196
	ldrb r0, [r2, #0]	@ 00048196 1078
.org 0x48198
	adds r0, r0, r1	@ 00048198 4018
.org 0x4819a
	ldrb r1, [r0, #0]	@ 0004819a 0178
.org 0x4819c
	adds r0, r5, #0	@ 0004819c 281c
.org 0x4819e
	adds r0, #36	@ 0004819e 2430
.org 0x481a0
	strb r1, [r0, #0]	@ 000481a0 0170
.org 0x481a2
	ldrb r0, [r5, #18]	@ 000481a2 a87c
.org 0x481a4
	adds r1, r0, #1	@ 000481a4 411c
.org 0x481a6
	strb r1, [r5, #18]	@ 000481a6 a974
.org 0x481a8
	lsls r0, r0, #24	@ 000481a8 0006
.org 0x481aa
	lsrs r0, r0, #24	@ 000481aa 000e
.org 0x481ac
	cmp r0, #16	@ 000481ac 1028
.org 0x481ae
	bls.n 0x481ce	@ 000481ae 0ed9
.org 0x481b0
	ldr r1, [pc, #40]	@ 000481b0 0a49
.org 0x481b2
	adds r2, r6, r1	@ 000481b2 7218
.org 0x481b4
	ldrb r0, [r2, #0]	@ 000481b4 1078
.org 0x481b6
	movs r1, #64	@ 000481b6 4021
.org 0x481b8
	orrs r0, r1	@ 000481b8 0843
.org 0x481ba
	strb r0, [r2, #0]	@ 000481ba 1070
.org 0x481bc
	ldr r1, [pc, #32]	@ 000481bc 0849
.org 0x481be
	ldrb r0, [r5, #9]	@ 000481be 687a
.org 0x481c0
	lsls r0, r0, #2	@ 000481c0 8000
.org 0x481c2
	adds r0, r0, r1	@ 000481c2 4018
.org 0x481c4
	movs r1, #2	@ 000481c4 0221
