@ FUN_080864c8  entry 0x080864c8  size 162
.thumb
.org 0x864c8
FUN_080864c8:
	push {r4, r5, r6, lr}	@ 000864c8 70b5
.org 0x864ca
	adds r4, r0, #0	@ 000864ca 041c
.org 0x864cc
	ldrb r0, [r4, #15]	@ 000864cc e07b
.org 0x864ce
	cmp r0, #0	@ 000864ce 0028
.org 0x864d0
	bne.n 0x864ee	@ 000864d0 0dd1
.org 0x864d2
	adds r0, r4, #0	@ 000864d2 201c
.org 0x864d4
	adds r0, #116	@ 000864d4 7430
.org 0x864d6
	ldr r1, [pc, #148]	@ 000864d6 2549
.org 0x864d8
	bl 0x5784	@ 000864d8 7ff754f9
.org 0x864dc
	adds r0, r4, #0	@ 000864dc 201c
.org 0x864de
	movs r1, #4	@ 000864de 0421
.org 0x864e0
	bl 0x86a14	@ 000864e0 00f098fa
.org 0x864e4
	movs r0, #1	@ 000864e4 0120
.org 0x864e6
	strb r0, [r4, #19]	@ 000864e6 e074
.org 0x864e8
	ldrb r0, [r4, #15]	@ 000864e8 e07b
.org 0x864ea
	adds r0, #1	@ 000864ea 0130
.org 0x864ec
	strb r0, [r4, #15]	@ 000864ec e073
.org 0x864ee
	ldrb r0, [r4, #19]	@ 000864ee e07c
.org 0x864f0
	cmp r0, #0	@ 000864f0 0028
.org 0x864f2
	beq.n 0x8653e	@ 000864f2 24d0
.org 0x864f4
	ldr r0, [pc, #120]	@ 000864f4 1e48
.org 0x864f6
	ldr r0, [r0, #0]	@ 000864f6 0068
.org 0x864f8
	ldr r5, [r0, #84]	@ 000864f8 456d
.org 0x864fa
	ldr r0, [r0, #88]	@ 000864fa 806d
.org 0x864fc
	ldr r1, [pc, #116]	@ 000864fc 1d49
.org 0x864fe
	adds r6, r0, r1	@ 000864fe 4618
.org 0x86500
	ldr r0, [r4, #84]	@ 00086500 606d
.org 0x86502
	subs r0, r5, r0	@ 00086502 281a
.org 0x86504
	ldr r1, [r4, #88]	@ 00086504 a16d
.org 0x86506
	subs r1, r6, r1	@ 00086506 711a
.org 0x86508
	bl 0x10d338	@ 00086508 86f016ff
.org 0x8650c
	lsls r0, r0, #24	@ 0008650c 0006
.org 0x8650e
	ldr r3, [pc, #104]	@ 0008650e 1a4b
.org 0x86510
	movs r2, #128	@ 00086510 8022
.org 0x86512
	lsls r2, r2, #23	@ 00086512 d205
.org 0x86514
	adds r1, r0, r2	@ 00086514 8118
.org 0x86516
	lsrs r1, r1, #23	@ 00086516 c90d
.org 0x86518
	adds r1, r1, r3	@ 00086518 c918
.org 0x8651a
	movs r2, #0	@ 0008651a 0022
.org 0x8651c
	ldrsh r1, [r1, r2]	@ 0008651c 895e
.org 0x8651e
	lsrs r2, r1, #31	@ 0008651e ca0f
.org 0x86520
	adds r1, r1, r2	@ 00086520 8918
.org 0x86522
	asrs r1, r1, #1	@ 00086522 4910
.org 0x86524
	str r1, [r4, #92]	@ 00086524 e165
.org 0x86526
	lsrs r0, r0, #23	@ 00086526 c00d
.org 0x86528
	adds r0, r0, r3	@ 00086528 c018
.org 0x8652a
	movs r1, #0	@ 0008652a 0021
.org 0x8652c
	ldrsh r0, [r0, r1]	@ 0008652c 405e
.org 0x8652e
	lsrs r1, r0, #31	@ 0008652e c10f
.org 0x86530
	adds r0, r0, r1	@ 00086530 4018
.org 0x86532
	asrs r0, r0, #1	@ 00086532 4010
.org 0x86534
	str r0, [r4, #96]	@ 00086534 2066
.org 0x86536
	movs r1, #0	@ 00086536 0021
.org 0x86538
	movs r0, #60	@ 00086538 3c20
.org 0x8653a
	strb r0, [r4, #18]	@ 0008653a a074
.org 0x8653c
	strb r1, [r4, #19]	@ 0008653c e174
.org 0x8653e
	adds r0, r4, #0	@ 0008653e 201c
.org 0x86540
	bl 0x86a48	@ 00086540 00f082fa
.org 0x86544
	ldr r0, [r4, #84]	@ 00086544 606d
.org 0x86546
	ldr r1, [r4, #92]	@ 00086546 e16d
.org 0x86548
	adds r0, r0, r1	@ 00086548 4018
.org 0x8654a
	str r0, [r4, #84]	@ 0008654a 6065
.org 0x8654c
	ldr r0, [r4, #88]	@ 0008654c a06d
.org 0x8654e
	ldr r1, [r4, #96]	@ 0008654e 216e
.org 0x86550
	adds r0, r0, r1	@ 00086550 4018
.org 0x86552
	str r0, [r4, #88]	@ 00086552 a065
.org 0x86554
	ldrb r0, [r4, #18]	@ 00086554 a07c
.org 0x86556
	subs r0, #1	@ 00086556 0138
.org 0x86558
	strb r0, [r4, #18]	@ 00086558 a074
.org 0x8655a
	lsls r0, r0, #24	@ 0008655a 0006
.org 0x8655c
	cmp r0, #0	@ 0008655c 0028
.org 0x8655e
	bne.n 0x86564	@ 0008655e 01d1
.org 0x86560
	movs r0, #1	@ 00086560 0120
.org 0x86562
	strb r0, [r4, #19]	@ 00086562 e074
.org 0x86564
	pop {r4, r5, r6}	@ 00086564 70bc
.org 0x86566
	pop {r0}	@ 00086566 01bc
.org 0x86568
	bx r0	@ 00086568 0047
