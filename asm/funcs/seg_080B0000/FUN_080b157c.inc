@ FUN_080b157c  entry 0x080b157c  size 56
.thumb
.org 0xb157c
FUN_080b157c:
	push {r4, r5, r6, lr}	@ 000b157c 70b5
.org 0xb157e
	adds r4, r0, #0	@ 000b157e 041c
.org 0xb1580
	ldrb r0, [r4, #18]	@ 000b1580 a07c
.org 0xb1582
	adds r6, r0, #0	@ 000b1582 061c
.org 0xb1584
	cmp r6, #0	@ 000b1584 002e
.org 0xb1586
	bne.n 0xb15b0	@ 000b1586 13d1
.org 0xb1588
	movs r1, #185	@ 000b1588 b921
.org 0xb158a
	lsls r1, r1, #8	@ 000b158a 0902
.org 0xb158c
	adds r0, r4, #0	@ 000b158c 201c
.org 0xb158e
	bl 0x1cf00	@ 000b158e 6bf7b7fc
.org 0xb1592
	adds r5, r4, #0	@ 000b1592 251c
.org 0xb1594
	adds r5, #194	@ 000b1594 c235
.org 0xb1596
	ldrb r0, [r5, #0]	@ 000b1596 2878
.org 0xb1598
	cmp r0, #15	@ 000b1598 0f28
.org 0xb159a
	bne.n 0xb15a6	@ 000b159a 04d1
.org 0xb159c
	adds r0, r4, #0	@ 000b159c 201c
.org 0xb159e
	adds r0, #116	@ 000b159e 7430
.org 0xb15a0
	ldr r1, [pc, #8]	@ 000b15a0 0249
.org 0xb15a2
	bl 0x5784	@ 000b15a2 54f7eff8
.org 0xb15a6
	strb r6, [r5, #0]	@ 000b15a6 2e70
.org 0xb15a8
	b.n 0xb15b4	@ 000b15a8 04e0
.org 0xb15aa
	.byte 0x00	@ 000b15aa data
.org 0xb15ab
	.byte 0x00	@ 000b15ab data
.org 0xb15ac
	.byte 0x10,0x34,0x86,0x08	@ 000b15ac data
.org 0xb15b0
	subs r0, #1	@ 000b15b0 0138
.org 0xb15b2
	strb r0, [r4, #18]	@ 000b15b2 a074
