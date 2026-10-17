@ FUN_08004ca8  entry 0x08004ca8  size 678
.thumb
.org 0x4ca8
FUN_08004ca8:
	push {r4, r5, r6, r7, lr}	@ 00004ca8 f0b5
.org 0x4caa
	mov r7, sl	@ 00004caa 5746
.org 0x4cac
	mov r6, r9	@ 00004cac 4e46
.org 0x4cae
	mov r5, r8	@ 00004cae 4546
.org 0x4cb0
	push {r5, r6, r7}	@ 00004cb0 e0b4
.org 0x4cb2
	sub sp, #64	@ 00004cb2 90b0
.org 0x4cb4
	str r0, [sp, #0]	@ 00004cb4 0090
.org 0x4cb6
	mov r8, r1	@ 00004cb6 8846
.org 0x4cb8
	str r2, [sp, #4]	@ 00004cb8 0192
.org 0x4cba
	ldr r6, [sp, #96]	@ 00004cba 189e
.org 0x4cbc
	ldr r5, [sp, #100]	@ 00004cbc 199d
.org 0x4cbe
	str r3, [r0, #12]	@ 00004cbe c360
.org 0x4cc0
	ldr r0, [sp, #0]	@ 00004cc0 0098
.org 0x4cc2
	str r6, [r0, #16]	@ 00004cc2 0661
.org 0x4cc4
	str r5, [r0, #20]	@ 00004cc4 4561
.org 0x4cc6
	ldr r1, [r1, #0]	@ 00004cc6 0968
.org 0x4cc8
	mov r9, r1	@ 00004cc8 8946
.org 0x4cca
	mov r0, r9	@ 00004cca 4846
.org 0x4ccc
	movs r1, #15	@ 00004ccc 0f21
.org 0x4cce
	bl 0x128fb8	@ 00004cce 24f173f9
.org 0x4cd2
	adds r4, r0, #0	@ 00004cd2 041c
.org 0x4cd4
	adds r4, #4	@ 00004cd4 0434
.org 0x4cd6
	adds r4, r5, r4	@ 00004cd6 2c19
.org 0x4cd8
	mov r2, r8	@ 00004cd8 4246
.org 0x4cda
	ldr r2, [r2, #4]	@ 00004cda 5268
.org 0x4cdc
	mov r8, r2	@ 00004cdc 9046
.org 0x4cde
	mov r0, r8	@ 00004cde 4046
.org 0x4ce0
	movs r1, #10	@ 00004ce0 0a21
.org 0x4ce2
	bl 0x128fb8	@ 00004ce2 24f169f9
.org 0x4ce6
	ldrb r1, [r5, #0]	@ 00004ce6 2978
.org 0x4ce8
	muls r0, r1	@ 00004ce8 4843
.org 0x4cea
	adds r4, r4, r0	@ 00004cea 2418
.org 0x4cec
	mov sl, r4	@ 00004cec a246
.org 0x4cee
	mov r3, sl	@ 00004cee 5346
.org 0x4cf0
	str r3, [sp, #8]	@ 00004cf0 0293
.org 0x4cf2
	mov r0, r9	@ 00004cf2 4846
.org 0x4cf4
	movs r1, #15	@ 00004cf4 0f21
.org 0x4cf6
	bl 0x129050	@ 00004cf6 24f1abf9
.org 0x4cfa
	adds r4, r0, #0	@ 00004cfa 041c
.org 0x4cfc
	lsls r4, r4, #16	@ 00004cfc 2404
.org 0x4cfe
	lsrs r4, r4, #16	@ 00004cfe 240c
.org 0x4d00
	mov r0, r8	@ 00004d00 4046
.org 0x4d02
	movs r1, #10	@ 00004d02 0a21
.org 0x4d04
	bl 0x129050	@ 00004d04 24f1a4f9
.org 0x4d08
	mov r2, sl	@ 00004d08 5246
.org 0x4d0a
	ldrb r1, [r2, #0]	@ 00004d0a 1178
.org 0x4d0c
	lsls r2, r1, #2	@ 00004d0c 8a00
.org 0x4d0e
	adds r2, r2, r1	@ 00004d0e 5218
.org 0x4d10
	lsls r1, r2, #4	@ 00004d10 1101
.org 0x4d12
	subs r1, r1, r2	@ 00004d12 891a
.org 0x4d14
	lsls r1, r1, #2	@ 00004d14 8900
.org 0x4d16
	adds r6, r6, r1	@ 00004d16 7618
.org 0x4d18
	lsls r4, r4, #16	@ 00004d18 2404
.org 0x4d1a
	asrs r4, r4, #16	@ 00004d1a 2414
.org 0x4d1c
	lsls r2, r4, #1	@ 00004d1c 6200
.org 0x4d1e
	adds r6, r6, r2	@ 00004d1e b618
.org 0x4d20
	lsls r0, r0, #16	@ 00004d20 0004
.org 0x4d22
	asrs r0, r0, #16	@ 00004d22 0014
.org 0x4d24
	lsls r1, r0, #4	@ 00004d24 0101
.org 0x4d26
	subs r1, r1, r0	@ 00004d26 091a
.org 0x4d28
	lsls r1, r1, #1	@ 00004d28 4900
.org 0x4d2a
	adds r7, r6, r1	@ 00004d2a 7718
.org 0x4d2c
	movs r1, #0	@ 00004d2c 0021
.org 0x4d2e
	movs r3, #0	@ 00004d2e 0023
.org 0x4d30
	str r3, [sp, #12]	@ 00004d30 0393
.org 0x4d32
	movs r5, #0	@ 00004d32 0025
.org 0x4d34
	str r0, [sp, #40]	@ 00004d34 0a90
.org 0x4d36
	movs r0, #10	@ 00004d36 0a20
.org 0x4d38
	ldr r6, [sp, #40]	@ 00004d38 0a9e
.org 0x4d3a
	subs r0, r0, r6	@ 00004d3a 801b
.org 0x4d3c
	str r0, [sp, #44]	@ 00004d3c 0b90
.org 0x4d3e
	subs r6, #20	@ 00004d3e 143e
.org 0x4d40
	str r6, [sp, #16]	@ 00004d40 0496
.org 0x4d42
	ldr r0, [sp, #40]	@ 00004d42 0a98
.org 0x4d44
	subs r0, #30	@ 00004d44 1e38
.org 0x4d46
	str r0, [sp, #20]	@ 00004d46 0590
.org 0x4d48
	str r4, [sp, #48]	@ 00004d48 0c94
.org 0x4d4a
	adds r6, r4, #0	@ 00004d4a 261c
.org 0x4d4c
	subs r6, #30	@ 00004d4c 1e3e
.org 0x4d4e
	str r6, [sp, #24]	@ 00004d4e 0696
.org 0x4d50
	str r2, [sp, #28]	@ 00004d50 0792
.org 0x4d52
	movs r0, #15	@ 00004d52 0f20
.org 0x4d54
	subs r0, r0, r4	@ 00004d54 001b
.org 0x4d56
	str r0, [sp, #52]	@ 00004d56 0d90
.org 0x4d58
	movs r2, #0	@ 00004d58 0022
.org 0x4d5a
	lsls r1, r1, #16	@ 00004d5a 0904
.org 0x4d5c
	str r1, [sp, #56]	@ 00004d5c 0e91
.org 0x4d5e
	lsls r3, r3, #16	@ 00004d5e 1b04
.org 0x4d60
	str r3, [sp, #60]	@ 00004d60 0f93
.org 0x4d62
	str r3, [sp, #32]	@ 00004d62 0893
.org 0x4d64
	asrs r1, r3, #16	@ 00004d64 1914
.org 0x4d66
	str r1, [sp, #36]	@ 00004d66 0991
.org 0x4d68
	ldr r3, [sp, #56]	@ 00004d68 0e9b
.org 0x4d6a
	lsrs r6, r3, #16	@ 00004d6a 1e0c
.org 0x4d6c
	lsls r2, r2, #16	@ 00004d6c 1204
.org 0x4d6e
	mov r9, r2	@ 00004d6e 9146
.org 0x4d70
	ldr r0, [sp, #36]	@ 00004d70 0998
.org 0x4d72
	cmp r0, #0	@ 00004d72 0028
.org 0x4d74
	bne.n 0x4d86	@ 00004d74 07d1
.org 0x4d76
	lsls r0, r6, #16	@ 00004d76 3004
.org 0x4d78
	asrs r1, r0, #16	@ 00004d78 0114
.org 0x4d7a
	mov r8, r0	@ 00004d7a 8046
.org 0x4d7c
	ldr r2, [sp, #44]	@ 00004d7c 0b9a
.org 0x4d7e
	cmp r1, r2	@ 00004d7e 9142
.org 0x4d80
	blt.n 0x4d84	@ 00004d80 00db
.org 0x4d82
	b.n 0x4ea6	@ 00004d82 90e0
.org 0x4d84
	b.n 0x4dd2	@ 00004d84 25e0
.org 0x4d86
	ldr r3, [sp, #32]	@ 00004d86 089b
.org 0x4d88
	asrs r0, r3, #16	@ 00004d88 1814
.org 0x4d8a
	cmp r0, #1	@ 00004d8a 0128
.org 0x4d8c
	bne.n 0x4d9c	@ 00004d8c 06d1
.org 0x4d8e
	lsls r1, r6, #16	@ 00004d8e 3104
.org 0x4d90
	asrs r0, r1, #16	@ 00004d90 0814
.org 0x4d92
	subs r0, #10	@ 00004d92 0a38
.org 0x4d94
	ldr r2, [sp, #40]	@ 00004d94 0a9a
.org 0x4d96
	adds r0, r0, r2	@ 00004d96 8018
.org 0x4d98
	mov r8, r1	@ 00004d98 8846
.org 0x4d9a
	b.n 0x4dc2	@ 00004d9a 12e0
.org 0x4d9c
	cmp r0, #2	@ 00004d9c 0228
.org 0x4d9e
	bne.n 0x4db0	@ 00004d9e 07d1
.org 0x4da0
	lsls r0, r6, #16	@ 00004da0 3004
.org 0x4da2
	asrs r1, r0, #16	@ 00004da2 0114
.org 0x4da4
	mov r8, r0	@ 00004da4 8046
.org 0x4da6
	cmp r1, #31	@ 00004da6 1f29
.org 0x4da8
	bgt.n 0x4ea6	@ 00004da8 7ddc
.org 0x4daa
	ldr r3, [sp, #16]	@ 00004daa 049b
.org 0x4dac
	adds r0, r1, r3	@ 00004dac c818
.org 0x4dae
	b.n 0x4dc2	@ 00004dae 08e0
.org 0x4db0
	cmp r0, #3	@ 00004db0 0328
.org 0x4db2
	bne.n 0x4dc8	@ 00004db2 09d1
.org 0x4db4
	lsls r0, r6, #16	@ 00004db4 3004
.org 0x4db6
	asrs r1, r0, #16	@ 00004db6 0114
.org 0x4db8
	mov r8, r0	@ 00004db8 8046
.org 0x4dba
	cmp r1, #31	@ 00004dba 1f29
.org 0x4dbc
	bgt.n 0x4ea6	@ 00004dbc 73dc
.org 0x4dbe
	ldr r2, [sp, #20]	@ 00004dbe 059a
.org 0x4dc0
	adds r0, r1, r2	@ 00004dc0 8818
.org 0x4dc2
	cmp r0, #9	@ 00004dc2 0928
.org 0x4dc4
	bgt.n 0x4ea6	@ 00004dc4 6fdc
.org 0x4dc6
	b.n 0x4dd2	@ 00004dc6 04e0
.org 0x4dc8
	lsls r0, r6, #16	@ 00004dc8 3004
.org 0x4dca
	asrs r1, r0, #16	@ 00004dca 0114
.org 0x4dcc
	mov r8, r0	@ 00004dcc 8046
.org 0x4dce
	cmp r1, #31	@ 00004dce 1f29
.org 0x4dd0
	bgt.n 0x4ea6	@ 00004dd0 69dc
.org 0x4dd2
	ldr r3, [sp, #12]	@ 00004dd2 039b
.org 0x4dd4
	lsls r0, r3, #16	@ 00004dd4 1804
.org 0x4dd6
	lsrs r5, r0, #16	@ 00004dd6 050c
.org 0x4dd8
	mov ip, r0	@ 00004dd8 8446
.org 0x4dda
	mov r0, r9	@ 00004dda 4846
.org 0x4ddc
	cmp r0, #0	@ 00004ddc 0028
.org 0x4dde
	bne.n 0x4dec	@ 00004dde 05d1
.org 0x4de0
	lsls r0, r5, #16	@ 00004de0 2804
.org 0x4de2
	asrs r0, r0, #16	@ 00004de2 0014
.org 0x4de4
	ldr r1, [sp, #52]	@ 00004de4 0d99
.org 0x4de6
	cmp r0, r1	@ 00004de6 8842
.org 0x4de8
	bge.n 0x4e76	@ 00004de8 45da
.org 0x4dea
	b.n 0x4e1e	@ 00004dea 18e0
.org 0x4dec
	mov r2, r9	@ 00004dec 4a46
.org 0x4dee
	asrs r0, r2, #16	@ 00004dee 1014
.org 0x4df0
	cmp r0, #1	@ 00004df0 0128
.org 0x4df2
	bne.n 0x4e00	@ 00004df2 05d1
.org 0x4df4
	lsls r0, r5, #16	@ 00004df4 2804
.org 0x4df6
	asrs r0, r0, #16	@ 00004df6 0014
.org 0x4df8
	subs r0, #15	@ 00004df8 0f38
.org 0x4dfa
	ldr r3, [sp, #48]	@ 00004dfa 0c9b
.org 0x4dfc
	adds r0, r0, r3	@ 00004dfc c018
.org 0x4dfe
	b.n 0x4e10	@ 00004dfe 07e0
.org 0x4e00
	cmp r0, #2	@ 00004e00 0228
.org 0x4e02
	bne.n 0x4e16	@ 00004e02 08d1
.org 0x4e04
	lsls r0, r5, #16	@ 00004e04 2804
.org 0x4e06
	asrs r0, r0, #16	@ 00004e06 0014
.org 0x4e08
	cmp r0, #31	@ 00004e08 1f28
.org 0x4e0a
	bgt.n 0x4e76	@ 00004e0a 34dc
.org 0x4e0c
	ldr r1, [sp, #24]	@ 00004e0c 0699
.org 0x4e0e
	adds r0, r0, r1	@ 00004e0e 4018
.org 0x4e10
	cmp r0, #14	@ 00004e10 0e28
.org 0x4e12
	bgt.n 0x4e76	@ 00004e12 30dc
.org 0x4e14
	b.n 0x4e1e	@ 00004e14 03e0
.org 0x4e16
	lsls r0, r5, #16	@ 00004e16 2804
.org 0x4e18
	asrs r0, r0, #16	@ 00004e18 0014
.org 0x4e1a
	cmp r0, #31	@ 00004e1a 1f28
.org 0x4e1c
	bgt.n 0x4e76	@ 00004e1c 2bdc
.org 0x4e1e
	ldrh r0, [r7, #0]	@ 00004e1e 3888
.org 0x4e20
	lsls r0, r0, #3	@ 00004e20 c000
.org 0x4e22
	ldr r2, [sp, #0]	@ 00004e22 009a
.org 0x4e24
	ldr r3, [r2, #12]	@ 00004e24 d368
.org 0x4e26
	adds r3, r3, r0	@ 00004e26 1b18
.org 0x4e28
	lsls r4, r5, #16	@ 00004e28 2c04
.org 0x4e2a
	asrs r4, r4, #16	@ 00004e2a 2414
.org 0x4e2c
	mov r0, r8	@ 00004e2c 4046
.org 0x4e2e
	asrs r5, r0, #9	@ 00004e2e 4512
.org 0x4e30
	lsls r0, r4, #1	@ 00004e30 6000
.org 0x4e32
	ldr r1, [sp, #4]	@ 00004e32 0199
.org 0x4e34
	adds r0, r0, r1	@ 00004e34 4018
.org 0x4e36
	adds r5, r5, r0	@ 00004e36 2d18
.org 0x4e38
	ldrh r0, [r3, #0]	@ 00004e38 1888
.org 0x4e3a
	movs r1, #255	@ 00004e3a ff21
.org 0x4e3c
	ands r1, r0	@ 00004e3c 0140
.org 0x4e3e
	ldrh r2, [r3, #2]	@ 00004e3e 5a88
.org 0x4e40
	movs r0, #255	@ 00004e40 ff20
.org 0x4e42
	ands r0, r2	@ 00004e42 1040
.org 0x4e44
	lsls r0, r0, #8	@ 00004e44 0002
.org 0x4e46
	orrs r1, r0	@ 00004e46 0143
.org 0x4e48
	strh r1, [r5, #0]	@ 00004e48 2980
.org 0x4e4a
	adds r5, #64	@ 00004e4a 4035
.org 0x4e4c
	ldrh r0, [r3, #4]	@ 00004e4c 9888
.org 0x4e4e
	movs r1, #255	@ 00004e4e ff21
.org 0x4e50
	ands r1, r0	@ 00004e50 0140
.org 0x4e52
	ldrh r2, [r3, #6]	@ 00004e52 da88
.org 0x4e54
	movs r0, #255	@ 00004e54 ff20
.org 0x4e56
	ands r0, r2	@ 00004e56 1040
.org 0x4e58
	lsls r0, r0, #8	@ 00004e58 0002
.org 0x4e5a
	orrs r1, r0	@ 00004e5a 0143
.org 0x4e5c
	strh r1, [r5, #0]	@ 00004e5c 2980
.org 0x4e5e
	adds r7, #2	@ 00004e5e 0237
.org 0x4e60
	adds r4, #1	@ 00004e60 0134
.org 0x4e62
	lsls r4, r4, #16	@ 00004e62 2404
.org 0x4e64
	lsrs r5, r4, #16	@ 00004e64 250c
.org 0x4e66
	mov r2, r9	@ 00004e66 4a46
.org 0x4e68
	cmp r2, #0	@ 00004e68 002a
.org 0x4e6a
	bne.n 0x4dec	@ 00004e6a bfd1
.org 0x4e6c
	lsls r0, r5, #16	@ 00004e6c 2804
.org 0x4e6e
	asrs r0, r0, #16	@ 00004e6e 0014
.org 0x4e70
	ldr r3, [sp, #52]	@ 00004e70 0d9b
.org 0x4e72
	cmp r0, r3	@ 00004e72 9842
.org 0x4e74
	blt.n 0x4e1e	@ 00004e74 d3db
.org 0x4e76
	lsls r0, r5, #16	@ 00004e76 2804
.org 0x4e78
	asrs r0, r0, #16	@ 00004e78 0014
.org 0x4e7a
	mov r2, ip	@ 00004e7a 6246
.org 0x4e7c
	asrs r1, r2, #16	@ 00004e7c 1114
.org 0x4e7e
	subs r0, r0, r1	@ 00004e7e 401a
.org 0x4e80
	movs r3, #15	@ 00004e80 0f23
.org 0x4e82
	subs r0, r3, r0	@ 00004e82 181a
.org 0x4e84
	lsls r0, r0, #1	@ 00004e84 4000
.org 0x4e86
	adds r7, r7, r0	@ 00004e86 3f18
.org 0x4e88
	lsls r0, r6, #16	@ 00004e88 3004
.org 0x4e8a
	movs r6, #128	@ 00004e8a 8026
.org 0x4e8c
	lsls r6, r6, #9	@ 00004e8c 7602
.org 0x4e8e
	adds r0, r0, r6	@ 00004e8e 8019
.org 0x4e90
	lsrs r6, r0, #16	@ 00004e90 060c
.org 0x4e92
	ldr r0, [sp, #36]	@ 00004e92 0998
.org 0x4e94
	cmp r0, #0	@ 00004e94 0028
.org 0x4e96
	beq.n 0x4e9a	@ 00004e96 00d0
.org 0x4e98
	b.n 0x4d86	@ 00004e98 75e7
.org 0x4e9a
	lsls r0, r6, #16	@ 00004e9a 3004
.org 0x4e9c
	asrs r1, r0, #16	@ 00004e9c 0114
.org 0x4e9e
	mov r8, r0	@ 00004e9e 8046
.org 0x4ea0
	ldr r2, [sp, #44]	@ 00004ea0 0b9a
.org 0x4ea2
	cmp r1, r2	@ 00004ea2 9142
.org 0x4ea4
	blt.n 0x4dd2	@ 00004ea4 95db
.org 0x4ea6
	str r5, [sp, #12]	@ 00004ea6 0395
.org 0x4ea8
	mov r3, r9	@ 00004ea8 4b46
.org 0x4eaa
	asrs r0, r3, #16	@ 00004eaa 1814
.org 0x4eac
	cmp r0, #3	@ 00004eac 0328
.org 0x4eae
	beq.n 0x4efc	@ 00004eae 25d0
.org 0x4eb0
	movs r6, #1	@ 00004eb0 0126
.org 0x4eb2
	add sl, r6	@ 00004eb2 b244
.org 0x4eb4
	ldr r0, [sp, #36]	@ 00004eb4 0998
.org 0x4eb6
	cmp r0, #2	@ 00004eb6 0228
.org 0x4eb8
	bne.n 0x4ed8	@ 00004eb8 0ed1
.org 0x4eba
	mov r1, sl	@ 00004eba 5146
.org 0x4ebc
	ldrb r0, [r1, #0]	@ 00004ebc 0878
.org 0x4ebe
	lsls r1, r0, #2	@ 00004ebe 8100
.org 0x4ec0
	adds r1, r1, r0	@ 00004ec0 0918
.org 0x4ec2
	lsls r0, r1, #4	@ 00004ec2 0801
.org 0x4ec4
	subs r0, r0, r1	@ 00004ec4 401a
.org 0x4ec6
	lsls r0, r0, #2	@ 00004ec6 8000
.org 0x4ec8
	ldr r2, [sp, #0]	@ 00004ec8 009a
.org 0x4eca
	ldr r1, [r2, #16]	@ 00004eca 1169
.org 0x4ecc
	adds r1, r1, r0	@ 00004ecc 0918
.org 0x4ece
	ldr r3, [sp, #40]	@ 00004ece 0a9b
.org 0x4ed0
	lsls r0, r3, #4	@ 00004ed0 1801
.org 0x4ed2
	subs r0, r0, r3	@ 00004ed2 c01a
.org 0x4ed4
	lsls r0, r0, #1	@ 00004ed4 4000
.org 0x4ed6
	b.n 0x4eea	@ 00004ed6 08e0
.org 0x4ed8
	mov r6, sl	@ 00004ed8 5646
.org 0x4eda
	ldrb r0, [r6, #0]	@ 00004eda 3078
.org 0x4edc
	lsls r1, r0, #2	@ 00004edc 8100
.org 0x4ede
	adds r1, r1, r0	@ 00004ede 0918
.org 0x4ee0
	lsls r0, r1, #4	@ 00004ee0 0801
.org 0x4ee2
	subs r0, r0, r1	@ 00004ee2 401a
.org 0x4ee4
	lsls r0, r0, #2	@ 00004ee4 8000
.org 0x4ee6
	ldr r2, [sp, #0]	@ 00004ee6 009a
.org 0x4ee8
	ldr r1, [r2, #16]	@ 00004ee8 1169
.org 0x4eea
	adds r7, r1, r0	@ 00004eea 0f18
.org 0x4eec
	movs r0, #128	@ 00004eec 8020
.org 0x4eee
	lsls r0, r0, #9	@ 00004eee 4002
.org 0x4ef0
	add r0, r9	@ 00004ef0 4844
.org 0x4ef2
	lsrs r2, r0, #16	@ 00004ef2 020c
.org 0x4ef4
	asrs r0, r0, #16	@ 00004ef4 0014
.org 0x4ef6
	cmp r0, #3	@ 00004ef6 0328
.org 0x4ef8
	bgt.n 0x4efc	@ 00004ef8 00dc
.org 0x4efa
	b.n 0x4d68	@ 00004efa 35e7
.org 0x4efc
	ldr r3, [sp, #60]	@ 00004efc 0f9b
.org 0x4efe
	asrs r2, r3, #16	@ 00004efe 1a14
.org 0x4f00
	cmp r2, #4	@ 00004f00 042a
.org 0x4f02
	beq.n 0x4f3e	@ 00004f02 1cd0
.org 0x4f04
	ldr r6, [sp, #0]	@ 00004f04 009e
.org 0x4f06
	ldr r0, [r6, #20]	@ 00004f06 7069
.org 0x4f08
	ldrb r0, [r0, #0]	@ 00004f08 0078
.org 0x4f0a
	ldr r1, [sp, #8]	@ 00004f0a 0299
.org 0x4f0c
	adds r1, r1, r0	@ 00004f0c 0918
.org 0x4f0e
	mov sl, r1	@ 00004f0e 8a46
.org 0x4f10
	mov r3, sl	@ 00004f10 5346
.org 0x4f12
	str r3, [sp, #8]	@ 00004f12 0293
.org 0x4f14
	ldrb r1, [r1, #0]	@ 00004f14 0978
.org 0x4f16
	lsls r0, r1, #2	@ 00004f16 8800
.org 0x4f18
	adds r0, r0, r1	@ 00004f18 4018
.org 0x4f1a
	lsls r1, r0, #4	@ 00004f1a 0101
.org 0x4f1c
	subs r1, r1, r0	@ 00004f1c 091a
.org 0x4f1e
	lsls r1, r1, #2	@ 00004f1e 8900
.org 0x4f20
	ldr r0, [r6, #16]	@ 00004f20 3069
.org 0x4f22
	adds r0, r0, r1	@ 00004f22 4018
.org 0x4f24
	ldr r6, [sp, #28]	@ 00004f24 079e
.org 0x4f26
	adds r7, r0, r6	@ 00004f26 8719
.org 0x4f28
	mov r0, r8	@ 00004f28 4046
.org 0x4f2a
	lsrs r1, r0, #16	@ 00004f2a 010c
.org 0x4f2c
	movs r3, #0	@ 00004f2c 0023
.org 0x4f2e
	str r3, [sp, #12]	@ 00004f2e 0393
.org 0x4f30
	adds r0, r2, #1	@ 00004f30 501c
.org 0x4f32
	lsls r0, r0, #16	@ 00004f32 0004
.org 0x4f34
	lsrs r3, r0, #16	@ 00004f34 030c
.org 0x4f36
	asrs r0, r0, #16	@ 00004f36 0014
.org 0x4f38
	cmp r0, #4	@ 00004f38 0428
.org 0x4f3a
	bgt.n 0x4f3e	@ 00004f3a 00dc
.org 0x4f3c
	b.n 0x4d58	@ 00004f3c 0ce7
.org 0x4f3e
	add sp, #64	@ 00004f3e 10b0
.org 0x4f40
	pop {r3, r4, r5}	@ 00004f40 38bc
.org 0x4f42
	mov r8, r3	@ 00004f42 9846
.org 0x4f44
	mov r9, r4	@ 00004f44 a146
.org 0x4f46
	mov sl, r5	@ 00004f46 aa46
.org 0x4f48
	pop {r4, r5, r6, r7}	@ 00004f48 f0bc
.org 0x4f4a
	pop {r0}	@ 00004f4a 01bc
.org 0x4f4c
	bx r0	@ 00004f4c 0047
