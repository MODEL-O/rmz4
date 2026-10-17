@ FUN_08059504  entry 0x08059504  size 64
.thumb
.org 0x59504
FUN_08059504:
	push {lr}	@ 00059504 00b5
.org 0x59506
	ldr r2, [r0, #44]	@ 00059506 c26a
.org 0x59508
	ldr r1, [r0, #12]	@ 00059508 c168
.org 0x5950a
	ldr r1, [r1, #44]	@ 0005950a c96a
.org 0x5950c
	ldr r0, [r0, #20]	@ 0005950c 4069
.org 0x5950e
	movs r3, #1	@ 0005950e 0123
.org 0x59510
	ands r0, r3	@ 00059510 1840
.org 0x59512
	cmp r0, #0	@ 00059512 0028
.org 0x59514
	beq.n 0x59540	@ 00059514 14d0
.org 0x59516
	ldr r0, [r1, #84]	@ 00059516 486d
.org 0x59518
	ldr r1, [r2, #84]	@ 00059518 516d
.org 0x5951a
	cmp r0, r1	@ 0005951a 8842
.org 0x5951c
	bge.n 0x59528	@ 0005951c 04da
.org 0x5951e
	adds r1, r2, #0	@ 0005951e 111c
.org 0x59520
	adds r1, #192	@ 00059520 c031
.org 0x59522
	movs r0, #0	@ 00059522 0020
.org 0x59524
	strb r0, [r1, #0]	@ 00059524 0870
.org 0x59526
	b.n 0x59540	@ 00059526 0be0
.org 0x59528
	cmp r1, r0	@ 00059528 8142
.org 0x5952a
	blt.n 0x5953a	@ 0005952a 06db
.org 0x5952c
	movs r3, #0	@ 0005952c 0023
.org 0x5952e
	ldr r0, [pc, #20]	@ 0005952e 0548
.org 0x59530
	ldr r0, [r0, #0]	@ 00059530 0068
.org 0x59532
	ldr r0, [r0, #84]	@ 00059532 406d
.org 0x59534
	cmp r1, r0	@ 00059534 8142
.org 0x59536
	bge.n 0x5953a	@ 00059536 00da
.org 0x59538
	movs r3, #1	@ 00059538 0123
.org 0x5953a
	adds r0, r2, #0	@ 0005953a 101c
.org 0x5953c
	adds r0, #192	@ 0005953c c030
.org 0x5953e
	strb r3, [r0, #0]	@ 0005953e 0370
.org 0x59540
	pop {r0}	@ 00059540 01bc
.org 0x59542
	bx r0	@ 00059542 0047
