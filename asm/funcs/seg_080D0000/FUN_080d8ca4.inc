@ FUN_080d8ca4  entry 0x080d8ca4  size 394
.thumb
.org 0xd8ca4
FUN_080d8ca4:
	push {r4, r5, r6, r7, lr}	@ 000d8ca4 f0b5
.org 0xd8ca6
	mov r7, r8	@ 000d8ca6 4746
.org 0xd8ca8
	push {r7}	@ 000d8ca8 80b4
.org 0xd8caa
	adds r7, r0, #0	@ 000d8caa 071c
.org 0xd8cac
	ldrb r0, [r7, #18]	@ 000d8cac b87c
.org 0xd8cae
	subs r0, #1	@ 000d8cae 0138
.org 0xd8cb0
	strb r0, [r7, #18]	@ 000d8cb0 b874
.org 0xd8cb2
	lsls r0, r0, #24	@ 000d8cb2 0006
.org 0xd8cb4
	cmp r0, #0	@ 000d8cb4 0028
.org 0xd8cb6
	beq.n 0xd8cd8	@ 000d8cb6 0fd0
.org 0xd8cb8
	ldr r0, [r7, #84]	@ 000d8cb8 786d
.org 0xd8cba
	ldr r1, [r7, #88]	@ 000d8cba b96d
.org 0xd8cbc
	bl 0x7c7c	@ 000d8cbc 2ef7deff
.org 0xd8cc0
	lsls r0, r0, #16	@ 000d8cc0 0004
.org 0xd8cc2
	lsrs r1, r0, #16	@ 000d8cc2 010c
.org 0xd8cc4
	cmp r1, #0	@ 000d8cc4 0029
.org 0xd8cc6
	beq.n 0xd8cfc	@ 000d8cc6 19d0
.org 0xd8cc8
	movs r0, #128	@ 000d8cc8 8020
.org 0xd8cca
	lsls r0, r0, #8	@ 000d8cca 0002
.org 0xd8ccc
	ands r0, r1	@ 000d8ccc 0840
.org 0xd8cce
	cmp r0, #0	@ 000d8cce 0028
.org 0xd8cd0
	bne.n 0xd8cfc	@ 000d8cd0 14d1
.org 0xd8cd2
	ldr r0, [r7, #96]	@ 000d8cd2 386e
.org 0xd8cd4
	cmp r0, #0	@ 000d8cd4 0028
.org 0xd8cd6
	ble.n 0xd8cfc	@ 000d8cd6 11dd
.org 0xd8cd8
	adds r1, r7, #0	@ 000d8cd8 391c
.org 0xd8cda
	adds r1, #84	@ 000d8cda 5431
.org 0xd8cdc
	movs r0, #2	@ 000d8cdc 0220
.org 0xd8cde
	bl 0xd0c88	@ 000d8cde f7f7d3ff
.org 0xd8ce2
	ldr r1, [pc, #20]	@ 000d8ce2 0549
.org 0xd8ce4
	ldrb r0, [r7, #9]	@ 000d8ce4 787a
.org 0xd8ce6
	lsls r0, r0, #2	@ 000d8ce6 8000
.org 0xd8ce8
	adds r0, r0, r1	@ 000d8ce8 4018
.org 0xd8cea
	movs r1, #2	@ 000d8cea 0221
.org 0xd8cec
	str r1, [r7, #12]	@ 000d8cec f960
.org 0xd8cee
	ldr r0, [r0, #0]	@ 000d8cee 0068
.org 0xd8cf0
	ldr r0, [r0, #8]	@ 000d8cf0 8068
.org 0xd8cf2
	str r0, [r7, #20]	@ 000d8cf2 7861
.org 0xd8cf4
	b.n 0xd8e4e	@ 000d8cf4 abe0
.org 0xd8cf6
	.byte 0x00	@ 000d8cf6 data
.org 0xd8cf7
	.byte 0x00	@ 000d8cf7 data
.org 0xd8cf8
	.byte 0x64,0x6f,0x86,0x08	@ 000d8cf8 data
.org 0xd8cfc
	ldrb r0, [r7, #14]	@ 000d8cfc b87b
.org 0xd8cfe
	cmp r0, #0	@ 000d8cfe 0028
.org 0xd8d00
	beq.n 0xd8d08	@ 000d8d00 02d0
.org 0xd8d02
	cmp r0, #1	@ 000d8d02 0128
.org 0xd8d04
	beq.n 0xd8df6	@ 000d8d04 77d0
.org 0xd8d06
	b.n 0xd8e4e	@ 000d8d06 a2e0
.org 0xd8d08
	ldrb r0, [r7, #16]	@ 000d8d08 387c
.org 0xd8d0a
	cmp r0, #0	@ 000d8d0a 0028
.org 0xd8d0c
	beq.n 0xd8d8a	@ 000d8d0c 3dd0
.org 0xd8d0e
	ldr r4, [pc, #100]	@ 000d8d0e 194c
.org 0xd8d10
	ldr r0, [r7, #116]	@ 000d8d10 786f
.org 0xd8d12
	mov r8, r0	@ 000d8d12 8046
.org 0xd8d14
	movs r1, #3	@ 000d8d14 0321
.org 0xd8d16
	bl 0x129050	@ 000d8d16 50f09bf9
.org 0xd8d1a
	lsls r0, r0, #2	@ 000d8d1a 8000
.org 0xd8d1c
	adds r0, r0, r4	@ 000d8d1c 0019
.org 0xd8d1e
	ldr r0, [r0, #0]	@ 000d8d1e 0068
.org 0xd8d20
	ldr r2, [r7, #120]	@ 000d8d20 ba6f
.org 0xd8d22
	lsls r2, r2, #3	@ 000d8d22 d200
.org 0xd8d24
	adds r2, r2, r0	@ 000d8d24 1218
.org 0xd8d26
	ldr r1, [pc, #80]	@ 000d8d26 1449
.org 0xd8d28
	ldr r0, [r1, #0]	@ 000d8d28 0868
.org 0xd8d2a
	ldr r3, [pc, #80]	@ 000d8d2a 144b
.org 0xd8d2c
	mov ip, r3	@ 000d8d2c 9c46
.org 0xd8d2e
	mov r1, ip	@ 000d8d2e 6146
.org 0xd8d30
	muls r1, r0	@ 000d8d30 4143
.org 0xd8d32
	ldr r5, [pc, #76]	@ 000d8d32 134d
.org 0xd8d34
	adds r1, r1, r5	@ 000d8d34 4919
.org 0xd8d36
	lsls r1, r1, #1	@ 000d8d36 4900
.org 0xd8d38
	lsrs r4, r1, #1	@ 000d8d38 4c08
.org 0xd8d3a
	ldr r0, [pc, #60]	@ 000d8d3a 0f48
.org 0xd8d3c
	str r4, [r0, #0]	@ 000d8d3c 0460
.org 0xd8d3e
	lsrs r1, r1, #17	@ 000d8d3e 490c
.org 0xd8d40
	movs r0, #31	@ 000d8d40 1f20
.org 0xd8d42
	ands r1, r0	@ 000d8d42 0140
.org 0xd8d44
	ldr r0, [r2, #4]	@ 000d8d44 5068
.org 0xd8d46
	adds r0, r0, r1	@ 000d8d46 4018
.org 0xd8d48
	str r0, [r7, #96]	@ 000d8d48 3866
.org 0xd8d4a
	ldr r6, [r2, #0]	@ 000d8d4a 1668
.org 0xd8d4c
	mov r0, ip	@ 000d8d4c 6046
.org 0xd8d4e
	muls r0, r4	@ 000d8d4e 6043
.org 0xd8d50
	adds r0, r0, r5	@ 000d8d50 4019
.org 0xd8d52
	lsls r0, r0, #1	@ 000d8d52 4000
.org 0xd8d54
	lsrs r1, r0, #1	@ 000d8d54 4108
.org 0xd8d56
	ldr r2, [pc, #32]	@ 000d8d56 084a
.org 0xd8d58
	str r1, [r2, #0]	@ 000d8d58 1160
.org 0xd8d5a
	lsrs r2, r0, #17	@ 000d8d5a 420c
.org 0xd8d5c
	movs r0, #63	@ 000d8d5c 3f20
.org 0xd8d5e
	ands r2, r0	@ 000d8d5e 0240
.org 0xd8d60
	ldrb r1, [r7, #10]	@ 000d8d60 b97a
.org 0xd8d62
	movs r0, #16	@ 000d8d62 1020
.org 0xd8d64
	ands r0, r1	@ 000d8d64 0840
.org 0xd8d66
	mov r1, r8	@ 000d8d66 4146
.org 0xd8d68
	cmp r0, #0	@ 000d8d68 0028
.org 0xd8d6a
	bne.n 0xd8d84	@ 000d8d6a 0bd1
.org 0xd8d6c
	negs r0, r6	@ 000d8d6c 7042
.org 0xd8d6e
	subs r0, r0, r2	@ 000d8d6e 801a
.org 0xd8d70
	b.n 0xd8d86	@ 000d8d70 09e0
.org 0xd8d72
	.byte 0x00	@ 000d8d72 data
.org 0xd8d73
	.byte 0x00	@ 000d8d73 data
.org 0xd8d74
	.byte 0x58,0x81,0x86,0x08	@ 000d8d74 data
.org 0xd8d78
	.byte 0x38,0xdc,0x02,0x02	@ 000d8d78 data
.org 0xd8d7c
	.byte 0xfd,0x43,0x03,0x00	@ 000d8d7c data
.org 0xd8d80
	.byte 0xc3,0x9e,0x26,0x00	@ 000d8d80 data
.org 0xd8d84
	subs r0, r6, r2	@ 000d8d84 b01a
.org 0xd8d86
	str r0, [r7, #92]	@ 000d8d86 f865
.org 0xd8d88
	b.n 0xd8de2	@ 000d8d88 2be0
.org 0xd8d8a
	ldr r4, [pc, #132]	@ 000d8d8a 214c
.org 0xd8d8c
	ldr r3, [r7, #116]	@ 000d8d8c 7b6f
.org 0xd8d8e
	mov r8, r3	@ 000d8d8e 9846
.org 0xd8d90
	mov r0, r8	@ 000d8d90 4046
.org 0xd8d92
	movs r1, #3	@ 000d8d92 0321
.org 0xd8d94
	bl 0x129050	@ 000d8d94 50f05cf9
.org 0xd8d98
	lsls r0, r0, #2	@ 000d8d98 8000
.org 0xd8d9a
	adds r0, r0, r4	@ 000d8d9a 0019
.org 0xd8d9c
	ldr r0, [r0, #0]	@ 000d8d9c 0068
.org 0xd8d9e
	ldr r2, [r7, #120]	@ 000d8d9e ba6f
.org 0xd8da0
	lsls r2, r2, #3	@ 000d8da0 d200
.org 0xd8da2
	adds r2, r2, r0	@ 000d8da2 1218
.org 0xd8da4
	ldr r1, [pc, #108]	@ 000d8da4 1b49
.org 0xd8da6
	ldr r0, [r1, #0]	@ 000d8da6 0868
.org 0xd8da8
	ldr r3, [pc, #108]	@ 000d8da8 1b4b
.org 0xd8daa
	adds r1, r0, #0	@ 000d8daa 011c
.org 0xd8dac
	muls r1, r3	@ 000d8dac 5943
.org 0xd8dae
	ldr r5, [pc, #108]	@ 000d8dae 1b4d
.org 0xd8db0
	adds r1, r1, r5	@ 000d8db0 4919
.org 0xd8db2
	lsls r1, r1, #1	@ 000d8db2 4900
.org 0xd8db4
	lsrs r4, r1, #1	@ 000d8db4 4c08
.org 0xd8db6
	ldr r0, [pc, #92]	@ 000d8db6 1748
.org 0xd8db8
	str r4, [r0, #0]	@ 000d8db8 0460
.org 0xd8dba
	lsrs r1, r1, #17	@ 000d8dba 490c
.org 0xd8dbc
	movs r0, #31	@ 000d8dbc 1f20
.org 0xd8dbe
	ands r1, r0	@ 000d8dbe 0140
.org 0xd8dc0
	ldr r0, [r2, #4]	@ 000d8dc0 5068
.org 0xd8dc2
	adds r0, r0, r1	@ 000d8dc2 4018
.org 0xd8dc4
	str r0, [r7, #96]	@ 000d8dc4 3866
.org 0xd8dc6
	adds r1, r4, #0	@ 000d8dc6 211c
.org 0xd8dc8
	muls r1, r3	@ 000d8dc8 5943
.org 0xd8dca
	adds r1, r1, r5	@ 000d8dca 4919
.org 0xd8dcc
	lsls r1, r1, #1	@ 000d8dcc 4900
.org 0xd8dce
	lsrs r0, r1, #1	@ 000d8dce 4808
.org 0xd8dd0
	ldr r3, [pc, #64]	@ 000d8dd0 104b
.org 0xd8dd2
	str r0, [r3, #0]	@ 000d8dd2 1860
.org 0xd8dd4
	lsrs r1, r1, #17	@ 000d8dd4 490c
.org 0xd8dd6
	movs r0, #63	@ 000d8dd6 3f20
.org 0xd8dd8
	ands r1, r0	@ 000d8dd8 0140
.org 0xd8dda
	ldr r0, [r2, #0]	@ 000d8dda 1068
.org 0xd8ddc
	subs r0, r0, r1	@ 000d8ddc 401a
.org 0xd8dde
	str r0, [r7, #92]	@ 000d8dde f865
.org 0xd8de0
	mov r1, r8	@ 000d8de0 4146
.org 0xd8de2
	lsls r1, r1, #16	@ 000d8de2 0904
.org 0xd8de4
	lsrs r1, r1, #16	@ 000d8de4 090c
.org 0xd8de6
	adds r0, r7, #0	@ 000d8de6 381c
.org 0xd8de8
	bl 0x1cf00	@ 000d8de8 44f78af8
.org 0xd8dec
	movs r0, #0	@ 000d8dec 0020
.org 0xd8dee
	strb r0, [r7, #19]	@ 000d8dee f874
.org 0xd8df0
	ldrb r0, [r7, #14]	@ 000d8df0 b87b
.org 0xd8df2
	adds r0, #1	@ 000d8df2 0130
.org 0xd8df4
	strb r0, [r7, #14]	@ 000d8df4 b873
.org 0xd8df6
	ldrb r0, [r7, #19]	@ 000d8df6 f87c
.org 0xd8df8
	adds r0, #1	@ 000d8df8 0130
.org 0xd8dfa
	strb r0, [r7, #19]	@ 000d8dfa f874
.org 0xd8dfc
	movs r1, #255	@ 000d8dfc ff21
.org 0xd8dfe
	ands r0, r1	@ 000d8dfe 0840
.org 0xd8e00
	movs r1, #1	@ 000d8e00 0121
.org 0xd8e02
	ands r0, r1	@ 000d8e02 0840
.org 0xd8e04
	cmp r0, #0	@ 000d8e04 0028
.org 0xd8e06
	beq.n 0xd8e20	@ 000d8e06 0bd0
.org 0xd8e08
	ldrb r0, [r7, #10]	@ 000d8e08 b87a
.org 0xd8e0a
	orrs r0, r1	@ 000d8e0a 0843
.org 0xd8e0c
	b.n 0xd8e26	@ 000d8e0c 0be0
.org 0xd8e0e
	.byte 0x00	@ 000d8e0e data
.org 0xd8e0f
	.byte 0x00	@ 000d8e0f data
.org 0xd8e10
	.byte 0xec,0x80,0x86,0x08	@ 000d8e10 data
.org 0xd8e14
	.byte 0x38,0xdc,0x02,0x02	@ 000d8e14 data
.org 0xd8e18
	.byte 0xfd,0x43,0x03,0x00	@ 000d8e18 data
.org 0xd8e1c
	.byte 0xc3,0x9e,0x26,0x00	@ 000d8e1c data
.org 0xd8e20
	ldrb r1, [r7, #10]	@ 000d8e20 b97a
.org 0xd8e22
	movs r0, #254	@ 000d8e22 fe20
.org 0xd8e24
	ands r0, r1	@ 000d8e24 0840
.org 0xd8e26
	strb r0, [r7, #10]	@ 000d8e26 b872
.org 0xd8e28
	ldr r0, [r7, #96]	@ 000d8e28 386e
.org 0xd8e2a
	adds r0, #32	@ 000d8e2a 2030
.org 0xd8e2c
	str r0, [r7, #96]	@ 000d8e2c 3866
