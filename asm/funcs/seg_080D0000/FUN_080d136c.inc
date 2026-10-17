@ FUN_080d136c  entry 0x080d136c  size 98
.thumb
.org 0xd136c
FUN_080d136c:
	push {r4, lr}	@ 000d136c 10b5
.org 0xd136e
	adds r4, r0, #0	@ 000d136e 041c
.org 0xd1370
	bl 0x1cff0	@ 000d1370 4bf73efe
.org 0xd1374
	ldrb r0, [r4, #18]	@ 000d1374 a07c
.org 0xd1376
	adds r0, #8	@ 000d1376 0830
.org 0xd1378
	strb r0, [r4, #18]	@ 000d1378 a074
.org 0xd137a
	ldr r0, [r4, #88]	@ 000d137a a06d
.org 0xd137c
	ldr r1, [r4, #96]	@ 000d137c 216e
.org 0xd137e
	subs r0, r0, r1	@ 000d137e 401a
.org 0xd1380
	str r0, [r4, #88]	@ 000d1380 a065
.org 0xd1382
	ldr r1, [pc, #76]	@ 000d1382 1349
.org 0xd1384
	ldrb r0, [r4, #18]	@ 000d1384 a07c
.org 0xd1386
	lsls r0, r0, #1	@ 000d1386 4000
.org 0xd1388
	adds r0, r0, r1	@ 000d1388 4018
.org 0xd138a
	ldrh r0, [r0, #0]	@ 000d138a 0088
.org 0xd138c
	lsls r0, r0, #16	@ 000d138c 0004
.org 0xd138e
	asrs r0, r0, #18	@ 000d138e 8014
.org 0xd1390
	ldr r1, [r4, #92]	@ 000d1390 e16d
.org 0xd1392
	adds r1, r1, r0	@ 000d1392 0918
.org 0xd1394
	ldr r0, [r4, #84]	@ 000d1394 606d
.org 0xd1396
	adds r0, r0, r1	@ 000d1396 4018
.org 0xd1398
	str r0, [r4, #84]	@ 000d1398 6065
.org 0xd139a
	ldr r0, [pc, #56]	@ 000d139a 0e48
.org 0xd139c
	adds r1, r4, #0	@ 000d139c 211c
.org 0xd139e
	adds r1, #84	@ 000d139e 5431
.org 0xd13a0
	bl 0x1fb14	@ 000d13a0 4ef7b8fb
.org 0xd13a4
	cmp r0, #0	@ 000d13a4 0028
.org 0xd13a6
	bne.n 0xd13b6	@ 000d13a6 06d1
.org 0xd13a8
	ldr r0, [r4, #96]	@ 000d13a8 206e
.org 0xd13aa
	lsls r0, r0, #1	@ 000d13aa 4000
.org 0xd13ac
	ldr r1, [r4, #88]	@ 000d13ac a16d
.org 0xd13ae
	subs r1, r1, r0	@ 000d13ae 091a
.org 0xd13b0
	ldr r0, [r4, #124]	@ 000d13b0 e06f
.org 0xd13b2
	cmp r0, r1	@ 000d13b2 8842
.org 0xd13b4
	ble.n 0xd13c8	@ 000d13b4 08dd
.org 0xd13b6
	ldr r1, [pc, #32]	@ 000d13b6 0849
.org 0xd13b8
	ldrb r0, [r4, #9]	@ 000d13b8 607a
.org 0xd13ba
	lsls r0, r0, #2	@ 000d13ba 8000
.org 0xd13bc
	adds r0, r0, r1	@ 000d13bc 4018
.org 0xd13be
	movs r1, #2	@ 000d13be 0221
.org 0xd13c0
	str r1, [r4, #12]	@ 000d13c0 e160
.org 0xd13c2
	ldr r0, [r0, #0]	@ 000d13c2 0068
.org 0xd13c4
	ldr r0, [r0, #8]	@ 000d13c4 8068
.org 0xd13c6
	str r0, [r4, #20]	@ 000d13c6 6061
.org 0xd13c8
	pop {r4}	@ 000d13c8 10bc
.org 0xd13ca
	pop {r0}	@ 000d13ca 01bc
.org 0xd13cc
	bx r0	@ 000d13cc 0047
