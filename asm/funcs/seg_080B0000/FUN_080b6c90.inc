@ FUN_080b6c90  entry 0x080b6c90  size 168
.thumb
.org 0xb6c90
FUN_080b6c90:
	push {r4, r5, r6, lr}	@ 000b6c90 70b5
.org 0xb6c92
	adds r6, r0, #0	@ 000b6c92 061c
.org 0xb6c94
	ldr r0, [r6, #40]	@ 000b6c94 b06a
.org 0xb6c96
	ldrb r3, [r6, #17]	@ 000b6c96 737c
.org 0xb6c98
	ldrb r4, [r0, #10]	@ 000b6c98 847a
.org 0xb6c9a
	lsrs r4, r4, #4	@ 000b6c9a 2409
.org 0xb6c9c
	movs r2, #1	@ 000b6c9c 0122
.org 0xb6c9e
	ands r4, r2	@ 000b6c9e 1440
.org 0xb6ca0
	ldr r1, [pc, #72]	@ 000b6ca0 1249
.org 0xb6ca2
	ldrb r0, [r6, #9]	@ 000b6ca2 707a
.org 0xb6ca4
	lsls r0, r0, #2	@ 000b6ca4 8000
.org 0xb6ca6
	adds r0, r0, r1	@ 000b6ca6 4018
.org 0xb6ca8
	str r2, [r6, #12]	@ 000b6ca8 f260
.org 0xb6caa
	ldr r0, [r0, #0]	@ 000b6caa 0068
.org 0xb6cac
	ldr r0, [r0, #4]	@ 000b6cac 4068
.org 0xb6cae
	str r0, [r6, #20]	@ 000b6cae 7061
.org 0xb6cb0
	movs r2, #0	@ 000b6cb0 0022
.org 0xb6cb2
	strb r2, [r6, #13]	@ 000b6cb2 7273
.org 0xb6cb4
	strb r2, [r6, #14]	@ 000b6cb4 b273
.org 0xb6cb6
	strb r2, [r6, #15]	@ 000b6cb6 f273
.org 0xb6cb8
	ldrb r0, [r6, #10]	@ 000b6cb8 b07a
.org 0xb6cba
	movs r1, #1	@ 000b6cba 0121
.org 0xb6cbc
	movs r5, #0	@ 000b6cbc 0025
.org 0xb6cbe
	orrs r0, r1	@ 000b6cbe 0843
.org 0xb6cc0
	movs r1, #2	@ 000b6cc0 0221
.org 0xb6cc2
	orrs r0, r1	@ 000b6cc2 0843
.org 0xb6cc4
	strb r0, [r6, #10]	@ 000b6cc4 b072
.org 0xb6cc6
	adds r0, r6, #0	@ 000b6cc6 301c
.org 0xb6cc8
	adds r0, #184	@ 000b6cc8 b830
.org 0xb6cca
	str r3, [r0, #0]	@ 000b6cca 0360
.org 0xb6ccc
	adds r0, #4	@ 000b6ccc 0430
.org 0xb6cce
	strb r2, [r0, #0]	@ 000b6cce 0270
.org 0xb6cd0
	adds r0, r6, #0	@ 000b6cd0 301c
.org 0xb6cd2
	bl 0x1cc9c	@ 000b6cd2 65f7e3ff
.org 0xb6cd6
	adds r1, r6, #0	@ 000b6cd6 311c
.org 0xb6cd8
	adds r1, #37	@ 000b6cd8 2531
.org 0xb6cda
	movs r0, #8	@ 000b6cda 0820
.org 0xb6cdc
	strb r0, [r1, #0]	@ 000b6cdc 0870
.org 0xb6cde
	cmp r4, #0	@ 000b6cde 002c
.org 0xb6ce0
	beq.n 0xb6cf0	@ 000b6ce0 06d0
.org 0xb6ce2
	ldrb r0, [r6, #10]	@ 000b6ce2 b07a
.org 0xb6ce4
	movs r1, #16	@ 000b6ce4 1021
.org 0xb6ce6
	orrs r0, r1	@ 000b6ce6 0843
.org 0xb6ce8
	b.n 0xb6cf6	@ 000b6ce8 05e0
.org 0xb6cea
	.byte 0x00	@ 000b6cea data
.org 0xb6ceb
	.byte 0x00	@ 000b6ceb data
.org 0xb6cec
	.byte 0x40,0xdb,0x85,0x08	@ 000b6cec data
.org 0xb6cf0
	ldrb r1, [r6, #10]	@ 000b6cf0 b17a
.org 0xb6cf2
	movs r0, #239	@ 000b6cf2 ef20
.org 0xb6cf4
	ands r0, r1	@ 000b6cf4 0840
.org 0xb6cf6
	strb r0, [r6, #10]	@ 000b6cf6 b072
.org 0xb6cf8
	adds r1, r4, #0	@ 000b6cf8 211c
.org 0xb6cfa
	adds r0, r6, #0	@ 000b6cfa 301c
.org 0xb6cfc
	adds r0, #76	@ 000b6cfc 4c30
.org 0xb6cfe
	movs r5, #0	@ 000b6cfe 0025
.org 0xb6d00
	strb r1, [r0, #0]	@ 000b6d00 0170
.org 0xb6d02
	adds r3, r6, #0	@ 000b6d02 331c
.org 0xb6d04
	adds r3, #74	@ 000b6d04 4a33
.org 0xb6d06
	lsls r1, r1, #4	@ 000b6d06 0901
.org 0xb6d08
	ldrb r2, [r3, #0]	@ 000b6d08 1a78
.org 0xb6d0a
	movs r0, #17	@ 000b6d0a 1120
.org 0xb6d0c
	negs r0, r0	@ 000b6d0c 4042
.org 0xb6d0e
	ands r0, r2	@ 000b6d0e 1040
.org 0xb6d10
	orrs r0, r1	@ 000b6d10 0843
.org 0xb6d12
	strb r0, [r3, #0]	@ 000b6d12 1870
.org 0xb6d14
	ldrb r1, [r6, #10]	@ 000b6d14 b17a
.org 0xb6d16
	movs r0, #4	@ 000b6d16 0420
.org 0xb6d18
	orrs r0, r1	@ 000b6d18 0843
.org 0xb6d1a
	strb r0, [r6, #10]	@ 000b6d1a b072
.org 0xb6d1c
	adds r4, r6, #0	@ 000b6d1c 341c
.org 0xb6d1e
	adds r4, #116	@ 000b6d1e 7434
.org 0xb6d20
	ldr r1, [pc, #28]	@ 000b6d20 0749
.org 0xb6d22
	adds r2, r6, #0	@ 000b6d22 321c
.org 0xb6d24
	adds r2, #84	@ 000b6d24 5432
.org 0xb6d26
	adds r0, r4, #0	@ 000b6d26 201c
.org 0xb6d28
	movs r3, #64	@ 000b6d28 4023
.org 0xb6d2a
	bl 0x5760	@ 000b6d2a 4ef719fd
.org 0xb6d2e
	str r6, [r4, #44]	@ 000b6d2e e662
.org 0xb6d30
	str r5, [r4, #36]	@ 000b6d30 6562
.org 0xb6d32
	adds r0, r6, #0	@ 000b6d32 301c
.org 0xb6d34
	bl 0xb6d44	@ 000b6d34 00f006f8
