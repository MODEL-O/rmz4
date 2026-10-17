@ FUN_08012d2c  entry 0x08012d2c  size 74
.thumb
.org 0x12d2c
FUN_08012d2c:
	push {r4, lr}	@ 00012d2c 10b5
.org 0x12d2e
	adds r1, r0, #0	@ 00012d2e 011c
.org 0x12d30
	ldrb r0, [r1, #14]	@ 00012d30 887b
.org 0x12d32
	cmp r0, #0	@ 00012d32 0028
.org 0x12d34
	bne.n 0x12d3a	@ 00012d34 01d1
.org 0x12d36
	adds r0, #1	@ 00012d36 0130
.org 0x12d38
	strb r0, [r1, #14]	@ 00012d38 8873
.org 0x12d3a
	ldr r2, [r1, #52]	@ 00012d3a 4a6b
.org 0x12d3c
	ldr r0, [pc, #32]	@ 00012d3c 0848
.org 0x12d3e
	cmp r2, r0	@ 00012d3e 8242
.org 0x12d40
	ble.n 0x12d74	@ 00012d40 18dd
.org 0x12d42
	ldr r3, [pc, #32]	@ 00012d42 084b
.org 0x12d44
	adds r0, r2, r3	@ 00012d44 d018
.org 0x12d46
	ldr r3, [pc, #32]	@ 00012d46 084b
.org 0x12d48
	cmp r0, r3	@ 00012d48 9842
.org 0x12d4a
	bls.n 0x12d74	@ 00012d4a 13d9
.org 0x12d4c
	ldr r4, [pc, #28]	@ 00012d4c 074c
.org 0x12d4e
	adds r0, r2, r4	@ 00012d4e 1019
.org 0x12d50
	cmp r0, r3	@ 00012d50 9842
.org 0x12d52
	bhi.n 0x12d70	@ 00012d52 0dd8
.org 0x12d54
	movs r0, #32	@ 00012d54 2020
.org 0x12d56
	negs r0, r0	@ 00012d56 4042
.org 0x12d58
	str r0, [r1, #76]	@ 00012d58 c864
.org 0x12d5a
	movs r0, #0	@ 00012d5a 0020
.org 0x12d5c
	b.n 0x12d78	@ 00012d5c 0ce0
.org 0x12d5e
	.byte 0x00	@ 00012d5e data
.org 0x12d5f
	.byte 0x00	@ 00012d5f data
.org 0x12d60
	.byte 0xbf,0x03,0x00,0x00	@ 00012d60 data
.org 0x12d64
	.byte 0xbf,0xf4,0xff,0xff	@ 00012d64 data
.org 0x12d68
	.byte 0xbe,0x03,0x00,0x00	@ 00012d68 data
.org 0x12d6c
	.byte 0x7f,0xf8,0xff,0xff	@ 00012d6c data
.org 0x12d70
	movs r0, #240	@ 00012d70 f020
.org 0x12d72
	lsls r0, r0, #4	@ 00012d72 0001
.org 0x12d74
	movs r0, #0	@ 00012d74 0020
