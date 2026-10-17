@ FUN_080bdd54  entry 0x080bdd54  size 214
.thumb
.org 0xbdd54
FUN_080bdd54:
	push {r4, r5, r6, r7, lr}	@ 000bdd54 f0b5
.org 0xbdd56
	sub sp, #8	@ 000bdd56 82b0
.org 0xbdd58
	adds r6, r0, #0	@ 000bdd58 061c
.org 0xbdd5a
	ldr r0, [pc, #208]	@ 000bdd5a 3448
.org 0xbdd5c
	ldr r1, [r0, #4]	@ 000bdd5c 4168
.org 0xbdd5e
	ldr r0, [r0, #0]	@ 000bdd5e 0068
.org 0xbdd60
	str r0, [sp, #0]	@ 000bdd60 0090
.org 0xbdd62
	str r1, [sp, #4]	@ 000bdd62 0191
.org 0xbdd64
	ldrb r7, [r6, #17]	@ 000bdd64 777c
.org 0xbdd66
	adds r0, r6, #0	@ 000bdd66 301c
.org 0xbdd68
	adds r0, #180	@ 000bdd68 b430
.org 0xbdd6a
	ldrb r0, [r0, #0]	@ 000bdd6a 0078
.org 0xbdd6c
	adds r2, r0, #0	@ 000bdd6c 021c
.org 0xbdd6e
	ldr r1, [pc, #192]	@ 000bdd6e 3049
.org 0xbdd70
	ldrb r0, [r6, #9]	@ 000bdd70 707a
.org 0xbdd72
	lsls r0, r0, #2	@ 000bdd72 8000
.org 0xbdd74
	adds r0, r0, r1	@ 000bdd74 4018
.org 0xbdd76
	movs r1, #1	@ 000bdd76 0121
.org 0xbdd78
	str r1, [r6, #12]	@ 000bdd78 f160
.org 0xbdd7a
	ldr r0, [r0, #0]	@ 000bdd7a 0068
.org 0xbdd7c
	ldr r0, [r0, #4]	@ 000bdd7c 4068
.org 0xbdd7e
	str r0, [r6, #20]	@ 000bdd7e 7061
.org 0xbdd80
	ldrb r1, [r6, #10]	@ 000bdd80 b17a
.org 0xbdd82
	movs r0, #1	@ 000bdd82 0120
.org 0xbdd84
	movs r4, #0	@ 000bdd84 0024
.org 0xbdd86
	orrs r0, r1	@ 000bdd86 0843
.org 0xbdd88
	movs r1, #2	@ 000bdd88 0221
.org 0xbdd8a
	orrs r0, r1	@ 000bdd8a 0843
.org 0xbdd8c
	strb r0, [r6, #10]	@ 000bdd8c b072
.org 0xbdd8e
	ldr r3, [pc, #164]	@ 000bdd8e 294b
.org 0xbdd90
	adds r0, r2, #0	@ 000bdd90 101c
.org 0xbdd92
	adds r0, #64	@ 000bdd92 4030
.org 0xbdd94
	lsls r0, r0, #24	@ 000bdd94 0006
.org 0xbdd96
	lsrs r0, r0, #23	@ 000bdd96 c00d
.org 0xbdd98
	adds r0, r0, r3	@ 000bdd98 c018
.org 0xbdd9a
	movs r5, #0	@ 000bdd9a 0025
.org 0xbdd9c
	ldrsh r1, [r0, r5]	@ 000bdd9c 415f
.org 0xbdd9e
	lsls r0, r1, #1	@ 000bdd9e 4800
.org 0xbdda0
	adds r0, r0, r1	@ 000bdda0 4018
.org 0xbdda2
	lsls r0, r0, #2	@ 000bdda2 8000
.org 0xbdda4
	subs r0, r0, r1	@ 000bdda4 401a
.org 0xbdda6
	lsls r0, r0, #6	@ 000bdda6 8001
.org 0xbdda8
	cmp r0, #0	@ 000bdda8 0028
.org 0xbddaa
	bge.n 0xbddae	@ 000bddaa 00da
.org 0xbddac
	adds r0, #255	@ 000bddac ff30
.org 0xbddae
	asrs r0, r0, #8	@ 000bddae 0012
.org 0xbddb0
	str r0, [r6, #92]	@ 000bddb0 f065
.org 0xbddb2
	lsls r0, r2, #1	@ 000bddb2 5000
.org 0xbddb4
	adds r0, r0, r3	@ 000bddb4 c018
.org 0xbddb6
	movs r2, #0	@ 000bddb6 0022
.org 0xbddb8
	ldrsh r1, [r0, r2]	@ 000bddb8 815e
.org 0xbddba
	lsls r0, r1, #1	@ 000bddba 4800
.org 0xbddbc
	adds r0, r0, r1	@ 000bddbc 4018
.org 0xbddbe
	lsls r0, r0, #2	@ 000bddbe 8000
.org 0xbddc0
	subs r0, r0, r1	@ 000bddc0 401a
.org 0xbddc2
	lsls r0, r0, #6	@ 000bddc2 8001
.org 0xbddc4
	cmp r0, #0	@ 000bddc4 0028
.org 0xbddc6
	bge.n 0xbddca	@ 000bddc6 00da
.org 0xbddc8
	adds r0, #255	@ 000bddc8 ff30
.org 0xbddca
	asrs r0, r0, #8	@ 000bddca 0012
.org 0xbddcc
	str r0, [r6, #96]	@ 000bddcc 3066
.org 0xbddce
	adds r0, r6, #0	@ 000bddce 301c
.org 0xbddd0
	bl 0x1cc9c	@ 000bddd0 5ef764ff
.org 0xbddd4
	movs r5, #0	@ 000bddd4 0025
.org 0xbddd6
	ldrb r1, [r6, #10]	@ 000bddd6 b17a
.org 0xbddd8
	movs r0, #239	@ 000bddd8 ef20
.org 0xbddda
	ands r0, r1	@ 000bddda 0840
.org 0xbdddc
	strb r0, [r6, #10]	@ 000bdddc b072
.org 0xbddde
	adds r0, r6, #0	@ 000bddde 301c
.org 0xbdde0
	adds r0, #76	@ 000bdde0 4c30
.org 0xbdde2
	strb r5, [r0, #0]	@ 000bdde2 0570
.org 0xbdde4
	adds r2, r6, #0	@ 000bdde4 321c
.org 0xbdde6
	adds r2, #74	@ 000bdde6 4a32
.org 0xbdde8
	ldrb r1, [r2, #0]	@ 000bdde8 1178
.org 0xbddea
	movs r0, #17	@ 000bddea 1120
.org 0xbddec
	negs r0, r0	@ 000bddec 4042
.org 0xbddee
	ands r0, r1	@ 000bddee 0840
.org 0xbddf0
	strb r0, [r2, #0]	@ 000bddf0 1070
.org 0xbddf2
	lsls r0, r7, #2	@ 000bddf2 b800
.org 0xbddf4
	add r0, sp	@ 000bddf4 6844
.org 0xbddf6
	ldrh r1, [r0, #0]	@ 000bddf6 0188
.org 0xbddf8
	adds r0, r6, #0	@ 000bddf8 301c
.org 0xbddfa
	bl 0x1cf00	@ 000bddfa 5ff781f8
.org 0xbddfe
	ldrb r0, [r6, #10]	@ 000bddfe b07a
.org 0xbde00
	movs r1, #4	@ 000bde00 0421
.org 0xbde02
	orrs r0, r1	@ 000bde02 0843
.org 0xbde04
	strb r0, [r6, #10]	@ 000bde04 b072
.org 0xbde06
	adds r4, r6, #0	@ 000bde06 341c
.org 0xbde08
	adds r4, #116	@ 000bde08 7434
.org 0xbde0a
	ldr r1, [pc, #44]	@ 000bde0a 0b49
.org 0xbde0c
	adds r2, r6, #0	@ 000bde0c 321c
.org 0xbde0e
	adds r2, #84	@ 000bde0e 5432
.org 0xbde10
	adds r0, r4, #0	@ 000bde10 201c
.org 0xbde12
	movs r3, #64	@ 000bde12 4023
.org 0xbde14
	bl 0x5760	@ 000bde14 47f7a4fc
.org 0xbde18
	str r6, [r4, #44]	@ 000bde18 e662
.org 0xbde1a
	str r5, [r4, #36]	@ 000bde1a 6562
.org 0xbde1c
	adds r0, r6, #0	@ 000bde1c 301c
.org 0xbde1e
	bl 0xbde3c	@ 000bde1e 00f00df8
.org 0xbde22
	add sp, #8	@ 000bde22 02b0
.org 0xbde24
	pop {r4, r5, r6, r7}	@ 000bde24 f0bc
.org 0xbde26
	pop {r0}	@ 000bde26 01bc
.org 0xbde28
	bx r0	@ 000bde28 0047
