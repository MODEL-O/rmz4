@ FUN_0809a4d4  entry 0x0809a4d4  size 160
.thumb
.org 0x9a4d4
FUN_0809a4d4:
	push {r4, lr}	@ 0009a4d4 10b5
.org 0x9a4d6
	adds r4, r0, #0	@ 0009a4d6 041c
.org 0x9a4d8
	bl 0x1cff0	@ 0009a4d8 82f78afd
.org 0x9a4dc
	ldr r0, [r4, #92]	@ 0009a4dc e06d
.org 0x9a4de
	lsls r0, r0, #16	@ 0009a4de 0004
.org 0x9a4e0
	asrs r0, r0, #16	@ 0009a4e0 0014
.org 0x9a4e2
	ldr r1, [r4, #96]	@ 0009a4e2 216e
.org 0x9a4e4
	lsls r1, r1, #16	@ 0009a4e4 0904
.org 0x9a4e6
	asrs r1, r1, #16	@ 0009a4e6 0914
.org 0x9a4e8
	bl 0x128bdc	@ 0009a4e8 8ef078fb
.org 0x9a4ec
	lsls r0, r0, #16	@ 0009a4ec 0004
.org 0x9a4ee
	lsrs r0, r0, #16	@ 0009a4ee 000c
.org 0x9a4f0
	movs r1, #128	@ 0009a4f0 8021
.org 0x9a4f2
	lsls r1, r1, #7	@ 0009a4f2 c901
.org 0x9a4f4
	adds r0, r0, r1	@ 0009a4f4 4018
.org 0x9a4f6
	asrs r0, r0, #8	@ 0009a4f6 0012
.org 0x9a4f8
	adds r1, r4, #0	@ 0009a4f8 211c
.org 0x9a4fa
	adds r1, #36	@ 0009a4fa 2431
.org 0x9a4fc
	strb r0, [r1, #0]	@ 0009a4fc 0870
.org 0x9a4fe
	ldr r1, [r4, #84]	@ 0009a4fe 616d
.org 0x9a500
	ldr r0, [r4, #92]	@ 0009a500 e06d
.org 0x9a502
	adds r3, r1, r0	@ 0009a502 0b18
.org 0x9a504
	str r3, [r4, #84]	@ 0009a504 6365
.org 0x9a506
	ldr r1, [r4, #88]	@ 0009a506 a16d
.org 0x9a508
	ldr r0, [r4, #96]	@ 0009a508 206e
.org 0x9a50a
	adds r2, r1, r0	@ 0009a50a 0a18
.org 0x9a50c
	str r2, [r4, #88]	@ 0009a50c a265
.org 0x9a50e
	adds r0, #64	@ 0009a50e 4030
.org 0x9a510
	str r0, [r4, #96]	@ 0009a510 2066
.org 0x9a512
	adds r0, r4, #0	@ 0009a512 201c
.org 0x9a514
	adds r0, #140	@ 0009a514 8c30
.org 0x9a516
	ldr r0, [r0, #0]	@ 0009a516 0068
.org 0x9a518
	movs r1, #4	@ 0009a518 0421
.org 0x9a51a
	ands r0, r1	@ 0009a51a 0840
.org 0x9a51c
	cmp r0, #0	@ 0009a51c 0028
.org 0x9a51e
	beq.n 0x9a540	@ 0009a51e 0fd0
.org 0x9a520
	ldr r1, [pc, #24]	@ 0009a520 0649
.org 0x9a522
	ldrb r0, [r4, #9]	@ 0009a522 607a
.org 0x9a524
	lsls r0, r0, #2	@ 0009a524 8000
.org 0x9a526
	adds r0, r0, r1	@ 0009a526 4018
.org 0x9a528
	movs r1, #2	@ 0009a528 0221
.org 0x9a52a
	str r1, [r4, #12]	@ 0009a52a e160
.org 0x9a52c
	ldr r0, [r0, #0]	@ 0009a52c 0068
.org 0x9a52e
	ldr r0, [r0, #8]	@ 0009a52e 8068
.org 0x9a530
	str r0, [r4, #20]	@ 0009a530 6061
.org 0x9a532
	adds r0, r4, #0	@ 0009a532 201c
.org 0x9a534
	bl 0x99ff4	@ 0009a534 fff75efd
.org 0x9a538
	b.n 0x9a574	@ 0009a538 1ce0
.org 0x9a53a
	.byte 0x00	@ 0009a53a data
.org 0x9a53b
	.byte 0x00	@ 0009a53b data
.org 0x9a53c
	.byte 0x40,0xdb,0x85,0x08	@ 0009a53c data
.org 0x9a540
	adds r0, r3, #0	@ 0009a540 181c
.org 0x9a542
	adds r1, r2, #0	@ 0009a542 111c
.org 0x9a544
	bl 0x7020	@ 0009a544 6cf76cfd
.org 0x9a548
	lsls r0, r0, #16	@ 0009a548 0004
.org 0x9a54a
	cmp r0, #0	@ 0009a54a 0028
.org 0x9a54c
	beq.n 0x9a574	@ 0009a54c 12d0
.org 0x9a54e
	ldr r0, [r4, #84]	@ 0009a54e 606d
.org 0x9a550
	ldr r1, [r4, #88]	@ 0009a550 a16d
.org 0x9a552
	bl 0x8534	@ 0009a552 6df7efff
.org 0x9a556
	str r0, [r4, #88]	@ 0009a556 a065
.org 0x9a558
	movs r0, #1	@ 0009a558 0120
.org 0x9a55a
	strb r0, [r4, #18]	@ 0009a55a a074
.org 0x9a55c
	ldr r1, [pc, #28]	@ 0009a55c 0749
.org 0x9a55e
	ldrb r0, [r4, #9]	@ 0009a55e 607a
.org 0x9a560
	lsls r0, r0, #2	@ 0009a560 8000
.org 0x9a562
	adds r0, r0, r1	@ 0009a562 4018
.org 0x9a564
	movs r1, #2	@ 0009a564 0221
.org 0x9a566
	str r1, [r4, #12]	@ 0009a566 e160
.org 0x9a568
	ldr r0, [r0, #0]	@ 0009a568 0068
.org 0x9a56a
	ldr r0, [r0, #8]	@ 0009a56a 8068
.org 0x9a56c
	str r0, [r4, #20]	@ 0009a56c 6061
.org 0x9a56e
	adds r0, r4, #0	@ 0009a56e 201c
.org 0x9a570
	bl 0x99ff4	@ 0009a570 fff740fd
