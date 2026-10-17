@ FUN_080686d8  entry 0x080686d8  size 138
.thumb
.org 0x686d8
FUN_080686d8:
	push {r2, r5, r7, lr}	@ 000686d8 a4b5
.org 0x686da
	lsrs r5, r0, #2	@ 000686da 8508
.org 0x686dc
	push {r4, r5, lr}	@ 000686dc 30b5
.org 0x686de
	adds r4, r0, #0	@ 000686de 041c
.org 0x686e0
	ldrb r5, [r4, #14]	@ 000686e0 a57b
.org 0x686e2
	cmp r5, #0	@ 000686e2 002d
.org 0x686e4
	bne.n 0x68708	@ 000686e4 10d1
.org 0x686e6
	ldr r1, [pc, #28]	@ 000686e6 0749
.org 0x686e8
	bl 0x1cf00	@ 000686e8 b4f70afc
.org 0x686ec
	movs r0, #97	@ 000686ec 6120
.org 0x686ee
	bl 0x2b5c	@ 000686ee 9af735fa
.org 0x686f2
	adds r0, r4, #0	@ 000686f2 201c
.org 0x686f4
	adds r0, #180	@ 000686f4 b430
.org 0x686f6
	strh r5, [r0, #44]	@ 000686f6 8585
.org 0x686f8
	movs r0, #103	@ 000686f8 6720
.org 0x686fa
	bl 0x2b10	@ 000686fa 9af709fa
.org 0x686fe
	movs r0, #32	@ 000686fe 2020
.org 0x68700
	strb r0, [r4, #18]	@ 00068700 a074
.org 0x68702
	b.n 0x68734	@ 00068702 17e0
.org 0x68704
	.byte 0x1c,0xa9,0x00,0x00	@ 00068704 data
.org 0x68708
	cmp r5, #1	@ 00068708 012d
.org 0x6870a
	bne.n 0x6873a	@ 0006870a 16d1
.org 0x6870c
	adds r0, r4, #0	@ 0006870c 201c
.org 0x6870e
	adds r0, #113	@ 0006870e 7130
.org 0x68710
	ldrb r0, [r0, #0]	@ 00068710 0078
.org 0x68712
	lsls r0, r0, #24	@ 00068712 0006
.org 0x68714
	asrs r0, r0, #24	@ 00068714 0016
.org 0x68716
	cmp r0, #3	@ 00068716 0328
.org 0x68718
	beq.n 0x68728	@ 00068718 06d0
.org 0x6871a
	adds r0, r4, #0	@ 0006871a 201c
.org 0x6871c
	adds r0, #114	@ 0006871c 7230
.org 0x6871e
	ldrb r0, [r0, #0]	@ 0006871e 0078
.org 0x68720
	lsls r0, r0, #24	@ 00068720 0006
.org 0x68722
	asrs r0, r0, #24	@ 00068722 0016
.org 0x68724
	cmp r0, #1	@ 00068724 0128
.org 0x68726
	bgt.n 0x6873a	@ 00068726 08dc
.org 0x68728
	adds r0, r4, #0	@ 00068728 201c
.org 0x6872a
	movs r1, #4	@ 0006872a 0421
.org 0x6872c
	movs r2, #0	@ 0006872c 0022
.org 0x6872e
	movs r3, #0	@ 0006872e 0023
.org 0x68730
	bl 0xc8830	@ 00068730 60f07ef8
.org 0x68734
	ldrb r0, [r4, #14]	@ 00068734 a07b
.org 0x68736
	adds r0, #1	@ 00068736 0130
.org 0x68738
	strb r0, [r4, #14]	@ 00068738 a073
.org 0x6873a
	adds r0, r4, #0	@ 0006873a 201c
.org 0x6873c
	bl 0x1cff0	@ 0006873c b4f758fc
.org 0x68740
	adds r0, r4, #0	@ 00068740 201c
.org 0x68742
	adds r0, #115	@ 00068742 7330
.org 0x68744
	ldrb r0, [r0, #0]	@ 00068744 0078
.org 0x68746
	cmp r0, #3	@ 00068746 0328
.org 0x68748
	bne.n 0x68760	@ 00068748 0ad1
.org 0x6874a
	ldrb r0, [r4, #18]	@ 0006874a a07c
.org 0x6874c
	subs r0, #1	@ 0006874c 0138
.org 0x6874e
	strb r0, [r4, #18]	@ 0006874e a074
.org 0x68750
	lsls r0, r0, #24	@ 00068750 0006
.org 0x68752
	lsrs r0, r0, #24	@ 00068752 000e
.org 0x68754
	cmp r0, #255	@ 00068754 ff28
.org 0x68756
	bne.n 0x68760	@ 00068756 03d1
.org 0x68758
	movs r0, #39	@ 00068758 2720
.org 0x6875a
	strb r0, [r4, #13]	@ 0006875a 6073
.org 0x6875c
	movs r0, #0	@ 0006875c 0020
.org 0x6875e
	strb r0, [r4, #14]	@ 0006875e a073
.org 0x68760
	pop {r4, r5}	@ 00068760 30bc
