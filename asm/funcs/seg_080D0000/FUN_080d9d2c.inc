@ FUN_080d9d2c  entry 0x080d9d2c  size 174
.thumb
.org 0xd9d2c
FUN_080d9d2c:
	push {r4, r5, lr}	@ 000d9d2c 30b5
.org 0xd9d2e
	adds r4, r0, #0	@ 000d9d2e 041c
.org 0xd9d30
	ldrb r5, [r4, #17]	@ 000d9d30 657c
.org 0xd9d32
	ldr r1, [pc, #168]	@ 000d9d32 2a49
.org 0xd9d34
	ldrb r0, [r4, #9]	@ 000d9d34 607a
.org 0xd9d36
	lsls r0, r0, #2	@ 000d9d36 8000
.org 0xd9d38
	adds r0, r0, r1	@ 000d9d38 4018
.org 0xd9d3a
	movs r1, #1	@ 000d9d3a 0121
.org 0xd9d3c
	str r1, [r4, #12]	@ 000d9d3c e160
.org 0xd9d3e
	ldr r0, [r0, #0]	@ 000d9d3e 0068
.org 0xd9d40
	ldr r0, [r0, #4]	@ 000d9d40 4068
.org 0xd9d42
	str r0, [r4, #20]	@ 000d9d42 6061
.org 0xd9d44
	ldrb r1, [r4, #10]	@ 000d9d44 a17a
.org 0xd9d46
	movs r0, #1	@ 000d9d46 0120
.org 0xd9d48
	orrs r0, r1	@ 000d9d48 0843
.org 0xd9d4a
	movs r1, #2	@ 000d9d4a 0221
.org 0xd9d4c
	orrs r0, r1	@ 000d9d4c 0843
.org 0xd9d4e
	strb r0, [r4, #10]	@ 000d9d4e a072
.org 0xd9d50
	ldr r2, [pc, #140]	@ 000d9d50 234a
.org 0xd9d52
	ldr r1, [r2, #0]	@ 000d9d52 1168
.org 0xd9d54
	ldr r0, [pc, #140]	@ 000d9d54 2348
.org 0xd9d56
	muls r0, r1	@ 000d9d56 4843
.org 0xd9d58
	ldr r1, [pc, #140]	@ 000d9d58 2349
.org 0xd9d5a
	adds r0, r0, r1	@ 000d9d5a 4018
.org 0xd9d5c
	lsls r0, r0, #1	@ 000d9d5c 4000
.org 0xd9d5e
	lsrs r1, r0, #1	@ 000d9d5e 4108
.org 0xd9d60
	str r1, [r2, #0]	@ 000d9d60 1160
.org 0xd9d62
	lsrs r0, r0, #17	@ 000d9d62 400c
.org 0xd9d64
	movs r1, #3	@ 000d9d64 0321
.org 0xd9d66
	ands r0, r1	@ 000d9d66 0840
.org 0xd9d68
	adds r0, #16	@ 000d9d68 1030
.org 0xd9d6a
	adds r2, r0, #0	@ 000d9d6a 021c
.org 0xd9d6c
	ldr r0, [r4, #92]	@ 000d9d6c e06d
.org 0xd9d6e
	movs r1, #255	@ 000d9d6e ff21
.org 0xd9d70
	cmp r0, #0	@ 000d9d70 0028
.org 0xd9d72
	ble.n 0xd9d76	@ 000d9d72 00dd
.org 0xd9d74
	movs r1, #1	@ 000d9d74 0121
.org 0xd9d76
	movs r0, #24	@ 000d9d76 1820
.org 0xd9d78
	strb r0, [r4, #18]	@ 000d9d78 a074
.org 0xd9d7a
	lsls r0, r1, #24	@ 000d9d7a 0806
.org 0xd9d7c
	asrs r0, r0, #24	@ 000d9d7c 0016
.org 0xd9d7e
	muls r0, r2	@ 000d9d7e 5043
.org 0xd9d80
	adds r1, r4, #0	@ 000d9d80 211c
.org 0xd9d82
	adds r1, #117	@ 000d9d82 7531
.org 0xd9d84
	strb r0, [r1, #0]	@ 000d9d84 0870
.org 0xd9d86
	adds r0, r4, #0	@ 000d9d86 201c
.org 0xd9d88
	adds r0, #116	@ 000d9d88 7430
.org 0xd9d8a
	strb r5, [r0, #0]	@ 000d9d8a 0570
.org 0xd9d8c
	adds r0, r4, #0	@ 000d9d8c 201c
.org 0xd9d8e
	bl 0x1cd28	@ 000d9d8e 42f7cbff
.org 0xd9d92
	adds r0, r4, #0	@ 000d9d92 201c
.org 0xd9d94
	adds r0, #36	@ 000d9d94 2430
.org 0xd9d96
	strb r5, [r0, #0]	@ 000d9d96 0570
.org 0xd9d98
	movs r2, #0	@ 000d9d98 0022
.org 0xd9d9a
	ldrb r1, [r4, #10]	@ 000d9d9a a17a
.org 0xd9d9c
	movs r0, #239	@ 000d9d9c ef20
.org 0xd9d9e
	ands r0, r1	@ 000d9d9e 0840
.org 0xd9da0
	strb r0, [r4, #10]	@ 000d9da0 a072
.org 0xd9da2
	adds r0, r4, #0	@ 000d9da2 201c
.org 0xd9da4
	adds r0, #76	@ 000d9da4 4c30
.org 0xd9da6
	strb r2, [r0, #0]	@ 000d9da6 0270
.org 0xd9da8
	adds r2, r4, #0	@ 000d9da8 221c
.org 0xd9daa
	adds r2, #74	@ 000d9daa 4a32
.org 0xd9dac
	ldrb r1, [r2, #0]	@ 000d9dac 1178
.org 0xd9dae
	movs r0, #17	@ 000d9dae 1120
.org 0xd9db0
	negs r0, r0	@ 000d9db0 4042
.org 0xd9db2
	ands r0, r1	@ 000d9db2 0840
.org 0xd9db4
	strb r0, [r2, #0]	@ 000d9db4 1070
.org 0xd9db6
	adds r1, r4, #0	@ 000d9db6 211c
.org 0xd9db8
	adds r1, #37	@ 000d9db8 2531
.org 0xd9dba
	movs r0, #2	@ 000d9dba 0220
.org 0xd9dbc
	strb r0, [r1, #0]	@ 000d9dbc 0870
.org 0xd9dbe
	movs r1, #144	@ 000d9dbe 9021
.org 0xd9dc0
	lsls r1, r1, #6	@ 000d9dc0 8901
.org 0xd9dc2
	adds r0, r4, #0	@ 000d9dc2 201c
.org 0xd9dc4
	bl 0x1cf00	@ 000d9dc4 43f79cf8
.org 0xd9dc8
	adds r0, r4, #0	@ 000d9dc8 201c
.org 0xd9dca
	bl 0x1cff0	@ 000d9dca 43f711f9
.org 0xd9dce
	adds r0, r4, #0	@ 000d9dce 201c
.org 0xd9dd0
	bl 0xd9dec	@ 000d9dd0 00f00cf8
.org 0xd9dd4
	pop {r4, r5}	@ 000d9dd4 30bc
.org 0xd9dd6
	pop {r0}	@ 000d9dd6 01bc
.org 0xd9dd8
	bx r0	@ 000d9dd8 0047
