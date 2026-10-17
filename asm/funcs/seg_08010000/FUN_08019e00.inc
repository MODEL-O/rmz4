@ FUN_08019e00  entry 0x08019e00  size 74
.thumb
.org 0x19e00
FUN_08019e00:
	push {r4, lr}	@ 00019e00 10b5
.org 0x19e02
	adds r2, r0, #0	@ 00019e02 021c
.org 0x19e04
	ldrb r3, [r2, #14]	@ 00019e04 937b
.org 0x19e06
	ldr r4, [pc, #52]	@ 00019e06 0d4c
.org 0x19e08
	cmp r3, #0	@ 00019e08 002b
.org 0x19e0a
	bne.n 0x19e24	@ 00019e0a 0bd1
.org 0x19e0c
	ldr r1, [pc, #48]	@ 00019e0c 0c49
.org 0x19e0e
	ldr r0, [pc, #52]	@ 00019e0e 0d48
.org 0x19e10
	strh r0, [r1, #0]	@ 00019e10 0880
.org 0x19e12
	ldr r0, [pc, #52]	@ 00019e12 0d48
.org 0x19e14
	strh r0, [r1, #2]	@ 00019e14 4880
.org 0x19e16
	ldr r0, [pc, #52]	@ 00019e16 0d48
.org 0x19e18
	adds r1, r4, r0	@ 00019e18 2118
.org 0x19e1a
	movs r0, #160	@ 00019e1a a020
.org 0x19e1c
	lsls r0, r0, #14	@ 00019e1c 8003
.org 0x19e1e
	str r0, [r1, #0]	@ 00019e1e 0860
.org 0x19e20
	adds r0, r3, #1	@ 00019e20 581c
.org 0x19e22
	strb r0, [r2, #14]	@ 00019e22 9073
.org 0x19e24
	ldr r0, [r2, #52]	@ 00019e24 506b
.org 0x19e26
	ldr r1, [pc, #40]	@ 00019e26 0a49
.org 0x19e28
	adds r0, r0, r1	@ 00019e28 4018
.org 0x19e2a
	ldr r1, [pc, #40]	@ 00019e2a 0a49
.org 0x19e2c
	cmp r0, r1	@ 00019e2c 8842
.org 0x19e2e
	bhi.n 0x19e58	@ 00019e2e 13d8
.org 0x19e30
	ldr r0, [pc, #24]	@ 00019e30 0648
.org 0x19e32
	adds r1, r4, r0	@ 00019e32 2118
.org 0x19e34
	movs r0, #190	@ 00019e34 be20
.org 0x19e36
	lsls r0, r0, #11	@ 00019e36 c002
.org 0x19e38
	b.n 0x19e60	@ 00019e38 12e0
.org 0x19e3a
	.byte 0x00	@ 00019e3a data
.org 0x19e3b
	.byte 0x00	@ 00019e3b data
.org 0x19e3c
	.byte 0xb0,0x0a,0x00,0x02	@ 00019e3c data
.org 0x19e40
	.byte 0x40,0x0a,0x00,0x02	@ 00019e40 data
.org 0x19e44
	.byte 0x44,0x3b,0x00,0x00	@ 00019e44 data
.org 0x19e48
	.byte 0x04,0x0c,0x00,0x00	@ 00019e48 data
