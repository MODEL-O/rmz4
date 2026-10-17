@ FUN_080b5134  entry 0x080b5134  size 260
.thumb
.org 0xb5134
FUN_080b5134:
	push {r4, r5, r6, lr}	@ 000b5134 70b5
.org 0xb5136
	adds r5, r0, #0	@ 000b5136 051c
.org 0xb5138
	ldrb r4, [r5, #14]	@ 000b5138 ac7b
.org 0xb513a
	cmp r4, #0	@ 000b513a 002c
.org 0xb513c
	bne.n 0xb518a	@ 000b513c 25d1
.org 0xb513e
	ldr r0, [r5, #88]	@ 000b513e a86d
.org 0xb5140
	movs r1, #240	@ 000b5140 f021
.org 0xb5142
	lsls r1, r1, #5	@ 000b5142 4901
.org 0xb5144
	adds r0, r0, r1	@ 000b5144 4018
.org 0xb5146
	str r0, [r5, #88]	@ 000b5146 a865
.org 0xb5148
	movs r1, #202	@ 000b5148 ca21
.org 0xb514a
	lsls r1, r1, #8	@ 000b514a 0902
.org 0xb514c
	adds r0, r5, #0	@ 000b514c 281c
.org 0xb514e
	bl 0x1cf00	@ 000b514e 67f7d7fe
.org 0xb5152
	ldrb r1, [r5, #10]	@ 000b5152 a97a
.org 0xb5154
	movs r0, #254	@ 000b5154 fe20
.org 0xb5156
	ands r0, r1	@ 000b5156 0840
.org 0xb5158
	strb r0, [r5, #10]	@ 000b5158 a872
.org 0xb515a
	adds r0, r5, #0	@ 000b515a 281c
.org 0xb515c
	adds r0, #140	@ 000b515c 8c30
.org 0xb515e
	str r4, [r0, #0]	@ 000b515e 0460
.org 0xb5160
	adds r0, #4	@ 000b5160 0430
.org 0xb5162
	str r4, [r0, #0]	@ 000b5162 0460
.org 0xb5164
	adds r0, #4	@ 000b5164 0430
.org 0xb5166
	strb r4, [r0, #0]	@ 000b5166 0470
.org 0xb5168
	ldrb r0, [r5, #10]	@ 000b5168 a87a
.org 0xb516a
	movs r2, #251	@ 000b516a fb22
.org 0xb516c
	ands r2, r0	@ 000b516c 0240
.org 0xb516e
	strb r2, [r5, #10]	@ 000b516e aa72
.org 0xb5170
	adds r0, r5, #0	@ 000b5170 281c
.org 0xb5172
	adds r0, #84	@ 000b5172 5430
.org 0xb5174
	movs r1, #128	@ 000b5174 8021
.org 0xb5176
	lsls r1, r1, #3	@ 000b5176 c900
.org 0xb5178
	lsrs r2, r2, #4	@ 000b5178 1209
.org 0xb517a
	movs r3, #1	@ 000b517a 0123
.org 0xb517c
	ands r2, r3	@ 000b517c 1a40
.org 0xb517e
	bl 0xe70d4	@ 000b517e 31f0a9ff
.org 0xb5182
	str r0, [r5, #44]	@ 000b5182 e862
.org 0xb5184
	ldrb r0, [r5, #14]	@ 000b5184 a87b
.org 0xb5186
	adds r0, #1	@ 000b5186 0130
.org 0xb5188
	strb r0, [r5, #14]	@ 000b5188 a873
.org 0xb518a
	ldr r0, [r5, #84]	@ 000b518a 686d
.org 0xb518c
	ldr r1, [r5, #88]	@ 000b518c a96d
.org 0xb518e
	bl 0x7c7c	@ 000b518e 52f775fd
.org 0xb5192
	lsls r0, r0, #16	@ 000b5192 0004
.org 0xb5194
	lsrs r6, r0, #16	@ 000b5194 060c
.org 0xb5196
	cmp r6, #0	@ 000b5196 002e
.org 0xb5198
	bne.n 0xb51fc	@ 000b5198 30d1
.org 0xb519a
	ldr r2, [r5, #44]	@ 000b519a ea6a
.org 0xb519c
	ldrb r1, [r2, #10]	@ 000b519c 917a
.org 0xb519e
	movs r0, #254	@ 000b519e fe20
.org 0xb51a0
	ands r0, r1	@ 000b51a0 0840
.org 0xb51a2
	movs r1, #253	@ 000b51a2 fd21
.org 0xb51a4
	ands r0, r1	@ 000b51a4 0840
.org 0xb51a6
	strb r0, [r2, #10]	@ 000b51a6 9072
.org 0xb51a8
	ldr r1, [pc, #68]	@ 000b51a8 1149
.org 0xb51aa
	ldrb r0, [r2, #9]	@ 000b51aa 507a
.org 0xb51ac
	lsls r0, r0, #2	@ 000b51ac 8000
.org 0xb51ae
	adds r0, r0, r1	@ 000b51ae 4018
.org 0xb51b0
	movs r1, #3	@ 000b51b0 0321
.org 0xb51b2
	str r1, [r2, #12]	@ 000b51b2 d160
.org 0xb51b4
	ldr r0, [r0, #0]	@ 000b51b4 0068
.org 0xb51b6
	ldr r0, [r0, #12]	@ 000b51b6 c068
.org 0xb51b8
	str r0, [r2, #20]	@ 000b51b8 5061
.org 0xb51ba
	str r6, [r5, #44]	@ 000b51ba ee62
.org 0xb51bc
	ldr r0, [r5, #84]	@ 000b51bc 686d
.org 0xb51be
	ldr r1, [r5, #88]	@ 000b51be a96d
.org 0xb51c0
	bl 0x8534	@ 000b51c0 53f7b8f9
.org 0xb51c4
	str r0, [r5, #88]	@ 000b51c4 a865
.org 0xb51c6
	ldrb r0, [r5, #10]	@ 000b51c6 a87a
.org 0xb51c8
	movs r1, #1	@ 000b51c8 0121
.org 0xb51ca
	orrs r0, r1	@ 000b51ca 0843
.org 0xb51cc
	movs r1, #4	@ 000b51cc 0421
.org 0xb51ce
	orrs r0, r1	@ 000b51ce 0843
.org 0xb51d0
	strb r0, [r5, #10]	@ 000b51d0 a872
.org 0xb51d2
	adds r4, r5, #0	@ 000b51d2 2c1c
.org 0xb51d4
	adds r4, #116	@ 000b51d4 7434
.org 0xb51d6
	ldr r1, [pc, #28]	@ 000b51d6 0749
.org 0xb51d8
	adds r2, r5, #0	@ 000b51d8 2a1c
.org 0xb51da
	adds r2, #84	@ 000b51da 5432
.org 0xb51dc
	adds r0, r4, #0	@ 000b51dc 201c
.org 0xb51de
	movs r3, #8	@ 000b51de 0823
.org 0xb51e0
	bl 0x5760	@ 000b51e0 50f7befa
.org 0xb51e4
	str r5, [r4, #44]	@ 000b51e4 e562
.org 0xb51e6
	ldr r0, [pc, #16]	@ 000b51e6 0448
.org 0xb51e8
	str r0, [r4, #36]	@ 000b51e8 6062
.org 0xb51ea
	strb r6, [r5, #13]	@ 000b51ea 6e73
.org 0xb51ec
	b.n 0xb524a	@ 000b51ec 2de0
.org 0xb51ee
	.byte 0x00	@ 000b51ee data
.org 0xb51ef
	.byte 0x00	@ 000b51ef data
.org 0xb51f0
	.byte 0x64,0x6f,0x86,0x08	@ 000b51f0 data
.org 0xb51f4
	.byte 0xa8,0x39,0x86,0x08	@ 000b51f4 data
.org 0xb51f8
	.byte 0x55,0x4e,0x0b,0x08	@ 000b51f8 data
.org 0xb51fc
	ldr r0, [pc, #28]	@ 000b51fc 0748
.org 0xb51fe
	ldr r2, [r0, #0]	@ 000b51fe 0268
.org 0xb5200
	ldr r1, [r2, #88]	@ 000b5200 916d
.org 0xb5202
	ldr r0, [r5, #88]	@ 000b5202 a86d
.org 0xb5204
	cmp r1, r0	@ 000b5204 8142
.org 0xb5206
	bge.n 0xb524a	@ 000b5206 20da
.org 0xb5208
	ldr r0, [r2, #84]	@ 000b5208 506d
.org 0xb520a
	ldr r1, [r5, #84]	@ 000b520a 696d
.org 0xb520c
	subs r2, r0, r1	@ 000b520c 421a
.org 0xb520e
	cmp r2, #0	@ 000b520e 002a
.org 0xb5210
	blt.n 0xb5224	@ 000b5210 08db
.org 0xb5212
	ldr r0, [pc, #12]	@ 000b5212 0348
.org 0xb5214
	cmp r2, r0	@ 000b5214 8242
.org 0xb5216
	ble.n 0xb522c	@ 000b5216 09dd
.org 0xb5218
	b.n 0xb524a	@ 000b5218 17e0
.org 0xb521a
	.byte 0x00	@ 000b521a data
.org 0xb521b
	.byte 0x00	@ 000b521b data
.org 0xb521c
	.byte 0xf0,0xdb,0x02,0x02	@ 000b521c data
.org 0xb5220
	.byte 0xff,0x3f,0x00,0x00	@ 000b5220 data
.org 0xb5224
	subs r1, r1, r0	@ 000b5224 091a
.org 0xb5226
	ldr r0, [pc, #40]	@ 000b5226 0a48
.org 0xb5228
	cmp r1, r0	@ 000b5228 8142
.org 0xb522a
	bgt.n 0xb524a	@ 000b522a 0edc
.org 0xb522c
	ldr r2, [r5, #44]	@ 000b522c ea6a
.org 0xb522e
	ldr r1, [pc, #36]	@ 000b522e 0949
.org 0xb5230
	ldrb r0, [r2, #9]	@ 000b5230 507a
.org 0xb5232
	lsls r0, r0, #2	@ 000b5232 8000
.org 0xb5234
	adds r0, r0, r1	@ 000b5234 4018
.org 0xb5236
	movs r1, #2	@ 000b5236 0221
