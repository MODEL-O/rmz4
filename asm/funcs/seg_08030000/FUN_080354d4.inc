@ FUN_080354d4  entry 0x080354d4  size 138
.thumb
.org 0x354d4
FUN_080354d4:
	push {r4, lr}	@ 000354d4 10b5
.org 0x354d6
	adds r4, r0, #0	@ 000354d6 041c
.org 0x354d8
	ldrb r0, [r4, #30]	@ 000354d8 a07f
.org 0x354da
	lsls r0, r0, #8	@ 000354da 0002
.org 0x354dc
	adds r1, r4, #0	@ 000354dc 211c
.org 0x354de
	adds r1, #112	@ 000354de 7031
.org 0x354e0
	ldrb r1, [r1, #0]	@ 000354e0 0978
.org 0x354e2
	orrs r1, r0	@ 000354e2 0143
.org 0x354e4
	ldr r2, [pc, #16]	@ 000354e4 044a
.org 0x354e6
	cmp r1, r2	@ 000354e6 9142
.org 0x354e8
	beq.n 0x354fc	@ 000354e8 08d0
.org 0x354ea
	adds r0, r4, #0	@ 000354ea 201c
.org 0x354ec
	adds r1, r2, #0	@ 000354ec 111c
.org 0x354ee
	movs r2, #2	@ 000354ee 0222
.org 0x354f0
	movs r3, #2	@ 000354f0 0223
.org 0x354f2
	bl 0x1cfc8	@ 000354f2 e7f769fd
.org 0x354f6
	b.n 0x35514	@ 000354f6 0de0
.org 0x354f8
	.byte 0x01,0x0a,0x00,0x00	@ 000354f8 data
.org 0x354fc
	adds r0, r4, #0	@ 000354fc 201c
.org 0x354fe
	adds r0, #113	@ 000354fe 7130
.org 0x35500
	ldrb r0, [r0, #0]	@ 00035500 0078
.org 0x35502
	lsls r0, r0, #24	@ 00035502 0006
.org 0x35504
	asrs r0, r0, #24	@ 00035504 0016
.org 0x35506
	cmp r0, #1	@ 00035506 0128
.org 0x35508
	bgt.n 0x35514	@ 00035508 04dc
.org 0x3550a
	adds r0, r4, #0	@ 0003550a 201c
.org 0x3550c
	movs r2, #2	@ 0003550c 0222
.org 0x3550e
	movs r3, #2	@ 0003550e 0223
.org 0x35510
	bl 0x1cfc8	@ 00035510 e7f75afd
.org 0x35514
	movs r1, #170	@ 00035514 aa21
.org 0x35516
	lsls r1, r1, #1	@ 00035516 4900
.org 0x35518
	adds r0, r4, r1	@ 00035518 6018
.org 0x3551a
	ldrb r0, [r0, #0]	@ 0003551a 0078
.org 0x3551c
	cmp r0, #4	@ 0003551c 0428
.org 0x3551e
	bne.n 0x35532	@ 0003551e 08d1
.org 0x35520
	subs r1, #84	@ 00035520 5439
.org 0x35522
	adds r0, r4, r1	@ 00035522 6018
.org 0x35524
	movs r1, #0	@ 00035524 0021
.org 0x35526
	strb r1, [r0, #0]	@ 00035526 0170
.org 0x35528
	movs r1, #192	@ 00035528 c021
.org 0x3552a
	lsls r1, r1, #2	@ 0003552a 8900
.org 0x3552c
	adds r0, r4, #0	@ 0003552c 201c
.org 0x3552e
	bl 0x1cf00	@ 0003552e e7f7e7fc
.org 0x35532
	movs r0, #162	@ 00035532 a220
.org 0x35534
	lsls r0, r0, #1	@ 00035534 4000
.org 0x35536
	adds r1, r4, r0	@ 00035536 2118
.org 0x35538
	adds r0, r4, #0	@ 00035538 201c
.org 0x3553a
	bl 0x39fd8	@ 0003553a 04f04dfd
.org 0x3553e
	lsls r0, r0, #24	@ 0003553e 0006
.org 0x35540
	cmp r0, #0	@ 00035540 0028
.org 0x35542
	beq.n 0x3555c	@ 00035542 0bd0
.org 0x35544
	movs r1, #128	@ 00035544 8021
.org 0x35546
	lsls r1, r1, #1	@ 00035546 4900
.org 0x35548
	adds r0, r4, r1	@ 00035548 6018
.org 0x3554a
	movs r2, #0	@ 0003554a 0022
.org 0x3554c
	movs r1, #3	@ 0003554c 0321
.org 0x3554e
	strb r1, [r0, #0]	@ 0003554e 0170
.org 0x35550
	adds r1, #254	@ 00035550 fe31
.org 0x35552
	adds r0, r4, r1	@ 00035552 6018
.org 0x35554
	strb r2, [r0, #0]	@ 00035554 0270
.org 0x35556
	adds r0, r4, #0	@ 00035556 201c
.org 0x35558
	bl 0x353a0	@ 00035558 fff722ff
.org 0x3555c
	pop {r4}	@ 0003555c 10bc
