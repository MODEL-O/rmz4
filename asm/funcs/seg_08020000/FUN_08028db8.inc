@ FUN_08028db8  entry 0x08028db8  size 142
.thumb
.org 0x28db8
FUN_08028db8:
	push {r4, r5, lr}	@ 00028db8 30b5
.org 0x28dba
	adds r4, r0, #0	@ 00028dba 041c
.org 0x28dbc
	ldr r0, [r4, #12]	@ 00028dbc e068
.org 0x28dbe
	ldrb r0, [r0, #1]	@ 00028dbe 4078
.org 0x28dc0
	cmp r0, #1	@ 00028dc0 0128
.org 0x28dc2
	beq.n 0x28dfc	@ 00028dc2 1bd0
.org 0x28dc4
	cmp r0, #1	@ 00028dc4 0128
.org 0x28dc6
	bgt.n 0x28dce	@ 00028dc6 02dc
.org 0x28dc8
	cmp r0, #0	@ 00028dc8 0028
.org 0x28dca
	beq.n 0x28dd4	@ 00028dca 03d0
.org 0x28dcc
	b.n 0x28e3e	@ 00028dcc 37e0
.org 0x28dce
	cmp r0, #2	@ 00028dce 0228
.org 0x28dd0
	beq.n 0x28e18	@ 00028dd0 22d0
.org 0x28dd2
	b.n 0x28e3e	@ 00028dd2 34e0
.org 0x28dd4
	movs r0, #172	@ 00028dd4 ac20
.org 0x28dd6
	lsls r0, r0, #1	@ 00028dd6 4000
.org 0x28dd8
	adds r5, r4, r0	@ 00028dd8 2518
.org 0x28dda
	ldr r1, [r5, #0]	@ 00028dda 2968
.org 0x28ddc
	movs r0, #1	@ 00028ddc 0120
.org 0x28dde
	negs r0, r0	@ 00028dde 4042
.org 0x28de0
	cmp r1, r0	@ 00028de0 8142
.org 0x28de2
	beq.n 0x28dec	@ 00028de2 03d0
.org 0x28de4
	lsls r0, r1, #16	@ 00028de4 0804
.org 0x28de6
	lsrs r0, r0, #16	@ 00028de6 000c
.org 0x28de8
	bl 0x2a98	@ 00028de8 d9f756fe
.org 0x28dec
	ldr r0, [r4, #12]	@ 00028dec e068
.org 0x28dee
	ldrh r0, [r0, #4]	@ 00028dee 8088
.org 0x28df0
	bl 0x2a88	@ 00028df0 d9f74afe
.org 0x28df4
	ldr r0, [r4, #12]	@ 00028df4 e068
.org 0x28df6
	ldr r0, [r0, #4]	@ 00028df6 4068
.org 0x28df8
	str r0, [r5, #0]	@ 00028df8 2860
.org 0x28dfa
	b.n 0x28e3e	@ 00028dfa 20e0
.org 0x28dfc
	movs r1, #172	@ 00028dfc ac21
.org 0x28dfe
	lsls r1, r1, #1	@ 00028dfe 4900
.org 0x28e00
	adds r4, r4, r1	@ 00028e00 6418
.org 0x28e02
	ldr r0, [r4, #0]	@ 00028e02 2068
.org 0x28e04
	movs r5, #1	@ 00028e04 0125
.org 0x28e06
	negs r5, r5	@ 00028e06 6d42
.org 0x28e08
	cmp r0, r5	@ 00028e08 a842
.org 0x28e0a
	beq.n 0x28e3e	@ 00028e0a 18d0
.org 0x28e0c
	lsls r0, r0, #16	@ 00028e0c 0004
.org 0x28e0e
	lsrs r0, r0, #16	@ 00028e0e 000c
.org 0x28e10
	bl 0x2a98	@ 00028e10 d9f742fe
.org 0x28e14
	str r5, [r4, #0]	@ 00028e14 2560
.org 0x28e16
	b.n 0x28e3e	@ 00028e16 12e0
.org 0x28e18
	movs r1, #172	@ 00028e18 ac21
.org 0x28e1a
	lsls r1, r1, #1	@ 00028e1a 4900
.org 0x28e1c
	adds r0, r4, r1	@ 00028e1c 6018
.org 0x28e1e
	ldr r1, [r0, #0]	@ 00028e1e 0168
.org 0x28e20
	movs r0, #1	@ 00028e20 0120
.org 0x28e22
	negs r0, r0	@ 00028e22 4042
.org 0x28e24
	cmp r1, r0	@ 00028e24 8142
.org 0x28e26
	beq.n 0x28e3e	@ 00028e26 0ad0
.org 0x28e28
	lsls r0, r1, #16	@ 00028e28 0804
.org 0x28e2a
	lsrs r0, r0, #16	@ 00028e2a 000c
.org 0x28e2c
	bl 0x2ad0	@ 00028e2c d9f750fe
.org 0x28e30
	cmp r0, #0	@ 00028e30 0028
.org 0x28e32
	beq.n 0x28e3e	@ 00028e32 04d0
.org 0x28e34
	ldr r0, [r4, #12]	@ 00028e34 e068
.org 0x28e36
	subs r0, #8	@ 00028e36 0838
.org 0x28e38
	str r0, [r4, #12]	@ 00028e38 e060
.org 0x28e3a
	movs r0, #1	@ 00028e3a 0120
.org 0x28e3c
	b.n 0x28e40	@ 00028e3c 00e0
.org 0x28e3e
	movs r0, #0	@ 00028e3e 0020
.org 0x28e40
	pop {r4, r5}	@ 00028e40 30bc
.org 0x28e42
	pop {r1}	@ 00028e42 02bc
.org 0x28e44
	bx r1	@ 00028e44 0847
