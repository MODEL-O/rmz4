@ FUN_080b1370  entry 0x080b1370  size 110
.thumb
.org 0xb1370
FUN_080b1370:
	push {r4, r5, lr}	@ 000b1370 30b5
.org 0xb1372
	adds r4, r0, #0	@ 000b1372 041c
.org 0xb1374
	adds r5, r4, #0	@ 000b1374 251c
.org 0xb1376
	adds r5, #194	@ 000b1376 c235
.org 0xb1378
	ldrb r0, [r5, #0]	@ 000b1378 2878
.org 0xb137a
	cmp r0, #0	@ 000b137a 0028
.org 0xb137c
	bne.n 0xb13a0	@ 000b137c 10d1
.org 0xb137e
	ldrb r0, [r4, #18]	@ 000b137e a07c
.org 0xb1380
	cmp r0, #0	@ 000b1380 0028
.org 0xb1382
	bne.n 0xb139c	@ 000b1382 0bd1
.org 0xb1384
	adds r0, r4, #0	@ 000b1384 201c
.org 0xb1386
	adds r0, #84	@ 000b1386 5430
.org 0xb1388
	ldrb r1, [r4, #16]	@ 000b1388 217c
.org 0xb138a
	lsls r1, r1, #8	@ 000b138a 0902
.org 0xb138c
	movs r2, #3	@ 000b138c 0322
.org 0xb138e
	orrs r1, r2	@ 000b138e 1143
.org 0xb1390
	bl 0xb1008	@ 000b1390 fff73afe
.org 0xb1394
	str r0, [r4, #44]	@ 000b1394 e062
.org 0xb1396
	movs r0, #1	@ 000b1396 0120
.org 0xb1398
	strb r0, [r5, #0]	@ 000b1398 2870
.org 0xb139a
	b.n 0xb13de	@ 000b139a 20e0
.org 0xb139c
	subs r0, #1	@ 000b139c 0138
.org 0xb139e
	strb r0, [r4, #18]	@ 000b139e a074
.org 0xb13a0
	ldr r1, [r4, #44]	@ 000b13a0 e16a
.org 0xb13a2
	cmp r1, #0	@ 000b13a2 0029
.org 0xb13a4
	beq.n 0xb13de	@ 000b13a4 1bd0
.org 0xb13a6
	ldrb r0, [r1, #12]	@ 000b13a6 087b
.org 0xb13a8
	cmp r0, #1	@ 000b13a8 0128
.org 0xb13aa
	bls.n 0xb13de	@ 000b13aa 18d9
.org 0xb13ac
	adds r0, r1, #0	@ 000b13ac 081c
.org 0xb13ae
	adds r0, #194	@ 000b13ae c230
.org 0xb13b0
	ldrb r0, [r0, #0]	@ 000b13b0 0078
.org 0xb13b2
	cmp r0, #255	@ 000b13b2 ff28
.org 0xb13b4
	bne.n 0xb13d0	@ 000b13b4 0cd1
.org 0xb13b6
	ldr r1, [pc, #20]	@ 000b13b6 0549
.org 0xb13b8
	ldrb r0, [r4, #9]	@ 000b13b8 607a
.org 0xb13ba
	lsls r0, r0, #2	@ 000b13ba 8000
.org 0xb13bc
	adds r0, r0, r1	@ 000b13bc 4018
.org 0xb13be
	movs r1, #2	@ 000b13be 0221
.org 0xb13c0
	str r1, [r4, #12]	@ 000b13c0 e160
.org 0xb13c2
	ldr r0, [r0, #0]	@ 000b13c2 0068
.org 0xb13c4
	ldr r0, [r0, #8]	@ 000b13c4 8068
.org 0xb13c6
	str r0, [r4, #20]	@ 000b13c6 6061
.org 0xb13c8
	b.n 0xb13de	@ 000b13c8 09e0
.org 0xb13ca
	.byte 0x00	@ 000b13ca data
.org 0xb13cb
	.byte 0x00	@ 000b13cb data
.org 0xb13cc
	.byte 0x40,0xdb,0x85,0x08	@ 000b13cc data
.org 0xb13d0
	movs r1, #0	@ 000b13d0 0021
.org 0xb13d2
	movs r0, #80	@ 000b13d2 5020
.org 0xb13d4
	strb r0, [r4, #18]	@ 000b13d4 a074
.org 0xb13d6
	adds r0, r4, #0	@ 000b13d6 201c
.org 0xb13d8
	adds r0, #194	@ 000b13d8 c230
.org 0xb13da
	strb r1, [r0, #0]	@ 000b13da 0170
.org 0xb13dc
	str r1, [r4, #44]	@ 000b13dc e162
