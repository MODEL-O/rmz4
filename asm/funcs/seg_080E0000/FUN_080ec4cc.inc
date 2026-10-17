@ FUN_080ec4cc  entry 0x080ec4cc  size 104
.thumb
.org 0xec4cc
FUN_080ec4cc:
	push {r4, r5, lr}	@ 000ec4cc 30b5
.org 0xec4ce
	adds r4, r0, #0	@ 000ec4ce 041c
.org 0xec4d0
	movs r5, #0	@ 000ec4d0 0025
.org 0xec4d2
	ldr r1, [pc, #96]	@ 000ec4d2 1849
.org 0xec4d4
	ldrb r0, [r4, #9]	@ 000ec4d4 607a
.org 0xec4d6
	lsls r0, r0, #2	@ 000ec4d6 8000
.org 0xec4d8
	adds r0, r0, r1	@ 000ec4d8 4018
.org 0xec4da
	movs r1, #1	@ 000ec4da 0121
.org 0xec4dc
	str r1, [r4, #12]	@ 000ec4dc e160
.org 0xec4de
	ldr r0, [r0, #0]	@ 000ec4de 0068
.org 0xec4e0
	ldr r0, [r0, #4]	@ 000ec4e0 4068
.org 0xec4e2
	str r0, [r4, #20]	@ 000ec4e2 6061
.org 0xec4e4
	strb r5, [r4, #13]	@ 000ec4e4 6573
.org 0xec4e6
	strb r5, [r4, #14]	@ 000ec4e6 a573
.org 0xec4e8
	strb r5, [r4, #15]	@ 000ec4e8 e573
.org 0xec4ea
	ldrb r0, [r4, #10]	@ 000ec4ea a07a
.org 0xec4ec
	orrs r0, r1	@ 000ec4ec 0843
.org 0xec4ee
	movs r1, #2	@ 000ec4ee 0221
.org 0xec4f0
	orrs r0, r1	@ 000ec4f0 0843
.org 0xec4f2
	strb r0, [r4, #10]	@ 000ec4f2 a072
.org 0xec4f4
	adds r0, r4, #0	@ 000ec4f4 201c
.org 0xec4f6
	bl 0x1cc9c	@ 000ec4f6 30f7d1fb
.org 0xec4fa
	adds r1, r4, #0	@ 000ec4fa 211c
.org 0xec4fc
	adds r1, #37	@ 000ec4fc 2531
.org 0xec4fe
	movs r0, #27	@ 000ec4fe 1b20
.org 0xec500
	strb r0, [r1, #0]	@ 000ec500 0870
.org 0xec502
	ldrb r1, [r4, #10]	@ 000ec502 a17a
.org 0xec504
	movs r0, #239	@ 000ec504 ef20
.org 0xec506
	ands r0, r1	@ 000ec506 0840
.org 0xec508
	strb r0, [r4, #10]	@ 000ec508 a072
.org 0xec50a
	adds r0, r4, #0	@ 000ec50a 201c
.org 0xec50c
	adds r0, #76	@ 000ec50c 4c30
.org 0xec50e
	strb r5, [r0, #0]	@ 000ec50e 0570
.org 0xec510
	adds r2, r4, #0	@ 000ec510 221c
.org 0xec512
	adds r2, #74	@ 000ec512 4a32
.org 0xec514
	ldrb r1, [r2, #0]	@ 000ec514 1178
.org 0xec516
	movs r0, #17	@ 000ec516 1120
.org 0xec518
	negs r0, r0	@ 000ec518 4042
.org 0xec51a
	ands r0, r1	@ 000ec51a 0840
.org 0xec51c
	strb r0, [r2, #0]	@ 000ec51c 1070
.org 0xec51e
	movs r1, #160	@ 000ec51e a021
.org 0xec520
	lsls r1, r1, #6	@ 000ec520 8901
.org 0xec522
	adds r0, r4, #0	@ 000ec522 201c
.org 0xec524
	bl 0x1cf00	@ 000ec524 30f7ecfc
.org 0xec528
	adds r0, r4, #0	@ 000ec528 201c
.org 0xec52a
	bl 0xec5e0	@ 000ec52a 00f059f8
.org 0xec52e
	pop {r4, r5}	@ 000ec52e 30bc
.org 0xec530
	pop {r0}	@ 000ec530 01bc
.org 0xec532
	bx r0	@ 000ec532 0047
