@ FUN_08109d58  entry 0x08109d58  size 362
.thumb
.org 0x109d58
FUN_08109d58:
	push {r4, r5, r6, r7, lr}	@ 00109d58 f0b5
.org 0x109d5a
	mov r7, sl	@ 00109d5a 5746
.org 0x109d5c
	mov r6, r9	@ 00109d5c 4e46
.org 0x109d5e
	mov r5, r8	@ 00109d5e 4546
.org 0x109d60
	push {r5, r6, r7}	@ 00109d60 e0b4
.org 0x109d62
	sub sp, #4	@ 00109d62 81b0
.org 0x109d64
	adds r6, r0, #0	@ 00109d64 061c
.org 0x109d66
	adds r0, #180	@ 00109d66 b430
.org 0x109d68
	ldr r0, [r0, #0]	@ 00109d68 0068
.org 0x109d6a
	mov sl, r0	@ 00109d6a 8246
.org 0x109d6c
	adds r0, r6, #0	@ 00109d6c 301c
.org 0x109d6e
	adds r0, #184	@ 00109d6e b830
.org 0x109d70
	ldr r0, [r0, #0]	@ 00109d70 0068
.org 0x109d72
	str r0, [sp, #0]	@ 00109d72 0090
.org 0x109d74
	mov r1, sl	@ 00109d74 5146
.org 0x109d76
	ldrb r0, [r1, #10]	@ 00109d76 887a
.org 0x109d78
	lsrs r7, r0, #4	@ 00109d78 0709
.org 0x109d7a
	movs r4, #1	@ 00109d7a 0124
.org 0x109d7c
	ands r7, r4	@ 00109d7c 2740
.org 0x109d7e
	adds r0, r6, #0	@ 00109d7e 301c
.org 0x109d80
	bl 0x1cd28	@ 00109d80 12f7d2ff
.org 0x109d84
	adds r0, r6, #0	@ 00109d84 301c
.org 0x109d86
	bl 0x1ceec	@ 00109d86 13f7b1f8
.org 0x109d8a
	ldrb r0, [r6, #10]	@ 00109d8a b07a
.org 0x109d8c
	movs r2, #1	@ 00109d8c 0122
.org 0x109d8e
	mov r8, r2	@ 00109d8e 9046
.org 0x109d90
	movs r5, #0	@ 00109d90 0025
.org 0x109d92
	mov r1, r8	@ 00109d92 4146
.org 0x109d94
	orrs r0, r1	@ 00109d94 0843
.org 0x109d96
	movs r1, #2	@ 00109d96 0221
.org 0x109d98
	orrs r0, r1	@ 00109d98 0843
.org 0x109d9a
	strb r0, [r6, #10]	@ 00109d9a b072
.org 0x109d9c
	adds r0, r6, #0	@ 00109d9c 301c
.org 0x109d9e
	adds r0, #34	@ 00109d9e 2230
.org 0x109da0
	strb r4, [r0, #0]	@ 00109da0 0470
.org 0x109da2
	ldrb r1, [r6, #11]	@ 00109da2 f17a
.org 0x109da4
	movs r0, #251	@ 00109da4 fb20
.org 0x109da6
	ands r0, r1	@ 00109da6 0840
.org 0x109da8
	strb r0, [r6, #11]	@ 00109da8 f072
.org 0x109daa
	ldr r1, [pc, #84]	@ 00109daa 1549
.org 0x109dac
	adds r0, r6, #0	@ 00109dac 301c
.org 0x109dae
	bl 0x1cf00	@ 00109dae 13f7a7f8
.org 0x109db2
	adds r0, r6, #0	@ 00109db2 301c
.org 0x109db4
	adds r0, #76	@ 00109db4 4c30
.org 0x109db6
	strb r5, [r0, #0]	@ 00109db6 0570
.org 0x109db8
	adds r2, r6, #0	@ 00109db8 321c
.org 0x109dba
	adds r2, #74	@ 00109dba 4a32
.org 0x109dbc
	ldrb r1, [r2, #0]	@ 00109dbc 1178
.org 0x109dbe
	movs r0, #17	@ 00109dbe 1120
.org 0x109dc0
	negs r0, r0	@ 00109dc0 4042
.org 0x109dc2
	ands r0, r1	@ 00109dc2 0840
.org 0x109dc4
	strb r0, [r2, #0]	@ 00109dc4 1070
.org 0x109dc6
	ldrb r1, [r6, #10]	@ 00109dc6 b17a
.org 0x109dc8
	movs r0, #239	@ 00109dc8 ef20
.org 0x109dca
	ands r0, r1	@ 00109dca 0840
.org 0x109dcc
	strb r0, [r6, #10]	@ 00109dcc b072
.org 0x109dce
	mov r2, sl	@ 00109dce 5246
.org 0x109dd0
	ldrb r0, [r2, #13]	@ 00109dd0 507b
.org 0x109dd2
	cmp r0, #2	@ 00109dd2 0228
.org 0x109dd4
	bne.n 0x109e08	@ 00109dd4 18d1
.org 0x109dd6
	ldrb r1, [r2, #30]	@ 00109dd6 917f
.org 0x109dd8
	lsls r1, r1, #8	@ 00109dd8 0902
.org 0x109dda
	mov r0, sl	@ 00109dda 5046
.org 0x109ddc
	adds r0, #112	@ 00109ddc 7030
.org 0x109dde
	ldrb r0, [r0, #0]	@ 00109dde 0078
.org 0x109de0
	orrs r0, r1	@ 00109de0 0843
.org 0x109de2
	movs r1, #160	@ 00109de2 a021
.org 0x109de4
	lsls r1, r1, #3	@ 00109de4 c900
.org 0x109de6
	cmp r0, r1	@ 00109de6 8842
.org 0x109de8
	bne.n 0x109e04	@ 00109de8 0cd1
.org 0x109dea
	mov r0, sl	@ 00109dea 5046
.org 0x109dec
	adds r0, #113	@ 00109dec 7130
.org 0x109dee
	ldrb r0, [r0, #0]	@ 00109dee 0078
.org 0x109df0
	lsls r0, r0, #24	@ 00109df0 0006
.org 0x109df2
	asrs r0, r0, #24	@ 00109df2 0016
.org 0x109df4
	cmp r0, #2	@ 00109df4 0228
.org 0x109df6
	ble.n 0x109e08	@ 00109df6 07dd
.org 0x109df8
	mov r0, r8	@ 00109df8 4046
.org 0x109dfa
	eors r7, r0	@ 00109dfa 4740
.org 0x109dfc
	b.n 0x109e08	@ 00109dfc 04e0
.org 0x109dfe
	.byte 0x00	@ 00109dfe data
.org 0x109dff
	.byte 0x00	@ 00109dff data
.org 0x109e00
	.byte 0x02,0x09,0x00,0x00	@ 00109e00 data
.org 0x109e04
	mov r1, r8	@ 00109e04 4146
.org 0x109e06
	eors r7, r1	@ 00109e06 4f40
.org 0x109e08
	adds r0, r6, #0	@ 00109e08 301c
.org 0x109e0a
	bl 0x1cff0	@ 00109e0a 13f7f1f8
.org 0x109e0e
	adds r0, r6, #0	@ 00109e0e 301c
.org 0x109e10
	adds r0, #36	@ 00109e10 2430
.org 0x109e12
	movs r2, #0	@ 00109e12 0022
.org 0x109e14
	strb r2, [r0, #0]	@ 00109e14 0270
.org 0x109e16
	ldrb r0, [r6, #10]	@ 00109e16 b07a
.org 0x109e18
	movs r1, #4	@ 00109e18 0421
.org 0x109e1a
	mov r8, r1	@ 00109e1a 8846
.org 0x109e1c
	mov r2, r8	@ 00109e1c 4246
.org 0x109e1e
	orrs r0, r2	@ 00109e1e 1043
.org 0x109e20
	strb r0, [r6, #10]	@ 00109e20 b072
.org 0x109e22
	adds r4, r6, #0	@ 00109e22 341c
.org 0x109e24
	adds r4, #116	@ 00109e24 7434
.org 0x109e26
	ldr r0, [pc, #68]	@ 00109e26 1148
.org 0x109e28
	mov r9, r0	@ 00109e28 8146
.org 0x109e2a
	adds r5, r6, #0	@ 00109e2a 351c
.org 0x109e2c
	adds r5, #84	@ 00109e2c 5435
.org 0x109e2e
	adds r0, r4, #0	@ 00109e2e 201c
.org 0x109e30
	mov r1, r9	@ 00109e30 4946
.org 0x109e32
	adds r2, r5, #0	@ 00109e32 2a1c
.org 0x109e34
	movs r3, #1	@ 00109e34 0123
.org 0x109e36
	bl 0x5760	@ 00109e36 fbf693fc
.org 0x109e3a
	str r6, [r4, #44]	@ 00109e3a e662
.org 0x109e3c
	movs r1, #0	@ 00109e3c 0021
.org 0x109e3e
	str r1, [r4, #36]	@ 00109e3e 6162
.org 0x109e40
	mov r0, sl	@ 00109e40 5046
.org 0x109e42
	adds r0, #245	@ 00109e42 f530
.org 0x109e44
	ldrb r0, [r0, #0]	@ 00109e44 0078
.org 0x109e46
	cmp r0, #2	@ 00109e46 0228
.org 0x109e48
	bne.n 0x109e70	@ 00109e48 12d1
.org 0x109e4a
	ldrb r0, [r6, #10]	@ 00109e4a b07a
.org 0x109e4c
	mov r2, r8	@ 00109e4c 4246
.org 0x109e4e
	orrs r0, r2	@ 00109e4e 1043
.org 0x109e50
	strb r0, [r6, #10]	@ 00109e50 b072
.org 0x109e52
	movs r1, #144	@ 00109e52 9021
.org 0x109e54
	lsls r1, r1, #1	@ 00109e54 4900
.org 0x109e56
	add r1, r9	@ 00109e56 4944
.org 0x109e58
	adds r0, r4, #0	@ 00109e58 201c
.org 0x109e5a
	adds r2, r5, #0	@ 00109e5a 2a1c
.org 0x109e5c
	movs r3, #1	@ 00109e5c 0123
.org 0x109e5e
	bl 0x5760	@ 00109e5e fbf67ffc
.org 0x109e62
	str r6, [r4, #44]	@ 00109e62 e662
.org 0x109e64
	movs r0, #0	@ 00109e64 0020
.org 0x109e66
	str r0, [r4, #36]	@ 00109e66 6062
.org 0x109e68
	b.n 0x109e9e	@ 00109e68 19e0
.org 0x109e6a
	.byte 0x00	@ 00109e6a data
.org 0x109e6b
	.byte 0x00	@ 00109e6b data
.org 0x109e6c
	.byte 0x60,0xc9,0x86,0x08	@ 00109e6c data
.org 0x109e70
	cmp r0, #0	@ 00109e70 0028
.org 0x109e72
	bne.n 0x109e82	@ 00109e72 06d1
.org 0x109e74
	ldrb r0, [r6, #10]	@ 00109e74 b07a
.org 0x109e76
	mov r1, r8	@ 00109e76 4146
.org 0x109e78
	orrs r0, r1	@ 00109e78 0843
.org 0x109e7a
	strb r0, [r6, #10]	@ 00109e7a b072
.org 0x109e7c
	mov r1, r9	@ 00109e7c 4946
.org 0x109e7e
	adds r1, #240	@ 00109e7e f031
.org 0x109e80
	b.n 0x109e8e	@ 00109e80 05e0
.org 0x109e82
	ldrb r0, [r6, #10]	@ 00109e82 b07a
.org 0x109e84
	mov r1, r8	@ 00109e84 4146
.org 0x109e86
	orrs r0, r1	@ 00109e86 0843
.org 0x109e88
	strb r0, [r6, #10]	@ 00109e88 b072
.org 0x109e8a
	mov r1, r9	@ 00109e8a 4946
.org 0x109e8c
	adds r1, #192	@ 00109e8c c031
.org 0x109e8e
	adds r0, r4, #0	@ 00109e8e 201c
.org 0x109e90
	adds r2, r5, #0	@ 00109e90 2a1c
.org 0x109e92
	movs r3, #1	@ 00109e92 0123
.org 0x109e94
	bl 0x5760	@ 00109e94 fbf664fc
.org 0x109e98
	str r6, [r4, #44]	@ 00109e98 e662
.org 0x109e9a
	movs r2, #0	@ 00109e9a 0022
.org 0x109e9c
	str r2, [r4, #36]	@ 00109e9c 6262
.org 0x109e9e
	ldr r2, [sp, #0]	@ 00109e9e 009a
.org 0x109ea0
	ldr r0, [r2, #84]	@ 00109ea0 506d
.org 0x109ea2
	ldr r1, [r2, #88]	@ 00109ea2 916d
.org 0x109ea4
	str r0, [r6, #84]	@ 00109ea4 7065
.org 0x109ea6
	str r1, [r6, #88]	@ 00109ea6 b165
.org 0x109ea8
	cmp r7, #0	@ 00109ea8 002f
.org 0x109eaa
	beq.n 0x109eb2	@ 00109eaa 02d0
.org 0x109eac
	movs r0, #128	@ 00109eac 8020
.org 0x109eae
	lsls r0, r0, #3	@ 00109eae c000
.org 0x109eb0
	b.n 0x109eb4	@ 00109eb0 00e0
.org 0x109eb2
	ldr r0, [pc, #28]	@ 00109eb2 0748
.org 0x109eb4
	str r0, [r6, #92]	@ 00109eb4 f065
.org 0x109eb6
	ldr r0, [pc, #28]	@ 00109eb6 0748
.org 0x109eb8
	str r0, [r6, #96]	@ 00109eb8 3066
.org 0x109eba
	movs r0, #180	@ 00109eba b420
.org 0x109ebc
	strb r0, [r6, #18]	@ 00109ebc b074
.org 0x109ebe
	add sp, #4	@ 00109ebe 01b0
.org 0x109ec0
	pop {r3, r4, r5}	@ 00109ec0 38bc
