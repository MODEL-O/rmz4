@ FUN_080b2cd4  entry 0x080b2cd4  size 140
.thumb
.org 0xb2cd4
FUN_080b2cd4:
	push {r4, r5, lr}	@ 000b2cd4 30b5
.org 0xb2cd6
	sub sp, #8	@ 000b2cd6 82b0
.org 0xb2cd8
	adds r2, r0, #0	@ 000b2cd8 021c
.org 0xb2cda
	ldr r0, [pc, #72]	@ 000b2cda 1248
.org 0xb2cdc
	ldr r1, [r0, #4]	@ 000b2cdc 4168
.org 0xb2cde
	ldr r0, [r0, #0]	@ 000b2cde 0068
.org 0xb2ce0
	str r0, [sp, #0]	@ 000b2ce0 0090
.org 0xb2ce2
	str r1, [sp, #4]	@ 000b2ce2 0191
.org 0xb2ce4
	adds r4, r2, #0	@ 000b2ce4 141c
.org 0xb2ce6
	adds r4, #183	@ 000b2ce6 b734
.org 0xb2ce8
	movs r0, #0	@ 000b2ce8 0020
.org 0xb2cea
	strb r0, [r4, #0]	@ 000b2cea 2070
.org 0xb2cec
	ldrb r5, [r2, #17]	@ 000b2cec 557c
.org 0xb2cee
	cmp r5, #1	@ 000b2cee 012d
.org 0xb2cf0
	beq.n 0xb2d2c	@ 000b2cf0 1cd0
.org 0xb2cf2
	ldrb r1, [r2, #10]	@ 000b2cf2 917a
.org 0xb2cf4
	movs r0, #16	@ 000b2cf4 1020
.org 0xb2cf6
	ands r0, r1	@ 000b2cf6 0840
.org 0xb2cf8
	lsls r0, r0, #24	@ 000b2cf8 0006
.org 0xb2cfa
	lsrs r0, r0, #24	@ 000b2cfa 000e
.org 0xb2cfc
	negs r0, r0	@ 000b2cfc 4042
.org 0xb2cfe
	asrs r0, r0, #31	@ 000b2cfe c017
.org 0xb2d00
	movs r1, #4	@ 000b2d00 0421
.org 0xb2d02
	ands r0, r1	@ 000b2d02 0840
.org 0xb2d04
	add r0, sp	@ 000b2d04 6844
.org 0xb2d06
	ldr r1, [r0, #0]	@ 000b2d06 0168
.org 0xb2d08
	lsls r1, r1, #8	@ 000b2d08 0902
.org 0xb2d0a
	ldr r0, [r2, #84]	@ 000b2d0a 506d
.org 0xb2d0c
	adds r0, r0, r1	@ 000b2d0c 4018
.org 0xb2d0e
	ldr r1, [r2, #88]	@ 000b2d0e 916d
.org 0xb2d10
	ldr r2, [pc, #20]	@ 000b2d10 054a
.org 0xb2d12
	adds r1, r1, r2	@ 000b2d12 8918
.org 0xb2d14
	bl 0x7c7c	@ 000b2d14 54f7b2ff
.org 0xb2d18
	lsls r0, r0, #16	@ 000b2d18 0004
.org 0xb2d1a
	cmp r0, #0	@ 000b2d1a 0028
.org 0xb2d1c
	beq.n 0xb2d64	@ 000b2d1c 22d0
.org 0xb2d1e
	movs r0, #1	@ 000b2d1e 0120
.org 0xb2d20
	strb r0, [r4, #0]	@ 000b2d20 2070
.org 0xb2d22
	b.n 0xb2d66	@ 000b2d22 20e0
.org 0xb2d24
	.byte 0x2c,0x9e,0x12,0x08	@ 000b2d24 data
.org 0xb2d28
	.byte 0x00,0xf8,0xff,0xff	@ 000b2d28 data
.org 0xb2d2c
	ldrb r1, [r2, #10]	@ 000b2d2c 917a
.org 0xb2d2e
	movs r0, #16	@ 000b2d2e 1020
.org 0xb2d30
	ands r0, r1	@ 000b2d30 0840
.org 0xb2d32
	lsls r0, r0, #24	@ 000b2d32 0006
.org 0xb2d34
	lsrs r0, r0, #24	@ 000b2d34 000e
.org 0xb2d36
	negs r0, r0	@ 000b2d36 4042
.org 0xb2d38
	asrs r0, r0, #31	@ 000b2d38 c017
.org 0xb2d3a
	movs r1, #4	@ 000b2d3a 0421
.org 0xb2d3c
	ands r0, r1	@ 000b2d3c 0840
.org 0xb2d3e
	add r0, sp	@ 000b2d3e 6844
.org 0xb2d40
	ldr r1, [r0, #0]	@ 000b2d40 0168
.org 0xb2d42
	lsls r1, r1, #8	@ 000b2d42 0902
.org 0xb2d44
	ldr r0, [r2, #84]	@ 000b2d44 506d
.org 0xb2d46
	adds r0, r0, r1	@ 000b2d46 4018
.org 0xb2d48
	ldr r1, [r2, #88]	@ 000b2d48 916d
.org 0xb2d4a
	ldr r2, [pc, #20]	@ 000b2d4a 054a
.org 0xb2d4c
	adds r1, r1, r2	@ 000b2d4c 8918
.org 0xb2d4e
	bl 0x7c7c	@ 000b2d4e 54f795ff
.org 0xb2d52
	lsls r0, r0, #16	@ 000b2d52 0004
.org 0xb2d54
	cmp r0, #0	@ 000b2d54 0028
.org 0xb2d56
	beq.n 0xb2d64	@ 000b2d56 05d0
.org 0xb2d58
	strb r5, [r4, #0]	@ 000b2d58 2570
.org 0xb2d5a
	movs r0, #1	@ 000b2d5a 0120
.org 0xb2d5c
	b.n 0xb2d66	@ 000b2d5c 03e0
.org 0xb2d5e
	.byte 0x00	@ 000b2d5e data
.org 0xb2d5f
	.byte 0x00	@ 000b2d5f data
