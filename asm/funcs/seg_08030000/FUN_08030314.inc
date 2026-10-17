@ FUN_08030314  entry 0x08030314  size 172
.thumb
.org 0x30314
FUN_08030314:
	push {r4, r5, r6, r7, lr}	@ 00030314 f0b5
.org 0x30316
	mov r7, r8	@ 00030316 4746
.org 0x30318
	push {r7}	@ 00030318 80b4
.org 0x3031a
	adds r4, r0, #0	@ 0003031a 041c
.org 0x3031c
	adds r7, r4, #0	@ 0003031c 271c
.org 0x3031e
	adds r7, #180	@ 0003031e b437
.org 0x30320
	ldr r1, [pc, #12]	@ 00030320 0349
.org 0x30322
	adds r0, r4, r1	@ 00030322 6018
.org 0x30324
	ldrb r0, [r0, #0]	@ 00030324 0078
.org 0x30326
	cmp r0, #0	@ 00030326 0028
.org 0x30328
	beq.n 0x30334	@ 00030328 04d0
.org 0x3032a
	movs r1, #0	@ 0003032a 0021
.org 0x3032c
	movs r0, #7	@ 0003032c 0720
.org 0x3032e
	b.n 0x303a0	@ 0003032e 37e0
.org 0x30330
	.byte 0x43,0x01,0x00,0x00	@ 00030330 data
.org 0x30334
	ldr r1, [pc, #92]	@ 00030334 1749
.org 0x30336
	adds r0, r4, r1	@ 00030336 6018
.org 0x30338
	ldrb r1, [r0, #0]	@ 00030338 0178
.org 0x3033a
	movs r0, #2	@ 0003033a 0220
.org 0x3033c
	mov r8, r0	@ 0003033c 8046
.org 0x3033e
	ands r0, r1	@ 0003033e 0840
.org 0x30340
	lsls r0, r0, #24	@ 00030340 0006
.org 0x30342
	lsrs r6, r0, #24	@ 00030342 060e
.org 0x30344
	cmp r6, #0	@ 00030344 002e
.org 0x30346
	bne.n 0x303c2	@ 00030346 3cd1
.org 0x30348
	movs r1, #150	@ 00030348 9621
.org 0x3034a
	lsls r1, r1, #2	@ 0003034a 8900
.org 0x3034c
	adds r0, r4, r1	@ 0003034c 6018
.org 0x3034e
	ldr r1, [r0, #0]	@ 0003034e 0168
.org 0x30350
	movs r5, #1	@ 00030350 0125
.org 0x30352
	adds r0, r1, #0	@ 00030352 081c
.org 0x30354
	ands r0, r5	@ 00030354 2840
.org 0x30356
	cmp r0, #0	@ 00030356 0028
.org 0x30358
	beq.n 0x303a8	@ 00030358 26d0
.org 0x3035a
	movs r0, #128	@ 0003035a 8020
.org 0x3035c
	ands r1, r0	@ 0003035c 0140
.org 0x3035e
	cmp r1, #0	@ 0003035e 0029
.org 0x30360
	beq.n 0x3039c	@ 00030360 1cd0
.org 0x30362
	ldr r1, [pc, #52]	@ 00030362 0d49
.org 0x30364
	adds r0, r4, #0	@ 00030364 201c
.org 0x30366
	movs r2, #0	@ 00030366 0022
.org 0x30368
	bl 0x2c4fc	@ 00030368 fcf7c8f8
.org 0x3036c
	lsls r0, r0, #16	@ 0003036c 0004
.org 0x3036e
	cmp r0, #0	@ 0003036e 0028
.org 0x30370
	beq.n 0x3039c	@ 00030370 14d0
.org 0x30372
	movs r0, #161	@ 00030372 a120
.org 0x30374
	lsls r0, r0, #1	@ 00030374 4000
.org 0x30376
	adds r2, r4, r0	@ 00030376 2218
.org 0x30378
	ldrb r0, [r2, #0]	@ 00030378 1078
.org 0x3037a
	movs r1, #16	@ 0003037a 1021
.org 0x3037c
	orrs r0, r1	@ 0003037c 0843
.org 0x3037e
	strb r0, [r2, #0]	@ 0003037e 1070
.org 0x30380
	ldr r0, [r4, #88]	@ 00030380 a06d
.org 0x30382
	movs r1, #208	@ 00030382 d021
.org 0x30384
	lsls r1, r1, #4	@ 00030384 0901
.org 0x30386
	adds r0, r0, r1	@ 00030386 4018
.org 0x30388
	str r0, [r7, #112]	@ 00030388 3867
.org 0x3038a
	strb r5, [r4, #13]	@ 0003038a 6573
.org 0x3038c
	mov r0, r8	@ 0003038c 4046
.org 0x3038e
	strb r0, [r4, #14]	@ 0003038e a073
.org 0x30390
	strb r6, [r4, #15]	@ 00030390 e673
.org 0x30392
	b.n 0x303c2	@ 00030392 16e0
.org 0x30394
	.byte 0x53,0x01,0x00,0x00	@ 00030394 data
.org 0x30398
	.byte 0x74,0x33,0x85,0x08	@ 00030398 data
.org 0x3039c
	movs r1, #0	@ 0003039c 0021
.org 0x3039e
	movs r0, #1	@ 0003039e 0120
.org 0x303a0
	strb r0, [r4, #13]	@ 000303a0 6073
.org 0x303a2
	strb r1, [r4, #14]	@ 000303a2 a173
.org 0x303a4
	strb r1, [r4, #15]	@ 000303a4 e173
.org 0x303a6
	b.n 0x303c2	@ 000303a6 0ce0
.org 0x303a8
	movs r2, #8	@ 000303a8 0822
.org 0x303aa
	ands r2, r1	@ 000303aa 0a40
.org 0x303ac
	cmp r2, #0	@ 000303ac 002a
.org 0x303ae
	bne.n 0x303c2	@ 000303ae 08d1
.org 0x303b0
	movs r0, #48	@ 000303b0 3020
.org 0x303b2
	ands r0, r1	@ 000303b2 0840
.org 0x303b4
	cmp r0, #0	@ 000303b4 0028
.org 0x303b6
	beq.n 0x303be	@ 000303b6 02d0
.org 0x303b8
	strb r5, [r4, #14]	@ 000303b8 a573
.org 0x303ba
	strb r2, [r4, #15]	@ 000303ba e273
.org 0x303bc
	b.n 0x303c2	@ 000303bc 01e0
.org 0x303be
	strb r0, [r4, #14]	@ 000303be a073
