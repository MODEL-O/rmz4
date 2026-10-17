@ FUN_080ad538  entry 0x080ad538  size 86
.thumb
.org 0xad538
FUN_080ad538:
	push {r4, r5, lr}	@ 000ad538 30b5
.org 0xad53a
	adds r4, r0, #0	@ 000ad53a 041c
.org 0xad53c
	lsls r1, r1, #24	@ 000ad53c 0906
.org 0xad53e
	lsrs r5, r1, #24	@ 000ad53e 0d0e
.org 0xad540
	ldr r0, [pc, #76]	@ 000ad540 1348
.org 0xad542
	ldr r0, [r0, #0]	@ 000ad542 0068
.org 0xad544
	bl 0x5500	@ 000ad544 57f7dcff
.org 0xad548
	adds r3, r0, #0	@ 000ad548 031c
.org 0xad54a
	cmp r3, #0	@ 000ad54a 002b
.org 0xad54c
	beq.n 0xad586	@ 000ad54c 1bd0
.org 0xad54e
	adds r1, r3, #0	@ 000ad54e 191c
.org 0xad550
	adds r1, #37	@ 000ad550 2531
.org 0xad552
	movs r2, #0	@ 000ad552 0022
.org 0xad554
	movs r0, #24	@ 000ad554 1820
.org 0xad556
	strb r0, [r1, #0]	@ 000ad556 0870
.org 0xad558
	ldr r0, [pc, #56]	@ 000ad558 0e48
.org 0xad55a
	movs r1, #77	@ 000ad55a 4d21
.org 0xad55c
	strb r1, [r3, #9]	@ 000ad55c 5972
.org 0xad55e
	adds r1, #231	@ 000ad55e e731
.org 0xad560
	adds r0, r0, r1	@ 000ad560 4018
.org 0xad562
	ldr r0, [r0, #0]	@ 000ad562 0068
.org 0xad564
	ldr r0, [r0, #0]	@ 000ad564 0068
.org 0xad566
	str r0, [r3, #20]	@ 000ad566 5861
.org 0xad568
	movs r0, #0	@ 000ad568 0020
.org 0xad56a
	strh r2, [r3, #32]	@ 000ad56a 1a84
.org 0xad56c
	adds r1, r3, #0	@ 000ad56c 191c
.org 0xad56e
	adds r1, #34	@ 000ad56e 2231
.org 0xad570
	strb r0, [r1, #0]	@ 000ad570 0870
.org 0xad572
	ldrb r1, [r3, #11]	@ 000ad572 d97a
.org 0xad574
	movs r0, #16	@ 000ad574 1020
.org 0xad576
	orrs r0, r1	@ 000ad576 0843
.org 0xad578
	strb r0, [r3, #11]	@ 000ad578 d872
.org 0xad57a
	ldrb r0, [r3, #28]	@ 000ad57a 187f
.org 0xad57c
	strb r0, [r3, #29]	@ 000ad57c 5877
.org 0xad57e
	str r4, [r3, #40]	@ 000ad57e 9c62
.org 0xad580
	movs r0, #1	@ 000ad580 0120
.org 0xad582
	strb r0, [r3, #16]	@ 000ad582 1874
.org 0xad584
	strb r5, [r3, #17]	@ 000ad584 5d74
.org 0xad586
	adds r0, r3, #0	@ 000ad586 181c
.org 0xad588
	pop {r4, r5}	@ 000ad588 30bc
.org 0xad58a
	pop {r1}	@ 000ad58a 02bc
.org 0xad58c
	bx r1	@ 000ad58c 0847
