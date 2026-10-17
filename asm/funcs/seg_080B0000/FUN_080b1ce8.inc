@ FUN_080b1ce8  entry 0x080b1ce8  size 88
.thumb
.org 0xb1ce8
FUN_080b1ce8:
	push {r4, lr}	@ 000b1ce8 10b5
.org 0xb1cea
	adds r4, r0, #0	@ 000b1cea 041c
.org 0xb1cec
	ldrb r0, [r4, #14]	@ 000b1cec a07b
.org 0xb1cee
	cmp r0, #0	@ 000b1cee 0028
.org 0xb1cf0
	bne.n 0xb1d0a	@ 000b1cf0 0bd1
.org 0xb1cf2
	ldr r1, [pc, #76]	@ 000b1cf2 1349
.org 0xb1cf4
	adds r0, r4, #0	@ 000b1cf4 201c
.org 0xb1cf6
	bl 0x1cf00	@ 000b1cf6 6bf703f9
.org 0xb1cfa
	ldrb r0, [r4, #18]	@ 000b1cfa a07c
.org 0xb1cfc
	cmp r0, #0	@ 000b1cfc 0028
.org 0xb1cfe
	bne.n 0xb1d04	@ 000b1cfe 01d1
.org 0xb1d00
	movs r0, #128	@ 000b1d00 8020
.org 0xb1d02
	strb r0, [r4, #18]	@ 000b1d02 a074
.org 0xb1d04
	ldrb r0, [r4, #14]	@ 000b1d04 a07b
.org 0xb1d06
	adds r0, #1	@ 000b1d06 0130
.org 0xb1d08
	strb r0, [r4, #14]	@ 000b1d08 a073
.org 0xb1d0a
	adds r0, r4, #0	@ 000b1d0a 201c
.org 0xb1d0c
	bl 0xb2170	@ 000b1d0c 00f030fa
.org 0xb1d10
	lsls r0, r0, #24	@ 000b1d10 0006
.org 0xb1d12
	lsrs r0, r0, #24	@ 000b1d12 000e
.org 0xb1d14
	cmp r0, #1	@ 000b1d14 0128
.org 0xb1d16
	bne.n 0xb1d26	@ 000b1d16 06d1
.org 0xb1d18
	movs r1, #0	@ 000b1d18 0021
.org 0xb1d1a
	movs r0, #3	@ 000b1d1a 0320
.org 0xb1d1c
	strb r0, [r4, #13]	@ 000b1d1c 6073
.org 0xb1d1e
	strb r1, [r4, #14]	@ 000b1d1e a173
.org 0xb1d20
	adds r0, r4, #0	@ 000b1d20 201c
.org 0xb1d22
	bl 0xb1e38	@ 000b1d22 00f089f8
.org 0xb1d26
	adds r0, r4, #0	@ 000b1d26 201c
.org 0xb1d28
	bl 0xb2158	@ 000b1d28 00f016fa
.org 0xb1d2c
	lsls r0, r0, #24	@ 000b1d2c 0006
.org 0xb1d2e
	cmp r0, #0	@ 000b1d2e 0028
.org 0xb1d30
	beq.n 0xb1d3a	@ 000b1d30 03d0
.org 0xb1d32
	movs r1, #0	@ 000b1d32 0021
.org 0xb1d34
	movs r0, #1	@ 000b1d34 0120
.org 0xb1d36
	strb r0, [r4, #13]	@ 000b1d36 6073
.org 0xb1d38
	strb r1, [r4, #14]	@ 000b1d38 a173
.org 0xb1d3a
	pop {r4}	@ 000b1d3a 10bc
.org 0xb1d3c
	pop {r0}	@ 000b1d3c 01bc
.org 0xb1d3e
	bx r0	@ 000b1d3e 0047
