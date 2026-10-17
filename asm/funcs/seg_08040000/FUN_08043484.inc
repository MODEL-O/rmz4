@ FUN_08043484  entry 0x08043484  size 48
.thumb
.org 0x43484
FUN_08043484:
	adds r2, r0, #0	@ 00043484 021c
.org 0x43486
	adds r0, #140	@ 00043486 8c30
.org 0x43488
	movs r1, #0	@ 00043488 0021
.org 0x4348a
	str r1, [r0, #0]	@ 0004348a 0160
.org 0x4348c
	adds r0, #4	@ 0004348c 0430
.org 0x4348e
	str r1, [r0, #0]	@ 0004348e 0160
.org 0x43490
	adds r0, #4	@ 00043490 0430
.org 0x43492
	strb r1, [r0, #0]	@ 00043492 0170
.org 0x43494
	ldrb r1, [r2, #10]	@ 00043494 917a
.org 0x43496
	movs r0, #251	@ 00043496 fb20
.org 0x43498
	ands r0, r1	@ 00043498 0840
.org 0x4349a
	movs r1, #254	@ 0004349a fe21
.org 0x4349c
	ands r0, r1	@ 0004349c 0840
.org 0x4349e
	strb r0, [r2, #10]	@ 0004349e 9072
.org 0x434a0
	ldr r1, [pc, #16]	@ 000434a0 0449
.org 0x434a2
	ldrb r0, [r2, #9]	@ 000434a2 507a
.org 0x434a4
	lsls r0, r0, #2	@ 000434a4 8000
.org 0x434a6
	adds r0, r0, r1	@ 000434a6 4018
.org 0x434a8
	movs r1, #4	@ 000434a8 0421
.org 0x434aa
	str r1, [r2, #12]	@ 000434aa d160
.org 0x434ac
	ldr r0, [r0, #0]	@ 000434ac 0068
.org 0x434ae
	ldr r0, [r0, #16]	@ 000434ae 0069
.org 0x434b0
	str r0, [r2, #20]	@ 000434b0 5061
.org 0x434b2
	bx lr	@ 000434b2 7047
