@ FUN_080cbce0  entry 0x080cbce0  size 158
.thumb
.org 0xcbce0
FUN_080cbce0:
	push {r4, lr}	@ 000cbce0 10b5
.org 0xcbce2
	adds r4, r0, #0	@ 000cbce2 041c
.org 0xcbce4
	ldrb r0, [r4, #15]	@ 000cbce4 e07b
.org 0xcbce6
	cmp r0, #0	@ 000cbce6 0028
.org 0xcbce8
	bne.n 0xcbd1e	@ 000cbce8 19d1
.org 0xcbcea
	movs r1, #146	@ 000cbcea 9221
.org 0xcbcec
	lsls r1, r1, #8	@ 000cbcec 0902
.org 0xcbcee
	adds r0, r4, #0	@ 000cbcee 201c
.org 0xcbcf0
	bl 0x1cf00	@ 000cbcf0 51f706f9
.org 0xcbcf4
	ldr r0, [r4, #84]	@ 000cbcf4 606d
.org 0xcbcf6
	ldr r1, [r4, #88]	@ 000cbcf6 a16d
.org 0xcbcf8
	str r0, [r4, #92]	@ 000cbcf8 e065
.org 0xcbcfa
	str r1, [r4, #96]	@ 000cbcfa 2166
.org 0xcbcfc
	adds r0, r4, #0	@ 000cbcfc 201c
.org 0xcbcfe
	adds r0, #180	@ 000cbcfe b430
.org 0xcbd00
	ldr r0, [r0, #0]	@ 000cbd00 0068
.org 0xcbd02
	ldr r1, [r4, #84]	@ 000cbd02 616d
.org 0xcbd04
	subs r0, r0, r1	@ 000cbd04 401a
.org 0xcbd06
	str r0, [r4, #100]	@ 000cbd06 6066
.org 0xcbd08
	adds r0, r4, #0	@ 000cbd08 201c
.org 0xcbd0a
	adds r0, #184	@ 000cbd0a b830
.org 0xcbd0c
	ldr r0, [r0, #0]	@ 000cbd0c 0068
.org 0xcbd0e
	ldr r1, [r4, #88]	@ 000cbd0e a16d
.org 0xcbd10
	subs r0, r0, r1	@ 000cbd10 401a
.org 0xcbd12
	str r0, [r4, #104]	@ 000cbd12 a066
.org 0xcbd14
	movs r0, #16	@ 000cbd14 1020
.org 0xcbd16
	strb r0, [r4, #18]	@ 000cbd16 a074
.org 0xcbd18
	ldrb r0, [r4, #15]	@ 000cbd18 e07b
.org 0xcbd1a
	adds r0, #1	@ 000cbd1a 0130
.org 0xcbd1c
	strb r0, [r4, #15]	@ 000cbd1c e073
.org 0xcbd1e
	adds r0, r4, #0	@ 000cbd1e 201c
.org 0xcbd20
	bl 0x1cff0	@ 000cbd20 51f766f9
.org 0xcbd24
	ldrb r0, [r4, #18]	@ 000cbd24 a07c
.org 0xcbd26
	subs r0, #1	@ 000cbd26 0138
.org 0xcbd28
	strb r0, [r4, #18]	@ 000cbd28 a074
.org 0xcbd2a
	adds r0, r4, #0	@ 000cbd2a 201c
.org 0xcbd2c
	adds r0, #116	@ 000cbd2c 7430
.org 0xcbd2e
	ldr r1, [pc, #80]	@ 000cbd2e 1449
.org 0xcbd30
	bl 0x5784	@ 000cbd30 39f728fd
.org 0xcbd34
	ldrb r1, [r4, #18]	@ 000cbd34 a17c
.org 0xcbd36
	movs r0, #16	@ 000cbd36 1020
.org 0xcbd38
	subs r0, r0, r1	@ 000cbd38 401a
.org 0xcbd3a
	lsls r0, r0, #26	@ 000cbd3a 8006
.org 0xcbd3c
	ldr r1, [pc, #68]	@ 000cbd3c 1149
.org 0xcbd3e
	lsrs r0, r0, #23	@ 000cbd3e c00d
.org 0xcbd40
	adds r0, r0, r1	@ 000cbd40 4018
.org 0xcbd42
	movs r1, #0	@ 000cbd42 0021
.org 0xcbd44
	ldrsh r2, [r0, r1]	@ 000cbd44 425e
.org 0xcbd46
	ldr r0, [r4, #100]	@ 000cbd46 606e
.org 0xcbd48
	muls r0, r2	@ 000cbd48 5043
.org 0xcbd4a
	cmp r0, #0	@ 000cbd4a 0028
.org 0xcbd4c
	bge.n 0xcbd50	@ 000cbd4c 00da
.org 0xcbd4e
	adds r0, #255	@ 000cbd4e ff30
.org 0xcbd50
	asrs r0, r0, #8	@ 000cbd50 0012
.org 0xcbd52
	ldr r1, [r4, #92]	@ 000cbd52 e16d
.org 0xcbd54
	adds r1, r1, r0	@ 000cbd54 0918
.org 0xcbd56
	str r1, [r4, #84]	@ 000cbd56 6165
.org 0xcbd58
	ldr r0, [r4, #104]	@ 000cbd58 a06e
.org 0xcbd5a
	muls r0, r2	@ 000cbd5a 5043
.org 0xcbd5c
	cmp r0, #0	@ 000cbd5c 0028
.org 0xcbd5e
	bge.n 0xcbd62	@ 000cbd5e 00da
.org 0xcbd60
	adds r0, #255	@ 000cbd60 ff30
.org 0xcbd62
	asrs r1, r0, #8	@ 000cbd62 0112
.org 0xcbd64
	ldr r0, [r4, #96]	@ 000cbd64 206e
.org 0xcbd66
	adds r0, r0, r1	@ 000cbd66 4018
.org 0xcbd68
	str r0, [r4, #88]	@ 000cbd68 a065
.org 0xcbd6a
	ldrb r1, [r4, #18]	@ 000cbd6a a17c
.org 0xcbd6c
	cmp r1, #0	@ 000cbd6c 0029
.org 0xcbd6e
	bne.n 0xcbd78	@ 000cbd6e 03d1
.org 0xcbd70
	movs r0, #1	@ 000cbd70 0120
.org 0xcbd72
	strb r0, [r4, #13]	@ 000cbd72 6073
.org 0xcbd74
	strb r1, [r4, #14]	@ 000cbd74 a173
.org 0xcbd76
	strb r1, [r4, #15]	@ 000cbd76 e173
.org 0xcbd78
	pop {r4}	@ 000cbd78 10bc
.org 0xcbd7a
	pop {r0}	@ 000cbd7a 01bc
.org 0xcbd7c
	bx r0	@ 000cbd7c 0047
