@ FUN_080e1310  entry 0x080e1310  size 272
.thumb
.org 0xe1310
FUN_080e1310:
	push {r4, lr}	@ 000e1310 10b5
.org 0xe1312
	sub sp, #16	@ 000e1312 84b0
.org 0xe1314
	adds r4, r0, #0	@ 000e1314 041c
.org 0xe1316
	ldr r1, [pc, #88]	@ 000e1316 1649
.org 0xe1318
	mov r0, sp	@ 000e1318 6846
.org 0xe131a
	movs r2, #16	@ 000e131a 1022
.org 0xe131c
	bl 0x129258	@ 000e131c 47f09cff
.org 0xe1320
	adds r0, r4, #0	@ 000e1320 201c
.org 0xe1322
	bl 0x1cc9c	@ 000e1322 3bf7bbfc
.org 0xe1326
	ldrb r1, [r4, #10]	@ 000e1326 a17a
.org 0xe1328
	movs r0, #1	@ 000e1328 0120
.org 0xe132a
	orrs r0, r1	@ 000e132a 0843
.org 0xe132c
	movs r1, #2	@ 000e132c 0221
.org 0xe132e
	orrs r0, r1	@ 000e132e 0843
.org 0xe1330
	movs r1, #239	@ 000e1330 ef21
.org 0xe1332
	ands r0, r1	@ 000e1332 0840
.org 0xe1334
	movs r1, #0	@ 000e1334 0021
.org 0xe1336
	strb r0, [r4, #10]	@ 000e1336 a072
.org 0xe1338
	adds r0, r4, #0	@ 000e1338 201c
.org 0xe133a
	adds r0, #76	@ 000e133a 4c30
.org 0xe133c
	strb r1, [r0, #0]	@ 000e133c 0170
.org 0xe133e
	adds r2, r4, #0	@ 000e133e 221c
.org 0xe1340
	adds r2, #74	@ 000e1340 4a32
.org 0xe1342
	ldrb r1, [r2, #0]	@ 000e1342 1178
.org 0xe1344
	movs r0, #17	@ 000e1344 1120
.org 0xe1346
	negs r0, r0	@ 000e1346 4042
.org 0xe1348
	ands r0, r1	@ 000e1348 0840
.org 0xe134a
	strb r0, [r2, #0]	@ 000e134a 1070
.org 0xe134c
	adds r0, r4, #0	@ 000e134c 201c
.org 0xe134e
	bl 0xe1484	@ 000e134e 00f099f8
.org 0xe1352
	lsls r2, r0, #24	@ 000e1352 0206
.org 0xe1354
	lsrs r3, r2, #24	@ 000e1354 130e
.org 0xe1356
	cmp r3, #255	@ 000e1356 ff2b
.org 0xe1358
	beq.n 0xe1400	@ 000e1358 52d0
.org 0xe135a
	adds r0, r3, #0	@ 000e135a 181c
.org 0xe135c
	movs r1, #1	@ 000e135c 0121
.org 0xe135e
	ands r0, r1	@ 000e135e 0840
.org 0xe1360
	cmp r0, #0	@ 000e1360 0028
.org 0xe1362
	bne.n 0xe1374	@ 000e1362 07d1
.org 0xe1364
	lsrs r0, r2, #25	@ 000e1364 500e
.org 0xe1366
	lsls r0, r0, #2	@ 000e1366 8000
.org 0xe1368
	add r0, sp	@ 000e1368 6844
.org 0xe136a
	movs r1, #0	@ 000e136a 0021
.org 0xe136c
	ldrsh r0, [r0, r1]	@ 000e136c 405e
.org 0xe136e
	b.n 0xe138a	@ 000e136e 0ce0
.org 0xe1370
	.byte 0x88,0xa2,0x12,0x08	@ 000e1370 data
.org 0xe1374
	lsrs r0, r2, #25	@ 000e1374 500e
.org 0xe1376
	lsls r0, r0, #2	@ 000e1376 8000
.org 0xe1378
	add r0, sp	@ 000e1378 6844
.org 0xe137a
	movs r1, #0	@ 000e137a 0021
.org 0xe137c
	ldrsh r0, [r0, r1]	@ 000e137c 405e
.org 0xe137e
	lsls r0, r0, #8	@ 000e137e 0002
.org 0xe1380
	negs r0, r0	@ 000e1380 4042
.org 0xe1382
	cmp r0, #0	@ 000e1382 0028
.org 0xe1384
	bge.n 0xe1388	@ 000e1384 00da
.org 0xe1386
	adds r0, #255	@ 000e1386 ff30
.org 0xe1388
	asrs r0, r0, #8	@ 000e1388 0012
.org 0xe138a
	str r0, [r4, #92]	@ 000e138a e065
.org 0xe138c
	lsrs r1, r3, #1	@ 000e138c 5908
.org 0xe138e
	lsls r1, r1, #2	@ 000e138e 8900
.org 0xe1390
	mov r0, sp	@ 000e1390 6846
.org 0xe1392
	adds r0, #2	@ 000e1392 0230
.org 0xe1394
	adds r0, r0, r1	@ 000e1394 4018
.org 0xe1396
	movs r1, #0	@ 000e1396 0021
.org 0xe1398
	ldrsh r0, [r0, r1]	@ 000e1398 405e
.org 0xe139a
	str r0, [r4, #96]	@ 000e139a 2066
.org 0xe139c
	ldrb r0, [r4, #16]	@ 000e139c 207c
.org 0xe139e
	cmp r0, #1	@ 000e139e 0128
.org 0xe13a0
	bne.n 0xe13b6	@ 000e13a0 09d1
.org 0xe13a2
	ldr r1, [r4, #92]	@ 000e13a2 e16d
.org 0xe13a4
	lsls r0, r1, #1	@ 000e13a4 4800
.org 0xe13a6
	adds r0, r0, r1	@ 000e13a6 4018
.org 0xe13a8
	lsls r0, r0, #7	@ 000e13a8 c001
.org 0xe13aa
	subs r0, r0, r1	@ 000e13aa 401a
.org 0xe13ac
	cmp r0, #0	@ 000e13ac 0028
.org 0xe13ae
	bge.n 0xe13b2	@ 000e13ae 00da
.org 0xe13b0
	adds r0, #255	@ 000e13b0 ff30
.org 0xe13b2
	asrs r0, r0, #8	@ 000e13b2 0012
.org 0xe13b4
	str r0, [r4, #92]	@ 000e13b4 e065
.org 0xe13b6
	movs r0, #32	@ 000e13b6 2020
.org 0xe13b8
	str r0, [r4, #104]	@ 000e13b8 a066
.org 0xe13ba
	adds r0, r3, #0	@ 000e13ba 181c
.org 0xe13bc
	movs r1, #3	@ 000e13bc 0321
.org 0xe13be
	bl 0x129198	@ 000e13be 47f0ebfe
.org 0xe13c2
	lsls r0, r0, #24	@ 000e13c2 0006
.org 0xe13c4
	cmp r0, #0	@ 000e13c4 0028
.org 0xe13c6
	bne.n 0xe13d8	@ 000e13c6 07d1
.org 0xe13c8
	ldr r1, [pc, #8]	@ 000e13c8 0249
.org 0xe13ca
	adds r0, r4, #0	@ 000e13ca 201c
.org 0xe13cc
	bl 0x1cf00	@ 000e13cc 3bf798fd
.org 0xe13d0
	b.n 0xe13e0	@ 000e13d0 06e0
.org 0xe13d2
	.byte 0x00	@ 000e13d2 data
.org 0xe13d3
	.byte 0x00	@ 000e13d3 data
.org 0xe13d4
	.byte 0x11,0xd2,0x00,0x00	@ 000e13d4 data
.org 0xe13d8
	adds r0, r4, #0	@ 000e13d8 201c
.org 0xe13da
	movs r1, #15	@ 000e13da 0f21
.org 0xe13dc
	bl 0x1cf00	@ 000e13dc 3bf790fd
.org 0xe13e0
	ldr r1, [pc, #24]	@ 000e13e0 0649
.org 0xe13e2
	ldrb r0, [r4, #9]	@ 000e13e2 607a
.org 0xe13e4
	lsls r0, r0, #2	@ 000e13e4 8000
.org 0xe13e6
	adds r0, r0, r1	@ 000e13e6 4018
.org 0xe13e8
	movs r1, #1	@ 000e13e8 0121
.org 0xe13ea
	str r1, [r4, #12]	@ 000e13ea e160
.org 0xe13ec
	ldr r0, [r0, #0]	@ 000e13ec 0068
.org 0xe13ee
	ldr r0, [r0, #4]	@ 000e13ee 4068
.org 0xe13f0
	str r0, [r4, #20]	@ 000e13f0 6061
.org 0xe13f2
	adds r0, r4, #0	@ 000e13f2 201c
.org 0xe13f4
	bl 0xe1434	@ 000e13f4 00f01ef8
.org 0xe13f8
	b.n 0xe1428	@ 000e13f8 16e0
.org 0xe13fa
	.byte 0x00	@ 000e13fa data
.org 0xe13fb
	.byte 0x00	@ 000e13fb data
.org 0xe13fc
	.byte 0x64,0x6f,0x86,0x08	@ 000e13fc data
.org 0xe1400
	adds r1, r4, #0	@ 000e1400 211c
.org 0xe1402
	adds r1, #120	@ 000e1402 7831
.org 0xe1404
	movs r0, #0	@ 000e1404 0020
.org 0xe1406
	strb r0, [r1, #0]	@ 000e1406 0870
.org 0xe1408
	ldrb r1, [r4, #10]	@ 000e1408 a17a
.org 0xe140a
	movs r0, #254	@ 000e140a fe20
.org 0xe140c
	ands r0, r1	@ 000e140c 0840
.org 0xe140e
	strb r0, [r4, #10]	@ 000e140e a072
.org 0xe1410
	ldr r1, [pc, #28]	@ 000e1410 0749
.org 0xe1412
	ldrb r0, [r4, #9]	@ 000e1412 607a
.org 0xe1414
	lsls r0, r0, #2	@ 000e1414 8000
.org 0xe1416
	adds r0, r0, r1	@ 000e1416 4018
.org 0xe1418
	movs r1, #2	@ 000e1418 0221
.org 0xe141a
	str r1, [r4, #12]	@ 000e141a e160
.org 0xe141c
	ldr r0, [r0, #0]	@ 000e141c 0068
.org 0xe141e
	ldr r0, [r0, #8]	@ 000e141e 8068
