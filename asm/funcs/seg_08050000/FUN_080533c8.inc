@ FUN_080533c8  entry 0x080533c8  size 60
.thumb
.org 0x533c8
FUN_080533c8:
	push {r4, lr}	@ 000533c8 10b5
.org 0x533ca
	adds r4, r0, #0	@ 000533ca 041c
.org 0x533cc
	ldrb r0, [r4, #15]	@ 000533cc e07b
.org 0x533ce
	cmp r0, #0	@ 000533ce 0028
.org 0x533d0
	bne.n 0x533e4	@ 000533d0 08d1
.org 0x533d2
	ldr r1, [pc, #48]	@ 000533d2 0c49
.org 0x533d4
	adds r0, r4, #0	@ 000533d4 201c
.org 0x533d6
	bl 0x1cf00	@ 000533d6 c9f793fd
.org 0x533da
	movs r0, #48	@ 000533da 3020
.org 0x533dc
	strb r0, [r4, #18]	@ 000533dc a074
.org 0x533de
	ldrb r0, [r4, #15]	@ 000533de e07b
.org 0x533e0
	adds r0, #1	@ 000533e0 0130
.org 0x533e2
	strb r0, [r4, #15]	@ 000533e2 e073
.org 0x533e4
	adds r0, r4, #0	@ 000533e4 201c
.org 0x533e6
	bl 0x1cff0	@ 000533e6 c9f703fe
.org 0x533ea
	ldrb r0, [r4, #18]	@ 000533ea a07c
.org 0x533ec
	subs r0, #1	@ 000533ec 0138
.org 0x533ee
	strb r0, [r4, #18]	@ 000533ee a074
.org 0x533f0
	lsls r0, r0, #24	@ 000533f0 0006
.org 0x533f2
	lsrs r1, r0, #24	@ 000533f2 010e
.org 0x533f4
	cmp r1, #0	@ 000533f4 0029
.org 0x533f6
	bne.n 0x533fe	@ 000533f6 02d1
.org 0x533f8
	movs r0, #2	@ 000533f8 0220
.org 0x533fa
	strb r0, [r4, #14]	@ 000533fa a073
.org 0x533fc
	strb r1, [r4, #15]	@ 000533fc e173
.org 0x533fe
	pop {r4}	@ 000533fe 10bc
.org 0x53400
	pop {r0}	@ 00053400 01bc
.org 0x53402
	bx r0	@ 00053402 0047
