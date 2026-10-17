@ FUN_080ff4ec  entry 0x080ff4ec  size 152
.thumb
.org 0xff4ec
FUN_080ff4ec:
	push {r4, r5, r6, r7, lr}	@ 000ff4ec f0b5
.org 0xff4ee
	mov r7, r8	@ 000ff4ee 4746
.org 0xff4f0
	push {r7}	@ 000ff4f0 80b4
.org 0xff4f2
	adds r6, r0, #0	@ 000ff4f2 061c
.org 0xff4f4
	bl 0x1cc9c	@ 000ff4f4 1df7d2fb
.org 0xff4f8
	ldrb r1, [r6, #10]	@ 000ff4f8 b17a
.org 0xff4fa
	movs r0, #1	@ 000ff4fa 0120
.org 0xff4fc
	movs r2, #0	@ 000ff4fc 0022
.org 0xff4fe
	mov r8, r2	@ 000ff4fe 9046
.org 0xff500
	orrs r0, r1	@ 000ff500 0843
.org 0xff502
	movs r1, #2	@ 000ff502 0221
.org 0xff504
	orrs r0, r1	@ 000ff504 0843
.org 0xff506
	strb r0, [r6, #10]	@ 000ff506 b072
.org 0xff508
	ldr r1, [pc, #120]	@ 000ff508 1e49
.org 0xff50a
	adds r0, r6, #0	@ 000ff50a 301c
.org 0xff50c
	bl 0x1cf00	@ 000ff50c 1df7f8fc
.org 0xff510
	adds r0, r6, #0	@ 000ff510 301c
.org 0xff512
	bl 0x1cff0	@ 000ff512 1df76dfd
.org 0xff516
	movs r5, #0	@ 000ff516 0025
.org 0xff518
	ldrb r1, [r6, #10]	@ 000ff518 b17a
.org 0xff51a
	movs r0, #239	@ 000ff51a ef20
.org 0xff51c
	ands r0, r1	@ 000ff51c 0840
.org 0xff51e
	strb r0, [r6, #10]	@ 000ff51e b072
.org 0xff520
	adds r0, r6, #0	@ 000ff520 301c
.org 0xff522
	adds r0, #76	@ 000ff522 4c30
.org 0xff524
	strb r5, [r0, #0]	@ 000ff524 0570
.org 0xff526
	adds r7, r6, #0	@ 000ff526 371c
.org 0xff528
	adds r7, #74	@ 000ff528 4a37
.org 0xff52a
	ldrb r1, [r7, #0]	@ 000ff52a 3978
.org 0xff52c
	movs r0, #17	@ 000ff52c 1120
.org 0xff52e
	negs r0, r0	@ 000ff52e 4042
.org 0xff530
	ands r0, r1	@ 000ff530 0840
.org 0xff532
	strb r0, [r7, #0]	@ 000ff532 3870
.org 0xff534
	ldrb r0, [r6, #10]	@ 000ff534 b07a
.org 0xff536
	movs r1, #4	@ 000ff536 0421
.org 0xff538
	orrs r0, r1	@ 000ff538 0843
.org 0xff53a
	strb r0, [r6, #10]	@ 000ff53a b072
.org 0xff53c
	adds r4, r6, #0	@ 000ff53c 341c
.org 0xff53e
	adds r4, #116	@ 000ff53e 7434
.org 0xff540
	ldr r1, [pc, #68]	@ 000ff540 1149
.org 0xff542
	adds r2, r6, #0	@ 000ff542 321c
.org 0xff544
	adds r2, #84	@ 000ff544 5432
.org 0xff546
	adds r0, r4, #0	@ 000ff546 201c
.org 0xff548
	movs r3, #120	@ 000ff548 7823
.org 0xff54a
	bl 0x5760	@ 000ff54a 06f709f9
.org 0xff54e
	str r6, [r4, #44]	@ 000ff54e e662
.org 0xff550
	str r5, [r4, #36]	@ 000ff550 6562
.org 0xff552
	ldrb r0, [r6, #17]	@ 000ff552 707c
.org 0xff554
	cmp r0, #0	@ 000ff554 0028
.org 0xff556
	beq.n 0xff58c	@ 000ff556 19d0
.org 0xff558
	ldrb r0, [r6, #10]	@ 000ff558 b07a
.org 0xff55a
	movs r1, #32	@ 000ff55a 2021
.org 0xff55c
	orrs r0, r1	@ 000ff55c 0843
.org 0xff55e
	strb r0, [r6, #10]	@ 000ff55e b072
.org 0xff560
	adds r1, r6, #0	@ 000ff560 311c
.org 0xff562
	adds r1, #77	@ 000ff562 4d31
.org 0xff564
	movs r0, #1	@ 000ff564 0120
.org 0xff566
	strb r0, [r1, #0]	@ 000ff566 0870
.org 0xff568
	movs r2, #32	@ 000ff568 2022
.org 0xff56a
	ldrb r1, [r7, #0]	@ 000ff56a 3978
.org 0xff56c
	subs r0, #34	@ 000ff56c 2238
.org 0xff56e
	ands r0, r1	@ 000ff56e 0840
.org 0xff570
	orrs r0, r2	@ 000ff570 1043
.org 0xff572
	strb r0, [r7, #0]	@ 000ff572 3870
.org 0xff574
	ldr r0, [r6, #84]	@ 000ff574 706d
.org 0xff576
	ldr r1, [r6, #88]	@ 000ff576 b16d
.org 0xff578
	bl 0x8748	@ 000ff578 09f7e6f8
.org 0xff57c
	movs r1, #128	@ 000ff57c 8021
.org 0xff57e
	lsls r1, r1, #7	@ 000ff57e c901
.org 0xff580
	adds r0, r0, r1	@ 000ff580 4018
.org 0xff582
	b.n 0xff598	@ 000ff582 09e0
