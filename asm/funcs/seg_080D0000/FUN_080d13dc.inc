@ FUN_080d13dc  entry 0x080d13dc  size 104
.thumb
.org 0xd13dc
FUN_080d13dc:
	push {r4, lr}	@ 000d13dc 10b5
.org 0xd13de
	adds r4, r0, #0	@ 000d13de 041c
.org 0xd13e0
	bl 0x1cff0	@ 000d13e0 4bf706fe
.org 0xd13e4
	ldrb r0, [r4, #18]	@ 000d13e4 a07c
.org 0xd13e6
	adds r0, #1	@ 000d13e6 0130
.org 0xd13e8
	strb r0, [r4, #18]	@ 000d13e8 a074
.org 0xd13ea
	ldr r2, [r4, #92]	@ 000d13ea e26d
.org 0xd13ec
	adds r2, #8	@ 000d13ec 0832
.org 0xd13ee
	str r2, [r4, #92]	@ 000d13ee e265
.org 0xd13f0
	ldr r0, [r4, #88]	@ 000d13f0 a06d
.org 0xd13f2
	ldr r1, [r4, #96]	@ 000d13f2 216e
.org 0xd13f4
	subs r0, r0, r1	@ 000d13f4 401a
.org 0xd13f6
	str r0, [r4, #88]	@ 000d13f6 a065
.org 0xd13f8
	ldr r1, [pc, #72]	@ 000d13f8 1249
.org 0xd13fa
	ldrb r0, [r4, #18]	@ 000d13fa a07c
.org 0xd13fc
	lsls r0, r0, #1	@ 000d13fc 4000
.org 0xd13fe
	adds r0, r0, r1	@ 000d13fe 4018
.org 0xd1400
	movs r1, #0	@ 000d1400 0021
.org 0xd1402
	ldrsh r0, [r0, r1]	@ 000d1402 405e
.org 0xd1404
	asrs r2, r2, #8	@ 000d1404 1212
.org 0xd1406
	adds r1, r0, #0	@ 000d1406 011c
.org 0xd1408
	muls r1, r2	@ 000d1408 5143
.org 0xd140a
	ldr r0, [r4, #116]	@ 000d140a 606f
.org 0xd140c
	adds r0, r0, r1	@ 000d140c 4018
.org 0xd140e
	str r0, [r4, #84]	@ 000d140e 6065
.org 0xd1410
	ldr r0, [pc, #52]	@ 000d1410 0d48
.org 0xd1412
	adds r1, r4, #0	@ 000d1412 211c
.org 0xd1414
	adds r1, #84	@ 000d1414 5431
.org 0xd1416
	bl 0x1fb14	@ 000d1416 4ef77dfb
.org 0xd141a
	cmp r0, #0	@ 000d141a 0028
.org 0xd141c
	bne.n 0xd142c	@ 000d141c 06d1
.org 0xd141e
	ldr r0, [r4, #96]	@ 000d141e 206e
.org 0xd1420
	lsls r0, r0, #1	@ 000d1420 4000
.org 0xd1422
	ldr r1, [r4, #88]	@ 000d1422 a16d
.org 0xd1424
	subs r1, r1, r0	@ 000d1424 091a
.org 0xd1426
	ldr r0, [r4, #124]	@ 000d1426 e06f
.org 0xd1428
	cmp r0, r1	@ 000d1428 8842
.org 0xd142a
	ble.n 0xd143e	@ 000d142a 08dd
.org 0xd142c
	ldr r1, [pc, #28]	@ 000d142c 0749
.org 0xd142e
	ldrb r0, [r4, #9]	@ 000d142e 607a
.org 0xd1430
	lsls r0, r0, #2	@ 000d1430 8000
.org 0xd1432
	adds r0, r0, r1	@ 000d1432 4018
.org 0xd1434
	movs r1, #2	@ 000d1434 0221
.org 0xd1436
	str r1, [r4, #12]	@ 000d1436 e160
.org 0xd1438
	ldr r0, [r0, #0]	@ 000d1438 0068
.org 0xd143a
	ldr r0, [r0, #8]	@ 000d143a 8068
.org 0xd143c
	str r0, [r4, #20]	@ 000d143c 6061
.org 0xd143e
	pop {r4}	@ 000d143e 10bc
.org 0xd1440
	pop {r0}	@ 000d1440 01bc
.org 0xd1442
	bx r0	@ 000d1442 0047
