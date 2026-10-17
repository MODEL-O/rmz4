@ FUN_0809c530  entry 0x0809c530  size 148
.thumb
.org 0x9c530
FUN_0809c530:
	push {r4, r5, r6, r7, lr}	@ 0009c530 f0b5
.org 0x9c532
	adds r7, r0, #0	@ 0009c532 071c
.org 0x9c534
	lsls r1, r1, #24	@ 0009c534 0906
.org 0x9c536
	lsrs r6, r1, #24	@ 0009c536 0e0e
.org 0x9c538
	lsls r2, r2, #24	@ 0009c538 1206
.org 0x9c53a
	lsrs r5, r2, #24	@ 0009c53a 150e
.org 0x9c53c
	lsls r3, r3, #24	@ 0009c53c 1b06
.org 0x9c53e
	lsrs r4, r3, #24	@ 0009c53e 1c0e
.org 0x9c540
	ldr r0, [pc, #80]	@ 0009c540 1448
.org 0x9c542
	ldr r0, [r0, #0]	@ 0009c542 0068
.org 0x9c544
	bl 0x5500	@ 0009c544 68f7dcff
.org 0x9c548
	mov ip, r0	@ 0009c548 8446
.org 0x9c54a
	cmp r0, #0	@ 0009c54a 0028
.org 0x9c54c
	beq.n 0x9c5c4	@ 0009c54c 3ad0
.org 0x9c54e
	mov r1, ip	@ 0009c54e 6146
.org 0x9c550
	adds r1, #37	@ 0009c550 2531
.org 0x9c552
	movs r2, #0	@ 0009c552 0022
.org 0x9c554
	movs r0, #24	@ 0009c554 1820
.org 0x9c556
	strb r0, [r1, #0]	@ 0009c556 0870
.org 0x9c558
	ldr r0, [pc, #60]	@ 0009c558 0f48
.org 0x9c55a
	movs r1, #41	@ 0009c55a 2921
.org 0x9c55c
	mov r3, ip	@ 0009c55c 6346
.org 0x9c55e
	strb r1, [r3, #9]	@ 0009c55e 5972
.org 0x9c560
	adds r0, #164	@ 0009c560 a430
.org 0x9c562
	ldr r0, [r0, #0]	@ 0009c562 0068
.org 0x9c564
	ldr r0, [r0, #0]	@ 0009c564 0068
.org 0x9c566
	str r0, [r3, #20]	@ 0009c566 5861
.org 0x9c568
	movs r0, #0	@ 0009c568 0020
.org 0x9c56a
	strh r2, [r3, #32]	@ 0009c56a 1a84
.org 0x9c56c
	mov r1, ip	@ 0009c56c 6146
.org 0x9c56e
	adds r1, #34	@ 0009c56e 2231
.org 0x9c570
	strb r0, [r1, #0]	@ 0009c570 0870
.org 0x9c572
	ldrb r0, [r3, #11]	@ 0009c572 d87a
.org 0x9c574
	movs r1, #16	@ 0009c574 1021
.org 0x9c576
	orrs r0, r1	@ 0009c576 0843
.org 0x9c578
	strb r0, [r3, #11]	@ 0009c578 d872
.org 0x9c57a
	ldrb r0, [r3, #28]	@ 0009c57a 187f
.org 0x9c57c
	strb r0, [r3, #29]	@ 0009c57c 5877
.org 0x9c57e
	str r7, [r3, #40]	@ 0009c57e 9f62
.org 0x9c580
	strb r6, [r3, #16]	@ 0009c580 1e74
.org 0x9c582
	strb r5, [r3, #17]	@ 0009c582 5d74
.org 0x9c584
	adds r3, r4, #0	@ 0009c584 231c
.org 0x9c586
	cmp r3, #0	@ 0009c586 002b
.org 0x9c588
	beq.n 0x9c59c	@ 0009c588 08d0
.org 0x9c58a
	mov r2, ip	@ 0009c58a 6246
.org 0x9c58c
	ldrb r0, [r2, #10]	@ 0009c58c 907a
.org 0x9c58e
	orrs r0, r1	@ 0009c58e 0843
.org 0x9c590
	strb r0, [r2, #10]	@ 0009c590 9072
.org 0x9c592
	b.n 0x9c5a8	@ 0009c592 09e0
.org 0x9c594
	.byte 0x90,0xed,0x02,0x02	@ 0009c594 data
.org 0x9c598
	.byte 0x40,0xdb,0x85,0x08	@ 0009c598 data
.org 0x9c59c
	mov r0, ip	@ 0009c59c 6046
.org 0x9c59e
	ldrb r1, [r0, #10]	@ 0009c59e 817a
.org 0x9c5a0
	movs r0, #239	@ 0009c5a0 ef20
.org 0x9c5a2
	ands r0, r1	@ 0009c5a2 0840
.org 0x9c5a4
	mov r1, ip	@ 0009c5a4 6146
.org 0x9c5a6
	strb r0, [r1, #10]	@ 0009c5a6 8872
.org 0x9c5a8
	movs r1, #1	@ 0009c5a8 0121
.org 0x9c5aa
	ands r1, r3	@ 0009c5aa 1940
.org 0x9c5ac
	mov r0, ip	@ 0009c5ac 6046
.org 0x9c5ae
	adds r0, #76	@ 0009c5ae 4c30
.org 0x9c5b0
	strb r1, [r0, #0]	@ 0009c5b0 0170
.org 0x9c5b2
	mov r3, ip	@ 0009c5b2 6346
.org 0x9c5b4
	adds r3, #74	@ 0009c5b4 4a33
.org 0x9c5b6
	lsls r1, r1, #4	@ 0009c5b6 0901
.org 0x9c5b8
	ldrb r2, [r3, #0]	@ 0009c5b8 1a78
.org 0x9c5ba
	movs r0, #17	@ 0009c5ba 1120
.org 0x9c5bc
	negs r0, r0	@ 0009c5bc 4042
.org 0x9c5be
	ands r0, r2	@ 0009c5be 1040
.org 0x9c5c0
	orrs r0, r1	@ 0009c5c0 0843
.org 0x9c5c2
	strb r0, [r3, #0]	@ 0009c5c2 1870
