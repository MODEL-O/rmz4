@ FUN_080b7d4c  entry 0x080b7d4c  size 156
.thumb
.org 0xb7d4c
FUN_080b7d4c:
	push {r4, r5, r6, lr}	@ 000b7d4c 70b5
.org 0xb7d4e
	mov r6, r8	@ 000b7d4e 4646
.org 0xb7d50
	push {r6}	@ 000b7d50 40b4
.org 0xb7d52
	adds r4, r0, #0	@ 000b7d52 041c
.org 0xb7d54
	bl 0x1cc9c	@ 000b7d54 64f7a2ff
.org 0xb7d58
	ldrb r1, [r4, #10]	@ 000b7d58 a17a
.org 0xb7d5a
	movs r0, #1	@ 000b7d5a 0120
.org 0xb7d5c
	orrs r0, r1	@ 000b7d5c 0843
.org 0xb7d5e
	movs r1, #2	@ 000b7d5e 0221
.org 0xb7d60
	orrs r0, r1	@ 000b7d60 0843
.org 0xb7d62
	strb r0, [r4, #10]	@ 000b7d62 a072
.org 0xb7d64
	adds r0, r4, #0	@ 000b7d64 201c
.org 0xb7d66
	bl 0x1ceec	@ 000b7d66 65f7c1f8
.org 0xb7d6a
	movs r1, #178	@ 000b7d6a b221
.org 0xb7d6c
	lsls r1, r1, #8	@ 000b7d6c 0902
.org 0xb7d6e
	adds r0, r4, #0	@ 000b7d6e 201c
.org 0xb7d70
	bl 0x1cf00	@ 000b7d70 65f7c6f8
.org 0xb7d74
	adds r0, r4, #0	@ 000b7d74 201c
.org 0xb7d76
	bl 0x1cff0	@ 000b7d76 65f73bf9
.org 0xb7d7a
	adds r1, r4, #0	@ 000b7d7a 211c
.org 0xb7d7c
	adds r1, #37	@ 000b7d7c 2531
.org 0xb7d7e
	movs r0, #23	@ 000b7d7e 1720
.org 0xb7d80
	strb r0, [r1, #0]	@ 000b7d80 0870
.org 0xb7d82
	movs r6, #0	@ 000b7d82 0026
.org 0xb7d84
	ldrb r1, [r4, #10]	@ 000b7d84 a17a
.org 0xb7d86
	movs r0, #239	@ 000b7d86 ef20
.org 0xb7d88
	ands r0, r1	@ 000b7d88 0840
.org 0xb7d8a
	strb r0, [r4, #10]	@ 000b7d8a a072
.org 0xb7d8c
	movs r0, #1	@ 000b7d8c 0120
.org 0xb7d8e
	mov r8, r0	@ 000b7d8e 8046
.org 0xb7d90
	adds r0, r4, #0	@ 000b7d90 201c
.org 0xb7d92
	adds r0, #76	@ 000b7d92 4c30
.org 0xb7d94
	strb r6, [r0, #0]	@ 000b7d94 0670
.org 0xb7d96
	adds r2, r4, #0	@ 000b7d96 221c
.org 0xb7d98
	adds r2, #74	@ 000b7d98 4a32
.org 0xb7d9a
	ldrb r1, [r2, #0]	@ 000b7d9a 1178
.org 0xb7d9c
	movs r0, #17	@ 000b7d9c 1120
.org 0xb7d9e
	negs r0, r0	@ 000b7d9e 4042
.org 0xb7da0
	ands r0, r1	@ 000b7da0 0840
.org 0xb7da2
	strb r0, [r2, #0]	@ 000b7da2 1070
.org 0xb7da4
	ldrb r1, [r4, #10]	@ 000b7da4 a17a
.org 0xb7da6
	movs r0, #4	@ 000b7da6 0420
.org 0xb7da8
	orrs r0, r1	@ 000b7da8 0843
.org 0xb7daa
	strb r0, [r4, #10]	@ 000b7daa a072
.org 0xb7dac
	adds r5, r4, #0	@ 000b7dac 251c
.org 0xb7dae
	adds r5, #116	@ 000b7dae 7435
.org 0xb7db0
	ldr r1, [pc, #52]	@ 000b7db0 0d49
.org 0xb7db2
	adds r2, #10	@ 000b7db2 0a32
.org 0xb7db4
	adds r0, r5, #0	@ 000b7db4 281c
.org 0xb7db6
	movs r3, #8	@ 000b7db6 0823
.org 0xb7db8
	bl 0x5760	@ 000b7db8 4df7d2fc
.org 0xb7dbc
	str r4, [r5, #44]	@ 000b7dbc ec62
.org 0xb7dbe
	ldr r0, [pc, #44]	@ 000b7dbe 0b48
.org 0xb7dc0
	str r0, [r5, #36]	@ 000b7dc0 6862
.org 0xb7dc2
	str r6, [r4, #84]	@ 000b7dc2 6665
.org 0xb7dc4
	str r6, [r4, #88]	@ 000b7dc4 a665
.org 0xb7dc6
	ldr r1, [pc, #40]	@ 000b7dc6 0a49
.org 0xb7dc8
	ldrb r0, [r4, #9]	@ 000b7dc8 607a
.org 0xb7dca
	lsls r0, r0, #2	@ 000b7dca 8000
.org 0xb7dcc
	adds r0, r0, r1	@ 000b7dcc 4018
.org 0xb7dce
	mov r1, r8	@ 000b7dce 4146
.org 0xb7dd0
	str r1, [r4, #12]	@ 000b7dd0 e160
.org 0xb7dd2
	ldr r0, [r0, #0]	@ 000b7dd2 0068
.org 0xb7dd4
	ldr r0, [r0, #4]	@ 000b7dd4 4068
.org 0xb7dd6
	str r0, [r4, #20]	@ 000b7dd6 6061
.org 0xb7dd8
	adds r0, r4, #0	@ 000b7dd8 201c
.org 0xb7dda
	bl 0xb7df4	@ 000b7dda 00f00bf8
.org 0xb7dde
	pop {r3}	@ 000b7dde 08bc
.org 0xb7de0
	mov r8, r3	@ 000b7de0 9846
.org 0xb7de2
	pop {r4, r5, r6}	@ 000b7de2 70bc
.org 0xb7de4
	pop {r0}	@ 000b7de4 01bc
.org 0xb7de6
	bx r0	@ 000b7de6 0047
