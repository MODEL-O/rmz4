@ FUN_080fa5f0  entry 0x080fa5f0  size 94
.thumb
.org 0xfa5f0
FUN_080fa5f0:
	push {r4, lr}	@ 000fa5f0 10b5
.org 0xfa5f2
	adds r4, r0, #0	@ 000fa5f2 041c
.org 0xfa5f4
	ldrb r0, [r4, #14]	@ 000fa5f4 a07b
.org 0xfa5f6
	cmp r0, #0	@ 000fa5f6 0028
.org 0xfa5f8
	bne.n 0xfa628	@ 000fa5f8 16d1
.org 0xfa5fa
	ldr r1, [pc, #84]	@ 000fa5fa 1549
.org 0xfa5fc
	adds r0, r4, #0	@ 000fa5fc 201c
.org 0xfa5fe
	bl 0x1cf00	@ 000fa5fe 22f77ffc
.org 0xfa602
	adds r0, r4, #0	@ 000fa602 201c
.org 0xfa604
	adds r0, #100	@ 000fa604 6430
.org 0xfa606
	ldrb r2, [r4, #10]	@ 000fa606 a27a
.org 0xfa608
	lsrs r2, r2, #4	@ 000fa608 1209
.org 0xfa60a
	movs r1, #1	@ 000fa60a 0121
.org 0xfa60c
	ands r2, r1	@ 000fa60c 0a40
.org 0xfa60e
	movs r1, #2	@ 000fa60e 0221
.org 0xfa610
	bl 0xcaeb4	@ 000fa610 d0f750fc
.org 0xfa614
	adds r1, r4, #0	@ 000fa614 211c
.org 0xfa616
	adds r1, #184	@ 000fa616 b831
.org 0xfa618
	ldr r0, [r4, #88]	@ 000fa618 a06d
.org 0xfa61a
	movs r2, #128	@ 000fa61a 8022
.org 0xfa61c
	lsls r2, r2, #1	@ 000fa61c 5200
.org 0xfa61e
	adds r0, r0, r2	@ 000fa61e 8018
.org 0xfa620
	str r0, [r1, #0]	@ 000fa620 0860
.org 0xfa622
	ldrb r0, [r4, #14]	@ 000fa622 a07b
.org 0xfa624
	adds r0, #1	@ 000fa624 0130
.org 0xfa626
	strb r0, [r4, #14]	@ 000fa626 a073
.org 0xfa628
	adds r0, r4, #0	@ 000fa628 201c
.org 0xfa62a
	bl 0x1cff0	@ 000fa62a 22f7e1fc
.org 0xfa62e
	adds r0, r4, #0	@ 000fa62e 201c
.org 0xfa630
	adds r0, #115	@ 000fa630 7330
.org 0xfa632
	ldrb r0, [r0, #0]	@ 000fa632 0078
.org 0xfa634
	cmp r0, #3	@ 000fa634 0328
.org 0xfa636
	bne.n 0xfa648	@ 000fa636 07d1
.org 0xfa638
	adds r0, r4, #0	@ 000fa638 201c
.org 0xfa63a
	adds r0, #190	@ 000fa63a be30
.org 0xfa63c
	ldrb r1, [r0, #0]	@ 000fa63c 0178
.org 0xfa63e
	cmp r1, #0	@ 000fa63e 0029
.org 0xfa640
	bne.n 0xfa648	@ 000fa640 02d1
.org 0xfa642
	movs r0, #4	@ 000fa642 0420
.org 0xfa644
	strb r0, [r4, #13]	@ 000fa644 6073
.org 0xfa646
	strb r1, [r4, #14]	@ 000fa646 a173
.org 0xfa648
	pop {r4}	@ 000fa648 10bc
.org 0xfa64a
	pop {r0}	@ 000fa64a 01bc
.org 0xfa64c
	bx r0	@ 000fa64c 0047
