@ FUN_080984bc  entry 0x080984bc  size 148
.thumb
.org 0x984bc
FUN_080984bc:
	push {r4, r5, lr}	@ 000984bc 30b5
.org 0x984be
	adds r4, r0, #0	@ 000984be 041c
.org 0x984c0
	lsls r1, r1, #24	@ 000984c0 0906
.org 0x984c2
	lsrs r5, r1, #24	@ 000984c2 0d0e
.org 0x984c4
	ldr r0, [pc, #92]	@ 000984c4 1748
.org 0x984c6
	ldr r0, [r0, #0]	@ 000984c6 0068
.org 0x984c8
	bl 0x5500	@ 000984c8 6df71af8
.org 0x984cc
	mov ip, r0	@ 000984cc 8446
.org 0x984ce
	cmp r0, #0	@ 000984ce 0028
.org 0x984d0
	beq.n 0x98554	@ 000984d0 40d0
.org 0x984d2
	mov r1, ip	@ 000984d2 6146
.org 0x984d4
	adds r1, #37	@ 000984d4 2531
.org 0x984d6
	movs r3, #0	@ 000984d6 0023
.org 0x984d8
	movs r0, #24	@ 000984d8 1820
.org 0x984da
	strb r0, [r1, #0]	@ 000984da 0870
.org 0x984dc
	ldr r0, [pc, #72]	@ 000984dc 1248
.org 0x984de
	movs r1, #33	@ 000984de 2121
.org 0x984e0
	mov r2, ip	@ 000984e0 6246
.org 0x984e2
	strb r1, [r2, #9]	@ 000984e2 5172
.org 0x984e4
	adds r0, #132	@ 000984e4 8430
.org 0x984e6
	ldr r0, [r0, #0]	@ 000984e6 0068
.org 0x984e8
	ldr r0, [r0, #0]	@ 000984e8 0068
.org 0x984ea
	str r0, [r2, #20]	@ 000984ea 5061
.org 0x984ec
	movs r2, #0	@ 000984ec 0022
.org 0x984ee
	mov r0, ip	@ 000984ee 6046
.org 0x984f0
	strh r3, [r0, #32]	@ 000984f0 0384
.org 0x984f2
	adds r0, #34	@ 000984f2 2230
.org 0x984f4
	strb r2, [r0, #0]	@ 000984f4 0270
.org 0x984f6
	mov r1, ip	@ 000984f6 6146
.org 0x984f8
	ldrb r0, [r1, #11]	@ 000984f8 c87a
.org 0x984fa
	movs r3, #16	@ 000984fa 1023
.org 0x984fc
	orrs r0, r3	@ 000984fc 1843
.org 0x984fe
	strb r0, [r1, #11]	@ 000984fe c872
.org 0x98500
	ldrb r0, [r1, #28]	@ 00098500 087f
.org 0x98502
	strb r0, [r1, #29]	@ 00098502 4877
.org 0x98504
	ldr r0, [r4, #0]	@ 00098504 2068
.org 0x98506
	ldr r1, [r4, #4]	@ 00098506 6168
.org 0x98508
	mov r4, ip	@ 00098508 6446
.org 0x9850a
	str r0, [r4, #84]	@ 0009850a 6065
.org 0x9850c
	str r1, [r4, #88]	@ 0009850c a165
.org 0x9850e
	movs r0, #1	@ 0009850e 0120
.org 0x98510
	strb r0, [r4, #16]	@ 00098510 2074
.org 0x98512
	strb r2, [r4, #17]	@ 00098512 6274
.org 0x98514
	adds r2, r5, #0	@ 00098514 2a1c
.org 0x98516
	cmp r2, #0	@ 00098516 002a
.org 0x98518
	beq.n 0x9852c	@ 00098518 08d0
.org 0x9851a
	ldrb r0, [r4, #10]	@ 0009851a a07a
.org 0x9851c
	orrs r0, r3	@ 0009851c 1843
.org 0x9851e
	strb r0, [r4, #10]	@ 0009851e a072
.org 0x98520
	b.n 0x98538	@ 00098520 0ae0
.org 0x98522
	.byte 0x00	@ 00098522 data
.org 0x98523
	.byte 0x00	@ 00098523 data
.org 0x98524
	.byte 0x90,0xed,0x02,0x02	@ 00098524 data
.org 0x98528
	.byte 0x40,0xdb,0x85,0x08	@ 00098528 data
.org 0x9852c
	mov r0, ip	@ 0009852c 6046
.org 0x9852e
	ldrb r1, [r0, #10]	@ 0009852e 817a
.org 0x98530
	movs r0, #239	@ 00098530 ef20
.org 0x98532
	ands r0, r1	@ 00098532 0840
.org 0x98534
	mov r1, ip	@ 00098534 6146
.org 0x98536
	strb r0, [r1, #10]	@ 00098536 8872
.org 0x98538
	movs r1, #1	@ 00098538 0121
.org 0x9853a
	ands r1, r2	@ 0009853a 1140
.org 0x9853c
	mov r0, ip	@ 0009853c 6046
.org 0x9853e
	adds r0, #76	@ 0009853e 4c30
.org 0x98540
	strb r1, [r0, #0]	@ 00098540 0170
.org 0x98542
	mov r3, ip	@ 00098542 6346
.org 0x98544
	adds r3, #74	@ 00098544 4a33
.org 0x98546
	lsls r1, r1, #4	@ 00098546 0901
.org 0x98548
	ldrb r2, [r3, #0]	@ 00098548 1a78
.org 0x9854a
	movs r0, #17	@ 0009854a 1120
.org 0x9854c
	negs r0, r0	@ 0009854c 4042
.org 0x9854e
	ands r0, r2	@ 0009854e 1040
