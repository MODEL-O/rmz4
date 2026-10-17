@ FUN_080b2244  entry 0x080b2244  size 94
.thumb
.org 0xb2244
FUN_080b2244:
	push {r4, r5, r6, lr}	@ 000b2244 70b5
.org 0xb2246
	adds r6, r0, #0	@ 000b2246 061c
.org 0xb2248
	lsls r1, r1, #24	@ 000b2248 0906
.org 0xb224a
	lsrs r5, r1, #24	@ 000b224a 0d0e
.org 0xb224c
	lsls r2, r2, #24	@ 000b224c 1206
.org 0xb224e
	lsrs r4, r2, #24	@ 000b224e 140e
.org 0xb2250
	ldr r0, [pc, #80]	@ 000b2250 1448
.org 0xb2252
	ldr r0, [r0, #0]	@ 000b2252 0068
.org 0xb2254
	bl 0x5500	@ 000b2254 53f754f9
.org 0xb2258
	adds r3, r0, #0	@ 000b2258 031c
.org 0xb225a
	cmp r3, #0	@ 000b225a 002b
.org 0xb225c
	beq.n 0xb229c	@ 000b225c 1ed0
.org 0xb225e
	adds r1, r3, #0	@ 000b225e 191c
.org 0xb2260
	adds r1, #37	@ 000b2260 2531
.org 0xb2262
	movs r2, #0	@ 000b2262 0022
.org 0xb2264
	movs r0, #24	@ 000b2264 1820
.org 0xb2266
	strb r0, [r1, #0]	@ 000b2266 0870
.org 0xb2268
	ldr r0, [pc, #60]	@ 000b2268 0f48
.org 0xb226a
	movs r1, #90	@ 000b226a 5a21
.org 0xb226c
	strb r1, [r3, #9]	@ 000b226c 5972
.org 0xb226e
	movs r1, #180	@ 000b226e b421
.org 0xb2270
	lsls r1, r1, #1	@ 000b2270 4900
.org 0xb2272
	adds r0, r0, r1	@ 000b2272 4018
.org 0xb2274
	ldr r0, [r0, #0]	@ 000b2274 0068
.org 0xb2276
	ldr r0, [r0, #0]	@ 000b2276 0068
.org 0xb2278
	str r0, [r3, #20]	@ 000b2278 5861
.org 0xb227a
	movs r0, #0	@ 000b227a 0020
.org 0xb227c
	strh r2, [r3, #32]	@ 000b227c 1a84
.org 0xb227e
	adds r1, r3, #0	@ 000b227e 191c
.org 0xb2280
	adds r1, #34	@ 000b2280 2231
.org 0xb2282
	strb r0, [r1, #0]	@ 000b2282 0870
.org 0xb2284
	ldrb r1, [r3, #11]	@ 000b2284 d97a
.org 0xb2286
	movs r0, #16	@ 000b2286 1020
.org 0xb2288
	orrs r0, r1	@ 000b2288 0843
.org 0xb228a
	strb r0, [r3, #11]	@ 000b228a d872
.org 0xb228c
	ldrb r0, [r3, #28]	@ 000b228c 187f
.org 0xb228e
	strb r0, [r3, #29]	@ 000b228e 5877
.org 0xb2290
	ldr r0, [r6, #0]	@ 000b2290 3068
.org 0xb2292
	ldr r1, [r6, #4]	@ 000b2292 7168
.org 0xb2294
	str r0, [r3, #84]	@ 000b2294 5865
.org 0xb2296
	str r1, [r3, #88]	@ 000b2296 9965
.org 0xb2298
	strb r5, [r3, #16]	@ 000b2298 1d74
.org 0xb229a
	strb r4, [r3, #17]	@ 000b229a 5c74
.org 0xb229c
	pop {r4, r5, r6}	@ 000b229c 70bc
.org 0xb229e
	pop {r0}	@ 000b229e 01bc
.org 0xb22a0
	bx r0	@ 000b22a0 0047
