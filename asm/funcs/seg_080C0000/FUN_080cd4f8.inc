@ FUN_080cd4f8  entry 0x080cd4f8  size 78
.thumb
.org 0xcd4f8
FUN_080cd4f8:
	push {r4, r5, r6, lr}	@ 000cd4f8 70b5
.org 0xcd4fa
	adds r6, r0, #0	@ 000cd4fa 061c
.org 0xcd4fc
	lsls r1, r1, #24	@ 000cd4fc 0906
.org 0xcd4fe
	lsrs r5, r1, #24	@ 000cd4fe 0d0e
.org 0xcd500
	lsls r2, r2, #24	@ 000cd500 1206
.org 0xcd502
	lsrs r4, r2, #24	@ 000cd502 140e
.org 0xcd504
	ldr r0, [pc, #64]	@ 000cd504 1048
.org 0xcd506
	ldr r0, [r0, #0]	@ 000cd506 0068
.org 0xcd508
	bl 0x5500	@ 000cd508 37f7faff
.org 0xcd50c
	adds r3, r0, #0	@ 000cd50c 031c
.org 0xcd50e
	cmp r3, #0	@ 000cd50e 002b
.org 0xcd510
	beq.n 0xcd540	@ 000cd510 16d0
.org 0xcd512
	adds r1, r3, #0	@ 000cd512 191c
.org 0xcd514
	adds r1, #37	@ 000cd514 2531
.org 0xcd516
	movs r2, #0	@ 000cd516 0022
.org 0xcd518
	movs r0, #8	@ 000cd518 0820
.org 0xcd51a
	strb r0, [r1, #0]	@ 000cd51a 0870
.org 0xcd51c
	ldr r0, [pc, #44]	@ 000cd51c 0b48
.org 0xcd51e
	movs r1, #48	@ 000cd51e 3021
.org 0xcd520
	strb r1, [r3, #9]	@ 000cd520 5972
.org 0xcd522
	adds r0, #192	@ 000cd522 c030
.org 0xcd524
	ldr r0, [r0, #0]	@ 000cd524 0068
.org 0xcd526
	ldr r0, [r0, #0]	@ 000cd526 0068
.org 0xcd528
	str r0, [r3, #20]	@ 000cd528 5861
.org 0xcd52a
	movs r0, #0	@ 000cd52a 0020
.org 0xcd52c
	strh r2, [r3, #32]	@ 000cd52c 1a84
.org 0xcd52e
	adds r1, r3, #0	@ 000cd52e 191c
.org 0xcd530
	adds r1, #34	@ 000cd530 2231
.org 0xcd532
	strb r0, [r1, #0]	@ 000cd532 0870
.org 0xcd534
	ldr r0, [r6, #0]	@ 000cd534 3068
.org 0xcd536
	ldr r1, [r6, #4]	@ 000cd536 7168
.org 0xcd538
	str r0, [r3, #84]	@ 000cd538 5865
.org 0xcd53a
	str r1, [r3, #88]	@ 000cd53a 9965
.org 0xcd53c
	strb r5, [r3, #16]	@ 000cd53c 1d74
.org 0xcd53e
	strb r4, [r3, #17]	@ 000cd53e 5c74
.org 0xcd540
	pop {r4, r5, r6}	@ 000cd540 70bc
.org 0xcd542
	pop {r0}	@ 000cd542 01bc
.org 0xcd544
	bx r0	@ 000cd544 0047
