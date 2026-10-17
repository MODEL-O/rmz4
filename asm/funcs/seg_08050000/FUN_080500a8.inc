@ FUN_080500a8  entry 0x080500a8  size 392
.thumb
.org 0x500a8
FUN_080500a8:
	push {r4, r5, r6, lr}	@ 000500a8 70b5
.org 0x500aa
	adds r5, r0, #0	@ 000500aa 051c
.org 0x500ac
	ldr r6, [r5, #40]	@ 000500ac ae6a
.org 0x500ae
	movs r1, #168	@ 000500ae a821
.org 0x500b0
	lsls r1, r1, #1	@ 000500b0 4900
.org 0x500b2
	adds r0, r6, r1	@ 000500b2 7018
.org 0x500b4
	ldrb r0, [r0, #0]	@ 000500b4 0078
.org 0x500b6
	cmp r0, #255	@ 000500b6 ff28
.org 0x500b8
	bne.n 0x50108	@ 000500b8 26d1
.org 0x500ba
	ldr r0, [pc, #68]	@ 000500ba 1148
.org 0x500bc
	adds r2, r6, r0	@ 000500bc 3218
.org 0x500be
	ldrb r0, [r2, #0]	@ 000500be 1078
.org 0x500c0
	movs r1, #64	@ 000500c0 4021
.org 0x500c2
	orrs r0, r1	@ 000500c2 0843
.org 0x500c4
	strb r0, [r2, #0]	@ 000500c4 1070
.org 0x500c6
	ldrb r1, [r5, #10]	@ 000500c6 a97a
.org 0x500c8
	movs r0, #254	@ 000500c8 fe20
.org 0x500ca
	ands r0, r1	@ 000500ca 0840
.org 0x500cc
	movs r2, #0	@ 000500cc 0022
.org 0x500ce
	movs r1, #253	@ 000500ce fd21
.org 0x500d0
	ands r0, r1	@ 000500d0 0840
.org 0x500d2
	strb r0, [r5, #10]	@ 000500d2 a872
.org 0x500d4
	adds r0, r5, #0	@ 000500d4 281c
.org 0x500d6
	adds r0, #140	@ 000500d6 8c30
.org 0x500d8
	str r2, [r0, #0]	@ 000500d8 0260
.org 0x500da
	adds r0, #4	@ 000500da 0430
.org 0x500dc
	str r2, [r0, #0]	@ 000500dc 0260
.org 0x500de
	adds r0, #4	@ 000500de 0430
.org 0x500e0
	strb r2, [r0, #0]	@ 000500e0 0270
.org 0x500e2
	ldrb r1, [r5, #10]	@ 000500e2 a97a
.org 0x500e4
	movs r0, #251	@ 000500e4 fb20
.org 0x500e6
	ands r0, r1	@ 000500e6 0840
.org 0x500e8
	strb r0, [r5, #10]	@ 000500e8 a872
.org 0x500ea
	ldr r1, [pc, #24]	@ 000500ea 0649
.org 0x500ec
	ldrb r0, [r5, #9]	@ 000500ec 687a
.org 0x500ee
	lsls r0, r0, #2	@ 000500ee 8000
.org 0x500f0
	adds r0, r0, r1	@ 000500f0 4018
.org 0x500f2
	movs r1, #3	@ 000500f2 0321
.org 0x500f4
	str r1, [r5, #12]	@ 000500f4 e960
.org 0x500f6
	ldr r0, [r0, #0]	@ 000500f6 0068
.org 0x500f8
	ldr r0, [r0, #12]	@ 000500f8 c068
.org 0x500fa
	str r0, [r5, #20]	@ 000500fa 6861
.org 0x500fc
	b.n 0x5024c	@ 000500fc a6e0
.org 0x500fe
	.byte 0x00	@ 000500fe data
.org 0x500ff
	.byte 0x00	@ 000500ff data
.org 0x50100
	.byte 0x53,0x01,0x00,0x00	@ 00050100 data
.org 0x50104
	.byte 0xf8,0x39,0x85,0x08	@ 00050104 data
.org 0x50108
	ldrb r0, [r5, #18]	@ 00050108 a87c
.org 0x5010a
	adds r1, r0, #1	@ 0005010a 411c
.org 0x5010c
	strb r1, [r5, #18]	@ 0005010c a974
.org 0x5010e
	lsls r0, r0, #24	@ 0005010e 0006
.org 0x50110
	lsrs r0, r0, #24	@ 00050110 000e
.org 0x50112
	cmp r0, #8	@ 00050112 0828
.org 0x50114
	bls.n 0x5015c	@ 00050114 22d9
.org 0x50116
	adds r0, r5, #0	@ 00050116 281c
.org 0x50118
	adds r0, #140	@ 00050118 8c30
.org 0x5011a
	movs r1, #0	@ 0005011a 0021
.org 0x5011c
	str r1, [r0, #0]	@ 0005011c 0160
.org 0x5011e
	adds r0, #4	@ 0005011e 0430
.org 0x50120
	str r1, [r0, #0]	@ 00050120 0160
.org 0x50122
	adds r0, #4	@ 00050122 0430
.org 0x50124
	strb r1, [r0, #0]	@ 00050124 0170
.org 0x50126
	ldrb r1, [r5, #10]	@ 00050126 a97a
.org 0x50128
	movs r0, #251	@ 00050128 fb20
.org 0x5012a
	ands r0, r1	@ 0005012a 0840
.org 0x5012c
	strb r0, [r5, #10]	@ 0005012c a872
.org 0x5012e
	ldr r1, [pc, #36]	@ 0005012e 0949
.org 0x50130
	adds r2, r6, r1	@ 00050130 7218
.org 0x50132
	ldrb r0, [r2, #0]	@ 00050132 1078
.org 0x50134
	movs r1, #64	@ 00050134 4021
.org 0x50136
	orrs r0, r1	@ 00050136 0843
.org 0x50138
	strb r0, [r2, #0]	@ 00050138 1070
.org 0x5013a
	ldr r1, [pc, #28]	@ 0005013a 0749
.org 0x5013c
	ldrb r0, [r5, #9]	@ 0005013c 687a
.org 0x5013e
	lsls r0, r0, #2	@ 0005013e 8000
.org 0x50140
	adds r0, r0, r1	@ 00050140 4018
.org 0x50142
	movs r1, #2	@ 00050142 0221
.org 0x50144
	str r1, [r5, #12]	@ 00050144 e960
.org 0x50146
	ldr r0, [r0, #0]	@ 00050146 0068
.org 0x50148
	ldr r0, [r0, #8]	@ 00050148 8068
.org 0x5014a
	str r0, [r5, #20]	@ 0005014a 6861
.org 0x5014c
	movs r0, #1	@ 0005014c 0120
.org 0x5014e
	strb r0, [r5, #14]	@ 0005014e a873
.org 0x50150
	b.n 0x5024c	@ 00050150 7ce0
.org 0x50152
	.byte 0x00	@ 00050152 data
.org 0x50153
	.byte 0x00	@ 00050153 data
.org 0x50154
	.byte 0x53,0x01,0x00,0x00	@ 00050154 data
.org 0x50158
	.byte 0xf8,0x39,0x85,0x08	@ 00050158 data
.org 0x5015c
	adds r2, r5, #0	@ 0005015c 2a1c
.org 0x5015e
	adds r2, #140	@ 0005015e 8c32
.org 0x50160
	ldr r0, [r2, #0]	@ 00050160 1068
.org 0x50162
	movs r1, #4	@ 00050162 0421
.org 0x50164
	ands r0, r1	@ 00050164 0840
.org 0x50166
	cmp r0, #0	@ 00050166 0028
.org 0x50168
	beq.n 0x501a8	@ 00050168 1ed0
.org 0x5016a
	movs r1, #0	@ 0005016a 0021
.org 0x5016c
	str r1, [r2, #0]	@ 0005016c 1160
.org 0x5016e
	adds r0, r5, #0	@ 0005016e 281c
.org 0x50170
	adds r0, #144	@ 00050170 9030
.org 0x50172
	str r1, [r0, #0]	@ 00050172 0160
.org 0x50174
	adds r0, #4	@ 00050174 0430
.org 0x50176
	strb r1, [r0, #0]	@ 00050176 0170
.org 0x50178
	ldrb r1, [r5, #10]	@ 00050178 a97a
.org 0x5017a
	movs r0, #251	@ 0005017a fb20
.org 0x5017c
	ands r0, r1	@ 0005017c 0840
.org 0x5017e
	strb r0, [r5, #10]	@ 0005017e a872
.org 0x50180
	ldr r0, [pc, #28]	@ 00050180 0748
.org 0x50182
	adds r2, r6, r0	@ 00050182 3218
.org 0x50184
	ldrb r0, [r2, #0]	@ 00050184 1078
.org 0x50186
	movs r1, #64	@ 00050186 4021
.org 0x50188
	orrs r0, r1	@ 00050188 0843
.org 0x5018a
	strb r0, [r2, #0]	@ 0005018a 1070
.org 0x5018c
	ldr r1, [pc, #20]	@ 0005018c 0549
.org 0x5018e
	ldrb r0, [r5, #9]	@ 0005018e 687a
.org 0x50190
	lsls r0, r0, #2	@ 00050190 8000
.org 0x50192
	adds r0, r0, r1	@ 00050192 4018
.org 0x50194
	movs r1, #2	@ 00050194 0221
.org 0x50196
	str r1, [r5, #12]	@ 00050196 e960
.org 0x50198
	ldr r0, [r0, #0]	@ 00050198 0068
.org 0x5019a
	ldr r0, [r0, #8]	@ 0005019a 8068
.org 0x5019c
	str r0, [r5, #20]	@ 0005019c 6861
.org 0x5019e
	b.n 0x5024c	@ 0005019e 55e0
.org 0x501a0
	.byte 0x53,0x01,0x00,0x00	@ 000501a0 data
.org 0x501a4
	.byte 0xf8,0x39,0x85,0x08	@ 000501a4 data
.org 0x501a8
	adds r0, r5, #0	@ 000501a8 281c
.org 0x501aa
	bl 0x1cff0	@ 000501aa ccf721ff
.org 0x501ae
	ldrb r0, [r6, #10]	@ 000501ae b07a
.org 0x501b0
	lsrs r2, r0, #4	@ 000501b0 0209
.org 0x501b2
	movs r0, #1	@ 000501b2 0120
.org 0x501b4
	ands r2, r0	@ 000501b4 0240
.org 0x501b6
	cmp r2, #0	@ 000501b6 002a
.org 0x501b8
	beq.n 0x501c2	@ 000501b8 03d0
.org 0x501ba
	ldrb r1, [r5, #10]	@ 000501ba a97a
.org 0x501bc
	movs r0, #16	@ 000501bc 1020
.org 0x501be
	orrs r0, r1	@ 000501be 0843
.org 0x501c0
	b.n 0x501c8	@ 000501c0 02e0
.org 0x501c2
	ldrb r1, [r5, #10]	@ 000501c2 a97a
.org 0x501c4
	movs r0, #239	@ 000501c4 ef20
.org 0x501c6
	ands r0, r1	@ 000501c6 0840
.org 0x501c8
	strb r0, [r5, #10]	@ 000501c8 a872
.org 0x501ca
	adds r1, r2, #0	@ 000501ca 111c
.org 0x501cc
	adds r0, r5, #0	@ 000501cc 281c
.org 0x501ce
	adds r0, #76	@ 000501ce 4c30
.org 0x501d0
	strb r1, [r0, #0]	@ 000501d0 0170
.org 0x501d2
	adds r3, r5, #0	@ 000501d2 2b1c
.org 0x501d4
	adds r3, #74	@ 000501d4 4a33
.org 0x501d6
	lsls r1, r1, #4	@ 000501d6 0901
.org 0x501d8
	ldrb r2, [r3, #0]	@ 000501d8 1a78
.org 0x501da
	movs r0, #17	@ 000501da 1120
.org 0x501dc
	negs r0, r0	@ 000501dc 4042
.org 0x501de
	ands r0, r2	@ 000501de 1040
.org 0x501e0
	orrs r0, r1	@ 000501e0 0843
.org 0x501e2
	strb r0, [r3, #0]	@ 000501e2 1870
.org 0x501e4
	adds r0, r6, #0	@ 000501e4 301c
.org 0x501e6
	adds r0, #113	@ 000501e6 7130
.org 0x501e8
	ldrb r0, [r0, #0]	@ 000501e8 0078
.org 0x501ea
	lsls r0, r0, #24	@ 000501ea 0006
.org 0x501ec
	asrs r0, r0, #24	@ 000501ec 0016
.org 0x501ee
	movs r4, #0	@ 000501ee 0024
.org 0x501f0
	cmp r0, #3	@ 000501f0 0328
.org 0x501f2
	bne.n 0x501f6	@ 000501f2 00d1
.org 0x501f4
	movs r4, #1	@ 000501f4 0124
.org 0x501f6
	ldrb r1, [r5, #10]	@ 000501f6 a97a
.org 0x501f8
	movs r0, #16	@ 000501f8 1020
.org 0x501fa
	ands r0, r1	@ 000501fa 0840
.org 0x501fc
	cmp r0, #0	@ 000501fc 0028
.org 0x501fe
	beq.n 0x50220	@ 000501fe 0fd0
.org 0x50200
	ldr r3, [pc, #24]	@ 00050200 064b
.org 0x50202
	lsls r4, r4, #3	@ 00050202 e400
.org 0x50204
	movs r1, #168	@ 00050204 a821
.org 0x50206
	lsls r1, r1, #1	@ 00050206 4900
.org 0x50208
	adds r2, r6, r1	@ 00050208 7218
.org 0x5020a
	ldrb r0, [r2, #0]	@ 0005020a 1078
.org 0x5020c
	lsls r0, r0, #4	@ 0005020c 0001
.org 0x5020e
	adds r0, r4, r0	@ 0005020e 2018
.org 0x50210
	adds r0, r0, r3	@ 00050210 c018
.org 0x50212
	ldr r1, [r6, #84]	@ 00050212 716d
.org 0x50214
	ldr r0, [r0, #0]	@ 00050214 0068
.org 0x50216
	subs r1, r1, r0	@ 00050216 091a
.org 0x50218
	b.n 0x50238	@ 00050218 0ee0
.org 0x5021a
	.byte 0x00	@ 0005021a data
.org 0x5021b
	.byte 0x00	@ 0005021b data
.org 0x5021c
	.byte 0x4c,0x35,0x85,0x08	@ 0005021c data
.org 0x50220
	ldr r3, [pc, #48]	@ 00050220 0c4b
.org 0x50222
	lsls r4, r4, #3	@ 00050222 e400
.org 0x50224
	movs r0, #168	@ 00050224 a820
.org 0x50226
	lsls r0, r0, #1	@ 00050226 4000
.org 0x50228
	adds r2, r6, r0	@ 00050228 3218
.org 0x5022a
	ldrb r0, [r2, #0]	@ 0005022a 1078
.org 0x5022c
	lsls r0, r0, #4	@ 0005022c 0001
.org 0x5022e
	adds r0, r4, r0	@ 0005022e 2018
