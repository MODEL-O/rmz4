@ FUN_0806b79c  entry 0x0806b79c  size 68
.thumb
.org 0x6b79c
FUN_0806b79c:
	push {r4, r5, lr}	@ 0006b79c 30b5
.org 0x6b79e
	adds r4, r0, #0	@ 0006b79e 041c
.org 0x6b7a0
	ldrb r5, [r4, #14]	@ 0006b7a0 a57b
.org 0x6b7a2
	cmp r5, #0	@ 0006b7a2 002d
.org 0x6b7a4
	bne.n 0x6b7c4	@ 0006b7a4 0ed1
.org 0x6b7a6
	ldr r1, [pc, #56]	@ 0006b7a6 0e49
.org 0x6b7a8
	bl 0x1cf00	@ 0006b7a8 b1f7aafb
.org 0x6b7ac
	movs r0, #211	@ 0006b7ac d320
.org 0x6b7ae
	bl 0x2b10	@ 0006b7ae 97f7aff9
.org 0x6b7b2
	adds r0, r4, #0	@ 0006b7b2 201c
.org 0x6b7b4
	adds r0, #116	@ 0006b7b4 7430
.org 0x6b7b6
	ldr r1, [pc, #44]	@ 0006b7b6 0b49
.org 0x6b7b8
	bl 0x5784	@ 0006b7b8 99f7e4ff
.org 0x6b7bc
	strb r5, [r4, #15]	@ 0006b7bc e573
.org 0x6b7be
	ldrb r0, [r4, #14]	@ 0006b7be a07b
.org 0x6b7c0
	adds r0, #1	@ 0006b7c0 0130
.org 0x6b7c2
	strb r0, [r4, #14]	@ 0006b7c2 a073
.org 0x6b7c4
	adds r0, r4, #0	@ 0006b7c4 201c
.org 0x6b7c6
	bl 0x1cff0	@ 0006b7c6 b1f713fc
.org 0x6b7ca
	adds r0, r4, #0	@ 0006b7ca 201c
.org 0x6b7cc
	adds r0, #115	@ 0006b7cc 7330
.org 0x6b7ce
	ldrb r1, [r0, #0]	@ 0006b7ce 0178
.org 0x6b7d0
	cmp r1, #3	@ 0006b7d0 0329
.org 0x6b7d2
	bne.n 0x6b7da	@ 0006b7d2 02d1
.org 0x6b7d4
	movs r0, #0	@ 0006b7d4 0020
.org 0x6b7d6
	strb r1, [r4, #13]	@ 0006b7d6 6173
.org 0x6b7d8
	strb r0, [r4, #14]	@ 0006b7d8 a073
.org 0x6b7da
	pop {r4, r5}	@ 0006b7da 30bc
.org 0x6b7dc
	pop {r0}	@ 0006b7dc 01bc
.org 0x6b7de
	bx r0	@ 0006b7de 0047
