@ FUN_080df0d8  entry 0x080df0d8  size 266
.thumb
.org 0xdf0d8
FUN_080df0d8:
	push {r4, r5, r6, r7, lr}	@ 000df0d8 f0b5
.org 0xdf0da
	adds r5, r0, #0	@ 000df0da 051c
.org 0xdf0dc
	ldr r0, [pc, #64]	@ 000df0dc 1048
.org 0xdf0de
	ldr r4, [r0, #0]	@ 000df0de 0468
.org 0xdf0e0
	ldr r6, [r5, #44]	@ 000df0e0 ee6a
.org 0xdf0e2
	adds r0, r5, #0	@ 000df0e2 281c
.org 0xdf0e4
	bl 0x1cff0	@ 000df0e4 3df784ff
.org 0xdf0e8
	ldr r0, [pc, #56]	@ 000df0e8 0e48
.org 0xdf0ea
	ldrh r1, [r0, #8]	@ 000df0ea 0189
.org 0xdf0ec
	movs r0, #8	@ 000df0ec 0820
.org 0xdf0ee
	ands r0, r1	@ 000df0ee 0840
.org 0xdf0f0
	cmp r0, #0	@ 000df0f0 0028
.org 0xdf0f2
	bne.n 0xdf104	@ 000df0f2 07d1
.org 0xdf0f4
	adds r0, r4, #0	@ 000df0f4 201c
.org 0xdf0f6
	adds r0, #180	@ 000df0f6 b430
.org 0xdf0f8
	ldr r0, [r0, #56]	@ 000df0f8 806b
.org 0xdf0fa
	cmp r0, #0	@ 000df0fa 0028
.org 0xdf0fc
	beq.n 0xdf104	@ 000df0fc 02d0
.org 0xdf0fe
	ldrb r0, [r6, #12]	@ 000df0fe 307b
.org 0xdf100
	cmp r0, #1	@ 000df100 0128
.org 0xdf102
	bls.n 0xdf12c	@ 000df102 13d9
.org 0xdf104
	ldr r1, [pc, #32]	@ 000df104 0849
.org 0xdf106
	ldrb r0, [r5, #9]	@ 000df106 687a
.org 0xdf108
	lsls r0, r0, #2	@ 000df108 8000
.org 0xdf10a
	adds r0, r0, r1	@ 000df10a 4018
.org 0xdf10c
	movs r1, #2	@ 000df10c 0221
.org 0xdf10e
	str r1, [r5, #12]	@ 000df10e e960
.org 0xdf110
	ldr r0, [r0, #0]	@ 000df110 0068
.org 0xdf112
	ldr r0, [r0, #8]	@ 000df112 8068
.org 0xdf114
	str r0, [r5, #20]	@ 000df114 6861
.org 0xdf116
	adds r0, r5, #0	@ 000df116 281c
.org 0xdf118
	bl 0xdecf8	@ 000df118 fff7eefd
.org 0xdf11c
	b.n 0xdf202	@ 000df11c 71e0
.org 0xdf11e
	.byte 0x00	@ 000df11e data
.org 0xdf11f
	.byte 0x00	@ 000df11f data
.org 0xdf120
	.byte 0xf0,0xdb,0x02,0x02	@ 000df120 data
.org 0xdf124
	.byte 0x10,0xe9,0x02,0x02	@ 000df124 data
.org 0xdf128
	.byte 0x64,0x6f,0x86,0x08	@ 000df128 data
.org 0xdf12c
	ldrb r1, [r4, #10]	@ 000df12c a17a
.org 0xdf12e
	movs r0, #16	@ 000df12e 1020
.org 0xdf130
	ands r0, r1	@ 000df130 0840
.org 0xdf132
	cmp r0, #0	@ 000df132 0028
.org 0xdf134
	beq.n 0xdf154	@ 000df134 0ed0
.org 0xdf136
	ldr r1, [pc, #24]	@ 000df136 0649
.org 0xdf138
	movs r0, #186	@ 000df138 ba20
.org 0xdf13a
	lsls r0, r0, #1	@ 000df13a 4000
.org 0xdf13c
	adds r2, r4, r0	@ 000df13c 2218
.org 0xdf13e
	ldrb r0, [r2, #0]	@ 000df13e 1078
.org 0xdf140
	lsls r0, r0, #1	@ 000df140 4000
.org 0xdf142
	adds r0, r0, r1	@ 000df142 4018
.org 0xdf144
	movs r3, #0	@ 000df144 0023
.org 0xdf146
	ldrsh r1, [r0, r3]	@ 000df146 c15e
.org 0xdf148
	ldr r0, [r4, #84]	@ 000df148 606d
.org 0xdf14a
	subs r0, r0, r1	@ 000df14a 401a
.org 0xdf14c
	b.n 0xdf16a	@ 000df14c 0de0
.org 0xdf14e
	.byte 0x00	@ 000df14e data
.org 0xdf14f
	.byte 0x00	@ 000df14f data
.org 0xdf150
	.byte 0x6c,0x87,0x86,0x08	@ 000df150 data
.org 0xdf154
	ldr r1, [pc, #84]	@ 000df154 1549
.org 0xdf156
	movs r0, #186	@ 000df156 ba20
.org 0xdf158
	lsls r0, r0, #1	@ 000df158 4000
.org 0xdf15a
	adds r2, r4, r0	@ 000df15a 2218
.org 0xdf15c
	ldrb r0, [r2, #0]	@ 000df15c 1078
.org 0xdf15e
	lsls r0, r0, #1	@ 000df15e 4000
.org 0xdf160
	adds r0, r0, r1	@ 000df160 4018
.org 0xdf162
	movs r3, #0	@ 000df162 0023
.org 0xdf164
	ldrsh r1, [r0, r3]	@ 000df164 c15e
.org 0xdf166
	ldr r0, [r4, #84]	@ 000df166 606d
.org 0xdf168
	adds r0, r0, r1	@ 000df168 4018
.org 0xdf16a
	str r0, [r5, #84]	@ 000df16a 6865
.org 0xdf16c
	adds r6, r2, #0	@ 000df16c 161c
.org 0xdf16e
	ldr r0, [r5, #84]	@ 000df16e 686d
.org 0xdf170
	ldr r1, [r5, #100]	@ 000df170 696e
.org 0xdf172
	adds r0, r0, r1	@ 000df172 4018
.org 0xdf174
	str r0, [r5, #84]	@ 000df174 6865
.org 0xdf176
	ldrb r7, [r5, #13]	@ 000df176 6f7b
.org 0xdf178
	cmp r7, #0	@ 000df178 002f
.org 0xdf17a
	bne.n 0xdf1bc	@ 000df17a 1fd1
.org 0xdf17c
	ldr r2, [r5, #88]	@ 000df17c aa6d
.org 0xdf17e
	ldr r0, [pc, #48]	@ 000df17e 0c48
.org 0xdf180
	adds r2, r2, r0	@ 000df180 1218
.org 0xdf182
	str r2, [r5, #88]	@ 000df182 aa65
.org 0xdf184
	ldr r4, [pc, #44]	@ 000df184 0b4c
.org 0xdf186
	ldr r0, [r4, #0]	@ 000df186 2068
.org 0xdf188
	ldr r1, [r0, #88]	@ 000df188 816d
.org 0xdf18a
	ldr r0, [r5, #104]	@ 000df18a a86e
.org 0xdf18c
	adds r1, r1, r0	@ 000df18c 0918
.org 0xdf18e
	ldr r3, [pc, #40]	@ 000df18e 0a4b
.org 0xdf190
	ldrb r0, [r6, #0]	@ 000df190 3078
.org 0xdf192
	lsls r0, r0, #1	@ 000df192 4000
.org 0xdf194
	adds r0, r0, r3	@ 000df194 c018
.org 0xdf196
	movs r3, #0	@ 000df196 0023
.org 0xdf198
	ldrsh r0, [r0, r3]	@ 000df198 c05e
.org 0xdf19a
	adds r1, r1, r0	@ 000df19a 0918
.org 0xdf19c
	adds r3, r4, #0	@ 000df19c 231c
.org 0xdf19e
	cmp r2, r1	@ 000df19e 8a42
.org 0xdf1a0
	bge.n 0xdf1d6	@ 000df1a0 19da
.org 0xdf1a2
	str r1, [r5, #88]	@ 000df1a2 a965
.org 0xdf1a4
	adds r0, r7, #1	@ 000df1a4 781c
.org 0xdf1a6
	strb r0, [r5, #13]	@ 000df1a6 6873
.org 0xdf1a8
	b.n 0xdf1d6	@ 000df1a8 15e0
.org 0xdf1aa
	.byte 0x00	@ 000df1aa data
.org 0xdf1ab
	.byte 0x00	@ 000df1ab data
.org 0xdf1ac
	.byte 0x6c,0x87,0x86,0x08	@ 000df1ac data
.org 0xdf1b0
	.byte 0x00,0xfc,0xff,0xff	@ 000df1b0 data
.org 0xdf1b4
	.byte 0xf0,0xdb,0x02,0x02	@ 000df1b4 data
.org 0xdf1b8
	.byte 0x78,0x87,0x86,0x08	@ 000df1b8 data
.org 0xdf1bc
	ldr r3, [pc, #72]	@ 000df1bc 124b
.org 0xdf1be
	ldr r0, [r3, #0]	@ 000df1be 1868
.org 0xdf1c0
	ldr r1, [r0, #88]	@ 000df1c0 816d
.org 0xdf1c2
	ldr r0, [r5, #104]	@ 000df1c2 a86e
.org 0xdf1c4
	adds r1, r1, r0	@ 000df1c4 0918
.org 0xdf1c6
	ldr r2, [pc, #68]	@ 000df1c6 114a
.org 0xdf1c8
	ldrb r0, [r6, #0]	@ 000df1c8 3078
.org 0xdf1ca
	lsls r0, r0, #1	@ 000df1ca 4000
.org 0xdf1cc
	adds r0, r0, r2	@ 000df1cc 8018
.org 0xdf1ce
	movs r2, #0	@ 000df1ce 0022
.org 0xdf1d0
	ldrsh r0, [r0, r2]	@ 000df1d0 805e
.org 0xdf1d2
	adds r1, r1, r0	@ 000df1d2 0918
.org 0xdf1d4
	str r1, [r5, #88]	@ 000df1d4 a965
.org 0xdf1d6
	ldr r0, [r3, #0]	@ 000df1d6 1868
.org 0xdf1d8
	bl 0x2b700	@ 000df1d8 4cf792fa
.org 0xdf1dc
	ldrb r3, [r5, #18]	@ 000df1dc ab7c
.org 0xdf1de
	adds r0, r0, r3	@ 000df1de c018
.org 0xdf1e0
	strb r0, [r5, #18]	@ 000df1e0 a874
