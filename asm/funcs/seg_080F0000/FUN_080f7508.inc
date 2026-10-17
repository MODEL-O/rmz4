@ FUN_080f7508  entry 0x080f7508  size 76
.thumb
.org 0xf7508
FUN_080f7508:
	push {r4, lr}	@ 000f7508 10b5
.org 0xf750a
	adds r4, r0, #0	@ 000f750a 041c
.org 0xf750c
	adds r4, #184	@ 000f750c b834
.org 0xf750e
	ldr r3, [r4, #0]	@ 000f750e 2368
.org 0xf7510
	cmp r3, #0	@ 000f7510 002b
.org 0xf7512
	beq.n 0xf754c	@ 000f7512 1bd0
.org 0xf7514
	ldrb r1, [r3, #10]	@ 000f7514 997a
.org 0xf7516
	movs r0, #254	@ 000f7516 fe20
.org 0xf7518
	ands r0, r1	@ 000f7518 0840
.org 0xf751a
	movs r2, #0	@ 000f751a 0022
.org 0xf751c
	movs r1, #253	@ 000f751c fd21
.org 0xf751e
	ands r0, r1	@ 000f751e 0840
.org 0xf7520
	strb r0, [r3, #10]	@ 000f7520 9872
.org 0xf7522
	adds r0, r3, #0	@ 000f7522 181c
.org 0xf7524
	adds r0, #140	@ 000f7524 8c30
.org 0xf7526
	str r2, [r0, #0]	@ 000f7526 0260
.org 0xf7528
	adds r0, #4	@ 000f7528 0430
.org 0xf752a
	str r2, [r0, #0]	@ 000f752a 0260
.org 0xf752c
	adds r0, #4	@ 000f752c 0430
.org 0xf752e
	strb r2, [r0, #0]	@ 000f752e 0270
.org 0xf7530
	ldrb r1, [r3, #10]	@ 000f7530 997a
.org 0xf7532
	movs r0, #251	@ 000f7532 fb20
.org 0xf7534
	ands r0, r1	@ 000f7534 0840
.org 0xf7536
	strb r0, [r3, #10]	@ 000f7536 9872
.org 0xf7538
	ldr r1, [pc, #24]	@ 000f7538 0649
.org 0xf753a
	ldrb r0, [r3, #9]	@ 000f753a 587a
.org 0xf753c
	lsls r0, r0, #2	@ 000f753c 8000
.org 0xf753e
	adds r0, r0, r1	@ 000f753e 4018
.org 0xf7540
	movs r1, #3	@ 000f7540 0321
.org 0xf7542
	str r1, [r3, #12]	@ 000f7542 d960
.org 0xf7544
	ldr r0, [r0, #0]	@ 000f7544 0068
.org 0xf7546
	ldr r0, [r0, #12]	@ 000f7546 c068
.org 0xf7548
	str r0, [r3, #20]	@ 000f7548 5861
.org 0xf754a
	movs r3, #0	@ 000f754a 0023
.org 0xf754c
	str r3, [r4, #0]	@ 000f754c 2360
.org 0xf754e
	pop {r4}	@ 000f754e 10bc
.org 0xf7550
	pop {r0}	@ 000f7550 01bc
.org 0xf7552
	bx r0	@ 000f7552 0047
