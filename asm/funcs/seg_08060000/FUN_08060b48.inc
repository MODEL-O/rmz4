@ FUN_08060b48  entry 0x08060b48  size 56
.thumb
.org 0x60b48
FUN_08060b48:
	push {r4, lr}	@ 00060b48 10b5
.org 0x60b4a
	adds r4, r0, #0	@ 00060b4a 041c
.org 0x60b4c
	ldrb r0, [r4, #14]	@ 00060b4c a07b
.org 0x60b4e
	cmp r0, #0	@ 00060b4e 0028
.org 0x60b50
	bne.n 0x60b64	@ 00060b50 08d1
.org 0x60b52
	ldr r1, [pc, #44]	@ 00060b52 0b49
.org 0x60b54
	adds r0, r4, #0	@ 00060b54 201c
.org 0x60b56
	bl 0x1cf00	@ 00060b56 bcf7d3f9
.org 0x60b5a
	movs r0, #32	@ 00060b5a 2020
.org 0x60b5c
	strb r0, [r4, #18]	@ 00060b5c a074
.org 0x60b5e
	ldrb r0, [r4, #14]	@ 00060b5e a07b
.org 0x60b60
	adds r0, #1	@ 00060b60 0130
.org 0x60b62
	strb r0, [r4, #14]	@ 00060b62 a073
.org 0x60b64
	adds r0, r4, #0	@ 00060b64 201c
.org 0x60b66
	bl 0x1cff0	@ 00060b66 bcf743fa
.org 0x60b6a
	adds r0, r4, #0	@ 00060b6a 201c
.org 0x60b6c
	adds r0, #115	@ 00060b6c 7330
.org 0x60b6e
	ldrb r1, [r0, #0]	@ 00060b6e 0178
.org 0x60b70
	cmp r1, #3	@ 00060b70 0329
.org 0x60b72
	bne.n 0x60b7a	@ 00060b72 02d1
.org 0x60b74
	movs r0, #0	@ 00060b74 0020
.org 0x60b76
	strb r1, [r4, #13]	@ 00060b76 6173
.org 0x60b78
	strb r0, [r4, #14]	@ 00060b78 a073
.org 0x60b7a
	pop {r4}	@ 00060b7a 10bc
.org 0x60b7c
	pop {r0}	@ 00060b7c 01bc
.org 0x60b7e
	bx r0	@ 00060b7e 0047
