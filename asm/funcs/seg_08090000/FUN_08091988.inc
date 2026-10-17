@ FUN_08091988  entry 0x08091988  size 94
.thumb
.org 0x91988
FUN_08091988:
	push {r4, lr}	@ 00091988 10b5
.org 0x9198a
	sub sp, #8	@ 0009198a 82b0
.org 0x9198c
	adds r4, r0, #0	@ 0009198c 041c
.org 0x9198e
	ldrb r0, [r4, #14]	@ 0009198e a07b
.org 0x91990
	cmp r0, #0	@ 00091990 0028
.org 0x91992
	bne.n 0x919c8	@ 00091992 19d1
.org 0x91994
	ldr r1, [pc, #80]	@ 00091994 1449
.org 0x91996
	adds r0, r4, #0	@ 00091996 201c
.org 0x91998
	bl 0x1cf00	@ 00091998 8bf7b2fa
.org 0x9199c
	movs r0, #231	@ 0009199c e720
.org 0x9199e
	bl 0x2b10	@ 0009199e 71f7b7f8
.org 0x919a2
	ldr r0, [r4, #84]	@ 000919a2 606d
.org 0x919a4
	str r0, [sp, #0]	@ 000919a4 0090
.org 0x919a6
	ldr r0, [r4, #88]	@ 000919a6 a06d
.org 0x919a8
	ldr r1, [pc, #64]	@ 000919a8 1049
.org 0x919aa
	adds r0, r0, r1	@ 000919aa 4018
.org 0x919ac
	str r0, [sp, #4]	@ 000919ac 0190
.org 0x919ae
	mov r0, sp	@ 000919ae 6846
.org 0x919b0
	movs r1, #2	@ 000919b0 0221
.org 0x919b2
	movs r2, #0	@ 000919b2 0022
.org 0x919b4
	bl 0xdcd68	@ 000919b4 4bf0d8f9
.org 0x919b8
	mov r0, sp	@ 000919b8 6846
.org 0x919ba
	movs r1, #2	@ 000919ba 0221
.org 0x919bc
	movs r2, #1	@ 000919bc 0122
.org 0x919be
	bl 0xdcd68	@ 000919be 4bf0d3f9
.org 0x919c2
	ldrb r0, [r4, #14]	@ 000919c2 a07b
.org 0x919c4
	adds r0, #1	@ 000919c4 0130
.org 0x919c6
	strb r0, [r4, #14]	@ 000919c6 a073
.org 0x919c8
	adds r0, r4, #0	@ 000919c8 201c
.org 0x919ca
	bl 0x1cff0	@ 000919ca 8bf711fb
.org 0x919ce
	adds r0, r4, #0	@ 000919ce 201c
.org 0x919d0
	adds r0, #115	@ 000919d0 7330
.org 0x919d2
	ldrb r1, [r0, #0]	@ 000919d2 0178
.org 0x919d4
	cmp r1, #3	@ 000919d4 0329
.org 0x919d6
	bne.n 0x919de	@ 000919d6 02d1
.org 0x919d8
	movs r0, #0	@ 000919d8 0020
.org 0x919da
	strb r1, [r4, #13]	@ 000919da 6173
.org 0x919dc
	strb r0, [r4, #14]	@ 000919dc a073
.org 0x919de
	add sp, #8	@ 000919de 02b0
.org 0x919e0
	pop {r4}	@ 000919e0 10bc
.org 0x919e2
	pop {r0}	@ 000919e2 01bc
.org 0x919e4
	bx r0	@ 000919e4 0047
