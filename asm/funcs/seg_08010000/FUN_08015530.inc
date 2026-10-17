@ FUN_08015530  entry 0x08015530  size 80
.thumb
.org 0x15530
FUN_08015530:
	push {r4, r5, r6, lr}	@ 00015530 70b5
.org 0x15532
	adds r5, r0, #0	@ 00015532 051c
.org 0x15534
	ldrb r6, [r5, #14]	@ 00015534 ae7b
.org 0x15536
	cmp r6, #0	@ 00015536 002e
.org 0x15538
	bne.n 0x1557a	@ 00015538 1fd1
.org 0x1553a
	ldr r0, [r5, #92]	@ 0001553a e86d
.org 0x1553c
	lsls r0, r0, #16	@ 0001553c 0004
.org 0x1553e
	lsrs r0, r0, #20	@ 0001553e 000d
.org 0x15540
	lsls r3, r0, #1	@ 00015540 4300
.org 0x15542
	ldr r4, [pc, #60]	@ 00015542 0f4c
.org 0x15544
	adds r3, r3, r4	@ 00015544 1b19
.org 0x15546
	ldr r1, [r5, #100]	@ 00015546 696e
.org 0x15548
	movs r2, #71	@ 00015548 4722
.org 0x1554a
	orrs r1, r2	@ 0001554a 1143
.org 0x1554c
	strh r1, [r3, #0]	@ 0001554c 1980
.org 0x1554e
	lsls r0, r0, #2	@ 0001554e 8000
.org 0x15550
	adds r4, #8	@ 00015550 0834
.org 0x15552
	adds r0, r0, r4	@ 00015552 0019
.org 0x15554
	str r6, [r0, #0]	@ 00015554 0660
.org 0x15556
	ldr r0, [pc, #44]	@ 00015556 0b48
.org 0x15558
	ldr r0, [r0, #0]	@ 00015558 0068
.org 0x1555a
	ldr r2, [pc, #44]	@ 0001555a 0b4a
.org 0x1555c
	adds r0, r0, r2	@ 0001555c 8018
.org 0x1555e
	movs r2, #248	@ 0001555e f822
.org 0x15560
	lsls r2, r2, #5	@ 00015560 5201
.org 0x15562
	ands r1, r2	@ 00015562 1140
.org 0x15564
	lsls r1, r1, #3	@ 00015564 c900
.org 0x15566
	movs r2, #192	@ 00015566 c022
.org 0x15568
	lsls r2, r2, #19	@ 00015568 d204
.org 0x1556a
	adds r1, r1, r2	@ 0001556a 8918
.org 0x1556c
	movs r2, #128	@ 0001556c 8022
.org 0x1556e
	lsls r2, r2, #2	@ 0001556e 9200
.org 0x15570
	bl 0x128be0	@ 00015570 13f136fb
.org 0x15574
	ldrb r0, [r5, #14]	@ 00015574 a87b
.org 0x15576
	adds r0, #1	@ 00015576 0130
.org 0x15578
	strb r0, [r5, #14]	@ 00015578 a873
.org 0x1557a
	pop {r4, r5, r6}	@ 0001557a 70bc
.org 0x1557c
	pop {r0}	@ 0001557c 01bc
.org 0x1557e
	bx r0	@ 0001557e 0047
