@ FUN_08096d8c  entry 0x08096d8c  size 76
.thumb
.org 0x96d8c
FUN_08096d8c:
	push {r4, r5, lr}	@ 00096d8c 30b5
.org 0x96d8e
	adds r5, r0, #0	@ 00096d8e 051c
.org 0x96d90
	ldr r0, [pc, #68]	@ 00096d90 1148
.org 0x96d92
	ldr r0, [r0, #0]	@ 00096d92 0068
.org 0x96d94
	bl 0x5500	@ 00096d94 6ef7b4fb
.org 0x96d98
	adds r4, r0, #0	@ 00096d98 041c
.org 0x96d9a
	cmp r4, #0	@ 00096d9a 002c
.org 0x96d9c
	beq.n 0x96dd2	@ 00096d9c 19d0
.org 0x96d9e
	adds r1, r4, #0	@ 00096d9e 211c
.org 0x96da0
	adds r1, #37	@ 00096da0 2531
.org 0x96da2
	movs r3, #0	@ 00096da2 0023
.org 0x96da4
	movs r0, #24	@ 00096da4 1820
.org 0x96da6
	strb r0, [r1, #0]	@ 00096da6 0870
.org 0x96da8
	ldr r1, [pc, #48]	@ 00096da8 0c49
.org 0x96daa
	movs r0, #30	@ 00096daa 1e20
.org 0x96dac
	strb r0, [r4, #9]	@ 00096dac 6072
.org 0x96dae
	ldr r0, [r1, #120]	@ 00096dae 886f
.org 0x96db0
	ldr r0, [r0, #0]	@ 00096db0 0068
.org 0x96db2
	str r0, [r4, #20]	@ 00096db2 6061
.org 0x96db4
	movs r2, #0	@ 00096db4 0022
.org 0x96db6
	strh r3, [r4, #32]	@ 00096db6 2384
.org 0x96db8
	adds r0, r4, #0	@ 00096db8 201c
.org 0x96dba
	adds r0, #34	@ 00096dba 2230
.org 0x96dbc
	strb r2, [r0, #0]	@ 00096dbc 0270
.org 0x96dbe
	ldrb r1, [r4, #11]	@ 00096dbe e17a
.org 0x96dc0
	movs r0, #16	@ 00096dc0 1020
.org 0x96dc2
	orrs r0, r1	@ 00096dc2 0843
.org 0x96dc4
	strb r0, [r4, #11]	@ 00096dc4 e072
.org 0x96dc6
	ldrb r0, [r4, #28]	@ 00096dc6 207f
.org 0x96dc8
	strb r0, [r4, #29]	@ 00096dc8 6077
.org 0x96dca
	str r5, [r4, #40]	@ 00096dca a562
.org 0x96dcc
	movs r0, #1	@ 00096dcc 0120
.org 0x96dce
	strb r0, [r4, #16]	@ 00096dce 2074
.org 0x96dd0
	strb r2, [r4, #17]	@ 00096dd0 6274
.org 0x96dd2
	pop {r4, r5}	@ 00096dd2 30bc
.org 0x96dd4
	pop {r0}	@ 00096dd4 01bc
.org 0x96dd6
	bx r0	@ 00096dd6 0047
