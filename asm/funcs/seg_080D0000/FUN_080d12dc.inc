@ FUN_080d12dc  entry 0x080d12dc  size 128
.thumb
.org 0xd12dc
FUN_080d12dc:
	push {r4, r5, r6, lr}	@ 000d12dc 70b5
.org 0xd12de
	adds r4, r0, #0	@ 000d12de 041c
.org 0xd12e0
	bl 0x1cc9c	@ 000d12e0 4bf7dcfc
.org 0xd12e4
	ldrb r1, [r4, #10]	@ 000d12e4 a17a
.org 0xd12e6
	movs r0, #1	@ 000d12e6 0120
.org 0xd12e8
	orrs r0, r1	@ 000d12e8 0843
.org 0xd12ea
	strb r0, [r4, #10]	@ 000d12ea a072
.org 0xd12ec
	adds r0, r4, #0	@ 000d12ec 201c
.org 0xd12ee
	movs r1, #12	@ 000d12ee 0c21
.org 0xd12f0
	bl 0x1cf00	@ 000d12f0 4bf706fe
.org 0xd12f4
	movs r0, #128	@ 000d12f4 8020
.org 0xd12f6
	lsls r0, r0, #2	@ 000d12f6 8000
.org 0xd12f8
	str r0, [r4, #92]	@ 000d12f8 e065
.org 0xd12fa
	ldr r6, [pc, #96]	@ 000d12fa 184e
.org 0xd12fc
	ldr r0, [r6, #0]	@ 000d12fc 3068
.org 0xd12fe
	ldr r3, [pc, #96]	@ 000d12fe 184b
.org 0xd1300
	muls r0, r3	@ 000d1300 5843
.org 0xd1302
	ldr r2, [pc, #96]	@ 000d1302 184a
.org 0xd1304
	adds r0, r0, r2	@ 000d1304 8018
.org 0xd1306
	lsls r0, r0, #1	@ 000d1306 4000
.org 0xd1308
	lsrs r5, r0, #1	@ 000d1308 4508
.org 0xd130a
	lsrs r0, r0, #17	@ 000d130a 400c
.org 0xd130c
	movs r1, #255	@ 000d130c ff21
.org 0xd130e
	ands r0, r1	@ 000d130e 0840
.org 0xd1310
	movs r1, #128	@ 000d1310 8021
.org 0xd1312
	lsls r1, r1, #3	@ 000d1312 c900
.org 0xd1314
	adds r0, r0, r1	@ 000d1314 4018
.org 0xd1316
	str r0, [r4, #96]	@ 000d1316 2066
.org 0xd1318
	ldr r0, [r4, #84]	@ 000d1318 606d
.org 0xd131a
	str r0, [r4, #116]	@ 000d131a 6067
.org 0xd131c
	adds r0, r5, #0	@ 000d131c 281c
.org 0xd131e
	muls r0, r3	@ 000d131e 5843
.org 0xd1320
	adds r0, r0, r2	@ 000d1320 8018
.org 0xd1322
	lsls r0, r0, #1	@ 000d1322 4000
.org 0xd1324
	lsrs r1, r0, #1	@ 000d1324 4108
.org 0xd1326
	lsrs r0, r0, #17	@ 000d1326 400c
.org 0xd1328
	strb r0, [r4, #18]	@ 000d1328 a074
.org 0xd132a
	adds r0, r1, #0	@ 000d132a 081c
.org 0xd132c
	muls r0, r3	@ 000d132c 5843
.org 0xd132e
	adds r0, r0, r2	@ 000d132e 8018
.org 0xd1330
	lsls r0, r0, #1	@ 000d1330 4000
.org 0xd1332
	lsrs r1, r0, #1	@ 000d1332 4108
.org 0xd1334
	str r1, [r6, #0]	@ 000d1334 3160
.org 0xd1336
	lsrs r0, r0, #17	@ 000d1336 400c
.org 0xd1338
	strb r0, [r4, #19]	@ 000d1338 e074
.org 0xd133a
	movs r0, #128	@ 000d133a 8020
.org 0xd133c
	str r0, [r4, #120]	@ 000d133c a067
.org 0xd133e
	ldr r1, [pc, #40]	@ 000d133e 0a49
.org 0xd1340
	ldrb r0, [r4, #9]	@ 000d1340 607a
.org 0xd1342
	lsls r0, r0, #2	@ 000d1342 8000
.org 0xd1344
	adds r0, r0, r1	@ 000d1344 4018
.org 0xd1346
	movs r1, #1	@ 000d1346 0121
.org 0xd1348
	str r1, [r4, #12]	@ 000d1348 e160
.org 0xd134a
	ldr r0, [r0, #0]	@ 000d134a 0068
.org 0xd134c
	ldr r0, [r0, #4]	@ 000d134c 4068
.org 0xd134e
	str r0, [r4, #20]	@ 000d134e 6061
.org 0xd1350
	adds r0, r4, #0	@ 000d1350 201c
.org 0xd1352
	bl 0xd108c	@ 000d1352 fff79bfe
.org 0xd1356
	pop {r4, r5, r6}	@ 000d1356 70bc
.org 0xd1358
	pop {r0}	@ 000d1358 01bc
.org 0xd135a
	bx r0	@ 000d135a 0047
