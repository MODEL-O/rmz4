@ FUN_080a8d84  entry 0x080a8d84  size 186
.thumb
.org 0xa8d84
FUN_080a8d84:
	push {r4, r5, r6, lr}	@ 000a8d84 70b5
.org 0xa8d86
	adds r4, r0, #0	@ 000a8d86 041c
.org 0xa8d88
	ldr r1, [r4, #40]	@ 000a8d88 a16a
.org 0xa8d8a
	ldr r6, [r4, #44]	@ 000a8d8a e66a
.org 0xa8d8c
	ldr r0, [r1, #88]	@ 000a8d8c 886d
.org 0xa8d8e
	ldr r3, [pc, #20]	@ 000a8d8e 054b
.org 0xa8d90
	adds r2, r0, r3	@ 000a8d90 c218
.org 0xa8d92
	ldrb r0, [r4, #17]	@ 000a8d92 607c
.org 0xa8d94
	cmp r0, #0	@ 000a8d94 0028
.org 0xa8d96
	beq.n 0xa8da8	@ 000a8d96 07d0
.org 0xa8d98
	ldr r0, [r1, #84]	@ 000a8d98 486d
.org 0xa8d9a
	movs r1, #212	@ 000a8d9a d421
.org 0xa8d9c
	lsls r1, r1, #6	@ 000a8d9c 8901
.org 0xa8d9e
	adds r5, r0, r1	@ 000a8d9e 4518
.org 0xa8da0
	b.n 0xa8dae	@ 000a8da0 05e0
.org 0xa8da2
	.byte 0x00	@ 000a8da2 data
.org 0xa8da3
	.byte 0x00	@ 000a8da3 data
.org 0xa8da4
	.byte 0x00,0xf3,0xff,0xff	@ 000a8da4 data
.org 0xa8da8
	ldr r0, [r1, #84]	@ 000a8da8 486d
.org 0xa8daa
	ldr r3, [pc, #64]	@ 000a8daa 104b
.org 0xa8dac
	adds r5, r0, r3	@ 000a8dac c518
.org 0xa8dae
	ldr r0, [r6, #84]	@ 000a8dae 706d
.org 0xa8db0
	subs r0, r0, r5	@ 000a8db0 401b
.org 0xa8db2
	asrs r0, r0, #1	@ 000a8db2 4010
.org 0xa8db4
	adds r0, r5, r0	@ 000a8db4 2818
.org 0xa8db6
	str r0, [r4, #84]	@ 000a8db6 6065
.org 0xa8db8
	ldr r0, [r6, #88]	@ 000a8db8 b06d
.org 0xa8dba
	subs r0, r0, r2	@ 000a8dba 801a
.org 0xa8dbc
	asrs r0, r0, #1	@ 000a8dbc 4010
.org 0xa8dbe
	adds r0, r2, r0	@ 000a8dbe 1018
.org 0xa8dc0
	str r0, [r4, #88]	@ 000a8dc0 a065
.org 0xa8dc2
	ldr r0, [r6, #84]	@ 000a8dc2 706d
.org 0xa8dc4
	cmp r0, r5	@ 000a8dc4 a842
.org 0xa8dc6
	ble.n 0xa8df0	@ 000a8dc6 13dd
.org 0xa8dc8
	movs r2, #1	@ 000a8dc8 0122
.org 0xa8dca
	ldrb r1, [r4, #10]	@ 000a8dca a17a
.org 0xa8dcc
	movs r0, #16	@ 000a8dcc 1020
.org 0xa8dce
	orrs r0, r1	@ 000a8dce 0843
.org 0xa8dd0
	strb r0, [r4, #10]	@ 000a8dd0 a072
.org 0xa8dd2
	adds r0, r4, #0	@ 000a8dd2 201c
.org 0xa8dd4
	adds r0, #76	@ 000a8dd4 4c30
.org 0xa8dd6
	strb r2, [r0, #0]	@ 000a8dd6 0270
.org 0xa8dd8
	adds r3, r4, #0	@ 000a8dd8 231c
.org 0xa8dda
	adds r3, #74	@ 000a8dda 4a33
.org 0xa8ddc
	movs r2, #16	@ 000a8ddc 1022
.org 0xa8dde
	ldrb r1, [r3, #0]	@ 000a8dde 1978
.org 0xa8de0
	movs r0, #17	@ 000a8de0 1120
.org 0xa8de2
	negs r0, r0	@ 000a8de2 4042
.org 0xa8de4
	ands r0, r1	@ 000a8de4 0840
.org 0xa8de6
	orrs r0, r2	@ 000a8de6 1043
.org 0xa8de8
	strb r0, [r3, #0]	@ 000a8de8 1870
.org 0xa8dea
	b.n 0xa8e0e	@ 000a8dea 10e0
.org 0xa8dec
	.byte 0x00,0xcc,0xff,0xff	@ 000a8dec data
.org 0xa8df0
	movs r2, #0	@ 000a8df0 0022
.org 0xa8df2
	ldrb r1, [r4, #10]	@ 000a8df2 a17a
.org 0xa8df4
	movs r0, #239	@ 000a8df4 ef20
.org 0xa8df6
	ands r0, r1	@ 000a8df6 0840
.org 0xa8df8
	strb r0, [r4, #10]	@ 000a8df8 a072
.org 0xa8dfa
	adds r0, r4, #0	@ 000a8dfa 201c
.org 0xa8dfc
	adds r0, #76	@ 000a8dfc 4c30
.org 0xa8dfe
	strb r2, [r0, #0]	@ 000a8dfe 0270
.org 0xa8e00
	adds r2, r4, #0	@ 000a8e00 221c
.org 0xa8e02
	adds r2, #74	@ 000a8e02 4a32
.org 0xa8e04
	ldrb r1, [r2, #0]	@ 000a8e04 1178
.org 0xa8e06
	movs r0, #17	@ 000a8e06 1120
.org 0xa8e08
	negs r0, r0	@ 000a8e08 4042
.org 0xa8e0a
	ands r0, r1	@ 000a8e0a 0840
.org 0xa8e0c
	strb r0, [r2, #0]	@ 000a8e0c 1070
.org 0xa8e0e
	ldr r0, [r6, #84]	@ 000a8e0e 706d
.org 0xa8e10
	subs r1, r0, r5	@ 000a8e10 411b
.org 0xa8e12
	cmp r1, #0	@ 000a8e12 0029
.org 0xa8e14
	blt.n 0xa8e20	@ 000a8e14 04db
.org 0xa8e16
	movs r0, #128	@ 000a8e16 8020
.org 0xa8e18
	lsls r0, r0, #4	@ 000a8e18 0001
.org 0xa8e1a
	cmp r1, r0	@ 000a8e1a 8142
.org 0xa8e1c
	bgt.n 0xa8e2a	@ 000a8e1c 05dc
.org 0xa8e1e
	b.n 0xa8e38	@ 000a8e1e 0be0
.org 0xa8e20
	subs r1, r5, r0	@ 000a8e20 291a
.org 0xa8e22
	movs r0, #128	@ 000a8e22 8020
.org 0xa8e24
	lsls r0, r0, #4	@ 000a8e24 0001
.org 0xa8e26
	cmp r1, r0	@ 000a8e26 8142
.org 0xa8e28
	ble.n 0xa8e38	@ 000a8e28 06dd
.org 0xa8e2a
	ldr r1, [pc, #8]	@ 000a8e2a 0249
.org 0xa8e2c
	adds r0, r4, #0	@ 000a8e2c 201c
.org 0xa8e2e
	bl 0x1cf00	@ 000a8e2e 74f767f8
.org 0xa8e32
	b.n 0xa8e40	@ 000a8e32 05e0
.org 0xa8e34
	.byte 0x06,0x8d,0x00,0x00	@ 000a8e34 data
.org 0xa8e38
	ldr r1, [pc, #16]	@ 000a8e38 0449
.org 0xa8e3a
	adds r0, r4, #0	@ 000a8e3a 201c
.org 0xa8e3c
	bl 0x1cf00	@ 000a8e3c 74f760f8
