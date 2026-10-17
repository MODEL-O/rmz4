@ FUN_08022cb0  entry 0x08022cb0  size 890
.thumb
.org 0x22cb0
FUN_08022cb0:
	push {r4, r5, r6, r7, lr}	@ 00022cb0 f0b5
.org 0x22cb2
	mov r7, r9	@ 00022cb2 4f46
.org 0x22cb4
	mov r6, r8	@ 00022cb4 4646
.org 0x22cb6
	push {r6, r7}	@ 00022cb6 c0b4
.org 0x22cb8
	sub sp, #8	@ 00022cb8 82b0
.org 0x22cba
	adds r6, r0, #0	@ 00022cba 061c
.org 0x22cbc
	ldr r2, [r6, #32]	@ 00022cbc 326a
.org 0x22cbe
	movs r0, #190	@ 00022cbe be20
.org 0x22cc0
	lsls r0, r0, #1	@ 00022cc0 4000
.org 0x22cc2
	adds r7, r6, r0	@ 00022cc2 3718
.org 0x22cc4
	ldrb r0, [r7, #0]	@ 00022cc4 3878
.org 0x22cc6
	cmp r0, #0	@ 00022cc6 0028
.org 0x22cc8
	beq.n 0x22ccc	@ 00022cc8 00d0
.org 0x22cca
	b.n 0x22e14	@ 00022cca a3e0
.org 0x22ccc
	movs r0, #0	@ 00022ccc 0020
.org 0x22cce
	movs r1, #0	@ 00022cce 0021
.org 0x22cd0
	str r0, [sp, #0]	@ 00022cd0 0090
.org 0x22cd2
	str r1, [sp, #4]	@ 00022cd2 0191
.org 0x22cd4
	ldr r5, [pc, #100]	@ 00022cd4 194d
.org 0x22cd6
	ldrh r0, [r5, #8]	@ 00022cd6 2889
.org 0x22cd8
	movs r1, #1	@ 00022cd8 0121
.org 0x22cda
	mov r9, r1	@ 00022cda 8946
.org 0x22cdc
	mov r2, r9	@ 00022cdc 4a46
.org 0x22cde
	orrs r0, r2	@ 00022cde 1043
.org 0x22ce0
	strh r0, [r5, #8]	@ 00022ce0 2881
.org 0x22ce2
	ldr r0, [pc, #92]	@ 00022ce2 1748
.org 0x22ce4
	mov r8, r0	@ 00022ce4 8046
.org 0x22ce6
	ldrb r1, [r0, #4]	@ 00022ce6 0179
.org 0x22ce8
	movs r0, #8	@ 00022ce8 0820
.org 0x22cea
	orrs r0, r1	@ 00022cea 0843
.org 0x22cec
	mov r1, r8	@ 00022cec 4146
.org 0x22cee
	strb r0, [r1, #4]	@ 00022cee 0871
.org 0x22cf0
	mov r0, sp	@ 00022cf0 6846
.org 0x22cf2
	movs r1, #0	@ 00022cf2 0021
.org 0x22cf4
	movs r2, #0	@ 00022cf4 0022
.org 0x22cf6
	bl 0xf7558	@ 00022cf6 d4f02ffc
.org 0x22cfa
	movs r2, #161	@ 00022cfa a122
.org 0x22cfc
	lsls r2, r2, #2	@ 00022cfc 9200
.org 0x22cfe
	adds r1, r6, r2	@ 00022cfe b118
.org 0x22d00
	str r0, [r1, #0]	@ 00022d00 0860
.org 0x22d02
	ldrb r4, [r5, #2]	@ 00022d02 ac78
.org 0x22d04
	cmp r4, #0	@ 00022d04 002c
.org 0x22d06
	bne.n 0x22d48	@ 00022d06 1fd1
.org 0x22d08
	adds r0, r5, #0	@ 00022d08 281c
.org 0x22d0a
	adds r0, #16	@ 00022d0a 1030
.org 0x22d0c
	ldr r1, [pc, #52]	@ 00022d0c 0d49
.org 0x22d0e
	ldr r1, [r1, #28]	@ 00022d0e c969
.org 0x22d10
	ldr r1, [r1, #0]	@ 00022d10 0968
.org 0x22d12
	bl 0x275f0	@ 00022d12 04f06dfc
.org 0x22d16
	movs r0, #1	@ 00022d16 0120
.org 0x22d18
	bl 0x1f63c	@ 00022d18 fcf790fc
.org 0x22d1c
	mov r0, r8	@ 00022d1c 4046
.org 0x22d1e
	ldrb r1, [r0, #10]	@ 00022d1e 817a
.org 0x22d20
	movs r0, #239	@ 00022d20 ef20
.org 0x22d22
	ands r0, r1	@ 00022d22 0840
.org 0x22d24
	movs r1, #223	@ 00022d24 df21
.org 0x22d26
	ands r0, r1	@ 00022d26 0840
.org 0x22d28
	movs r1, #191	@ 00022d28 bf21
.org 0x22d2a
	ands r0, r1	@ 00022d2a 0840
.org 0x22d2c
	movs r1, #127	@ 00022d2c 7f21
.org 0x22d2e
	ands r0, r1	@ 00022d2e 0840
.org 0x22d30
	mov r1, r8	@ 00022d30 4146
.org 0x22d32
	strb r0, [r1, #10]	@ 00022d32 8872
.org 0x22d34
	mov r2, r9	@ 00022d34 4a46
.org 0x22d36
	strb r2, [r7, #0]	@ 00022d36 3a70
.org 0x22d38
	b.n 0x230ae	@ 00022d38 b9e1
.org 0x22d3a
	.byte 0x00	@ 00022d3a data
.org 0x22d3b
	.byte 0x00	@ 00022d3b data
.org 0x22d3c
	.byte 0x10,0xe9,0x02,0x02	@ 00022d3c data
.org 0x22d40
	.byte 0xb0,0xe8,0x02,0x02	@ 00022d40 data
.org 0x22d44
	.byte 0xf8,0x2c,0x84,0x08	@ 00022d44 data
.org 0x22d48
	cmp r4, #1	@ 00022d48 012c
.org 0x22d4a
	bne.n 0x22d60	@ 00022d4a 09d1
.org 0x22d4c
	adds r0, r5, #0	@ 00022d4c 281c
.org 0x22d4e
	adds r0, #16	@ 00022d4e 1030
.org 0x22d50
	ldr r1, [pc, #8]	@ 00022d50 0249
.org 0x22d52
	ldr r1, [r1, #28]	@ 00022d52 c969
.org 0x22d54
	ldr r1, [r1, #4]	@ 00022d54 4968
.org 0x22d56
	bl 0x275f0	@ 00022d56 04f04bfc
.org 0x22d5a
	b.n 0x22e18	@ 00022d5a 5de0
.org 0x22d5c
	.byte 0xf8,0x2c,0x84,0x08	@ 00022d5c data
.org 0x22d60
	cmp r4, #2	@ 00022d60 022c
.org 0x22d62
	bne.n 0x22d7c	@ 00022d62 0bd1
.org 0x22d64
	adds r0, r5, #0	@ 00022d64 281c
.org 0x22d66
	adds r0, #16	@ 00022d66 1030
.org 0x22d68
	ldr r1, [pc, #12]	@ 00022d68 0349
.org 0x22d6a
	ldr r1, [r1, #28]	@ 00022d6a c969
.org 0x22d6c
	ldr r1, [r1, #8]	@ 00022d6c 8968
.org 0x22d6e
	bl 0x275f0	@ 00022d6e 04f03ffc
.org 0x22d72
	strb r4, [r7, #0]	@ 00022d72 3c70
.org 0x22d74
	b.n 0x230ae	@ 00022d74 9be1
.org 0x22d76
	.byte 0x00	@ 00022d76 data
.org 0x22d77
	.byte 0x00	@ 00022d77 data
.org 0x22d78
	.byte 0xf8,0x2c,0x84,0x08	@ 00022d78 data
.org 0x22d7c
	cmp r4, #3	@ 00022d7c 032c
.org 0x22d7e
	bne.n 0x22da0	@ 00022d7e 0fd1
.org 0x22d80
	adds r0, r5, #0	@ 00022d80 281c
.org 0x22d82
	adds r0, #16	@ 00022d82 1030
.org 0x22d84
	ldr r1, [pc, #20]	@ 00022d84 0549
.org 0x22d86
	ldr r1, [r1, #28]	@ 00022d86 c969
.org 0x22d88
	ldr r1, [r1, #16]	@ 00022d88 0969
.org 0x22d8a
	bl 0x275f0	@ 00022d8a 04f031fc
.org 0x22d8e
	movs r0, #4	@ 00022d8e 0420
.org 0x22d90
	bl 0x1f63c	@ 00022d90 fcf754fc
.org 0x22d94
	movs r0, #4	@ 00022d94 0420
.org 0x22d96
	strb r0, [r7, #0]	@ 00022d96 3870
.org 0x22d98
	b.n 0x230ae	@ 00022d98 89e1
.org 0x22d9a
	.byte 0x00	@ 00022d9a data
.org 0x22d9b
	.byte 0x00	@ 00022d9b data
.org 0x22d9c
	.byte 0xf8,0x2c,0x84,0x08	@ 00022d9c data
.org 0x22da0
	cmp r4, #4	@ 00022da0 042c
.org 0x22da2
	bne.n 0x22dbc	@ 00022da2 0bd1
.org 0x22da4
	adds r0, r5, #0	@ 00022da4 281c
.org 0x22da6
	adds r0, #16	@ 00022da6 1030
.org 0x22da8
	ldr r1, [pc, #12]	@ 00022da8 0349
.org 0x22daa
	ldr r1, [r1, #28]	@ 00022daa c969
.org 0x22dac
	ldr r1, [r1, #24]	@ 00022dac 8969
.org 0x22dae
	bl 0x275f0	@ 00022dae 04f01ffc
.org 0x22db2
	movs r0, #5	@ 00022db2 0520
.org 0x22db4
	strb r0, [r7, #0]	@ 00022db4 3870
.org 0x22db6
	b.n 0x230ae	@ 00022db6 7ae1
.org 0x22db8
	.byte 0xf8,0x2c,0x84,0x08	@ 00022db8 data
.org 0x22dbc
	cmp r4, #5	@ 00022dbc 052c
.org 0x22dbe
	bne.n 0x22dd8	@ 00022dbe 0bd1
.org 0x22dc0
	adds r0, r5, #0	@ 00022dc0 281c
.org 0x22dc2
	adds r0, #16	@ 00022dc2 1030
.org 0x22dc4
	ldr r1, [pc, #12]	@ 00022dc4 0349
.org 0x22dc6
	ldr r1, [r1, #28]	@ 00022dc6 c969
.org 0x22dc8
	ldr r1, [r1, #32]	@ 00022dc8 096a
.org 0x22dca
	bl 0x275f0	@ 00022dca 04f011fc
.org 0x22dce
	movs r0, #9	@ 00022dce 0920
.org 0x22dd0
	strb r0, [r7, #0]	@ 00022dd0 3870
.org 0x22dd2
	b.n 0x230ae	@ 00022dd2 6ce1
.org 0x22dd4
	.byte 0xf8,0x2c,0x84,0x08	@ 00022dd4 data
.org 0x22dd8
	cmp r4, #6	@ 00022dd8 062c
.org 0x22dda
	bne.n 0x22df4	@ 00022dda 0bd1
.org 0x22ddc
	adds r0, r5, #0	@ 00022ddc 281c
.org 0x22dde
	adds r0, #16	@ 00022dde 1030
.org 0x22de0
	ldr r1, [pc, #12]	@ 00022de0 0349
.org 0x22de2
	ldr r1, [r1, #28]	@ 00022de2 c969
.org 0x22de4
	ldr r1, [r1, #40]	@ 00022de4 896a
.org 0x22de6
	bl 0x275f0	@ 00022de6 04f003fc
.org 0x22dea
	movs r0, #11	@ 00022dea 0b20
.org 0x22dec
	strb r0, [r7, #0]	@ 00022dec 3870
.org 0x22dee
	b.n 0x230ae	@ 00022dee 5ee1
.org 0x22df0
	.byte 0xf8,0x2c,0x84,0x08	@ 00022df0 data
.org 0x22df4
	cmp r4, #7	@ 00022df4 072c
.org 0x22df6
	beq.n 0x22dfa	@ 00022df6 00d0
.org 0x22df8
	b.n 0x230ae	@ 00022df8 59e1
.org 0x22dfa
	adds r0, r5, #0	@ 00022dfa 281c
.org 0x22dfc
	adds r0, #16	@ 00022dfc 1030
.org 0x22dfe
	ldr r1, [pc, #16]	@ 00022dfe 0449
.org 0x22e00
	ldr r1, [r1, #28]	@ 00022e00 c969
.org 0x22e02
	ldr r1, [r1, #48]	@ 00022e02 096b
.org 0x22e04
	bl 0x275f0	@ 00022e04 04f0f4fb
.org 0x22e08
	movs r0, #12	@ 00022e08 0c20
.org 0x22e0a
	strb r0, [r7, #0]	@ 00022e0a 3870
.org 0x22e0c
	b.n 0x230ae	@ 00022e0c 4fe1
.org 0x22e0e
	.byte 0x00	@ 00022e0e data
.org 0x22e0f
	.byte 0x00	@ 00022e0f data
.org 0x22e10
	.byte 0xf8,0x2c,0x84,0x08	@ 00022e10 data
.org 0x22e14
	cmp r0, #1	@ 00022e14 0128
.org 0x22e16
	bne.n 0x22e24	@ 00022e16 05d1
.org 0x22e18
	movs r0, #2	@ 00022e18 0220
.org 0x22e1a
	bl 0x1f63c	@ 00022e1a fcf70ffc
.org 0x22e1e
	movs r0, #2	@ 00022e1e 0220
.org 0x22e20
	strb r0, [r7, #0]	@ 00022e20 3870
.org 0x22e22
	b.n 0x230ae	@ 00022e22 44e1
.org 0x22e24
	cmp r0, #2	@ 00022e24 0228
.org 0x22e26
	bne.n 0x22e44	@ 00022e26 0dd1
.org 0x22e28
	ldr r1, [r2, #84]	@ 00022e28 516d
.org 0x22e2a
	movs r0, #240	@ 00022e2a f020
.org 0x22e2c
	lsls r0, r0, #11	@ 00022e2c c002
.org 0x22e2e
	cmp r1, r0	@ 00022e2e 8142
.org 0x22e30
	ble.n 0x22e44	@ 00022e30 08dd
.org 0x22e32
	ldr r0, [pc, #12]	@ 00022e32 0348
.org 0x22e34
	cmp r1, r0	@ 00022e34 8142
.org 0x22e36
	bgt.n 0x22e44	@ 00022e36 05dc
.org 0x22e38
	movs r0, #3	@ 00022e38 0320
.org 0x22e3a
	strb r0, [r7, #0]	@ 00022e3a 3870
.org 0x22e3c
	b.n 0x230ae	@ 00022e3c 37e1
.org 0x22e3e
	.byte 0x00	@ 00022e3e data
.org 0x22e3f
	.byte 0x00	@ 00022e3f data
.org 0x22e40
	.byte 0xff,0x6f,0x08,0x00	@ 00022e40 data
.org 0x22e44
	movs r0, #190	@ 00022e44 be20
.org 0x22e46
	lsls r0, r0, #1	@ 00022e46 4000
.org 0x22e48
	adds r4, r6, r0	@ 00022e48 3418
.org 0x22e4a
	ldrb r0, [r4, #0]	@ 00022e4a 2078
.org 0x22e4c
	cmp r0, #3	@ 00022e4c 0328
.org 0x22e4e
	bne.n 0x22e6c	@ 00022e4e 0dd1
.org 0x22e50
	ldr r1, [r2, #84]	@ 00022e50 516d
.org 0x22e52
	movs r0, #135	@ 00022e52 8720
.org 0x22e54
	lsls r0, r0, #12	@ 00022e54 0003
.org 0x22e56
	cmp r1, r0	@ 00022e56 8142
.org 0x22e58
	ble.n 0x22e6c	@ 00022e58 08dd
.org 0x22e5a
	ldr r0, [pc, #8]	@ 00022e5a 0248
.org 0x22e5c
	ldr r1, [pc, #8]	@ 00022e5c 0249
.org 0x22e5e
	ldr r1, [r1, #28]	@ 00022e5e c969
.org 0x22e60
	ldr r1, [r1, #12]	@ 00022e60 c968
.org 0x22e62
	b.n 0x22e8a	@ 00022e62 12e0
.org 0x22e64
	.byte 0x20,0xe9,0x02,0x02	@ 00022e64 data
.org 0x22e68
	.byte 0xf8,0x2c,0x84,0x08	@ 00022e68 data
.org 0x22e6c
	movs r1, #190	@ 00022e6c be21
.org 0x22e6e
	lsls r1, r1, #1	@ 00022e6e 4900
.org 0x22e70
	adds r4, r6, r1	@ 00022e70 7418
.org 0x22e72
	ldrb r0, [r4, #0]	@ 00022e72 2078
.org 0x22e74
	cmp r0, #4	@ 00022e74 0428
.org 0x22e76
	bne.n 0x22eb0	@ 00022e76 1bd1
.org 0x22e78
	ldr r1, [r2, #84]	@ 00022e78 516d
.org 0x22e7a
	movs r0, #135	@ 00022e7a 8720
.org 0x22e7c
	lsls r0, r0, #12	@ 00022e7c 0003
.org 0x22e7e
	cmp r1, r0	@ 00022e7e 8142
.org 0x22e80
	ble.n 0x22eb0	@ 00022e80 16dd
.org 0x22e82
	ldr r0, [pc, #32]	@ 00022e82 0848
.org 0x22e84
	ldr r1, [pc, #32]	@ 00022e84 0849
.org 0x22e86
	ldr r1, [r1, #28]	@ 00022e86 c969
.org 0x22e88
	ldr r1, [r1, #20]	@ 00022e88 4969
.org 0x22e8a
	bl 0x275f0	@ 00022e8a 04f0b1fb
.org 0x22e8e
	movs r0, #4	@ 00022e8e 0420
.org 0x22e90
	bl 0x1f63c	@ 00022e90 fcf7d4fb
.org 0x22e94
	ldr r2, [pc, #20]	@ 00022e94 054a
.org 0x22e96
	ldrb r1, [r2, #4]	@ 00022e96 1179
.org 0x22e98
	movs r0, #8	@ 00022e98 0820
.org 0x22e9a
	orrs r0, r1	@ 00022e9a 0843
.org 0x22e9c
	strb r0, [r2, #4]	@ 00022e9c 1071
.org 0x22e9e
	movs r0, #5	@ 00022e9e 0520
.org 0x22ea0
	strb r0, [r4, #0]	@ 00022ea0 2070
.org 0x22ea2
	b.n 0x230ae	@ 00022ea2 04e1
.org 0x22ea4
	.byte 0x20,0xe9,0x02,0x02	@ 00022ea4 data
.org 0x22ea8
	.byte 0xf8,0x2c,0x84,0x08	@ 00022ea8 data
.org 0x22eac
	.byte 0xb0,0xe8,0x02,0x02	@ 00022eac data
.org 0x22eb0
	movs r0, #190	@ 00022eb0 be20
.org 0x22eb2
	lsls r0, r0, #1	@ 00022eb2 4000
.org 0x22eb4
	adds r5, r6, r0	@ 00022eb4 3518
.org 0x22eb6
	ldrb r0, [r5, #0]	@ 00022eb6 2878
.org 0x22eb8
	cmp r0, #5	@ 00022eb8 0528
.org 0x22eba
	bne.n 0x22ec6	@ 00022eba 04d1
.org 0x22ebc
	movs r0, #3	@ 00022ebc 0320
.org 0x22ebe
	bl 0x1f63c	@ 00022ebe fcf7bdfb
.org 0x22ec2
	movs r0, #6	@ 00022ec2 0620
.org 0x22ec4
	b.n 0x230ac	@ 00022ec4 f2e0
.org 0x22ec6
	cmp r0, #6	@ 00022ec6 0628
.org 0x22ec8
	bne.n 0x22f2c	@ 00022ec8 30d1
.org 0x22eca
	ldr r4, [pc, #76]	@ 00022eca 134c
.org 0x22ecc
	ldrh r1, [r4, #8]	@ 00022ecc 2189
.org 0x22ece
	movs r0, #16	@ 00022ece 1020
.org 0x22ed0
	ands r0, r1	@ 00022ed0 0840
.org 0x22ed2
	cmp r0, #0	@ 00022ed2 0028
.org 0x22ed4
	beq.n 0x22f2c	@ 00022ed4 2ad0
.org 0x22ed6
	ldr r1, [pc, #68]	@ 00022ed6 1149
.org 0x22ed8
	ldrb r2, [r1, #0]	@ 00022ed8 0a78
.org 0x22eda
	movs r0, #128	@ 00022eda 8020
.org 0x22edc
	orrs r0, r2	@ 00022edc 1043
.org 0x22ede
	strb r0, [r1, #0]	@ 00022ede 0870
.org 0x22ee0
	ldrb r2, [r1, #1]	@ 00022ee0 4a78
.org 0x22ee2
	movs r0, #2	@ 00022ee2 0220
.org 0x22ee4
	orrs r0, r2	@ 00022ee4 1043
.org 0x22ee6
	strb r0, [r1, #1]	@ 00022ee6 4870
.org 0x22ee8
	adds r0, r4, #0	@ 00022ee8 201c
.org 0x22eea
	adds r0, #16	@ 00022eea 1030
.org 0x22eec
	ldr r1, [pc, #48]	@ 00022eec 0c49
.org 0x22eee
	ldr r1, [r1, #28]	@ 00022eee c969
.org 0x22ef0
	ldr r1, [r1, #28]	@ 00022ef0 c969
.org 0x22ef2
	bl 0x275f0	@ 00022ef2 04f07dfb
.org 0x22ef6
	ldrh r0, [r4, #8]	@ 00022ef6 2089
.org 0x22ef8
	ldr r2, [pc, #40]	@ 00022ef8 0a4a
.org 0x22efa
	ands r2, r0	@ 00022efa 0240
.org 0x22efc
	ldrb r1, [r4, #18]	@ 00022efc a17c
.org 0x22efe
	movs r0, #253	@ 00022efe fd20
.org 0x22f00
	ands r0, r1	@ 00022f00 0840
.org 0x22f02
	strb r0, [r4, #18]	@ 00022f02 a074
.org 0x22f04
	ldr r3, [pc, #32]	@ 00022f04 084b
.org 0x22f06
	ldrb r1, [r3, #4]	@ 00022f06 1979
.org 0x22f08
	movs r0, #247	@ 00022f08 f720
.org 0x22f0a
	ands r0, r1	@ 00022f0a 0840
.org 0x22f0c
	strb r0, [r3, #4]	@ 00022f0c 1871
.org 0x22f0e
	movs r0, #1	@ 00022f0e 0120
.org 0x22f10
	orrs r2, r0	@ 00022f10 0243
.org 0x22f12
	strh r2, [r4, #8]	@ 00022f12 2281
.org 0x22f14
	movs r0, #7	@ 00022f14 0720
.org 0x22f16
	b.n 0x230ac	@ 00022f16 c9e0
.org 0x22f18
	.byte 0x10,0xe9,0x02,0x02	@ 00022f18 data
.org 0x22f1c
	.byte 0xe0,0x32,0x00,0x03	@ 00022f1c data
.org 0x22f20
	.byte 0xf8,0x2c,0x84,0x08	@ 00022f20 data
.org 0x22f24
	.byte 0xef,0xff,0x00,0x00	@ 00022f24 data
.org 0x22f28
	.byte 0xb0,0xe8,0x02,0x02	@ 00022f28 data
.org 0x22f2c
	movs r1, #190	@ 00022f2c be21
.org 0x22f2e
	lsls r1, r1, #1	@ 00022f2e 4900
.org 0x22f30
	adds r4, r6, r1	@ 00022f30 7418
.org 0x22f32
	ldrb r0, [r4, #0]	@ 00022f32 2078
.org 0x22f34
	cmp r0, #7	@ 00022f34 0728
.org 0x22f36
	bne.n 0x22f50	@ 00022f36 0bd1
.org 0x22f38
	ldr r1, [pc, #16]	@ 00022f38 0449
.org 0x22f3a
	ldrb r2, [r1, #0]	@ 00022f3a 0a78
.org 0x22f3c
	movs r0, #127	@ 00022f3c 7f20
.org 0x22f3e
	ands r0, r2	@ 00022f3e 1040
.org 0x22f40
	movs r2, #0	@ 00022f40 0022
.org 0x22f42
	strb r0, [r1, #0]	@ 00022f42 0870
.org 0x22f44
	strb r2, [r1, #1]	@ 00022f44 4a70
.org 0x22f46
	movs r0, #8	@ 00022f46 0820
.org 0x22f48
	strb r0, [r4, #0]	@ 00022f48 2070
.org 0x22f4a
	b.n 0x230ae	@ 00022f4a b0e0
.org 0x22f4c
	.byte 0xe0,0x32,0x00,0x03	@ 00022f4c data
.org 0x22f50
	cmp r0, #8	@ 00022f50 0828
.org 0x22f52
	bne.n 0x22f8c	@ 00022f52 1bd1
.org 0x22f54
	ldr r1, [r2, #84]	@ 00022f54 516d
.org 0x22f56
	movs r0, #150	@ 00022f56 9620
.org 0x22f58
	lsls r0, r0, #12	@ 00022f58 0003
.org 0x22f5a
	cmp r1, r0	@ 00022f5a 8142
.org 0x22f5c
	ble.n 0x22f8c	@ 00022f5c 16dd
.org 0x22f5e
	ldr r0, [pc, #32]	@ 00022f5e 0848
.org 0x22f60
	ldr r2, [pc, #32]	@ 00022f60 084a
.org 0x22f62
	adds r0, r0, r2	@ 00022f62 8018
.org 0x22f64
	movs r1, #255	@ 00022f64 ff21
.org 0x22f66
	strb r1, [r0, #0]	@ 00022f66 0170
.org 0x22f68
	movs r0, #5	@ 00022f68 0520
.org 0x22f6a
	bl 0x1f63c	@ 00022f6a fcf767fb
.org 0x22f6e
	ldr r2, [pc, #24]	@ 00022f6e 064a
.org 0x22f70
	ldrb r1, [r2, #4]	@ 00022f70 1179
.org 0x22f72
	movs r0, #8	@ 00022f72 0820
.org 0x22f74
	orrs r0, r1	@ 00022f74 0843
.org 0x22f76
	strb r0, [r2, #4]	@ 00022f76 1071
.org 0x22f78
	movs r0, #9	@ 00022f78 0920
.org 0x22f7a
	strb r0, [r4, #0]	@ 00022f7a 2070
.org 0x22f7c
	b.n 0x230ae	@ 00022f7c 97e0
.org 0x22f7e
	.byte 0x00	@ 00022f7e data
.org 0x22f7f
	.byte 0x00	@ 00022f7f data
.org 0x22f80
	.byte 0x40,0xe4,0x02,0x02	@ 00022f80 data
.org 0x22f84
	.byte 0x51,0x04,0x00,0x00	@ 00022f84 data
.org 0x22f88
	.byte 0xb0,0xe8,0x02,0x02	@ 00022f88 data
.org 0x22f8c
	movs r0, #190	@ 00022f8c be20
.org 0x22f8e
	lsls r0, r0, #1	@ 00022f8e 4000
.org 0x22f90
	adds r4, r6, r0	@ 00022f90 3418
.org 0x22f92
	ldrb r0, [r4, #0]	@ 00022f92 2078
.org 0x22f94
	cmp r0, #9	@ 00022f94 0928
.org 0x22f96
	bne.n 0x22ff8	@ 00022f96 2fd1
.org 0x22f98
	ldr r0, [r2, #84]	@ 00022f98 506d
.org 0x22f9a
	ldr r1, [pc, #76]	@ 00022f9a 1349
.org 0x22f9c
	adds r0, r0, r1	@ 00022f9c 4018
.org 0x22f9e
	ldr r1, [pc, #76]	@ 00022f9e 1349
.org 0x22fa0
	cmp r0, r1	@ 00022fa0 8842
.org 0x22fa2
	bls.n 0x22fa6	@ 00022fa2 00d9
.org 0x22fa4
	b.n 0x230ae	@ 00022fa4 83e0
.org 0x22fa6
	ldr r1, [r2, #88]	@ 00022fa6 916d
.org 0x22fa8
	ldr r0, [pc, #68]	@ 00022fa8 1148
.org 0x22faa
	cmp r1, r0	@ 00022faa 8142
.org 0x22fac
	ble.n 0x22fb0	@ 00022fac 00dd
.org 0x22fae
	b.n 0x230ae	@ 00022fae 7ee0
.org 0x22fb0
	ldr r0, [pc, #64]	@ 00022fb0 1048
.org 0x22fb2
	movs r2, #180	@ 00022fb2 b422
.org 0x22fb4
	lsls r2, r2, #1	@ 00022fb4 5200
.org 0x22fb6
	adds r4, r0, r2	@ 00022fb6 8418
.org 0x22fb8
	ldr r0, [r4, #0]	@ 00022fb8 2068
.org 0x22fba
	cmp r0, #155	@ 00022fba 9b28
.org 0x22fbc
	beq.n 0x22fda	@ 00022fbc 0dd0
.org 0x22fbe
	movs r5, #1	@ 00022fbe 0125
.org 0x22fc0
	negs r5, r5	@ 00022fc0 6d42
.org 0x22fc2
	cmp r0, r5	@ 00022fc2 a842
.org 0x22fc4
	beq.n 0x22fd0	@ 00022fc4 04d0
.org 0x22fc6
	lsls r0, r0, #16	@ 00022fc6 0004
.org 0x22fc8
	lsrs r0, r0, #16	@ 00022fc8 000c
.org 0x22fca
	bl 0x2a98	@ 00022fca dff765fd
.org 0x22fce
	str r5, [r4, #0]	@ 00022fce 2560
.org 0x22fd0
	movs r0, #155	@ 00022fd0 9b20
.org 0x22fd2
	bl 0x2a88	@ 00022fd2 dff759fd
.org 0x22fd6
	movs r0, #155	@ 00022fd6 9b20
.org 0x22fd8
	str r0, [r4, #0]	@ 00022fd8 2060
.org 0x22fda
	movs r0, #190	@ 00022fda be20
.org 0x22fdc
	lsls r0, r0, #1	@ 00022fdc 4000
.org 0x22fde
	adds r1, r6, r0	@ 00022fde 3118
.org 0x22fe0
	movs r0, #10	@ 00022fe0 0a20
.org 0x22fe2
	strb r0, [r1, #0]	@ 00022fe2 0870
.org 0x22fe4
	b.n 0x230ae	@ 00022fe4 63e0
.org 0x22fe6
	.byte 0x00	@ 00022fe6 data
.org 0x22fe7
	.byte 0x00	@ 00022fe7 data
.org 0x22fe8
	.byte 0xff,0x7f,0xf8,0xff	@ 00022fe8 data
.org 0x22fec
	.byte 0xfe,0xef,0x00,0x00	@ 00022fec data
.org 0x22ff0
	.byte 0xff,0x1f,0x03,0x00	@ 00022ff0 data
.org 0x22ff4
	.byte 0x10,0xe9,0x02,0x02	@ 00022ff4 data
.org 0x22ff8
	cmp r0, #10	@ 00022ff8 0a28
.org 0x22ffa
	bne.n 0x23018	@ 00022ffa 0dd1
.org 0x22ffc
	ldr r1, [r2, #84]	@ 00022ffc 516d
.org 0x22ffe
	movs r0, #136	@ 00022ffe 8820
.org 0x23000
	lsls r0, r0, #12	@ 00023000 0003
.org 0x23002
	cmp r1, r0	@ 00023002 8142
.org 0x23004
	ble.n 0x23018	@ 00023004 08dd
.org 0x23006
	ldr r0, [pc, #8]	@ 00023006 0248
.org 0x23008
	ldr r1, [pc, #8]	@ 00023008 0249
.org 0x2300a
	ldr r1, [r1, #28]	@ 0002300a c969
.org 0x2300c
	ldr r1, [r1, #36]	@ 0002300c 496a
.org 0x2300e
	b.n 0x23036	@ 0002300e 12e0
.org 0x23010
	.byte 0x20,0xe9,0x02,0x02	@ 00023010 data
.org 0x23014
	.byte 0xf8,0x2c,0x84,0x08	@ 00023014 data
.org 0x23018
	movs r1, #190	@ 00023018 be21
.org 0x2301a
	lsls r1, r1, #1	@ 0002301a 4900
.org 0x2301c
	adds r4, r6, r1	@ 0002301c 7418
.org 0x2301e
	ldrb r0, [r4, #0]	@ 0002301e 2078
.org 0x23020
	cmp r0, #11	@ 00023020 0b28
.org 0x23022
	bne.n 0x23050	@ 00023022 15d1
.org 0x23024
	ldr r1, [r2, #84]	@ 00023024 516d
.org 0x23026
	movs r0, #135	@ 00023026 8720
.org 0x23028
	lsls r0, r0, #12	@ 00023028 0003
