@ FUN_080cf304  entry 0x080cf304  size 74
.thumb
.org 0xcf304
FUN_080cf304:
	push {r4, lr}	@ 000cf304 10b5
.org 0xcf306
	adds r4, r0, #0	@ 000cf306 041c
.org 0xcf308
	ldr r0, [r4, #84]	@ 000cf308 606d
.org 0xcf30a
	ldr r1, [r4, #92]	@ 000cf30a e16d
.org 0xcf30c
	adds r0, r0, r1	@ 000cf30c 4018
.org 0xcf30e
	str r0, [r4, #84]	@ 000cf30e 6065
.org 0xcf310
	ldr r1, [r4, #88]	@ 000cf310 a16d
.org 0xcf312
	ldr r2, [r4, #96]	@ 000cf312 226e
.org 0xcf314
	adds r1, r1, r2	@ 000cf314 8918
.org 0xcf316
	str r1, [r4, #88]	@ 000cf316 a165
.org 0xcf318
	adds r2, #64	@ 000cf318 4032
.org 0xcf31a
	str r2, [r4, #96]	@ 000cf31a 2266
.org 0xcf31c
	bl 0x7c7c	@ 000cf31c 38f7aefc
.org 0xcf320
	lsls r0, r0, #16	@ 000cf320 0004
.org 0xcf322
	cmp r0, #0	@ 000cf322 0028
.org 0xcf324
	beq.n 0xcf342	@ 000cf324 0dd0
.org 0xcf326
	adds r1, r4, #0	@ 000cf326 211c
.org 0xcf328
	adds r1, #84	@ 000cf328 5431
.org 0xcf32a
	movs r0, #3	@ 000cf32a 0320
.org 0xcf32c
	bl 0xd0c88	@ 000cf32c 01f0acfc
.org 0xcf330
	ldr r1, [pc, #28]	@ 000cf330 0749
.org 0xcf332
	ldrb r0, [r4, #9]	@ 000cf332 607a
.org 0xcf334
	lsls r0, r0, #2	@ 000cf334 8000
.org 0xcf336
	adds r0, r0, r1	@ 000cf336 4018
.org 0xcf338
	movs r1, #2	@ 000cf338 0221
.org 0xcf33a
	str r1, [r4, #12]	@ 000cf33a e160
.org 0xcf33c
	ldr r0, [r0, #0]	@ 000cf33c 0068
.org 0xcf33e
	ldr r0, [r0, #8]	@ 000cf33e 8068
.org 0xcf340
	str r0, [r4, #20]	@ 000cf340 6061
.org 0xcf342
	adds r0, r4, #0	@ 000cf342 201c
.org 0xcf344
	bl 0x1cff0	@ 000cf344 4df754fe
.org 0xcf348
	pop {r4}	@ 000cf348 10bc
.org 0xcf34a
	pop {r0}	@ 000cf34a 01bc
.org 0xcf34c
	bx r0	@ 000cf34c 0047
