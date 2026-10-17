@ FUN_08002260  entry 0x08002260  size 68
.thumb
.org 0x2260
FUN_08002260:
	push {r4, r5, r6, r7, lr}	@ 00002260 f0b5
.org 0x2262
	movs r4, #255	@ 00002262 ff24
.org 0x2264
	mov lr, r1	@ 00002264 8e46
.org 0x2266
	ldr r1, [r0, #0]	@ 00002266 0168
.org 0x2268
	ldr r5, [r3, #0]	@ 00002268 1d68
.org 0x226a
	ands r5, r1	@ 0000226a 0d40
.org 0x226c
	muls r5, r2	@ 0000226c 5543
.org 0x226e
	lsrs r5, r5, #5	@ 0000226e 6d09
.org 0x2270
	ldr r6, [r3, #0]	@ 00002270 1e68
.org 0x2272
	ands r6, r5	@ 00002272 2e40
.org 0x2274
	ldr r5, [r3, #4]	@ 00002274 5d68
.org 0x2276
	ands r5, r1	@ 00002276 0d40
.org 0x2278
	muls r5, r2	@ 00002278 5543
.org 0x227a
	lsrs r5, r5, #5	@ 0000227a 6d09
.org 0x227c
	ldr r7, [r3, #4]	@ 0000227c 5f68
.org 0x227e
	ands r7, r5	@ 0000227e 2f40
.org 0x2280
	orrs r6, r7	@ 00002280 3e43
.org 0x2282
	ldr r5, [r3, #8]	@ 00002282 9d68
.org 0x2284
	ands r5, r1	@ 00002284 0d40
.org 0x2286
	lsrs r5, r5, #5	@ 00002286 6d09
.org 0x2288
	muls r5, r2	@ 00002288 5543
.org 0x228a
	ldr r7, [r3, #8]	@ 0000228a 9f68
.org 0x228c
	ands r7, r5	@ 0000228c 2f40
.org 0x228e
	orrs r6, r7	@ 0000228e 3e43
.org 0x2290
	mov r1, lr	@ 00002290 7146
.org 0x2292
	str r6, [r1, #0]	@ 00002292 0e60
.org 0x2294
	adds r0, #4	@ 00002294 0430
.org 0x2296
	adds r1, #4	@ 00002296 0431
.org 0x2298
	subs r4, #1	@ 00002298 013c
.org 0x229a
	bpl.n 0x2264	@ 0000229a e3d5
.org 0x229c
	pop {r4, r5, r6, r7}	@ 0000229c f0bc
.org 0x229e
	pop {r0}	@ 0000229e 01bc
.org 0x22a0
	mov lr, r0	@ 000022a0 8646
.org 0x22a2
	bx lr	@ 000022a2 7047
