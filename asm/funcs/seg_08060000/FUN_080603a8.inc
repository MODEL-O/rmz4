@ FUN_080603a8  entry 0x080603a8  size 52
.thumb
.org 0x603a8
FUN_080603a8:
	push {r4, lr}	@ 000603a8 10b5
.org 0x603aa
	adds r4, r0, #0	@ 000603aa 041c
.org 0x603ac
	ldrb r0, [r4, #14]	@ 000603ac a07b
.org 0x603ae
	cmp r0, #0	@ 000603ae 0028
.org 0x603b0
	bne.n 0x603c0	@ 000603b0 06d1
.org 0x603b2
	ldr r1, [pc, #40]	@ 000603b2 0a49
.org 0x603b4
	adds r0, r4, #0	@ 000603b4 201c
.org 0x603b6
	bl 0x1cf00	@ 000603b6 bcf7a3fd
.org 0x603ba
	ldrb r0, [r4, #14]	@ 000603ba a07b
.org 0x603bc
	adds r0, #1	@ 000603bc 0130
.org 0x603be
	strb r0, [r4, #14]	@ 000603be a073
.org 0x603c0
	adds r0, r4, #0	@ 000603c0 201c
.org 0x603c2
	bl 0x1cff0	@ 000603c2 bcf715fe
.org 0x603c6
	adds r0, r4, #0	@ 000603c6 201c
.org 0x603c8
	adds r0, #115	@ 000603c8 7330
.org 0x603ca
	ldrb r1, [r0, #0]	@ 000603ca 0178
.org 0x603cc
	cmp r1, #3	@ 000603cc 0329
.org 0x603ce
	bne.n 0x603d6	@ 000603ce 02d1
.org 0x603d0
	movs r0, #0	@ 000603d0 0020
.org 0x603d2
	strb r1, [r4, #13]	@ 000603d2 6173
.org 0x603d4
	strb r0, [r4, #14]	@ 000603d4 a073
.org 0x603d6
	pop {r4}	@ 000603d6 10bc
.org 0x603d8
	pop {r0}	@ 000603d8 01bc
.org 0x603da
	bx r0	@ 000603da 0047
