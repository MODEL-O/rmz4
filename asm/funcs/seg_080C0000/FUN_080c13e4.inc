@ FUN_080c13e4  entry 0x080c13e4  size 92
.thumb
.org 0xc13e4
FUN_080c13e4:
	push {r4, r5, r6, r7, lr}	@ 000c13e4 f0b5
.org 0xc13e6
	adds r4, r0, #0	@ 000c13e6 041c
.org 0xc13e8
	adds r7, r1, #0	@ 000c13e8 0f1c
.org 0xc13ea
	lsls r2, r2, #24	@ 000c13ea 1206
.org 0xc13ec
	lsrs r6, r2, #24	@ 000c13ec 160e
.org 0xc13ee
	lsls r3, r3, #24	@ 000c13ee 1b06
.org 0xc13f0
	lsrs r5, r3, #24	@ 000c13f0 1d0e
.org 0xc13f2
	ldr r0, [pc, #76]	@ 000c13f2 1348
.org 0xc13f4
	ldr r0, [r0, #0]	@ 000c13f4 0068
.org 0xc13f6
	bl 0x5500	@ 000c13f6 44f783f8
.org 0xc13fa
	adds r3, r0, #0	@ 000c13fa 031c
.org 0xc13fc
	cmp r3, #0	@ 000c13fc 002b
.org 0xc13fe
	beq.n 0xc1438	@ 000c13fe 1bd0
.org 0xc1400
	adds r1, r3, #0	@ 000c1400 191c
.org 0xc1402
	adds r1, #37	@ 000c1402 2531
.org 0xc1404
	movs r2, #0	@ 000c1404 0022
.org 0xc1406
	movs r0, #8	@ 000c1406 0820
.org 0xc1408
	strb r0, [r1, #0]	@ 000c1408 0870
.org 0xc140a
	ldr r1, [pc, #56]	@ 000c140a 0e49
.org 0xc140c
	movs r0, #13	@ 000c140c 0d20
.org 0xc140e
	strb r0, [r3, #9]	@ 000c140e 5872
.org 0xc1410
	ldr r0, [r1, #52]	@ 000c1410 486b
.org 0xc1412
	ldr r0, [r0, #0]	@ 000c1412 0068
.org 0xc1414
	str r0, [r3, #20]	@ 000c1414 5861
.org 0xc1416
	movs r0, #0	@ 000c1416 0020
.org 0xc1418
	strh r2, [r3, #32]	@ 000c1418 1a84
.org 0xc141a
	adds r1, r3, #0	@ 000c141a 191c
.org 0xc141c
	adds r1, #34	@ 000c141c 2231
.org 0xc141e
	strb r0, [r1, #0]	@ 000c141e 0870
.org 0xc1420
	str r4, [r3, #40]	@ 000c1420 9c62
.org 0xc1422
	ldr r0, [r7, #0]	@ 000c1422 3868
.org 0xc1424
	ldr r1, [r7, #4]	@ 000c1424 7968
.org 0xc1426
	str r0, [r3, #84]	@ 000c1426 5865
.org 0xc1428
	str r1, [r3, #88]	@ 000c1428 9965
.org 0xc142a
	strb r6, [r3, #16]	@ 000c142a 1e74
.org 0xc142c
	strb r5, [r3, #17]	@ 000c142c 5d74
.org 0xc142e
	adds r1, r4, #0	@ 000c142e 211c
.org 0xc1430
	adds r1, #202	@ 000c1430 ca31
.org 0xc1432
	ldrh r0, [r1, #0]	@ 000c1432 0888
.org 0xc1434
	adds r0, #1	@ 000c1434 0130
.org 0xc1436
	strh r0, [r1, #0]	@ 000c1436 0880
.org 0xc1438
	adds r0, r3, #0	@ 000c1438 181c
.org 0xc143a
	pop {r4, r5, r6, r7}	@ 000c143a f0bc
.org 0xc143c
	pop {r1}	@ 000c143c 02bc
.org 0xc143e
	bx r1	@ 000c143e 0847
