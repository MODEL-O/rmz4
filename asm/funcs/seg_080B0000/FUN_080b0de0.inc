@ FUN_080b0de0  entry 0x080b0de0  size 154
.thumb
.org 0xb0de0
FUN_080b0de0:
	push {r4, r5, r6, lr}	@ 000b0de0 70b5
.org 0xb0de2
	adds r5, r0, #0	@ 000b0de2 051c
.org 0xb0de4
	ldr r0, [r5, #40]	@ 000b0de4 a86a
.org 0xb0de6
	ldrb r3, [r5, #17]	@ 000b0de6 6b7c
.org 0xb0de8
	ldrb r4, [r0, #10]	@ 000b0de8 847a
.org 0xb0dea
	lsrs r4, r4, #4	@ 000b0dea 2409
.org 0xb0dec
	movs r2, #1	@ 000b0dec 0122
.org 0xb0dee
	ands r4, r2	@ 000b0dee 1440
.org 0xb0df0
	ldr r1, [pc, #88]	@ 000b0df0 1649
.org 0xb0df2
	ldrb r0, [r5, #9]	@ 000b0df2 687a
.org 0xb0df4
	lsls r0, r0, #2	@ 000b0df4 8000
.org 0xb0df6
	adds r0, r0, r1	@ 000b0df6 4018
.org 0xb0df8
	str r2, [r5, #12]	@ 000b0df8 ea60
.org 0xb0dfa
	ldr r0, [r0, #0]	@ 000b0dfa 0068
.org 0xb0dfc
	ldr r0, [r0, #4]	@ 000b0dfc 4068
.org 0xb0dfe
	str r0, [r5, #20]	@ 000b0dfe 6861
.org 0xb0e00
	movs r0, #0	@ 000b0e00 0020
.org 0xb0e02
	strb r0, [r5, #13]	@ 000b0e02 6873
.org 0xb0e04
	strb r0, [r5, #14]	@ 000b0e04 a873
.org 0xb0e06
	strb r0, [r5, #15]	@ 000b0e06 e873
.org 0xb0e08
	ldrb r0, [r5, #10]	@ 000b0e08 a87a
.org 0xb0e0a
	movs r1, #1	@ 000b0e0a 0121
.org 0xb0e0c
	movs r6, #0	@ 000b0e0c 0026
.org 0xb0e0e
	orrs r0, r1	@ 000b0e0e 0843
.org 0xb0e10
	movs r1, #2	@ 000b0e10 0221
.org 0xb0e12
	orrs r0, r1	@ 000b0e12 0843
.org 0xb0e14
	strb r0, [r5, #10]	@ 000b0e14 a872
.org 0xb0e16
	adds r0, r5, #0	@ 000b0e16 281c
.org 0xb0e18
	adds r0, #188	@ 000b0e18 bc30
.org 0xb0e1a
	strb r3, [r0, #0]	@ 000b0e1a 0370
.org 0xb0e1c
	adds r0, r5, #0	@ 000b0e1c 281c
.org 0xb0e1e
	bl 0x1cc9c	@ 000b0e1e 6bf73dff
.org 0xb0e22
	adds r0, r5, #0	@ 000b0e22 281c
.org 0xb0e24
	bl 0x1ceec	@ 000b0e24 6cf762f8
.org 0xb0e28
	adds r1, r5, #0	@ 000b0e28 291c
.org 0xb0e2a
	adds r1, #37	@ 000b0e2a 2531
.org 0xb0e2c
	movs r0, #25	@ 000b0e2c 1920
.org 0xb0e2e
	strb r0, [r1, #0]	@ 000b0e2e 0870
.org 0xb0e30
	adds r2, r5, #0	@ 000b0e30 2a1c
.org 0xb0e32
	adds r2, #69	@ 000b0e32 4532
.org 0xb0e34
	ldrb r1, [r2, #0]	@ 000b0e34 1178
.org 0xb0e36
	subs r0, #38	@ 000b0e36 2638
.org 0xb0e38
	ands r0, r1	@ 000b0e38 0840
.org 0xb0e3a
	movs r1, #4	@ 000b0e3a 0421
.org 0xb0e3c
	orrs r0, r1	@ 000b0e3c 0843
.org 0xb0e3e
	strb r0, [r2, #0]	@ 000b0e3e 1070
.org 0xb0e40
	cmp r4, #0	@ 000b0e40 002c
.org 0xb0e42
	beq.n 0xb0e50	@ 000b0e42 05d0
.org 0xb0e44
	ldrb r0, [r5, #10]	@ 000b0e44 a87a
.org 0xb0e46
	movs r1, #16	@ 000b0e46 1021
.org 0xb0e48
	orrs r0, r1	@ 000b0e48 0843
.org 0xb0e4a
	b.n 0xb0e56	@ 000b0e4a 04e0
.org 0xb0e4c
	.byte 0x40,0xdb,0x85,0x08	@ 000b0e4c data
.org 0xb0e50
	ldrb r1, [r5, #10]	@ 000b0e50 a97a
.org 0xb0e52
	movs r0, #239	@ 000b0e52 ef20
.org 0xb0e54
	ands r0, r1	@ 000b0e54 0840
.org 0xb0e56
	strb r0, [r5, #10]	@ 000b0e56 a872
.org 0xb0e58
	adds r1, r4, #0	@ 000b0e58 211c
.org 0xb0e5a
	adds r0, r5, #0	@ 000b0e5a 281c
.org 0xb0e5c
	adds r0, #76	@ 000b0e5c 4c30
.org 0xb0e5e
	strb r1, [r0, #0]	@ 000b0e5e 0170
.org 0xb0e60
	adds r3, r5, #0	@ 000b0e60 2b1c
.org 0xb0e62
	adds r3, #74	@ 000b0e62 4a33
.org 0xb0e64
	lsls r1, r1, #4	@ 000b0e64 0901
.org 0xb0e66
	ldrb r2, [r3, #0]	@ 000b0e66 1a78
.org 0xb0e68
	movs r0, #17	@ 000b0e68 1120
.org 0xb0e6a
	negs r0, r0	@ 000b0e6a 4042
.org 0xb0e6c
	ands r0, r2	@ 000b0e6c 1040
.org 0xb0e6e
	orrs r0, r1	@ 000b0e6e 0843
.org 0xb0e70
	strb r0, [r3, #0]	@ 000b0e70 1870
.org 0xb0e72
	adds r0, r5, #0	@ 000b0e72 281c
.org 0xb0e74
	bl 0xb0e80	@ 000b0e74 00f004f8
.org 0xb0e78
	pop {r4, r5, r6}	@ 000b0e78 70bc
