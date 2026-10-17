@ FUN_080db520  entry 0x080db520  size 96
.thumb
.org 0xdb520
FUN_080db520:
	push {r4, r5, r6, r7, lr}	@ 000db520 f0b5
.org 0xdb522
	adds r7, r0, #0	@ 000db522 071c
.org 0xdb524
	lsls r1, r1, #24	@ 000db524 0906
.org 0xdb526
	lsrs r4, r1, #24	@ 000db526 0c0e
.org 0xdb528
	lsls r2, r2, #24	@ 000db528 1206
.org 0xdb52a
	lsrs r5, r2, #24	@ 000db52a 150e
.org 0xdb52c
	lsls r3, r3, #24	@ 000db52c 1b06
.org 0xdb52e
	lsrs r6, r3, #24	@ 000db52e 1e0e
.org 0xdb530
	ldr r0, [pc, #76]	@ 000db530 1348
.org 0xdb532
	ldr r0, [r0, #0]	@ 000db532 0068
.org 0xdb534
	bl 0x5500	@ 000db534 29f7e4ff
.org 0xdb538
	mov ip, r0	@ 000db538 8446
.org 0xdb53a
	cmp r0, #0	@ 000db53a 0028
.org 0xdb53c
	beq.n 0xdb57a	@ 000db53c 1dd0
.org 0xdb53e
	mov r1, ip	@ 000db53e 6146
.org 0xdb540
	adds r1, #37	@ 000db540 2531
.org 0xdb542
	movs r3, #0	@ 000db542 0023
.org 0xdb544
	movs r0, #1	@ 000db544 0120
.org 0xdb546
	strb r0, [r1, #0]	@ 000db546 0870
.org 0xdb548
	ldr r0, [pc, #56]	@ 000db548 0e48
.org 0xdb54a
	movs r1, #40	@ 000db54a 2821
.org 0xdb54c
	mov r2, ip	@ 000db54c 6246
.org 0xdb54e
	strb r1, [r2, #9]	@ 000db54e 5172
.org 0xdb550
	adds r0, #160	@ 000db550 a030
.org 0xdb552
	ldr r0, [r0, #0]	@ 000db552 0068
.org 0xdb554
	ldr r0, [r0, #0]	@ 000db554 0068
.org 0xdb556
	str r0, [r2, #20]	@ 000db556 5061
.org 0xdb558
	movs r2, #0	@ 000db558 0022
.org 0xdb55a
	mov r0, ip	@ 000db55a 6046
.org 0xdb55c
	strh r3, [r0, #32]	@ 000db55c 0384
.org 0xdb55e
	adds r0, #34	@ 000db55e 2230
.org 0xdb560
	strb r2, [r0, #0]	@ 000db560 0270
.org 0xdb562
	ldr r0, [r7, #0]	@ 000db562 3868
.org 0xdb564
	ldr r1, [r7, #4]	@ 000db564 7968
.org 0xdb566
	mov r3, ip	@ 000db566 6346
.org 0xdb568
	str r0, [r3, #84]	@ 000db568 5865
.org 0xdb56a
	str r1, [r3, #88]	@ 000db56a 9965
.org 0xdb56c
	strb r4, [r3, #16]	@ 000db56c 1c74
.org 0xdb56e
	strb r2, [r3, #17]	@ 000db56e 5a74
.org 0xdb570
	mov r0, ip	@ 000db570 6046
.org 0xdb572
	adds r0, #124	@ 000db572 7c30
.org 0xdb574
	strb r5, [r0, #0]	@ 000db574 0570
.org 0xdb576
	adds r0, #1	@ 000db576 0130
.org 0xdb578
	strb r6, [r0, #0]	@ 000db578 0670
.org 0xdb57a
	pop {r4, r5, r6, r7}	@ 000db57a f0bc
.org 0xdb57c
	pop {r0}	@ 000db57c 01bc
.org 0xdb57e
	bx r0	@ 000db57e 0047
