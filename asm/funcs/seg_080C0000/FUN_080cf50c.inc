@ FUN_080cf50c  entry 0x080cf50c  size 72
.thumb
.org 0xcf50c
FUN_080cf50c:
	push {r4, r5, lr}	@ 000cf50c 30b5
.org 0xcf50e
	adds r4, r0, #0	@ 000cf50e 041c
.org 0xcf510
	ldr r5, [r4, #40]	@ 000cf510 a56a
.org 0xcf512
	ldrb r0, [r4, #15]	@ 000cf512 e07b
.org 0xcf514
	cmp r0, #0	@ 000cf514 0028
.org 0xcf516
	bne.n 0xcf526	@ 000cf516 06d1
.org 0xcf518
	adds r1, r4, #0	@ 000cf518 211c
.org 0xcf51a
	adds r1, #180	@ 000cf51a b431
.org 0xcf51c
	movs r0, #80	@ 000cf51c 5020
.org 0xcf51e
	str r0, [r1, #0]	@ 000cf51e 0860
.org 0xcf520
	ldrb r0, [r4, #15]	@ 000cf520 e07b
.org 0xcf522
	adds r0, #1	@ 000cf522 0130
.org 0xcf524
	strb r0, [r4, #15]	@ 000cf524 e073
.org 0xcf526
	adds r0, r4, #0	@ 000cf526 201c
.org 0xcf528
	bl 0x1cff0	@ 000cf528 4df762fd
.org 0xcf52c
	ldr r0, [r5, #84]	@ 000cf52c 686d
.org 0xcf52e
	str r0, [r4, #84]	@ 000cf52e 6065
.org 0xcf530
	ldr r0, [r5, #88]	@ 000cf530 a86d
.org 0xcf532
	ldr r1, [pc, #32]	@ 000cf532 0849
.org 0xcf534
	adds r0, r0, r1	@ 000cf534 4018
.org 0xcf536
	str r0, [r4, #88]	@ 000cf536 a065
.org 0xcf538
	adds r1, r4, #0	@ 000cf538 211c
.org 0xcf53a
	adds r1, #180	@ 000cf53a b431
.org 0xcf53c
	ldr r0, [r1, #0]	@ 000cf53c 0868
.org 0xcf53e
	subs r2, r0, #1	@ 000cf53e 421e
.org 0xcf540
	str r2, [r1, #0]	@ 000cf540 0a60
.org 0xcf542
	cmp r2, #0	@ 000cf542 002a
.org 0xcf544
	bne.n 0xcf54e	@ 000cf544 03d1
.org 0xcf546
	movs r0, #1	@ 000cf546 0120
.org 0xcf548
	strb r0, [r4, #13]	@ 000cf548 6073
.org 0xcf54a
	strb r2, [r4, #14]	@ 000cf54a a273
.org 0xcf54c
	strb r2, [r4, #15]	@ 000cf54c e273
.org 0xcf54e
	pop {r4, r5}	@ 000cf54e 30bc
.org 0xcf550
	pop {r0}	@ 000cf550 01bc
.org 0xcf552
	bx r0	@ 000cf552 0047
