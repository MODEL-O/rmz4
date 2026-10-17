@ FUN_080a2dbc  entry 0x080a2dbc  size 148
.thumb
.org 0xa2dbc
FUN_080a2dbc:
	push {r4, r5, r6, lr}	@ 000a2dbc 70b5
.org 0xa2dbe
	adds r6, r0, #0	@ 000a2dbe 061c
.org 0xa2dc0
	ldr r0, [r6, #40]	@ 000a2dc0 b06a
.org 0xa2dc2
	ldrb r4, [r0, #10]	@ 000a2dc2 847a
.org 0xa2dc4
	lsrs r4, r4, #4	@ 000a2dc4 2409
.org 0xa2dc6
	movs r2, #1	@ 000a2dc6 0122
.org 0xa2dc8
	ands r4, r2	@ 000a2dc8 1440
.org 0xa2dca
	ldr r1, [pc, #56]	@ 000a2dca 0e49
.org 0xa2dcc
	ldrb r0, [r6, #9]	@ 000a2dcc 707a
.org 0xa2dce
	lsls r0, r0, #2	@ 000a2dce 8000
.org 0xa2dd0
	adds r0, r0, r1	@ 000a2dd0 4018
.org 0xa2dd2
	str r2, [r6, #12]	@ 000a2dd2 f260
.org 0xa2dd4
	ldr r0, [r0, #0]	@ 000a2dd4 0068
.org 0xa2dd6
	ldr r0, [r0, #4]	@ 000a2dd6 4068
.org 0xa2dd8
	str r0, [r6, #20]	@ 000a2dd8 7061
.org 0xa2dda
	movs r0, #0	@ 000a2dda 0020
.org 0xa2ddc
	strb r0, [r6, #13]	@ 000a2ddc 7073
.org 0xa2dde
	strb r0, [r6, #14]	@ 000a2dde b073
.org 0xa2de0
	strb r0, [r6, #15]	@ 000a2de0 f073
.org 0xa2de2
	ldrb r0, [r6, #10]	@ 000a2de2 b07a
.org 0xa2de4
	movs r1, #1	@ 000a2de4 0121
.org 0xa2de6
	movs r5, #0	@ 000a2de6 0025
.org 0xa2de8
	orrs r0, r1	@ 000a2de8 0843
.org 0xa2dea
	movs r1, #2	@ 000a2dea 0221
.org 0xa2dec
	orrs r0, r1	@ 000a2dec 0843
.org 0xa2dee
	strb r0, [r6, #10]	@ 000a2dee b072
.org 0xa2df0
	adds r0, r6, #0	@ 000a2df0 301c
.org 0xa2df2
	bl 0x1cc9c	@ 000a2df2 79f753ff
.org 0xa2df6
	cmp r4, #0	@ 000a2df6 002c
.org 0xa2df8
	beq.n 0xa2e08	@ 000a2df8 06d0
.org 0xa2dfa
	ldrb r0, [r6, #10]	@ 000a2dfa b07a
.org 0xa2dfc
	movs r1, #16	@ 000a2dfc 1021
.org 0xa2dfe
	orrs r0, r1	@ 000a2dfe 0843
.org 0xa2e00
	b.n 0xa2e0e	@ 000a2e00 05e0
.org 0xa2e02
	.byte 0x00	@ 000a2e02 data
.org 0xa2e03
	.byte 0x00	@ 000a2e03 data
.org 0xa2e04
	.byte 0x40,0xdb,0x85,0x08	@ 000a2e04 data
.org 0xa2e08
	ldrb r1, [r6, #10]	@ 000a2e08 b17a
.org 0xa2e0a
	movs r0, #239	@ 000a2e0a ef20
.org 0xa2e0c
	ands r0, r1	@ 000a2e0c 0840
.org 0xa2e0e
	strb r0, [r6, #10]	@ 000a2e0e b072
.org 0xa2e10
	adds r1, r4, #0	@ 000a2e10 211c
.org 0xa2e12
	adds r0, r6, #0	@ 000a2e12 301c
.org 0xa2e14
	adds r0, #76	@ 000a2e14 4c30
.org 0xa2e16
	movs r5, #0	@ 000a2e16 0025
.org 0xa2e18
	strb r1, [r0, #0]	@ 000a2e18 0170
.org 0xa2e1a
	adds r3, r6, #0	@ 000a2e1a 331c
.org 0xa2e1c
	adds r3, #74	@ 000a2e1c 4a33
.org 0xa2e1e
	lsls r1, r1, #4	@ 000a2e1e 0901
.org 0xa2e20
	ldrb r2, [r3, #0]	@ 000a2e20 1a78
.org 0xa2e22
	movs r0, #17	@ 000a2e22 1120
.org 0xa2e24
	negs r0, r0	@ 000a2e24 4042
.org 0xa2e26
	ands r0, r2	@ 000a2e26 1040
.org 0xa2e28
	orrs r0, r1	@ 000a2e28 0843
.org 0xa2e2a
	strb r0, [r3, #0]	@ 000a2e2a 1870
.org 0xa2e2c
	ldrb r1, [r6, #10]	@ 000a2e2c b17a
.org 0xa2e2e
	movs r0, #4	@ 000a2e2e 0420
.org 0xa2e30
	orrs r0, r1	@ 000a2e30 0843
.org 0xa2e32
	strb r0, [r6, #10]	@ 000a2e32 b072
.org 0xa2e34
	adds r4, r6, #0	@ 000a2e34 341c
.org 0xa2e36
	adds r4, #116	@ 000a2e36 7434
.org 0xa2e38
	ldr r1, [pc, #28]	@ 000a2e38 0749
.org 0xa2e3a
	adds r2, r6, #0	@ 000a2e3a 321c
.org 0xa2e3c
	adds r2, #84	@ 000a2e3c 5432
.org 0xa2e3e
	adds r0, r4, #0	@ 000a2e3e 201c
.org 0xa2e40
	movs r3, #4	@ 000a2e40 0423
.org 0xa2e42
	bl 0x5760	@ 000a2e42 62f78dfc
.org 0xa2e46
	str r6, [r4, #44]	@ 000a2e46 e662
.org 0xa2e48
	str r5, [r4, #36]	@ 000a2e48 6562
.org 0xa2e4a
	adds r0, r6, #0	@ 000a2e4a 301c
.org 0xa2e4c
	bl 0xa2e5c	@ 000a2e4c 00f006f8
