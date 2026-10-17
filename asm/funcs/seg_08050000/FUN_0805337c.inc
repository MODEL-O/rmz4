@ FUN_0805337c  entry 0x0805337c  size 74
.thumb
.org 0x5337c
FUN_0805337c:
	push {r4, lr}	@ 0005337c 10b5
.org 0x5337e
	adds r4, r0, #0	@ 0005337e 041c
.org 0x53380
	ldrb r0, [r4, #15]	@ 00053380 e07b
.org 0x53382
	cmp r0, #0	@ 00053382 0028
.org 0x53384
	bne.n 0x533a6	@ 00053384 0fd1
.org 0x53386
	adds r0, r4, #0	@ 00053386 201c
.org 0x53388
	adds r0, #196	@ 00053388 c430
.org 0x5338a
	ldr r0, [r0, #0]	@ 0005338a 0068
.org 0x5338c
	adds r0, #180	@ 0005338c b430
.org 0x5338e
	movs r1, #1	@ 0005338e 0121
.org 0x53390
	strb r1, [r0, #0]	@ 00053390 0170
.org 0x53392
	movs r1, #182	@ 00053392 b621
.org 0x53394
	lsls r1, r1, #8	@ 00053394 0902
.org 0x53396
	adds r0, r4, #0	@ 00053396 201c
.org 0x53398
	bl 0x1cf00	@ 00053398 c9f7b2fd
.org 0x5339c
	movs r0, #32	@ 0005339c 2020
.org 0x5339e
	strb r0, [r4, #18]	@ 0005339e a074
.org 0x533a0
	ldrb r0, [r4, #15]	@ 000533a0 e07b
.org 0x533a2
	adds r0, #1	@ 000533a2 0130
.org 0x533a4
	strb r0, [r4, #15]	@ 000533a4 e073
.org 0x533a6
	adds r0, r4, #0	@ 000533a6 201c
.org 0x533a8
	bl 0x1cff0	@ 000533a8 c9f722fe
.org 0x533ac
	ldrb r0, [r4, #18]	@ 000533ac a07c
.org 0x533ae
	subs r0, #1	@ 000533ae 0138
.org 0x533b0
	strb r0, [r4, #18]	@ 000533b0 a074
.org 0x533b2
	lsls r0, r0, #24	@ 000533b2 0006
.org 0x533b4
	lsrs r1, r0, #24	@ 000533b4 010e
.org 0x533b6
	cmp r1, #0	@ 000533b6 0029
.org 0x533b8
	bne.n 0x533c0	@ 000533b8 02d1
.org 0x533ba
	movs r0, #1	@ 000533ba 0120
.org 0x533bc
	strb r0, [r4, #14]	@ 000533bc a073
.org 0x533be
	strb r1, [r4, #15]	@ 000533be e173
.org 0x533c0
	pop {r4}	@ 000533c0 10bc
.org 0x533c2
	pop {r0}	@ 000533c2 01bc
.org 0x533c4
	bx r0	@ 000533c4 0047
