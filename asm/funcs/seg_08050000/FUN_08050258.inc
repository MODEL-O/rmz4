@ FUN_08050258  entry 0x08050258  size 112
.thumb
.org 0x50258
FUN_08050258:
	push {r4, r5, lr}	@ 00050258 30b5
.org 0x5025a
	adds r4, r0, #0	@ 0005025a 041c
.org 0x5025c
	ldr r5, [r4, #40]	@ 0005025c a56a
.org 0x5025e
	ldrb r0, [r4, #14]	@ 0005025e a07b
.org 0x50260
	cmp r0, #0	@ 00050260 0028
.org 0x50262
	beq.n 0x5027e	@ 00050262 0cd0
.org 0x50264
	adds r0, r4, #0	@ 00050264 201c
.org 0x50266
	adds r0, #140	@ 00050266 8c30
.org 0x50268
	movs r1, #0	@ 00050268 0021
.org 0x5026a
	str r1, [r0, #0]	@ 0005026a 0160
.org 0x5026c
	adds r0, #4	@ 0005026c 0430
.org 0x5026e
	str r1, [r0, #0]	@ 0005026e 0160
.org 0x50270
	adds r0, #4	@ 00050270 0430
.org 0x50272
	strb r1, [r0, #0]	@ 00050272 0170
.org 0x50274
	ldrb r1, [r4, #10]	@ 00050274 a17a
.org 0x50276
	movs r0, #251	@ 00050276 fb20
.org 0x50278
	ands r0, r1	@ 00050278 0840
.org 0x5027a
	movs r1, #254	@ 0005027a fe21
.org 0x5027c
	b.n 0x502ac	@ 0005027c 16e0
.org 0x5027e
	ldrb r0, [r4, #13]	@ 0005027e 607b
.org 0x50280
	cmp r0, #0	@ 00050280 0028
.org 0x50282
	bne.n 0x50298	@ 00050282 09d1
.org 0x50284
	ldr r1, [pc, #64]	@ 00050284 1049
.org 0x50286
	adds r0, r4, #0	@ 00050286 201c
.org 0x50288
	bl 0x1cf00	@ 00050288 ccf73afe
.org 0x5028c
	adds r0, r5, #0	@ 0005028c 281c
.org 0x5028e
	bl 0x3aabc	@ 0005028e eaf715fc
.org 0x50292
	ldrb r0, [r4, #13]	@ 00050292 607b
.org 0x50294
	adds r0, #1	@ 00050294 0130
.org 0x50296
	strb r0, [r4, #13]	@ 00050296 6073
.org 0x50298
	adds r0, r4, #0	@ 00050298 201c
.org 0x5029a
	bl 0x1cff0	@ 0005029a ccf7a9fe
.org 0x5029e
	adds r0, r4, #0	@ 0005029e 201c
.org 0x502a0
	adds r0, #115	@ 000502a0 7330
.org 0x502a2
	ldrb r0, [r0, #0]	@ 000502a2 0078
.org 0x502a4
	cmp r0, #3	@ 000502a4 0328
.org 0x502a6
	bne.n 0x502c2	@ 000502a6 0cd1
.org 0x502a8
	ldrb r1, [r4, #10]	@ 000502a8 a17a
.org 0x502aa
	movs r0, #254	@ 000502aa fe20
.org 0x502ac
	ands r0, r1	@ 000502ac 0840
.org 0x502ae
	strb r0, [r4, #10]	@ 000502ae a072
.org 0x502b0
	ldr r1, [pc, #24]	@ 000502b0 0649
.org 0x502b2
	ldrb r0, [r4, #9]	@ 000502b2 607a
.org 0x502b4
	lsls r0, r0, #2	@ 000502b4 8000
.org 0x502b6
	adds r0, r0, r1	@ 000502b6 4018
.org 0x502b8
	movs r1, #4	@ 000502b8 0421
.org 0x502ba
	str r1, [r4, #12]	@ 000502ba e160
.org 0x502bc
	ldr r0, [r0, #0]	@ 000502bc 0068
.org 0x502be
	ldr r0, [r0, #16]	@ 000502be 0069
.org 0x502c0
	str r0, [r4, #20]	@ 000502c0 6061
.org 0x502c2
	pop {r4, r5}	@ 000502c2 30bc
.org 0x502c4
	pop {r0}	@ 000502c4 01bc
.org 0x502c6
	bx r0	@ 000502c6 0047
