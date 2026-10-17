@ FUN_080b6be0  entry 0x080b6be0  size 166
.thumb
.org 0xb6be0
FUN_080b6be0:
	push {r4, r5, r6, lr}	@ 000b6be0 70b5
.org 0xb6be2
	adds r6, r0, #0	@ 000b6be2 061c
.org 0xb6be4
	ldrb r4, [r6, #17]	@ 000b6be4 747c
.org 0xb6be6
	ldr r1, [pc, #80]	@ 000b6be6 1449
.org 0xb6be8
	ldrb r0, [r6, #9]	@ 000b6be8 707a
.org 0xb6bea
	lsls r0, r0, #2	@ 000b6bea 8000
.org 0xb6bec
	adds r0, r0, r1	@ 000b6bec 4018
.org 0xb6bee
	movs r1, #1	@ 000b6bee 0121
.org 0xb6bf0
	str r1, [r6, #12]	@ 000b6bf0 f160
.org 0xb6bf2
	ldr r0, [r0, #0]	@ 000b6bf2 0068
.org 0xb6bf4
	ldr r0, [r0, #4]	@ 000b6bf4 4068
.org 0xb6bf6
	str r0, [r6, #20]	@ 000b6bf6 7061
.org 0xb6bf8
	movs r2, #0	@ 000b6bf8 0022
.org 0xb6bfa
	strb r2, [r6, #13]	@ 000b6bfa 7273
.org 0xb6bfc
	strb r2, [r6, #14]	@ 000b6bfc b273
.org 0xb6bfe
	strb r2, [r6, #15]	@ 000b6bfe f273
.org 0xb6c00
	ldrb r0, [r6, #10]	@ 000b6c00 b07a
.org 0xb6c02
	movs r5, #0	@ 000b6c02 0025
.org 0xb6c04
	orrs r0, r1	@ 000b6c04 0843
.org 0xb6c06
	movs r1, #2	@ 000b6c06 0221
.org 0xb6c08
	orrs r0, r1	@ 000b6c08 0843
.org 0xb6c0a
	strb r0, [r6, #10]	@ 000b6c0a b072
.org 0xb6c0c
	adds r0, r6, #0	@ 000b6c0c 301c
.org 0xb6c0e
	adds r0, #184	@ 000b6c0e b830
.org 0xb6c10
	str r2, [r0, #0]	@ 000b6c10 0260
.org 0xb6c12
	adds r0, #5	@ 000b6c12 0530
.org 0xb6c14
	strb r2, [r0, #0]	@ 000b6c14 0270
.org 0xb6c16
	adds r0, r6, #0	@ 000b6c16 301c
.org 0xb6c18
	bl 0x1cc9c	@ 000b6c18 66f740f8
.org 0xb6c1c
	adds r0, r6, #0	@ 000b6c1c 301c
.org 0xb6c1e
	bl 0x1ceec	@ 000b6c1e 66f765f9
.org 0xb6c22
	adds r1, r6, #0	@ 000b6c22 311c
.org 0xb6c24
	adds r1, #37	@ 000b6c24 2531
.org 0xb6c26
	movs r0, #8	@ 000b6c26 0820
.org 0xb6c28
	strb r0, [r1, #0]	@ 000b6c28 0870
.org 0xb6c2a
	cmp r4, #0	@ 000b6c2a 002c
.org 0xb6c2c
	beq.n 0xb6c3c	@ 000b6c2c 06d0
.org 0xb6c2e
	ldrb r0, [r6, #10]	@ 000b6c2e b07a
.org 0xb6c30
	movs r1, #16	@ 000b6c30 1021
.org 0xb6c32
	orrs r0, r1	@ 000b6c32 0843
.org 0xb6c34
	b.n 0xb6c42	@ 000b6c34 05e0
.org 0xb6c36
	.byte 0x00	@ 000b6c36 data
.org 0xb6c37
	.byte 0x00	@ 000b6c37 data
.org 0xb6c38
	.byte 0x40,0xdb,0x85,0x08	@ 000b6c38 data
.org 0xb6c3c
	ldrb r1, [r6, #10]	@ 000b6c3c b17a
.org 0xb6c3e
	movs r0, #239	@ 000b6c3e ef20
.org 0xb6c40
	ands r0, r1	@ 000b6c40 0840
.org 0xb6c42
	strb r0, [r6, #10]	@ 000b6c42 b072
.org 0xb6c44
	movs r1, #1	@ 000b6c44 0121
.org 0xb6c46
	ands r1, r4	@ 000b6c46 2140
.org 0xb6c48
	adds r0, r6, #0	@ 000b6c48 301c
.org 0xb6c4a
	adds r0, #76	@ 000b6c4a 4c30
.org 0xb6c4c
	movs r5, #0	@ 000b6c4c 0025
.org 0xb6c4e
	strb r1, [r0, #0]	@ 000b6c4e 0170
.org 0xb6c50
	adds r3, r6, #0	@ 000b6c50 331c
.org 0xb6c52
	adds r3, #74	@ 000b6c52 4a33
.org 0xb6c54
	lsls r1, r1, #4	@ 000b6c54 0901
.org 0xb6c56
	ldrb r2, [r3, #0]	@ 000b6c56 1a78
.org 0xb6c58
	movs r0, #17	@ 000b6c58 1120
.org 0xb6c5a
	negs r0, r0	@ 000b6c5a 4042
.org 0xb6c5c
	ands r0, r2	@ 000b6c5c 1040
.org 0xb6c5e
	orrs r0, r1	@ 000b6c5e 0843
.org 0xb6c60
	strb r0, [r3, #0]	@ 000b6c60 1870
.org 0xb6c62
	ldrb r1, [r6, #10]	@ 000b6c62 b17a
.org 0xb6c64
	movs r0, #4	@ 000b6c64 0420
.org 0xb6c66
	orrs r0, r1	@ 000b6c66 0843
.org 0xb6c68
	strb r0, [r6, #10]	@ 000b6c68 b072
.org 0xb6c6a
	adds r4, r6, #0	@ 000b6c6a 341c
.org 0xb6c6c
	adds r4, #116	@ 000b6c6c 7434
.org 0xb6c6e
	ldr r1, [pc, #28]	@ 000b6c6e 0749
.org 0xb6c70
	adds r2, r6, #0	@ 000b6c70 321c
.org 0xb6c72
	adds r2, #84	@ 000b6c72 5432
.org 0xb6c74
	adds r0, r4, #0	@ 000b6c74 201c
.org 0xb6c76
	movs r3, #64	@ 000b6c76 4023
.org 0xb6c78
	bl 0x5760	@ 000b6c78 4ef772fd
.org 0xb6c7c
	str r6, [r4, #44]	@ 000b6c7c e662
.org 0xb6c7e
	str r5, [r4, #36]	@ 000b6c7e 6562
.org 0xb6c80
	adds r0, r6, #0	@ 000b6c80 301c
.org 0xb6c82
	bl 0xb6d44	@ 000b6c82 00f05ff8
