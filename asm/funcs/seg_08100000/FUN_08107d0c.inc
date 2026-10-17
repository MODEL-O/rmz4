@ FUN_08107d0c  entry 0x08107d0c  size 272
.thumb
.org 0x107d0c
FUN_08107d0c:
	push {r4, r5, r6, lr}	@ 00107d0c 70b5
.org 0x107d0e
	adds r1, r0, #0	@ 00107d0e 011c
.org 0x107d10
	ldr r2, [r1, #20]	@ 00107d10 4a69
.org 0x107d12
	movs r6, #1	@ 00107d12 0126
.org 0x107d14
	adds r0, r2, #0	@ 00107d14 101c
.org 0x107d16
	ands r0, r6	@ 00107d16 3040
.org 0x107d18
	cmp r0, #0	@ 00107d18 0028
.org 0x107d1a
	bne.n 0x107d1e	@ 00107d1a 00d1
.org 0x107d1c
	b.n 0x107e32	@ 00107d1c 89e0
.org 0x107d1e
	ldr r0, [r1, #12]	@ 00107d1e c868
.org 0x107d20
	ldr r5, [r0, #44]	@ 00107d20 c56a
.org 0x107d22
	ldr r4, [r1, #44]	@ 00107d22 cc6a
.org 0x107d24
	movs r3, #128	@ 00107d24 8023
.org 0x107d26
	lsls r3, r3, #10	@ 00107d26 9b02
.org 0x107d28
	ands r3, r2	@ 00107d28 1340
.org 0x107d2a
	cmp r3, #0	@ 00107d2a 002b
.org 0x107d2c
	beq.n 0x107d90	@ 00107d2c 30d0
.org 0x107d2e
	ldr r0, [pc, #84]	@ 00107d2e 1548
.org 0x107d30
	ldr r3, [r0, #0]	@ 00107d30 0368
.org 0x107d32
	cmp r3, #0	@ 00107d32 002b
.org 0x107d34
	bne.n 0x107d38	@ 00107d34 00d1
.org 0x107d36
	b.n 0x107e32	@ 00107d36 7ce0
.org 0x107d38
	ldr r1, [pc, #76]	@ 00107d38 1349
.org 0x107d3a
	ldrb r0, [r4, #17]	@ 00107d3a 607c
.org 0x107d3c
	adds r0, r0, r1	@ 00107d3c 4018
.org 0x107d3e
	ldrb r2, [r0, #0]	@ 00107d3e 0278
.org 0x107d40
	adds r0, r3, #0	@ 00107d40 181c
.org 0x107d42
	movs r1, #6	@ 00107d42 0621
.org 0x107d44
	bl 0x3a578	@ 00107d44 32f718fc
.org 0x107d48
	lsls r0, r0, #24	@ 00107d48 0006
.org 0x107d4a
	cmp r0, #0	@ 00107d4a 0028
.org 0x107d4c
	beq.n 0x107e32	@ 00107d4c 71d0
.org 0x107d4e
	adds r0, r4, #0	@ 00107d4e 201c
.org 0x107d50
	adds r0, #180	@ 00107d50 b430
.org 0x107d52
	movs r2, #0	@ 00107d52 0022
.org 0x107d54
	strb r6, [r0, #0]	@ 00107d54 0670
.org 0x107d56
	ldr r1, [pc, #52]	@ 00107d56 0d49
.org 0x107d58
	ldrb r0, [r4, #9]	@ 00107d58 607a
.org 0x107d5a
	lsls r0, r0, #2	@ 00107d5a 8000
.org 0x107d5c
	adds r0, r0, r1	@ 00107d5c 4018
.org 0x107d5e
	movs r1, #2	@ 00107d5e 0221
.org 0x107d60
	str r1, [r4, #12]	@ 00107d60 e160
.org 0x107d62
	ldr r0, [r0, #0]	@ 00107d62 0068
.org 0x107d64
	ldr r0, [r0, #8]	@ 00107d64 8068
.org 0x107d66
	str r0, [r4, #20]	@ 00107d66 6061
.org 0x107d68
	strb r2, [r4, #14]	@ 00107d68 a273
.org 0x107d6a
	adds r0, r4, #0	@ 00107d6a 201c
.org 0x107d6c
	adds r0, #140	@ 00107d6c 8c30
.org 0x107d6e
	str r2, [r0, #0]	@ 00107d6e 0260
.org 0x107d70
	adds r0, #4	@ 00107d70 0430
.org 0x107d72
	str r2, [r0, #0]	@ 00107d72 0260
.org 0x107d74
	adds r0, #4	@ 00107d74 0430
.org 0x107d76
	strb r2, [r0, #0]	@ 00107d76 0270
.org 0x107d78
	ldrb r1, [r4, #10]	@ 00107d78 a17a
.org 0x107d7a
	movs r0, #251	@ 00107d7a fb20
.org 0x107d7c
	ands r0, r1	@ 00107d7c 0840
.org 0x107d7e
	strb r0, [r4, #10]	@ 00107d7e a072
.org 0x107d80
	b.n 0x107e32	@ 00107d80 57e0
.org 0x107d82
	.byte 0x00	@ 00107d82 data
.org 0x107d83
	.byte 0x00	@ 00107d83 data
.org 0x107d84
	.byte 0xf0,0xdb,0x02,0x02	@ 00107d84 data
.org 0x107d88
	.byte 0x4b,0xc4,0x86,0x08	@ 00107d88 data
.org 0x107d8c
	.byte 0xfc,0x92,0x86,0x08	@ 00107d8c data
.org 0x107d90
	movs r2, #8	@ 00107d90 0822
.org 0x107d92
	ldrsb r2, [r5, r2]	@ 00107d92 aa56
.org 0x107d94
	cmp r2, #1	@ 00107d94 012a
.org 0x107d96
	bne.n 0x107e32	@ 00107d96 4cd1
.org 0x107d98
	ldr r0, [r4, #44]	@ 00107d98 e06a
.org 0x107d9a
	ldr r6, [pc, #104]	@ 00107d9a 1a4e
.org 0x107d9c
	adds r0, r0, r6	@ 00107d9c 8019
.org 0x107d9e
	str r2, [r0, #84]	@ 00107d9e 4265
.org 0x107da0
	movs r1, #255	@ 00107da0 ff21
.org 0x107da2
	str r1, [r0, #104]	@ 00107da2 8166
.org 0x107da4
	ldr r1, [pc, #96]	@ 00107da4 1849
.org 0x107da6
	ldrb r0, [r4, #17]	@ 00107da6 607c
.org 0x107da8
	adds r0, r0, r1	@ 00107da8 4018
.org 0x107daa
	ldrb r1, [r5, #9]	@ 00107daa 697a
.org 0x107dac
	ldrb r0, [r0, #0]	@ 00107dac 0078
.org 0x107dae
	cmp r1, r0	@ 00107dae 8142
.org 0x107db0
	bne.n 0x107e32	@ 00107db0 3fd1
.org 0x107db2
	ldr r1, [pc, #88]	@ 00107db2 1649
.org 0x107db4
	ldrb r0, [r4, #9]	@ 00107db4 607a
.org 0x107db6
	lsls r0, r0, #2	@ 00107db6 8000
.org 0x107db8
	adds r0, r0, r1	@ 00107db8 4018
.org 0x107dba
	movs r1, #2	@ 00107dba 0221
.org 0x107dbc
	str r1, [r4, #12]	@ 00107dbc e160
.org 0x107dbe
	ldr r0, [r0, #0]	@ 00107dbe 0068
.org 0x107dc0
	ldr r0, [r0, #8]	@ 00107dc0 8068
.org 0x107dc2
	str r0, [r4, #20]	@ 00107dc2 6061
.org 0x107dc4
	adds r0, r4, #0	@ 00107dc4 201c
.org 0x107dc6
	adds r0, #140	@ 00107dc6 8c30
.org 0x107dc8
	str r3, [r0, #0]	@ 00107dc8 0360
.org 0x107dca
	adds r0, #4	@ 00107dca 0430
.org 0x107dcc
	str r3, [r0, #0]	@ 00107dcc 0360
.org 0x107dce
	adds r0, #4	@ 00107dce 0430
.org 0x107dd0
	strb r3, [r0, #0]	@ 00107dd0 0370
.org 0x107dd2
	ldrb r1, [r4, #10]	@ 00107dd2 a17a
.org 0x107dd4
	movs r0, #251	@ 00107dd4 fb20
.org 0x107dd6
	ands r0, r1	@ 00107dd6 0840
.org 0x107dd8
	strb r0, [r4, #10]	@ 00107dd8 a072
.org 0x107dda
	strb r3, [r4, #14]	@ 00107dda a373
.org 0x107ddc
	adds r0, r4, #0	@ 00107ddc 201c
.org 0x107dde
	adds r0, #183	@ 00107dde b730
.org 0x107de0
	strb r3, [r0, #0]	@ 00107de0 0370
.org 0x107de2
	ldrb r1, [r4, #16]	@ 00107de2 217c
.org 0x107de4
	adds r3, r0, #0	@ 00107de4 031c
.org 0x107de6
	cmp r1, #0	@ 00107de6 0029
.org 0x107de8
	bne.n 0x107e10	@ 00107de8 12d1
.org 0x107dea
	ldr r0, [r4, #44]	@ 00107dea e06a
.org 0x107dec
	adds r1, r0, r6	@ 00107dec 8119
.org 0x107dee
	adds r0, r4, #0	@ 00107dee 201c
.org 0x107df0
	adds r0, #181	@ 00107df0 b530
.org 0x107df2
	ldrb r0, [r0, #0]	@ 00107df2 0078
.org 0x107df4
	str r0, [r1, #76]	@ 00107df4 c864
.org 0x107df6
	cmp r0, #0	@ 00107df6 0028
.org 0x107df8
	bne.n 0x107dfc	@ 00107df8 00d1
.org 0x107dfa
	str r2, [r1, #76]	@ 00107dfa ca64
.org 0x107dfc
	str r2, [r1, #68]	@ 00107dfc 4a64
.org 0x107dfe
	str r2, [r1, #108]	@ 00107dfe ca66
.org 0x107e00
	b.n 0x107e26	@ 00107e00 11e0
.org 0x107e02
	.byte 0x00	@ 00107e02 data
.org 0x107e03
	.byte 0x00	@ 00107e03 data
.org 0x107e04
	.byte 0xcc,0x0d,0x00,0x00	@ 00107e04 data
.org 0x107e08
	.byte 0x50,0xc4,0x86,0x08	@ 00107e08 data
.org 0x107e0c
	.byte 0xfc,0x92,0x86,0x08	@ 00107e0c data
.org 0x107e10
	ldr r0, [r4, #44]	@ 00107e10 e06a
.org 0x107e12
	adds r1, r0, r6	@ 00107e12 8119
.org 0x107e14
	adds r0, r4, #0	@ 00107e14 201c
.org 0x107e16
	adds r0, #181	@ 00107e16 b530
.org 0x107e18
	ldrb r0, [r0, #0]	@ 00107e18 0078
.org 0x107e1a
	str r0, [r1, #80]	@ 00107e1a 0865
