@ FUN_080bf088  entry 0x080bf088  size 336
.thumb
.org 0xbf088
FUN_080bf088:
	push {r4, r5, r6, r7, lr}	@ 000bf088 f0b5
.org 0xbf08a
	adds r5, r0, #0	@ 000bf08a 051c
.org 0xbf08c
	movs r7, #128	@ 000bf08c 8027
.org 0xbf08e
	lsls r7, r7, #1	@ 000bf08e 7f00
.org 0xbf090
	ldrb r0, [r5, #14]	@ 000bf090 a87b
.org 0xbf092
	cmp r0, #0	@ 000bf092 0028
.org 0xbf094
	beq.n 0xbf09c	@ 000bf094 02d0
.org 0xbf096
	cmp r0, #1	@ 000bf096 0128
.org 0xbf098
	beq.n 0xbf152	@ 000bf098 5bd0
.org 0xbf09a
	b.n 0xbf1d2	@ 000bf09a 9ae0
.org 0xbf09c
	ldr r0, [r5, #84]	@ 000bf09c 686d
.org 0xbf09e
	ldr r1, [r5, #88]	@ 000bf09e a96d
.org 0xbf0a0
	bl 0x8534	@ 000bf0a0 49f748fa
.org 0xbf0a4
	ldr r1, [r5, #88]	@ 000bf0a4 a96d
.org 0xbf0a6
	subs r0, r1, r0	@ 000bf0a6 081a
.org 0xbf0a8
	cmp r0, #0	@ 000bf0a8 0028
.org 0xbf0aa
	ble.n 0xbf0b8	@ 000bf0aa 05dd
.org 0xbf0ac
	ldr r0, [r5, #84]	@ 000bf0ac 686d
.org 0xbf0ae
	bl 0x8534	@ 000bf0ae 49f741fa
.org 0xbf0b2
	ldr r1, [r5, #88]	@ 000bf0b2 a96d
.org 0xbf0b4
	subs r6, r1, r0	@ 000bf0b4 0e1a
.org 0xbf0b6
	b.n 0xbf0c2	@ 000bf0b6 04e0
.org 0xbf0b8
	ldr r0, [r5, #84]	@ 000bf0b8 686d
.org 0xbf0ba
	bl 0x8534	@ 000bf0ba 49f73bfa
.org 0xbf0be
	ldr r1, [r5, #88]	@ 000bf0be a96d
.org 0xbf0c0
	subs r6, r0, r1	@ 000bf0c0 461a
.org 0xbf0c2
	ldr r0, [r5, #84]	@ 000bf0c2 686d
.org 0xbf0c4
	ldr r1, [r5, #88]	@ 000bf0c4 a96d
.org 0xbf0c6
	bl 0x8868	@ 000bf0c6 49f7cffb
.org 0xbf0ca
	ldr r2, [r5, #84]	@ 000bf0ca 6a6d
.org 0xbf0cc
	subs r0, r2, r0	@ 000bf0cc 101a
.org 0xbf0ce
	cmp r0, #0	@ 000bf0ce 0028
.org 0xbf0d0
	ble.n 0xbf0e0	@ 000bf0d0 06dd
.org 0xbf0d2
	ldr r1, [r5, #88]	@ 000bf0d2 a96d
.org 0xbf0d4
	adds r0, r2, #0	@ 000bf0d4 101c
.org 0xbf0d6
	bl 0x8868	@ 000bf0d6 49f7c7fb
.org 0xbf0da
	ldr r1, [r5, #84]	@ 000bf0da 696d
.org 0xbf0dc
	subs r4, r1, r0	@ 000bf0dc 0c1a
.org 0xbf0de
	b.n 0xbf0ec	@ 000bf0de 05e0
.org 0xbf0e0
	ldr r1, [r5, #88]	@ 000bf0e0 a96d
.org 0xbf0e2
	adds r0, r2, #0	@ 000bf0e2 101c
.org 0xbf0e4
	bl 0x8868	@ 000bf0e4 49f7c0fb
.org 0xbf0e8
	ldr r1, [r5, #84]	@ 000bf0e8 696d
.org 0xbf0ea
	subs r4, r0, r1	@ 000bf0ea 441a
.org 0xbf0ec
	ldr r0, [r5, #84]	@ 000bf0ec 686d
.org 0xbf0ee
	ldr r1, [r5, #88]	@ 000bf0ee a96d
.org 0xbf0f0
	bl 0x8988	@ 000bf0f0 49f74afc
.org 0xbf0f4
	ldr r2, [r5, #84]	@ 000bf0f4 6a6d
.org 0xbf0f6
	subs r0, r2, r0	@ 000bf0f6 101a
.org 0xbf0f8
	cmp r0, #0	@ 000bf0f8 0028
.org 0xbf0fa
	ble.n 0xbf10a	@ 000bf0fa 06dd
.org 0xbf0fc
	ldr r1, [r5, #88]	@ 000bf0fc a96d
.org 0xbf0fe
	adds r0, r2, #0	@ 000bf0fe 101c
.org 0xbf100
	bl 0x8988	@ 000bf100 49f742fc
.org 0xbf104
	ldr r1, [r5, #84]	@ 000bf104 696d
.org 0xbf106
	subs r1, r1, r0	@ 000bf106 091a
.org 0xbf108
	b.n 0xbf116	@ 000bf108 05e0
.org 0xbf10a
	ldr r1, [r5, #88]	@ 000bf10a a96d
.org 0xbf10c
	adds r0, r2, #0	@ 000bf10c 101c
.org 0xbf10e
	bl 0x8988	@ 000bf10e 49f73bfc
.org 0xbf112
	ldr r1, [r5, #84]	@ 000bf112 696d
.org 0xbf114
	subs r1, r0, r1	@ 000bf114 411a
.org 0xbf116
	adds r0, r6, #0	@ 000bf116 301c
.org 0xbf118
	movs r2, #0	@ 000bf118 0022
.org 0xbf11a
	cmp r0, r1	@ 000bf11a 8842
.org 0xbf11c
	ble.n 0xbf122	@ 000bf11c 01dd
.org 0xbf11e
	adds r0, r1, #0	@ 000bf11e 081c
.org 0xbf120
	movs r2, #3	@ 000bf120 0322
.org 0xbf122
	cmp r0, r4	@ 000bf122 a042
.org 0xbf124
	ble.n 0xbf128	@ 000bf124 00dd
.org 0xbf126
	movs r2, #2	@ 000bf126 0222
.org 0xbf128
	adds r0, r5, #0	@ 000bf128 281c
.org 0xbf12a
	adds r0, #180	@ 000bf12a b430
.org 0xbf12c
	movs r4, #0	@ 000bf12c 0024
.org 0xbf12e
	strb r2, [r0, #0]	@ 000bf12e 0270
.org 0xbf130
	ldr r1, [pc, #164]	@ 000bf130 2949
.org 0xbf132
	adds r0, r5, #0	@ 000bf132 281c
.org 0xbf134
	bl 0x1cf00	@ 000bf134 5df7e4fe
.org 0xbf138
	adds r0, r5, #0	@ 000bf138 281c
.org 0xbf13a
	adds r0, #92	@ 000bf13a 5c30
.org 0xbf13c
	str r4, [r0, #4]	@ 000bf13c 4460
.org 0xbf13e
	str r4, [r5, #92]	@ 000bf13e ec65
.org 0xbf140
	ldrb r0, [r5, #17]	@ 000bf140 687c
.org 0xbf142
	movs r1, #32	@ 000bf142 2021
.org 0xbf144
	cmp r0, #0	@ 000bf144 0028
.org 0xbf146
	beq.n 0xbf14a	@ 000bf146 00d0
.org 0xbf148
	movs r1, #64	@ 000bf148 4021
.org 0xbf14a
	strb r1, [r5, #18]	@ 000bf14a a974
.org 0xbf14c
	ldrb r0, [r5, #14]	@ 000bf14c a87b
.org 0xbf14e
	adds r0, #1	@ 000bf14e 0130
.org 0xbf150
	strb r0, [r5, #14]	@ 000bf150 a873
.org 0xbf152
	ldrb r0, [r5, #18]	@ 000bf152 a87c
.org 0xbf154
	cmp r0, #15	@ 000bf154 0f28
.org 0xbf156
	bhi.n 0xbf198	@ 000bf156 1fd8
.org 0xbf158
	cmp r0, #15	@ 000bf158 0f28
.org 0xbf15a
	bne.n 0xbf16a	@ 000bf15a 06d1
.org 0xbf15c
	adds r0, r5, #0	@ 000bf15c 281c
.org 0xbf15e
	bl 0x1cdbc	@ 000bf15e 5df72dfe
.org 0xbf162
	ldr r1, [pc, #120]	@ 000bf162 1e49
.org 0xbf164
	adds r0, r5, #0	@ 000bf164 281c
.org 0xbf166
	bl 0x1cf00	@ 000bf166 5df7cbfe
.org 0xbf16a
	ldrb r0, [r5, #18]	@ 000bf16a a87c
.org 0xbf16c
	muls r0, r7	@ 000bf16c 7843
.org 0xbf16e
	cmp r0, #0	@ 000bf16e 0028
.org 0xbf170
	bge.n 0xbf174	@ 000bf170 00da
.org 0xbf172
	adds r0, #15	@ 000bf172 0f30
.org 0xbf174
	asrs r7, r0, #4	@ 000bf174 0711
.org 0xbf176
	adds r0, r5, #0	@ 000bf176 281c
.org 0xbf178
	adds r0, #80	@ 000bf178 5030
.org 0xbf17a
	strh r7, [r0, #0]	@ 000bf17a 0780
.org 0xbf17c
	adds r0, #2	@ 000bf17c 0230
.org 0xbf17e
	strh r7, [r0, #0]	@ 000bf17e 0780
.org 0xbf180
	adds r0, #34	@ 000bf180 2230
.org 0xbf182
	ldrb r1, [r5, #18]	@ 000bf182 a97c
.org 0xbf184
	lsrs r1, r1, #2	@ 000bf184 8908
.org 0xbf186
	movs r2, #3	@ 000bf186 0322
.org 0xbf188
	subs r2, r2, r1	@ 000bf188 521a
.org 0xbf18a
	lsls r1, r2, #1	@ 000bf18a 5100
.org 0xbf18c
	adds r1, r1, r2	@ 000bf18c 8918
.org 0xbf18e
	lsls r1, r1, #3	@ 000bf18e c900
.org 0xbf190
	ldr r2, [pc, #76]	@ 000bf190 134a
.org 0xbf192
	adds r1, r1, r2	@ 000bf192 8918
.org 0xbf194
	bl 0x5784	@ 000bf194 46f7f6fa
.org 0xbf198
	adds r0, r5, #0	@ 000bf198 281c
.org 0xbf19a
	bl 0x1cff0	@ 000bf19a 5df729ff
.org 0xbf19e
	adds r0, r5, #0	@ 000bf19e 281c
.org 0xbf1a0
	bl 0xbf2ec	@ 000bf1a0 00f0a4f8
.org 0xbf1a4
	ldr r1, [r5, #92]	@ 000bf1a4 e96d
.org 0xbf1a6
	ldr r2, [r5, #96]	@ 000bf1a6 2a6e
.org 0xbf1a8
	adds r0, r5, #0	@ 000bf1a8 281c
.org 0xbf1aa
	bl 0xbf494	@ 000bf1aa 00f073f9
.org 0xbf1ae
	ldrb r0, [r5, #18]	@ 000bf1ae a87c
.org 0xbf1b0
	subs r0, #1	@ 000bf1b0 0138
.org 0xbf1b2
	strb r0, [r5, #18]	@ 000bf1b2 a874
.org 0xbf1b4
	lsls r0, r0, #24	@ 000bf1b4 0006
.org 0xbf1b6
	cmp r0, #0	@ 000bf1b6 0028
.org 0xbf1b8
	bne.n 0xbf1d2	@ 000bf1b8 0bd1
.org 0xbf1ba
	ldr r1, [pc, #40]	@ 000bf1ba 0a49
.org 0xbf1bc
	ldrb r0, [r5, #9]	@ 000bf1bc 687a
.org 0xbf1be
	lsls r0, r0, #2	@ 000bf1be 8000
.org 0xbf1c0
	adds r0, r0, r1	@ 000bf1c0 4018
.org 0xbf1c2
	movs r1, #2	@ 000bf1c2 0221
.org 0xbf1c4
	str r1, [r5, #12]	@ 000bf1c4 e960
.org 0xbf1c6
	ldr r0, [r0, #0]	@ 000bf1c6 0068
.org 0xbf1c8
	ldr r0, [r0, #8]	@ 000bf1c8 8068
.org 0xbf1ca
	str r0, [r5, #20]	@ 000bf1ca 6861
.org 0xbf1cc
	adds r0, r5, #0	@ 000bf1cc 281c
.org 0xbf1ce
	bl 0xbefc0	@ 000bf1ce fff7f7fe
.org 0xbf1d2
	pop {r4, r5, r6, r7}	@ 000bf1d2 f0bc
.org 0xbf1d4
	pop {r0}	@ 000bf1d4 01bc
.org 0xbf1d6
	bx r0	@ 000bf1d6 0047
