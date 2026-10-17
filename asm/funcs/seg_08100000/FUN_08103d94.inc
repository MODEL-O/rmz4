@ FUN_08103d94  entry 0x08103d94  size 168
.thumb
.org 0x103d94
FUN_08103d94:
	push {r4, r5, r6, lr}	@ 00103d94 70b5
.org 0x103d96
	mov r6, r8	@ 00103d96 4646
.org 0x103d98
	push {r6}	@ 00103d98 40b4
.org 0x103d9a
	adds r4, r0, #0	@ 00103d9a 041c
.org 0x103d9c
	ldrb r1, [r4, #10]	@ 00103d9c a17a
.org 0x103d9e
	movs r0, #1	@ 00103d9e 0120
.org 0x103da0
	movs r6, #0	@ 00103da0 0026
.org 0x103da2
	orrs r0, r1	@ 00103da2 0843
.org 0x103da4
	strb r0, [r4, #10]	@ 00103da4 a072
.org 0x103da6
	adds r0, r4, #0	@ 00103da6 201c
.org 0x103da8
	bl 0x1cc9c	@ 00103da8 18f778ff
.org 0x103dac
	ldrb r2, [r4, #10]	@ 00103dac a27a
.org 0x103dae
	movs r0, #2	@ 00103dae 0220
.org 0x103db0
	orrs r2, r0	@ 00103db0 0243
.org 0x103db2
	ldrb r0, [r4, #11]	@ 00103db2 e07a
.org 0x103db4
	movs r1, #8	@ 00103db4 0821
.org 0x103db6
	orrs r0, r1	@ 00103db6 0843
.org 0x103db8
	strb r0, [r4, #11]	@ 00103db8 e072
.org 0x103dba
	ldr r0, [pc, #128]	@ 00103dba 2048
.org 0x103dbc
	str r0, [r4, #48]	@ 00103dbc 2063
.org 0x103dbe
	movs r0, #1	@ 00103dbe 0120
.org 0x103dc0
	mov r8, r0	@ 00103dc0 8046
.org 0x103dc2
	mov r1, r8	@ 00103dc2 4146
.org 0x103dc4
	strh r1, [r4, #38]	@ 00103dc4 e184
.org 0x103dc6
	movs r0, #4	@ 00103dc6 0420
.org 0x103dc8
	orrs r2, r0	@ 00103dc8 0243
.org 0x103dca
	strb r2, [r4, #10]	@ 00103dca a272
.org 0x103dcc
	adds r5, r4, #0	@ 00103dcc 251c
.org 0x103dce
	adds r5, #116	@ 00103dce 7435
.org 0x103dd0
	ldr r1, [pc, #108]	@ 00103dd0 1b49
.org 0x103dd2
	adds r2, r4, #0	@ 00103dd2 221c
.org 0x103dd4
	adds r2, #84	@ 00103dd4 5432
.org 0x103dd6
	adds r0, r5, #0	@ 00103dd6 281c
.org 0x103dd8
	movs r3, #0	@ 00103dd8 0023
.org 0x103dda
	bl 0x5760	@ 00103dda 01f7c1fc
.org 0x103dde
	str r4, [r5, #44]	@ 00103dde ec62
.org 0x103de0
	str r6, [r5, #36]	@ 00103de0 6e62
.org 0x103de2
	ldr r0, [r4, #84]	@ 00103de2 606d
.org 0x103de4
	str r0, [r4, #100]	@ 00103de4 6066
.org 0x103de6
	str r6, [r4, #104]	@ 00103de6 a666
.org 0x103de8
	ldr r2, [pc, #88]	@ 00103de8 164a
.org 0x103dea
	ldrb r0, [r4, #17]	@ 00103dea 607c
.org 0x103dec
	lsls r0, r0, #1	@ 00103dec 4000
.org 0x103dee
	adds r0, r0, r2	@ 00103dee 8018
.org 0x103df0
	ldrh r0, [r0, #0]	@ 00103df0 0088
.org 0x103df2
	lsls r0, r0, #8	@ 00103df2 0002
.org 0x103df4
	ldr r1, [r4, #88]	@ 00103df4 a16d
.org 0x103df6
	subs r1, r1, r0	@ 00103df6 091a
.org 0x103df8
	adds r1, #1	@ 00103df8 0131
.org 0x103dfa
	str r1, [r4, #104]	@ 00103dfa a166
.org 0x103dfc
	ldrb r0, [r4, #17]	@ 00103dfc 607c
.org 0x103dfe
	lsls r0, r0, #1	@ 00103dfe 4000
.org 0x103e00
	adds r0, r0, r2	@ 00103e00 8018
.org 0x103e02
	ldrh r0, [r0, #0]	@ 00103e02 0088
.org 0x103e04
	lsls r0, r0, #8	@ 00103e04 0002
.org 0x103e06
	adds r1, r1, r0	@ 00103e06 0918
.org 0x103e08
	str r1, [r4, #88]	@ 00103e08 a165
.org 0x103e0a
	ldr r1, [pc, #60]	@ 00103e0a 0f49
.org 0x103e0c
	adds r0, r4, #0	@ 00103e0c 201c
.org 0x103e0e
	bl 0x1cf00	@ 00103e0e 19f777f8
.org 0x103e12
	adds r1, r4, #0	@ 00103e12 211c
.org 0x103e14
	adds r1, #180	@ 00103e14 b431
.org 0x103e16
	ldr r0, [pc, #52]	@ 00103e16 0d48
.org 0x103e18
	strh r0, [r1, #0]	@ 00103e18 0880
.org 0x103e1a
	ldr r1, [pc, #52]	@ 00103e1a 0d49
.org 0x103e1c
	ldrb r0, [r4, #9]	@ 00103e1c 607a
.org 0x103e1e
	lsls r0, r0, #2	@ 00103e1e 8000
.org 0x103e20
	adds r0, r0, r1	@ 00103e20 4018
.org 0x103e22
	mov r1, r8	@ 00103e22 4146
.org 0x103e24
	str r1, [r4, #12]	@ 00103e24 e160
.org 0x103e26
	ldr r0, [r0, #0]	@ 00103e26 0068
.org 0x103e28
	ldr r0, [r0, #4]	@ 00103e28 4068
.org 0x103e2a
	str r0, [r4, #20]	@ 00103e2a 6061
.org 0x103e2c
	adds r0, r4, #0	@ 00103e2c 201c
.org 0x103e2e
	bl 0x103e54	@ 00103e2e 00f011f8
.org 0x103e32
	pop {r3}	@ 00103e32 08bc
.org 0x103e34
	mov r8, r3	@ 00103e34 9846
.org 0x103e36
	pop {r4, r5, r6}	@ 00103e36 70bc
.org 0x103e38
	pop {r0}	@ 00103e38 01bc
.org 0x103e3a
	bx r0	@ 00103e3a 0047
