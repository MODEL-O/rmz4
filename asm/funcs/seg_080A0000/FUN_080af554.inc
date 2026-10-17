@ FUN_080af554  entry 0x080af554  size 90
.thumb
.org 0xaf554
FUN_080af554:
	push {r4, r5, r6, lr}	@ 000af554 70b5
.org 0xaf556
	adds r5, r0, #0	@ 000af556 051c
.org 0xaf558
	ldr r6, [r5, #44]	@ 000af558 ee6a
.org 0xaf55a
	ldr r4, [r5, #20]	@ 000af55a 6c69
.org 0xaf55c
	movs r0, #4	@ 000af55c 0420
.org 0xaf55e
	ands r4, r0	@ 000af55e 0440
.org 0xaf560
	cmp r4, #0	@ 000af560 002c
.org 0xaf562
	bne.n 0xaf5a8	@ 000af562 21d1
.org 0xaf564
	movs r0, #2	@ 000af564 0220
.org 0xaf566
	strb r0, [r6, #13]	@ 000af566 7073
.org 0xaf568
	strb r4, [r6, #14]	@ 000af568 b473
.org 0xaf56a
	movs r0, #21	@ 000af56a 1520
.org 0xaf56c
	bl 0x6984	@ 000af56c 57f70afa
.org 0xaf570
	ldr r0, [r5, #20]	@ 000af570 6869
.org 0xaf572
	movs r2, #1	@ 000af572 0122
.org 0xaf574
	ands r0, r2	@ 000af574 1040
.org 0xaf576
	cmp r0, #0	@ 000af576 0028
.org 0xaf578
	beq.n 0xaf5a8	@ 000af578 16d0
.org 0xaf57a
	strb r4, [r6, #13]	@ 000af57a 7473
.org 0xaf57c
	ldr r1, [r5, #20]	@ 000af57c 6969
.org 0xaf57e
	movs r0, #128	@ 000af57e 8020
.org 0xaf580
	lsls r0, r0, #2	@ 000af580 8000
.org 0xaf582
	ands r0, r1	@ 000af582 0840
.org 0xaf584
	cmp r0, #0	@ 000af584 0028
.org 0xaf586
	beq.n 0xaf5a8	@ 000af586 0fd0
.org 0xaf588
	movs r0, #128	@ 000af588 8020
.org 0xaf58a
	lsls r0, r0, #10	@ 000af58a 8002
.org 0xaf58c
	ands r1, r0	@ 000af58c 0140
.org 0xaf58e
	cmp r1, #0	@ 000af58e 0029
.org 0xaf590
	beq.n 0xaf5a8	@ 000af590 0ad0
.org 0xaf592
	adds r0, r6, #0	@ 000af592 301c
.org 0xaf594
	adds r0, #180	@ 000af594 b430
.org 0xaf596
	strb r2, [r0, #0]	@ 000af596 0270
.org 0xaf598
	ldr r0, [pc, #20]	@ 000af598 0548
.org 0xaf59a
	ldr r0, [r0, #0]	@ 000af59a 0068
.org 0xaf59c
	cmp r0, #0	@ 000af59c 0028
.org 0xaf59e
	beq.n 0xaf5a8	@ 000af59e 03d0
.org 0xaf5a0
	movs r1, #5	@ 000af5a0 0521
.org 0xaf5a2
	movs r2, #8	@ 000af5a2 0822
.org 0xaf5a4
	bl 0x3a578	@ 000af5a4 8af7e8ff
.org 0xaf5a8
	pop {r4, r5, r6}	@ 000af5a8 70bc
.org 0xaf5aa
	pop {r0}	@ 000af5aa 01bc
.org 0xaf5ac
	bx r0	@ 000af5ac 0047
