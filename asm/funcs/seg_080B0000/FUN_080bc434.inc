@ FUN_080bc434  entry 0x080bc434  size 52
.thumb
.org 0xbc434
FUN_080bc434:
	push {r4, lr}	@ 000bc434 10b5
.org 0xbc436
	adds r4, r0, #0	@ 000bc436 041c
.org 0xbc438
	ldr r2, [r4, #40]	@ 000bc438 a26a
.org 0xbc43a
	ldr r1, [pc, #44]	@ 000bc43a 0b49
.org 0xbc43c
	movs r0, #0	@ 000bc43c 0020
.org 0xbc43e
	strh r0, [r1, #0]	@ 000bc43e 0880
.org 0xbc440
	adds r3, r4, #0	@ 000bc440 231c
.org 0xbc442
	adds r3, #69	@ 000bc442 4533
.org 0xbc444
	ldrb r1, [r3, #0]	@ 000bc444 1978
.org 0xbc446
	subs r0, #13	@ 000bc446 0d38
.org 0xbc448
	ands r0, r1	@ 000bc448 0840
.org 0xbc44a
	strb r0, [r3, #0]	@ 000bc44a 1870
.org 0xbc44c
	adds r2, #204	@ 000bc44c cc32
.org 0xbc44e
	ldrh r1, [r2, #0]	@ 000bc44e 1188
.org 0xbc450
	movs r3, #0	@ 000bc450 0023
.org 0xbc452
	ldrsh r0, [r2, r3]	@ 000bc452 d05e
.org 0xbc454
	cmp r0, #0	@ 000bc454 0028
.org 0xbc456
	beq.n 0xbc45c	@ 000bc456 01d0
.org 0xbc458
	subs r0, r1, #1	@ 000bc458 481e
.org 0xbc45a
	strh r0, [r2, #0]	@ 000bc45a 1080
.org 0xbc45c
	adds r0, r4, #0	@ 000bc45c 201c
.org 0xbc45e
	bl 0x7f8ec	@ 000bc45e c3f745fa
.org 0xbc462
	pop {r4}	@ 000bc462 10bc
.org 0xbc464
	pop {r0}	@ 000bc464 01bc
.org 0xbc466
	bx r0	@ 000bc466 0047
