@ FUN_080fa598  entry 0x080fa598  size 82
.thumb
.org 0xfa598
FUN_080fa598:
	push {r4, lr}	@ 000fa598 10b5
.org 0xfa59a
	adds r4, r0, #0	@ 000fa59a 041c
.org 0xfa59c
	ldrb r0, [r4, #14]	@ 000fa59c a07b
.org 0xfa59e
	cmp r0, #0	@ 000fa59e 0028
.org 0xfa5a0
	bne.n 0xfa5ce	@ 000fa5a0 15d1
.org 0xfa5a2
	ldr r1, [pc, #72]	@ 000fa5a2 1249
.org 0xfa5a4
	adds r0, r4, #0	@ 000fa5a4 201c
.org 0xfa5a6
	bl 0x1cf00	@ 000fa5a6 22f7abfc
.org 0xfa5aa
	adds r0, r4, #0	@ 000fa5aa 201c
.org 0xfa5ac
	adds r0, #100	@ 000fa5ac 6430
.org 0xfa5ae
	ldrb r2, [r4, #10]	@ 000fa5ae a27a
.org 0xfa5b0
	lsrs r2, r2, #4	@ 000fa5b0 1209
.org 0xfa5b2
	movs r1, #1	@ 000fa5b2 0121
.org 0xfa5b4
	ands r2, r1	@ 000fa5b4 0a40
.org 0xfa5b6
	bl 0xcaeb4	@ 000fa5b6 d0f77dfc
.org 0xfa5ba
	adds r1, r4, #0	@ 000fa5ba 211c
.org 0xfa5bc
	adds r1, #184	@ 000fa5bc b831
.org 0xfa5be
	ldr r0, [r4, #88]	@ 000fa5be a06d
.org 0xfa5c0
	movs r2, #128	@ 000fa5c0 8022
.org 0xfa5c2
	lsls r2, r2, #1	@ 000fa5c2 5200
.org 0xfa5c4
	adds r0, r0, r2	@ 000fa5c4 8018
.org 0xfa5c6
	str r0, [r1, #0]	@ 000fa5c6 0860
.org 0xfa5c8
	ldrb r0, [r4, #14]	@ 000fa5c8 a07b
.org 0xfa5ca
	adds r0, #1	@ 000fa5ca 0130
.org 0xfa5cc
	strb r0, [r4, #14]	@ 000fa5cc a073
.org 0xfa5ce
	adds r0, r4, #0	@ 000fa5ce 201c
.org 0xfa5d0
	bl 0x1cff0	@ 000fa5d0 22f70efd
.org 0xfa5d4
	adds r0, r4, #0	@ 000fa5d4 201c
.org 0xfa5d6
	adds r0, #115	@ 000fa5d6 7330
.org 0xfa5d8
	ldrb r1, [r0, #0]	@ 000fa5d8 0178
.org 0xfa5da
	cmp r1, #3	@ 000fa5da 0329
.org 0xfa5dc
	bne.n 0xfa5e4	@ 000fa5dc 02d1
.org 0xfa5de
	movs r0, #0	@ 000fa5de 0020
.org 0xfa5e0
	strb r1, [r4, #13]	@ 000fa5e0 6173
.org 0xfa5e2
	strb r0, [r4, #14]	@ 000fa5e2 a073
.org 0xfa5e4
	pop {r4}	@ 000fa5e4 10bc
.org 0xfa5e6
	pop {r0}	@ 000fa5e6 01bc
.org 0xfa5e8
	bx r0	@ 000fa5e8 0047
