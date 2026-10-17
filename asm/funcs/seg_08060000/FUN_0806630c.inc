@ FUN_0806630c  entry 0x0806630c  size 68
.thumb
.org 0x6630c
FUN_0806630c:
	push {r4, r5, r6, lr}	@ 0006630c 70b5
.org 0x6630e
	sub sp, #8	@ 0006630e 82b0
.org 0x66310
	ldr r1, [pc, #60]	@ 00066310 0f49
.org 0x66312
	ldr r4, [r1, #0]	@ 00066312 0c68
.org 0x66314
	ldrb r1, [r4, #10]	@ 00066314 a17a
.org 0x66316
	lsrs r1, r1, #4	@ 00066316 0909
.org 0x66318
	movs r3, #1	@ 00066318 0123
.org 0x6631a
	ands r1, r3	@ 0006631a 1940
.org 0x6631c
	ldr r5, [r4, #84]	@ 0006631c 656d
.org 0x6631e
	ldr r3, [r4, #88]	@ 0006631e a36d
.org 0x66320
	ldr r4, [pc, #48]	@ 00066320 0c4c
.org 0x66322
	adds r6, r3, r4	@ 00066322 1e19
.org 0x66324
	ldr r4, [pc, #48]	@ 00066324 0c4c
.org 0x66326
	lsls r2, r2, #3	@ 00066326 d200
.org 0x66328
	adds r3, r2, r4	@ 00066328 1319
.org 0x6632a
	lsls r1, r1, #1	@ 0006632a 4900
.org 0x6632c
	subs r1, #1	@ 0006632c 0139
.org 0x6632e
	ldr r3, [r3, #0]	@ 0006632e 1b68
.org 0x66330
	muls r1, r3	@ 00066330 5943
.org 0x66332
	adds r1, r5, r1	@ 00066332 6918
.org 0x66334
	str r1, [sp, #0]	@ 00066334 0091
.org 0x66336
	adds r4, #4	@ 00066336 0434
.org 0x66338
	adds r2, r2, r4	@ 00066338 1219
.org 0x6633a
	ldr r1, [r2, #0]	@ 0006633a 1168
.org 0x6633c
	adds r5, r6, r1	@ 0006633c 7518
.org 0x6633e
	str r5, [sp, #4]	@ 0006633e 0195
.org 0x66340
	ldr r1, [sp, #0]	@ 00066340 0099
.org 0x66342
	ldr r2, [sp, #4]	@ 00066342 019a
.org 0x66344
	str r1, [r0, #0]	@ 00066344 0160
.org 0x66346
	str r2, [r0, #4]	@ 00066346 4260
.org 0x66348
	add sp, #8	@ 00066348 02b0
.org 0x6634a
	pop {r4, r5, r6}	@ 0006634a 70bc
.org 0x6634c
	pop {r2}	@ 0006634c 04bc
.org 0x6634e
	bx r2	@ 0006634e 1047
