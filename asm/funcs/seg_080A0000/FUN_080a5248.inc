@ FUN_080a5248  entry 0x080a5248  size 72
.thumb
.org 0xa5248
FUN_080a5248:
	push {r4, lr}	@ 000a5248 10b5
.org 0xa524a
	adds r4, r0, #0	@ 000a524a 041c
.org 0xa524c
	movs r0, #63	@ 000a524c 3f20
.org 0xa524e
	bl 0x2b10	@ 000a524e 5df75ffc
.org 0xa5252
	adds r0, r4, #0	@ 000a5252 201c
.org 0xa5254
	bl 0xa52e4	@ 000a5254 00f046f8
.org 0xa5258
	ldrb r1, [r4, #10]	@ 000a5258 a17a
.org 0xa525a
	movs r0, #254	@ 000a525a fe20
.org 0xa525c
	ands r0, r1	@ 000a525c 0840
.org 0xa525e
	movs r1, #0	@ 000a525e 0021
.org 0xa5260
	strb r0, [r4, #10]	@ 000a5260 a072
.org 0xa5262
	adds r0, r4, #0	@ 000a5262 201c
.org 0xa5264
	adds r0, #140	@ 000a5264 8c30
.org 0xa5266
	str r1, [r0, #0]	@ 000a5266 0160
.org 0xa5268
	adds r0, #4	@ 000a5268 0430
.org 0xa526a
	str r1, [r0, #0]	@ 000a526a 0160
.org 0xa526c
	adds r0, #4	@ 000a526c 0430
.org 0xa526e
	strb r1, [r0, #0]	@ 000a526e 0170
.org 0xa5270
	ldrb r1, [r4, #10]	@ 000a5270 a17a
.org 0xa5272
	movs r0, #251	@ 000a5272 fb20
.org 0xa5274
	ands r0, r1	@ 000a5274 0840
.org 0xa5276
	strb r0, [r4, #10]	@ 000a5276 a072
.org 0xa5278
	ldr r1, [pc, #20]	@ 000a5278 0549
.org 0xa527a
	ldrb r0, [r4, #9]	@ 000a527a 607a
.org 0xa527c
	lsls r0, r0, #2	@ 000a527c 8000
.org 0xa527e
	adds r0, r0, r1	@ 000a527e 4018
.org 0xa5280
	movs r1, #4	@ 000a5280 0421
.org 0xa5282
	str r1, [r4, #12]	@ 000a5282 e160
.org 0xa5284
	ldr r0, [r0, #0]	@ 000a5284 0068
.org 0xa5286
	ldr r0, [r0, #16]	@ 000a5286 0069
.org 0xa5288
	str r0, [r4, #20]	@ 000a5288 6061
.org 0xa528a
	pop {r4}	@ 000a528a 10bc
.org 0xa528c
	pop {r0}	@ 000a528c 01bc
.org 0xa528e
	bx r0	@ 000a528e 0047
