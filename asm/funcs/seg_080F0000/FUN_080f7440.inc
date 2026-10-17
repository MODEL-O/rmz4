@ FUN_080f7440  entry 0x080f7440  size 56
.thumb
.org 0xf7440
FUN_080f7440:
	push {r4, lr}	@ 000f7440 10b5
.org 0xf7442
	adds r4, r0, #0	@ 000f7442 041c
.org 0xf7444
	ldr r1, [r4, #40]	@ 000f7444 a16a
.org 0xf7446
	cmp r1, #0	@ 000f7446 0029
.org 0xf7448
	beq.n 0xf7452	@ 000f7448 03d0
.org 0xf744a
	adds r1, #181	@ 000f744a b531
.org 0xf744c
	ldrb r0, [r1, #0]	@ 000f744c 0878
.org 0xf744e
	subs r0, #1	@ 000f744e 0138
.org 0xf7450
	strb r0, [r1, #0]	@ 000f7450 0870
.org 0xf7452
	adds r0, r4, #0	@ 000f7452 201c
.org 0xf7454
	bl 0xf7508	@ 000f7454 00f058f8
.org 0xf7458
	ldrb r1, [r4, #10]	@ 000f7458 a17a
.org 0xf745a
	movs r0, #254	@ 000f745a fe20
.org 0xf745c
	ands r0, r1	@ 000f745c 0840
.org 0xf745e
	strb r0, [r4, #10]	@ 000f745e a072
.org 0xf7460
	ldr r1, [pc, #20]	@ 000f7460 0549
.org 0xf7462
	ldrb r0, [r4, #9]	@ 000f7462 607a
.org 0xf7464
	lsls r0, r0, #2	@ 000f7464 8000
.org 0xf7466
	adds r0, r0, r1	@ 000f7466 4018
.org 0xf7468
	movs r1, #4	@ 000f7468 0421
.org 0xf746a
	str r1, [r4, #12]	@ 000f746a e160
.org 0xf746c
	ldr r0, [r0, #0]	@ 000f746c 0068
.org 0xf746e
	ldr r0, [r0, #16]	@ 000f746e 0069
.org 0xf7470
	str r0, [r4, #20]	@ 000f7470 6061
.org 0xf7472
	pop {r4}	@ 000f7472 10bc
.org 0xf7474
	pop {r0}	@ 000f7474 01bc
.org 0xf7476
	bx r0	@ 000f7476 0047
