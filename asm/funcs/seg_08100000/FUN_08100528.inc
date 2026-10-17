@ FUN_08100528  entry 0x08100528  size 66
.thumb
.org 0x100528
FUN_08100528:
	push {r4, lr}	@ 00100528 10b5
.org 0x10052a
	adds r4, r0, #0	@ 0010052a 041c
.org 0x10052c
	ldrb r0, [r4, #14]	@ 0010052c a07b
.org 0x10052e
	cmp r0, #0	@ 0010052e 0028
.org 0x100530
	bne.n 0x100550	@ 00100530 0ed1
.org 0x100532
	adds r0, r4, #0	@ 00100532 201c
.org 0x100534
	adds r0, #180	@ 00100534 b430
.org 0x100536
	ldrb r1, [r0, #0]	@ 00100536 0178
.org 0x100538
	movs r2, #190	@ 00100538 be22
.org 0x10053a
	lsls r2, r2, #8	@ 0010053a 1202
.org 0x10053c
	adds r0, r2, #0	@ 0010053c 101c
.org 0x10053e
	orrs r1, r0	@ 0010053e 0143
.org 0x100540
	adds r0, r4, #0	@ 00100540 201c
.org 0x100542
	bl 0x1cf00	@ 00100542 1cf7ddfc
.org 0x100546
	movs r0, #32	@ 00100546 2020
.org 0x100548
	strb r0, [r4, #18]	@ 00100548 a074
.org 0x10054a
	ldrb r0, [r4, #14]	@ 0010054a a07b
.org 0x10054c
	adds r0, #1	@ 0010054c 0130
.org 0x10054e
	strb r0, [r4, #14]	@ 0010054e a073
.org 0x100550
	adds r0, r4, #0	@ 00100550 201c
.org 0x100552
	bl 0x100510	@ 00100552 fff7ddff
.org 0x100556
	lsls r0, r0, #24	@ 00100556 0006
.org 0x100558
	cmp r0, #0	@ 00100558 0028
.org 0x10055a
	beq.n 0x100564	@ 0010055a 03d0
.org 0x10055c
	movs r1, #0	@ 0010055c 0021
.org 0x10055e
	movs r0, #1	@ 0010055e 0120
.org 0x100560
	strb r0, [r4, #13]	@ 00100560 6073
.org 0x100562
	strb r1, [r4, #14]	@ 00100562 a173
.org 0x100564
	pop {r4}	@ 00100564 10bc
.org 0x100566
	pop {r0}	@ 00100566 01bc
.org 0x100568
	bx r0	@ 00100568 0047
