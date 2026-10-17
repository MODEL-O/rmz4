@ FUN_0804d208  entry 0x0804d208  size 144
.thumb
.org 0x4d208
FUN_0804d208:
	push {r4, r5, lr}	@ 0004d208 30b5
.org 0x4d20a
	adds r4, r0, #0	@ 0004d20a 041c
.org 0x4d20c
	ldr r5, [r4, #44]	@ 0004d20c e56a
.org 0x4d20e
	ldrb r0, [r5, #12]	@ 0004d20e 287b
.org 0x4d210
	cmp r0, #1	@ 0004d210 0128
.org 0x4d212
	bls.n 0x4d234	@ 0004d212 0fd9
.org 0x4d214
	ldr r1, [pc, #24]	@ 0004d214 0649
.org 0x4d216
	ldrb r0, [r4, #9]	@ 0004d216 607a
.org 0x4d218
	lsls r0, r0, #2	@ 0004d218 8000
.org 0x4d21a
	adds r0, r0, r1	@ 0004d21a 4018
.org 0x4d21c
	movs r1, #2	@ 0004d21c 0221
.org 0x4d21e
	str r1, [r4, #12]	@ 0004d21e e160
.org 0x4d220
	ldr r0, [r0, #0]	@ 0004d220 0068
.org 0x4d222
	ldr r0, [r0, #8]	@ 0004d222 8068
.org 0x4d224
	str r0, [r4, #20]	@ 0004d224 6061
.org 0x4d226
	adds r0, r4, #0	@ 0004d226 201c
.org 0x4d228
	bl 0x4d2a0	@ 0004d228 00f03af8
.org 0x4d22c
	b.n 0x4d298	@ 0004d22c 34e0
.org 0x4d22e
	.byte 0x00	@ 0004d22e data
.org 0x4d22f
	.byte 0x00	@ 0004d22f data
.org 0x4d230
	.byte 0xf8,0x39,0x85,0x08	@ 0004d230 data
.org 0x4d234
	adds r0, r4, #0	@ 0004d234 201c
.org 0x4d236
	bl 0x1cff0	@ 0004d236 cff7dbfe
.org 0x4d23a
	ldr r0, [r5, #84]	@ 0004d23a 686d
.org 0x4d23c
	ldr r1, [r5, #88]	@ 0004d23c a96d
.org 0x4d23e
	str r0, [r4, #84]	@ 0004d23e 6065
.org 0x4d240
	str r1, [r4, #88]	@ 0004d240 a165
.org 0x4d242
	ldrb r0, [r5, #10]	@ 0004d242 a87a
.org 0x4d244
	lsrs r2, r0, #4	@ 0004d244 0209
.org 0x4d246
	movs r0, #1	@ 0004d246 0120
.org 0x4d248
	ands r2, r0	@ 0004d248 0240
.org 0x4d24a
	cmp r2, #0	@ 0004d24a 002a
.org 0x4d24c
	beq.n 0x4d256	@ 0004d24c 03d0
.org 0x4d24e
	ldrb r1, [r4, #10]	@ 0004d24e a17a
.org 0x4d250
	movs r0, #16	@ 0004d250 1020
.org 0x4d252
	orrs r0, r1	@ 0004d252 0843
.org 0x4d254
	b.n 0x4d25c	@ 0004d254 02e0
.org 0x4d256
	ldrb r1, [r4, #10]	@ 0004d256 a17a
.org 0x4d258
	movs r0, #239	@ 0004d258 ef20
.org 0x4d25a
	ands r0, r1	@ 0004d25a 0840
.org 0x4d25c
	strb r0, [r4, #10]	@ 0004d25c a072
.org 0x4d25e
	movs r3, #1	@ 0004d25e 0123
.org 0x4d260
	adds r1, r3, #0	@ 0004d260 191c
.org 0x4d262
	ands r1, r2	@ 0004d262 1140
.org 0x4d264
	adds r0, r4, #0	@ 0004d264 201c
.org 0x4d266
	adds r0, #76	@ 0004d266 4c30
.org 0x4d268
	strb r1, [r0, #0]	@ 0004d268 0170
.org 0x4d26a
	adds r5, r4, #0	@ 0004d26a 251c
.org 0x4d26c
	adds r5, #74	@ 0004d26c 4a35
.org 0x4d26e
	lsls r1, r1, #4	@ 0004d26e 0901
.org 0x4d270
	ldrb r2, [r5, #0]	@ 0004d270 2a78
.org 0x4d272
	movs r0, #17	@ 0004d272 1120
.org 0x4d274
	negs r0, r0	@ 0004d274 4042
.org 0x4d276
	ands r0, r2	@ 0004d276 1040
.org 0x4d278
	orrs r0, r1	@ 0004d278 0843
.org 0x4d27a
	strb r0, [r5, #0]	@ 0004d27a 2870
.org 0x4d27c
	ldrb r1, [r4, #18]	@ 0004d27c a17c
.org 0x4d27e
	adds r0, r1, #1	@ 0004d27e 481c
.org 0x4d280
	strb r0, [r4, #18]	@ 0004d280 a074
.org 0x4d282
	ands r3, r1	@ 0004d282 0b40
.org 0x4d284
	cmp r3, #0	@ 0004d284 002b
.org 0x4d286
	beq.n 0x4d290	@ 0004d286 03d0
.org 0x4d288
	ldrb r0, [r4, #10]	@ 0004d288 a07a
.org 0x4d28a
	movs r1, #1	@ 0004d28a 0121
.org 0x4d28c
	orrs r0, r1	@ 0004d28c 0843
.org 0x4d28e
	b.n 0x4d296	@ 0004d28e 02e0
.org 0x4d290
	ldrb r1, [r4, #10]	@ 0004d290 a17a
.org 0x4d292
	movs r0, #254	@ 0004d292 fe20
.org 0x4d294
	ands r0, r1	@ 0004d294 0840
.org 0x4d296
	strb r0, [r4, #10]	@ 0004d296 a072
