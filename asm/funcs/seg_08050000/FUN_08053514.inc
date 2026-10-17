@ FUN_08053514  entry 0x08053514  size 74
.thumb
.org 0x53514
FUN_08053514:
	push {r4, lr}	@ 00053514 10b5
.org 0x53516
	adds r4, r0, #0	@ 00053516 041c
.org 0x53518
	ldrb r0, [r4, #15]	@ 00053518 e07b
.org 0x5351a
	cmp r0, #0	@ 0005351a 0028
.org 0x5351c
	bne.n 0x5353e	@ 0005351c 0fd1
.org 0x5351e
	adds r0, r4, #0	@ 0005351e 201c
.org 0x53520
	adds r0, #200	@ 00053520 c830
.org 0x53522
	ldr r0, [r0, #0]	@ 00053522 0068
.org 0x53524
	adds r0, #180	@ 00053524 b430
.org 0x53526
	movs r1, #1	@ 00053526 0121
.org 0x53528
	strb r1, [r0, #0]	@ 00053528 0170
.org 0x5352a
	movs r1, #182	@ 0005352a b621
.org 0x5352c
	lsls r1, r1, #8	@ 0005352c 0902
.org 0x5352e
	adds r0, r4, #0	@ 0005352e 201c
.org 0x53530
	bl 0x1cf00	@ 00053530 c9f7e6fc
.org 0x53534
	movs r0, #32	@ 00053534 2020
.org 0x53536
	strb r0, [r4, #18]	@ 00053536 a074
.org 0x53538
	ldrb r0, [r4, #15]	@ 00053538 e07b
.org 0x5353a
	adds r0, #1	@ 0005353a 0130
.org 0x5353c
	strb r0, [r4, #15]	@ 0005353c e073
.org 0x5353e
	adds r0, r4, #0	@ 0005353e 201c
.org 0x53540
	bl 0x1cff0	@ 00053540 c9f756fd
.org 0x53544
	ldrb r0, [r4, #18]	@ 00053544 a07c
.org 0x53546
	subs r0, #1	@ 00053546 0138
.org 0x53548
	strb r0, [r4, #18]	@ 00053548 a074
.org 0x5354a
	lsls r0, r0, #24	@ 0005354a 0006
.org 0x5354c
	lsrs r1, r0, #24	@ 0005354c 010e
.org 0x5354e
	cmp r1, #0	@ 0005354e 0029
.org 0x53550
	bne.n 0x53558	@ 00053550 02d1
.org 0x53552
	movs r0, #1	@ 00053552 0120
.org 0x53554
	strb r0, [r4, #14]	@ 00053554 a073
.org 0x53556
	strb r1, [r4, #15]	@ 00053556 e173
.org 0x53558
	pop {r4}	@ 00053558 10bc
.org 0x5355a
	pop {r0}	@ 0005355a 01bc
.org 0x5355c
	bx r0	@ 0005355c 0047
