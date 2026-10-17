@ FUN_08075c2c  entry 0x08075c2c  size 54
.thumb
.org 0x75c2c
FUN_08075c2c:
	push {r4, lr}	@ 00075c2c 10b5
.org 0x75c2e
	adds r4, r0, #0	@ 00075c2e 041c
.org 0x75c30
	ldrb r0, [r4, #14]	@ 00075c30 a07b
.org 0x75c32
	cmp r0, #0	@ 00075c32 0028
.org 0x75c34
	bne.n 0x75c44	@ 00075c34 06d1
.org 0x75c36
	ldr r1, [pc, #44]	@ 00075c36 0b49
.org 0x75c38
	adds r0, r4, #0	@ 00075c38 201c
.org 0x75c3a
	bl 0x1cf00	@ 00075c3a a7f761f9
.org 0x75c3e
	ldrb r0, [r4, #14]	@ 00075c3e a07b
.org 0x75c40
	adds r0, #1	@ 00075c40 0130
.org 0x75c42
	strb r0, [r4, #14]	@ 00075c42 a073
.org 0x75c44
	adds r0, r4, #0	@ 00075c44 201c
.org 0x75c46
	bl 0x1cff0	@ 00075c46 a7f7d3f9
.org 0x75c4a
	adds r0, r4, #0	@ 00075c4a 201c
.org 0x75c4c
	adds r0, #115	@ 00075c4c 7330
.org 0x75c4e
	ldrb r0, [r0, #0]	@ 00075c4e 0078
.org 0x75c50
	cmp r0, #3	@ 00075c50 0328
.org 0x75c52
	bne.n 0x75c5c	@ 00075c52 03d1
.org 0x75c54
	movs r1, #0	@ 00075c54 0021
.org 0x75c56
	movs r0, #2	@ 00075c56 0220
.org 0x75c58
	strb r0, [r4, #13]	@ 00075c58 6073
.org 0x75c5a
	strb r1, [r4, #14]	@ 00075c5a a173
.org 0x75c5c
	pop {r4}	@ 00075c5c 10bc
.org 0x75c5e
	pop {r0}	@ 00075c5e 01bc
.org 0x75c60
	bx r0	@ 00075c60 0047
