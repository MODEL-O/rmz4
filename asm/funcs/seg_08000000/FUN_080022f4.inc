@ FUN_080022f4  entry 0x080022f4  size 82
.thumb
.org 0x22f4
FUN_080022f4:
	push {r4, r5, r6, r7}	@ 000022f4 f0b4
.org 0x22f6
	movs r7, #255	@ 000022f6 ff27
.org 0x22f8
	push {r0, r1, r7}	@ 000022f8 83b4
.org 0x22fa
	ldr r1, [r0, #0]	@ 000022fa 0168
.org 0x22fc
	ldr r4, [r2, #0]	@ 000022fc 1468
.org 0x22fe
	ldr r5, [r2, #12]	@ 000022fe d568
.org 0x2300
	ldr r0, [r3, #0]	@ 00002300 1868
.org 0x2302
	ands r0, r1	@ 00002302 0840
.org 0x2304
	muls r0, r4	@ 00002304 6043
.org 0x2306
	lsrs r0, r0, #5	@ 00002306 4009
.org 0x2308
	adds r0, r0, r5	@ 00002308 4019
.org 0x230a
	ldr r6, [r3, #0]	@ 0000230a 1e68
.org 0x230c
	ands r6, r0	@ 0000230c 0640
.org 0x230e
	ldr r4, [r2, #4]	@ 0000230e 5468
.org 0x2310
	ldr r5, [r2, #16]	@ 00002310 1569
.org 0x2312
	ldr r0, [r3, #4]	@ 00002312 5868
.org 0x2314
	ands r0, r1	@ 00002314 0840
.org 0x2316
	muls r0, r4	@ 00002316 6043
.org 0x2318
	lsrs r0, r0, #5	@ 00002318 4009
.org 0x231a
	adds r0, r0, r5	@ 0000231a 4019
.org 0x231c
	ldr r7, [r3, #4]	@ 0000231c 5f68
.org 0x231e
	ands r7, r0	@ 0000231e 0740
.org 0x2320
	orrs r6, r7	@ 00002320 3e43
.org 0x2322
	ldr r4, [r2, #8]	@ 00002322 9468
.org 0x2324
	ldr r5, [r2, #20]	@ 00002324 5569
.org 0x2326
	ldr r0, [r3, #8]	@ 00002326 9868
.org 0x2328
	ands r0, r1	@ 00002328 0840
.org 0x232a
	lsrs r0, r0, #5	@ 0000232a 4009
.org 0x232c
	muls r0, r4	@ 0000232c 6043
.org 0x232e
	ldr r7, [r3, #8]	@ 0000232e 9f68
.org 0x2330
	adds r0, r0, r5	@ 00002330 4019
.org 0x2332
	ands r7, r0	@ 00002332 0740
.org 0x2334
	orrs r6, r7	@ 00002334 3e43
.org 0x2336
	pop {r0, r1, r7}	@ 00002336 83bc
.org 0x2338
	str r6, [r1, #0]	@ 00002338 0e60
.org 0x233a
	adds r0, #4	@ 0000233a 0430
.org 0x233c
	adds r1, #4	@ 0000233c 0431
.org 0x233e
	subs r7, #1	@ 0000233e 013f
.org 0x2340
	bpl.n 0x22f8	@ 00002340 dad5
.org 0x2342
	pop {r4, r5, r6, r7}	@ 00002342 f0bc
.org 0x2344
	bx lr	@ 00002344 7047
