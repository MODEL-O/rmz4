@ FUN_08048db8  entry 0x08048db8  size 116
.thumb
.org 0x48db8
FUN_08048db8:
	push {r4, r5, r6, lr}	@ 00048db8 70b5
.org 0x48dba
	adds r4, r0, #0	@ 00048dba 041c
.org 0x48dbc
	ldr r1, [pc, #108]	@ 00048dbc 1b49
.org 0x48dbe
	ldrb r0, [r4, #9]	@ 00048dbe 607a
.org 0x48dc0
	lsls r0, r0, #2	@ 00048dc0 8000
.org 0x48dc2
	adds r0, r0, r1	@ 00048dc2 4018
.org 0x48dc4
	movs r1, #1	@ 00048dc4 0121
.org 0x48dc6
	str r1, [r4, #12]	@ 00048dc6 e160
.org 0x48dc8
	ldr r0, [r0, #0]	@ 00048dc8 0068
.org 0x48dca
	ldr r0, [r0, #4]	@ 00048dca 4068
.org 0x48dcc
	str r0, [r4, #20]	@ 00048dcc 6061
.org 0x48dce
	adds r0, r4, #0	@ 00048dce 201c
.org 0x48dd0
	bl 0x1cd28	@ 00048dd0 d3f7aaff
.org 0x48dd4
	adds r0, r4, #0	@ 00048dd4 201c
.org 0x48dd6
	bl 0x1ceec	@ 00048dd6 d4f789f8
.org 0x48dda
	ldrb r1, [r4, #10]	@ 00048dda a17a
.org 0x48ddc
	movs r0, #1	@ 00048ddc 0120
.org 0x48dde
	movs r6, #0	@ 00048dde 0026
.org 0x48de0
	orrs r0, r1	@ 00048de0 0843
.org 0x48de2
	movs r1, #2	@ 00048de2 0221
.org 0x48de4
	orrs r0, r1	@ 00048de4 0843
.org 0x48de6
	strb r0, [r4, #10]	@ 00048de6 a072
.org 0x48de8
	ldr r1, [pc, #68]	@ 00048de8 1149
.org 0x48dea
	adds r0, r4, #0	@ 00048dea 201c
.org 0x48dec
	bl 0x1cf00	@ 00048dec d4f788f8
.org 0x48df0
	ldrb r1, [r4, #10]	@ 00048df0 a17a
.org 0x48df2
	movs r0, #4	@ 00048df2 0420
.org 0x48df4
	orrs r0, r1	@ 00048df4 0843
.org 0x48df6
	strb r0, [r4, #10]	@ 00048df6 a072
.org 0x48df8
	adds r5, r4, #0	@ 00048df8 251c
.org 0x48dfa
	adds r5, #116	@ 00048dfa 7435
.org 0x48dfc
	ldr r1, [pc, #52]	@ 00048dfc 0d49
.org 0x48dfe
	adds r2, r4, #0	@ 00048dfe 221c
.org 0x48e00
	adds r2, #84	@ 00048e00 5432
.org 0x48e02
	adds r0, r5, #0	@ 00048e02 281c
.org 0x48e04
	movs r3, #8	@ 00048e04 0823
.org 0x48e06
	bl 0x5760	@ 00048e06 bcf7abfc
.org 0x48e0a
	str r4, [r5, #44]	@ 00048e0a ec62
.org 0x48e0c
	ldr r0, [pc, #40]	@ 00048e0c 0a48
.org 0x48e0e
	str r0, [r5, #36]	@ 00048e0e 6862
.org 0x48e10
	strb r6, [r4, #18]	@ 00048e10 a674
.org 0x48e12
	strb r6, [r4, #19]	@ 00048e12 e674
.org 0x48e14
	adds r0, r4, #0	@ 00048e14 201c
.org 0x48e16
	adds r0, #189	@ 00048e16 bd30
.org 0x48e18
	strb r6, [r0, #0]	@ 00048e18 0670
.org 0x48e1a
	movs r0, #71	@ 00048e1a 4720
.org 0x48e1c
	bl 0x2b10	@ 00048e1c b9f778fe
.org 0x48e20
	adds r0, r4, #0	@ 00048e20 201c
.org 0x48e22
	bl 0x48e3c	@ 00048e22 00f00bf8
.org 0x48e26
	pop {r4, r5, r6}	@ 00048e26 70bc
.org 0x48e28
	pop {r0}	@ 00048e28 01bc
.org 0x48e2a
	bx r0	@ 00048e2a 0047
