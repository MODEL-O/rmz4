@ FUN_08030230  entry 0x08030230  size 204
.thumb
.org 0x30230
FUN_08030230:
	push {r4, r5, r6, r7, lr}	@ 00030230 f0b5
.org 0x30232
	mov r7, r9	@ 00030232 4f46
.org 0x30234
	mov r6, r8	@ 00030234 4646
.org 0x30236
	push {r6, r7}	@ 00030236 c0b4
.org 0x30238
	adds r4, r0, #0	@ 00030238 041c
.org 0x3023a
	movs r0, #180	@ 0003023a b420
.org 0x3023c
	adds r0, r0, r4	@ 0003023c 0019
.org 0x3023e
	mov r9, r0	@ 0003023e 8146
.org 0x30240
	ldr r1, [pc, #16]	@ 00030240 0449
.org 0x30242
	adds r0, r4, r1	@ 00030242 6018
.org 0x30244
	ldrb r0, [r0, #0]	@ 00030244 0078
.org 0x30246
	cmp r0, #0	@ 00030246 0028
.org 0x30248
	beq.n 0x30258	@ 00030248 06d0
.org 0x3024a
	movs r1, #0	@ 0003024a 0021
.org 0x3024c
	movs r0, #7	@ 0003024c 0720
.org 0x3024e
	strb r0, [r4, #13]	@ 0003024e 6073
.org 0x30250
	b.n 0x30302	@ 00030250 57e0
.org 0x30252
	.byte 0x00	@ 00030252 data
.org 0x30253
	.byte 0x00	@ 00030253 data
.org 0x30254
	.byte 0x43,0x01,0x00,0x00	@ 00030254 data
.org 0x30258
	ldr r6, [pc, #96]	@ 00030258 184e
.org 0x3025a
	adds r0, r4, r6	@ 0003025a a019
.org 0x3025c
	ldrb r3, [r0, #0]	@ 0003025c 0378
.org 0x3025e
	movs r7, #2	@ 0003025e 0227
.org 0x30260
	adds r0, r7, #0	@ 00030260 381c
.org 0x30262
	ands r0, r3	@ 00030262 1840
.org 0x30264
	lsls r0, r0, #24	@ 00030264 0006
.org 0x30266
	lsrs r5, r0, #24	@ 00030266 050e
.org 0x30268
	cmp r5, #0	@ 00030268 002d
.org 0x3026a
	bne.n 0x30306	@ 0003026a 4cd1
.org 0x3026c
	movs r0, #150	@ 0003026c 9620
.org 0x3026e
	lsls r0, r0, #2	@ 0003026e 8000
.org 0x30270
	adds r1, r4, r0	@ 00030270 2118
.org 0x30272
	ldr r2, [r1, #0]	@ 00030272 0a68
.org 0x30274
	movs r6, #1	@ 00030274 0126
.org 0x30276
	mov r8, r6	@ 00030276 b046
.org 0x30278
	adds r0, r2, #0	@ 00030278 101c
.org 0x3027a
	ands r0, r6	@ 0003027a 3040
.org 0x3027c
	adds r6, r1, #0	@ 0003027c 0e1c
.org 0x3027e
	cmp r0, #0	@ 0003027e 0028
.org 0x30280
	beq.n 0x302cc	@ 00030280 24d0
.org 0x30282
	movs r0, #128	@ 00030282 8020
.org 0x30284
	ands r2, r0	@ 00030284 0240
.org 0x30286
	cmp r2, #0	@ 00030286 002a
.org 0x30288
	beq.n 0x302c4	@ 00030288 1cd0
.org 0x3028a
	ldr r1, [pc, #52]	@ 0003028a 0d49
.org 0x3028c
	adds r0, r4, #0	@ 0003028c 201c
.org 0x3028e
	movs r2, #0	@ 0003028e 0022
.org 0x30290
	bl 0x2c4fc	@ 00030290 fcf734f9
.org 0x30294
	lsls r0, r0, #16	@ 00030294 0004
.org 0x30296
	cmp r0, #0	@ 00030296 0028
.org 0x30298
	beq.n 0x302c4	@ 00030298 14d0
.org 0x3029a
	movs r0, #161	@ 0003029a a120
.org 0x3029c
	lsls r0, r0, #1	@ 0003029c 4000
.org 0x3029e
	adds r2, r4, r0	@ 0003029e 2218
.org 0x302a0
	ldrb r0, [r2, #0]	@ 000302a0 1078
.org 0x302a2
	movs r1, #16	@ 000302a2 1021
.org 0x302a4
	orrs r0, r1	@ 000302a4 0843
.org 0x302a6
	strb r0, [r2, #0]	@ 000302a6 1070
.org 0x302a8
	ldr r0, [r4, #88]	@ 000302a8 a06d
.org 0x302aa
	movs r1, #208	@ 000302aa d021
.org 0x302ac
	lsls r1, r1, #4	@ 000302ac 0901
.org 0x302ae
	adds r0, r0, r1	@ 000302ae 4018
.org 0x302b0
	mov r6, r9	@ 000302b0 4e46
.org 0x302b2
	str r0, [r6, #112]	@ 000302b2 3067
.org 0x302b4
	mov r0, r8	@ 000302b4 4046
.org 0x302b6
	strb r0, [r4, #13]	@ 000302b6 6073
.org 0x302b8
	b.n 0x302ec	@ 000302b8 18e0
.org 0x302ba
	.byte 0x00	@ 000302ba data
.org 0x302bb
	.byte 0x00	@ 000302bb data
.org 0x302bc
	.byte 0x53,0x01,0x00,0x00	@ 000302bc data
.org 0x302c0
	.byte 0x6c,0x33,0x85,0x08	@ 000302c0 data
.org 0x302c4
	movs r1, #0	@ 000302c4 0021
.org 0x302c6
	movs r0, #1	@ 000302c6 0120
.org 0x302c8
	strb r0, [r4, #13]	@ 000302c8 6073
.org 0x302ca
	b.n 0x30302	@ 000302ca 1ae0
.org 0x302cc
	movs r0, #4	@ 000302cc 0420
.org 0x302ce
	ands r2, r0	@ 000302ce 0240
.org 0x302d0
	cmp r2, #0	@ 000302d0 002a
.org 0x302d2
	beq.n 0x302f8	@ 000302d2 11d0
.org 0x302d4
	ands r0, r3	@ 000302d4 1840
.org 0x302d6
	lsls r0, r0, #24	@ 000302d6 0006
.org 0x302d8
	lsrs r5, r0, #24	@ 000302d8 050e
.org 0x302da
	cmp r5, #0	@ 000302da 002d
.org 0x302dc
	bne.n 0x302f8	@ 000302dc 0cd1
.org 0x302de
	ldr r1, [pc, #20]	@ 000302de 0549
.org 0x302e0
	adds r0, r4, #0	@ 000302e0 201c
.org 0x302e2
	bl 0x2ee58	@ 000302e2 fef7b9fd
.org 0x302e6
	lsls r0, r0, #24	@ 000302e6 0006
.org 0x302e8
	cmp r0, #0	@ 000302e8 0028
.org 0x302ea
	beq.n 0x302f8	@ 000302ea 05d0
.org 0x302ec
	strb r7, [r4, #14]	@ 000302ec a773
.org 0x302ee
	strb r5, [r4, #15]	@ 000302ee e573
.org 0x302f0
	b.n 0x30306	@ 000302f0 09e0
.org 0x302f2
	.byte 0x00	@ 000302f2 data
.org 0x302f3
	.byte 0x00	@ 000302f3 data
.org 0x302f4
	.byte 0x74,0x33,0x85,0x08	@ 000302f4 data
.org 0x302f8
	ldr r1, [r6, #0]	@ 000302f8 3168
.org 0x302fa
	movs r0, #48	@ 000302fa 3020
