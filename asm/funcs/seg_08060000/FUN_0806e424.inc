@ FUN_0806e424  entry 0x0806e424  size 72
.thumb
.org 0x6e424
FUN_0806e424:
	push {r4, lr}	@ 0006e424 10b5
.org 0x6e426
	adds r4, r0, #0	@ 0006e426 041c
.org 0x6e428
	ldrb r0, [r4, #15]	@ 0006e428 e07b
.org 0x6e42a
	cmp r0, #0	@ 0006e42a 0028
.org 0x6e42c
	bne.n 0x6e44c	@ 0006e42c 0ed1
.org 0x6e42e
	adds r0, r4, #0	@ 0006e42e 201c
.org 0x6e430
	adds r0, #116	@ 0006e430 7430
.org 0x6e432
	ldr r1, [pc, #56]	@ 0006e432 0e49
.org 0x6e434
	bl 0x5784	@ 0006e434 97f7a6f9
.org 0x6e438
	movs r1, #173	@ 0006e438 ad21
.org 0x6e43a
	lsls r1, r1, #8	@ 0006e43a 0902
.org 0x6e43c
	adds r0, r4, #0	@ 0006e43c 201c
.org 0x6e43e
	bl 0x1cf00	@ 0006e43e aef75ffd
.org 0x6e442
	movs r0, #16	@ 0006e442 1020
.org 0x6e444
	strb r0, [r4, #18]	@ 0006e444 a074
.org 0x6e446
	ldrb r0, [r4, #15]	@ 0006e446 e07b
.org 0x6e448
	adds r0, #1	@ 0006e448 0130
.org 0x6e44a
	strb r0, [r4, #15]	@ 0006e44a e073
.org 0x6e44c
	adds r0, r4, #0	@ 0006e44c 201c
.org 0x6e44e
	bl 0x1cff0	@ 0006e44e aef7cffd
.org 0x6e452
	ldrb r0, [r4, #18]	@ 0006e452 a07c
.org 0x6e454
	subs r0, #1	@ 0006e454 0138
.org 0x6e456
	strb r0, [r4, #18]	@ 0006e456 a074
.org 0x6e458
	lsls r0, r0, #24	@ 0006e458 0006
.org 0x6e45a
	lsrs r1, r0, #24	@ 0006e45a 010e
.org 0x6e45c
	cmp r1, #0	@ 0006e45c 0029
.org 0x6e45e
	bne.n 0x6e466	@ 0006e45e 02d1
.org 0x6e460
	movs r0, #1	@ 0006e460 0120
.org 0x6e462
	strb r0, [r4, #14]	@ 0006e462 a073
.org 0x6e464
	strb r1, [r4, #15]	@ 0006e464 e173
.org 0x6e466
	pop {r4}	@ 0006e466 10bc
.org 0x6e468
	pop {r0}	@ 0006e468 01bc
.org 0x6e46a
	bx r0	@ 0006e46a 0047
