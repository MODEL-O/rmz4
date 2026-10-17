@ FUN_08060b0c  entry 0x08060b0c  size 56
.thumb
.org 0x60b0c
FUN_08060b0c:
	push {r4, lr}	@ 00060b0c 10b5
.org 0x60b0e
	adds r4, r0, #0	@ 00060b0e 041c
.org 0x60b10
	ldrb r0, [r4, #14]	@ 00060b10 a07b
.org 0x60b12
	cmp r0, #0	@ 00060b12 0028
.org 0x60b14
	bne.n 0x60b28	@ 00060b14 08d1
.org 0x60b16
	ldr r1, [pc, #44]	@ 00060b16 0b49
.org 0x60b18
	adds r0, r4, #0	@ 00060b18 201c
.org 0x60b1a
	bl 0x1cf00	@ 00060b1a bcf7f1f9
.org 0x60b1e
	movs r0, #32	@ 00060b1e 2020
.org 0x60b20
	strb r0, [r4, #18]	@ 00060b20 a074
.org 0x60b22
	ldrb r0, [r4, #14]	@ 00060b22 a07b
.org 0x60b24
	adds r0, #1	@ 00060b24 0130
.org 0x60b26
	strb r0, [r4, #14]	@ 00060b26 a073
.org 0x60b28
	adds r0, r4, #0	@ 00060b28 201c
.org 0x60b2a
	bl 0x1cff0	@ 00060b2a bcf761fa
.org 0x60b2e
	adds r0, r4, #0	@ 00060b2e 201c
.org 0x60b30
	adds r0, #115	@ 00060b30 7330
.org 0x60b32
	ldrb r1, [r0, #0]	@ 00060b32 0178
.org 0x60b34
	cmp r1, #3	@ 00060b34 0329
.org 0x60b36
	bne.n 0x60b3e	@ 00060b36 02d1
.org 0x60b38
	movs r0, #0	@ 00060b38 0020
.org 0x60b3a
	strb r1, [r4, #13]	@ 00060b3a 6173
.org 0x60b3c
	strb r0, [r4, #14]	@ 00060b3c a073
.org 0x60b3e
	pop {r4}	@ 00060b3e 10bc
.org 0x60b40
	pop {r0}	@ 00060b40 01bc
.org 0x60b42
	bx r0	@ 00060b42 0047
