@ FUN_080a9d94  entry 0x080a9d94  size 188
.thumb
.org 0xa9d94
FUN_080a9d94:
	push {r4, r5, lr}	@ 000a9d94 30b5
.org 0xa9d96
	adds r4, r0, #0	@ 000a9d96 041c
.org 0xa9d98
	ldrb r5, [r4, #14]	@ 000a9d98 a57b
.org 0xa9d9a
	cmp r5, #0	@ 000a9d9a 002d
.org 0xa9d9c
	bne.n 0xa9dc4	@ 000a9d9c 12d1
.org 0xa9d9e
	adds r0, #188	@ 000a9d9e bc30
.org 0xa9da0
	ldr r2, [pc, #96]	@ 000a9da0 184a
.org 0xa9da2
	adds r1, r2, #0	@ 000a9da2 111c
.org 0xa9da4
	ldrb r0, [r0, #0]	@ 000a9da4 0078
.org 0xa9da6
	adds r1, r1, r0	@ 000a9da6 0918
.org 0xa9da8
	lsls r1, r1, #16	@ 000a9da8 0904
.org 0xa9daa
	lsrs r1, r1, #16	@ 000a9daa 090c
.org 0xa9dac
	adds r0, r4, #0	@ 000a9dac 201c
.org 0xa9dae
	bl 0x1cf00	@ 000a9dae 73f7a7f8
.org 0xa9db2
	adds r0, r4, #0	@ 000a9db2 201c
.org 0xa9db4
	adds r0, #181	@ 000a9db4 b530
.org 0xa9db6
	ldrb r0, [r0, #0]	@ 000a9db6 0078
.org 0xa9db8
	cmp r0, #2	@ 000a9db8 0228
.org 0xa9dba
	bne.n 0xa9dbe	@ 000a9dba 00d1
.org 0xa9dbc
	str r5, [r4, #96]	@ 000a9dbc 2566
.org 0xa9dbe
	ldrb r0, [r4, #14]	@ 000a9dbe a07b
.org 0xa9dc0
	adds r0, #1	@ 000a9dc0 0130
.org 0xa9dc2
	strb r0, [r4, #14]	@ 000a9dc2 a073
.org 0xa9dc4
	adds r0, r4, #0	@ 000a9dc4 201c
.org 0xa9dc6
	bl 0xa9b2c	@ 000a9dc6 fff7b1fe
.org 0xa9dca
	lsls r0, r0, #24	@ 000a9dca 0006
.org 0xa9dcc
	cmp r0, #0	@ 000a9dcc 0028
.org 0xa9dce
	bne.n 0xa9dd8	@ 000a9dce 03d1
.org 0xa9dd0
	ldr r0, [r4, #84]	@ 000a9dd0 606d
.org 0xa9dd2
	ldr r1, [r4, #92]	@ 000a9dd2 e16d
.org 0xa9dd4
	adds r0, r0, r1	@ 000a9dd4 4018
.org 0xa9dd6
	str r0, [r4, #84]	@ 000a9dd6 6065
.org 0xa9dd8
	adds r0, r4, #0	@ 000a9dd8 201c
.org 0xa9dda
	adds r0, #181	@ 000a9dda b530
.org 0xa9ddc
	ldrb r0, [r0, #0]	@ 000a9ddc 0078
.org 0xa9dde
	cmp r0, #2	@ 000a9dde 0228
.org 0xa9de0
	beq.n 0xa9e08	@ 000a9de0 12d0
.org 0xa9de2
	adds r0, r4, #0	@ 000a9de2 201c
.org 0xa9de4
	bl 0xa9b7c	@ 000a9de4 fff7cafe
.org 0xa9de8
	lsls r0, r0, #24	@ 000a9de8 0006
.org 0xa9dea
	lsrs r0, r0, #24	@ 000a9dea 000e
.org 0xa9dec
	cmp r0, #1	@ 000a9dec 0128
.org 0xa9dee
	bne.n 0xa9df4	@ 000a9dee 01d1
.org 0xa9df0
	movs r0, #0	@ 000a9df0 0020
.org 0xa9df2
	str r0, [r4, #96]	@ 000a9df2 2066
.org 0xa9df4
	ldr r0, [r4, #88]	@ 000a9df4 a06d
.org 0xa9df6
	ldr r1, [r4, #96]	@ 000a9df6 216e
.org 0xa9df8
	adds r0, r0, r1	@ 000a9df8 4018
.org 0xa9dfa
	str r0, [r4, #88]	@ 000a9dfa a065
.org 0xa9dfc
	adds r1, #64	@ 000a9dfc 4031
.org 0xa9dfe
	str r1, [r4, #96]	@ 000a9dfe 2166
.org 0xa9e00
	b.n 0xa9e36	@ 000a9e00 19e0
.org 0xa9e02
	.byte 0x00	@ 000a9e02 data
.org 0xa9e03
	.byte 0x00	@ 000a9e03 data
.org 0xa9e04
	.byte 0x02,0x9a,0x00,0x00	@ 000a9e04 data
.org 0xa9e08
	ldrb r1, [r4, #18]	@ 000a9e08 a17c
.org 0xa9e0a
	movs r0, #20	@ 000a9e0a 1420
.org 0xa9e0c
	subs r0, r0, r1	@ 000a9e0c 401a
.org 0xa9e0e
	cmp r0, #10	@ 000a9e0e 0a28
.org 0xa9e10
	ble.n 0xa9e36	@ 000a9e10 11dd
.org 0xa9e12
	movs r0, #1	@ 000a9e12 0120
.org 0xa9e14
	ands r1, r0	@ 000a9e14 0140
.org 0xa9e16
	cmp r1, #0	@ 000a9e16 0029
.org 0xa9e18
	bne.n 0xa9e36	@ 000a9e18 0dd1
.org 0xa9e1a
	adds r2, r4, #0	@ 000a9e1a 221c
.org 0xa9e1c
	adds r2, #184	@ 000a9e1c b832
.org 0xa9e1e
	ldr r0, [r4, #84]	@ 000a9e1e 606d
.org 0xa9e20
	ldr r1, [r2, #0]	@ 000a9e20 1168
.org 0xa9e22
	adds r0, r0, r1	@ 000a9e22 4018
.org 0xa9e24
	str r0, [r4, #84]	@ 000a9e24 6065
.org 0xa9e26
	ldr r0, [r2, #0]	@ 000a9e26 1068
.org 0xa9e28
	lsls r0, r0, #8	@ 000a9e28 0002
.org 0xa9e2a
	negs r0, r0	@ 000a9e2a 4042
.org 0xa9e2c
	cmp r0, #0	@ 000a9e2c 0028
.org 0xa9e2e
	bge.n 0xa9e32	@ 000a9e2e 00da
.org 0xa9e30
	adds r0, #255	@ 000a9e30 ff30
.org 0xa9e32
	asrs r0, r0, #8	@ 000a9e32 0012
.org 0xa9e34
	str r0, [r2, #0]	@ 000a9e34 1060
.org 0xa9e36
	ldr r0, [r4, #96]	@ 000a9e36 206e
.org 0xa9e38
	cmp r0, #0	@ 000a9e38 0028
.org 0xa9e3a
	bgt.n 0xa9e48	@ 000a9e3a 05dc
.org 0xa9e3c
	adds r0, r4, #0	@ 000a9e3c 201c
.org 0xa9e3e
	bl 0xa9cac	@ 000a9e3e fff735ff
.org 0xa9e42
	lsls r0, r0, #24	@ 000a9e42 0006
.org 0xa9e44
	cmp r0, #0	@ 000a9e44 0028
.org 0xa9e46
	beq.n 0xa9e50	@ 000a9e46 03d0
.org 0xa9e48
	movs r1, #0	@ 000a9e48 0021
.org 0xa9e4a
	movs r0, #3	@ 000a9e4a 0320
.org 0xa9e4c
	strb r0, [r4, #13]	@ 000a9e4c 6073
.org 0xa9e4e
	strb r1, [r4, #14]	@ 000a9e4e a173
