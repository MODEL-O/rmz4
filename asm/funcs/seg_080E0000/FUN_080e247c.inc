@ FUN_080e247c  entry 0x080e247c  size 66
.thumb
.org 0xe247c
FUN_080e247c:
	push {r4, r5, r6, lr}	@ 000e247c 70b5
.org 0xe247e
	adds r4, r0, #0	@ 000e247e 041c
.org 0xe2480
	bl 0xe255c	@ 000e2480 00f06cf8
.org 0xe2484
	adds r5, r4, #0	@ 000e2484 251c
.org 0xe2486
	adds r5, #84	@ 000e2486 5435
.org 0xe2488
	movs r0, #1	@ 000e2488 0120
.org 0xe248a
	adds r1, r5, #0	@ 000e248a 291c
.org 0xe248c
	bl 0xd0c88	@ 000e248c eef7fcfb
.org 0xe2490
	adds r0, r4, #0	@ 000e2490 201c
.org 0xe2492
	bl 0xe25a8	@ 000e2492 00f089f8
.org 0xe2496
	movs r0, #0	@ 000e2496 0020
.org 0xe2498
	strb r0, [r4, #17]	@ 000e2498 6074
.org 0xe249a
	ldr r1, [pc, #36]	@ 000e249a 0949
.org 0xe249c
	ldrb r2, [r4, #10]	@ 000e249c a27a
.org 0xe249e
	lsrs r2, r2, #4	@ 000e249e 1209
.org 0xe24a0
	movs r6, #1	@ 000e24a0 0126
.org 0xe24a2
	ands r2, r6	@ 000e24a2 3240
.org 0xe24a4
	adds r0, r5, #0	@ 000e24a4 281c
.org 0xe24a6
	bl 0xe2188	@ 000e24a6 fff76ffe
.org 0xe24aa
	ldr r1, [pc, #24]	@ 000e24aa 0649
.org 0xe24ac
	ldrb r2, [r4, #10]	@ 000e24ac a27a
.org 0xe24ae
	lsrs r2, r2, #4	@ 000e24ae 1209
.org 0xe24b0
	ands r2, r6	@ 000e24b0 3240
.org 0xe24b2
	adds r0, r5, #0	@ 000e24b2 281c
.org 0xe24b4
	bl 0xe2188	@ 000e24b4 fff768fe
.org 0xe24b8
	pop {r4, r5, r6}	@ 000e24b8 70bc
.org 0xe24ba
	pop {r0}	@ 000e24ba 01bc
.org 0xe24bc
	bx r0	@ 000e24bc 0047
