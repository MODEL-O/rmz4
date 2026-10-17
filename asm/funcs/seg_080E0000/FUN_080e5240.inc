@ FUN_080e5240  entry 0x080e5240  size 110
.thumb
.org 0xe5240
FUN_080e5240:
	push {lr}	@ 000e5240 00b5
.org 0xe5242
	adds r2, r0, #0	@ 000e5242 021c
.org 0xe5244
	ldr r0, [r2, #88]	@ 000e5244 906d
.org 0xe5246
	ldr r1, [r2, #96]	@ 000e5246 116e
.org 0xe5248
	adds r0, r0, r1	@ 000e5248 4018
.org 0xe524a
	str r0, [r2, #88]	@ 000e524a 9065
.org 0xe524c
	ldrb r0, [r2, #19]	@ 000e524c d07c
.org 0xe524e
	cmp r0, #0	@ 000e524e 0028
.org 0xe5250
	bne.n 0xe52a2	@ 000e5250 27d1
.org 0xe5252
	ldrb r1, [r2, #10]	@ 000e5252 917a
.org 0xe5254
	movs r0, #1	@ 000e5254 0120
.org 0xe5256
	orrs r1, r0	@ 000e5256 0143
.org 0xe5258
	strb r1, [r2, #10]	@ 000e5258 9172
.org 0xe525a
	ldrb r0, [r2, #18]	@ 000e525a 907c
.org 0xe525c
	adds r0, #1	@ 000e525c 0130
.org 0xe525e
	strb r0, [r2, #18]	@ 000e525e 9074
.org 0xe5260
	lsls r0, r0, #24	@ 000e5260 0006
.org 0xe5262
	lsrs r0, r0, #24	@ 000e5262 000e
.org 0xe5264
	cmp r0, #10	@ 000e5264 0a28
.org 0xe5266
	bne.n 0xe5288	@ 000e5266 0fd1
.org 0xe5268
	movs r0, #254	@ 000e5268 fe20
.org 0xe526a
	ands r1, r0	@ 000e526a 0140
.org 0xe526c
	strb r1, [r2, #10]	@ 000e526c 9172
.org 0xe526e
	ldr r1, [pc, #20]	@ 000e526e 0549
.org 0xe5270
	ldrb r0, [r2, #9]	@ 000e5270 507a
.org 0xe5272
	lsls r0, r0, #2	@ 000e5272 8000
.org 0xe5274
	adds r0, r0, r1	@ 000e5274 4018
.org 0xe5276
	movs r1, #2	@ 000e5276 0221
.org 0xe5278
	str r1, [r2, #12]	@ 000e5278 d160
.org 0xe527a
	ldr r0, [r0, #0]	@ 000e527a 0068
.org 0xe527c
	ldr r0, [r0, #8]	@ 000e527c 8068
.org 0xe527e
	str r0, [r2, #20]	@ 000e527e 5061
.org 0xe5280
	b.n 0xe52aa	@ 000e5280 13e0
.org 0xe5282
	.byte 0x00	@ 000e5282 data
.org 0xe5283
	.byte 0x00	@ 000e5283 data
.org 0xe5284
	.byte 0x64,0x6f,0x86,0x08	@ 000e5284 data
.org 0xe5288
	cmp r0, #2	@ 000e5288 0228
.org 0xe528a
	bhi.n 0xe5292	@ 000e528a 02d8
.org 0xe528c
	movs r0, #2	@ 000e528c 0220
.org 0xe528e
	strb r0, [r2, #19]	@ 000e528e d074
.org 0xe5290
	b.n 0xe52aa	@ 000e5290 0be0
.org 0xe5292
	cmp r0, #4	@ 000e5292 0428
.org 0xe5294
	bhi.n 0xe529c	@ 000e5294 02d8
.org 0xe5296
	movs r0, #3	@ 000e5296 0320
.org 0xe5298
	strb r0, [r2, #19]	@ 000e5298 d074
.org 0xe529a
	b.n 0xe52aa	@ 000e529a 06e0
.org 0xe529c
	movs r0, #4	@ 000e529c 0420
.org 0xe529e
	strb r0, [r2, #19]	@ 000e529e d074
.org 0xe52a0
	b.n 0xe52aa	@ 000e52a0 03e0
.org 0xe52a2
	ldrb r1, [r2, #10]	@ 000e52a2 917a
.org 0xe52a4
	movs r0, #254	@ 000e52a4 fe20
.org 0xe52a6
	ands r0, r1	@ 000e52a6 0840
.org 0xe52a8
	strb r0, [r2, #10]	@ 000e52a8 9072
.org 0xe52aa
	ldrb r0, [r2, #19]	@ 000e52aa d07c
.org 0xe52ac
	subs r0, #1	@ 000e52ac 0138
