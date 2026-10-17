@ FUN_08037ce4  entry 0x08037ce4  size 72
.thumb
.org 0x37ce4
FUN_08037ce4:
	push {r4, lr}	@ 00037ce4 10b5
.org 0x37ce6
	adds r4, r0, #0	@ 00037ce6 041c
.org 0x37ce8
	adds r0, #180	@ 00037ce8 b430
.org 0x37cea
	ldrb r0, [r0, #12]	@ 00037cea 007b
.org 0x37cec
	cmp r0, #0	@ 00037cec 0028
.org 0x37cee
	bne.n 0x37d00	@ 00037cee 07d1
.org 0x37cf0
	ldr r0, [pc, #8]	@ 00037cf0 0248
.org 0x37cf2
	adds r2, r4, r0	@ 00037cf2 2218
.org 0x37cf4
	ldrb r0, [r2, #0]	@ 00037cf4 1078
.org 0x37cf6
	movs r1, #16	@ 00037cf6 1021
.org 0x37cf8
	b.n 0x37d08	@ 00037cf8 06e0
.org 0x37cfa
	.byte 0x00	@ 00037cfa data
.org 0x37cfb
	.byte 0x00	@ 00037cfb data
.org 0x37cfc
	.byte 0x53,0x01,0x00,0x00	@ 00037cfc data
.org 0x37d00
	ldr r1, [pc, #48]	@ 00037d00 0c49
.org 0x37d02
	adds r2, r4, r1	@ 00037d02 6218
.org 0x37d04
	ldrb r0, [r2, #0]	@ 00037d04 1078
.org 0x37d06
	movs r1, #32	@ 00037d06 2021
.org 0x37d08
	orrs r0, r1	@ 00037d08 0843
.org 0x37d0a
	strb r0, [r2, #0]	@ 00037d0a 1070
.org 0x37d0c
	ldr r1, [pc, #40]	@ 00037d0c 0a49
.org 0x37d0e
	adds r0, r4, #0	@ 00037d0e 201c
.org 0x37d10
	movs r2, #0	@ 00037d10 0022
.org 0x37d12
	movs r3, #2	@ 00037d12 0223
.org 0x37d14
	bl 0x1cfc8	@ 00037d14 e5f758f9
.org 0x37d18
	movs r1, #170	@ 00037d18 aa21
.org 0x37d1a
	lsls r1, r1, #1	@ 00037d1a 4900
.org 0x37d1c
	adds r0, r4, r1	@ 00037d1c 6018
.org 0x37d1e
	ldrb r0, [r0, #0]	@ 00037d1e 0078
.org 0x37d20
	cmp r0, #1	@ 00037d20 0128
.org 0x37d22
	bne.n 0x37d2c	@ 00037d22 03d1
.org 0x37d24
	ldr r0, [pc, #20]	@ 00037d24 0548
.org 0x37d26
	adds r1, r4, r0	@ 00037d26 2118
.org 0x37d28
	movs r0, #2	@ 00037d28 0220
.org 0x37d2a
	strb r0, [r1, #0]	@ 00037d2a 0870
