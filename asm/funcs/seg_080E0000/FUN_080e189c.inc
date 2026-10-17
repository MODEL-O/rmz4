@ FUN_080e189c  entry 0x080e189c  size 78
.thumb
.org 0xe189c
FUN_080e189c:
	push {r4, lr}	@ 000e189c 10b5
.org 0xe189e
	adds r4, r0, #0	@ 000e189e 041c
.org 0xe18a0
	ldrb r0, [r4, #13]	@ 000e18a0 607b
.org 0xe18a2
	cmp r0, #0	@ 000e18a2 0028
.org 0xe18a4
	bne.n 0xe18ce	@ 000e18a4 13d1
.org 0xe18a6
	adds r0, r4, #0	@ 000e18a6 201c
.org 0xe18a8
	adds r0, #118	@ 000e18a8 7630
.org 0xe18aa
	ldrh r0, [r0, #0]	@ 000e18aa 0088
.org 0xe18ac
	movs r1, #9	@ 000e18ac 0921
.org 0xe18ae
	orrs r1, r0	@ 000e18ae 0143
.org 0xe18b0
	adds r0, r4, #0	@ 000e18b0 201c
.org 0xe18b2
	bl 0x1cf00	@ 000e18b2 3bf725fb
.org 0xe18b6
	ldr r0, [r4, #84]	@ 000e18b6 606d
.org 0xe18b8
	ldr r1, [r4, #88]	@ 000e18b8 a16d
.org 0xe18ba
	bl 0x8534	@ 000e18ba 26f73bfe
.org 0xe18be
	ldr r1, [r4, #88]	@ 000e18be a16d
.org 0xe18c0
	cmp r0, r1	@ 000e18c0 8842
.org 0xe18c2
	bne.n 0xe18c8	@ 000e18c2 01d1
.org 0xe18c4
	movs r0, #20	@ 000e18c4 1420
.org 0xe18c6
	strb r0, [r4, #18]	@ 000e18c6 a074
.org 0xe18c8
	ldrb r0, [r4, #13]	@ 000e18c8 607b
.org 0xe18ca
	adds r0, #1	@ 000e18ca 0130
.org 0xe18cc
	strb r0, [r4, #13]	@ 000e18cc 6073
.org 0xe18ce
	adds r0, r4, #0	@ 000e18ce 201c
.org 0xe18d0
	bl 0xe19e0	@ 000e18d0 00f086f8
.org 0xe18d4
	ldrb r1, [r4, #18]	@ 000e18d4 a17c
.org 0xe18d6
	cmp r1, #0	@ 000e18d6 0029
.org 0xe18d8
	beq.n 0xe18e4	@ 000e18d8 04d0
.org 0xe18da
	ldr r0, [r4, #96]	@ 000e18da 206e
.org 0xe18dc
	subs r0, #64	@ 000e18dc 4038
.org 0xe18de
	str r0, [r4, #96]	@ 000e18de 2066
.org 0xe18e0
	subs r0, r1, #1	@ 000e18e0 481e
.org 0xe18e2
	strb r0, [r4, #18]	@ 000e18e2 a074
.org 0xe18e4
	pop {r4}	@ 000e18e4 10bc
.org 0xe18e6
	pop {r0}	@ 000e18e6 01bc
.org 0xe18e8
	bx r0	@ 000e18e8 0047
