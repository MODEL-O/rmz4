@ FUN_08025d10  entry 0x08025d10  size 400
.thumb
.org 0x25d10
FUN_08025d10:
	push {r4, r5, r6, r7, lr}	@ 00025d10 f0b5
.org 0x25d12
	mov r7, sl	@ 00025d12 5746
.org 0x25d14
	mov r6, r9	@ 00025d14 4e46
.org 0x25d16
	mov r5, r8	@ 00025d16 4546
.org 0x25d18
	push {r5, r6, r7}	@ 00025d18 e0b4
.org 0x25d1a
	sub sp, #44	@ 00025d1a 8bb0
.org 0x25d1c
	str r0, [sp, #32]	@ 00025d1c 0890
.org 0x25d1e
	ldr r4, [r0, #32]	@ 00025d1e 046a
.org 0x25d20
	movs r1, #190	@ 00025d20 be21
.org 0x25d22
	lsls r1, r1, #1	@ 00025d22 4900
.org 0x25d24
	adds r0, r0, r1	@ 00025d24 4018
.org 0x25d26
	mov r8, r0	@ 00025d26 8046
.org 0x25d28
	ldrb r6, [r0, #0]	@ 00025d28 0678
.org 0x25d2a
	cmp r6, #0	@ 00025d2a 002e
.org 0x25d2c
	beq.n 0x25d30	@ 00025d2c 00d0
.org 0x25d2e
	b.n 0x25e2c	@ 00025d2e 7de0
.org 0x25d30
	ldr r5, [pc, #104]	@ 00025d30 1a4d
.org 0x25d32
	ldrh r1, [r5, #8]	@ 00025d32 2989
.org 0x25d34
	movs r0, #1	@ 00025d34 0120
.org 0x25d36
	movs r2, #0	@ 00025d36 0022
.org 0x25d38
	mov sl, r2	@ 00025d38 9246
.org 0x25d3a
	orrs r0, r1	@ 00025d3a 0843
.org 0x25d3c
	strh r0, [r5, #8]	@ 00025d3c 2881
.org 0x25d3e
	ldr r7, [pc, #96]	@ 00025d3e 184f
.org 0x25d40
	ldrb r1, [r7, #4]	@ 00025d40 3979
.org 0x25d42
	movs r3, #247	@ 00025d42 f723
.org 0x25d44
	mov r9, r3	@ 00025d44 9946
.org 0x25d46
	mov r0, r9	@ 00025d46 4846
.org 0x25d48
	ands r0, r1	@ 00025d48 0840
.org 0x25d4a
	strb r0, [r7, #4]	@ 00025d4a 3871
.org 0x25d4c
	ldrb r4, [r5, #2]	@ 00025d4c ac78
.org 0x25d4e
	cmp r4, #0	@ 00025d4e 002c
.org 0x25d50
	bne.n 0x25dac	@ 00025d50 2cd1
.org 0x25d52
	ldrb r2, [r7, #13]	@ 00025d52 7a7b
.org 0x25d54
	movs r1, #251	@ 00025d54 fb21
.org 0x25d56
	adds r0, r1, #0	@ 00025d56 081c
.org 0x25d58
	ands r0, r2	@ 00025d58 1040
.org 0x25d5a
	mov r4, r9	@ 00025d5a 4c46
.org 0x25d5c
	ands r0, r4	@ 00025d5c 2040
.org 0x25d5e
	movs r4, #239	@ 00025d5e ef24
.org 0x25d60
	ands r0, r4	@ 00025d60 2040
.org 0x25d62
	movs r3, #223	@ 00025d62 df23
.org 0x25d64
	ands r0, r3	@ 00025d64 1840
.org 0x25d66
	strb r0, [r7, #13]	@ 00025d66 7873
.org 0x25d68
	ldr r2, [pc, #56]	@ 00025d68 0e4a
.org 0x25d6a
	ldrb r0, [r2, #9]	@ 00025d6a 507a
.org 0x25d6c
	ands r1, r0	@ 00025d6c 0140
.org 0x25d6e
	mov r0, r9	@ 00025d6e 4846
.org 0x25d70
	ands r1, r0	@ 00025d70 0140
.org 0x25d72
	ands r1, r4	@ 00025d72 2140
.org 0x25d74
	ands r1, r3	@ 00025d74 1940
.org 0x25d76
	strb r1, [r2, #9]	@ 00025d76 5172
.org 0x25d78
	strh r6, [r5, #10]	@ 00025d78 6e81
.org 0x25d7a
	adds r0, r5, #0	@ 00025d7a 281c
.org 0x25d7c
	adds r0, #16	@ 00025d7c 1030
.org 0x25d7e
	ldr r1, [pc, #40]	@ 00025d7e 0a49
.org 0x25d80
	ldr r1, [r1, #56]	@ 00025d80 896b
.org 0x25d82
	ldr r1, [r1, #44]	@ 00025d82 c96a
.org 0x25d84
	bl 0x275f0	@ 00025d84 01f034fc
.org 0x25d88
	movs r0, #2	@ 00025d88 0220
.org 0x25d8a
	bl 0x1f63c	@ 00025d8a f9f757fc
.org 0x25d8e
	movs r1, #196	@ 00025d8e c421
.org 0x25d90
	lsls r1, r1, #1	@ 00025d90 4900
.org 0x25d92
	adds r0, r5, r1	@ 00025d92 6818
.org 0x25d94
	mov r2, sl	@ 00025d94 5246
.org 0x25d96
	strb r2, [r0, #0]	@ 00025d96 0270
.org 0x25d98
	movs r0, #2	@ 00025d98 0220
.org 0x25d9a
	b.n 0x25e20	@ 00025d9a 41e0
.org 0x25d9c
	.byte 0x10,0xe9,0x02,0x02	@ 00025d9c data
.org 0x25da0
	.byte 0xb0,0xe8,0x02,0x02	@ 00025da0 data
.org 0x25da4
	.byte 0x80,0x58,0x03,0x02	@ 00025da4 data
.org 0x25da8
	.byte 0xf8,0x2c,0x84,0x08	@ 00025da8 data
.org 0x25dac
	cmp r4, #2	@ 00025dac 022c
.org 0x25dae
	bne.n 0x25dfc	@ 00025dae 25d1
.org 0x25db0
	movs r1, #196	@ 00025db0 c421
.org 0x25db2
	lsls r1, r1, #1	@ 00025db2 4900
.org 0x25db4
	adds r0, r5, r1	@ 00025db4 6818
.org 0x25db6
	ldrb r3, [r0, #0]	@ 00025db6 0378
.org 0x25db8
	adds r2, r3, #0	@ 00025db8 1a1c
.org 0x25dba
	adds r2, #74	@ 00025dba 4a32
.org 0x25dbc
	asrs r0, r2, #3	@ 00025dbc d010
.org 0x25dbe
	adds r1, r7, #4	@ 00025dbe 391d
.org 0x25dc0
	adds r0, r0, r1	@ 00025dc0 4018
.org 0x25dc2
	ldrb r0, [r0, #0]	@ 00025dc2 0078
.org 0x25dc4
	movs r1, #7	@ 00025dc4 0721
.org 0x25dc6
	ands r2, r1	@ 00025dc6 0a40
.org 0x25dc8
	asrs r0, r2	@ 00025dc8 1041
.org 0x25dca
	movs r1, #1	@ 00025dca 0121
.org 0x25dcc
	ands r0, r1	@ 00025dcc 0840
.org 0x25dce
	cmp r0, #0	@ 00025dce 0028
.org 0x25dd0
	beq.n 0x25dd6	@ 00025dd0 01d0
.org 0x25dd2
	adds r0, r3, #1	@ 00025dd2 581c
.org 0x25dd4
	strh r0, [r5, #10]	@ 00025dd4 6881
.org 0x25dd6
	adds r0, r5, #0	@ 00025dd6 281c
.org 0x25dd8
	adds r0, #16	@ 00025dd8 1030
.org 0x25dda
	ldr r2, [pc, #28]	@ 00025dda 074a
.org 0x25ddc
	ldrh r1, [r5, #10]	@ 00025ddc 6989
.org 0x25dde
	ldr r2, [r2, #56]	@ 00025dde 926b
.org 0x25de0
	lsls r1, r1, #2	@ 00025de0 8900
.org 0x25de2
	adds r1, r1, r2	@ 00025de2 8918
.org 0x25de4
	ldr r1, [r1, #8]	@ 00025de4 8968
.org 0x25de6
	bl 0x275f0	@ 00025de6 01f003fc
.org 0x25dea
	ldrb r1, [r7, #4]	@ 00025dea 3979
.org 0x25dec
	mov r0, r9	@ 00025dec 4846
.org 0x25dee
	ands r0, r1	@ 00025dee 0840
.org 0x25df0
	strb r0, [r7, #4]	@ 00025df0 3871
.org 0x25df2
	mov r2, r8	@ 00025df2 4246
.org 0x25df4
	strb r4, [r2, #0]	@ 00025df4 1470
.org 0x25df6
	b.n 0x26222	@ 00025df6 14e2
.org 0x25df8
	.byte 0xf8,0x2c,0x84,0x08	@ 00025df8 data
.org 0x25dfc
	cmp r4, #3	@ 00025dfc 032c
.org 0x25dfe
	beq.n 0x25e02	@ 00025dfe 00d0
.org 0x25e00
	b.n 0x26222	@ 00025e00 0fe2
.org 0x25e02
	adds r0, r5, #0	@ 00025e02 281c
.org 0x25e04
	adds r0, #16	@ 00025e04 1030
.org 0x25e06
	ldr r2, [pc, #32]	@ 00025e06 084a
.org 0x25e08
	ldrh r1, [r5, #10]	@ 00025e08 6989
.org 0x25e0a
	ldr r2, [r2, #56]	@ 00025e0a 926b
.org 0x25e0c
	lsls r1, r1, #2	@ 00025e0c 8900
.org 0x25e0e
	adds r1, r1, r2	@ 00025e0e 8918
.org 0x25e10
	ldr r1, [r1, #8]	@ 00025e10 8968
.org 0x25e12
	bl 0x275f0	@ 00025e12 01f0edfb
.org 0x25e16
	ldrb r1, [r7, #4]	@ 00025e16 3979
.org 0x25e18
	mov r0, r9	@ 00025e18 4846
.org 0x25e1a
	ands r0, r1	@ 00025e1a 0840
.org 0x25e1c
	strb r0, [r7, #4]	@ 00025e1c 3871
.org 0x25e1e
	movs r0, #4	@ 00025e1e 0420
.org 0x25e20
	mov r3, r8	@ 00025e20 4346
.org 0x25e22
	strb r0, [r3, #0]	@ 00025e22 1870
.org 0x25e24
	b.n 0x26222	@ 00025e24 fde1
.org 0x25e26
	.byte 0x00	@ 00025e26 data
.org 0x25e27
	.byte 0x00	@ 00025e27 data
.org 0x25e28
	.byte 0xf8,0x2c,0x84,0x08	@ 00025e28 data
.org 0x25e2c
	cmp r6, #2	@ 00025e2c 022e
.org 0x25e2e
	beq.n 0x25e32	@ 00025e2e 00d0
.org 0x25e30
	b.n 0x261c4	@ 00025e30 c8e1
.org 0x25e32
	ldr r5, [sp, #32]	@ 00025e32 089d
.org 0x25e34
	ldr r1, [pc, #20]	@ 00025e34 0549
.org 0x25e36
	adds r0, r5, r1	@ 00025e36 6818
.org 0x25e38
	ldrb r0, [r0, #0]	@ 00025e38 0078
.org 0x25e3a
	cmp r0, #4	@ 00025e3a 0428
.org 0x25e3c
	bls.n 0x25e40	@ 00025e3c 00d9
.org 0x25e3e
	b.n 0x26222	@ 00025e3e f0e1
.org 0x25e40
	lsls r0, r0, #2	@ 00025e40 8000
.org 0x25e42
	ldr r1, [pc, #12]	@ 00025e42 0349
.org 0x25e44
	adds r0, r0, r1	@ 00025e44 4018
.org 0x25e46
	ldr r0, [r0, #0]	@ 00025e46 0068
.org 0x25e48
	mov pc, r0	@ 00025e48 8746
.org 0x25e4a
	.byte 0x00	@ 00025e4a data
.org 0x25e4b
	.byte 0x00	@ 00025e4b data
.org 0x25e4c
	.byte 0x7d,0x01,0x00,0x00	@ 00025e4c data
.org 0x25e50
	.byte 0x54,0x5e,0x02,0x08	@ 00025e50 data
.org 0x25e54
	.byte 0x68,0x5e,0x02,0x08	@ 00025e54 data
.org 0x25e58
	.byte 0x4c,0x5f,0x02,0x08	@ 00025e58 data
.org 0x25e5c
	.byte 0xbc,0x5f,0x02,0x08	@ 00025e5c data
.org 0x25e60
	.byte 0x40,0x61,0x02,0x08	@ 00025e60 data
.org 0x25e64
	.byte 0x70,0x61,0x02,0x08	@ 00025e64 data
.org 0x25e68
	.byte 0x09	@ 00025e68 data
.org 0x25e69
	.byte 0x4a	@ 00025e69 data
.org 0x25e6a
	.byte 0x51	@ 00025e6a data
.org 0x25e6b
	.byte 0x7b	@ 00025e6b data
.org 0x25e6c
	.byte 0x04	@ 00025e6c data
.org 0x25e6d
	.byte 0x20	@ 00025e6d data
.org 0x25e6e
	.byte 0x08	@ 00025e6e data
.org 0x25e6f
	.byte 0x40	@ 00025e6f data
.org 0x25e70
	.byte 0x00	@ 00025e70 data
.org 0x25e71
	.byte 0x06	@ 00025e71 data
.org 0x25e72
	.byte 0x03	@ 00025e72 data
.org 0x25e73
	.byte 0x0e	@ 00025e73 data
.org 0x25e74
	.byte 0x16	@ 00025e74 data
.org 0x25e75
	.byte 0x1c	@ 00025e75 data
.org 0x25e76
	.byte 0x00	@ 00025e76 data
.org 0x25e77
	.byte 0x2b	@ 00025e77 data
.org 0x25e78
	.byte 0x10	@ 00025e78 data
.org 0x25e79
	.byte 0xd1	@ 00025e79 data
.org 0x25e7a
	.byte 0xa1	@ 00025e7a data
.org 0x25e7b
	.byte 0x6d	@ 00025e7b data
.org 0x25e7c
	.byte 0x05	@ 00025e7c data
.org 0x25e7d
	.byte 0x48	@ 00025e7d data
.org 0x25e7e
	.byte 0x81	@ 00025e7e data
.org 0x25e7f
	.byte 0x42	@ 00025e7f data
.org 0x25e80
	.byte 0x0c	@ 00025e80 data
.org 0x25e81
	.byte 0xdc	@ 00025e81 data
.org 0x25e82
	.byte 0x05	@ 00025e82 data
.org 0x25e83
	.byte 0x48	@ 00025e83 data
.org 0x25e84
	.byte 0xc4	@ 00025e84 data
.org 0x25e85
	.byte 0x22	@ 00025e85 data
.org 0x25e86
	.byte 0x52	@ 00025e86 data
.org 0x25e87
	.byte 0x00	@ 00025e87 data
.org 0x25e88
	.byte 0x80	@ 00025e88 data
.org 0x25e89
	.byte 0x18	@ 00025e89 data
.org 0x25e8a
	.byte 0x03	@ 00025e8a data
.org 0x25e8b
	.byte 0x70	@ 00025e8b data
.org 0x25e8c
	.byte 0x58	@ 00025e8c data
.org 0x25e8d
	.byte 0xe0	@ 00025e8d data
.org 0x25e8e
	.byte 0x00	@ 00025e8e data
.org 0x25e8f
	.byte 0x00	@ 00025e8f data
.org 0x25e90
	.byte 0xb0	@ 00025e90 data
.org 0x25e91
	.byte 0xe8	@ 00025e91 data
.org 0x25e92
	.byte 0x02	@ 00025e92 data
.org 0x25e93
	.byte 0x02	@ 00025e93 data
.org 0x25e94
	.byte 0xff	@ 00025e94 data
.org 0x25e95
	.byte 0x9f	@ 00025e95 data
.org 0x25e96
	.byte 0x00	@ 00025e96 data
.org 0x25e97
	.byte 0x00	@ 00025e97 data
.org 0x25e98
	.byte 0x10	@ 00025e98 data
.org 0x25e99
	.byte 0xe9	@ 00025e99 data
.org 0x25e9a
	.byte 0x02	@ 00025e9a data
.org 0x25e9b
	.byte 0x02	@ 00025e9b data
.org 0x25e9c
	.byte 0x71	@ 00025e9c data
.org 0x25e9d
	.byte 0x7b	@ 00025e9d data
.org 0x25e9e
	.byte 0x08	@ 00025e9e data
.org 0x25e9f
	.byte 0x20	@ 00025e9f data
