@ FUN_08023bd8  entry 0x08023bd8  size 910
.thumb
.org 0x23bd8
FUN_08023bd8:
	push {r4, r5, r6, r7, lr}	@ 00023bd8 f0b5
.org 0x23bda
	adds r4, r0, #0	@ 00023bda 041c
.org 0x23bdc
	ldr r3, [r4, #32]	@ 00023bdc 236a
.org 0x23bde
	movs r0, #190	@ 00023bde be20
.org 0x23be0
	lsls r0, r0, #1	@ 00023be0 4000
.org 0x23be2
	adds r6, r4, r0	@ 00023be2 2618
.org 0x23be4
	ldrb r0, [r6, #0]	@ 00023be4 3078
.org 0x23be6
	cmp r0, #0	@ 00023be6 0028
.org 0x23be8
	beq.n 0x23bec	@ 00023be8 00d0
.org 0x23bea
	b.n 0x23d04	@ 00023bea 8be0
.org 0x23bec
	ldr r5, [pc, #56]	@ 00023bec 0e4d
.org 0x23bee
	ldrh r0, [r5, #8]	@ 00023bee 2889
.org 0x23bf0
	movs r7, #1	@ 00023bf0 0127
.org 0x23bf2
	movs r3, #0	@ 00023bf2 0023
.org 0x23bf4
	orrs r0, r7	@ 00023bf4 3843
.org 0x23bf6
	strh r0, [r5, #8]	@ 00023bf6 2881
.org 0x23bf8
	ldr r2, [pc, #48]	@ 00023bf8 0c4a
.org 0x23bfa
	ldrb r1, [r2, #4]	@ 00023bfa 1179
.org 0x23bfc
	movs r0, #8	@ 00023bfc 0820
.org 0x23bfe
	orrs r0, r1	@ 00023bfe 0843
.org 0x23c00
	strb r0, [r2, #4]	@ 00023c00 1071
.org 0x23c02
	ldr r1, [pc, #44]	@ 00023c02 0b49
.org 0x23c04
	adds r0, r4, r1	@ 00023c04 6018
.org 0x23c06
	strb r3, [r0, #0]	@ 00023c06 0370
.org 0x23c08
	ldrb r4, [r5, #2]	@ 00023c08 ac78
.org 0x23c0a
	cmp r4, #0	@ 00023c0a 002c
.org 0x23c0c
	bne.n 0x23c38	@ 00023c0c 14d1
.org 0x23c0e
	adds r0, r5, #0	@ 00023c0e 281c
.org 0x23c10
	adds r0, #16	@ 00023c10 1030
.org 0x23c12
	ldr r1, [pc, #32]	@ 00023c12 0849
.org 0x23c14
	ldr r1, [r1, #36]	@ 00023c14 496a
.org 0x23c16
	ldr r1, [r1, #0]	@ 00023c16 0968
.org 0x23c18
	bl 0x275f0	@ 00023c18 03f0eafc
.org 0x23c1c
	movs r0, #1	@ 00023c1c 0120
.org 0x23c1e
	bl 0x1f63c	@ 00023c1e fbf70dfd
.org 0x23c22
	strb r7, [r6, #0]	@ 00023c22 3770
.org 0x23c24
	b.n 0x2401a	@ 00023c24 f9e1
.org 0x23c26
	.byte 0x00	@ 00023c26 data
.org 0x23c27
	.byte 0x00	@ 00023c27 data
.org 0x23c28
	.byte 0x10,0xe9,0x02,0x02	@ 00023c28 data
.org 0x23c2c
	.byte 0xb0,0xe8,0x02,0x02	@ 00023c2c data
.org 0x23c30
	.byte 0x7d,0x01,0x00,0x00	@ 00023c30 data
.org 0x23c34
	.byte 0xf8,0x2c,0x84,0x08	@ 00023c34 data
.org 0x23c38
	cmp r4, #1	@ 00023c38 012c
.org 0x23c3a
	bne.n 0x23c50	@ 00023c3a 09d1
.org 0x23c3c
	adds r0, r5, #0	@ 00023c3c 281c
.org 0x23c3e
	adds r0, #16	@ 00023c3e 1030
.org 0x23c40
	ldr r1, [pc, #8]	@ 00023c40 0249
.org 0x23c42
	ldr r1, [r1, #36]	@ 00023c42 496a
.org 0x23c44
	ldr r1, [r1, #4]	@ 00023c44 4968
.org 0x23c46
	bl 0x275f0	@ 00023c46 03f0d3fc
.org 0x23c4a
	b.n 0x23d08	@ 00023c4a 5de0
.org 0x23c4c
	.byte 0xf8,0x2c,0x84,0x08	@ 00023c4c data
.org 0x23c50
	cmp r4, #2	@ 00023c50 022c
.org 0x23c52
	bne.n 0x23c6c	@ 00023c52 0bd1
.org 0x23c54
	adds r0, r5, #0	@ 00023c54 281c
.org 0x23c56
	adds r0, #16	@ 00023c56 1030
.org 0x23c58
	ldr r1, [pc, #12]	@ 00023c58 0349
.org 0x23c5a
	ldr r1, [r1, #36]	@ 00023c5a 496a
.org 0x23c5c
	ldr r1, [r1, #8]	@ 00023c5c 8968
.org 0x23c5e
	bl 0x275f0	@ 00023c5e 03f0c7fc
.org 0x23c62
	strb r4, [r6, #0]	@ 00023c62 3470
.org 0x23c64
	b.n 0x2401a	@ 00023c64 d9e1
.org 0x23c66
	.byte 0x00	@ 00023c66 data
.org 0x23c67
	.byte 0x00	@ 00023c67 data
.org 0x23c68
	.byte 0xf8,0x2c,0x84,0x08	@ 00023c68 data
.org 0x23c6c
	cmp r4, #3	@ 00023c6c 032c
.org 0x23c6e
	bne.n 0x23c90	@ 00023c6e 0fd1
.org 0x23c70
	adds r0, r5, #0	@ 00023c70 281c
.org 0x23c72
	adds r0, #16	@ 00023c72 1030
.org 0x23c74
	ldr r1, [pc, #20]	@ 00023c74 0549
.org 0x23c76
	ldr r1, [r1, #36]	@ 00023c76 496a
.org 0x23c78
	ldr r1, [r1, #16]	@ 00023c78 0969
.org 0x23c7a
	bl 0x275f0	@ 00023c7a 03f0b9fc
.org 0x23c7e
	movs r0, #4	@ 00023c7e 0420
.org 0x23c80
	bl 0x1f63c	@ 00023c80 fbf7dcfc
.org 0x23c84
	movs r0, #4	@ 00023c84 0420
.org 0x23c86
	strb r0, [r6, #0]	@ 00023c86 3070
.org 0x23c88
	b.n 0x2401a	@ 00023c88 c7e1
.org 0x23c8a
	.byte 0x00	@ 00023c8a data
.org 0x23c8b
	.byte 0x00	@ 00023c8b data
.org 0x23c8c
	.byte 0xf8,0x2c,0x84,0x08	@ 00023c8c data
.org 0x23c90
	cmp r4, #4	@ 00023c90 042c
.org 0x23c92
	bne.n 0x23cac	@ 00023c92 0bd1
.org 0x23c94
	adds r0, r5, #0	@ 00023c94 281c
.org 0x23c96
	adds r0, #16	@ 00023c96 1030
.org 0x23c98
	ldr r1, [pc, #12]	@ 00023c98 0349
.org 0x23c9a
	ldr r1, [r1, #36]	@ 00023c9a 496a
.org 0x23c9c
	ldr r1, [r1, #24]	@ 00023c9c 8969
.org 0x23c9e
	bl 0x275f0	@ 00023c9e 03f0a7fc
.org 0x23ca2
	movs r0, #5	@ 00023ca2 0520
.org 0x23ca4
	strb r0, [r6, #0]	@ 00023ca4 3070
.org 0x23ca6
	b.n 0x2401a	@ 00023ca6 b8e1
.org 0x23ca8
	.byte 0xf8,0x2c,0x84,0x08	@ 00023ca8 data
.org 0x23cac
	cmp r4, #5	@ 00023cac 052c
.org 0x23cae
	bne.n 0x23cc8	@ 00023cae 0bd1
.org 0x23cb0
	adds r0, r5, #0	@ 00023cb0 281c
.org 0x23cb2
	adds r0, #16	@ 00023cb2 1030
.org 0x23cb4
	ldr r1, [pc, #12]	@ 00023cb4 0349
.org 0x23cb6
	ldr r1, [r1, #36]	@ 00023cb6 496a
.org 0x23cb8
	ldr r1, [r1, #32]	@ 00023cb8 096a
.org 0x23cba
	bl 0x275f0	@ 00023cba 03f099fc
.org 0x23cbe
	movs r0, #9	@ 00023cbe 0920
.org 0x23cc0
	strb r0, [r6, #0]	@ 00023cc0 3070
.org 0x23cc2
	b.n 0x2401a	@ 00023cc2 aae1
.org 0x23cc4
	.byte 0xf8,0x2c,0x84,0x08	@ 00023cc4 data
.org 0x23cc8
	cmp r4, #6	@ 00023cc8 062c
.org 0x23cca
	bne.n 0x23ce4	@ 00023cca 0bd1
.org 0x23ccc
	adds r0, r5, #0	@ 00023ccc 281c
.org 0x23cce
	adds r0, #16	@ 00023cce 1030
.org 0x23cd0
	ldr r1, [pc, #12]	@ 00023cd0 0349
.org 0x23cd2
	ldr r1, [r1, #36]	@ 00023cd2 496a
.org 0x23cd4
	ldr r1, [r1, #40]	@ 00023cd4 896a
.org 0x23cd6
	bl 0x275f0	@ 00023cd6 03f08bfc
.org 0x23cda
	movs r0, #11	@ 00023cda 0b20
.org 0x23cdc
	strb r0, [r6, #0]	@ 00023cdc 3070
.org 0x23cde
	b.n 0x2401a	@ 00023cde 9ce1
.org 0x23ce0
	.byte 0xf8,0x2c,0x84,0x08	@ 00023ce0 data
.org 0x23ce4
	cmp r4, #7	@ 00023ce4 072c
.org 0x23ce6
	beq.n 0x23cea	@ 00023ce6 00d0
.org 0x23ce8
	b.n 0x2401a	@ 00023ce8 97e1
.org 0x23cea
	adds r0, r5, #0	@ 00023cea 281c
.org 0x23cec
	adds r0, #16	@ 00023cec 1030
.org 0x23cee
	ldr r1, [pc, #16]	@ 00023cee 0449
.org 0x23cf0
	ldr r1, [r1, #36]	@ 00023cf0 496a
.org 0x23cf2
	ldr r1, [r1, #48]	@ 00023cf2 096b
.org 0x23cf4
	bl 0x275f0	@ 00023cf4 03f07cfc
.org 0x23cf8
	movs r0, #12	@ 00023cf8 0c20
.org 0x23cfa
	strb r0, [r6, #0]	@ 00023cfa 3070
.org 0x23cfc
	b.n 0x2401a	@ 00023cfc 8de1
.org 0x23cfe
	.byte 0x00	@ 00023cfe data
.org 0x23cff
	.byte 0x00	@ 00023cff data
.org 0x23d00
	.byte 0xf8,0x2c,0x84,0x08	@ 00023d00 data
.org 0x23d04
	cmp r0, #1	@ 00023d04 0128
.org 0x23d06
	bne.n 0x23d14	@ 00023d06 05d1
.org 0x23d08
	movs r0, #2	@ 00023d08 0220
.org 0x23d0a
	bl 0x1f63c	@ 00023d0a fbf797fc
.org 0x23d0e
	movs r0, #2	@ 00023d0e 0220
.org 0x23d10
	strb r0, [r6, #0]	@ 00023d10 3070
.org 0x23d12
	b.n 0x2401a	@ 00023d12 82e1
.org 0x23d14
	cmp r0, #2	@ 00023d14 0228
.org 0x23d16
	bne.n 0x23d2c	@ 00023d16 09d1
.org 0x23d18
	ldr r1, [r3, #84]	@ 00023d18 596d
.org 0x23d1a
	ldr r0, [pc, #12]	@ 00023d1a 0348
.org 0x23d1c
	cmp r1, r0	@ 00023d1c 8142
.org 0x23d1e
	ble.n 0x23d2c	@ 00023d1e 05dd
.org 0x23d20
	movs r0, #3	@ 00023d20 0320
.org 0x23d22
	strb r0, [r6, #0]	@ 00023d22 3070
.org 0x23d24
	b.n 0x2401a	@ 00023d24 79e1
.org 0x23d26
	.byte 0x00	@ 00023d26 data
.org 0x23d27
	.byte 0x00	@ 00023d27 data
.org 0x23d28
	.byte 0x00,0x50,0x19,0x00	@ 00023d28 data
.org 0x23d2c
	movs r0, #190	@ 00023d2c be20
.org 0x23d2e
	lsls r0, r0, #1	@ 00023d2e 4000
.org 0x23d30
	adds r5, r4, r0	@ 00023d30 2518
.org 0x23d32
	ldrb r0, [r5, #0]	@ 00023d32 2878
.org 0x23d34
	cmp r0, #3	@ 00023d34 0328
.org 0x23d36
	bne.n 0x23d70	@ 00023d36 1bd1
.org 0x23d38
	ldr r1, [r3, #84]	@ 00023d38 596d
.org 0x23d3a
	movs r0, #210	@ 00023d3a d220
.org 0x23d3c
	lsls r0, r0, #13	@ 00023d3c 4003
.org 0x23d3e
	cmp r1, r0	@ 00023d3e 8142
.org 0x23d40
	ble.n 0x23d70	@ 00023d40 16dd
.org 0x23d42
	ldr r0, [pc, #32]	@ 00023d42 0848
.org 0x23d44
	ldr r1, [pc, #32]	@ 00023d44 0849
.org 0x23d46
	ldr r1, [r1, #36]	@ 00023d46 496a
.org 0x23d48
	ldr r1, [r1, #12]	@ 00023d48 c968
.org 0x23d4a
	bl 0x275f0	@ 00023d4a 03f051fc
.org 0x23d4e
	movs r0, #4	@ 00023d4e 0420
.org 0x23d50
	bl 0x1f63c	@ 00023d50 fbf774fc
.org 0x23d54
	ldr r2, [pc, #20]	@ 00023d54 054a
.org 0x23d56
	ldrb r1, [r2, #4]	@ 00023d56 1179
.org 0x23d58
	movs r0, #8	@ 00023d58 0820
.org 0x23d5a
	orrs r0, r1	@ 00023d5a 0843
.org 0x23d5c
	strb r0, [r2, #4]	@ 00023d5c 1071
.org 0x23d5e
	movs r0, #5	@ 00023d5e 0520
.org 0x23d60
	b.n 0x24018	@ 00023d60 5ae1
.org 0x23d62
	.byte 0x00	@ 00023d62 data
.org 0x23d63
	.byte 0x00	@ 00023d63 data
.org 0x23d64
	.byte 0x20,0xe9,0x02,0x02	@ 00023d64 data
.org 0x23d68
	.byte 0xf8,0x2c,0x84,0x08	@ 00023d68 data
.org 0x23d6c
	.byte 0xb0,0xe8,0x02,0x02	@ 00023d6c data
.org 0x23d70
	movs r1, #190	@ 00023d70 be21
.org 0x23d72
	lsls r1, r1, #1	@ 00023d72 4900
.org 0x23d74
	adds r5, r4, r1	@ 00023d74 6518
.org 0x23d76
	ldrb r0, [r5, #0]	@ 00023d76 2878
.org 0x23d78
	cmp r0, #4	@ 00023d78 0428
.org 0x23d7a
	bne.n 0x23db4	@ 00023d7a 1bd1
.org 0x23d7c
	ldr r1, [r3, #84]	@ 00023d7c 596d
.org 0x23d7e
	movs r0, #210	@ 00023d7e d220
.org 0x23d80
	lsls r0, r0, #13	@ 00023d80 4003
.org 0x23d82
	cmp r1, r0	@ 00023d82 8142
.org 0x23d84
	ble.n 0x23db4	@ 00023d84 16dd
.org 0x23d86
	ldr r0, [pc, #32]	@ 00023d86 0848
.org 0x23d88
	ldr r1, [pc, #32]	@ 00023d88 0849
.org 0x23d8a
	ldr r1, [r1, #36]	@ 00023d8a 496a
.org 0x23d8c
	ldr r1, [r1, #20]	@ 00023d8c 4969
.org 0x23d8e
	bl 0x275f0	@ 00023d8e 03f02ffc
.org 0x23d92
	movs r0, #4	@ 00023d92 0420
.org 0x23d94
	bl 0x1f63c	@ 00023d94 fbf752fc
.org 0x23d98
	ldr r2, [pc, #20]	@ 00023d98 054a
.org 0x23d9a
	ldrb r1, [r2, #4]	@ 00023d9a 1179
.org 0x23d9c
	movs r0, #8	@ 00023d9c 0820
.org 0x23d9e
	orrs r0, r1	@ 00023d9e 0843
.org 0x23da0
	strb r0, [r2, #4]	@ 00023da0 1071
.org 0x23da2
	movs r0, #5	@ 00023da2 0520
.org 0x23da4
	b.n 0x24018	@ 00023da4 38e1
.org 0x23da6
	.byte 0x00	@ 00023da6 data
.org 0x23da7
	.byte 0x00	@ 00023da7 data
.org 0x23da8
	.byte 0x20,0xe9,0x02,0x02	@ 00023da8 data
.org 0x23dac
	.byte 0xf8,0x2c,0x84,0x08	@ 00023dac data
.org 0x23db0
	.byte 0xb0,0xe8,0x02,0x02	@ 00023db0 data
.org 0x23db4
	movs r0, #190	@ 00023db4 be20
.org 0x23db6
	lsls r0, r0, #1	@ 00023db6 4000
.org 0x23db8
	adds r6, r4, r0	@ 00023db8 2618
.org 0x23dba
	ldrb r0, [r6, #0]	@ 00023dba 3078
.org 0x23dbc
	cmp r0, #5	@ 00023dbc 0528
.org 0x23dbe
	bne.n 0x23dcc	@ 00023dbe 05d1
.org 0x23dc0
	movs r0, #3	@ 00023dc0 0320
.org 0x23dc2
	bl 0x1f63c	@ 00023dc2 fbf73bfc
.org 0x23dc6
	movs r0, #6	@ 00023dc6 0620
.org 0x23dc8
	strb r0, [r6, #0]	@ 00023dc8 3070
.org 0x23dca
	b.n 0x2401a	@ 00023dca 26e1
.org 0x23dcc
	cmp r0, #6	@ 00023dcc 0628
.org 0x23dce
	bne.n 0x23e34	@ 00023dce 31d1
.org 0x23dd0
	ldr r5, [pc, #76]	@ 00023dd0 134d
.org 0x23dd2
	ldrh r1, [r5, #8]	@ 00023dd2 2989
.org 0x23dd4
	movs r0, #16	@ 00023dd4 1020
.org 0x23dd6
	ands r0, r1	@ 00023dd6 0840
.org 0x23dd8
	cmp r0, #0	@ 00023dd8 0028
.org 0x23dda
	beq.n 0x23e34	@ 00023dda 2bd0
.org 0x23ddc
	ldr r1, [pc, #68]	@ 00023ddc 1149
.org 0x23dde
	ldrb r2, [r1, #0]	@ 00023dde 0a78
.org 0x23de0
	movs r0, #128	@ 00023de0 8020
.org 0x23de2
	orrs r0, r2	@ 00023de2 1043
.org 0x23de4
	strb r0, [r1, #0]	@ 00023de4 0870
.org 0x23de6
	ldrb r2, [r1, #1]	@ 00023de6 4a78
.org 0x23de8
	movs r0, #2	@ 00023de8 0220
.org 0x23dea
	orrs r0, r2	@ 00023dea 1043
.org 0x23dec
	strb r0, [r1, #1]	@ 00023dec 4870
.org 0x23dee
	adds r0, r5, #0	@ 00023dee 281c
.org 0x23df0
	adds r0, #16	@ 00023df0 1030
.org 0x23df2
	ldr r1, [pc, #52]	@ 00023df2 0d49
.org 0x23df4
	ldr r1, [r1, #36]	@ 00023df4 496a
.org 0x23df6
	ldr r1, [r1, #28]	@ 00023df6 c969
.org 0x23df8
	bl 0x275f0	@ 00023df8 03f0fafb
.org 0x23dfc
	ldrh r0, [r5, #8]	@ 00023dfc 2889
.org 0x23dfe
	ldr r2, [pc, #44]	@ 00023dfe 0b4a
.org 0x23e00
	ands r2, r0	@ 00023e00 0240
.org 0x23e02
	ldrb r1, [r5, #18]	@ 00023e02 a97c
.org 0x23e04
	movs r0, #253	@ 00023e04 fd20
.org 0x23e06
	ands r0, r1	@ 00023e06 0840
.org 0x23e08
	strb r0, [r5, #18]	@ 00023e08 a874
.org 0x23e0a
	ldr r3, [pc, #36]	@ 00023e0a 094b
.org 0x23e0c
	ldrb r1, [r3, #4]	@ 00023e0c 1979
.org 0x23e0e
	movs r0, #247	@ 00023e0e f720
.org 0x23e10
	ands r0, r1	@ 00023e10 0840
.org 0x23e12
	strb r0, [r3, #4]	@ 00023e12 1871
.org 0x23e14
	movs r0, #1	@ 00023e14 0120
.org 0x23e16
	orrs r2, r0	@ 00023e16 0243
.org 0x23e18
	strh r2, [r5, #8]	@ 00023e18 2a81
.org 0x23e1a
	movs r0, #7	@ 00023e1a 0720
.org 0x23e1c
	strb r0, [r6, #0]	@ 00023e1c 3070
.org 0x23e1e
	b.n 0x2401a	@ 00023e1e fce0
.org 0x23e20
	.byte 0x10,0xe9,0x02,0x02	@ 00023e20 data
.org 0x23e24
	.byte 0xe0,0x32,0x00,0x03	@ 00023e24 data
.org 0x23e28
	.byte 0xf8,0x2c,0x84,0x08	@ 00023e28 data
.org 0x23e2c
	.byte 0xef,0xff,0x00,0x00	@ 00023e2c data
.org 0x23e30
	.byte 0xb0,0xe8,0x02,0x02	@ 00023e30 data
.org 0x23e34
	movs r1, #190	@ 00023e34 be21
.org 0x23e36
	lsls r1, r1, #1	@ 00023e36 4900
.org 0x23e38
	adds r5, r4, r1	@ 00023e38 6518
.org 0x23e3a
	ldrb r0, [r5, #0]	@ 00023e3a 2878
.org 0x23e3c
	cmp r0, #7	@ 00023e3c 0728
.org 0x23e3e
	bne.n 0x23e58	@ 00023e3e 0bd1
.org 0x23e40
	ldr r1, [pc, #16]	@ 00023e40 0449
.org 0x23e42
	ldrb r2, [r1, #0]	@ 00023e42 0a78
.org 0x23e44
	movs r0, #127	@ 00023e44 7f20
.org 0x23e46
	ands r0, r2	@ 00023e46 1040
.org 0x23e48
	movs r2, #0	@ 00023e48 0022
.org 0x23e4a
	strb r0, [r1, #0]	@ 00023e4a 0870
.org 0x23e4c
	strb r2, [r1, #1]	@ 00023e4c 4a70
.org 0x23e4e
	movs r0, #8	@ 00023e4e 0820
.org 0x23e50
	b.n 0x24018	@ 00023e50 e2e0
.org 0x23e52
	.byte 0x00	@ 00023e52 data
.org 0x23e53
	.byte 0x00	@ 00023e53 data
.org 0x23e54
	.byte 0xe0,0x32,0x00,0x03	@ 00023e54 data
.org 0x23e58
	cmp r0, #8	@ 00023e58 0828
.org 0x23e5a
	bne.n 0x23e80	@ 00023e5a 11d1
.org 0x23e5c
	ldr r1, [r3, #84]	@ 00023e5c 596d
.org 0x23e5e
	ldr r0, [pc, #24]	@ 00023e5e 0648
.org 0x23e60
	cmp r1, r0	@ 00023e60 8142
.org 0x23e62
	ble.n 0x23e80	@ 00023e62 0ddd
.org 0x23e64
	movs r0, #5	@ 00023e64 0520
.org 0x23e66
	bl 0x1f63c	@ 00023e66 fbf7e9fb
.org 0x23e6a
	ldr r2, [pc, #16]	@ 00023e6a 044a
.org 0x23e6c
	ldrb r1, [r2, #4]	@ 00023e6c 1179
.org 0x23e6e
	movs r0, #8	@ 00023e6e 0820
.org 0x23e70
	orrs r0, r1	@ 00023e70 0843
.org 0x23e72
	strb r0, [r2, #4]	@ 00023e72 1071
.org 0x23e74
	movs r0, #9	@ 00023e74 0920
.org 0x23e76
	b.n 0x24018	@ 00023e76 cfe0
.org 0x23e78
	.byte 0xff,0x3f,0x1b,0x00	@ 00023e78 data
.org 0x23e7c
	.byte 0xb0,0xe8,0x02,0x02	@ 00023e7c data
.org 0x23e80
	movs r0, #190	@ 00023e80 be20
.org 0x23e82
	lsls r0, r0, #1	@ 00023e82 4000
.org 0x23e84
	adds r5, r4, r0	@ 00023e84 2518
.org 0x23e86
	ldrb r0, [r5, #0]	@ 00023e86 2878
.org 0x23e88
	cmp r0, #9	@ 00023e88 0928
.org 0x23e8a
	bne.n 0x23f54	@ 00023e8a 63d1
.org 0x23e8c
	ldr r1, [pc, #60]	@ 00023e8c 0f49
.org 0x23e8e
	adds r6, r4, r1	@ 00023e8e 6618
.org 0x23e90
	ldrb r0, [r6, #0]	@ 00023e90 3078
.org 0x23e92
	cmp r0, #0	@ 00023e92 0028
.org 0x23e94
	bne.n 0x23edc	@ 00023e94 22d1
.org 0x23e96
	ldr r1, [r3, #84]	@ 00023e96 596d
.org 0x23e98
	ldr r0, [pc, #52]	@ 00023e98 0d48
.org 0x23e9a
	cmp r1, r0	@ 00023e9a 8142
.org 0x23e9c
	ble.n 0x23edc	@ 00023e9c 1edd
.org 0x23e9e
	ldr r2, [pc, #52]	@ 00023e9e 0d4a
.org 0x23ea0
	ldrb r1, [r2, #1]	@ 00023ea0 5178
.org 0x23ea2
	movs r0, #2	@ 00023ea2 0220
.org 0x23ea4
	orrs r0, r1	@ 00023ea4 0843
.org 0x23ea6
	strb r0, [r2, #1]	@ 00023ea6 5070
.org 0x23ea8
	ldr r0, [pc, #44]	@ 00023ea8 0b48
.org 0x23eaa
	movs r1, #180	@ 00023eaa b421
.org 0x23eac
	lsls r1, r1, #1	@ 00023eac 4900
.org 0x23eae
	adds r5, r0, r1	@ 00023eae 4518
.org 0x23eb0
	ldr r0, [r5, #0]	@ 00023eb0 2868
.org 0x23eb2
	movs r4, #1	@ 00023eb2 0124
.org 0x23eb4
	negs r4, r4	@ 00023eb4 6442
.org 0x23eb6
	cmp r0, r4	@ 00023eb6 a042
.org 0x23eb8
	beq.n 0x23ec4	@ 00023eb8 04d0
.org 0x23eba
	lsls r0, r0, #16	@ 00023eba 0004
.org 0x23ebc
	lsrs r0, r0, #16	@ 00023ebc 000c
.org 0x23ebe
	bl 0x2a98	@ 00023ebe def7ebfd
.org 0x23ec2
	str r4, [r5, #0]	@ 00023ec2 2c60
.org 0x23ec4
	movs r0, #1	@ 00023ec4 0120
.org 0x23ec6
	strb r0, [r6, #0]	@ 00023ec6 3070
.org 0x23ec8
	b.n 0x2401a	@ 00023ec8 a7e0
.org 0x23eca
	.byte 0x00	@ 00023eca data
.org 0x23ecb
	.byte 0x00	@ 00023ecb data
.org 0x23ecc
	.byte 0x7d,0x01,0x00,0x00	@ 00023ecc data
.org 0x23ed0
	.byte 0xff,0xff,0x2b,0x00	@ 00023ed0 data
.org 0x23ed4
	.byte 0xe0,0x32,0x00,0x03	@ 00023ed4 data
.org 0x23ed8
	.byte 0x10,0xe9,0x02,0x02	@ 00023ed8 data
.org 0x23edc
	ldr r0, [pc, #20]	@ 00023edc 0548
.org 0x23ede
	adds r2, r4, r0	@ 00023ede 2218
.org 0x23ee0
	ldrb r0, [r2, #0]	@ 00023ee0 1078
.org 0x23ee2
	cmp r0, #1	@ 00023ee2 0128
.org 0x23ee4
	bne.n 0x23efc	@ 00023ee4 0ad1
.org 0x23ee6
	ldr r0, [pc, #16]	@ 00023ee6 0448
.org 0x23ee8
	movs r1, #0	@ 00023ee8 0021
.org 0x23eea
	strb r1, [r0, #1]	@ 00023eea 4170
.org 0x23eec
	movs r0, #2	@ 00023eec 0220
.org 0x23eee
	strb r0, [r2, #0]	@ 00023eee 1070
.org 0x23ef0
	b.n 0x2401a	@ 00023ef0 93e0
.org 0x23ef2
	.byte 0x00	@ 00023ef2 data
.org 0x23ef3
	.byte 0x00	@ 00023ef3 data
.org 0x23ef4
	.byte 0x7d,0x01,0x00,0x00	@ 00023ef4 data
.org 0x23ef8
	.byte 0xe0,0x32,0x00,0x03	@ 00023ef8 data
.org 0x23efc
	cmp r0, #2	@ 00023efc 0228
.org 0x23efe
	beq.n 0x23f02	@ 00023efe 00d0
.org 0x23f00
	b.n 0x2401a	@ 00023f00 8be0
.org 0x23f02
	ldr r1, [r3, #84]	@ 00023f02 596d
.org 0x23f04
	ldr r0, [pc, #64]	@ 00023f04 1048
.org 0x23f06
	cmp r1, r0	@ 00023f06 8142
.org 0x23f08
	bgt.n 0x23f0c	@ 00023f08 00dc
.org 0x23f0a
	b.n 0x2401a	@ 00023f0a 86e0
.org 0x23f0c
	ldr r0, [pc, #60]	@ 00023f0c 0f48
.org 0x23f0e
	movs r1, #0	@ 00023f0e 0021
.org 0x23f10
	strb r1, [r0, #1]	@ 00023f10 4170
.org 0x23f12
	ldr r0, [pc, #60]	@ 00023f12 0f48
.org 0x23f14
	movs r1, #180	@ 00023f14 b421
.org 0x23f16
	lsls r1, r1, #1	@ 00023f16 4900
.org 0x23f18
	adds r5, r0, r1	@ 00023f18 4518
.org 0x23f1a
	ldr r0, [r5, #0]	@ 00023f1a 2868
.org 0x23f1c
	cmp r0, #155	@ 00023f1c 9b28
.org 0x23f1e
	beq.n 0x23f3c	@ 00023f1e 0dd0
.org 0x23f20
	movs r6, #1	@ 00023f20 0126
.org 0x23f22
	negs r6, r6	@ 00023f22 7642
.org 0x23f24
	cmp r0, r6	@ 00023f24 b042
.org 0x23f26
	beq.n 0x23f32	@ 00023f26 04d0
.org 0x23f28
	lsls r0, r0, #16	@ 00023f28 0004
.org 0x23f2a
	lsrs r0, r0, #16	@ 00023f2a 000c
.org 0x23f2c
	bl 0x2a98	@ 00023f2c def7b4fd
.org 0x23f30
	str r6, [r5, #0]	@ 00023f30 2e60
.org 0x23f32
	movs r0, #155	@ 00023f32 9b20
.org 0x23f34
	bl 0x2a88	@ 00023f34 def7a8fd
.org 0x23f38
	movs r0, #155	@ 00023f38 9b20
.org 0x23f3a
	str r0, [r5, #0]	@ 00023f3a 2860
.org 0x23f3c
	movs r0, #190	@ 00023f3c be20
.org 0x23f3e
	lsls r0, r0, #1	@ 00023f3e 4000
.org 0x23f40
	adds r1, r4, r0	@ 00023f40 2118
.org 0x23f42
	movs r0, #10	@ 00023f42 0a20
.org 0x23f44
	strb r0, [r1, #0]	@ 00023f44 0870
.org 0x23f46
	b.n 0x2401a	@ 00023f46 68e0
.org 0x23f48
	.byte 0xff,0x1f,0x2c,0x00	@ 00023f48 data
.org 0x23f4c
	.byte 0xe0,0x32,0x00,0x03	@ 00023f4c data
.org 0x23f50
	.byte 0x10,0xe9,0x02,0x02	@ 00023f50 data
.org 0x23f54
	cmp r0, #10	@ 00023f54 0a28
.org 0x23f56
	bne.n 0x23f84	@ 00023f56 15d1
.org 0x23f58
	ldr r1, [r3, #84]	@ 00023f58 596d
.org 0x23f5a
	ldr r0, [pc, #28]	@ 00023f5a 0748
.org 0x23f5c
	cmp r1, r0	@ 00023f5c 8142
.org 0x23f5e
	ble.n 0x23f84	@ 00023f5e 11dd
.org 0x23f60
	ldr r0, [pc, #24]	@ 00023f60 0648
.org 0x23f62
	ldr r1, [pc, #28]	@ 00023f62 0749
.org 0x23f64
	ldr r1, [r1, #36]	@ 00023f64 496a
