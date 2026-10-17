@ FUN_081034f0  entry 0x081034f0  size 136
.thumb
.org 0x1034f0
FUN_081034f0:
	push {r4, r5, r6, lr}	@ 001034f0 70b5
.org 0x1034f2
	adds r4, r0, #0	@ 001034f2 041c
.org 0x1034f4
	bl 0x1cc9c	@ 001034f4 19f7d2fb
.org 0x1034f8
	ldrb r1, [r4, #10]	@ 001034f8 a17a
.org 0x1034fa
	movs r0, #1	@ 001034fa 0120
.org 0x1034fc
	orrs r0, r1	@ 001034fc 0843
.org 0x1034fe
	movs r1, #2	@ 001034fe 0221
.org 0x103500
	orrs r0, r1	@ 00103500 0843
.org 0x103502
	movs r6, #0	@ 00103502 0026
.org 0x103504
	movs r1, #239	@ 00103504 ef21
.org 0x103506
	ands r0, r1	@ 00103506 0840
.org 0x103508
	strb r0, [r4, #10]	@ 00103508 a072
.org 0x10350a
	movs r2, #1	@ 0010350a 0122
.org 0x10350c
	adds r0, r4, #0	@ 0010350c 201c
.org 0x10350e
	adds r0, #76	@ 0010350e 4c30
.org 0x103510
	strb r6, [r0, #0]	@ 00103510 0670
.org 0x103512
	adds r3, r4, #0	@ 00103512 231c
.org 0x103514
	adds r3, #74	@ 00103514 4a33
.org 0x103516
	ldrb r1, [r3, #0]	@ 00103516 1978
.org 0x103518
	movs r0, #17	@ 00103518 1120
.org 0x10351a
	negs r0, r0	@ 0010351a 4042
.org 0x10351c
	ands r0, r1	@ 0010351c 0840
.org 0x10351e
	strb r0, [r3, #0]	@ 0010351e 1870
.org 0x103520
	ldr r1, [pc, #84]	@ 00103520 1549
.org 0x103522
	ldrb r0, [r4, #9]	@ 00103522 607a
.org 0x103524
	lsls r0, r0, #2	@ 00103524 8000
.org 0x103526
	adds r0, r0, r1	@ 00103526 4018
.org 0x103528
	str r2, [r4, #12]	@ 00103528 e260
.org 0x10352a
	ldr r0, [r0, #0]	@ 0010352a 0068
.org 0x10352c
	ldr r0, [r0, #4]	@ 0010352c 4068
.org 0x10352e
	str r0, [r4, #20]	@ 0010352e 6061
.org 0x103530
	ldrb r1, [r4, #10]	@ 00103530 a17a
.org 0x103532
	movs r0, #4	@ 00103532 0420
.org 0x103534
	orrs r0, r1	@ 00103534 0843
.org 0x103536
	strb r0, [r4, #10]	@ 00103536 a072
.org 0x103538
	adds r5, r4, #0	@ 00103538 251c
.org 0x10353a
	adds r5, #116	@ 0010353a 7435
.org 0x10353c
	ldr r1, [pc, #60]	@ 0010353c 0f49
.org 0x10353e
	adds r2, r4, #0	@ 0010353e 221c
.org 0x103540
	adds r2, #84	@ 00103540 5432
.org 0x103542
	adds r0, r5, #0	@ 00103542 281c
.org 0x103544
	movs r3, #128	@ 00103544 8023
.org 0x103546
	bl 0x5760	@ 00103546 02f70bf9
.org 0x10354a
	str r4, [r5, #44]	@ 0010354a ec62
.org 0x10354c
	str r6, [r5, #36]	@ 0010354c 6e62
.org 0x10354e
	adds r0, r4, #0	@ 0010354e 201c
.org 0x103550
	adds r0, #192	@ 00103550 c030
.org 0x103552
	str r6, [r0, #0]	@ 00103552 0660
.org 0x103554
	ldr r0, [r4, #84]	@ 00103554 606d
.org 0x103556
	ldr r1, [r4, #88]	@ 00103556 a16d
.org 0x103558
	bl 0x8748	@ 00103558 05f7f6f8
.org 0x10355c
	ldr r1, [pc, #32]	@ 0010355c 0849
.org 0x10355e
	adds r0, r0, r1	@ 0010355e 4018
.org 0x103560
	str r0, [r4, #88]	@ 00103560 a065
.org 0x103562
	movs r1, #209	@ 00103562 d121
.org 0x103564
	lsls r1, r1, #8	@ 00103564 0902
.org 0x103566
	adds r0, r4, #0	@ 00103566 201c
.org 0x103568
	bl 0x1cf00	@ 00103568 19f7cafc
.org 0x10356c
	adds r0, r4, #0	@ 0010356c 201c
.org 0x10356e
	bl 0x103584	@ 0010356e 00f009f8
.org 0x103572
	pop {r4, r5, r6}	@ 00103572 70bc
.org 0x103574
	pop {r0}	@ 00103574 01bc
.org 0x103576
	bx r0	@ 00103576 0047
