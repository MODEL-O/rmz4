@ FUN_08098dd8  entry 0x08098dd8  size 94
.thumb
.org 0x98dd8
FUN_08098dd8:
	push {r4, r5, lr}	@ 00098dd8 30b5
.org 0x98dda
	adds r4, r0, #0	@ 00098dda 041c
.org 0x98ddc
	ldr r0, [r4, #20]	@ 00098ddc 6069
.org 0x98dde
	movs r1, #1	@ 00098dde 0121
.org 0x98de0
	ands r0, r1	@ 00098de0 0840
.org 0x98de2
	cmp r0, #0	@ 00098de2 0028
.org 0x98de4
	beq.n 0x98e30	@ 00098de4 24d0
.org 0x98de6
	movs r0, #42	@ 00098de6 2a20
.org 0x98de8
	bl 0x6984	@ 00098de8 6df7ccfd
.org 0x98dec
	ldr r0, [r4, #12]	@ 00098dec e068
.org 0x98dee
	ldr r0, [r0, #44]	@ 00098dee c06a
.org 0x98df0
	ldr r5, [r4, #44]	@ 00098df0 e56a
.org 0x98df2
	movs r2, #0	@ 00098df2 0022
.org 0x98df4
	ldr r1, [r0, #84]	@ 00098df4 416d
.org 0x98df6
	ldr r0, [r5, #84]	@ 00098df6 686d
.org 0x98df8
	cmp r1, r0	@ 00098df8 8142
.org 0x98dfa
	ble.n 0x98dfe	@ 00098dfa 00dd
.org 0x98dfc
	movs r2, #1	@ 00098dfc 0122
.org 0x98dfe
	adds r0, r5, #0	@ 00098dfe 281c
.org 0x98e00
	adds r0, #188	@ 00098e00 bc30
.org 0x98e02
	strb r2, [r0, #0]	@ 00098e02 0270
.org 0x98e04
	ldr r1, [r4, #20]	@ 00098e04 6169
.org 0x98e06
	movs r0, #128	@ 00098e06 8020
.org 0x98e08
	lsls r0, r0, #2	@ 00098e08 8000
.org 0x98e0a
	ands r0, r1	@ 00098e0a 0840
.org 0x98e0c
	cmp r0, #0	@ 00098e0c 0028
.org 0x98e0e
	beq.n 0x98e30	@ 00098e0e 0fd0
.org 0x98e10
	movs r0, #128	@ 00098e10 8020
.org 0x98e12
	lsls r0, r0, #10	@ 00098e12 8002
.org 0x98e14
	ands r1, r0	@ 00098e14 0140
.org 0x98e16
	cmp r1, #0	@ 00098e16 0029
.org 0x98e18
	beq.n 0x98e30	@ 00098e18 0ad0
.org 0x98e1a
	ldr r0, [pc, #28]	@ 00098e1a 0748
.org 0x98e1c
	ldr r0, [r0, #0]	@ 00098e1c 0068
.org 0x98e1e
	cmp r0, #0	@ 00098e1e 0028
.org 0x98e20
	beq.n 0x98e30	@ 00098e20 06d0
.org 0x98e22
	movs r1, #5	@ 00098e22 0521
.org 0x98e24
	movs r2, #9	@ 00098e24 0922
.org 0x98e26
	bl 0x3a578	@ 00098e26 a1f7a7fb
.org 0x98e2a
	adds r1, r5, #0	@ 00098e2a 291c
.org 0x98e2c
	adds r1, #189	@ 00098e2c bd31
.org 0x98e2e
	strb r0, [r1, #0]	@ 00098e2e 0870
.org 0x98e30
	pop {r4, r5}	@ 00098e30 30bc
.org 0x98e32
	pop {r0}	@ 00098e32 01bc
.org 0x98e34
	bx r0	@ 00098e34 0047
