@ FUN_08059d88  entry 0x08059d88  size 280
.thumb
.org 0x59d88
FUN_08059d88:
	.byte 0x30,0xb5	@ 00059d88 (raw)
.org 0x59d8a
	.byte 0x04,0x1c	@ 00059d8a (raw)
.org 0x59d8c
	.byte 0xbd,0x30	@ 00059d8c (raw)
.org 0x59d8e
	movs r5, #0	@ 00059d8e 0025
.org 0x59d90
	strb r5, [r0, #0]	@ 00059d90 0570
.org 0x59d92
	subs r0, #49	@ 00059d92 3138
.org 0x59d94
	ldr r0, [r0, #0]	@ 00059d94 0068
.org 0x59d96
	movs r1, #1	@ 00059d96 0121
.org 0x59d98
	ands r0, r1	@ 00059d98 0840
.org 0x59d9a
	cmp r0, #0	@ 00059d9a 0028
.org 0x59d9c
	beq.n 0x59da4	@ 00059d9c 02d0
.org 0x59d9e
	movs r0, #64	@ 00059d9e 4020
.org 0x59da0
	bl 0x6984	@ 00059da0 acf7f0fd
.org 0x59da4
	adds r2, r4, #0	@ 00059da4 221c
.org 0x59da6
	adds r2, #200	@ 00059da6 c832
.org 0x59da8
	ldr r1, [r2, #0]	@ 00059da8 1168
.org 0x59daa
	cmp r1, #0	@ 00059daa 0029
.org 0x59dac
	beq.n 0x59dd4	@ 00059dac 12d0
.org 0x59dae
	adds r3, r4, #0	@ 00059dae 231c
.org 0x59db0
	adds r3, #191	@ 00059db0 bf33
.org 0x59db2
	ldrb r0, [r3, #0]	@ 00059db2 1878
.org 0x59db4
	cmp r0, #1	@ 00059db4 0128
.org 0x59db6
	beq.n 0x59dc8	@ 00059db6 07d0
.org 0x59db8
	cmp r0, #2	@ 00059db8 0228
.org 0x59dba
	beq.n 0x59dc8	@ 00059dba 05d0
.org 0x59dbc
	cmp r0, #4	@ 00059dbc 0428
.org 0x59dbe
	beq.n 0x59dc8	@ 00059dbe 03d0
.org 0x59dc0
	cmp r0, #5	@ 00059dc0 0528
.org 0x59dc2
	beq.n 0x59dc8	@ 00059dc2 01d0
.org 0x59dc4
	cmp r0, #3	@ 00059dc4 0328
.org 0x59dc6
	bne.n 0x59dd4	@ 00059dc6 05d1
.org 0x59dc8
	ldrb r0, [r1, #12]	@ 00059dc8 087b
.org 0x59dca
	cmp r0, #1	@ 00059dca 0128
.org 0x59dcc
	bls.n 0x59dd4	@ 00059dcc 02d9
.org 0x59dce
	str r5, [r2, #0]	@ 00059dce 1560
.org 0x59dd0
	movs r0, #255	@ 00059dd0 ff20
.org 0x59dd2
	strb r0, [r3, #0]	@ 00059dd2 1870
.org 0x59dd4
	adds r0, r4, #0	@ 00059dd4 201c
.org 0x59dd6
	adds r0, #140	@ 00059dd6 8c30
.org 0x59dd8
	ldr r1, [r0, #0]	@ 00059dd8 0168
.org 0x59dda
	movs r2, #128	@ 00059dda 8022
.org 0x59ddc
	lsls r2, r2, #2	@ 00059ddc 9200
.org 0x59dde
	ands r1, r2	@ 00059dde 1140
.org 0x59de0
	adds r3, r0, #0	@ 00059de0 031c
.org 0x59de2
	cmp r1, #0	@ 00059de2 0029
.org 0x59de4
	bne.n 0x59df0	@ 00059de4 04d1
.org 0x59de6
	adds r0, #24	@ 00059de6 1830
.org 0x59de8
	movs r1, #0	@ 00059de8 0021
.org 0x59dea
	ldrsh r0, [r0, r1]	@ 00059dea 405e
.org 0x59dec
	cmp r0, #0	@ 00059dec 0028
.org 0x59dee
	bne.n 0x59e3e	@ 00059dee 26d1
.org 0x59df0
	ldr r0, [pc, #52]	@ 00059df0 0d48
.org 0x59df2
	ldrh r1, [r0, #8]	@ 00059df2 0189
.org 0x59df4
	movs r0, #8	@ 00059df4 0820
.org 0x59df6
	ands r0, r1	@ 00059df6 0840
.org 0x59df8
	lsls r0, r0, #16	@ 00059df8 0004
.org 0x59dfa
	lsrs r2, r0, #16	@ 00059dfa 020c
.org 0x59dfc
	cmp r2, #0	@ 00059dfc 002a
.org 0x59dfe
	bne.n 0x59e3e	@ 00059dfe 1ed1
.org 0x59e00
	ldr r1, [pc, #40]	@ 00059e00 0a49
.org 0x59e02
	ldrb r0, [r4, #9]	@ 00059e02 607a
.org 0x59e04
	lsls r0, r0, #2	@ 00059e04 8000
.org 0x59e06
	adds r0, r0, r1	@ 00059e06 4018
.org 0x59e08
	movs r1, #2	@ 00059e08 0221
.org 0x59e0a
	str r1, [r4, #12]	@ 00059e0a e160
.org 0x59e0c
	ldr r0, [r0, #0]	@ 00059e0c 0068
.org 0x59e0e
	ldr r0, [r0, #8]	@ 00059e0e 8068
.org 0x59e10
	str r0, [r4, #20]	@ 00059e10 6061
.org 0x59e12
	ldr r1, [r3, #0]	@ 00059e12 1968
.org 0x59e14
	movs r0, #128	@ 00059e14 8020
.org 0x59e16
	lsls r0, r0, #9	@ 00059e16 4002
.org 0x59e18
	ands r1, r0	@ 00059e18 0140
.org 0x59e1a
	cmp r1, #0	@ 00059e1a 0029
.org 0x59e1c
	beq.n 0x59e30	@ 00059e1c 08d0
.org 0x59e1e
	movs r0, #1	@ 00059e1e 0120
.org 0x59e20
	strb r0, [r4, #13]	@ 00059e20 6073
.org 0x59e22
	strb r2, [r4, #14]	@ 00059e22 a273
.org 0x59e24
	strb r2, [r4, #15]	@ 00059e24 e273
.org 0x59e26
	b.n 0x59e36	@ 00059e26 06e0
.org 0x59e28
	.byte 0x10,0xe9,0x02,0x02	@ 00059e28 data
.org 0x59e2c
	.byte 0x70,0x7d,0x85,0x08	@ 00059e2c data
.org 0x59e30
	strb r1, [r4, #13]	@ 00059e30 6173
.org 0x59e32
	strb r1, [r4, #14]	@ 00059e32 a173
.org 0x59e34
	strb r1, [r4, #15]	@ 00059e34 e173
.org 0x59e36
	adds r0, r4, #0	@ 00059e36 201c
.org 0x59e38
	bl 0x5b924	@ 00059e38 01f074fd
.org 0x59e3c
	b.n 0x59ea2	@ 00059e3c 31e0
.org 0x59e3e
	ldr r0, [r3, #0]	@ 00059e3e 1868
.org 0x59e40
	movs r1, #1	@ 00059e40 0121
.org 0x59e42
	ands r0, r1	@ 00059e42 0840
.org 0x59e44
	cmp r0, #0	@ 00059e44 0028
.org 0x59e46
	beq.n 0x59e7a	@ 00059e46 18d0
.org 0x59e48
	ldr r0, [r4, #44]	@ 00059e48 e06a
.org 0x59e4a
	cmp r0, #0	@ 00059e4a 0028
.org 0x59e4c
	bne.n 0x59e80	@ 00059e4c 18d1
.org 0x59e4e
	ldr r2, [pc, #88]	@ 00059e4e 164a
.org 0x59e50
	movs r0, #11	@ 00059e50 0b20
.org 0x59e52
	adds r1, r4, #0	@ 00059e52 211c
.org 0x59e54
	bl 0x2adac	@ 00059e54 d0f7aaff
.org 0x59e58
	str r0, [r4, #44]	@ 00059e58 e062
.org 0x59e5a
	cmp r0, #0	@ 00059e5a 0028
.org 0x59e5c
	beq.n 0x59e8c	@ 00059e5c 16d0
.org 0x59e5e
	ldrb r0, [r4, #13]	@ 00059e5e 607b
.org 0x59e60
	cmp r0, #1	@ 00059e60 0128
.org 0x59e62
	beq.n 0x59e7a	@ 00059e62 0ad0
.org 0x59e64
	cmp r0, #1	@ 00059e64 0128
.org 0x59e66
	blt.n 0x59e70	@ 00059e66 03db
.org 0x59e68
	cmp r0, #10	@ 00059e68 0a28
.org 0x59e6a
	bgt.n 0x59e70	@ 00059e6a 01dc
.org 0x59e6c
	cmp r0, #8	@ 00059e6c 0828
.org 0x59e6e
	bge.n 0x59e7a	@ 00059e6e 04da
.org 0x59e70
	movs r1, #0	@ 00059e70 0021
.org 0x59e72
	movs r0, #10	@ 00059e72 0a20
.org 0x59e74
	strb r0, [r4, #13]	@ 00059e74 6073
.org 0x59e76
	strb r1, [r4, #14]	@ 00059e76 a173
.org 0x59e78
	strb r1, [r4, #15]	@ 00059e78 e173
.org 0x59e7a
	ldr r0, [r4, #44]	@ 00059e7a e06a
.org 0x59e7c
	cmp r0, #0	@ 00059e7c 0028
.org 0x59e7e
	beq.n 0x59e8c	@ 00059e7e 05d0
.org 0x59e80
	bl 0x2b3e4	@ 00059e80 d1f7b0fa
.org 0x59e84
	cmp r0, #0	@ 00059e84 0028
.org 0x59e86
	beq.n 0x59e8c	@ 00059e86 01d0
.org 0x59e88
	movs r0, #0	@ 00059e88 0020
.org 0x59e8a
	str r0, [r4, #44]	@ 00059e8a e062
.org 0x59e8c
	ldr r0, [pc, #28]	@ 00059e8c 0748
.org 0x59e8e
	ldrb r1, [r4, #13]	@ 00059e8e 617b
.org 0x59e90
	lsls r1, r1, #2	@ 00059e90 8900
.org 0x59e92
	adds r1, r1, r0	@ 00059e92 0918
.org 0x59e94
	ldr r1, [r1, #0]	@ 00059e94 0968
.org 0x59e96
	adds r0, r4, #0	@ 00059e96 201c
.org 0x59e98
	bl 0x128f80	@ 00059e98 cff072f8
.org 0x59e9c
	adds r0, r4, #0	@ 00059e9c 201c
.org 0x59e9e
	bl 0x5c270	@ 00059e9e 02f0e7f9
