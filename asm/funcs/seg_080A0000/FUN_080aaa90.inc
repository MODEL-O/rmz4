@ FUN_080aaa90  entry 0x080aaa90  size 98
.thumb
.org 0xaaa90
FUN_080aaa90:
	push {r4, r5, r6, lr}	@ 000aaa90 70b5
.org 0xaaa92
	adds r4, r0, #0	@ 000aaa92 041c
.org 0xaaa94
	adds r5, r4, #0	@ 000aaa94 251c
.org 0xaaa96
	adds r5, #192	@ 000aaa96 c035
.org 0xaaa98
	ldr r6, [r5, #0]	@ 000aaa98 2e68
.org 0xaaa9a
	cmp r6, #0	@ 000aaa9a 002e
.org 0xaaa9c
	bne.n 0xaaaec	@ 000aaa9c 26d1
.org 0xaaa9e
	adds r0, #140	@ 000aaa9e 8c30
.org 0xaaaa0
	ldr r0, [r0, #0]	@ 000aaaa0 0068
.org 0xaaaa2
	movs r1, #1	@ 000aaaa2 0121
.org 0xaaaa4
	ands r0, r1	@ 000aaaa4 0840
.org 0xaaaa6
	cmp r0, #0	@ 000aaaa6 0028
.org 0xaaaa8
	beq.n 0xaaaec	@ 000aaaa8 20d0
.org 0xaaaaa
	ldr r2, [pc, #72]	@ 000aaaaa 124a
.org 0xaaaac
	movs r0, #0	@ 000aaaac 0020
.org 0xaaaae
	adds r1, r4, #0	@ 000aaaae 211c
.org 0xaaab0
	bl 0x2adac	@ 000aaab0 80f77cf9
.org 0xaaab4
	str r0, [r5, #0]	@ 000aaab4 2860
.org 0xaaab6
	cmp r0, #0	@ 000aaab6 0028
.org 0xaaab8
	beq.n 0xaaaec	@ 000aaab8 18d0
.org 0xaaaba
	adds r0, r4, #0	@ 000aaaba 201c
.org 0xaaabc
	adds r0, #116	@ 000aaabc 7430
.org 0xaaabe
	ldr r1, [pc, #56]	@ 000aaabe 0e49
.org 0xaaac0
	bl 0x5784	@ 000aaac0 5af760fe
.org 0xaaac4
	movs r1, #148	@ 000aaac4 9421
.org 0xaaac6
	lsls r1, r1, #8	@ 000aaac6 0902
.org 0xaaac8
	adds r0, r4, #0	@ 000aaac8 201c
.org 0xaaaca
	bl 0x1cf00	@ 000aaaca 72f719fa
.org 0xaaace
	ldrb r0, [r4, #13]	@ 000aaace 607b
.org 0xaaad0
	cmp r0, #3	@ 000aaad0 0328
.org 0xaaad2
	bne.n 0xaaaec	@ 000aaad2 0bd1
.org 0xaaad4
	ldr r1, [r4, #44]	@ 000aaad4 e16a
.org 0xaaad6
	cmp r1, #0	@ 000aaad6 0029
.org 0xaaad8
	beq.n 0xaaae2	@ 000aaad8 03d0
.org 0xaaada
	ldrb r0, [r1, #12]	@ 000aaada 087b
.org 0xaaadc
	cmp r0, #1	@ 000aaadc 0128
.org 0xaaade
	bhi.n 0xaaae2	@ 000aaade 00d8
.org 0xaaae0
	strb r6, [r1, #18]	@ 000aaae0 8e74
.org 0xaaae2
	movs r1, #0	@ 000aaae2 0021
.org 0xaaae4
	str r1, [r4, #44]	@ 000aaae4 e162
.org 0xaaae6
	adds r0, r4, #0	@ 000aaae6 201c
.org 0xaaae8
	adds r0, #180	@ 000aaae8 b430
.org 0xaaaea
	strb r1, [r0, #0]	@ 000aaaea 0170
.org 0xaaaec
	pop {r4, r5, r6}	@ 000aaaec 70bc
.org 0xaaaee
	pop {r0}	@ 000aaaee 01bc
.org 0xaaaf0
	bx r0	@ 000aaaf0 0047
