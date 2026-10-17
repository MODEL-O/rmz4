@ FUN_080936f4  entry 0x080936f4  size 90
.thumb
.org 0x936f4
FUN_080936f4:
	push {r4, lr}	@ 000936f4 10b5
.org 0x936f6
	adds r4, r0, #0	@ 000936f6 041c
.org 0x936f8
	ldrb r0, [r4, #15]	@ 000936f8 e07b
.org 0x936fa
	cmp r0, #0	@ 000936fa 0028
.org 0x936fc
	bne.n 0x9371a	@ 000936fc 0dd1
.org 0x936fe
	adds r0, r4, #0	@ 000936fe 201c
.org 0x93700
	adds r0, #116	@ 00093700 7430
.org 0x93702
	ldr r1, [pc, #76]	@ 00093702 1349
.org 0x93704
	bl 0x5784	@ 00093704 72f73ef8
.org 0x93708
	ldr r1, [pc, #72]	@ 00093708 1249
.org 0x9370a
	adds r0, r4, #0	@ 0009370a 201c
.org 0x9370c
	bl 0x1cf00	@ 0009370c 89f7f8fb
.org 0x93710
	movs r0, #16	@ 00093710 1020
.org 0x93712
	strb r0, [r4, #18]	@ 00093712 a074
.org 0x93714
	ldrb r0, [r4, #15]	@ 00093714 e07b
.org 0x93716
	adds r0, #1	@ 00093716 0130
.org 0x93718
	strb r0, [r4, #15]	@ 00093718 e073
.org 0x9371a
	adds r0, r4, #0	@ 0009371a 201c
.org 0x9371c
	bl 0x1cff0	@ 0009371c 89f768fc
.org 0x93720
	ldrb r0, [r4, #18]	@ 00093720 a07c
.org 0x93722
	cmp r0, #0	@ 00093722 0028
.org 0x93724
	beq.n 0x9372a	@ 00093724 01d0
.org 0x93726
	subs r0, #1	@ 00093726 0138
.org 0x93728
	strb r0, [r4, #18]	@ 00093728 a074
.org 0x9372a
	adds r0, r4, #0	@ 0009372a 201c
.org 0x9372c
	bl 0x94a38	@ 0009372c 01f084f9
.org 0x93730
	adds r0, r4, #0	@ 00093730 201c
.org 0x93732
	adds r0, #115	@ 00093732 7330
.org 0x93734
	ldrb r0, [r0, #0]	@ 00093734 0078
.org 0x93736
	cmp r0, #3	@ 00093736 0328
.org 0x93738
	bne.n 0x93748	@ 00093738 06d1
.org 0x9373a
	ldrb r1, [r4, #18]	@ 0009373a a17c
.org 0x9373c
	cmp r1, #0	@ 0009373c 0029
.org 0x9373e
	bne.n 0x93748	@ 0009373e 03d1
.org 0x93740
	movs r0, #5	@ 00093740 0520
.org 0x93742
	strb r0, [r4, #13]	@ 00093742 6073
.org 0x93744
	strb r1, [r4, #14]	@ 00093744 a173
.org 0x93746
	strb r1, [r4, #15]	@ 00093746 e173
.org 0x93748
	pop {r4}	@ 00093748 10bc
.org 0x9374a
	pop {r0}	@ 0009374a 01bc
.org 0x9374c
	bx r0	@ 0009374c 0047
