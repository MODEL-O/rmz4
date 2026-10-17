@ FUN_080d8124  entry 0x080d8124  size 88
.thumb
.org 0xd8124
FUN_080d8124:
	push {r4, r5, r6, r7, lr}	@ 000d8124 f0b5
.org 0xd8126
	adds r6, r0, #0	@ 000d8126 061c
.org 0xd8128
	adds r7, r1, #0	@ 000d8128 0f1c
.org 0xd812a
	lsls r2, r2, #24	@ 000d812a 1206
.org 0xd812c
	lsrs r5, r2, #24	@ 000d812c 150e
.org 0xd812e
	lsls r3, r3, #24	@ 000d812e 1b06
.org 0xd8130
	lsrs r4, r3, #24	@ 000d8130 1c0e
.org 0xd8132
	ldr r0, [pc, #72]	@ 000d8132 1248
.org 0xd8134
	ldr r0, [r0, #0]	@ 000d8134 0068
.org 0xd8136
	bl 0x5500	@ 000d8136 2df7e3f9
.org 0xd813a
	adds r3, r0, #0	@ 000d813a 031c
.org 0xd813c
	cmp r3, #0	@ 000d813c 002b
.org 0xd813e
	beq.n 0xd8174	@ 000d813e 19d0
.org 0xd8140
	adds r1, r3, #0	@ 000d8140 191c
.org 0xd8142
	adds r1, #37	@ 000d8142 2531
.org 0xd8144
	movs r2, #0	@ 000d8144 0022
.org 0xd8146
	movs r0, #1	@ 000d8146 0120
.org 0xd8148
	strb r0, [r1, #0]	@ 000d8148 0870
.org 0xd814a
	ldr r1, [pc, #52]	@ 000d814a 0d49
.org 0xd814c
	movs r0, #24	@ 000d814c 1820
.org 0xd814e
	strb r0, [r3, #9]	@ 000d814e 5872
.org 0xd8150
	ldr r0, [r1, #96]	@ 000d8150 086e
.org 0xd8152
	ldr r0, [r0, #0]	@ 000d8152 0068
.org 0xd8154
	str r0, [r3, #20]	@ 000d8154 5861
.org 0xd8156
	movs r0, #0	@ 000d8156 0020
.org 0xd8158
	strh r2, [r3, #32]	@ 000d8158 1a84
.org 0xd815a
	adds r1, r3, #0	@ 000d815a 191c
.org 0xd815c
	adds r1, #34	@ 000d815c 2231
.org 0xd815e
	strb r0, [r1, #0]	@ 000d815e 0870
.org 0xd8160
	ldr r0, [r6, #0]	@ 000d8160 3068
.org 0xd8162
	ldr r1, [r6, #4]	@ 000d8162 7168
.org 0xd8164
	str r0, [r3, #84]	@ 000d8164 5865
.org 0xd8166
	str r1, [r3, #88]	@ 000d8166 9965
.org 0xd8168
	ldr r0, [r7, #0]	@ 000d8168 3868
.org 0xd816a
	ldr r1, [r7, #4]	@ 000d816a 7968
.org 0xd816c
	str r0, [r3, #92]	@ 000d816c d865
.org 0xd816e
	str r1, [r3, #96]	@ 000d816e 1966
.org 0xd8170
	strb r5, [r3, #16]	@ 000d8170 1d74
.org 0xd8172
	strb r4, [r3, #17]	@ 000d8172 5c74
.org 0xd8174
	adds r0, r3, #0	@ 000d8174 181c
.org 0xd8176
	pop {r4, r5, r6, r7}	@ 000d8176 f0bc
.org 0xd8178
	pop {r1}	@ 000d8178 02bc
.org 0xd817a
	bx r1	@ 000d817a 0847
