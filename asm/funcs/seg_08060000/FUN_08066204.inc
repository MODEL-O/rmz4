@ FUN_08066204  entry 0x08066204  size 238
.thumb
.org 0x66204
FUN_08066204:
	push {r4, r5, r6, r7, lr}	@ 00066204 f0b5
.org 0x66206
	mov r7, sl	@ 00066206 5746
.org 0x66208
	mov r6, r9	@ 00066208 4e46
.org 0x6620a
	mov r5, r8	@ 0006620a 4546
.org 0x6620c
	push {r5, r6, r7}	@ 0006620c e0b4
.org 0x6620e
	sub sp, #32	@ 0006620e 88b0
.org 0x66210
	ldr r1, [pc, #176]	@ 00066210 2c49
.org 0x66212
	mov r0, sp	@ 00066212 6846
.org 0x66214
	movs r2, #8	@ 00066214 0822
.org 0x66216
	bl 0x129258	@ 00066216 c3f01ff8
.org 0x6621a
	ldr r0, [pc, #172]	@ 0006621a 2b48
.org 0x6621c
	ldr r2, [r0, #0]	@ 0006621c 0268
.org 0x6621e
	ldrb r1, [r2, #10]	@ 0006621e 917a
.org 0x66220
	lsrs r1, r1, #4	@ 00066220 0909
.org 0x66222
	movs r0, #1	@ 00066222 0120
.org 0x66224
	ands r1, r0	@ 00066224 0140
.org 0x66226
	ldr r0, [r2, #84]	@ 00066226 506d
.org 0x66228
	str r0, [sp, #8]	@ 00066228 0290
.org 0x6622a
	ldr r0, [r2, #88]	@ 0006622a 906d
.org 0x6622c
	ldr r2, [pc, #156]	@ 0006622c 274a
.org 0x6622e
	adds r0, r0, r2	@ 0006622e 8018
.org 0x66230
	str r0, [sp, #12]	@ 00066230 0390
.org 0x66232
	movs r3, #0	@ 00066232 0023
.org 0x66234
	ldr r0, [pc, #152]	@ 00066234 2648
.org 0x66236
	mov sl, r0	@ 00066236 8246
.org 0x66238
	mov r9, r2	@ 00066238 9146
.org 0x6623a
	lsls r1, r1, #1	@ 0006623a 4900
.org 0x6623c
	subs r1, #1	@ 0006623c 0139
.org 0x6623e
	str r1, [sp, #24]	@ 0006623e 0691
.org 0x66240
	lsls r1, r3, #3	@ 00066240 d900
.org 0x66242
	mov r2, sl	@ 00066242 5246
.org 0x66244
	adds r0, r1, r2	@ 00066244 8818
.org 0x66246
	ldr r0, [r0, #0]	@ 00066246 0068
.org 0x66248
	ldr r2, [sp, #24]	@ 00066248 069a
.org 0x6624a
	muls r0, r2	@ 0006624a 5043
.org 0x6624c
	ldr r2, [sp, #8]	@ 0006624c 029a
.org 0x6624e
	adds r0, r0, r2	@ 0006624e 8018
.org 0x66250
	add r0, r9	@ 00066250 4844
.org 0x66252
	str r0, [sp, #16]	@ 00066252 0490
.org 0x66254
	ldr r0, [pc, #124]	@ 00066254 1f48
.org 0x66256
	adds r1, r1, r0	@ 00066256 0918
.org 0x66258
	ldr r0, [r1, #0]	@ 00066258 0868
.org 0x6625a
	ldr r1, [sp, #12]	@ 0006625a 0399
.org 0x6625c
	adds r0, r0, r1	@ 0006625c 4018
.org 0x6625e
	add r0, r9	@ 0006625e 4844
.org 0x66260
	str r0, [sp, #20]	@ 00066260 0590
.org 0x66262
	movs r7, #0	@ 00066262 0027
.org 0x66264
	adds r2, r3, #1	@ 00066264 5a1c
.org 0x66266
	mov r8, r2	@ 00066266 9046
.org 0x66268
	movs r6, #0	@ 00066268 0026
.org 0x6626a
	ldr r4, [sp, #16]	@ 0006626a 049c
.org 0x6626c
	ldr r5, [sp, #20]	@ 0006626c 059d
.org 0x6626e
	cmp r7, #0	@ 0006626e 002f
.org 0x66270
	beq.n 0x66278	@ 00066270 02d0
.org 0x66272
	subs r1, r4, #1	@ 00066272 611e
.org 0x66274
	lsls r0, r7, #12	@ 00066274 3803
.org 0x66276
	adds r4, r1, r0	@ 00066276 0c18
.org 0x66278
	cmp r6, #0	@ 00066278 002e
.org 0x6627a
	beq.n 0x66282	@ 0006627a 02d0
.org 0x6627c
	subs r1, r5, #1	@ 0006627c 691e
.org 0x6627e
	lsls r0, r6, #12	@ 0006627e 3003
.org 0x66280
	adds r5, r1, r0	@ 00066280 0d18
.org 0x66282
	adds r0, r4, #0	@ 00066282 201c
.org 0x66284
	adds r1, r5, #0	@ 00066284 291c
.org 0x66286
	str r3, [sp, #28]	@ 00066286 0793
.org 0x66288
	bl 0x7c7c	@ 00066288 a1f7f8fc
.org 0x6628c
	lsls r0, r0, #16	@ 0006628c 0004
.org 0x6628e
	ldr r3, [sp, #28]	@ 0006628e 079b
.org 0x66290
	cmp r0, #0	@ 00066290 0028
.org 0x66292
	bne.n 0x662ba	@ 00066292 12d1
.org 0x66294
	ldr r2, [pc, #64]	@ 00066294 104a
.org 0x66296
	ldr r0, [r2, #56]	@ 00066296 906b
.org 0x66298
	subs r0, r0, r4	@ 00066298 001b
.org 0x6629a
	movs r1, #208	@ 0006629a d021
.org 0x6629c
	lsls r1, r1, #7	@ 0006629c c901
.org 0x6629e
	adds r0, r0, r1	@ 0006629e 4018
.org 0x662a0
	movs r1, #208	@ 000662a0 d021
.org 0x662a2
	lsls r1, r1, #8	@ 000662a2 0902
.org 0x662a4
	cmp r0, r1	@ 000662a4 8842
.org 0x662a6
	bhi.n 0x662ba	@ 000662a6 08d8
.org 0x662a8
	ldr r0, [r2, #60]	@ 000662a8 d06b
.org 0x662aa
	subs r0, r0, r5	@ 000662aa 401b
.org 0x662ac
	movs r2, #128	@ 000662ac 8022
.org 0x662ae
	lsls r2, r2, #7	@ 000662ae d201
.org 0x662b0
	adds r0, r0, r2	@ 000662b0 8018
.org 0x662b2
	movs r1, #128	@ 000662b2 8021
.org 0x662b4
	lsls r1, r1, #8	@ 000662b4 0902
.org 0x662b6
	cmp r0, r1	@ 000662b6 8842
.org 0x662b8
	bls.n 0x662dc	@ 000662b8 10d9
.org 0x662ba
	mov r0, sp	@ 000662ba 6846
.org 0x662bc
	adds r1, r0, r3	@ 000662bc c118
.org 0x662be
	movs r0, #0	@ 000662be 0020
.org 0x662c0
	strb r0, [r1, #0]	@ 000662c0 0870
.org 0x662c2
	b.n 0x662e2	@ 000662c2 0ee0
.org 0x662c4
	.byte 0xba,0x98,0x12,0x08	@ 000662c4 data
.org 0x662c8
	.byte 0xf0,0xdb,0x02,0x02	@ 000662c8 data
.org 0x662cc
	.byte 0x00,0xf0,0xff,0xff	@ 000662cc data
.org 0x662d0
	.byte 0x00,0xb1,0x85,0x08	@ 000662d0 data
.org 0x662d4
	.byte 0x04,0xb1,0x85,0x08	@ 000662d4 data
.org 0x662d8
	.byte 0xf8,0xe9,0x02,0x02	@ 000662d8 data
.org 0x662dc
	adds r6, #1	@ 000662dc 0136
.org 0x662de
	cmp r6, #2	@ 000662de 022e
.org 0x662e0
	ble.n 0x6626a	@ 000662e0 c3dd
.org 0x662e2
	cmp r6, #2	@ 000662e2 022e
.org 0x662e4
	ble.n 0x662ec	@ 000662e4 02dd
.org 0x662e6
	adds r7, #1	@ 000662e6 0137
.org 0x662e8
	cmp r7, #2	@ 000662e8 022f
.org 0x662ea
	ble.n 0x66268	@ 000662ea bddd
.org 0x662ec
	mov r3, r8	@ 000662ec 4346
.org 0x662ee
	cmp r3, #7	@ 000662ee 072b
.org 0x662f0
	ble.n 0x66240	@ 000662f0 a6dd
