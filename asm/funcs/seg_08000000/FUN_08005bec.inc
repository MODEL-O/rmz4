@ FUN_08005bec  entry 0x08005bec  size 1336
.thumb
.org 0x5bec
FUN_08005bec:
	push {r4, r5, r6, r7, lr}	@ 00005bec f0b5
.org 0x5bee
	mov r7, r8	@ 00005bee 4746
.org 0x5bf0
	push {r7}	@ 00005bf0 80b4
.org 0x5bf2
	adds r5, r0, #0	@ 00005bf2 051c
.org 0x5bf4
	adds r4, r1, #0	@ 00005bf4 0c1c
.org 0x5bf6
	ldr r2, [pc, #308]	@ 00005bf6 4d4a
.org 0x5bf8
	ldrb r1, [r2, #0]	@ 00005bf8 1178
.org 0x5bfa
	movs r0, #128	@ 00005bfa 8020
.org 0x5bfc
	ands r0, r1	@ 00005bfc 0840
.org 0x5bfe
	adds r7, r2, #0	@ 00005bfe 171c
.org 0x5c00
	cmp r0, #0	@ 00005c00 0028
.org 0x5c02
	beq.n 0x5c06	@ 00005c02 00d0
.org 0x5c04
	b.n 0x6130	@ 00005c04 94e2
.org 0x5c06
	ldr r0, [r4, #4]	@ 00005c06 6068
.org 0x5c08
	ldr r1, [r5, #60]	@ 00005c08 e96b
.org 0x5c0a
	ldr r2, [r0, #4]	@ 00005c0a 4268
.org 0x5c0c
	ands r1, r2	@ 00005c0c 1140
.org 0x5c0e
	adds r3, r0, #0	@ 00005c0e 031c
.org 0x5c10
	cmp r1, #0	@ 00005c10 0029
.org 0x5c12
	bne.n 0x5c16	@ 00005c12 00d1
.org 0x5c14
	b.n 0x6130	@ 00005c14 8ce2
.org 0x5c16
	ldr r0, [r5, #4]	@ 00005c16 6868
.org 0x5c18
	ldrb r1, [r0, #2]	@ 00005c18 8178
.org 0x5c1a
	adds r6, r0, #0	@ 00005c1a 061c
.org 0x5c1c
	cmp r1, #3	@ 00005c1c 0329
.org 0x5c1e
	bne.n 0x5c42	@ 00005c1e 10d1
.org 0x5c20
	ldrb r1, [r3, #9]	@ 00005c20 597a
.org 0x5c22
	movs r0, #4	@ 00005c22 0420
.org 0x5c24
	ands r0, r1	@ 00005c24 0840
.org 0x5c26
	cmp r0, #0	@ 00005c26 0028
.org 0x5c28
	beq.n 0x5c42	@ 00005c28 0bd0
.org 0x5c2a
	ldr r0, [r5, #24]	@ 00005c2a a869
.org 0x5c2c
	movs r1, #128	@ 00005c2c 8021
.org 0x5c2e
	lsls r1, r1, #22	@ 00005c2e 8905
.org 0x5c30
	orrs r0, r1	@ 00005c30 0843
.org 0x5c32
	str r0, [r5, #24]	@ 00005c32 a861
.org 0x5c34
	ldr r0, [r4, #24]	@ 00005c34 a069
.org 0x5c36
	orrs r0, r1	@ 00005c36 0843
.org 0x5c38
	str r0, [r4, #24]	@ 00005c38 a061
.org 0x5c3a
	movs r1, #197	@ 00005c3a c521
.org 0x5c3c
	lsls r1, r1, #3	@ 00005c3c c900
.org 0x5c3e
	adds r0, r7, r1	@ 00005c3e 7818
.org 0x5c40
	str r5, [r0, #0]	@ 00005c40 0560
.org 0x5c42
	ldrb r0, [r6, #2]	@ 00005c42 b078
.org 0x5c44
	cmp r0, #4	@ 00005c44 0428
.org 0x5c46
	bne.n 0x5c68	@ 00005c46 0fd1
.org 0x5c48
	ldrb r1, [r3, #9]	@ 00005c48 597a
.org 0x5c4a
	movs r0, #16	@ 00005c4a 1020
.org 0x5c4c
	ands r0, r1	@ 00005c4c 0840
.org 0x5c4e
	cmp r0, #0	@ 00005c4e 0028
.org 0x5c50
	beq.n 0x5c68	@ 00005c50 0ad0
.org 0x5c52
	ldr r0, [r5, #24]	@ 00005c52 a869
.org 0x5c54
	movs r1, #128	@ 00005c54 8021
.org 0x5c56
	lsls r1, r1, #23	@ 00005c56 c905
.org 0x5c58
	orrs r0, r1	@ 00005c58 0843
.org 0x5c5a
	str r0, [r5, #24]	@ 00005c5a a861
.org 0x5c5c
	ldr r0, [r4, #24]	@ 00005c5c a069
.org 0x5c5e
	orrs r0, r1	@ 00005c5e 0843
.org 0x5c60
	str r0, [r4, #24]	@ 00005c60 a061
.org 0x5c62
	ldr r1, [pc, #204]	@ 00005c62 3349
.org 0x5c64
	adds r0, r7, r1	@ 00005c64 7818
.org 0x5c66
	str r5, [r0, #0]	@ 00005c66 0560
.org 0x5c68
	ldrb r0, [r6, #2]	@ 00005c68 b078
.org 0x5c6a
	cmp r0, #5	@ 00005c6a 0528
.org 0x5c6c
	bne.n 0x5c90	@ 00005c6c 10d1
.org 0x5c6e
	ldrb r1, [r3, #9]	@ 00005c6e 597a
.org 0x5c70
	movs r0, #8	@ 00005c70 0820
.org 0x5c72
	ands r0, r1	@ 00005c72 0840
.org 0x5c74
	cmp r0, #0	@ 00005c74 0028
.org 0x5c76
	beq.n 0x5c90	@ 00005c76 0bd0
.org 0x5c78
	ldr r0, [r5, #24]	@ 00005c78 a869
.org 0x5c7a
	movs r1, #128	@ 00005c7a 8021
.org 0x5c7c
	lsls r1, r1, #24	@ 00005c7c 0906
.org 0x5c7e
	orrs r0, r1	@ 00005c7e 0843
.org 0x5c80
	str r0, [r5, #24]	@ 00005c80 a861
.org 0x5c82
	ldr r0, [r4, #24]	@ 00005c82 a069
.org 0x5c84
	orrs r0, r1	@ 00005c84 0843
.org 0x5c86
	str r0, [r4, #24]	@ 00005c86 a061
.org 0x5c88
	movs r1, #198	@ 00005c88 c621
.org 0x5c8a
	lsls r1, r1, #3	@ 00005c8a c900
.org 0x5c8c
	adds r0, r7, r1	@ 00005c8c 7818
.org 0x5c8e
	str r5, [r0, #0]	@ 00005c8e 0560
.org 0x5c90
	ldrb r0, [r7, #0]	@ 00005c90 3878
.org 0x5c92
	ldrb r1, [r3, #1]	@ 00005c92 5978
.org 0x5c94
	asrs r0, r1	@ 00005c94 0841
.org 0x5c96
	movs r1, #1	@ 00005c96 0121
.org 0x5c98
	ands r0, r1	@ 00005c98 0840
.org 0x5c9a
	cmp r0, #0	@ 00005c9a 0028
.org 0x5c9c
	beq.n 0x5ca0	@ 00005c9c 00d0
.org 0x5c9e
	b.n 0x6130	@ 00005c9e 47e2
.org 0x5ca0
	ldrb r7, [r6, #10]	@ 00005ca0 b77a
.org 0x5ca2
	movs r0, #33	@ 00005ca2 2120
.org 0x5ca4
	ands r0, r7	@ 00005ca4 3840
.org 0x5ca6
	cmp r0, #0	@ 00005ca6 0028
.org 0x5ca8
	beq.n 0x5d86	@ 00005ca8 6dd0
.org 0x5caa
	ldrb r1, [r3, #10]	@ 00005caa 997a
.org 0x5cac
	movs r0, #4	@ 00005cac 0420
.org 0x5cae
	ands r0, r1	@ 00005cae 0840
.org 0x5cb0
	cmp r0, #0	@ 00005cb0 0028
.org 0x5cb2
	beq.n 0x5d86	@ 00005cb2 68d0
.org 0x5cb4
	ldr r1, [r5, #24]	@ 00005cb4 a969
.org 0x5cb6
	movs r2, #128	@ 00005cb6 8022
.org 0x5cb8
	lsls r2, r2, #4	@ 00005cb8 1201
.org 0x5cba
	adds r0, r1, #0	@ 00005cba 081c
.org 0x5cbc
	ands r0, r2	@ 00005cbc 1040
.org 0x5cbe
	adds r3, r1, #0	@ 00005cbe 0b1c
.org 0x5cc0
	cmp r0, #0	@ 00005cc0 0028
.org 0x5cc2
	bne.n 0x5d86	@ 00005cc2 60d1
.org 0x5cc4
	ldr r0, [r4, #24]	@ 00005cc4 a069
.org 0x5cc6
	movs r1, #128	@ 00005cc6 8021
.org 0x5cc8
	lsls r1, r1, #3	@ 00005cc8 c900
.org 0x5cca
	ands r0, r1	@ 00005cca 0840
.org 0x5ccc
	cmp r0, #0	@ 00005ccc 0028
.org 0x5cce
	bne.n 0x5d86	@ 00005cce 5ad1
.org 0x5cd0
	ldr r0, [r5, #28]	@ 00005cd0 e869
.org 0x5cd2
	ands r0, r2	@ 00005cd2 1040
.org 0x5cd4
	cmp r0, #0	@ 00005cd4 0028
.org 0x5cd6
	bne.n 0x5ce0	@ 00005cd6 03d1
.org 0x5cd8
	ldr r0, [r4, #28]	@ 00005cd8 e069
.org 0x5cda
	ands r0, r1	@ 00005cda 0840
.org 0x5cdc
	cmp r0, #0	@ 00005cdc 0028
.org 0x5cde
	beq.n 0x5d34	@ 00005cde 29d0
.org 0x5ce0
	ldr r0, [r5, #16]	@ 00005ce0 2869
.org 0x5ce2
	cmp r0, r4	@ 00005ce2 a042
.org 0x5ce4
	bne.n 0x5d86	@ 00005ce4 4fd1
.org 0x5ce6
	ldr r0, [r4, #16]	@ 00005ce6 2069
.org 0x5ce8
	cmp r0, r5	@ 00005ce8 a842
.org 0x5cea
	bne.n 0x5d86	@ 00005cea 4cd1
.org 0x5cec
	movs r0, #2	@ 00005cec 0220
.org 0x5cee
	ands r0, r7	@ 00005cee 3840
.org 0x5cf0
	adds r1, r5, #0	@ 00005cf0 291c
.org 0x5cf2
	adds r1, #33	@ 00005cf2 2131
.org 0x5cf4
	cmp r0, #0	@ 00005cf4 0028
.org 0x5cf6
	beq.n 0x5cfe	@ 00005cf6 02d0
.org 0x5cf8
	ldrb r0, [r1, #0]	@ 00005cf8 0878
.org 0x5cfa
	cmp r0, #0	@ 00005cfa 0028
.org 0x5cfc
	bne.n 0x5d0e	@ 00005cfc 07d1
.org 0x5cfe
	ldrb r0, [r1, #0]	@ 00005cfe 0878
.org 0x5d00
	cmp r0, #0	@ 00005d00 0028
.org 0x5d02
	beq.n 0x5d86	@ 00005d02 40d0
.org 0x5d04
	adds r0, r4, #0	@ 00005d04 201c
.org 0x5d06
	adds r0, #33	@ 00005d06 2130
.org 0x5d08
	ldrb r0, [r0, #0]	@ 00005d08 0078
.org 0x5d0a
	cmp r0, #0	@ 00005d0a 0028
.org 0x5d0c
	beq.n 0x5d86	@ 00005d0c 3bd0
.org 0x5d0e
	ldr r1, [r5, #20]	@ 00005d0e 6969
.org 0x5d10
	movs r0, #128	@ 00005d10 8020
.org 0x5d12
	lsls r0, r0, #4	@ 00005d12 0001
.org 0x5d14
	orrs r1, r0	@ 00005d14 0143
.org 0x5d16
	str r1, [r5, #20]	@ 00005d16 6961
.org 0x5d18
	ldr r2, [r4, #20]	@ 00005d18 6269
.org 0x5d1a
	movs r0, #128	@ 00005d1a 8020
.org 0x5d1c
	lsls r0, r0, #3	@ 00005d1c c000
.org 0x5d1e
	orrs r2, r0	@ 00005d1e 0243
.org 0x5d20
	str r2, [r4, #20]	@ 00005d20 6261
.org 0x5d22
	orrs r1, r3	@ 00005d22 1943
.org 0x5d24
	str r1, [r5, #24]	@ 00005d24 a961
.org 0x5d26
	ldr r0, [r4, #24]	@ 00005d26 a069
.org 0x5d28
	orrs r0, r2	@ 00005d28 1043
.org 0x5d2a
	b.n 0x5d84	@ 00005d2a 2be0
.org 0x5d2c
	.byte 0xe0,0x32,0x00,0x03	@ 00005d2c data
.org 0x5d30
	.byte 0x2c,0x06,0x00,0x00	@ 00005d30 data
.org 0x5d34
	str r4, [r5, #16]	@ 00005d34 2c61
.org 0x5d36
	str r5, [r4, #16]	@ 00005d36 2561
.org 0x5d38
	ldrb r1, [r6, #10]	@ 00005d38 b17a
.org 0x5d3a
	movs r0, #2	@ 00005d3a 0220
.org 0x5d3c
	ands r0, r1	@ 00005d3c 0840
.org 0x5d3e
	cmp r0, #0	@ 00005d3e 0028
.org 0x5d40
	beq.n 0x5d54	@ 00005d40 08d0
.org 0x5d42
	adds r1, r4, #0	@ 00005d42 211c
.org 0x5d44
	adds r1, #33	@ 00005d44 2131
.org 0x5d46
	movs r0, #255	@ 00005d46 ff20
.org 0x5d48
	strb r0, [r1, #0]	@ 00005d48 0870
.org 0x5d4a
	adds r1, r5, #0	@ 00005d4a 291c
.org 0x5d4c
	adds r1, #33	@ 00005d4c 2131
.org 0x5d4e
	movs r0, #1	@ 00005d4e 0120
.org 0x5d50
	negs r0, r0	@ 00005d50 4042
.org 0x5d52
	b.n 0x5d64	@ 00005d52 07e0
.org 0x5d54
	movs r0, #240	@ 00005d54 f020
.org 0x5d56
	ands r0, r1	@ 00005d56 0840
.org 0x5d58
	lsrs r0, r0, #1	@ 00005d58 4008
.org 0x5d5a
	adds r1, r4, #0	@ 00005d5a 211c
.org 0x5d5c
	adds r1, #33	@ 00005d5c 2131
.org 0x5d5e
	strb r0, [r1, #0]	@ 00005d5e 0870
.org 0x5d60
	adds r1, r5, #0	@ 00005d60 291c
.org 0x5d62
	adds r1, #33	@ 00005d62 2131
.org 0x5d64
	strb r0, [r1, #0]	@ 00005d64 0870
.org 0x5d66
	ldr r2, [r5, #20]	@ 00005d66 6a69
.org 0x5d68
	movs r0, #128	@ 00005d68 8020
.org 0x5d6a
	lsls r0, r0, #4	@ 00005d6a 0001
.org 0x5d6c
	orrs r2, r0	@ 00005d6c 0243
.org 0x5d6e
	str r2, [r5, #20]	@ 00005d6e 6a61
.org 0x5d70
	ldr r1, [r4, #20]	@ 00005d70 6169
.org 0x5d72
	movs r0, #128	@ 00005d72 8020
.org 0x5d74
	lsls r0, r0, #3	@ 00005d74 c000
.org 0x5d76
	orrs r1, r0	@ 00005d76 0143
.org 0x5d78
	str r1, [r4, #20]	@ 00005d78 6161
.org 0x5d7a
	ldr r0, [r5, #24]	@ 00005d7a a869
.org 0x5d7c
	orrs r0, r2	@ 00005d7c 1043
.org 0x5d7e
	str r0, [r5, #24]	@ 00005d7e a861
.org 0x5d80
	ldr r0, [r4, #24]	@ 00005d80 a069
.org 0x5d82
	orrs r0, r1	@ 00005d82 0843
.org 0x5d84
	str r0, [r4, #24]	@ 00005d84 a061
.org 0x5d86
	ldr r1, [r4, #24]	@ 00005d86 a169
.org 0x5d88
	movs r0, #9	@ 00005d88 0920
.org 0x5d8a
	ands r0, r1	@ 00005d8a 0840
.org 0x5d8c
	mov ip, r1	@ 00005d8c 8c46
.org 0x5d8e
	cmp r0, #0	@ 00005d8e 0028
.org 0x5d90
	beq.n 0x5d94	@ 00005d90 00d0
.org 0x5d92
	b.n 0x6130	@ 00005d92 cde1
.org 0x5d94
	ldr r0, [r4, #4]	@ 00005d94 6068
.org 0x5d96
	ldr r1, [r5, #60]	@ 00005d96 e96b
.org 0x5d98
	ldr r2, [r0, #12]	@ 00005d98 c268
.org 0x5d9a
	ands r1, r2	@ 00005d9a 1140
.org 0x5d9c
	adds r3, r0, #0	@ 00005d9c 031c
.org 0x5d9e
	cmp r1, #0	@ 00005d9e 0029
.org 0x5da0
	bne.n 0x5da4	@ 00005da0 00d1
.org 0x5da2
	b.n 0x5eda	@ 00005da2 9ae0
.org 0x5da4
	ldr r0, [r5, #4]	@ 00005da4 6868
.org 0x5da6
	ldrb r1, [r0, #2]	@ 00005da6 8178
.org 0x5da8
	adds r6, r0, #0	@ 00005da8 061c
.org 0x5daa
	cmp r1, #1	@ 00005daa 0129
.org 0x5dac
	bne.n 0x5de6	@ 00005dac 1bd1
.org 0x5dae
	ldrb r2, [r6, #4]	@ 00005dae 3279
.org 0x5db0
	cmp r2, #0	@ 00005db0 002a
.org 0x5db2
	beq.n 0x5de6	@ 00005db2 18d0
.org 0x5db4
	ldr r0, [r4, #28]	@ 00005db4 e069
.org 0x5db6
	movs r1, #24	@ 00005db6 1821
.org 0x5db8
	ands r0, r1	@ 00005db8 0840
.org 0x5dba
	cmp r0, #0	@ 00005dba 0028
.org 0x5dbc
	beq.n 0x5de6	@ 00005dbc 13d0
.org 0x5dbe
	adds r0, r4, #0	@ 00005dbe 201c
.org 0x5dc0
	adds r0, #35	@ 00005dc0 2330
.org 0x5dc2
	ldrb r0, [r0, #0]	@ 00005dc2 0078
.org 0x5dc4
	lsls r0, r0, #28	@ 00005dc4 0007
.org 0x5dc6
	lsrs r0, r0, #28	@ 00005dc6 000f
.org 0x5dc8
	cmp r0, r2	@ 00005dc8 9042
.org 0x5dca
	bne.n 0x5de6	@ 00005dca 0cd1
.org 0x5dcc
	adds r0, r4, #0	@ 00005dcc 201c
.org 0x5dce
	adds r0, #34	@ 00005dce 2230
.org 0x5dd0
	adds r1, r5, #0	@ 00005dd0 291c
.org 0x5dd2
	adds r1, #58	@ 00005dd2 3a31
.org 0x5dd4
	ldrb r0, [r0, #0]	@ 00005dd4 0078
.org 0x5dd6
	ldrb r1, [r1, #0]	@ 00005dd6 0978
.org 0x5dd8
	cmp r0, r1	@ 00005dd8 8842
.org 0x5dda
	bcc.n 0x5de6	@ 00005dda 04d3
.org 0x5ddc
	str r4, [r5, #12]	@ 00005ddc ec60
.org 0x5dde
	str r5, [r4, #12]	@ 00005dde e560
.org 0x5de0
	movs r0, #16	@ 00005de0 1020
.org 0x5de2
	mov r1, ip	@ 00005de2 6146
.org 0x5de4
	b.n 0x612c	@ 00005de4 a2e1
.org 0x5de6
	ldrb r0, [r3, #8]	@ 00005de6 187a
.org 0x5de8
	cmp r0, #255	@ 00005de8 ff28
.org 0x5dea
	beq.n 0x5e08	@ 00005dea 0dd0
.org 0x5dec
	str r4, [r5, #12]	@ 00005dec ec60
.org 0x5dee
	ldr r2, [r5, #20]	@ 00005dee 6a69
.org 0x5df0
	movs r0, #32	@ 00005df0 2020
.org 0x5df2
	orrs r2, r0	@ 00005df2 0243
.org 0x5df4
	str r2, [r5, #20]	@ 00005df4 6a61
.org 0x5df6
	ldrb r1, [r3, #9]	@ 00005df6 597a
.org 0x5df8
	movs r0, #1	@ 00005df8 0120
.org 0x5dfa
	ands r0, r1	@ 00005dfa 0840
.org 0x5dfc
	cmp r0, #0	@ 00005dfc 0028
.org 0x5dfe
	beq.n 0x5e08	@ 00005dfe 03d0
.org 0x5e00
	movs r0, #128	@ 00005e00 8020
.org 0x5e02
	lsls r0, r0, #5	@ 00005e02 4001
.org 0x5e04
	orrs r2, r0	@ 00005e04 0243
.org 0x5e06
	str r2, [r5, #20]	@ 00005e06 6a61
.org 0x5e08
	adds r0, r4, #0	@ 00005e08 201c
.org 0x5e0a
	adds r0, #32	@ 00005e0a 2030
.org 0x5e0c
	ldrb r0, [r0, #0]	@ 00005e0c 0078
.org 0x5e0e
	cmp r0, #0	@ 00005e0e 0028
.org 0x5e10
	beq.n 0x5e14	@ 00005e10 00d0
.org 0x5e12
	b.n 0x5fda	@ 00005e12 e2e0
.org 0x5e14
	adds r0, r5, #0	@ 00005e14 281c
.org 0x5e16
	adds r0, #55	@ 00005e16 3730
.org 0x5e18
	ldrb r0, [r0, #0]	@ 00005e18 0078
.org 0x5e1a
	cmp r0, #255	@ 00005e1a ff28
.org 0x5e1c
	bne.n 0x5e20	@ 00005e1c 00d1
.org 0x5e1e
	b.n 0x5fda	@ 00005e1e dce0
.org 0x5e20
	str r5, [r4, #12]	@ 00005e20 e560
.org 0x5e22
	ldr r0, [r4, #20]	@ 00005e22 6069
.org 0x5e24
	movs r1, #8	@ 00005e24 0821
.org 0x5e26
	orrs r0, r1	@ 00005e26 0843
.org 0x5e28
	str r0, [r4, #20]	@ 00005e28 6061
.org 0x5e2a
	ldrb r0, [r6, #4]	@ 00005e2a 3079
.org 0x5e2c
	movs r1, #35	@ 00005e2c 2321
.org 0x5e2e
	adds r1, r1, r4	@ 00005e2e 0919
.org 0x5e30
	mov ip, r1	@ 00005e30 8c46
.org 0x5e32
	movs r3, #15	@ 00005e32 0f23
.org 0x5e34
	adds r1, r3, #0	@ 00005e34 191c
.org 0x5e36
	ands r1, r0	@ 00005e36 0140
.org 0x5e38
	mov r0, ip	@ 00005e38 6046
.org 0x5e3a
	ldrb r2, [r0, #0]	@ 00005e3a 0278
.org 0x5e3c
	movs r0, #16	@ 00005e3c 1020
.org 0x5e3e
	negs r0, r0	@ 00005e3e 4042
.org 0x5e40
	ands r0, r2	@ 00005e40 1040
.org 0x5e42
	orrs r0, r1	@ 00005e42 0843
.org 0x5e44
	adds r1, r5, #0	@ 00005e44 291c
.org 0x5e46
	adds r1, #56	@ 00005e46 3831
.org 0x5e48
	ldrb r1, [r1, #0]	@ 00005e48 0978
.org 0x5e4a
	lsls r1, r1, #4	@ 00005e4a 0901
.org 0x5e4c
	ands r0, r3	@ 00005e4c 1840
.org 0x5e4e
	orrs r0, r1	@ 00005e4e 0843
.org 0x5e50
	mov r1, ip	@ 00005e50 6146
.org 0x5e52
	strb r0, [r1, #0]	@ 00005e52 0870
.org 0x5e54
	adds r0, r5, #0	@ 00005e54 281c
.org 0x5e56
	adds r0, #58	@ 00005e56 3a30
.org 0x5e58
	ldrb r0, [r0, #0]	@ 00005e58 0078
.org 0x5e5a
	adds r1, r4, #0	@ 00005e5a 211c
.org 0x5e5c
	adds r1, #34	@ 00005e5c 2231
.org 0x5e5e
	strb r0, [r1, #0]	@ 00005e5e 0870
.org 0x5e60
	adds r2, r5, #0	@ 00005e60 2a1c
.org 0x5e62
	adds r2, #57	@ 00005e62 3932
.org 0x5e64
	ldrb r1, [r2, #0]	@ 00005e64 1178
.org 0x5e66
	movs r0, #4	@ 00005e66 0420
.org 0x5e68
	ands r0, r1	@ 00005e68 0840
.org 0x5e6a
	cmp r0, #0	@ 00005e6a 0028
.org 0x5e6c
	beq.n 0x5e78	@ 00005e6c 04d0
.org 0x5e6e
	ldr r0, [r4, #20]	@ 00005e6e 6069
.org 0x5e70
	movs r1, #128	@ 00005e70 8021
.org 0x5e72
	lsls r1, r1, #5	@ 00005e72 4901
.org 0x5e74
	orrs r0, r1	@ 00005e74 0843
.org 0x5e76
	str r0, [r4, #20]	@ 00005e76 6061
.org 0x5e78
	ldrb r3, [r2, #0]	@ 00005e78 1378
.org 0x5e7a
	movs r0, #1	@ 00005e7a 0120
.org 0x5e7c
	ands r0, r3	@ 00005e7c 1840
.org 0x5e7e
	adds r2, r3, #0	@ 00005e7e 1a1c
.org 0x5e80
	cmp r0, #0	@ 00005e80 0028
.org 0x5e82
	beq.n 0x5e8e	@ 00005e82 04d0
.org 0x5e84
	ldr r0, [r4, #20]	@ 00005e84 6069
.org 0x5e86
	movs r1, #128	@ 00005e86 8021
.org 0x5e88
	lsls r1, r1, #7	@ 00005e88 c901
.org 0x5e8a
	orrs r0, r1	@ 00005e8a 0843
.org 0x5e8c
	str r0, [r4, #20]	@ 00005e8c 6061
.org 0x5e8e
	movs r0, #2	@ 00005e8e 0220
.org 0x5e90
	ands r0, r2	@ 00005e90 1040
.org 0x5e92
	cmp r0, #0	@ 00005e92 0028
.org 0x5e94
	beq.n 0x5ea0	@ 00005e94 04d0
.org 0x5e96
	ldr r0, [r4, #20]	@ 00005e96 6069
.org 0x5e98
	movs r1, #128	@ 00005e98 8021
.org 0x5e9a
	lsls r1, r1, #8	@ 00005e9a 0902
.org 0x5e9c
	orrs r0, r1	@ 00005e9c 0843
.org 0x5e9e
	str r0, [r4, #20]	@ 00005e9e 6061
.org 0x5ea0
	movs r0, #16	@ 00005ea0 1020
.org 0x5ea2
	ands r0, r2	@ 00005ea2 1040
.org 0x5ea4
	cmp r0, #0	@ 00005ea4 0028
.org 0x5ea6
	beq.n 0x5eb2	@ 00005ea6 04d0
.org 0x5ea8
	ldr r0, [r4, #20]	@ 00005ea8 6069
.org 0x5eaa
	movs r1, #128	@ 00005eaa 8021
.org 0x5eac
	lsls r1, r1, #9	@ 00005eac 4902
.org 0x5eae
	orrs r0, r1	@ 00005eae 0843
.org 0x5eb0
	str r0, [r4, #20]	@ 00005eb0 6061
.org 0x5eb2
	movs r0, #32	@ 00005eb2 2020
.org 0x5eb4
	ands r0, r2	@ 00005eb4 1040
.org 0x5eb6
	cmp r0, #0	@ 00005eb6 0028
.org 0x5eb8
	beq.n 0x5ec4	@ 00005eb8 04d0
.org 0x5eba
	ldr r0, [r4, #20]	@ 00005eba 6069
.org 0x5ebc
	movs r1, #128	@ 00005ebc 8021
.org 0x5ebe
	lsls r1, r1, #10	@ 00005ebe 8902
.org 0x5ec0
	orrs r0, r1	@ 00005ec0 0843
.org 0x5ec2
	str r0, [r4, #20]	@ 00005ec2 6061
.org 0x5ec4
	movs r0, #64	@ 00005ec4 4020
.org 0x5ec6
	ands r0, r3	@ 00005ec6 1840
.org 0x5ec8
	cmp r0, #0	@ 00005ec8 0028
.org 0x5eca
	bne.n 0x5ece	@ 00005eca 00d1
.org 0x5ecc
	b.n 0x6120	@ 00005ecc 28e1
.org 0x5ece
	ldr r0, [r4, #20]	@ 00005ece 6069
.org 0x5ed0
	movs r1, #128	@ 00005ed0 8021
.org 0x5ed2
	lsls r1, r1, #15	@ 00005ed2 c903
.org 0x5ed4
	orrs r0, r1	@ 00005ed4 0843
.org 0x5ed6
	str r0, [r4, #20]	@ 00005ed6 6061
.org 0x5ed8
	b.n 0x6120	@ 00005ed8 22e1
.org 0x5eda
	ldr r0, [r5, #4]	@ 00005eda 6868
.org 0x5edc
	ldrb r1, [r0, #2]	@ 00005edc 8178
.org 0x5ede
	adds r6, r0, #0	@ 00005ede 061c
.org 0x5ee0
	cmp r1, #1	@ 00005ee0 0129
.org 0x5ee2
	bne.n 0x5f1e	@ 00005ee2 1cd1
.org 0x5ee4
	ldrb r0, [r3, #8]	@ 00005ee4 187a
.org 0x5ee6
	cmp r0, #255	@ 00005ee6 ff28
.org 0x5ee8
	beq.n 0x5f4a	@ 00005ee8 2fd0
.org 0x5eea
	ldr r0, [r4, #28]	@ 00005eea e069
.org 0x5eec
	movs r1, #3	@ 00005eec 0321
.org 0x5eee
	ands r0, r1	@ 00005eee 0840
.org 0x5ef0
	cmp r0, #0	@ 00005ef0 0028
.org 0x5ef2
	beq.n 0x5f1e	@ 00005ef2 14d0
.org 0x5ef4
	adds r0, r4, #0	@ 00005ef4 201c
.org 0x5ef6
	adds r0, #35	@ 00005ef6 2330
.org 0x5ef8
	ldrb r0, [r0, #0]	@ 00005ef8 0078
.org 0x5efa
	lsls r0, r0, #28	@ 00005efa 0007
.org 0x5efc
	lsrs r0, r0, #28	@ 00005efc 000f
.org 0x5efe
	ldrb r1, [r6, #4]	@ 00005efe 3179
.org 0x5f00
	cmp r0, r1	@ 00005f00 8842
.org 0x5f02
	bne.n 0x5f1e	@ 00005f02 0cd1
.org 0x5f04
	adds r0, r4, #0	@ 00005f04 201c
.org 0x5f06
	adds r0, #34	@ 00005f06 2230
.org 0x5f08
	adds r1, r5, #0	@ 00005f08 291c
.org 0x5f0a
	adds r1, #58	@ 00005f0a 3a31
.org 0x5f0c
	ldrb r0, [r0, #0]	@ 00005f0c 0078
.org 0x5f0e
	ldrb r1, [r1, #0]	@ 00005f0e 0978
.org 0x5f10
	cmp r0, r1	@ 00005f10 8842
.org 0x5f12
	bcc.n 0x5f1e	@ 00005f12 04d3
.org 0x5f14
	str r4, [r5, #12]	@ 00005f14 ec60
.org 0x5f16
	str r5, [r4, #12]	@ 00005f16 e560
.org 0x5f18
	movs r0, #2	@ 00005f18 0220
.org 0x5f1a
	mov r1, ip	@ 00005f1a 6146
.org 0x5f1c
	b.n 0x612c	@ 00005f1c 06e1
.org 0x5f1e
	ldrb r0, [r3, #8]	@ 00005f1e 187a
.org 0x5f20
	cmp r0, #255	@ 00005f20 ff28
.org 0x5f22
	beq.n 0x5f4a	@ 00005f22 12d0
.org 0x5f24
	str r4, [r5, #12]	@ 00005f24 ec60
.org 0x5f26
	ldr r2, [r5, #20]	@ 00005f26 6a69
.org 0x5f28
	movs r0, #4	@ 00005f28 0420
.org 0x5f2a
	orrs r2, r0	@ 00005f2a 0243
.org 0x5f2c
	str r2, [r5, #20]	@ 00005f2c 6a61
.org 0x5f2e
	ldrb r1, [r3, #9]	@ 00005f2e 597a
.org 0x5f30
	movs r0, #1	@ 00005f30 0120
.org 0x5f32
	ands r0, r1	@ 00005f32 0840
.org 0x5f34
	cmp r0, #0	@ 00005f34 0028
.org 0x5f36
	beq.n 0x5f4a	@ 00005f36 08d0
.org 0x5f38
	ldr r0, [r4, #20]	@ 00005f38 6069
.org 0x5f3a
	movs r1, #128	@ 00005f3a 8021
.org 0x5f3c
	lsls r1, r1, #6	@ 00005f3c 8901
.org 0x5f3e
	orrs r0, r1	@ 00005f3e 0843
.org 0x5f40
	str r0, [r4, #20]	@ 00005f40 6061
.org 0x5f42
	movs r0, #128	@ 00005f42 8020
.org 0x5f44
	lsls r0, r0, #5	@ 00005f44 4001
.org 0x5f46
	orrs r2, r0	@ 00005f46 0243
.org 0x5f48
	str r2, [r5, #20]	@ 00005f48 6a61
.org 0x5f4a
	ldrb r0, [r3, #2]	@ 00005f4a 9878
.org 0x5f4c
	adds r7, r4, #0	@ 00005f4c 271c
.org 0x5f4e
	adds r7, #32	@ 00005f4e 2037
.org 0x5f50
	cmp r0, #2	@ 00005f50 0228
.org 0x5f52
	bne.n 0x5f76	@ 00005f52 10d1
.org 0x5f54
	ldrb r0, [r7, #0]	@ 00005f54 3878
.org 0x5f56
	cmp r0, #0	@ 00005f56 0028
.org 0x5f58
	beq.n 0x5f8c	@ 00005f58 18d0
.org 0x5f5a
	adds r0, r4, #0	@ 00005f5a 201c
.org 0x5f5c
	adds r0, #34	@ 00005f5c 2230
.org 0x5f5e
	adds r1, r5, #0	@ 00005f5e 291c
.org 0x5f60
	adds r1, #58	@ 00005f60 3a31
.org 0x5f62
	ldrb r0, [r0, #0]	@ 00005f62 0078
.org 0x5f64
	ldrb r1, [r1, #0]	@ 00005f64 0978
.org 0x5f66
	cmp r0, r1	@ 00005f66 8842
.org 0x5f68
	bcc.n 0x5f76	@ 00005f68 05d3
.org 0x5f6a
	ldrb r0, [r6, #4]	@ 00005f6a 3079
.org 0x5f6c
	cmp r0, #0	@ 00005f6c 0028
.org 0x5f6e
	beq.n 0x5f76	@ 00005f6e 02d0
.org 0x5f70
	movs r0, #0	@ 00005f70 0020
.org 0x5f72
	str r0, [r5, #20]	@ 00005f72 6861
.org 0x5f74
	b.n 0x6130	@ 00005f74 dce0
.org 0x5f76
	ldrb r0, [r7, #0]	@ 00005f76 3878
.org 0x5f78
	cmp r0, #0	@ 00005f78 0028
.org 0x5f7a
	beq.n 0x5f8c	@ 00005f7a 07d0
.org 0x5f7c
	adds r0, r4, #0	@ 00005f7c 201c
.org 0x5f7e
	adds r0, #34	@ 00005f7e 2230
.org 0x5f80
	adds r1, r5, #0	@ 00005f80 291c
.org 0x5f82
	adds r1, #58	@ 00005f82 3a31
.org 0x5f84
	ldrb r0, [r0, #0]	@ 00005f84 0078
.org 0x5f86
	ldrb r1, [r1, #0]	@ 00005f86 0978
.org 0x5f88
	cmp r0, r1	@ 00005f88 8842
.org 0x5f8a
	bcs.n 0x5f96	@ 00005f8a 04d2
.org 0x5f8c
	adds r0, r5, #0	@ 00005f8c 281c
.org 0x5f8e
	adds r0, #55	@ 00005f8e 3730
.org 0x5f90
	ldrb r0, [r0, #0]	@ 00005f90 0078
.org 0x5f92
	cmp r0, #255	@ 00005f92 ff28
.org 0x5f94
	bne.n 0x5fe4	@ 00005f94 26d1
.org 0x5f96
	adds r2, r5, #0	@ 00005f96 2a1c
.org 0x5f98
	adds r2, #57	@ 00005f98 3932
.org 0x5f9a
	ldrb r1, [r2, #0]	@ 00005f9a 1178
.org 0x5f9c
	movs r0, #4	@ 00005f9c 0420
.org 0x5f9e
	ands r0, r1	@ 00005f9e 0840
.org 0x5fa0
	cmp r0, #0	@ 00005fa0 0028
.org 0x5fa2
	beq.n 0x5fba	@ 00005fa2 0ad0
.org 0x5fa4
	str r4, [r5, #12]	@ 00005fa4 ec60
.org 0x5fa6
	movs r0, #128	@ 00005fa6 8020
.org 0x5fa8
	lsls r0, r0, #5	@ 00005fa8 4001
.org 0x5faa
	mov r1, ip	@ 00005faa 6146
.org 0x5fac
	orrs r0, r1	@ 00005fac 0843
.org 0x5fae
	str r0, [r4, #24]	@ 00005fae a061
.org 0x5fb0
	ldr r0, [r5, #20]	@ 00005fb0 6869
.org 0x5fb2
	movs r1, #128	@ 00005fb2 8021
.org 0x5fb4
	lsls r1, r1, #6	@ 00005fb4 8901
.org 0x5fb6
	orrs r0, r1	@ 00005fb6 0843
.org 0x5fb8
	str r0, [r5, #20]	@ 00005fb8 6861
.org 0x5fba
	ldrb r1, [r2, #0]	@ 00005fba 1178
.org 0x5fbc
	movs r0, #64	@ 00005fbc 4020
.org 0x5fbe
	ands r0, r1	@ 00005fbe 0840
.org 0x5fc0
	cmp r0, #0	@ 00005fc0 0028
.org 0x5fc2
	beq.n 0x5fda	@ 00005fc2 0ad0
.org 0x5fc4
	str r4, [r5, #12]	@ 00005fc4 ec60
.org 0x5fc6
	ldr r0, [r4, #24]	@ 00005fc6 a069
.org 0x5fc8
	movs r1, #128	@ 00005fc8 8021
.org 0x5fca
	lsls r1, r1, #15	@ 00005fca c903
.org 0x5fcc
	orrs r0, r1	@ 00005fcc 0843
.org 0x5fce
	str r0, [r4, #24]	@ 00005fce a061
.org 0x5fd0
	ldr r0, [r5, #20]	@ 00005fd0 6869
.org 0x5fd2
	movs r1, #128	@ 00005fd2 8021
.org 0x5fd4
	lsls r1, r1, #16	@ 00005fd4 0904
.org 0x5fd6
	orrs r0, r1	@ 00005fd6 0843
.org 0x5fd8
	str r0, [r5, #20]	@ 00005fd8 6861
.org 0x5fda
	ldr r0, [r5, #24]	@ 00005fda a869
.org 0x5fdc
	ldr r1, [r5, #20]	@ 00005fdc 6969
.org 0x5fde
	orrs r0, r1	@ 00005fde 0843
.org 0x5fe0
	str r0, [r5, #24]	@ 00005fe0 a861
.org 0x5fe2
	b.n 0x6130	@ 00005fe2 a5e0
.org 0x5fe4
	str r5, [r4, #12]	@ 00005fe4 e560
.org 0x5fe6
	ldr r0, [r4, #20]	@ 00005fe6 6069
.org 0x5fe8
	movs r1, #1	@ 00005fe8 0121
.org 0x5fea
	mov r8, r1	@ 00005fea 8846
.org 0x5fec
	orrs r0, r1	@ 00005fec 0843
.org 0x5fee
	str r0, [r4, #20]	@ 00005fee 6061
.org 0x5ff0
	ldrb r0, [r6, #4]	@ 00005ff0 3079
.org 0x5ff2
	movs r1, #35	@ 00005ff2 2321
.org 0x5ff4
	adds r1, r1, r4	@ 00005ff4 0919
.org 0x5ff6
	mov ip, r1	@ 00005ff6 8c46
.org 0x5ff8
	movs r3, #15	@ 00005ff8 0f23
.org 0x5ffa
	adds r1, r3, #0	@ 00005ffa 191c
.org 0x5ffc
	ands r1, r0	@ 00005ffc 0140
.org 0x5ffe
	mov r0, ip	@ 00005ffe 6046
.org 0x6000
	ldrb r2, [r0, #0]	@ 00006000 0278
.org 0x6002
	movs r0, #16	@ 00006002 1020
.org 0x6004
	negs r0, r0	@ 00006004 4042
.org 0x6006
	ands r0, r2	@ 00006006 1040
.org 0x6008
	orrs r0, r1	@ 00006008 0843
.org 0x600a
	adds r1, r5, #0	@ 0000600a 291c
.org 0x600c
	adds r1, #56	@ 0000600c 3831
.org 0x600e
	ldrb r1, [r1, #0]	@ 0000600e 0978
.org 0x6010
	lsls r1, r1, #4	@ 00006010 0901
.org 0x6012
	ands r0, r3	@ 00006012 1840
.org 0x6014
	orrs r0, r1	@ 00006014 0843
.org 0x6016
	mov r1, ip	@ 00006016 6146
.org 0x6018
	strb r0, [r1, #0]	@ 00006018 0870
.org 0x601a
	adds r0, r5, #0	@ 0000601a 281c
.org 0x601c
	adds r0, #58	@ 0000601c 3a30
.org 0x601e
	ldrb r0, [r0, #0]	@ 0000601e 0078
.org 0x6020
	adds r1, r4, #0	@ 00006020 211c
.org 0x6022
	adds r1, #34	@ 00006022 2231
.org 0x6024
	strb r0, [r1, #0]	@ 00006024 0870
.org 0x6026
	adds r2, r5, #0	@ 00006026 2a1c
.org 0x6028
	adds r2, #57	@ 00006028 3932
.org 0x602a
	ldrb r1, [r2, #0]	@ 0000602a 1178
.org 0x602c
	movs r6, #4	@ 0000602c 0426
.org 0x602e
	adds r0, r6, #0	@ 0000602e 301c
.org 0x6030
	ands r0, r1	@ 00006030 0840
.org 0x6032
	cmp r0, #0	@ 00006032 0028
.org 0x6034
	beq.n 0x604a	@ 00006034 09d0
.org 0x6036
	ldr r0, [r5, #20]	@ 00006036 6869
.org 0x6038
	movs r1, #128	@ 00006038 8021
.org 0x603a
	lsls r1, r1, #6	@ 0000603a 8901
.org 0x603c
	orrs r0, r1	@ 0000603c 0843
.org 0x603e
	str r0, [r5, #20]	@ 0000603e 6861
.org 0x6040
	ldr r0, [r4, #20]	@ 00006040 6069
.org 0x6042
	movs r1, #128	@ 00006042 8021
.org 0x6044
	lsls r1, r1, #5	@ 00006044 4901
.org 0x6046
	orrs r0, r1	@ 00006046 0843
.org 0x6048
	str r0, [r4, #20]	@ 00006048 6061
.org 0x604a
	ldrb r3, [r2, #0]	@ 0000604a 1378
.org 0x604c
	mov r0, r8	@ 0000604c 4046
.org 0x604e
	ands r0, r3	@ 0000604e 1840
.org 0x6050
	adds r2, r3, #0	@ 00006050 1a1c
.org 0x6052
	cmp r0, #0	@ 00006052 0028
.org 0x6054
	beq.n 0x6060	@ 00006054 04d0
.org 0x6056
	ldr r0, [r4, #20]	@ 00006056 6069
.org 0x6058
	movs r1, #128	@ 00006058 8021
.org 0x605a
	lsls r1, r1, #7	@ 0000605a c901
.org 0x605c
	orrs r0, r1	@ 0000605c 0843
.org 0x605e
	str r0, [r4, #20]	@ 0000605e 6061
.org 0x6060
	movs r0, #2	@ 00006060 0220
.org 0x6062
	ands r0, r2	@ 00006062 1040
.org 0x6064
	cmp r0, #0	@ 00006064 0028
.org 0x6066
	beq.n 0x6072	@ 00006066 04d0
.org 0x6068
	ldr r0, [r4, #20]	@ 00006068 6069
.org 0x606a
	movs r1, #128	@ 0000606a 8021
.org 0x606c
	lsls r1, r1, #8	@ 0000606c 0902
.org 0x606e
	orrs r0, r1	@ 0000606e 0843
.org 0x6070
	str r0, [r4, #20]	@ 00006070 6061
.org 0x6072
	movs r0, #16	@ 00006072 1020
.org 0x6074
	ands r0, r2	@ 00006074 1040
.org 0x6076
	cmp r0, #0	@ 00006076 0028
.org 0x6078
	beq.n 0x6084	@ 00006078 04d0
.org 0x607a
	ldr r0, [r4, #20]	@ 0000607a 6069
.org 0x607c
	movs r1, #128	@ 0000607c 8021
.org 0x607e
	lsls r1, r1, #9	@ 0000607e 4902
.org 0x6080
	orrs r0, r1	@ 00006080 0843
.org 0x6082
	str r0, [r4, #20]	@ 00006082 6061
.org 0x6084
	movs r0, #32	@ 00006084 2020
.org 0x6086
	ands r0, r2	@ 00006086 1040
.org 0x6088
	cmp r0, #0	@ 00006088 0028
.org 0x608a
	beq.n 0x6096	@ 0000608a 04d0
.org 0x608c
	ldr r0, [r4, #20]	@ 0000608c 6069
.org 0x608e
	movs r1, #128	@ 0000608e 8021
.org 0x6090
	lsls r1, r1, #10	@ 00006090 8902
.org 0x6092
	orrs r0, r1	@ 00006092 0843
.org 0x6094
	str r0, [r4, #20]	@ 00006094 6061
.org 0x6096
	movs r0, #64	@ 00006096 4020
.org 0x6098
	ands r0, r3	@ 00006098 1840
.org 0x609a
	cmp r0, #0	@ 0000609a 0028
.org 0x609c
	beq.n 0x60b2	@ 0000609c 09d0
.org 0x609e
	ldr r0, [r5, #20]	@ 0000609e 6869
.org 0x60a0
	movs r1, #128	@ 000060a0 8021
.org 0x60a2
	lsls r1, r1, #16	@ 000060a2 0904
.org 0x60a4
	orrs r0, r1	@ 000060a4 0843
.org 0x60a6
	str r0, [r5, #20]	@ 000060a6 6861
.org 0x60a8
	ldr r0, [r4, #20]	@ 000060a8 6069
.org 0x60aa
	movs r1, #128	@ 000060aa 8021
.org 0x60ac
	lsls r1, r1, #15	@ 000060ac c903
.org 0x60ae
	orrs r0, r1	@ 000060ae 0843
.org 0x60b0
	str r0, [r4, #20]	@ 000060b0 6061
.org 0x60b2
	adds r0, r5, #0	@ 000060b2 281c
.org 0x60b4
	adds r1, r4, #0	@ 000060b4 211c
.org 0x60b6
	bl 0x5b30	@ 000060b6 fff73bfd
.org 0x60ba
	ldrh r1, [r4, #48]	@ 000060ba 218e
.org 0x60bc
	subs r1, r1, r0	@ 000060bc 091a
.org 0x60be
	strh r1, [r4, #48]	@ 000060be 2186
.org 0x60c0
	lsls r1, r1, #16	@ 000060c0 0904
.org 0x60c2
	cmp r1, #0	@ 000060c2 0029
.org 0x60c4
	bgt.n 0x60d4	@ 000060c4 06dc
.org 0x60c6
	movs r0, #0	@ 000060c6 0020
.org 0x60c8
	strh r0, [r4, #48]	@ 000060c8 2086
.org 0x60ca
	ldr r0, [r4, #20]	@ 000060ca 6069
.org 0x60cc
	movs r1, #128	@ 000060cc 8021
.org 0x60ce
	lsls r1, r1, #2	@ 000060ce 8900
.org 0x60d0
	orrs r0, r1	@ 000060d0 0843
.org 0x60d2
	str r0, [r4, #20]	@ 000060d2 6061
.org 0x60d4
	ldr r0, [r4, #4]	@ 000060d4 6068
.org 0x60d6
	ldrb r0, [r0, #8]	@ 000060d6 007a
.org 0x60d8
	cmp r0, #255	@ 000060d8 ff28
.org 0x60da
	beq.n 0x60ee	@ 000060da 08d0
.org 0x60dc
	ldr r0, [r5, #4]	@ 000060dc 6868
.org 0x60de
	ldrb r0, [r0, #4]	@ 000060de 0079
.org 0x60e0
	subs r0, #1	@ 000060e0 0138
.org 0x60e2
	lsls r0, r0, #24	@ 000060e2 0006
.org 0x60e4
	lsrs r0, r0, #24	@ 000060e4 000e
.org 0x60e6
	cmp r0, #1	@ 000060e6 0128
.org 0x60e8
	bhi.n 0x60ee	@ 000060e8 01d8
.org 0x60ea
	ldr r0, [pc, #32]	@ 000060ea 0848
.org 0x60ec
	strb r6, [r0, #2]	@ 000060ec 8670
.org 0x60ee
	ldr r0, [r4, #4]	@ 000060ee 6068
.org 0x60f0
	ldrb r0, [r0, #2]	@ 000060f0 8078
.org 0x60f2
	cmp r0, #1	@ 000060f2 0128
.org 0x60f4
	bne.n 0x6118	@ 000060f4 10d1
.org 0x60f6
	ldr r0, [pc, #24]	@ 000060f6 0648
.org 0x60f8
	ldr r1, [pc, #24]	@ 000060f8 0649
.org 0x60fa
	adds r0, r0, r1	@ 000060fa 4018
.org 0x60fc
	ldr r0, [r0, #0]	@ 000060fc 0068
.org 0x60fe
	adds r0, #180	@ 000060fe b430
.org 0x6100
	ldrb r0, [r0, #17]	@ 00006100 407c
.org 0x6102
	cmp r0, #17	@ 00006102 1128
.org 0x6104
	bne.n 0x611c	@ 00006104 0ad1
.org 0x6106
	movs r0, #98	@ 00006106 6220
.org 0x6108
	b.n 0x611e	@ 00006108 09e0
.org 0x610a
	.byte 0x00	@ 0000610a data
.org 0x610b
	.byte 0x00	@ 0000610b data
.org 0x610c
	.byte 0xe0,0x32,0x00,0x03	@ 0000610c data
.org 0x6110
	.byte 0x10,0xf6,0x02,0x02	@ 00006110 data
.org 0x6114
	.byte 0xa8,0x63,0x00,0x00	@ 00006114 data
.org 0x6118
	cmp r0, #2	@ 00006118 0228
.org 0x611a
	bne.n 0x6120	@ 0000611a 01d1
.org 0x611c
	movs r0, #90	@ 0000611c 5a20
.org 0x611e
	strb r0, [r7, #0]	@ 0000611e 3870
.org 0x6120
	ldr r0, [r5, #24]	@ 00006120 a869
.org 0x6122
	ldr r1, [r5, #20]	@ 00006122 6969
