@ FUN_080a63b8  entry 0x080a63b8  size 182
.thumb
.org 0xa63b8
FUN_080a63b8:
	push {r4, lr}	@ 000a63b8 10b5
.org 0xa63ba
	adds r4, r0, #0	@ 000a63ba 041c
.org 0xa63bc
	ldrb r0, [r4, #14]	@ 000a63bc a07b
.org 0xa63be
	cmp r0, #0	@ 000a63be 0028
.org 0xa63c0
	bne.n 0xa6418	@ 000a63c0 2ad1
.org 0xa63c2
	adds r0, r4, #0	@ 000a63c2 201c
.org 0xa63c4
	bl 0xa66b4	@ 000a63c4 00f076f9
.org 0xa63c8
	lsls r0, r0, #24	@ 000a63c8 0006
.org 0xa63ca
	lsrs r0, r0, #24	@ 000a63ca 000e
.org 0xa63cc
	cmp r0, #0	@ 000a63cc 0028
.org 0xa63ce
	beq.n 0xa6414	@ 000a63ce 21d0
.org 0xa63d0
	ldrb r2, [r4, #10]	@ 000a63d0 a27a
.org 0xa63d2
	lsrs r0, r2, #4	@ 000a63d2 1009
.org 0xa63d4
	movs r1, #1	@ 000a63d4 0121
.org 0xa63d6
	bics r1, r0	@ 000a63d6 8143
.org 0xa63d8
	cmp r1, #0	@ 000a63d8 0029
.org 0xa63da
	beq.n 0xa63e2	@ 000a63da 02d0
.org 0xa63dc
	movs r0, #16	@ 000a63dc 1020
.org 0xa63de
	orrs r0, r2	@ 000a63de 1043
.org 0xa63e0
	b.n 0xa63e6	@ 000a63e0 01e0
.org 0xa63e2
	movs r0, #239	@ 000a63e2 ef20
.org 0xa63e4
	ands r0, r2	@ 000a63e4 1040
.org 0xa63e6
	strb r0, [r4, #10]	@ 000a63e6 a072
.org 0xa63e8
	adds r0, r4, #0	@ 000a63e8 201c
.org 0xa63ea
	adds r0, #76	@ 000a63ea 4c30
.org 0xa63ec
	strb r1, [r0, #0]	@ 000a63ec 0170
.org 0xa63ee
	adds r3, r4, #0	@ 000a63ee 231c
.org 0xa63f0
	adds r3, #74	@ 000a63f0 4a33
.org 0xa63f2
	lsls r1, r1, #4	@ 000a63f2 0901
.org 0xa63f4
	ldrb r2, [r3, #0]	@ 000a63f4 1a78
.org 0xa63f6
	movs r0, #17	@ 000a63f6 1120
.org 0xa63f8
	negs r0, r0	@ 000a63f8 4042
.org 0xa63fa
	ands r0, r2	@ 000a63fa 1040
.org 0xa63fc
	orrs r0, r1	@ 000a63fc 0843
.org 0xa63fe
	strb r0, [r3, #0]	@ 000a63fe 1870
.org 0xa6400
	ldr r1, [pc, #12]	@ 000a6400 0349
.org 0xa6402
	adds r0, r4, #0	@ 000a6402 201c
.org 0xa6404
	bl 0x1cf00	@ 000a6404 76f77cfd
.org 0xa6408
	ldrb r0, [r4, #14]	@ 000a6408 a07b
.org 0xa640a
	adds r0, #1	@ 000a640a 0130
.org 0xa640c
	strb r0, [r4, #14]	@ 000a640c a073
.org 0xa640e
	b.n 0xa6418	@ 000a640e 03e0
.org 0xa6410
	.byte 0x04,0x8a,0x00,0x00	@ 000a6410 data
.org 0xa6414
	strb r0, [r4, #13]	@ 000a6414 6073
.org 0xa6416
	b.n 0xa646a	@ 000a6416 28e0
.org 0xa6418
	adds r0, r4, #0	@ 000a6418 201c
.org 0xa641a
	adds r0, #115	@ 000a641a 7330
.org 0xa641c
	ldrb r0, [r0, #0]	@ 000a641c 0078
.org 0xa641e
	cmp r0, #3	@ 000a641e 0328
.org 0xa6420
	bne.n 0xa646c	@ 000a6420 24d1
.org 0xa6422
	ldrb r0, [r4, #14]	@ 000a6422 a07b
.org 0xa6424
	cmp r0, #2	@ 000a6424 0228
.org 0xa6426
	bne.n 0xa642e	@ 000a6426 02d1
.org 0xa6428
	movs r0, #0	@ 000a6428 0020
.org 0xa642a
	strb r0, [r4, #13]	@ 000a642a 6073
.org 0xa642c
	b.n 0xa646a	@ 000a642c 1de0
.org 0xa642e
	ldrb r2, [r4, #10]	@ 000a642e a27a
.org 0xa6430
	lsrs r0, r2, #4	@ 000a6430 1009
.org 0xa6432
	movs r1, #1	@ 000a6432 0121
.org 0xa6434
	bics r1, r0	@ 000a6434 8143
.org 0xa6436
	cmp r1, #0	@ 000a6436 0029
.org 0xa6438
	beq.n 0xa6440	@ 000a6438 02d0
.org 0xa643a
	movs r0, #16	@ 000a643a 1020
.org 0xa643c
	orrs r0, r2	@ 000a643c 1043
.org 0xa643e
	b.n 0xa6444	@ 000a643e 01e0
.org 0xa6440
	movs r0, #239	@ 000a6440 ef20
.org 0xa6442
	ands r0, r2	@ 000a6442 1040
.org 0xa6444
	strb r0, [r4, #10]	@ 000a6444 a072
.org 0xa6446
	adds r0, r4, #0	@ 000a6446 201c
.org 0xa6448
	adds r0, #76	@ 000a6448 4c30
.org 0xa644a
	strb r1, [r0, #0]	@ 000a644a 0170
.org 0xa644c
	adds r3, r4, #0	@ 000a644c 231c
.org 0xa644e
	adds r3, #74	@ 000a644e 4a33
.org 0xa6450
	lsls r1, r1, #4	@ 000a6450 0901
.org 0xa6452
	ldrb r2, [r3, #0]	@ 000a6452 1a78
.org 0xa6454
	movs r0, #17	@ 000a6454 1120
.org 0xa6456
	negs r0, r0	@ 000a6456 4042
.org 0xa6458
	ands r0, r2	@ 000a6458 1040
.org 0xa645a
	orrs r0, r1	@ 000a645a 0843
.org 0xa645c
	strb r0, [r3, #0]	@ 000a645c 1870
.org 0xa645e
	ldr r1, [pc, #20]	@ 000a645e 0549
.org 0xa6460
	adds r0, r4, #0	@ 000a6460 201c
.org 0xa6462
	bl 0x1cf00	@ 000a6462 76f74dfd
.org 0xa6466
	ldrb r0, [r4, #14]	@ 000a6466 a07b
.org 0xa6468
	adds r0, #1	@ 000a6468 0130
.org 0xa646a
	strb r0, [r4, #14]	@ 000a646a a073
.org 0xa646c
	pop {r4}	@ 000a646c 10bc
