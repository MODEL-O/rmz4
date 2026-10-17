@ FUN_080f1330  entry 0x080f1330  size 172
.thumb
.org 0xf1330
FUN_080f1330:
	push {r4, r5, lr}	@ 000f1330 30b5
.org 0xf1332
	adds r4, r0, #0	@ 000f1332 041c
.org 0xf1334
	ldrb r5, [r4, #17]	@ 000f1334 657c
.org 0xf1336
	cmp r5, #1	@ 000f1336 012d
.org 0xf1338
	beq.n 0xf13a2	@ 000f1338 33d0
.org 0xf133a
	cmp r5, #1	@ 000f133a 012d
.org 0xf133c
	bgt.n 0xf1344	@ 000f133c 02dc
.org 0xf133e
	cmp r5, #0	@ 000f133e 002d
.org 0xf1340
	beq.n 0xf134a	@ 000f1340 03d0
.org 0xf1342
	b.n 0xf13dc	@ 000f1342 4be0
.org 0xf1344
	cmp r5, #2	@ 000f1344 022d
.org 0xf1346
	beq.n 0xf13c4	@ 000f1346 3dd0
.org 0xf1348
	b.n 0xf13dc	@ 000f1348 48e0
.org 0xf134a
	ldr r0, [pc, #108]	@ 000f134a 1b48
.org 0xf134c
	movs r2, #194	@ 000f134c c222
.org 0xf134e
	lsls r2, r2, #1	@ 000f134e 5200
.org 0xf1350
	adds r0, r0, r2	@ 000f1350 8018
.org 0xf1352
	movs r1, #128	@ 000f1352 8021
.org 0xf1354
	lsls r1, r1, #2	@ 000f1354 8900
.org 0xf1356
	strh r1, [r0, #0]	@ 000f1356 0180
.org 0xf1358
	ldr r0, [pc, #96]	@ 000f1358 1848
.org 0xf135a
	adds r0, r0, r2	@ 000f135a 8018
.org 0xf135c
	movs r1, #4	@ 000f135c 0421
.org 0xf135e
	strh r1, [r0, #0]	@ 000f135e 0180
.org 0xf1360
	movs r1, #194	@ 000f1360 c221
.org 0xf1362
	lsls r1, r1, #8	@ 000f1362 0902
.org 0xf1364
	adds r0, r4, #0	@ 000f1364 201c
.org 0xf1366
	bl 0x1cf00	@ 000f1366 2bf7cbfd
.org 0xf136a
	adds r2, r4, #0	@ 000f136a 221c
.org 0xf136c
	adds r2, #73	@ 000f136c 4932
.org 0xf136e
	ldrb r1, [r2, #0]	@ 000f136e 1178
.org 0xf1370
	movs r0, #13	@ 000f1370 0d20
.org 0xf1372
	negs r0, r0	@ 000f1372 4042
.org 0xf1374
	ands r0, r1	@ 000f1374 0840
.org 0xf1376
	strb r0, [r2, #0]	@ 000f1376 1070
.org 0xf1378
	ldrb r1, [r4, #10]	@ 000f1378 a17a
.org 0xf137a
	movs r0, #239	@ 000f137a ef20
.org 0xf137c
	ands r0, r1	@ 000f137c 0840
.org 0xf137e
	strb r0, [r4, #10]	@ 000f137e a072
.org 0xf1380
	adds r0, r4, #0	@ 000f1380 201c
.org 0xf1382
	adds r0, #76	@ 000f1382 4c30
.org 0xf1384
	strb r5, [r0, #0]	@ 000f1384 0570
.org 0xf1386
	adds r2, #1	@ 000f1386 0132
.org 0xf1388
	ldrb r1, [r2, #0]	@ 000f1388 1178
.org 0xf138a
	movs r0, #17	@ 000f138a 1120
.org 0xf138c
	negs r0, r0	@ 000f138c 4042
.org 0xf138e
	ands r0, r1	@ 000f138e 0840
.org 0xf1390
	strb r0, [r2, #0]	@ 000f1390 1070
.org 0xf1392
	ldr r0, [r4, #84]	@ 000f1392 606d
.org 0xf1394
	ldr r1, [r4, #88]	@ 000f1394 a16d
.org 0xf1396
	bl 0x8534	@ 000f1396 17f7cdf8
.org 0xf139a
	str r0, [r4, #88]	@ 000f139a a065
.org 0xf139c
	ldrb r0, [r4, #17]	@ 000f139c 607c
.org 0xf139e
	adds r0, #1	@ 000f139e 0130
.org 0xf13a0
	strb r0, [r4, #17]	@ 000f13a0 6074
.org 0xf13a2
	ldr r0, [r4, #24]	@ 000f13a2 a069
.org 0xf13a4
	ldrb r1, [r0, #9]	@ 000f13a4 417a
.org 0xf13a6
	movs r0, #1	@ 000f13a6 0120
.org 0xf13a8
	ands r0, r1	@ 000f13a8 0840
.org 0xf13aa
	cmp r0, #0	@ 000f13aa 0028
.org 0xf13ac
	beq.n 0xf13dc	@ 000f13ac 16d0
.org 0xf13ae
	ldr r1, [pc, #16]	@ 000f13ae 0449
.org 0xf13b0
	adds r0, r4, #0	@ 000f13b0 201c
.org 0xf13b2
	bl 0x1cf00	@ 000f13b2 2bf7a5fd
.org 0xf13b6
	b.n 0xf13d6	@ 000f13b6 0ee0
.org 0xf13b8
	.byte 0x40,0xe2,0x02,0x02	@ 000f13b8 data
.org 0xf13bc
	.byte 0x40,0xdc,0x02,0x02	@ 000f13bc data
.org 0xf13c0
	.byte 0x06,0xc2,0x00,0x00	@ 000f13c0 data
.org 0xf13c4
	ldr r0, [r4, #24]	@ 000f13c4 a069
.org 0xf13c6
	ldrb r0, [r0, #9]	@ 000f13c6 407a
.org 0xf13c8
	ands r5, r0	@ 000f13c8 0540
.org 0xf13ca
	cmp r5, #0	@ 000f13ca 002d
.org 0xf13cc
	beq.n 0xf13dc	@ 000f13cc 06d0
.org 0xf13ce
	ldr r0, [pc, #24]	@ 000f13ce 0648
.org 0xf13d0
	ldr r1, [pc, #24]	@ 000f13d0 0649
.org 0xf13d2
	bl 0x1126ac	@ 000f13d2 21f06bf9
.org 0xf13d6
	ldrb r0, [r4, #17]	@ 000f13d6 607c
.org 0xf13d8
	adds r0, #1	@ 000f13d8 0130
.org 0xf13da
	strb r0, [r4, #17]	@ 000f13da 6074
