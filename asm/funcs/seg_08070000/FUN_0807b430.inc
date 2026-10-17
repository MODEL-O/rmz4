@ FUN_0807b430  entry 0x0807b430  size 50
.thumb
.org 0x7b430
FUN_0807b430:
	push {r4, lr}	@ 0007b430 10b5
.org 0x7b432
	adds r4, r0, #0	@ 0007b432 041c
.org 0x7b434
	ldr r0, [r4, #20]	@ 0007b434 6069
.org 0x7b436
	movs r1, #1	@ 0007b436 0121
.org 0x7b438
	ands r0, r1	@ 0007b438 0840
.org 0x7b43a
	cmp r0, #0	@ 0007b43a 0028
.org 0x7b43c
	beq.n 0x7b45c	@ 0007b43c 0ed0
.org 0x7b43e
	movs r0, #68	@ 0007b43e 4420
.org 0x7b440
	bl 0x6984	@ 0007b440 8bf7a0fa
.org 0x7b444
	ldr r0, [r4, #12]	@ 0007b444 e068
.org 0x7b446
	ldr r0, [r0, #44]	@ 0007b446 c06a
.org 0x7b448
	ldr r2, [r4, #44]	@ 0007b448 e26a
.org 0x7b44a
	movs r3, #0	@ 0007b44a 0023
.org 0x7b44c
	ldr r1, [r0, #84]	@ 0007b44c 416d
.org 0x7b44e
	ldr r0, [r2, #84]	@ 0007b44e 506d
.org 0x7b450
	cmp r1, r0	@ 0007b450 8142
.org 0x7b452
	ble.n 0x7b456	@ 0007b452 00dd
.org 0x7b454
	movs r3, #1	@ 0007b454 0123
.org 0x7b456
	adds r0, r2, #0	@ 0007b456 101c
.org 0x7b458
	adds r0, #212	@ 0007b458 d430
.org 0x7b45a
	strb r3, [r0, #0]	@ 0007b45a 0370
.org 0x7b45c
	pop {r4}	@ 0007b45c 10bc
.org 0x7b45e
	pop {r0}	@ 0007b45e 01bc
.org 0x7b460
	bx r0	@ 0007b460 0047
