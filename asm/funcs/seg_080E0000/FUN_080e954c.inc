@ FUN_080e954c  entry 0x080e954c  size 62
.thumb
.org 0xe954c
FUN_080e954c:
	adds r2, r0, #0	@ 000e954c 021c
.org 0xe954e
	ldrb r1, [r2, #10]	@ 000e954e 917a
.org 0xe9550
	movs r0, #254	@ 000e9550 fe20
.org 0xe9552
	ands r0, r1	@ 000e9552 0840
.org 0xe9554
	movs r1, #0	@ 000e9554 0021
.org 0xe9556
	strb r0, [r2, #10]	@ 000e9556 9072
.org 0xe9558
	adds r0, r2, #0	@ 000e9558 101c
.org 0xe955a
	adds r0, #140	@ 000e955a 8c30
.org 0xe955c
	str r1, [r0, #0]	@ 000e955c 0160
.org 0xe955e
	adds r0, #4	@ 000e955e 0430
.org 0xe9560
	str r1, [r0, #0]	@ 000e9560 0160
.org 0xe9562
	adds r0, #4	@ 000e9562 0430
.org 0xe9564
	strb r1, [r0, #0]	@ 000e9564 0170
.org 0xe9566
	ldrb r1, [r2, #10]	@ 000e9566 917a
.org 0xe9568
	movs r0, #251	@ 000e9568 fb20
.org 0xe956a
	ands r0, r1	@ 000e956a 0840
.org 0xe956c
	strb r0, [r2, #10]	@ 000e956c 9072
.org 0xe956e
	ldrb r1, [r2, #11]	@ 000e956e d17a
.org 0xe9570
	movs r0, #247	@ 000e9570 f720
.org 0xe9572
	ands r0, r1	@ 000e9572 0840
.org 0xe9574
	strb r0, [r2, #11]	@ 000e9574 d072
.org 0xe9576
	ldr r1, [pc, #20]	@ 000e9576 0549
.org 0xe9578
	ldrb r0, [r2, #9]	@ 000e9578 507a
.org 0xe957a
	lsls r0, r0, #2	@ 000e957a 8000
.org 0xe957c
	adds r0, r0, r1	@ 000e957c 4018
.org 0xe957e
	movs r1, #4	@ 000e957e 0421
.org 0xe9580
	str r1, [r2, #12]	@ 000e9580 d160
.org 0xe9582
	ldr r0, [r0, #0]	@ 000e9582 0068
.org 0xe9584
	ldr r0, [r0, #16]	@ 000e9584 0069
.org 0xe9586
	str r0, [r2, #20]	@ 000e9586 5061
.org 0xe9588
	bx lr	@ 000e9588 7047
