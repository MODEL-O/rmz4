@ FUN_080c5214  entry 0x080c5214  size 116
.thumb
.org 0xc5214
FUN_080c5214:
	push {lr}	@ 000c5214 00b5
.org 0xc5216
	adds r2, r0, #0	@ 000c5216 021c
.org 0xc5218
	ldr r3, [r2, #40]	@ 000c5218 936a
.org 0xc521a
	ldrb r1, [r2, #15]	@ 000c521a d17b
.org 0xc521c
	cmp r1, #0	@ 000c521c 0029
.org 0xc521e
	bne.n 0xc523e	@ 000c521e 0ed1
.org 0xc5220
	adds r0, #140	@ 000c5220 8c30
.org 0xc5222
	str r1, [r0, #0]	@ 000c5222 0160
.org 0xc5224
	adds r0, #4	@ 000c5224 0430
.org 0xc5226
	str r1, [r0, #0]	@ 000c5226 0160
.org 0xc5228
	adds r0, #4	@ 000c5228 0430
.org 0xc522a
	strb r1, [r0, #0]	@ 000c522a 0170
.org 0xc522c
	ldrb r1, [r2, #10]	@ 000c522c 917a
.org 0xc522e
	movs r0, #251	@ 000c522e fb20
.org 0xc5230
	ands r0, r1	@ 000c5230 0840
.org 0xc5232
	movs r1, #254	@ 000c5232 fe21
.org 0xc5234
	ands r0, r1	@ 000c5234 0840
.org 0xc5236
	strb r0, [r2, #10]	@ 000c5236 9072
.org 0xc5238
	ldrb r0, [r2, #15]	@ 000c5238 d07b
.org 0xc523a
	adds r0, #1	@ 000c523a 0130
.org 0xc523c
	strb r0, [r2, #15]	@ 000c523c d073
.org 0xc523e
	ldr r0, [r3, #84]	@ 000c523e 586d
.org 0xc5240
	ldr r1, [r3, #88]	@ 000c5240 996d
.org 0xc5242
	str r0, [r2, #84]	@ 000c5242 5065
.org 0xc5244
	str r1, [r2, #88]	@ 000c5244 9165
.org 0xc5246
	adds r0, r2, #0	@ 000c5246 101c
.org 0xc5248
	adds r0, #184	@ 000c5248 b830
.org 0xc524a
	ldrb r3, [r0, #0]	@ 000c524a 0378
.org 0xc524c
	cmp r3, #0	@ 000c524c 002b
.org 0xc524e
	bne.n 0xc5284	@ 000c524e 19d1
.org 0xc5250
	ldrb r1, [r2, #10]	@ 000c5250 917a
.org 0xc5252
	movs r0, #254	@ 000c5252 fe20
.org 0xc5254
	ands r0, r1	@ 000c5254 0840
.org 0xc5256
	movs r1, #253	@ 000c5256 fd21
.org 0xc5258
	ands r0, r1	@ 000c5258 0840
.org 0xc525a
	strb r0, [r2, #10]	@ 000c525a 9072
.org 0xc525c
	adds r0, r2, #0	@ 000c525c 101c
.org 0xc525e
	adds r0, #140	@ 000c525e 8c30
.org 0xc5260
	str r3, [r0, #0]	@ 000c5260 0360
.org 0xc5262
	adds r0, #4	@ 000c5262 0430
.org 0xc5264
	str r3, [r0, #0]	@ 000c5264 0360
.org 0xc5266
	adds r0, #4	@ 000c5266 0430
.org 0xc5268
	strb r3, [r0, #0]	@ 000c5268 0370
.org 0xc526a
	ldrb r1, [r2, #10]	@ 000c526a 917a
.org 0xc526c
	movs r0, #251	@ 000c526c fb20
.org 0xc526e
	ands r0, r1	@ 000c526e 0840
.org 0xc5270
	strb r0, [r2, #10]	@ 000c5270 9072
.org 0xc5272
	ldr r1, [pc, #20]	@ 000c5272 0549
.org 0xc5274
	ldrb r0, [r2, #9]	@ 000c5274 507a
.org 0xc5276
	lsls r0, r0, #2	@ 000c5276 8000
.org 0xc5278
	adds r0, r0, r1	@ 000c5278 4018
.org 0xc527a
	movs r1, #3	@ 000c527a 0321
.org 0xc527c
	str r1, [r2, #12]	@ 000c527c d160
.org 0xc527e
	ldr r0, [r0, #0]	@ 000c527e 0068
.org 0xc5280
	ldr r0, [r0, #12]	@ 000c5280 c068
.org 0xc5282
	str r0, [r2, #20]	@ 000c5282 5061
.org 0xc5284
	pop {r0}	@ 000c5284 01bc
.org 0xc5286
	bx r0	@ 000c5286 0047
