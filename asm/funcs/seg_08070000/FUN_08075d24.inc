@ FUN_08075d24  entry 0x08075d24  size 52
.thumb
.org 0x75d24
FUN_08075d24:
	push {r4, r5, lr}	@ 00075d24 30b5
.org 0x75d26
	adds r4, r0, #0	@ 00075d26 041c
.org 0x75d28
	ldrb r5, [r4, #14]	@ 00075d28 a57b
.org 0x75d2a
	cmp r5, #0	@ 00075d2a 002d
.org 0x75d2c
	bne.n 0x75d3c	@ 00075d2c 06d1
.org 0x75d2e
	ldr r1, [pc, #40]	@ 00075d2e 0a49
.org 0x75d30
	bl 0x1cf00	@ 00075d30 a7f7e6f8
.org 0x75d34
	strb r5, [r4, #15]	@ 00075d34 e573
.org 0x75d36
	ldrb r0, [r4, #14]	@ 00075d36 a07b
.org 0x75d38
	adds r0, #1	@ 00075d38 0130
.org 0x75d3a
	strb r0, [r4, #14]	@ 00075d3a a073
.org 0x75d3c
	adds r0, r4, #0	@ 00075d3c 201c
.org 0x75d3e
	bl 0x1cff0	@ 00075d3e a7f757f9
.org 0x75d42
	adds r0, r4, #0	@ 00075d42 201c
.org 0x75d44
	adds r0, #115	@ 00075d44 7330
.org 0x75d46
	ldrb r1, [r0, #0]	@ 00075d46 0178
.org 0x75d48
	cmp r1, #3	@ 00075d48 0329
.org 0x75d4a
	bne.n 0x75d52	@ 00075d4a 02d1
.org 0x75d4c
	movs r0, #0	@ 00075d4c 0020
.org 0x75d4e
	strb r1, [r4, #13]	@ 00075d4e 6173
.org 0x75d50
	strb r0, [r4, #14]	@ 00075d50 a073
.org 0x75d52
	pop {r4, r5}	@ 00075d52 30bc
.org 0x75d54
	pop {r0}	@ 00075d54 01bc
.org 0x75d56
	bx r0	@ 00075d56 0047
