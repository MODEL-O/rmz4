@ FUN_080e1dc4  entry 0x080e1dc4  size 160
.thumb
.org 0xe1dc4
FUN_080e1dc4:
	push {r4, lr}	@ 000e1dc4 10b5
.org 0xe1dc6
	adds r4, r0, #0	@ 000e1dc6 041c
.org 0xe1dc8
	bl 0x1cc9c	@ 000e1dc8 3af768ff
.org 0xe1dcc
	ldrb r0, [r4, #10]	@ 000e1dcc a07a
.org 0xe1dce
	movs r1, #1	@ 000e1dce 0121
.org 0xe1dd0
	orrs r1, r0	@ 000e1dd0 0143
.org 0xe1dd2
	movs r0, #2	@ 000e1dd2 0220
.org 0xe1dd4
	orrs r1, r0	@ 000e1dd4 0143
.org 0xe1dd6
	strb r1, [r4, #10]	@ 000e1dd6 a172
.org 0xe1dd8
	adds r0, r4, #0	@ 000e1dd8 201c
.org 0xe1dda
	movs r1, #1	@ 000e1dda 0121
.org 0xe1ddc
	bl 0x1cf00	@ 000e1ddc 3bf790f8
.org 0xe1de0
	adds r0, r4, #0	@ 000e1de0 201c
.org 0xe1de2
	bl 0x1cff0	@ 000e1de2 3bf705f9
.org 0xe1de6
	ldrb r1, [r4, #17]	@ 000e1de6 617c
.org 0xe1de8
	cmp r1, #0	@ 000e1de8 0029
.org 0xe1dea
	beq.n 0xe1e28	@ 000e1dea 1dd0
.org 0xe1dec
	movs r0, #128	@ 000e1dec 8020
.org 0xe1dee
	ands r0, r1	@ 000e1dee 0840
.org 0xe1df0
	cmp r0, #0	@ 000e1df0 0028
.org 0xe1df2
	beq.n 0xe1e02	@ 000e1df2 06d0
.org 0xe1df4
	adds r2, r4, #0	@ 000e1df4 221c
.org 0xe1df6
	adds r2, #73	@ 000e1df6 4932
.org 0xe1df8
	ldrb r0, [r2, #0]	@ 000e1df8 1078
.org 0xe1dfa
	movs r1, #12	@ 000e1dfa 0c21
.org 0xe1dfc
	orrs r0, r1	@ 000e1dfc 0843
.org 0xe1dfe
	strb r0, [r2, #0]	@ 000e1dfe 1070
.org 0xe1e00
	b.n 0xe1e28	@ 000e1e00 12e0
.org 0xe1e02
	movs r0, #64	@ 000e1e02 4020
.org 0xe1e04
	ands r0, r1	@ 000e1e04 0840
.org 0xe1e06
	cmp r0, #0	@ 000e1e06 0028
.org 0xe1e08
	beq.n 0xe1e1e	@ 000e1e08 09d0
.org 0xe1e0a
	adds r2, r4, #0	@ 000e1e0a 221c
.org 0xe1e0c
	adds r2, #73	@ 000e1e0c 4932
.org 0xe1e0e
	ldrb r0, [r2, #0]	@ 000e1e0e 1078
.org 0xe1e10
	movs r1, #13	@ 000e1e10 0d21
.org 0xe1e12
	negs r1, r1	@ 000e1e12 4942
.org 0xe1e14
	ands r1, r0	@ 000e1e14 0140
.org 0xe1e16
	movs r0, #4	@ 000e1e16 0420
.org 0xe1e18
	orrs r1, r0	@ 000e1e18 0143
.org 0xe1e1a
	strb r1, [r2, #0]	@ 000e1e1a 1170
.org 0xe1e1c
	b.n 0xe1e28	@ 000e1e1c 04e0
.org 0xe1e1e
	movs r0, #31	@ 000e1e1e 1f20
.org 0xe1e20
	ands r0, r1	@ 000e1e20 0840
.org 0xe1e22
	adds r1, r4, #0	@ 000e1e22 211c
.org 0xe1e24
	adds r1, #37	@ 000e1e24 2531
.org 0xe1e26
	strb r0, [r1, #0]	@ 000e1e26 0870
.org 0xe1e28
	movs r2, #0	@ 000e1e28 0022
.org 0xe1e2a
	ldrb r1, [r4, #10]	@ 000e1e2a a17a
.org 0xe1e2c
	movs r0, #239	@ 000e1e2c ef20
.org 0xe1e2e
	ands r0, r1	@ 000e1e2e 0840
.org 0xe1e30
	strb r0, [r4, #10]	@ 000e1e30 a072
.org 0xe1e32
	movs r3, #1	@ 000e1e32 0123
.org 0xe1e34
	adds r0, r4, #0	@ 000e1e34 201c
.org 0xe1e36
	adds r0, #76	@ 000e1e36 4c30
.org 0xe1e38
	strb r2, [r0, #0]	@ 000e1e38 0270
.org 0xe1e3a
	adds r2, r4, #0	@ 000e1e3a 221c
.org 0xe1e3c
	adds r2, #74	@ 000e1e3c 4a32
.org 0xe1e3e
	ldrb r1, [r2, #0]	@ 000e1e3e 1178
.org 0xe1e40
	movs r0, #17	@ 000e1e40 1120
.org 0xe1e42
	negs r0, r0	@ 000e1e42 4042
.org 0xe1e44
	ands r0, r1	@ 000e1e44 0840
.org 0xe1e46
	strb r0, [r2, #0]	@ 000e1e46 1070
.org 0xe1e48
	ldr r1, [pc, #24]	@ 000e1e48 0649
.org 0xe1e4a
	ldrb r0, [r4, #9]	@ 000e1e4a 607a
.org 0xe1e4c
	lsls r0, r0, #2	@ 000e1e4c 8000
.org 0xe1e4e
	adds r0, r0, r1	@ 000e1e4e 4018
.org 0xe1e50
	str r3, [r4, #12]	@ 000e1e50 e360
.org 0xe1e52
	ldr r0, [r0, #0]	@ 000e1e52 0068
.org 0xe1e54
	ldr r0, [r0, #4]	@ 000e1e54 4068
.org 0xe1e56
	str r0, [r4, #20]	@ 000e1e56 6061
.org 0xe1e58
	adds r0, r4, #0	@ 000e1e58 201c
.org 0xe1e5a
	bl 0xe1d94	@ 000e1e5a fff79bff
.org 0xe1e5e
	pop {r4}	@ 000e1e5e 10bc
.org 0xe1e60
	pop {r0}	@ 000e1e60 01bc
.org 0xe1e62
	bx r0	@ 000e1e62 0047
