@ FUN_08105154  entry 0x08105154  size 216
.thumb
.org 0x105154
FUN_08105154:
	push {r4, r5, r6, lr}	@ 00105154 70b5
.org 0x105156
	adds r5, r0, #0	@ 00105156 051c
.org 0x105158
	bl 0x1cc9c	@ 00105158 17f7a0fd
.org 0x10515c
	ldrb r1, [r5, #10]	@ 0010515c a97a
.org 0x10515e
	movs r0, #1	@ 0010515e 0120
.org 0x105160
	orrs r0, r1	@ 00105160 0843
.org 0x105162
	movs r1, #2	@ 00105162 0221
.org 0x105164
	orrs r0, r1	@ 00105164 0843
.org 0x105166
	movs r4, #0	@ 00105166 0024
.org 0x105168
	movs r1, #239	@ 00105168 ef21
.org 0x10516a
	ands r0, r1	@ 0010516a 0840
.org 0x10516c
	movs r6, #0	@ 0010516c 0026
.org 0x10516e
	strb r0, [r5, #10]	@ 0010516e a872
.org 0x105170
	movs r2, #1	@ 00105170 0122
.org 0x105172
	adds r0, r5, #0	@ 00105172 281c
.org 0x105174
	adds r0, #76	@ 00105174 4c30
.org 0x105176
	strb r6, [r0, #0]	@ 00105176 0670
.org 0x105178
	adds r3, r5, #0	@ 00105178 2b1c
.org 0x10517a
	adds r3, #74	@ 0010517a 4a33
.org 0x10517c
	ldrb r1, [r3, #0]	@ 0010517c 1978
.org 0x10517e
	movs r0, #17	@ 0010517e 1120
.org 0x105180
	negs r0, r0	@ 00105180 4042
.org 0x105182
	ands r0, r1	@ 00105182 0840
.org 0x105184
	strb r0, [r3, #0]	@ 00105184 1870
.org 0x105186
	ldr r1, [pc, #52]	@ 00105186 0d49
.org 0x105188
	ldrb r0, [r5, #9]	@ 00105188 687a
.org 0x10518a
	lsls r0, r0, #2	@ 0010518a 8000
.org 0x10518c
	adds r0, r0, r1	@ 0010518c 4018
.org 0x10518e
	str r2, [r5, #12]	@ 0010518e ea60
.org 0x105190
	ldr r0, [r0, #0]	@ 00105190 0068
.org 0x105192
	ldr r0, [r0, #4]	@ 00105192 4068
.org 0x105194
	str r0, [r5, #20]	@ 00105194 6861
.org 0x105196
	ldrb r0, [r5, #17]	@ 00105196 687c
.org 0x105198
	cmp r0, #4	@ 00105198 0428
.org 0x10519a
	beq.n 0x1051c4	@ 0010519a 13d0
.org 0x10519c
	ldrb r0, [r5, #10]	@ 0010519c a87a
.org 0x10519e
	movs r1, #4	@ 0010519e 0421
.org 0x1051a0
	orrs r0, r1	@ 001051a0 0843
.org 0x1051a2
	strb r0, [r5, #10]	@ 001051a2 a872
.org 0x1051a4
	adds r4, r5, #0	@ 001051a4 2c1c
.org 0x1051a6
	adds r4, #116	@ 001051a6 7434
.org 0x1051a8
	ldr r1, [pc, #20]	@ 001051a8 0549
.org 0x1051aa
	adds r2, r5, #0	@ 001051aa 2a1c
.org 0x1051ac
	adds r2, #84	@ 001051ac 5432
.org 0x1051ae
	adds r0, r4, #0	@ 001051ae 201c
.org 0x1051b0
	movs r3, #128	@ 001051b0 8023
.org 0x1051b2
	bl 0x5760	@ 001051b2 00f7d5fa
.org 0x1051b6
	str r5, [r4, #44]	@ 001051b6 e562
.org 0x1051b8
	str r6, [r4, #36]	@ 001051b8 6662
.org 0x1051ba
	b.n 0x1051e4	@ 001051ba 13e0
.org 0x1051bc
	.byte 0xfc,0x92,0x86,0x08	@ 001051bc data
.org 0x1051c0
	.byte 0x9c,0xc1,0x86,0x08	@ 001051c0 data
.org 0x1051c4
	ldrb r0, [r5, #10]	@ 001051c4 a87a
.org 0x1051c6
	movs r1, #4	@ 001051c6 0421
.org 0x1051c8
	orrs r0, r1	@ 001051c8 0843
.org 0x1051ca
	strb r0, [r5, #10]	@ 001051ca a872
.org 0x1051cc
	adds r4, r5, #0	@ 001051cc 2c1c
.org 0x1051ce
	adds r4, #116	@ 001051ce 7434
.org 0x1051d0
	ldr r1, [pc, #96]	@ 001051d0 1849
.org 0x1051d2
	adds r2, r5, #0	@ 001051d2 2a1c
.org 0x1051d4
	adds r2, #84	@ 001051d4 5432
.org 0x1051d6
	adds r0, r4, #0	@ 001051d6 201c
.org 0x1051d8
	movs r3, #1	@ 001051d8 0123
.org 0x1051da
	bl 0x5760	@ 001051da 00f7c1fa
.org 0x1051de
	str r5, [r4, #44]	@ 001051de e562
.org 0x1051e0
	movs r0, #0	@ 001051e0 0020
.org 0x1051e2
	str r0, [r4, #36]	@ 001051e2 6062
.org 0x1051e4
	ldr r0, [pc, #80]	@ 001051e4 1448
.org 0x1051e6
	str r0, [r4, #36]	@ 001051e6 6062
.org 0x1051e8
	adds r0, r5, #0	@ 001051e8 281c
.org 0x1051ea
	adds r0, #180	@ 001051ea b430
.org 0x1051ec
	movs r4, #0	@ 001051ec 0024
.org 0x1051ee
	strb r4, [r0, #0]	@ 001051ee 0470
.org 0x1051f0
	adds r0, #1	@ 001051f0 0130
.org 0x1051f2
	strb r4, [r0, #0]	@ 001051f2 0470
.org 0x1051f4
	adds r0, #1	@ 001051f4 0130
.org 0x1051f6
	strb r4, [r0, #0]	@ 001051f6 0470
.org 0x1051f8
	ldr r1, [pc, #64]	@ 001051f8 1049
.org 0x1051fa
	ldrb r0, [r5, #16]	@ 001051fa 287c
.org 0x1051fc
	lsls r0, r0, #2	@ 001051fc 8000
.org 0x1051fe
	adds r0, r0, r1	@ 001051fe 4018
.org 0x105200
	ldr r1, [r0, #0]	@ 00105200 0168
.org 0x105202
	lsls r1, r1, #8	@ 00105202 0902
.org 0x105204
	ldr r0, [r5, #84]	@ 00105204 686d
.org 0x105206
	adds r0, r0, r1	@ 00105206 4018
.org 0x105208
	str r0, [r5, #84]	@ 00105208 6865
.org 0x10520a
	ldr r1, [r5, #88]	@ 0010520a a96d
.org 0x10520c
	bl 0x8534	@ 0010520c 03f792f9
.org 0x105210
	ldr r1, [pc, #44]	@ 00105210 0b49
.org 0x105212
	adds r0, r0, r1	@ 00105212 4018
.org 0x105214
	str r0, [r5, #88]	@ 00105214 a865
.org 0x105216
	str r4, [r5, #96]	@ 00105216 2c66
.org 0x105218
	ldr r1, [pc, #40]	@ 00105218 0a49
.org 0x10521a
	ldrb r0, [r5, #17]	@ 0010521a 687c
.org 0x10521c
	lsls r0, r0, #1	@ 0010521c 4000
.org 0x10521e
	adds r0, r0, r1	@ 0010521e 4018
.org 0x105220
	ldrh r1, [r0, #0]	@ 00105220 0188
.org 0x105222
	adds r0, r5, #0	@ 00105222 281c
.org 0x105224
	bl 0x1cf00	@ 00105224 17f76cfe
.org 0x105228
	adds r0, r5, #0	@ 00105228 281c
.org 0x10522a
	bl 0x105248	@ 0010522a 00f00df8
