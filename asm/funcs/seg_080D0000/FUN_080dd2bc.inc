@ FUN_080dd2bc  entry 0x080dd2bc  size 182
.thumb
.org 0xdd2bc
FUN_080dd2bc:
	push {r4, r5, lr}	@ 000dd2bc 30b5
.org 0xdd2be
	adds r4, r0, #0	@ 000dd2be 041c
.org 0xdd2c0
	bl 0x1cff0	@ 000dd2c0 3ff796fe
.org 0xdd2c4
	ldrb r0, [r4, #18]	@ 000dd2c4 a07c
.org 0xdd2c6
	ldrb r1, [r4, #19]	@ 000dd2c6 e17c
.org 0xdd2c8
	adds r0, r0, r1	@ 000dd2c8 4018
.org 0xdd2ca
	strb r0, [r4, #19]	@ 000dd2ca e074
.org 0xdd2cc
	adds r1, r4, #0	@ 000dd2cc 211c
.org 0xdd2ce
	adds r1, #36	@ 000dd2ce 2431
.org 0xdd2d0
	strb r0, [r1, #0]	@ 000dd2d0 0870
.org 0xdd2d2
	ldr r0, [r4, #84]	@ 000dd2d2 606d
.org 0xdd2d4
	ldr r1, [r4, #92]	@ 000dd2d4 e16d
.org 0xdd2d6
	adds r0, r0, r1	@ 000dd2d6 4018
.org 0xdd2d8
	str r0, [r4, #84]	@ 000dd2d8 6065
.org 0xdd2da
	ldr r1, [r4, #88]	@ 000dd2da a16d
.org 0xdd2dc
	bl 0x7c7c	@ 000dd2dc 2af7cefc
.org 0xdd2e0
	lsls r0, r0, #16	@ 000dd2e0 0004
.org 0xdd2e2
	cmp r0, #0	@ 000dd2e2 0028
.org 0xdd2e4
	beq.n 0xdd2ee	@ 000dd2e4 03d0
.org 0xdd2e6
	ldr r0, [r4, #92]	@ 000dd2e6 e06d
.org 0xdd2e8
	asrs r0, r0, #1	@ 000dd2e8 4010
.org 0xdd2ea
	negs r0, r0	@ 000dd2ea 4042
.org 0xdd2ec
	str r0, [r4, #92]	@ 000dd2ec e065
.org 0xdd2ee
	ldr r0, [r4, #88]	@ 000dd2ee a06d
.org 0xdd2f0
	ldr r1, [r4, #96]	@ 000dd2f0 216e
.org 0xdd2f2
	adds r0, r0, r1	@ 000dd2f2 4018
.org 0xdd2f4
	str r0, [r4, #88]	@ 000dd2f4 a065
.org 0xdd2f6
	adds r1, #64	@ 000dd2f6 4031
.org 0xdd2f8
	str r1, [r4, #96]	@ 000dd2f8 2166
.org 0xdd2fa
	movs r0, #224	@ 000dd2fa e020
.org 0xdd2fc
	lsls r0, r0, #3	@ 000dd2fc c000
.org 0xdd2fe
	cmp r1, r0	@ 000dd2fe 8142
.org 0xdd300
	ble.n 0xdd304	@ 000dd300 00dd
.org 0xdd302
	str r0, [r4, #96]	@ 000dd302 2066
.org 0xdd304
	ldr r0, [r4, #96]	@ 000dd304 206e
.org 0xdd306
	adds r5, r4, #0	@ 000dd306 251c
.org 0xdd308
	adds r5, #125	@ 000dd308 7d35
.org 0xdd30a
	cmp r0, #64	@ 000dd30a 4028
.org 0xdd30c
	ble.n 0xdd334	@ 000dd30c 12dd
.org 0xdd30e
	ldr r0, [r4, #84]	@ 000dd30e 606d
.org 0xdd310
	ldr r1, [r4, #88]	@ 000dd310 a16d
.org 0xdd312
	bl 0x7c7c	@ 000dd312 2af7b3fc
.org 0xdd316
	lsls r0, r0, #16	@ 000dd316 0004
.org 0xdd318
	cmp r0, #0	@ 000dd318 0028
.org 0xdd31a
	beq.n 0xdd334	@ 000dd31a 0bd0
.org 0xdd31c
	ldr r0, [r4, #84]	@ 000dd31c 606d
.org 0xdd31e
	ldr r1, [r4, #88]	@ 000dd31e a16d
.org 0xdd320
	bl 0x8534	@ 000dd320 2bf708f9
.org 0xdd324
	str r0, [r4, #88]	@ 000dd324 a065
.org 0xdd326
	ldr r0, [r4, #96]	@ 000dd326 206e
.org 0xdd328
	asrs r0, r0, #1	@ 000dd328 4010
.org 0xdd32a
	negs r0, r0	@ 000dd32a 4042
.org 0xdd32c
	str r0, [r4, #96]	@ 000dd32c 2066
.org 0xdd32e
	ldrb r0, [r5, #0]	@ 000dd32e 2878
.org 0xdd330
	adds r0, #1	@ 000dd330 0130
.org 0xdd332
	strb r0, [r5, #0]	@ 000dd332 2870
.org 0xdd334
	ldrb r1, [r4, #19]	@ 000dd334 e17c
.org 0xdd336
	movs r0, #1	@ 000dd336 0120
.org 0xdd338
	ands r0, r1	@ 000dd338 0840
.org 0xdd33a
	cmp r0, #0	@ 000dd33a 0028
.org 0xdd33c
	beq.n 0xdd346	@ 000dd33c 03d0
.org 0xdd33e
	ldrb r1, [r4, #10]	@ 000dd33e a17a
.org 0xdd340
	movs r0, #1	@ 000dd340 0120
.org 0xdd342
	orrs r0, r1	@ 000dd342 0843
.org 0xdd344
	b.n 0xdd34c	@ 000dd344 02e0
.org 0xdd346
	ldrb r1, [r4, #10]	@ 000dd346 a17a
.org 0xdd348
	movs r0, #254	@ 000dd348 fe20
.org 0xdd34a
	ands r0, r1	@ 000dd34a 0840
.org 0xdd34c
	strb r0, [r4, #10]	@ 000dd34c a072
.org 0xdd34e
	ldrb r0, [r5, #0]	@ 000dd34e 2878
.org 0xdd350
	cmp r0, #2	@ 000dd350 0228
.org 0xdd352
	bls.n 0xdd36c	@ 000dd352 0bd9
.org 0xdd354
	ldr r1, [pc, #28]	@ 000dd354 0749
.org 0xdd356
	ldrb r0, [r4, #9]	@ 000dd356 607a
.org 0xdd358
	lsls r0, r0, #2	@ 000dd358 8000
.org 0xdd35a
	adds r0, r0, r1	@ 000dd35a 4018
.org 0xdd35c
	movs r1, #2	@ 000dd35c 0221
.org 0xdd35e
	str r1, [r4, #12]	@ 000dd35e e160
.org 0xdd360
	ldr r0, [r0, #0]	@ 000dd360 0068
.org 0xdd362
	ldr r0, [r0, #8]	@ 000dd362 8068
.org 0xdd364
	str r0, [r4, #20]	@ 000dd364 6061
.org 0xdd366
	adds r0, r4, #0	@ 000dd366 201c
.org 0xdd368
	bl 0xdcdf0	@ 000dd368 fff742fd
.org 0xdd36c
	pop {r4, r5}	@ 000dd36c 30bc
.org 0xdd36e
	pop {r0}	@ 000dd36e 01bc
.org 0xdd370
	bx r0	@ 000dd370 0047
