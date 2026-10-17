@ FUN_08035bec  entry 0x08035bec  size 72
.thumb
.org 0x35bec
FUN_08035bec:
	push {r4, lr}	@ 00035bec 10b5
.org 0x35bee
	adds r4, r0, #0	@ 00035bee 041c
.org 0x35bf0
	adds r0, #180	@ 00035bf0 b430
.org 0x35bf2
	ldrb r0, [r0, #12]	@ 00035bf2 007b
.org 0x35bf4
	cmp r0, #0	@ 00035bf4 0028
.org 0x35bf6
	bne.n 0x35c08	@ 00035bf6 07d1
.org 0x35bf8
	ldr r0, [pc, #8]	@ 00035bf8 0248
.org 0x35bfa
	adds r2, r4, r0	@ 00035bfa 2218
.org 0x35bfc
	ldrb r0, [r2, #0]	@ 00035bfc 1078
.org 0x35bfe
	movs r1, #16	@ 00035bfe 1021
.org 0x35c00
	b.n 0x35c10	@ 00035c00 06e0
.org 0x35c02
	.byte 0x00	@ 00035c02 data
.org 0x35c03
	.byte 0x00	@ 00035c03 data
.org 0x35c04
	.byte 0x53,0x01,0x00,0x00	@ 00035c04 data
.org 0x35c08
	ldr r1, [pc, #48]	@ 00035c08 0c49
.org 0x35c0a
	adds r2, r4, r1	@ 00035c0a 6218
.org 0x35c0c
	ldrb r0, [r2, #0]	@ 00035c0c 1078
.org 0x35c0e
	movs r1, #32	@ 00035c0e 2021
.org 0x35c10
	orrs r0, r1	@ 00035c10 0843
.org 0x35c12
	strb r0, [r2, #0]	@ 00035c12 1070
.org 0x35c14
	ldr r1, [pc, #40]	@ 00035c14 0a49
.org 0x35c16
	adds r0, r4, #0	@ 00035c16 201c
.org 0x35c18
	movs r2, #0	@ 00035c18 0022
.org 0x35c1a
	movs r3, #2	@ 00035c1a 0223
.org 0x35c1c
	bl 0x1cfc8	@ 00035c1c e7f7d4f9
.org 0x35c20
	movs r1, #170	@ 00035c20 aa21
.org 0x35c22
	lsls r1, r1, #1	@ 00035c22 4900
.org 0x35c24
	adds r0, r4, r1	@ 00035c24 6018
.org 0x35c26
	ldrb r0, [r0, #0]	@ 00035c26 0078
.org 0x35c28
	cmp r0, #1	@ 00035c28 0128
.org 0x35c2a
	bne.n 0x35c34	@ 00035c2a 03d1
.org 0x35c2c
	ldr r0, [pc, #20]	@ 00035c2c 0548
.org 0x35c2e
	adds r1, r4, r0	@ 00035c2e 2118
.org 0x35c30
	movs r0, #2	@ 00035c30 0220
.org 0x35c32
	strb r0, [r1, #0]	@ 00035c32 0870
