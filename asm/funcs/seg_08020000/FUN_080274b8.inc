@ FUN_080274b8  entry 0x080274b8  size 188
.thumb
.org 0x274b8
FUN_080274b8:
	push {r4, r5, r6, lr}	@ 000274b8 70b5
.org 0x274ba
	mov ip, r0	@ 000274ba 8446
.org 0x274bc
	movs r2, #0	@ 000274bc 0022
.org 0x274be
	strb r1, [r0, #0]	@ 000274be 0170
.org 0x274c0
	strb r2, [r0, #1]	@ 000274c0 4270
.org 0x274c2
	movs r0, #0	@ 000274c2 0020
.org 0x274c4
	mov r1, ip	@ 000274c4 6146
.org 0x274c6
	strh r2, [r1, #4]	@ 000274c6 8a80
.org 0x274c8
	strb r0, [r1, #3]	@ 000274c8 c870
.org 0x274ca
	ldr r6, [pc, #168]	@ 000274ca 2a4e
.org 0x274cc
	ldr r5, [pc, #168]	@ 000274cc 2a4d
.org 0x274ce
	movs r1, #11	@ 000274ce 0b21
.org 0x274d0
	mov r0, ip	@ 000274d0 6046
.org 0x274d2
	adds r0, #192	@ 000274d2 c030
.org 0x274d4
	str r2, [r0, #0]	@ 000274d4 0260
.org 0x274d6
	subs r0, #16	@ 000274d6 1038
.org 0x274d8
	subs r1, #1	@ 000274d8 0139
.org 0x274da
	cmp r1, #0	@ 000274da 0029
.org 0x274dc
	bge.n 0x274d4	@ 000274dc fada
.org 0x274de
	movs r2, #0	@ 000274de 0022
.org 0x274e0
	mov r0, ip	@ 000274e0 6046
.org 0x274e2
	adds r0, #208	@ 000274e2 d030
.org 0x274e4
	str r2, [r0, #0]	@ 000274e4 0260
.org 0x274e6
	adds r0, #4	@ 000274e6 0430
.org 0x274e8
	str r2, [r0, #0]	@ 000274e8 0260
.org 0x274ea
	movs r0, #164	@ 000274ea a420
.org 0x274ec
	lsls r0, r0, #1	@ 000274ec 4000
.org 0x274ee
	add r0, ip	@ 000274ee 6044
.org 0x274f0
	movs r4, #0	@ 000274f0 0024
.org 0x274f2
	strh r2, [r0, #0]	@ 000274f2 0280
.org 0x274f4
	movs r0, #162	@ 000274f4 a220
.org 0x274f6
	lsls r0, r0, #1	@ 000274f6 4000
.org 0x274f8
	add r0, ip	@ 000274f8 6044
.org 0x274fa
	str r2, [r0, #0]	@ 000274fa 0260
.org 0x274fc
	movs r0, #165	@ 000274fc a520
.org 0x274fe
	lsls r0, r0, #1	@ 000274fe 4000
.org 0x27500
	add r0, ip	@ 00027500 6044
.org 0x27502
	strh r2, [r0, #0]	@ 00027502 0280
.org 0x27504
	movs r0, #166	@ 00027504 a620
.org 0x27506
	lsls r0, r0, #1	@ 00027506 4000
.org 0x27508
	add r0, ip	@ 00027508 6044
.org 0x2750a
	strh r2, [r0, #0]	@ 0002750a 0280
.org 0x2750c
	movs r0, #167	@ 0002750c a720
.org 0x2750e
	lsls r0, r0, #1	@ 0002750e 4000
.org 0x27510
	add r0, ip	@ 00027510 6044
.org 0x27512
	strh r2, [r0, #0]	@ 00027512 0280
.org 0x27514
	movs r0, #168	@ 00027514 a820
.org 0x27516
	lsls r0, r0, #1	@ 00027516 4000
.org 0x27518
	add r0, ip	@ 00027518 6044
.org 0x2751a
	str r2, [r0, #0]	@ 0002751a 0260
.org 0x2751c
	movs r0, #170	@ 0002751c aa20
.org 0x2751e
	lsls r0, r0, #1	@ 0002751e 4000
.org 0x27520
	add r0, ip	@ 00027520 6044
.org 0x27522
	str r2, [r0, #0]	@ 00027522 0260
.org 0x27524
	movs r0, #172	@ 00027524 ac20
.org 0x27526
	lsls r0, r0, #1	@ 00027526 4000
.org 0x27528
	add r0, ip	@ 00027528 6044
.org 0x2752a
	movs r3, #1	@ 0002752a 0123
.org 0x2752c
	negs r3, r3	@ 0002752c 5b42
.org 0x2752e
	str r3, [r0, #0]	@ 0002752e 0360
.org 0x27530
	movs r1, #175	@ 00027530 af21
.org 0x27532
	lsls r1, r1, #1	@ 00027532 4900
.org 0x27534
	add r1, ip	@ 00027534 6144
.org 0x27536
	ldr r0, [pc, #68]	@ 00027536 1148
.org 0x27538
	strh r0, [r1, #0]	@ 00027538 0880
.org 0x2753a
	movs r1, #174	@ 0002753a ae21
.org 0x2753c
	lsls r1, r1, #1	@ 0002753c 4900
.org 0x2753e
	add r1, ip	@ 0002753e 6144
.org 0x27540
	adds r0, r3, #0	@ 00027540 181c
.org 0x27542
	strh r0, [r1, #0]	@ 00027542 0880
.org 0x27544
	movs r1, #176	@ 00027544 b021
.org 0x27546
	lsls r1, r1, #1	@ 00027546 4900
.org 0x27548
	add r1, ip	@ 00027548 6144
.org 0x2754a
	movs r0, #178	@ 0002754a b220
.org 0x2754c
	lsls r0, r0, #1	@ 0002754c 4000
.org 0x2754e
	add r0, ip	@ 0002754e 6044
.org 0x27550
	str r3, [r0, #0]	@ 00027550 0360
.org 0x27552
	str r3, [r1, #0]	@ 00027552 0b60
.org 0x27554
	strb r4, [r6, #18]	@ 00027554 b474
.org 0x27556
	strh r2, [r5, #0]	@ 00027556 2a80
.org 0x27558
	ldr r1, [pc, #36]	@ 00027558 0949
.org 0x2755a
	adds r0, r5, r1	@ 0002755a 6818
.org 0x2755c
	strb r4, [r0, #0]	@ 0002755c 0470
.org 0x2755e
	subs r1, #1	@ 0002755e 0139
.org 0x27560
	adds r0, r5, r1	@ 00027560 6818
.org 0x27562
	strb r4, [r0, #0]	@ 00027562 0470
.org 0x27564
	subs r1, #1	@ 00027564 0139
.org 0x27566
	adds r0, r5, r1	@ 00027566 6818
.org 0x27568
	strb r4, [r0, #0]	@ 00027568 0470
.org 0x2756a
	bl 0x29c0	@ 0002756a dbf729fa
.org 0x2756e
	pop {r4, r5, r6}	@ 0002756e 70bc
.org 0x27570
	pop {r0}	@ 00027570 01bc
.org 0x27572
	bx r0	@ 00027572 0047
