@ FUN_080d2c64  entry 0x080d2c64  size 166
.thumb
.org 0xd2c64
FUN_080d2c64:
	push {r4, lr}	@ 000d2c64 10b5
.org 0xd2c66
	adds r4, r0, #0	@ 000d2c66 041c
.org 0xd2c68
	bl 0x1cdbc	@ 000d2c68 4af7a8f8
.org 0xd2c6c
	ldrb r1, [r4, #10]	@ 000d2c6c a17a
.org 0xd2c6e
	movs r0, #1	@ 000d2c6e 0120
.org 0xd2c70
	orrs r0, r1	@ 000d2c70 0843
.org 0xd2c72
	strb r0, [r4, #10]	@ 000d2c72 a072
.org 0xd2c74
	adds r0, r4, #0	@ 000d2c74 201c
.org 0xd2c76
	bl 0x1ceec	@ 000d2c76 4af739f9
.org 0xd2c7a
	ldrb r1, [r4, #10]	@ 000d2c7a a17a
.org 0xd2c7c
	movs r0, #2	@ 000d2c7c 0220
.org 0xd2c7e
	orrs r0, r1	@ 000d2c7e 0843
.org 0xd2c80
	strb r0, [r4, #10]	@ 000d2c80 a072
.org 0xd2c82
	ldr r0, [pc, #24]	@ 000d2c82 0648
.org 0xd2c84
	ldr r0, [r0, #60]	@ 000d2c84 c06b
.org 0xd2c86
	ldr r1, [pc, #24]	@ 000d2c86 0649
.org 0xd2c88
	adds r0, r0, r1	@ 000d2c88 4018
.org 0xd2c8a
	ldr r1, [r4, #88]	@ 000d2c8a a16d
.org 0xd2c8c
	cmp r1, r0	@ 000d2c8c 8142
.org 0xd2c8e
	bge.n 0xd2ca8	@ 000d2c8e 0bda
.org 0xd2c90
	ldr r1, [pc, #16]	@ 000d2c90 0449
.org 0xd2c92
	adds r0, r4, #0	@ 000d2c92 201c
.org 0xd2c94
	bl 0x1cf00	@ 000d2c94 4af734f9
.org 0xd2c98
	b.n 0xd2cb2	@ 000d2c98 0be0
.org 0xd2c9a
	.byte 0x00	@ 000d2c9a data
.org 0xd2c9b
	.byte 0x00	@ 000d2c9b data
.org 0xd2c9c
	.byte 0xf8,0xe9,0x02,0x02	@ 000d2c9c data
.org 0xd2ca0
	.byte 0x00,0xb0,0xff,0xff	@ 000d2ca0 data
.org 0xd2ca4
	.byte 0x01,0xc0,0x00,0x00	@ 000d2ca4 data
.org 0xd2ca8
	movs r1, #192	@ 000d2ca8 c021
.org 0xd2caa
	lsls r1, r1, #8	@ 000d2caa 0902
.org 0xd2cac
	adds r0, r4, #0	@ 000d2cac 201c
.org 0xd2cae
	bl 0x1cf00	@ 000d2cae 4af727f9
.org 0xd2cb2
	adds r0, r4, #0	@ 000d2cb2 201c
.org 0xd2cb4
	bl 0x1cff0	@ 000d2cb4 4af79cf9
.org 0xd2cb8
	movs r2, #0	@ 000d2cb8 0022
.org 0xd2cba
	ldrb r1, [r4, #10]	@ 000d2cba a17a
.org 0xd2cbc
	movs r0, #239	@ 000d2cbc ef20
.org 0xd2cbe
	ands r0, r1	@ 000d2cbe 0840
.org 0xd2cc0
	strb r0, [r4, #10]	@ 000d2cc0 a072
.org 0xd2cc2
	movs r3, #1	@ 000d2cc2 0123
.org 0xd2cc4
	adds r0, r4, #0	@ 000d2cc4 201c
.org 0xd2cc6
	adds r0, #76	@ 000d2cc6 4c30
.org 0xd2cc8
	strb r2, [r0, #0]	@ 000d2cc8 0270
.org 0xd2cca
	adds r2, r4, #0	@ 000d2cca 221c
.org 0xd2ccc
	adds r2, #74	@ 000d2ccc 4a32
.org 0xd2cce
	ldrb r1, [r2, #0]	@ 000d2cce 1178
.org 0xd2cd0
	movs r0, #17	@ 000d2cd0 1120
.org 0xd2cd2
	negs r0, r0	@ 000d2cd2 4042
.org 0xd2cd4
	ands r0, r1	@ 000d2cd4 0840
.org 0xd2cd6
	strb r0, [r2, #0]	@ 000d2cd6 1070
.org 0xd2cd8
	subs r2, #1	@ 000d2cd8 013a
.org 0xd2cda
	ldrb r1, [r2, #0]	@ 000d2cda 1178
.org 0xd2cdc
	movs r0, #13	@ 000d2cdc 0d20
.org 0xd2cde
	negs r0, r0	@ 000d2cde 4042
.org 0xd2ce0
	ands r0, r1	@ 000d2ce0 0840
.org 0xd2ce2
	movs r1, #4	@ 000d2ce2 0421
.org 0xd2ce4
	orrs r0, r1	@ 000d2ce4 0843
.org 0xd2ce6
	strb r0, [r2, #0]	@ 000d2ce6 1070
.org 0xd2ce8
	adds r1, r4, #0	@ 000d2ce8 211c
.org 0xd2cea
	adds r1, #80	@ 000d2cea 5031
.org 0xd2cec
	movs r2, #0	@ 000d2cec 0022
.org 0xd2cee
	movs r0, #16	@ 000d2cee 1020
.org 0xd2cf0
	strh r0, [r1, #0]	@ 000d2cf0 0880
.org 0xd2cf2
	adds r1, #2	@ 000d2cf2 0231
.org 0xd2cf4
	strh r0, [r1, #0]	@ 000d2cf4 0880
.org 0xd2cf6
	adds r0, r4, #0	@ 000d2cf6 201c
.org 0xd2cf8
	adds r0, #36	@ 000d2cf8 2430
.org 0xd2cfa
	strb r2, [r0, #0]	@ 000d2cfa 0270
.org 0xd2cfc
	ldr r1, [pc, #24]	@ 000d2cfc 0649
.org 0xd2cfe
	ldrb r0, [r4, #9]	@ 000d2cfe 607a
.org 0xd2d00
	lsls r0, r0, #2	@ 000d2d00 8000
.org 0xd2d02
	adds r0, r0, r1	@ 000d2d02 4018
.org 0xd2d04
	str r3, [r4, #12]	@ 000d2d04 e360
.org 0xd2d06
	ldr r0, [r0, #0]	@ 000d2d06 0068
.org 0xd2d08
	ldr r0, [r0, #4]	@ 000d2d08 4068
