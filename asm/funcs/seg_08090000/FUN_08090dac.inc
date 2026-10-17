@ FUN_08090dac  entry 0x08090dac  size 88
.thumb
.org 0x90dac
FUN_08090dac:
	push {r4, r5, r6, lr}	@ 00090dac 70b5
.org 0x90dae
	adds r5, r0, #0	@ 00090dae 051c
.org 0x90db0
	lsls r1, r1, #24	@ 00090db0 0906
.org 0x90db2
	lsrs r6, r1, #24	@ 00090db2 0e0e
.org 0x90db4
	ldr r0, [pc, #76]	@ 00090db4 1348
.org 0x90db6
	ldr r0, [r0, #0]	@ 00090db6 0068
.org 0x90db8
	bl 0x5500	@ 00090db8 74f7a2fb
.org 0x90dbc
	adds r4, r0, #0	@ 00090dbc 041c
.org 0x90dbe
	cmp r4, #0	@ 00090dbe 002c
.org 0x90dc0
	beq.n 0x90dfe	@ 00090dc0 1dd0
.org 0x90dc2
	adds r1, r4, #0	@ 00090dc2 211c
.org 0x90dc4
	adds r1, #37	@ 00090dc4 2531
.org 0x90dc6
	movs r3, #0	@ 00090dc6 0023
.org 0x90dc8
	movs r0, #24	@ 00090dc8 1820
.org 0x90dca
	strb r0, [r1, #0]	@ 00090dca 0870
.org 0x90dcc
	ldr r1, [pc, #56]	@ 00090dcc 0e49
.org 0x90dce
	movs r0, #22	@ 00090dce 1620
.org 0x90dd0
	strb r0, [r4, #9]	@ 00090dd0 6072
.org 0x90dd2
	ldr r0, [r1, #88]	@ 00090dd2 886d
.org 0x90dd4
	ldr r0, [r0, #0]	@ 00090dd4 0068
.org 0x90dd6
	str r0, [r4, #20]	@ 00090dd6 6061
.org 0x90dd8
	movs r2, #0	@ 00090dd8 0022
.org 0x90dda
	strh r3, [r4, #32]	@ 00090dda 2384
.org 0x90ddc
	adds r0, r4, #0	@ 00090ddc 201c
.org 0x90dde
	adds r0, #34	@ 00090dde 2230
.org 0x90de0
	strb r2, [r0, #0]	@ 00090de0 0270
.org 0x90de2
	ldrb r1, [r4, #11]	@ 00090de2 e17a
.org 0x90de4
	movs r0, #16	@ 00090de4 1020
.org 0x90de6
	orrs r0, r1	@ 00090de6 0843
.org 0x90de8
	strb r0, [r4, #11]	@ 00090de8 e072
.org 0x90dea
	ldrb r0, [r4, #28]	@ 00090dea 207f
.org 0x90dec
	strb r0, [r4, #29]	@ 00090dec 6077
.org 0x90dee
	str r5, [r4, #40]	@ 00090dee a562
.org 0x90df0
	strb r2, [r4, #16]	@ 00090df0 2274
.org 0x90df2
	strb r6, [r4, #17]	@ 00090df2 6674
.org 0x90df4
	adds r1, r5, #0	@ 00090df4 291c
.org 0x90df6
	adds r1, #213	@ 00090df6 d531
.org 0x90df8
	ldrb r0, [r1, #0]	@ 00090df8 0878
.org 0x90dfa
	adds r0, #1	@ 00090dfa 0130
.org 0x90dfc
	strb r0, [r1, #0]	@ 00090dfc 0870
.org 0x90dfe
	pop {r4, r5, r6}	@ 00090dfe 70bc
.org 0x90e00
	pop {r0}	@ 00090e00 01bc
.org 0x90e02
	bx r0	@ 00090e02 0047
