@ FUN_08103584  entry 0x08103584  size 132
.thumb
.org 0x103584
FUN_08103584:
	push {r4, r5, lr}	@ 00103584 30b5
.org 0x103586
	sub sp, #8	@ 00103586 82b0
.org 0x103588
	adds r4, r0, #0	@ 00103588 041c
.org 0x10358a
	adds r5, r4, #0	@ 0010358a 251c
.org 0x10358c
	adds r5, #192	@ 0010358c c035
.org 0x10358e
	ldr r2, [r5, #0]	@ 0010358e 2a68
.org 0x103590
	cmp r2, #0	@ 00103590 002a
.org 0x103592
	bne.n 0x1035f8	@ 00103592 31d1
.org 0x103594
	adds r0, #140	@ 00103594 8c30
.org 0x103596
	ldr r0, [r0, #0]	@ 00103596 0068
.org 0x103598
	movs r1, #1	@ 00103598 0121
.org 0x10359a
	ands r0, r1	@ 0010359a 0840
.org 0x10359c
	cmp r0, #0	@ 0010359c 0028
.org 0x10359e
	beq.n 0x1035be	@ 0010359e 0ed0
.org 0x1035a0
	adds r0, r4, #0	@ 001035a0 201c
.org 0x1035a2
	adds r0, #151	@ 001035a2 9730
.org 0x1035a4
	ldrb r1, [r0, #0]	@ 001035a4 0178
.org 0x1035a6
	movs r0, #240	@ 001035a6 f020
.org 0x1035a8
	ands r0, r1	@ 001035a8 0840
.org 0x1035aa
	cmp r0, #16	@ 001035aa 1028
.org 0x1035ac
	bne.n 0x1035be	@ 001035ac 07d1
.org 0x1035ae
	str r2, [sp, #0]	@ 001035ae 0092
.org 0x1035b0
	str r2, [sp, #4]	@ 001035b0 0192
.org 0x1035b2
	movs r0, #0	@ 001035b2 0020
.org 0x1035b4
	adds r1, r4, #0	@ 001035b4 211c
.org 0x1035b6
	mov r2, sp	@ 001035b6 6a46
.org 0x1035b8
	bl 0x2adac	@ 001035b8 27f7f8fb
.org 0x1035bc
	str r0, [r5, #0]	@ 001035bc 2860
.org 0x1035be
	ldr r1, [pc, #44]	@ 001035be 0b49
.org 0x1035c0
	ldr r0, [pc, #44]	@ 001035c0 0b48
.org 0x1035c2
	adds r1, r1, r0	@ 001035c2 0918
.org 0x1035c4
	ldr r2, [pc, #44]	@ 001035c4 0b4a
.org 0x1035c6
	ldrb r0, [r4, #16]	@ 001035c6 207c
.org 0x1035c8
	adds r0, r0, r2	@ 001035c8 8018
.org 0x1035ca
	ldr r1, [r1, #0]	@ 001035ca 0968
.org 0x1035cc
	ldrb r0, [r0, #0]	@ 001035cc 0078
.org 0x1035ce
	cmp r1, r0	@ 001035ce 8142
.org 0x1035d0
	bne.n 0x103606	@ 001035d0 19d1
.org 0x1035d2
	ldr r0, [r4, #84]	@ 001035d2 606d
.org 0x1035d4
	str r0, [sp, #0]	@ 001035d4 0090
.org 0x1035d6
	ldr r0, [r4, #88]	@ 001035d6 a06d
.org 0x1035d8
	movs r1, #128	@ 001035d8 8021
.org 0x1035da
	lsls r1, r1, #5	@ 001035da 4901
.org 0x1035dc
	adds r0, r0, r1	@ 001035dc 4018
.org 0x1035de
	str r0, [sp, #4]	@ 001035de 0190
.org 0x1035e0
	mov r0, sp	@ 001035e0 6846
.org 0x1035e2
	movs r1, #0	@ 001035e2 0021
.org 0x1035e4
	movs r2, #0	@ 001035e4 0022
.org 0x1035e6
	bl 0xb7a44	@ 001035e6 b4f72dfa
.org 0x1035ea
	b.n 0x103606	@ 001035ea 0ce0
.org 0x1035ec
	.byte 0xb0,0x0a,0x00,0x02	@ 001035ec data
.org 0x1035f0
	.byte 0x30,0xd0,0x02,0x00	@ 001035f0 data
.org 0x1035f4
	.byte 0x8c,0xbd,0x86,0x08	@ 001035f4 data
.org 0x1035f8
	adds r0, r2, #0	@ 001035f8 101c
.org 0x1035fa
	bl 0x2b3e4	@ 001035fa 27f7f3fe
.org 0x1035fe
	cmp r0, #0	@ 001035fe 0028
.org 0x103600
	beq.n 0x103606	@ 00103600 01d0
.org 0x103602
	movs r0, #0	@ 00103602 0020
.org 0x103604
	str r0, [r5, #0]	@ 00103604 2860
.org 0x103606
	adds r0, r4, #0	@ 00103606 201c
