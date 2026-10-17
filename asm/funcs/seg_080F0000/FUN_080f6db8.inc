@ FUN_080f6db8  entry 0x080f6db8  size 98
.thumb
.org 0xf6db8
FUN_080f6db8:
	push {r4, r5, r6, r7, lr}	@ 000f6db8 f0b5
.org 0xf6dba
	adds r5, r0, #0	@ 000f6dba 051c
.org 0xf6dbc
	adds r6, r1, #0	@ 000f6dbc 0e1c
.org 0xf6dbe
	lsls r2, r2, #24	@ 000f6dbe 1206
.org 0xf6dc0
	lsrs r7, r2, #24	@ 000f6dc0 170e
.org 0xf6dc2
	ldr r0, [pc, #88]	@ 000f6dc2 1648
.org 0xf6dc4
	ldr r0, [r0, #0]	@ 000f6dc4 0068
.org 0xf6dc6
	bl 0x5500	@ 000f6dc6 0ef79bfb
.org 0xf6dca
	adds r4, r0, #0	@ 000f6dca 041c
.org 0xf6dcc
	cmp r4, #0	@ 000f6dcc 002c
.org 0xf6dce
	beq.n 0xf6e12	@ 000f6dce 20d0
.org 0xf6dd0
	adds r1, r4, #0	@ 000f6dd0 211c
.org 0xf6dd2
	adds r1, #37	@ 000f6dd2 2531
.org 0xf6dd4
	movs r2, #0	@ 000f6dd4 0022
.org 0xf6dd6
	movs r0, #30	@ 000f6dd6 1e20
.org 0xf6dd8
	strb r0, [r1, #0]	@ 000f6dd8 0870
.org 0xf6dda
	ldr r1, [pc, #68]	@ 000f6dda 1149
.org 0xf6ddc
	movs r0, #26	@ 000f6ddc 1a20
.org 0xf6dde
	strb r0, [r4, #9]	@ 000f6dde 6072
.org 0xf6de0
	ldr r0, [r1, #104]	@ 000f6de0 886e
.org 0xf6de2
	ldr r0, [r0, #0]	@ 000f6de2 0068
.org 0xf6de4
	str r0, [r4, #20]	@ 000f6de4 6061
.org 0xf6de6
	movs r3, #0	@ 000f6de6 0023
.org 0xf6de8
	strh r2, [r4, #32]	@ 000f6de8 2284
.org 0xf6dea
	adds r0, r4, #0	@ 000f6dea 201c
.org 0xf6dec
	adds r0, #34	@ 000f6dec 2230
.org 0xf6dee
	strb r3, [r0, #0]	@ 000f6dee 0370
.org 0xf6df0
	ldrb r1, [r4, #11]	@ 000f6df0 e17a
.org 0xf6df2
	movs r0, #16	@ 000f6df2 1020
.org 0xf6df4
	orrs r0, r1	@ 000f6df4 0843
.org 0xf6df6
	strb r0, [r4, #11]	@ 000f6df6 e072
.org 0xf6df8
	ldrb r0, [r4, #28]	@ 000f6df8 207f
.org 0xf6dfa
	strb r0, [r4, #29]	@ 000f6dfa 6077
.org 0xf6dfc
	str r5, [r4, #40]	@ 000f6dfc a562
.org 0xf6dfe
	ldr r0, [r6, #0]	@ 000f6dfe 3068
.org 0xf6e00
	ldr r1, [r6, #4]	@ 000f6e00 7168
.org 0xf6e02
	str r0, [r4, #84]	@ 000f6e02 6065
.org 0xf6e04
	str r1, [r4, #88]	@ 000f6e04 a165
.org 0xf6e06
	movs r0, #1	@ 000f6e06 0120
.org 0xf6e08
	strb r0, [r4, #16]	@ 000f6e08 2074
.org 0xf6e0a
	strb r7, [r4, #17]	@ 000f6e0a 6774
.org 0xf6e0c
	adds r0, r4, #0	@ 000f6e0c 201c
.org 0xf6e0e
	adds r0, #181	@ 000f6e0e b530
.org 0xf6e10
	strb r3, [r0, #0]	@ 000f6e10 0370
.org 0xf6e12
	adds r0, r4, #0	@ 000f6e12 201c
.org 0xf6e14
	pop {r4, r5, r6, r7}	@ 000f6e14 f0bc
.org 0xf6e16
	pop {r1}	@ 000f6e16 02bc
.org 0xf6e18
	bx r1	@ 000f6e18 0847
