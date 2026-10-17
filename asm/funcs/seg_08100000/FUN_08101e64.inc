@ FUN_08101e64  entry 0x08101e64  size 52
.thumb
.org 0x101e64
FUN_08101e64:
	push {r4, lr}	@ 00101e64 10b5
.org 0x101e66
	adds r4, r0, #0	@ 00101e66 041c
.org 0x101e68
	adds r0, #52	@ 00101e68 3430
.org 0x101e6a
	ldr r1, [pc, #44]	@ 00101e6a 0b49
.org 0x101e6c
	bl 0x2c94	@ 00101e6c 00f712ff
.org 0x101e70
	str r4, [r4, #60]	@ 00101e70 e463
.org 0x101e72
	ldrb r1, [r4, #10]	@ 00101e72 a17a
.org 0x101e74
	movs r0, #247	@ 00101e74 f720
.org 0x101e76
	ands r0, r1	@ 00101e76 0840
.org 0x101e78
	strb r0, [r4, #10]	@ 00101e78 a072
.org 0x101e7a
	ldr r1, [pc, #32]	@ 00101e7a 0849
.org 0x101e7c
	ldrb r0, [r4, #9]	@ 00101e7c 607a
.org 0x101e7e
	lsls r0, r0, #2	@ 00101e7e 8000
.org 0x101e80
	adds r0, r0, r1	@ 00101e80 4018
.org 0x101e82
	movs r1, #1	@ 00101e82 0121
.org 0x101e84
	str r1, [r4, #12]	@ 00101e84 e160
.org 0x101e86
	ldr r0, [r0, #0]	@ 00101e86 0068
.org 0x101e88
	ldr r0, [r0, #4]	@ 00101e88 4068
.org 0x101e8a
	str r0, [r4, #20]	@ 00101e8a 6061
.org 0x101e8c
	adds r0, r4, #0	@ 00101e8c 201c
.org 0x101e8e
	bl 0x101dc8	@ 00101e8e fff79bff
.org 0x101e92
	pop {r4}	@ 00101e92 10bc
.org 0x101e94
	pop {r0}	@ 00101e94 01bc
.org 0x101e96
	bx r0	@ 00101e96 0047
