@ FUN_080a12f4  entry 0x080a12f4  size 280
.thumb
.org 0xa12f4
FUN_080a12f4:
	push {r4, r5, r6, lr}	@ 000a12f4 70b5
.org 0xa12f6
	adds r4, r0, #0	@ 000a12f6 041c
.org 0xa12f8
	adds r5, r4, #0	@ 000a12f8 251c
.org 0xa12fa
	adds r5, #140	@ 000a12fa 8c35
.org 0xa12fc
	ldr r0, [r5, #0]	@ 000a12fc 2868
.org 0xa12fe
	movs r6, #1	@ 000a12fe 0126
.org 0xa1300
	ands r0, r6	@ 000a1300 3040
.org 0xa1302
	cmp r0, #0	@ 000a1302 0028
.org 0xa1304
	beq.n 0xa130c	@ 000a1304 02d0
.org 0xa1306
	movs r0, #9	@ 000a1306 0920
.org 0xa1308
	bl 0x6984	@ 000a1308 65f73cfb
.org 0xa130c
	ldr r0, [pc, #68]	@ 000a130c 1148
.org 0xa130e
	adds r1, r4, #0	@ 000a130e 211c
.org 0xa1310
	adds r1, #84	@ 000a1310 5431
.org 0xa1312
	bl 0x1fb14	@ 000a1312 7ef7fffb
.org 0xa1316
	movs r1, #128	@ 000a1316 8021
.org 0xa1318
	lsls r1, r1, #8	@ 000a1318 0902
.org 0xa131a
	cmp r0, r1	@ 000a131a 8842
.org 0xa131c
	bls.n 0xa135c	@ 000a131c 1ed9
.org 0xa131e
	ldrb r1, [r4, #10]	@ 000a131e a17a
.org 0xa1320
	movs r0, #254	@ 000a1320 fe20
.org 0xa1322
	ands r0, r1	@ 000a1322 0840
.org 0xa1324
	movs r2, #0	@ 000a1324 0022
.org 0xa1326
	movs r1, #253	@ 000a1326 fd21
.org 0xa1328
	ands r0, r1	@ 000a1328 0840
.org 0xa132a
	strb r0, [r4, #10]	@ 000a132a a072
.org 0xa132c
	str r2, [r5, #0]	@ 000a132c 2a60
.org 0xa132e
	adds r0, r4, #0	@ 000a132e 201c
.org 0xa1330
	adds r0, #144	@ 000a1330 9030
.org 0xa1332
	str r2, [r0, #0]	@ 000a1332 0260
.org 0xa1334
	adds r0, #4	@ 000a1334 0430
.org 0xa1336
	strb r2, [r0, #0]	@ 000a1336 0270
.org 0xa1338
	ldrb r1, [r4, #10]	@ 000a1338 a17a
.org 0xa133a
	movs r0, #251	@ 000a133a fb20
.org 0xa133c
	ands r0, r1	@ 000a133c 0840
.org 0xa133e
	strb r0, [r4, #10]	@ 000a133e a072
.org 0xa1340
	ldr r1, [pc, #20]	@ 000a1340 0549
.org 0xa1342
	ldrb r0, [r4, #9]	@ 000a1342 607a
.org 0xa1344
	lsls r0, r0, #2	@ 000a1344 8000
.org 0xa1346
	adds r0, r0, r1	@ 000a1346 4018
.org 0xa1348
	movs r1, #3	@ 000a1348 0321
.org 0xa134a
	str r1, [r4, #12]	@ 000a134a e160
.org 0xa134c
	ldr r0, [r0, #0]	@ 000a134c 0068
.org 0xa134e
	ldr r0, [r0, #12]	@ 000a134e c068
.org 0xa1350
	str r0, [r4, #20]	@ 000a1350 6061
.org 0xa1352
	b.n 0xa1414	@ 000a1352 5fe0
.org 0xa1354
	.byte 0xf8,0xe9,0x02,0x02	@ 000a1354 data
.org 0xa1358
	.byte 0x40,0xdb,0x85,0x08	@ 000a1358 data
.org 0xa135c
	ldr r1, [r5, #0]	@ 000a135c 2968
.org 0xa135e
	movs r0, #128	@ 000a135e 8020
.org 0xa1360
	lsls r0, r0, #2	@ 000a1360 8000
.org 0xa1362
	ands r0, r1	@ 000a1362 0840
.org 0xa1364
	cmp r0, #0	@ 000a1364 0028
.org 0xa1366
	beq.n 0xa13b6	@ 000a1366 26d0
.org 0xa1368
	ldr r1, [pc, #36]	@ 000a1368 0949
.org 0xa136a
	ldrb r0, [r4, #9]	@ 000a136a 607a
.org 0xa136c
	lsls r0, r0, #2	@ 000a136c 8000
.org 0xa136e
	adds r0, r0, r1	@ 000a136e 4018
.org 0xa1370
	movs r1, #2	@ 000a1370 0221
.org 0xa1372
	str r1, [r4, #12]	@ 000a1372 e160
.org 0xa1374
	ldr r0, [r0, #0]	@ 000a1374 0068
.org 0xa1376
	ldr r0, [r0, #8]	@ 000a1376 8068
.org 0xa1378
	str r0, [r4, #20]	@ 000a1378 6061
.org 0xa137a
	adds r0, r4, #0	@ 000a137a 201c
.org 0xa137c
	adds r0, #188	@ 000a137c bc30
.org 0xa137e
	ldrb r2, [r0, #0]	@ 000a137e 0278
.org 0xa1380
	cmp r2, #0	@ 000a1380 002a
.org 0xa1382
	beq.n 0xa1394	@ 000a1382 07d0
.org 0xa1384
	movs r0, #0	@ 000a1384 0020
.org 0xa1386
	strb r1, [r4, #13]	@ 000a1386 6173
.org 0xa1388
	strb r0, [r4, #14]	@ 000a1388 a073
.org 0xa138a
	strb r0, [r4, #15]	@ 000a138a e073
.org 0xa138c
	b.n 0xa13ae	@ 000a138c 0fe0
.org 0xa138e
	.byte 0x00	@ 000a138e data
.org 0xa138f
	.byte 0x00	@ 000a138f data
.org 0xa1390
	.byte 0x40,0xdb,0x85,0x08	@ 000a1390 data
.org 0xa1394
	ldr r1, [r5, #0]	@ 000a1394 2968
.org 0xa1396
	movs r0, #128	@ 000a1396 8020
.org 0xa1398
	lsls r0, r0, #9	@ 000a1398 4002
.org 0xa139a
	ands r1, r0	@ 000a139a 0140
.org 0xa139c
	cmp r1, #0	@ 000a139c 0029
.org 0xa139e
	beq.n 0xa13a8	@ 000a139e 03d0
.org 0xa13a0
	strb r6, [r4, #13]	@ 000a13a0 6673
.org 0xa13a2
	strb r2, [r4, #14]	@ 000a13a2 a273
.org 0xa13a4
	strb r2, [r4, #15]	@ 000a13a4 e273
.org 0xa13a6
	b.n 0xa13ae	@ 000a13a6 02e0
.org 0xa13a8
	strb r1, [r4, #13]	@ 000a13a8 6173
.org 0xa13aa
	strb r1, [r4, #14]	@ 000a13aa a173
.org 0xa13ac
	strb r1, [r4, #15]	@ 000a13ac e173
.org 0xa13ae
	adds r0, r4, #0	@ 000a13ae 201c
.org 0xa13b0
	bl 0xa1600	@ 000a13b0 00f026f9
.org 0xa13b4
	b.n 0xa1414	@ 000a13b4 2ee0
.org 0xa13b6
	ands r1, r6	@ 000a13b6 3140
.org 0xa13b8
	cmp r1, #0	@ 000a13b8 0029
.org 0xa13ba
	beq.n 0xa13e2	@ 000a13ba 12d0
.org 0xa13bc
	ldr r0, [r4, #44]	@ 000a13bc e06a
.org 0xa13be
	cmp r0, #0	@ 000a13be 0028
.org 0xa13c0
	bne.n 0xa13e8	@ 000a13c0 12d1
.org 0xa13c2
	ldr r2, [pc, #88]	@ 000a13c2 164a
.org 0xa13c4
	movs r0, #0	@ 000a13c4 0020
.org 0xa13c6
	adds r1, r4, #0	@ 000a13c6 211c
.org 0xa13c8
	bl 0x2adac	@ 000a13c8 89f7f0fc
.org 0xa13cc
	str r0, [r4, #44]	@ 000a13cc e062
.org 0xa13ce
	cmp r0, #0	@ 000a13ce 0028
.org 0xa13d0
	beq.n 0xa1404	@ 000a13d0 18d0
.org 0xa13d2
	ldrb r0, [r4, #13]	@ 000a13d2 607b
.org 0xa13d4
	cmp r0, #0	@ 000a13d4 0028
.org 0xa13d6
	beq.n 0xa13e2	@ 000a13d6 04d0
.org 0xa13d8
	adds r0, r4, #0	@ 000a13d8 201c
.org 0xa13da
	adds r0, #116	@ 000a13da 7430
.org 0xa13dc
	ldr r1, [pc, #64]	@ 000a13dc 1049
.org 0xa13de
	bl 0x5784	@ 000a13de 64f7d1f9
.org 0xa13e2
	ldr r0, [r4, #44]	@ 000a13e2 e06a
.org 0xa13e4
	cmp r0, #0	@ 000a13e4 0028
.org 0xa13e6
	beq.n 0xa1404	@ 000a13e6 0dd0
.org 0xa13e8
	bl 0x2b3e4	@ 000a13e8 89f7fcff
.org 0xa13ec
	cmp r0, #0	@ 000a13ec 0028
.org 0xa13ee
	beq.n 0xa1414	@ 000a13ee 11d0
.org 0xa13f0
	movs r0, #0	@ 000a13f0 0020
.org 0xa13f2
	str r0, [r4, #44]	@ 000a13f2 e062
.org 0xa13f4
	ldrb r0, [r4, #13]	@ 000a13f4 607b
.org 0xa13f6
	cmp r0, #0	@ 000a13f6 0028
.org 0xa13f8
	beq.n 0xa1404	@ 000a13f8 04d0
.org 0xa13fa
	adds r0, r4, #0	@ 000a13fa 201c
.org 0xa13fc
	adds r0, #116	@ 000a13fc 7430
.org 0xa13fe
	ldr r1, [pc, #36]	@ 000a13fe 0949
.org 0xa1400
	bl 0x5784	@ 000a1400 64f7c0f9
.org 0xa1404
	ldr r0, [pc, #32]	@ 000a1404 0848
.org 0xa1406
	ldrb r1, [r4, #13]	@ 000a1406 617b
.org 0xa1408
	lsls r1, r1, #2	@ 000a1408 8900
.org 0xa140a
	adds r1, r1, r0	@ 000a140a 0918
