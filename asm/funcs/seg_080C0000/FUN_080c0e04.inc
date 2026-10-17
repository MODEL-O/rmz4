@ FUN_080c0e04  entry 0x080c0e04  size 148
.thumb
.org 0xc0e04
FUN_080c0e04:
	push {r4, r5, r6, lr}	@ 000c0e04 70b5
.org 0xc0e06
	adds r6, r0, #0	@ 000c0e06 061c
.org 0xc0e08
	ldr r0, [r6, #40]	@ 000c0e08 b06a
.org 0xc0e0a
	ldrb r4, [r0, #10]	@ 000c0e0a 847a
.org 0xc0e0c
	lsrs r4, r4, #4	@ 000c0e0c 2409
.org 0xc0e0e
	movs r2, #1	@ 000c0e0e 0122
.org 0xc0e10
	ands r4, r2	@ 000c0e10 1440
.org 0xc0e12
	ldr r1, [pc, #56]	@ 000c0e12 0e49
.org 0xc0e14
	ldrb r0, [r6, #9]	@ 000c0e14 707a
.org 0xc0e16
	lsls r0, r0, #2	@ 000c0e16 8000
.org 0xc0e18
	adds r0, r0, r1	@ 000c0e18 4018
.org 0xc0e1a
	str r2, [r6, #12]	@ 000c0e1a f260
.org 0xc0e1c
	ldr r0, [r0, #0]	@ 000c0e1c 0068
.org 0xc0e1e
	ldr r0, [r0, #4]	@ 000c0e1e 4068
.org 0xc0e20
	str r0, [r6, #20]	@ 000c0e20 7061
.org 0xc0e22
	movs r0, #0	@ 000c0e22 0020
.org 0xc0e24
	strb r0, [r6, #13]	@ 000c0e24 7073
.org 0xc0e26
	strb r0, [r6, #14]	@ 000c0e26 b073
.org 0xc0e28
	strb r0, [r6, #15]	@ 000c0e28 f073
.org 0xc0e2a
	ldrb r0, [r6, #10]	@ 000c0e2a b07a
.org 0xc0e2c
	movs r1, #1	@ 000c0e2c 0121
.org 0xc0e2e
	movs r5, #0	@ 000c0e2e 0025
.org 0xc0e30
	orrs r0, r1	@ 000c0e30 0843
.org 0xc0e32
	movs r1, #2	@ 000c0e32 0221
.org 0xc0e34
	orrs r0, r1	@ 000c0e34 0843
.org 0xc0e36
	strb r0, [r6, #10]	@ 000c0e36 b072
.org 0xc0e38
	adds r0, r6, #0	@ 000c0e38 301c
.org 0xc0e3a
	bl 0x1cc9c	@ 000c0e3a 5bf72fff
.org 0xc0e3e
	cmp r4, #0	@ 000c0e3e 002c
.org 0xc0e40
	beq.n 0xc0e50	@ 000c0e40 06d0
.org 0xc0e42
	ldrb r0, [r6, #10]	@ 000c0e42 b07a
.org 0xc0e44
	movs r1, #16	@ 000c0e44 1021
.org 0xc0e46
	orrs r0, r1	@ 000c0e46 0843
.org 0xc0e48
	b.n 0xc0e56	@ 000c0e48 05e0
.org 0xc0e4a
	.byte 0x00	@ 000c0e4a data
.org 0xc0e4b
	.byte 0x00	@ 000c0e4b data
.org 0xc0e4c
	.byte 0xf4,0x49,0x86,0x08	@ 000c0e4c data
.org 0xc0e50
	ldrb r1, [r6, #10]	@ 000c0e50 b17a
.org 0xc0e52
	movs r0, #239	@ 000c0e52 ef20
.org 0xc0e54
	ands r0, r1	@ 000c0e54 0840
.org 0xc0e56
	strb r0, [r6, #10]	@ 000c0e56 b072
.org 0xc0e58
	adds r1, r4, #0	@ 000c0e58 211c
.org 0xc0e5a
	adds r0, r6, #0	@ 000c0e5a 301c
.org 0xc0e5c
	adds r0, #76	@ 000c0e5c 4c30
.org 0xc0e5e
	movs r5, #0	@ 000c0e5e 0025
.org 0xc0e60
	strb r1, [r0, #0]	@ 000c0e60 0170
.org 0xc0e62
	adds r3, r6, #0	@ 000c0e62 331c
.org 0xc0e64
	adds r3, #74	@ 000c0e64 4a33
.org 0xc0e66
	lsls r1, r1, #4	@ 000c0e66 0901
.org 0xc0e68
	ldrb r2, [r3, #0]	@ 000c0e68 1a78
.org 0xc0e6a
	movs r0, #17	@ 000c0e6a 1120
.org 0xc0e6c
	negs r0, r0	@ 000c0e6c 4042
.org 0xc0e6e
	ands r0, r2	@ 000c0e6e 1040
.org 0xc0e70
	orrs r0, r1	@ 000c0e70 0843
.org 0xc0e72
	strb r0, [r3, #0]	@ 000c0e72 1870
.org 0xc0e74
	ldrb r1, [r6, #10]	@ 000c0e74 b17a
.org 0xc0e76
	movs r0, #4	@ 000c0e76 0420
.org 0xc0e78
	orrs r0, r1	@ 000c0e78 0843
.org 0xc0e7a
	strb r0, [r6, #10]	@ 000c0e7a b072
.org 0xc0e7c
	adds r4, r6, #0	@ 000c0e7c 341c
.org 0xc0e7e
	adds r4, #116	@ 000c0e7e 7434
.org 0xc0e80
	ldr r1, [pc, #28]	@ 000c0e80 0749
.org 0xc0e82
	adds r2, r6, #0	@ 000c0e82 321c
.org 0xc0e84
	adds r2, #84	@ 000c0e84 5432
.org 0xc0e86
	adds r0, r4, #0	@ 000c0e86 201c
.org 0xc0e88
	movs r3, #64	@ 000c0e88 4023
.org 0xc0e8a
	bl 0x5760	@ 000c0e8a 44f769fc
.org 0xc0e8e
	str r6, [r4, #44]	@ 000c0e8e e662
.org 0xc0e90
	str r5, [r4, #36]	@ 000c0e90 6562
.org 0xc0e92
	adds r0, r6, #0	@ 000c0e92 301c
.org 0xc0e94
	bl 0xc0f20	@ 000c0e94 00f044f8
