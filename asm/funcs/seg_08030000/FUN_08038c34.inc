@ FUN_08038c34  entry 0x08038c34  size 2156
.thumb
.org 0x38c34
FUN_08038c34:
	push {r4, r5, r6, r7, lr}	@ 00038c34 f0b5
.org 0x38c36
	mov r7, sl	@ 00038c36 5746
.org 0x38c38
	mov r6, r9	@ 00038c38 4e46
.org 0x38c3a
	mov r5, r8	@ 00038c3a 4546
.org 0x38c3c
	push {r5, r6, r7}	@ 00038c3c e0b4
.org 0x38c3e
	sub sp, #16	@ 00038c3e 84b0
.org 0x38c40
	adds r6, r0, #0	@ 00038c40 061c
.org 0x38c42
	ldr r0, [pc, #396]	@ 00038c42 6348
.org 0x38c44
	adds r5, r6, r0	@ 00038c44 3518
.org 0x38c46
	ldrh r1, [r5, #0]	@ 00038c46 2988
.org 0x38c48
	mov sl, r1	@ 00038c48 8a46
.org 0x38c4a
	adds r4, r6, #0	@ 00038c4a 341c
.org 0x38c4c
	adds r4, #228	@ 00038c4c e434
.org 0x38c4e
	ldrb r2, [r4, #0]	@ 00038c4e 2278
.org 0x38c50
	str r2, [sp, #0]	@ 00038c50 0092
.org 0x38c52
	adds r7, r6, #0	@ 00038c52 371c
.org 0x38c54
	adds r7, #229	@ 00038c54 e537
.org 0x38c56
	ldrb r3, [r7, #0]	@ 00038c56 3b78
.org 0x38c58
	str r3, [sp, #4]	@ 00038c58 0193
.org 0x38c5a
	mov r9, sl	@ 00038c5a d146
.org 0x38c5c
	adds r0, r6, #0	@ 00038c5c 301c
.org 0x38c5e
	bl 0x2f0e8	@ 00038c5e f6f743fa
.org 0x38c62
	ldrb r0, [r4, #0]	@ 00038c62 2078
.org 0x38c64
	movs r4, #165	@ 00038c64 a524
.org 0x38c66
	lsls r4, r4, #1	@ 00038c66 6400
.org 0x38c68
	adds r2, r6, r4	@ 00038c68 3219
.org 0x38c6a
	movs r1, #0	@ 00038c6a 0021
.org 0x38c6c
	strb r0, [r2, #0]	@ 00038c6c 1070
.org 0x38c6e
	ldrb r0, [r7, #0]	@ 00038c6e 3878
.org 0x38c70
	ldr r3, [pc, #352]	@ 00038c70 584b
.org 0x38c72
	adds r2, r6, r3	@ 00038c72 f218
.org 0x38c74
	strb r0, [r2, #0]	@ 00038c74 1070
.org 0x38c76
	movs r0, #150	@ 00038c76 9620
.org 0x38c78
	lsls r0, r0, #2	@ 00038c78 8000
.org 0x38c7a
	adds r4, r6, r0	@ 00038c7a 3418
.org 0x38c7c
	ldr r2, [r4, #0]	@ 00038c7c 2268
.org 0x38c7e
	mov ip, r2	@ 00038c7e 9446
.org 0x38c80
	str r1, [r4, #0]	@ 00038c80 2160
.org 0x38c82
	ldrh r2, [r5, #0]	@ 00038c82 2a88
.org 0x38c84
	movs r0, #240	@ 00038c84 f020
.org 0x38c86
	adds r1, r0, #0	@ 00038c86 011c
.org 0x38c88
	ands r1, r2	@ 00038c88 1140
.org 0x38c8a
	str r1, [r4, #0]	@ 00038c8a 2160
.org 0x38c8c
	movs r3, #148	@ 00038c8c 9423
.org 0x38c8e
	lsls r3, r3, #2	@ 00038c8e 9b00
.org 0x38c90
	adds r3, r3, r6	@ 00038c90 9b19
.org 0x38c92
	mov r8, r3	@ 00038c92 9846
.org 0x38c94
	ldrh r2, [r3, #0]	@ 00038c94 1a88
.org 0x38c96
	ands r0, r2	@ 00038c96 1040
.org 0x38c98
	lsls r2, r0, #4	@ 00038c98 0201
.org 0x38c9a
	orrs r2, r1	@ 00038c9a 0a43
.org 0x38c9c
	str r2, [r4, #0]	@ 00038c9c 2260
.org 0x38c9e
	movs r0, #151	@ 00038c9e 9720
.org 0x38ca0
	lsls r0, r0, #2	@ 00038ca0 8000
.org 0x38ca2
	adds r7, r6, r0	@ 00038ca2 3718
.org 0x38ca4
	ldrh r1, [r5, #0]	@ 00038ca4 2988
.org 0x38ca6
	ldrh r0, [r7, #0]	@ 00038ca6 3888
.org 0x38ca8
	ands r0, r1	@ 00038ca8 0840
.org 0x38caa
	cmp r0, #0	@ 00038caa 0028
.org 0x38cac
	beq.n 0x38cc6	@ 00038cac 0bd0
.org 0x38cae
	movs r3, #2	@ 00038cae 0223
.org 0x38cb0
	orrs r3, r2	@ 00038cb0 1343
.org 0x38cb2
	str r3, [r4, #0]	@ 00038cb2 2360
.org 0x38cb4
	mov r2, r8	@ 00038cb4 4246
.org 0x38cb6
	ldrh r1, [r2, #0]	@ 00038cb6 1188
.org 0x38cb8
	ldrh r0, [r7, #0]	@ 00038cb8 3888
.org 0x38cba
	ands r0, r1	@ 00038cba 0840
.org 0x38cbc
	cmp r0, #0	@ 00038cbc 0028
.org 0x38cbe
	beq.n 0x38cc6	@ 00038cbe 02d0
.org 0x38cc0
	movs r0, #1	@ 00038cc0 0120
.org 0x38cc2
	orrs r3, r0	@ 00038cc2 0343
.org 0x38cc4
	str r3, [r4, #0]	@ 00038cc4 2360
.org 0x38cc6
	ldr r3, [pc, #264]	@ 00038cc6 424b
.org 0x38cc8
	adds r2, r6, r3	@ 00038cc8 f218
.org 0x38cca
	ldr r0, [pc, #268]	@ 00038cca 4348
.org 0x38ccc
	adds r4, r6, r0	@ 00038ccc 3418
.org 0x38cce
	ldrh r1, [r2, #0]	@ 00038cce 1188
.org 0x38cd0
	ldrh r0, [r4, #0]	@ 00038cd0 2088
.org 0x38cd2
	ands r0, r1	@ 00038cd2 0840
.org 0x38cd4
	str r2, [sp, #8]	@ 00038cd4 0292
.org 0x38cd6
	cmp r0, #0	@ 00038cd6 0028
.org 0x38cd8
	beq.n 0x38cfc	@ 00038cd8 10d0
.org 0x38cda
	movs r1, #150	@ 00038cda 9621
.org 0x38cdc
	lsls r1, r1, #2	@ 00038cdc 8900
.org 0x38cde
	adds r3, r6, r1	@ 00038cde 7318
.org 0x38ce0
	ldr r2, [r3, #0]	@ 00038ce0 1a68
.org 0x38ce2
	movs r0, #8	@ 00038ce2 0820
.org 0x38ce4
	orrs r2, r0	@ 00038ce4 0243
.org 0x38ce6
	str r2, [r3, #0]	@ 00038ce6 1a60
.org 0x38ce8
	subs r1, #8	@ 00038ce8 0839
.org 0x38cea
	adds r0, r6, r1	@ 00038cea 7018
.org 0x38cec
	ldrh r1, [r0, #0]	@ 00038cec 0188
.org 0x38cee
	ldrh r0, [r4, #0]	@ 00038cee 2088
.org 0x38cf0
	ands r0, r1	@ 00038cf0 0840
.org 0x38cf2
	cmp r0, #0	@ 00038cf2 0028
.org 0x38cf4
	beq.n 0x38cfc	@ 00038cf4 02d0
.org 0x38cf6
	movs r0, #4	@ 00038cf6 0420
.org 0x38cf8
	orrs r2, r0	@ 00038cf8 0243
.org 0x38cfa
	str r2, [r3, #0]	@ 00038cfa 1a60
.org 0x38cfc
	movs r2, #153	@ 00038cfc 9922
.org 0x38cfe
	lsls r2, r2, #2	@ 00038cfe 9200
.org 0x38d00
	adds r0, r6, r2	@ 00038d00 b018
.org 0x38d02
	ldr r3, [sp, #8]	@ 00038d02 029b
.org 0x38d04
	ldrh r1, [r3, #0]	@ 00038d04 1988
.org 0x38d06
	ldrh r0, [r0, #0]	@ 00038d06 0088
.org 0x38d08
	ands r0, r1	@ 00038d08 0840
.org 0x38d0a
	adds r4, r6, #0	@ 00038d0a 341c
.org 0x38d0c
	adds r4, #180	@ 00038d0c b434
.org 0x38d0e
	str r4, [sp, #12]	@ 00038d0e 0394
.org 0x38d10
	cmp r0, #0	@ 00038d10 0028
.org 0x38d12
	beq.n 0x38d24	@ 00038d12 07d0
.org 0x38d14
	movs r1, #150	@ 00038d14 9621
.org 0x38d16
	lsls r1, r1, #2	@ 00038d16 8900
.org 0x38d18
	adds r0, r6, r1	@ 00038d18 7018
.org 0x38d1a
	ldr r1, [r0, #0]	@ 00038d1a 0168
.org 0x38d1c
	movs r2, #128	@ 00038d1c 8022
.org 0x38d1e
	lsls r2, r2, #10	@ 00038d1e 9202
.org 0x38d20
	orrs r1, r2	@ 00038d20 1143
.org 0x38d22
	str r1, [r0, #0]	@ 00038d22 0160
.org 0x38d24
	ldr r2, [sp, #8]	@ 00038d24 029a
.org 0x38d26
	ldrh r7, [r2, #0]	@ 00038d26 1788
.org 0x38d28
	movs r4, #128	@ 00038d28 8024
.org 0x38d2a
	lsls r4, r4, #8	@ 00038d2a 2402
.org 0x38d2c
	adds r0, r4, #0	@ 00038d2c 201c
.org 0x38d2e
	ands r0, r7	@ 00038d2e 3840
.org 0x38d30
	cmp r0, #0	@ 00038d30 0028
.org 0x38d32
	bne.n 0x38d36	@ 00038d32 00d1
.org 0x38d34
	b.n 0x38e3c	@ 00038d34 82e0
.org 0x38d36
	movs r2, #128	@ 00038d36 8022
.org 0x38d38
	lsls r2, r2, #5	@ 00038d38 5201
.org 0x38d3a
	adds r0, r2, #0	@ 00038d3a 101c
.org 0x38d3c
	ands r0, r7	@ 00038d3c 3840
.org 0x38d3e
	cmp r0, #0	@ 00038d3e 0028
.org 0x38d40
	beq.n 0x38d50	@ 00038d40 06d0
.org 0x38d42
	movs r3, #150	@ 00038d42 9623
.org 0x38d44
	lsls r3, r3, #2	@ 00038d44 9b00
.org 0x38d46
	adds r1, r6, r3	@ 00038d46 f118
.org 0x38d48
	ldr r0, [r1, #0]	@ 00038d48 0868
.org 0x38d4a
	orrs r0, r4	@ 00038d4a 2043
.org 0x38d4c
	orrs r0, r2	@ 00038d4c 1043
.org 0x38d4e
	str r0, [r1, #0]	@ 00038d4e 0860
.org 0x38d50
	ldr r4, [sp, #8]	@ 00038d50 029c
.org 0x38d52
	ldrh r1, [r4, #0]	@ 00038d52 2188
.org 0x38d54
	movs r0, #128	@ 00038d54 8020
.org 0x38d56
	lsls r0, r0, #7	@ 00038d56 c001
.org 0x38d58
	ands r0, r1	@ 00038d58 0840
.org 0x38d5a
	cmp r0, #0	@ 00038d5a 0028
.org 0x38d5c
	beq.n 0x38d7a	@ 00038d5c 0dd0
.org 0x38d5e
	movs r0, #150	@ 00038d5e 9620
.org 0x38d60
	lsls r0, r0, #2	@ 00038d60 8000
.org 0x38d62
	adds r2, r6, r0	@ 00038d62 3218
.org 0x38d64
	ldr r0, [r2, #0]	@ 00038d64 1068
.org 0x38d66
	movs r1, #12	@ 00038d66 0c21
.org 0x38d68
	orrs r0, r1	@ 00038d68 0843
.org 0x38d6a
	str r0, [r2, #0]	@ 00038d6a 1060
.org 0x38d6c
	ldr r2, [pc, #108]	@ 00038d6c 1b4a
.org 0x38d6e
	adds r1, r6, r2	@ 00038d6e b118
.org 0x38d70
	ldrb r0, [r1, #0]	@ 00038d70 0878
.org 0x38d72
	cmp r0, #0	@ 00038d72 0028
.org 0x38d74
	bne.n 0x38d7a	@ 00038d74 01d1
.org 0x38d76
	movs r0, #28	@ 00038d76 1c20
.org 0x38d78
	strb r0, [r1, #0]	@ 00038d78 0870
.org 0x38d7a
	ldr r3, [sp, #8]	@ 00038d7a 029b
.org 0x38d7c
	ldrh r1, [r3, #0]	@ 00038d7c 1988
.org 0x38d7e
	movs r3, #128	@ 00038d7e 8023
.org 0x38d80
	lsls r3, r3, #6	@ 00038d80 9b01
.org 0x38d82
	adds r0, r3, #0	@ 00038d82 181c
.org 0x38d84
	ands r0, r1	@ 00038d84 0840
.org 0x38d86
	cmp r0, #0	@ 00038d86 0028
.org 0x38d88
	beq.n 0x38d98	@ 00038d88 06d0
.org 0x38d8a
	movs r4, #150	@ 00038d8a 9624
.org 0x38d8c
	lsls r4, r4, #2	@ 00038d8c a400
.org 0x38d8e
	adds r0, r6, r4	@ 00038d8e 3019
.org 0x38d90
	ldr r1, [r0, #0]	@ 00038d90 0168
.org 0x38d92
	movs r2, #3	@ 00038d92 0322
.org 0x38d94
	orrs r1, r2	@ 00038d94 1143
.org 0x38d96
	str r1, [r0, #0]	@ 00038d96 0160
.org 0x38d98
	adds r0, r6, #0	@ 00038d98 301c
.org 0x38d9a
	adds r0, #223	@ 00038d9a df30
.org 0x38d9c
	ldrb r0, [r0, #0]	@ 00038d9c 0078
.org 0x38d9e
	cmp r0, #1	@ 00038d9e 0128
.org 0x38da0
	bne.n 0x38e20	@ 00038da0 3ed1
.org 0x38da2
	ldr r0, [pc, #60]	@ 00038da2 0f48
.org 0x38da4
	adds r2, r6, r0	@ 00038da4 3218
.org 0x38da6
	ldrb r1, [r2, #0]	@ 00038da6 1178
.org 0x38da8
	movs r0, #16	@ 00038da8 1020
.org 0x38daa
	ands r0, r1	@ 00038daa 0840
.org 0x38dac
	cmp r0, #0	@ 00038dac 0028
.org 0x38dae
	bne.n 0x38de4	@ 00038dae 19d1
.org 0x38db0
	mov r0, ip	@ 00038db0 6046
.org 0x38db2
	ands r0, r3	@ 00038db2 1840
.org 0x38db4
	adds r5, r6, #0	@ 00038db4 351c
.org 0x38db6
	adds r5, #228	@ 00038db6 e435
.org 0x38db8
	cmp r0, #0	@ 00038db8 0028
.org 0x38dba
	beq.n 0x38dee	@ 00038dba 18d0
.org 0x38dbc
	movs r1, #150	@ 00038dbc 9621
.org 0x38dbe
	lsls r1, r1, #2	@ 00038dbe 8900
.org 0x38dc0
	adds r0, r6, r1	@ 00038dc0 7018
.org 0x38dc2
	ldr r1, [r0, #0]	@ 00038dc2 0168
.org 0x38dc4
	orrs r1, r3	@ 00038dc4 1943
.org 0x38dc6
	str r1, [r0, #0]	@ 00038dc6 0160
.org 0x38dc8
	ldrb r0, [r5, #0]	@ 00038dc8 2878
.org 0x38dca
	adds r0, #1	@ 00038dca 0130
.org 0x38dcc
	strb r0, [r5, #0]	@ 00038dcc 2870
.org 0x38dce
	b.n 0x38dee	@ 00038dce 0ee0
.org 0x38dd0
	.byte 0x52,0x02,0x00,0x00	@ 00038dd0 data
.org 0x38dd4
	.byte 0x4b,0x01,0x00,0x00	@ 00038dd4 data
.org 0x38dd8
	.byte 0x5e,0x02,0x00,0x00	@ 00038dd8 data
.org 0x38ddc
	.byte 0x77,0x02,0x00,0x00	@ 00038ddc data
.org 0x38de0
	.byte 0x53,0x01,0x00,0x00	@ 00038de0 data
.org 0x38de4
	adds r1, r6, #0	@ 00038de4 311c
.org 0x38de6
	adds r1, #228	@ 00038de6 e431
.org 0x38de8
	movs r0, #0	@ 00038de8 0020
.org 0x38dea
	strb r0, [r1, #0]	@ 00038dea 0870
.org 0x38dec
	adds r5, r1, #0	@ 00038dec 0d1c
.org 0x38dee
	ldrb r1, [r2, #0]	@ 00038dee 1178
.org 0x38df0
	movs r0, #32	@ 00038df0 2020
.org 0x38df2
	ands r0, r1	@ 00038df2 0840
.org 0x38df4
	cmp r0, #0	@ 00038df4 0028
.org 0x38df6
	beq.n 0x38dfa	@ 00038df6 00d0
.org 0x38df8
	b.n 0x39302	@ 00038df8 83e2
.org 0x38dfa
	movs r2, #128	@ 00038dfa 8022
.org 0x38dfc
	lsls r2, r2, #8	@ 00038dfc 1202
.org 0x38dfe
	mov r3, ip	@ 00038dfe 6346
.org 0x38e00
	ands r3, r2	@ 00038e00 1340
.org 0x38e02
	adds r4, r6, #0	@ 00038e02 341c
.org 0x38e04
	adds r4, #229	@ 00038e04 e534
.org 0x38e06
	cmp r3, #0	@ 00038e06 002b
.org 0x38e08
	bne.n 0x38e0c	@ 00038e08 00d1
.org 0x38e0a
	b.n 0x393d0	@ 00038e0a e1e2
.org 0x38e0c
	movs r1, #150	@ 00038e0c 9621
.org 0x38e0e
	lsls r1, r1, #2	@ 00038e0e 8900
.org 0x38e10
	adds r0, r6, r1	@ 00038e10 7018
.org 0x38e12
	ldr r1, [r0, #0]	@ 00038e12 0168
.org 0x38e14
	orrs r1, r2	@ 00038e14 1143
.org 0x38e16
	str r1, [r0, #0]	@ 00038e16 0160
.org 0x38e18
	ldrb r0, [r4, #0]	@ 00038e18 2078
.org 0x38e1a
	adds r0, #1	@ 00038e1a 0130
.org 0x38e1c
	strb r0, [r4, #0]	@ 00038e1c 2070
.org 0x38e1e
	b.n 0x393d0	@ 00038e1e d7e2
.org 0x38e20
	ldr r4, [pc, #20]	@ 00038e20 054c
.org 0x38e22
	adds r2, r6, r4	@ 00038e22 3219
.org 0x38e24
	ldrb r1, [r2, #0]	@ 00038e24 1178
.org 0x38e26
	movs r0, #16	@ 00038e26 1020
.org 0x38e28
	ands r0, r1	@ 00038e28 0840
.org 0x38e2a
	adds r5, r6, #0	@ 00038e2a 351c
.org 0x38e2c
	adds r5, #228	@ 00038e2c e435
.org 0x38e2e
	adds r4, r6, #0	@ 00038e2e 341c
.org 0x38e30
	adds r4, #229	@ 00038e30 e534
.org 0x38e32
	cmp r0, #0	@ 00038e32 0028
.org 0x38e34
	bne.n 0x38e84	@ 00038e34 26d1
.org 0x38e36
	b.n 0x38e64	@ 00038e36 15e0
.org 0x38e38
	.byte 0x53,0x01,0x00,0x00	@ 00038e38 data
.org 0x38e3c
	mov r0, sl	@ 00038e3c 5046
.org 0x38e3e
	ands r0, r4	@ 00038e3e 2040
.org 0x38e40
	lsls r0, r0, #16	@ 00038e40 0004
.org 0x38e42
	lsrs r0, r0, #16	@ 00038e42 000c
.org 0x38e44
	mov r8, r0	@ 00038e44 8046
.org 0x38e46
	cmp r0, #0	@ 00038e46 0028
.org 0x38e48
	beq.n 0x38ebc	@ 00038e48 38d0
.org 0x38e4a
	ldr r1, [pc, #108]	@ 00038e4a 1b49
.org 0x38e4c
	adds r2, r6, r1	@ 00038e4c 7218
.org 0x38e4e
	ldrb r1, [r2, #0]	@ 00038e4e 1178
.org 0x38e50
	movs r0, #16	@ 00038e50 1020
.org 0x38e52
	ands r0, r1	@ 00038e52 0840
.org 0x38e54
	adds r5, r6, #0	@ 00038e54 351c
.org 0x38e56
	adds r5, #228	@ 00038e56 e435
.org 0x38e58
	adds r4, r6, #0	@ 00038e58 341c
.org 0x38e5a
	adds r4, #229	@ 00038e5a e534
.org 0x38e5c
	cmp r0, #0	@ 00038e5c 0028
.org 0x38e5e
	bne.n 0x38e84	@ 00038e5e 11d1
.org 0x38e60
	movs r3, #128	@ 00038e60 8023
.org 0x38e62
	lsls r3, r3, #6	@ 00038e62 9b01
.org 0x38e64
	mov r0, ip	@ 00038e64 6046
.org 0x38e66
	ands r0, r3	@ 00038e66 1840
.org 0x38e68
	cmp r0, #0	@ 00038e68 0028
.org 0x38e6a
	beq.n 0x38e84	@ 00038e6a 0bd0
.org 0x38e6c
	movs r0, #150	@ 00038e6c 9620
.org 0x38e6e
	lsls r0, r0, #2	@ 00038e6e 8000
.org 0x38e70
	adds r1, r6, r0	@ 00038e70 3118
.org 0x38e72
	ldr r0, [r1, #0]	@ 00038e72 0868
.org 0x38e74
	orrs r0, r3	@ 00038e74 1843
.org 0x38e76
	str r0, [r1, #0]	@ 00038e76 0860
.org 0x38e78
	ldrb r0, [r4, #0]	@ 00038e78 2078
.org 0x38e7a
	adds r0, #1	@ 00038e7a 0130
.org 0x38e7c
	strb r0, [r4, #0]	@ 00038e7c 2070
.org 0x38e7e
	ldrb r0, [r5, #0]	@ 00038e7e 2878
.org 0x38e80
	adds r0, #1	@ 00038e80 0130
.org 0x38e82
	strb r0, [r5, #0]	@ 00038e82 2870
.org 0x38e84
	ldrb r1, [r2, #0]	@ 00038e84 1178
.org 0x38e86
	movs r0, #32	@ 00038e86 2020
.org 0x38e88
	ands r0, r1	@ 00038e88 0840
.org 0x38e8a
	cmp r0, #0	@ 00038e8a 0028
.org 0x38e8c
	beq.n 0x38e90	@ 00038e8c 00d0
.org 0x38e8e
	b.n 0x393d0	@ 00038e8e 9fe2
.org 0x38e90
	movs r2, #128	@ 00038e90 8022
.org 0x38e92
	lsls r2, r2, #8	@ 00038e92 1202
.org 0x38e94
	mov r1, ip	@ 00038e94 6146
.org 0x38e96
	ands r1, r2	@ 00038e96 1140
.org 0x38e98
	cmp r1, #0	@ 00038e98 0029
.org 0x38e9a
	bne.n 0x38e9e	@ 00038e9a 00d1
.org 0x38e9c
	b.n 0x393d0	@ 00038e9c 98e2
.org 0x38e9e
	movs r3, #150	@ 00038e9e 9623
.org 0x38ea0
	lsls r3, r3, #2	@ 00038ea0 9b00
.org 0x38ea2
	adds r1, r6, r3	@ 00038ea2 f118
.org 0x38ea4
	ldr r0, [r1, #0]	@ 00038ea4 0868
.org 0x38ea6
	orrs r0, r2	@ 00038ea6 1043
.org 0x38ea8
	str r0, [r1, #0]	@ 00038ea8 0860
.org 0x38eaa
	ldrb r0, [r4, #0]	@ 00038eaa 2078
.org 0x38eac
	adds r0, #1	@ 00038eac 0130
.org 0x38eae
	strb r0, [r4, #0]	@ 00038eae 2070
.org 0x38eb0
	ldrb r0, [r5, #0]	@ 00038eb0 2878
.org 0x38eb2
	adds r0, #1	@ 00038eb2 0130
.org 0x38eb4
	strb r0, [r5, #0]	@ 00038eb4 2870
.org 0x38eb6
	b.n 0x393d0	@ 00038eb6 8be2
.org 0x38eb8
	.byte 0x53,0x01,0x00,0x00	@ 00038eb8 data
.org 0x38ebc
	adds r0, r6, #0	@ 00038ebc 301c
.org 0x38ebe
	adds r0, #223	@ 00038ebe df30
.org 0x38ec0
	ldrb r0, [r0, #0]	@ 00038ec0 0078
.org 0x38ec2
	cmp r0, #0	@ 00038ec2 0028
.org 0x38ec4
	beq.n 0x38ec8	@ 00038ec4 00d0
.org 0x38ec6
	b.n 0x39048	@ 00038ec6 bfe0
.org 0x38ec8
	movs r1, #148	@ 00038ec8 9421
.org 0x38eca
	lsls r1, r1, #2	@ 00038eca 8900
.org 0x38ecc
	adds r0, r6, r1	@ 00038ecc 7018
.org 0x38ece
	movs r2, #152	@ 00038ece 9822
.org 0x38ed0
	lsls r2, r2, #2	@ 00038ed0 9200
.org 0x38ed2
	adds r3, r6, r2	@ 00038ed2 b318
.org 0x38ed4
	ldrh r1, [r0, #0]	@ 00038ed4 0188
.org 0x38ed6
	ldrh r2, [r3, #0]	@ 00038ed6 1a88
.org 0x38ed8
	adds r0, r2, #0	@ 00038ed8 101c
.org 0x38eda
	ands r0, r1	@ 00038eda 0840
.org 0x38edc
	cmp r0, #0	@ 00038edc 0028
.org 0x38ede
	beq.n 0x38f2a	@ 00038ede 24d0
.org 0x38ee0
	ldr r3, [pc, #40]	@ 00038ee0 0a4b
.org 0x38ee2
	adds r0, r6, r3	@ 00038ee2 f018
.org 0x38ee4
	ldrh r0, [r0, #0]	@ 00038ee4 0088
.org 0x38ee6
	ands r0, r7	@ 00038ee6 3840
.org 0x38ee8
	cmp r0, #0	@ 00038ee8 0028
.org 0x38eea
	beq.n 0x38f10	@ 00038eea 11d0
.org 0x38eec
	movs r4, #150	@ 00038eec 9624
.org 0x38eee
	lsls r4, r4, #2	@ 00038eee a400
.org 0x38ef0
	adds r2, r6, r4	@ 00038ef0 3219
.org 0x38ef2
	ldr r0, [r2, #0]	@ 00038ef2 1068
.org 0x38ef4
	movs r1, #128	@ 00038ef4 8021
.org 0x38ef6
	lsls r1, r1, #7	@ 00038ef6 c901
.org 0x38ef8
	orrs r0, r1	@ 00038ef8 0843
.org 0x38efa
	str r0, [r2, #0]	@ 00038efa 1060
.org 0x38efc
	adds r0, r6, #0	@ 00038efc 301c
.org 0x38efe
	adds r0, #229	@ 00038efe e530
.org 0x38f00
	mov r1, r8	@ 00038f00 4146
.org 0x38f02
	strb r1, [r0, #0]	@ 00038f02 0170
.org 0x38f04
	adds r5, r6, #0	@ 00038f04 351c
.org 0x38f06
	adds r5, #228	@ 00038f06 e435
.org 0x38f08
	adds r4, r0, #0	@ 00038f08 041c
.org 0x38f0a
	b.n 0x39284	@ 00038f0a bbe1
.org 0x38f0c
	.byte 0x62,0x02,0x00,0x00	@ 00038f0c data
.org 0x38f10
	movs r3, #150	@ 00038f10 9623
.org 0x38f12
	lsls r3, r3, #2	@ 00038f12 9b00
.org 0x38f14
	adds r2, r6, r3	@ 00038f14 f218
.org 0x38f16
	ldr r0, [r2, #0]	@ 00038f16 1068
.org 0x38f18
	movs r1, #128	@ 00038f18 8021
.org 0x38f1a
	lsls r1, r1, #5	@ 00038f1a 4901
.org 0x38f1c
	orrs r0, r1	@ 00038f1c 0843
.org 0x38f1e
	str r0, [r2, #0]	@ 00038f1e 1060
.org 0x38f20
	adds r0, r6, #0	@ 00038f20 301c
.org 0x38f22
	adds r0, #228	@ 00038f22 e430
.org 0x38f24
	mov r4, r8	@ 00038f24 4446
.org 0x38f26
	strb r4, [r0, #0]	@ 00038f26 0470
.org 0x38f28
	b.n 0x3927e	@ 00038f28 a9e1
.org 0x38f2a
	ands r2, r7	@ 00038f2a 3a40
.org 0x38f2c
	cmp r2, #0	@ 00038f2c 002a
.org 0x38f2e
	beq.n 0x38f9c	@ 00038f2e 35d0
.org 0x38f30
	ldr r2, [pc, #24]	@ 00038f30 064a
.org 0x38f32
	adds r0, r6, r2	@ 00038f32 b018
.org 0x38f34
	ldrh r0, [r0, #0]	@ 00038f34 0088
.org 0x38f36
	ands r0, r7	@ 00038f36 3840
.org 0x38f38
	cmp r0, #0	@ 00038f38 0028
.org 0x38f3a
	beq.n 0x38f50	@ 00038f3a 09d0
.org 0x38f3c
	movs r3, #150	@ 00038f3c 9623
.org 0x38f3e
	lsls r3, r3, #2	@ 00038f3e 9b00
.org 0x38f40
	adds r1, r6, r3	@ 00038f40 f118
.org 0x38f42
	ldr r0, [r1, #0]	@ 00038f42 0868
.org 0x38f44
	orrs r0, r4	@ 00038f44 2043
.org 0x38f46
	str r0, [r1, #0]	@ 00038f46 0860
.org 0x38f48
	b.n 0x38f60	@ 00038f48 0ae0
.org 0x38f4a
	.byte 0x00	@ 00038f4a data
.org 0x38f4b
	.byte 0x00	@ 00038f4b data
.org 0x38f4c
	.byte 0x62,0x02,0x00,0x00	@ 00038f4c data
.org 0x38f50
	movs r4, #150	@ 00038f50 9624
.org 0x38f52
	lsls r4, r4, #2	@ 00038f52 a400
.org 0x38f54
	adds r0, r6, r4	@ 00038f54 3019
.org 0x38f56
	ldr r1, [r0, #0]	@ 00038f56 0168
.org 0x38f58
	movs r2, #128	@ 00038f58 8022
.org 0x38f5a
	lsls r2, r2, #6	@ 00038f5a 9201
.org 0x38f5c
	orrs r1, r2	@ 00038f5c 1143
.org 0x38f5e
	str r1, [r0, #0]	@ 00038f5e 0160
.org 0x38f60
	ldr r0, [pc, #20]	@ 00038f60 0548
.org 0x38f62
	adds r2, r6, r0	@ 00038f62 3218
.org 0x38f64
	ldrb r1, [r2, #0]	@ 00038f64 1178
.org 0x38f66
	movs r0, #16	@ 00038f66 1020
.org 0x38f68
	ands r0, r1	@ 00038f68 0840
.org 0x38f6a
	cmp r0, #0	@ 00038f6a 0028
.org 0x38f6c
	bne.n 0x38f7c	@ 00038f6c 06d1
.org 0x38f6e
	adds r1, r6, #0	@ 00038f6e 311c
.org 0x38f70
	adds r1, #228	@ 00038f70 e431
.org 0x38f72
	ldrb r0, [r1, #0]	@ 00038f72 0878
.org 0x38f74
	adds r0, #1	@ 00038f74 0130
.org 0x38f76
	b.n 0x38f82	@ 00038f76 04e0
.org 0x38f78
	.byte 0x53,0x01,0x00,0x00	@ 00038f78 data
.org 0x38f7c
	adds r1, r6, #0	@ 00038f7c 311c
.org 0x38f7e
	adds r1, #228	@ 00038f7e e431
.org 0x38f80
	movs r0, #0	@ 00038f80 0020
.org 0x38f82
	strb r0, [r1, #0]	@ 00038f82 0870
.org 0x38f84
	adds r5, r1, #0	@ 00038f84 0d1c
.org 0x38f86
	ldrb r1, [r2, #0]	@ 00038f86 1178
.org 0x38f88
	movs r0, #32	@ 00038f88 2020
.org 0x38f8a
	ands r0, r1	@ 00038f8a 0840
.org 0x38f8c
	cmp r0, #0	@ 00038f8c 0028
.org 0x38f8e
	beq.n 0x38f92	@ 00038f8e 00d0
.org 0x38f90
	b.n 0x39302	@ 00038f90 b7e1
.org 0x38f92
	adds r1, r6, #0	@ 00038f92 311c
.org 0x38f94
	adds r1, #229	@ 00038f94 e531
.org 0x38f96
	ldrb r0, [r1, #0]	@ 00038f96 0878
.org 0x38f98
	adds r0, #1	@ 00038f98 0130
.org 0x38f9a
	b.n 0x39308	@ 00038f9a b5e1
.org 0x38f9c
	ldr r1, [sp, #12]	@ 00038f9c 0399
.org 0x38f9e
	ldrb r0, [r1, #16]	@ 00038f9e 087c
.org 0x38fa0
	cmp r0, #0	@ 00038fa0 0028
.org 0x38fa2
	bne.n 0x39016	@ 00038fa2 38d1
.org 0x38fa4
	ldrh r0, [r3, #0]	@ 00038fa4 1888
.org 0x38fa6
	mov r2, r9	@ 00038fa6 4a46
.org 0x38fa8
	ands r2, r0	@ 00038fa8 0240
.org 0x38faa
	adds r5, r6, #0	@ 00038faa 351c
.org 0x38fac
	adds r5, #228	@ 00038fac e435
.org 0x38fae
	adds r4, r6, #0	@ 00038fae 341c
.org 0x38fb0
	adds r4, #229	@ 00038fb0 e534
.org 0x38fb2
	cmp r2, #0	@ 00038fb2 002a
.org 0x38fb4
	bne.n 0x38fb8	@ 00038fb4 00d1
.org 0x38fb6
	b.n 0x393d0	@ 00038fb6 0be2
.org 0x38fb8
	ldr r3, [pc, #48]	@ 00038fb8 0c4b
.org 0x38fba
	adds r0, r6, r3	@ 00038fba f018
.org 0x38fbc
	ldrh r0, [r0, #0]	@ 00038fbc 0088
.org 0x38fbe
	ands r0, r7	@ 00038fbe 3840
.org 0x38fc0
	cmp r0, #0	@ 00038fc0 0028
.org 0x38fc2
	beq.n 0x38ff0	@ 00038fc2 15d0
.org 0x38fc4
	adds r0, r6, #0	@ 00038fc4 301c
.org 0x38fc6
	movs r1, #1	@ 00038fc6 0121
.org 0x38fc8
	bl 0x3a428	@ 00038fc8 01f02efa
.org 0x38fcc
	lsls r0, r0, #24	@ 00038fcc 0006
.org 0x38fce
	cmp r0, #0	@ 00038fce 0028
.org 0x38fd0
	bne.n 0x38fd4	@ 00038fd0 00d1
.org 0x38fd2
	b.n 0x393d0	@ 00038fd2 fde1
.org 0x38fd4
	movs r1, #150	@ 00038fd4 9621
.org 0x38fd6
	lsls r1, r1, #2	@ 00038fd6 8900
.org 0x38fd8
	adds r0, r6, r1	@ 00038fd8 7018
.org 0x38fda
	ldr r1, [r0, #0]	@ 00038fda 0168
.org 0x38fdc
	movs r2, #128	@ 00038fdc 8022
.org 0x38fde
	lsls r2, r2, #7	@ 00038fde d201
.org 0x38fe0
	orrs r1, r2	@ 00038fe0 1143
.org 0x38fe2
	str r1, [r0, #0]	@ 00038fe2 0160
.org 0x38fe4
	mov r2, r8	@ 00038fe4 4246
.org 0x38fe6
	strb r2, [r4, #0]	@ 00038fe6 2270
.org 0x38fe8
	b.n 0x393d0	@ 00038fe8 f2e1
.org 0x38fea
	.byte 0x00	@ 00038fea data
.org 0x38feb
	.byte 0x00	@ 00038feb data
.org 0x38fec
	.byte 0x62,0x02,0x00,0x00	@ 00038fec data
.org 0x38ff0
	adds r0, r6, #0	@ 00038ff0 301c
.org 0x38ff2
	movs r1, #0	@ 00038ff2 0021
.org 0x38ff4
	bl 0x3a428	@ 00038ff4 01f018fa
.org 0x38ff8
	lsls r0, r0, #24	@ 00038ff8 0006
.org 0x38ffa
	cmp r0, #0	@ 00038ffa 0028
.org 0x38ffc
	bne.n 0x39000	@ 00038ffc 00d1
.org 0x38ffe
	b.n 0x393d0	@ 00038ffe e7e1
.org 0x39000
	movs r3, #150	@ 00039000 9623
.org 0x39002
	lsls r3, r3, #2	@ 00039002 9b00
.org 0x39004
	adds r0, r6, r3	@ 00039004 f018
.org 0x39006
	ldr r1, [r0, #0]	@ 00039006 0168
.org 0x39008
	movs r2, #128	@ 00039008 8022
.org 0x3900a
	lsls r2, r2, #5	@ 0003900a 5201
.org 0x3900c
	orrs r1, r2	@ 0003900c 1143
.org 0x3900e
	str r1, [r0, #0]	@ 0003900e 0160
.org 0x39010
	mov r0, r8	@ 00039010 4046
.org 0x39012
	strb r0, [r5, #0]	@ 00039012 2870
.org 0x39014
	b.n 0x393d0	@ 00039014 dce1
.org 0x39016
	ldr r1, [pc, #44]	@ 00039016 0b49
.org 0x39018
	adds r0, r6, r1	@ 00039018 7018
.org 0x3901a
	ldrh r0, [r0, #0]	@ 0003901a 0088
.org 0x3901c
	ands r0, r7	@ 0003901c 3840
.org 0x3901e
	cmp r0, #0	@ 0003901e 0028
.org 0x39020
	bne.n 0x39024	@ 00039020 00d1
.org 0x39022
	b.n 0x393a0	@ 00039022 bde1
.org 0x39024
	adds r0, r6, #0	@ 00039024 301c
.org 0x39026
	movs r1, #1	@ 00039026 0121
.org 0x39028
	bl 0x3a428	@ 00039028 01f0fef9
.org 0x3902c
	lsls r0, r0, #24	@ 0003902c 0006
.org 0x3902e
	cmp r0, #0	@ 0003902e 0028
.org 0x39030
	bne.n 0x39034	@ 00039030 00d1
.org 0x39032
	b.n 0x393be	@ 00039032 c4e1
.org 0x39034
	movs r2, #150	@ 00039034 9622
.org 0x39036
	lsls r2, r2, #2	@ 00039036 9200
.org 0x39038
	adds r0, r6, r2	@ 00039038 b018
.org 0x3903a
	ldr r1, [r0, #0]	@ 0003903a 0168
.org 0x3903c
	movs r2, #128	@ 0003903c 8022
.org 0x3903e
	lsls r2, r2, #7	@ 0003903e d201
.org 0x39040
	b.n 0x393ba	@ 00039040 bbe1
.org 0x39042
	.byte 0x00	@ 00039042 data
.org 0x39043
	.byte 0x00	@ 00039043 data
.org 0x39044
	.byte 0x62,0x02,0x00,0x00	@ 00039044 data
.org 0x39048
	cmp r0, #1	@ 00039048 0128
.org 0x3904a
	beq.n 0x3904e	@ 0003904a 00d0
.org 0x3904c
	b.n 0x391f6	@ 0003904c d3e0
.org 0x3904e
	movs r4, #148	@ 0003904e 9424
.org 0x39050
	lsls r4, r4, #2	@ 00039050 a400
.org 0x39052
	adds r1, r6, r4	@ 00039052 3119
.org 0x39054
	movs r0, #152	@ 00039054 9820
.org 0x39056
	lsls r0, r0, #2	@ 00039056 8000
.org 0x39058
	adds r5, r6, r0	@ 00039058 3518
.org 0x3905a
	ldrh r0, [r1, #0]	@ 0003905a 0888
.org 0x3905c
	ldrh r2, [r5, #0]	@ 0003905c 2a88
.org 0x3905e
	adds r3, r2, #0	@ 0003905e 131c
.org 0x39060
	ands r3, r0	@ 00039060 0340
.org 0x39062
	mov sl, r1	@ 00039062 8a46
.org 0x39064
	cmp r3, #0	@ 00039064 002b
.org 0x39066
	beq.n 0x39082	@ 00039066 0cd0
.org 0x39068
	movs r1, #150	@ 00039068 9621
.org 0x3906a
	lsls r1, r1, #2	@ 0003906a 8900
.org 0x3906c
	adds r2, r6, r1	@ 0003906c 7218
.org 0x3906e
	ldr r0, [r2, #0]	@ 0003906e 1068
.org 0x39070
	movs r1, #128	@ 00039070 8021
.org 0x39072
	lsls r1, r1, #5	@ 00039072 4901
.org 0x39074
	orrs r0, r1	@ 00039074 0843
.org 0x39076
	str r0, [r2, #0]	@ 00039076 1060
.org 0x39078
	adds r0, r6, #0	@ 00039078 301c
.org 0x3907a
	adds r0, #228	@ 0003907a e430
.org 0x3907c
	mov r2, r8	@ 0003907c 4246
.org 0x3907e
	strb r2, [r0, #0]	@ 0003907e 0270
.org 0x39080
	b.n 0x39120	@ 00039080 4ee0
.org 0x39082
	adds r4, r7, #0	@ 00039082 3c1c
.org 0x39084
	ands r4, r2	@ 00039084 1440
.org 0x39086
	cmp r4, #0	@ 00039086 002c
.org 0x39088
	beq.n 0x390c4	@ 00039088 1cd0
.org 0x3908a
	movs r4, #150	@ 0003908a 9624
.org 0x3908c
	lsls r4, r4, #2	@ 0003908c a400
.org 0x3908e
	adds r2, r6, r4	@ 0003908e 3219
.org 0x39090
	ldr r0, [r2, #0]	@ 00039090 1068
.org 0x39092
	movs r1, #128	@ 00039092 8021
.org 0x39094
	lsls r1, r1, #6	@ 00039094 8901
.org 0x39096
	orrs r0, r1	@ 00039096 0843
.org 0x39098
	str r0, [r2, #0]	@ 00039098 1060
.org 0x3909a
	ldr r1, [pc, #28]	@ 0003909a 0749
.org 0x3909c
	adds r0, r6, r1	@ 0003909c 7018
.org 0x3909e
	ldrb r1, [r0, #0]	@ 0003909e 0178
.org 0x390a0
	movs r0, #16	@ 000390a0 1020
.org 0x390a2
	ands r0, r1	@ 000390a2 0840
.org 0x390a4
	cmp r0, #0	@ 000390a4 0028
.org 0x390a6
	bne.n 0x390bc	@ 000390a6 09d1
.org 0x390a8
	adds r1, r6, #0	@ 000390a8 311c
.org 0x390aa
	adds r1, #228	@ 000390aa e431
.org 0x390ac
	ldrb r0, [r1, #0]	@ 000390ac 0878
.org 0x390ae
	adds r0, #1	@ 000390ae 0130
.org 0x390b0
	strb r0, [r1, #0]	@ 000390b0 0870
.org 0x390b2
	adds r5, r1, #0	@ 000390b2 0d1c
.org 0x390b4
	b.n 0x39122	@ 000390b4 35e0
.org 0x390b6
	.byte 0x00	@ 000390b6 data
.org 0x390b7
	.byte 0x00	@ 000390b7 data
.org 0x390b8
	.byte 0x53,0x01,0x00,0x00	@ 000390b8 data
.org 0x390bc
	adds r0, r6, #0	@ 000390bc 301c
.org 0x390be
	adds r0, #228	@ 000390be e430
.org 0x390c0
	strb r3, [r0, #0]	@ 000390c0 0370
.org 0x390c2
	b.n 0x39120	@ 000390c2 2de0
.org 0x390c4
	ldr r2, [sp, #12]	@ 000390c4 039a
.org 0x390c6
	ldrb r0, [r2, #16]	@ 000390c6 107c
.org 0x390c8
	cmp r0, #0	@ 000390c8 0028
.org 0x390ca
	bne.n 0x390fc	@ 000390ca 17d1
.org 0x390cc
	ldrh r0, [r5, #0]	@ 000390cc 2888
.org 0x390ce
	mov r3, r9	@ 000390ce 4b46
.org 0x390d0
	ands r0, r3	@ 000390d0 1840
.org 0x390d2
	adds r5, r6, #0	@ 000390d2 351c
.org 0x390d4
	adds r5, #228	@ 000390d4 e435
.org 0x390d6
	cmp r0, #0	@ 000390d6 0028
.org 0x390d8
	beq.n 0x39122	@ 000390d8 23d0
.org 0x390da
	adds r0, r6, #0	@ 000390da 301c
.org 0x390dc
	movs r1, #0	@ 000390dc 0021
.org 0x390de
	bl 0x3a428	@ 000390de 01f0a3f9
.org 0x390e2
	lsls r0, r0, #24	@ 000390e2 0006
.org 0x390e4
	cmp r0, #0	@ 000390e4 0028
.org 0x390e6
	beq.n 0x39122	@ 000390e6 1cd0
.org 0x390e8
	movs r1, #150	@ 000390e8 9621
.org 0x390ea
	lsls r1, r1, #2	@ 000390ea 8900
.org 0x390ec
	adds r0, r6, r1	@ 000390ec 7018
.org 0x390ee
	ldr r1, [r0, #0]	@ 000390ee 0168
.org 0x390f0
	movs r2, #128	@ 000390f0 8022
.org 0x390f2
	lsls r2, r2, #5	@ 000390f2 5201
.org 0x390f4
	orrs r1, r2	@ 000390f4 1143
.org 0x390f6
	str r1, [r0, #0]	@ 000390f6 0160
.org 0x390f8
	strb r4, [r5, #0]	@ 000390f8 2c70
.org 0x390fa
	b.n 0x39122	@ 000390fa 12e0
.org 0x390fc
	adds r0, r6, #0	@ 000390fc 301c
.org 0x390fe
	movs r1, #0	@ 000390fe 0021
.org 0x39100
	bl 0x3a428	@ 00039100 01f092f9
.org 0x39104
	lsls r0, r0, #24	@ 00039104 0006
.org 0x39106
	cmp r0, #0	@ 00039106 0028
.org 0x39108
	beq.n 0x3911a	@ 00039108 07d0
.org 0x3910a
	movs r2, #150	@ 0003910a 9622
.org 0x3910c
	lsls r2, r2, #2	@ 0003910c 9200
.org 0x3910e
	adds r0, r6, r2	@ 0003910e b018
.org 0x39110
	ldr r1, [r0, #0]	@ 00039110 0168
.org 0x39112
	movs r2, #128	@ 00039112 8022
.org 0x39114
	lsls r2, r2, #5	@ 00039114 5201
.org 0x39116
	orrs r1, r2	@ 00039116 1143
.org 0x39118
	str r1, [r0, #0]	@ 00039118 0160
.org 0x3911a
	adds r0, r6, #0	@ 0003911a 301c
.org 0x3911c
	adds r0, #228	@ 0003911c e430
.org 0x3911e
	strb r4, [r0, #0]	@ 0003911e 0470
.org 0x39120
	adds r5, r0, #0	@ 00039120 051c
.org 0x39122
	ldr r3, [pc, #36]	@ 00039122 094b
.org 0x39124
	adds r2, r6, r3	@ 00039124 f218
.org 0x39126
	mov r4, sl	@ 00039126 5446
.org 0x39128
	ldrh r0, [r4, #0]	@ 00039128 2088
.org 0x3912a
	ldrh r1, [r2, #0]	@ 0003912a 1188
.org 0x3912c
	adds r3, r1, #0	@ 0003912c 0b1c
.org 0x3912e
	ands r3, r0	@ 0003912e 0340
.org 0x39130
	cmp r3, #0	@ 00039130 002b
.org 0x39132
	beq.n 0x3914c	@ 00039132 0bd0
.org 0x39134
	movs r0, #150	@ 00039134 9620
.org 0x39136
	lsls r0, r0, #2	@ 00039136 8000
.org 0x39138
	adds r2, r6, r0	@ 00039138 3218
.org 0x3913a
	ldr r0, [r2, #0]	@ 0003913a 1068
.org 0x3913c
	movs r1, #128	@ 0003913c 8021
.org 0x3913e
	lsls r1, r1, #7	@ 0003913e c901
.org 0x39140
	orrs r0, r1	@ 00039140 0843
.org 0x39142
	str r0, [r2, #0]	@ 00039142 1060
.org 0x39144
	b.n 0x39302	@ 00039144 dde0
.org 0x39146
	.byte 0x00	@ 00039146 data
.org 0x39147
	.byte 0x00	@ 00039147 data
.org 0x39148
	.byte 0x62,0x02,0x00,0x00	@ 00039148 data
.org 0x3914c
	ldr r4, [sp, #8]	@ 0003914c 029c
.org 0x3914e
	ldrh r0, [r4, #0]	@ 0003914e 2088
.org 0x39150
	adds r7, r0, #0	@ 00039150 071c
.org 0x39152
	ands r7, r1	@ 00039152 0f40
.org 0x39154
	cmp r7, #0	@ 00039154 002f
.org 0x39156
	beq.n 0x3918e	@ 00039156 1ad0
.org 0x39158
	movs r0, #150	@ 00039158 9620
.org 0x3915a
	lsls r0, r0, #2	@ 0003915a 8000
.org 0x3915c
	adds r2, r6, r0	@ 0003915c 3218
.org 0x3915e
	ldr r0, [r2, #0]	@ 0003915e 1068
.org 0x39160
	movs r1, #128	@ 00039160 8021
.org 0x39162
	lsls r1, r1, #8	@ 00039162 0902
.org 0x39164
	orrs r0, r1	@ 00039164 0843
.org 0x39166
	str r0, [r2, #0]	@ 00039166 1060
.org 0x39168
	ldr r1, [pc, #20]	@ 00039168 0549
.org 0x3916a
	adds r0, r6, r1	@ 0003916a 7018
.org 0x3916c
	ldrb r1, [r0, #0]	@ 0003916c 0178
.org 0x3916e
	movs r0, #32	@ 0003916e 2020
.org 0x39170
	ands r0, r1	@ 00039170 0840
.org 0x39172
	cmp r0, #0	@ 00039172 0028
.org 0x39174
	bne.n 0x39184	@ 00039174 06d1
.org 0x39176
	adds r1, r6, #0	@ 00039176 311c
.org 0x39178
	adds r1, #229	@ 00039178 e531
.org 0x3917a
	ldrb r0, [r1, #0]	@ 0003917a 0878
.org 0x3917c
	adds r0, #1	@ 0003917c 0130
.org 0x3917e
	b.n 0x39308	@ 0003917e c3e0
.org 0x39180
	.byte 0x53,0x01,0x00,0x00	@ 00039180 data
.org 0x39184
	adds r0, r6, #0	@ 00039184 301c
.org 0x39186
	adds r0, #229	@ 00039186 e530
.org 0x39188
	strb r3, [r0, #0]	@ 00039188 0370
.org 0x3918a
	adds r4, r0, #0	@ 0003918a 041c
.org 0x3918c
	b.n 0x393d0	@ 0003918c 20e1
.org 0x3918e
	ldr r3, [sp, #12]	@ 0003918e 039b
.org 0x39190
	ldrb r0, [r3, #16]	@ 00039190 187c
.org 0x39192
	cmp r0, #0	@ 00039192 0028
.org 0x39194
	bne.n 0x391ce	@ 00039194 1bd1
.org 0x39196
	ldrh r0, [r2, #0]	@ 00039196 1088
.org 0x39198
	mov r4, r9	@ 00039198 4c46
.org 0x3919a
	ands r4, r0	@ 0003919a 0440
.org 0x3919c
	mov r9, r4	@ 0003919c a146
.org 0x3919e
	adds r4, r6, #0	@ 0003919e 341c
.org 0x391a0
	adds r4, #229	@ 000391a0 e534
.org 0x391a2
	mov r0, r9	@ 000391a2 4846
.org 0x391a4
	cmp r0, #0	@ 000391a4 0028
.org 0x391a6
	bne.n 0x391aa	@ 000391a6 00d1
.org 0x391a8
	b.n 0x393d0	@ 000391a8 12e1
.org 0x391aa
	adds r0, r6, #0	@ 000391aa 301c
.org 0x391ac
	movs r1, #1	@ 000391ac 0121
.org 0x391ae
	bl 0x3a428	@ 000391ae 01f03bf9
.org 0x391b2
	lsls r0, r0, #24	@ 000391b2 0006
.org 0x391b4
	cmp r0, #0	@ 000391b4 0028
.org 0x391b6
	bne.n 0x391ba	@ 000391b6 00d1
.org 0x391b8
	b.n 0x393d0	@ 000391b8 0ae1
.org 0x391ba
	movs r1, #150	@ 000391ba 9621
.org 0x391bc
	lsls r1, r1, #2	@ 000391bc 8900
.org 0x391be
	adds r0, r6, r1	@ 000391be 7018
.org 0x391c0
	ldr r1, [r0, #0]	@ 000391c0 0168
.org 0x391c2
	movs r2, #128	@ 000391c2 8022
.org 0x391c4
	lsls r2, r2, #7	@ 000391c4 d201
.org 0x391c6
	orrs r1, r2	@ 000391c6 1143
.org 0x391c8
	str r1, [r0, #0]	@ 000391c8 0160
.org 0x391ca
	strb r7, [r4, #0]	@ 000391ca 2770
.org 0x391cc
	b.n 0x393d0	@ 000391cc 00e1
.org 0x391ce
	adds r0, r6, #0	@ 000391ce 301c
.org 0x391d0
	movs r1, #1	@ 000391d0 0121
.org 0x391d2
	bl 0x3a428	@ 000391d2 01f029f9
.org 0x391d6
	lsls r0, r0, #24	@ 000391d6 0006
.org 0x391d8
	cmp r0, #0	@ 000391d8 0028
.org 0x391da
	beq.n 0x391ec	@ 000391da 07d0
.org 0x391dc
	movs r2, #150	@ 000391dc 9622
.org 0x391de
	lsls r2, r2, #2	@ 000391de 9200
.org 0x391e0
	adds r0, r6, r2	@ 000391e0 b018
.org 0x391e2
	ldr r1, [r0, #0]	@ 000391e2 0168
.org 0x391e4
	movs r2, #128	@ 000391e4 8022
.org 0x391e6
	lsls r2, r2, #7	@ 000391e6 d201
.org 0x391e8
	orrs r1, r2	@ 000391e8 1143
.org 0x391ea
	str r1, [r0, #0]	@ 000391ea 0160
.org 0x391ec
	adds r0, r6, #0	@ 000391ec 301c
.org 0x391ee
	adds r0, #229	@ 000391ee e530
.org 0x391f0
	strb r7, [r0, #0]	@ 000391f0 0770
.org 0x391f2
	adds r4, r0, #0	@ 000391f2 041c
.org 0x391f4
	b.n 0x393d0	@ 000391f4 ece0
.org 0x391f6
	ldrb r0, [r6, #13]	@ 000391f6 707b
.org 0x391f8
	movs r3, #148	@ 000391f8 9423
.org 0x391fa
	lsls r3, r3, #2	@ 000391fa 9b00
.org 0x391fc
	adds r3, r3, r6	@ 000391fc 9b19
.org 0x391fe
	mov sl, r3	@ 000391fe 9a46
.org 0x39200
	cmp r0, #8	@ 00039200 0828
.org 0x39202
	bhi.n 0x39224	@ 00039202 0fd8
.org 0x39204
	ldr r4, [pc, #92]	@ 00039204 174c
.org 0x39206
	adds r0, r6, r4	@ 00039206 3019
.org 0x39208
	ldrh r1, [r3, #0]	@ 00039208 1988
.org 0x3920a
	ldrh r0, [r0, #0]	@ 0003920a 0088
.org 0x3920c
	ands r0, r1	@ 0003920c 0840
.org 0x3920e
	cmp r0, #0	@ 0003920e 0028
.org 0x39210
	beq.n 0x39224	@ 00039210 08d0
.org 0x39212
	movs r0, #5	@ 00039212 0520
.org 0x39214
	bl 0x2b10	@ 00039214 c9f77cfc
.org 0x39218
	adds r0, r6, #0	@ 00039218 301c
.org 0x3921a
	adds r0, #224	@ 0003921a e030
.org 0x3921c
	ldrb r1, [r0, #0]	@ 0003921c 0178
.org 0x3921e
	movs r2, #1	@ 0003921e 0122
.org 0x39220
	eors r1, r2	@ 00039220 5140
.org 0x39222
	strb r1, [r0, #0]	@ 00039222 0170
.org 0x39224
	movs r0, #152	@ 00039224 9820
.org 0x39226
	lsls r0, r0, #2	@ 00039226 8000
.org 0x39228
	adds r3, r6, r0	@ 00039228 3318
.org 0x3922a
	mov r2, sl	@ 0003922a 5246
.org 0x3922c
	ldrh r1, [r2, #0]	@ 0003922c 1188
.org 0x3922e
	ldrh r2, [r3, #0]	@ 0003922e 1a88
.org 0x39230
	adds r0, r2, #0	@ 00039230 101c
.org 0x39232
	ands r0, r1	@ 00039232 0840
.org 0x39234
	cmp r0, #0	@ 00039234 0028
.org 0x39236
	beq.n 0x39296	@ 00039236 2ed0
.org 0x39238
	adds r0, r6, #0	@ 00039238 301c
.org 0x3923a
	adds r0, #224	@ 0003923a e030
.org 0x3923c
	ldrb r3, [r0, #0]	@ 0003923c 0378
.org 0x3923e
	cmp r3, #0	@ 0003923e 002b
.org 0x39240
	beq.n 0x39268	@ 00039240 12d0
.org 0x39242
	movs r3, #150	@ 00039242 9623
.org 0x39244
	lsls r3, r3, #2	@ 00039244 9b00
.org 0x39246
	adds r2, r6, r3	@ 00039246 f218
.org 0x39248
	ldr r0, [r2, #0]	@ 00039248 1068
.org 0x3924a
	movs r1, #128	@ 0003924a 8021
.org 0x3924c
	lsls r1, r1, #7	@ 0003924c c901
.org 0x3924e
	orrs r0, r1	@ 0003924e 0843
.org 0x39250
	str r0, [r2, #0]	@ 00039250 1060
.org 0x39252
	adds r1, r6, #0	@ 00039252 311c
.org 0x39254
	adds r1, #229	@ 00039254 e531
.org 0x39256
	movs r0, #0	@ 00039256 0020
.org 0x39258
	strb r0, [r1, #0]	@ 00039258 0870
.org 0x3925a
	adds r5, r6, #0	@ 0003925a 351c
.org 0x3925c
	adds r5, #228	@ 0003925c e435
.org 0x3925e
	adds r4, r1, #0	@ 0003925e 0c1c
.org 0x39260
	b.n 0x39284	@ 00039260 10e0
.org 0x39262
	.byte 0x00	@ 00039262 data
.org 0x39263
	.byte 0x00	@ 00039263 data
.org 0x39264
	.byte 0x62,0x02,0x00,0x00	@ 00039264 data
.org 0x39268
	movs r4, #150	@ 00039268 9624
.org 0x3926a
	lsls r4, r4, #2	@ 0003926a a400
.org 0x3926c
	adds r2, r6, r4	@ 0003926c 3219
.org 0x3926e
	ldr r0, [r2, #0]	@ 0003926e 1068
.org 0x39270
	movs r1, #128	@ 00039270 8021
.org 0x39272
	lsls r1, r1, #5	@ 00039272 4901
.org 0x39274
	orrs r0, r1	@ 00039274 0843
.org 0x39276
	str r0, [r2, #0]	@ 00039276 1060
.org 0x39278
	adds r0, r6, #0	@ 00039278 301c
.org 0x3927a
	adds r0, #228	@ 0003927a e430
.org 0x3927c
	strb r3, [r0, #0]	@ 0003927c 0370
.org 0x3927e
	adds r5, r0, #0	@ 0003927e 051c
.org 0x39280
	adds r4, r6, #0	@ 00039280 341c
.org 0x39282
	adds r4, #229	@ 00039282 e534
.org 0x39284
	ldr r1, [sp, #12]	@ 00039284 0399
.org 0x39286
	ldrb r0, [r1, #16]	@ 00039286 087c
.org 0x39288
	cmp r0, #0	@ 00039288 0028
.org 0x3928a
	bne.n 0x3928e	@ 0003928a 00d1
.org 0x3928c
	b.n 0x393d0	@ 0003928c a0e0
.org 0x3928e
	movs r0, #0	@ 0003928e 0020
.org 0x39290
	strb r0, [r5, #0]	@ 00039290 2870
.org 0x39292
	strb r0, [r4, #0]	@ 00039292 2070
.org 0x39294
	b.n 0x393d0	@ 00039294 9ce0
.org 0x39296
	ldr r4, [sp, #8]	@ 00039296 029c
.org 0x39298
	ldrh r0, [r4, #0]	@ 00039298 2088
.org 0x3929a
	ands r2, r0	@ 0003929a 0240
.org 0x3929c
	cmp r2, #0	@ 0003929c 002a
.org 0x3929e
	beq.n 0x3930e	@ 0003929e 36d0
.org 0x392a0
	adds r0, r6, #0	@ 000392a0 301c
.org 0x392a2
	adds r0, #224	@ 000392a2 e030
.org 0x392a4
	ldrb r0, [r0, #0]	@ 000392a4 0078
.org 0x392a6
	cmp r0, #0	@ 000392a6 0028
.org 0x392a8
	beq.n 0x392b8	@ 000392a8 06d0
.org 0x392aa
	movs r1, #150	@ 000392aa 9621
.org 0x392ac
	lsls r1, r1, #2	@ 000392ac 8900
.org 0x392ae
	adds r0, r6, r1	@ 000392ae 7018
.org 0x392b0
	ldr r1, [r0, #0]	@ 000392b0 0168
.org 0x392b2
	movs r2, #128	@ 000392b2 8022
.org 0x392b4
	lsls r2, r2, #8	@ 000392b4 1202
.org 0x392b6
	b.n 0x392c4	@ 000392b6 05e0
.org 0x392b8
	movs r2, #150	@ 000392b8 9622
.org 0x392ba
	lsls r2, r2, #2	@ 000392ba 9200
.org 0x392bc
	adds r0, r6, r2	@ 000392bc b018
.org 0x392be
	ldr r1, [r0, #0]	@ 000392be 0168
.org 0x392c0
	movs r2, #128	@ 000392c0 8022
.org 0x392c2
	lsls r2, r2, #6	@ 000392c2 9201
.org 0x392c4
	orrs r1, r2	@ 000392c4 1143
.org 0x392c6
	str r1, [r0, #0]	@ 000392c6 0160
.org 0x392c8
	ldr r3, [pc, #20]	@ 000392c8 054b
.org 0x392ca
	adds r2, r6, r3	@ 000392ca f218
.org 0x392cc
	ldrb r1, [r2, #0]	@ 000392cc 1178
.org 0x392ce
	movs r0, #16	@ 000392ce 1020
.org 0x392d0
	ands r0, r1	@ 000392d0 0840
.org 0x392d2
	cmp r0, #0	@ 000392d2 0028
.org 0x392d4
	bne.n 0x392e4	@ 000392d4 06d1
.org 0x392d6
	adds r1, r6, #0	@ 000392d6 311c
.org 0x392d8
	adds r1, #228	@ 000392d8 e431
.org 0x392da
	ldrb r0, [r1, #0]	@ 000392da 0878
.org 0x392dc
	adds r0, #1	@ 000392dc 0130
.org 0x392de
	b.n 0x392ea	@ 000392de 04e0
.org 0x392e0
	.byte 0x53,0x01,0x00,0x00	@ 000392e0 data
.org 0x392e4
	adds r1, r6, #0	@ 000392e4 311c
.org 0x392e6
	adds r1, #228	@ 000392e6 e431
.org 0x392e8
	movs r0, #0	@ 000392e8 0020
.org 0x392ea
	strb r0, [r1, #0]	@ 000392ea 0870
.org 0x392ec
	adds r5, r1, #0	@ 000392ec 0d1c
.org 0x392ee
	ldrb r1, [r2, #0]	@ 000392ee 1178
.org 0x392f0
	movs r0, #32	@ 000392f0 2020
.org 0x392f2
	ands r0, r1	@ 000392f2 0840
.org 0x392f4
	cmp r0, #0	@ 000392f4 0028
.org 0x392f6
	bne.n 0x39302	@ 000392f6 04d1
.org 0x392f8
	adds r1, r6, #0	@ 000392f8 311c
.org 0x392fa
	adds r1, #229	@ 000392fa e531
.org 0x392fc
	ldrb r0, [r1, #0]	@ 000392fc 0878
.org 0x392fe
	adds r0, #1	@ 000392fe 0130
.org 0x39300
	b.n 0x39308	@ 00039300 02e0
.org 0x39302
	adds r1, r6, #0	@ 00039302 311c
.org 0x39304
	adds r1, #229	@ 00039304 e531
.org 0x39306
	movs r0, #0	@ 00039306 0020
.org 0x39308
	strb r0, [r1, #0]	@ 00039308 0870
.org 0x3930a
	adds r4, r1, #0	@ 0003930a 0c1c
.org 0x3930c
	b.n 0x393d0	@ 0003930c 60e0
.org 0x3930e
	ldr r4, [sp, #12]	@ 0003930e 039c
.org 0x39310
	ldrb r4, [r4, #16]	@ 00039310 247c
.org 0x39312
	mov r8, r4	@ 00039312 a046
.org 0x39314
	cmp r4, #0	@ 00039314 002c
.org 0x39316
	bne.n 0x3937a	@ 00039316 30d1
.org 0x39318
	ldrh r0, [r3, #0]	@ 00039318 1888
.org 0x3931a
	mov r1, r9	@ 0003931a 4946
.org 0x3931c
	ands r1, r0	@ 0003931c 0140
.org 0x3931e
	adds r5, r6, #0	@ 0003931e 351c
.org 0x39320
	adds r5, #228	@ 00039320 e435
.org 0x39322
	adds r4, r6, #0	@ 00039322 341c
.org 0x39324
	adds r4, #229	@ 00039324 e534
.org 0x39326
	cmp r1, #0	@ 00039326 0029
.org 0x39328
	beq.n 0x393d0	@ 00039328 52d0
.org 0x3932a
	adds r0, r6, #0	@ 0003932a 301c
.org 0x3932c
	adds r0, #224	@ 0003932c e030
.org 0x3932e
	ldrb r7, [r0, #0]	@ 0003932e 0778
.org 0x39330
	cmp r7, #0	@ 00039330 002f
.org 0x39332
	beq.n 0x39358	@ 00039332 11d0
.org 0x39334
	adds r0, r6, #0	@ 00039334 301c
.org 0x39336
	movs r1, #1	@ 00039336 0121
.org 0x39338
	bl 0x3a428	@ 00039338 01f076f8
.org 0x3933c
	lsls r0, r0, #24	@ 0003933c 0006
.org 0x3933e
	cmp r0, #0	@ 0003933e 0028
.org 0x39340
	beq.n 0x393d0	@ 00039340 46d0
.org 0x39342
	movs r2, #150	@ 00039342 9622
.org 0x39344
	lsls r2, r2, #2	@ 00039344 9200
.org 0x39346
	adds r0, r6, r2	@ 00039346 b018
.org 0x39348
	ldr r1, [r0, #0]	@ 00039348 0168
.org 0x3934a
	movs r2, #128	@ 0003934a 8022
.org 0x3934c
	lsls r2, r2, #7	@ 0003934c d201
.org 0x3934e
	orrs r1, r2	@ 0003934e 1143
.org 0x39350
	str r1, [r0, #0]	@ 00039350 0160
.org 0x39352
	mov r3, r8	@ 00039352 4346
.org 0x39354
	strb r3, [r4, #0]	@ 00039354 2370
.org 0x39356
	b.n 0x393d0	@ 00039356 3be0
.org 0x39358
	adds r0, r6, #0	@ 00039358 301c
.org 0x3935a
	movs r1, #0	@ 0003935a 0021
.org 0x3935c
	bl 0x3a428	@ 0003935c 01f064f8
.org 0x39360
	lsls r0, r0, #24	@ 00039360 0006
.org 0x39362
	cmp r0, #0	@ 00039362 0028
.org 0x39364
	beq.n 0x393d0	@ 00039364 34d0
.org 0x39366
	movs r1, #150	@ 00039366 9621
.org 0x39368
	lsls r1, r1, #2	@ 00039368 8900
.org 0x3936a
	adds r0, r6, r1	@ 0003936a 7018
.org 0x3936c
	ldr r1, [r0, #0]	@ 0003936c 0168
.org 0x3936e
	movs r2, #128	@ 0003936e 8022
.org 0x39370
	lsls r2, r2, #5	@ 00039370 5201
.org 0x39372
	orrs r1, r2	@ 00039372 1143
.org 0x39374
	str r1, [r0, #0]	@ 00039374 0160
.org 0x39376
	strb r7, [r5, #0]	@ 00039376 2f70
.org 0x39378
	b.n 0x393d0	@ 00039378 2ae0
.org 0x3937a
	adds r0, r6, #0	@ 0003937a 301c
.org 0x3937c
	adds r0, #224	@ 0003937c e030
.org 0x3937e
	ldrb r0, [r0, #0]	@ 0003937e 0078
.org 0x39380
	cmp r0, #0	@ 00039380 0028
.org 0x39382
	beq.n 0x393a0	@ 00039382 0dd0
.org 0x39384
	adds r0, r6, #0	@ 00039384 301c
.org 0x39386
	movs r1, #1	@ 00039386 0121
.org 0x39388
	bl 0x3a428	@ 00039388 01f04ef8
.org 0x3938c
	lsls r0, r0, #24	@ 0003938c 0006
.org 0x3938e
	cmp r0, #0	@ 0003938e 0028
.org 0x39390
	beq.n 0x393be	@ 00039390 15d0
.org 0x39392
	movs r2, #150	@ 00039392 9622
.org 0x39394
	lsls r2, r2, #2	@ 00039394 9200
.org 0x39396
	adds r0, r6, r2	@ 00039396 b018
.org 0x39398
	ldr r1, [r0, #0]	@ 00039398 0168
.org 0x3939a
	movs r2, #128	@ 0003939a 8022
.org 0x3939c
	lsls r2, r2, #7	@ 0003939c d201
.org 0x3939e
	b.n 0x393ba	@ 0003939e 0ce0
.org 0x393a0
	adds r0, r6, #0	@ 000393a0 301c
.org 0x393a2
	movs r1, #0	@ 000393a2 0021
.org 0x393a4
	bl 0x3a428	@ 000393a4 01f040f8
.org 0x393a8
	lsls r0, r0, #24	@ 000393a8 0006
.org 0x393aa
	cmp r0, #0	@ 000393aa 0028
.org 0x393ac
	beq.n 0x393be	@ 000393ac 07d0
.org 0x393ae
	movs r3, #150	@ 000393ae 9623
.org 0x393b0
	lsls r3, r3, #2	@ 000393b0 9b00
.org 0x393b2
	adds r0, r6, r3	@ 000393b2 f018
.org 0x393b4
	ldr r1, [r0, #0]	@ 000393b4 0168
.org 0x393b6
	movs r2, #128	@ 000393b6 8022
.org 0x393b8
	lsls r2, r2, #5	@ 000393b8 5201
.org 0x393ba
	orrs r1, r2	@ 000393ba 1143
.org 0x393bc
	str r1, [r0, #0]	@ 000393bc 0160
.org 0x393be
	adds r0, r6, #0	@ 000393be 301c
.org 0x393c0
	adds r0, #228	@ 000393c0 e430
.org 0x393c2
	movs r1, #0	@ 000393c2 0021
.org 0x393c4
	strb r1, [r0, #0]	@ 000393c4 0170
.org 0x393c6
	adds r2, r6, #0	@ 000393c6 321c
.org 0x393c8
	adds r2, #229	@ 000393c8 e532
.org 0x393ca
	strb r1, [r2, #0]	@ 000393ca 1170
.org 0x393cc
	adds r5, r0, #0	@ 000393cc 051c
.org 0x393ce
	adds r4, r2, #0	@ 000393ce 141c
.org 0x393d0
	adds r0, r6, #0	@ 000393d0 301c
.org 0x393d2
	adds r0, #225	@ 000393d2 e130
.org 0x393d4
	ldrb r0, [r0, #0]	@ 000393d4 0078
.org 0x393d6
	cmp r0, #0	@ 000393d6 0028
.org 0x393d8
	bne.n 0x393e2	@ 000393d8 03d1
.org 0x393da
	adds r0, r6, #0	@ 000393da 301c
.org 0x393dc
	bl 0x394fc	@ 000393dc 00f08ef8
.org 0x393e0
	b.n 0x393ea	@ 000393e0 03e0
.org 0x393e2
	ldr r0, [pc, #140]	@ 000393e2 2348
.org 0x393e4
	adds r1, r6, r0	@ 000393e4 3118
.org 0x393e6
	movs r0, #0	@ 000393e6 0020
.org 0x393e8
	strb r0, [r1, #0]	@ 000393e8 0870
.org 0x393ea
	adds r0, r6, #0	@ 000393ea 301c
.org 0x393ec
	adds r0, #243	@ 000393ec f330
.org 0x393ee
	ldrb r0, [r0, #0]	@ 000393ee 0078
.org 0x393f0
	cmp r0, #7	@ 000393f0 0728
.org 0x393f2
	bne.n 0x39418	@ 000393f2 11d1
.org 0x393f4
	adds r0, r6, #0	@ 000393f4 301c
.org 0x393f6
	bl 0x39780	@ 000393f6 00f0c3f9
.org 0x393fa
	adds r0, r6, #0	@ 000393fa 301c
.org 0x393fc
	bl 0x398b4	@ 000393fc 00f05afa
.org 0x39400
	adds r0, r6, #0	@ 00039400 301c
.org 0x39402
	bl 0x39a74	@ 00039402 00f037fb
.org 0x39406
	adds r0, r6, #0	@ 00039406 301c
.org 0x39408
	bl 0x39b80	@ 00039408 00f0bafb
.org 0x3940c
	adds r0, r6, #0	@ 0003940c 301c
.org 0x3940e
	bl 0x39cb4	@ 0003940e 00f051fc
.org 0x39412
	adds r0, r6, #0	@ 00039412 301c
.org 0x39414
	bl 0x39e20	@ 00039414 00f004fd
.org 0x39418
	ldr r2, [sp, #8]	@ 00039418 029a
.org 0x3941a
	ldrh r1, [r2, #0]	@ 0003941a 1188
.org 0x3941c
	movs r0, #128	@ 0003941c 8020
.org 0x3941e
	lsls r0, r0, #8	@ 0003941e 0002
.org 0x39420
	ands r0, r1	@ 00039420 0840
.org 0x39422
	cmp r0, #0	@ 00039422 0028
.org 0x39424
	bne.n 0x39462	@ 00039424 1dd1
.org 0x39426
	ldr r3, [sp, #12]	@ 00039426 039b
.org 0x39428
	ldrb r0, [r3, #16]	@ 00039428 187c
.org 0x3942a
	cmp r0, #0	@ 0003942a 0028
.org 0x3942c
	bne.n 0x39462	@ 0003942c 19d1
.org 0x3942e
	ldrb r2, [r5, #0]	@ 0003942e 2a78
.org 0x39430
	ldr r0, [sp, #0]	@ 00039430 0098
.org 0x39432
	cmp r0, r2	@ 00039432 9042
.org 0x39434
	bne.n 0x39448	@ 00039434 08d1
.org 0x39436
	ldr r1, [pc, #60]	@ 00039436 0f49
.org 0x39438
	adds r0, r6, r1	@ 00039438 7018
.org 0x3943a
	ldrb r1, [r0, #0]	@ 0003943a 0178
.org 0x3943c
	movs r0, #16	@ 0003943c 1020
.org 0x3943e
	ands r0, r1	@ 0003943e 0840
.org 0x39440
	cmp r0, #0	@ 00039440 0028
.org 0x39442
	bne.n 0x39448	@ 00039442 01d1
.org 0x39444
	adds r0, r2, #1	@ 00039444 501c
.org 0x39446
	strb r0, [r5, #0]	@ 00039446 2870
.org 0x39448
	ldrb r2, [r4, #0]	@ 00039448 2278
.org 0x3944a
	ldr r3, [sp, #4]	@ 0003944a 019b
.org 0x3944c
	cmp r3, r2	@ 0003944c 9342
.org 0x3944e
	bne.n 0x39462	@ 0003944e 08d1
.org 0x39450
	ldr r1, [pc, #32]	@ 00039450 0849
.org 0x39452
	adds r0, r6, r1	@ 00039452 7018
.org 0x39454
	ldrb r1, [r0, #0]	@ 00039454 0178
.org 0x39456
	movs r0, #32	@ 00039456 2020
.org 0x39458
	ands r0, r1	@ 00039458 0840
.org 0x3945a
	cmp r0, #0	@ 0003945a 0028
.org 0x3945c
	bne.n 0x39462	@ 0003945c 01d1
.org 0x3945e
	adds r0, r2, #1	@ 0003945e 501c
.org 0x39460
	strb r0, [r4, #0]	@ 00039460 2070
.org 0x39462
	ldrb r0, [r6, #13]	@ 00039462 707b
.org 0x39464
	cmp r0, #9	@ 00039464 0928
.org 0x39466
	bne.n 0x39478	@ 00039466 07d1
.org 0x39468
	movs r0, #0	@ 00039468 0020
.org 0x3946a
	strb r0, [r5, #0]	@ 0003946a 2870
.org 0x3946c
	b.n 0x394d0	@ 0003946c 30e0
.org 0x3946e
	.byte 0x00	@ 0003946e data
.org 0x3946f
	.byte 0x00	@ 0003946f data
.org 0x39470
	.byte 0x77,0x02,0x00,0x00	@ 00039470 data
.org 0x39474
	.byte 0x53,0x01,0x00,0x00	@ 00039474 data
.org 0x39478
	ldr r2, [sp, #12]	@ 00039478 039a
.org 0x3947a
	ldrb r0, [r2, #19]	@ 0003947a d07c
.org 0x3947c
	cmp r0, #1	@ 0003947c 0128
.org 0x3947e
	bne.n 0x394be	@ 0003947e 1ed1
.org 0x39480
	ldrb r0, [r2, #12]	@ 00039480 107b
.org 0x39482
	cmp r0, #0	@ 00039482 0028
.org 0x39484
	beq.n 0x39494	@ 00039484 06d0
.org 0x39486
	cmp r0, #1	@ 00039486 0128
.org 0x39488
	beq.n 0x3949e	@ 00039488 09d0
.org 0x3948a
	ldrb r0, [r5, #0]	@ 0003948a 2878
.org 0x3948c
	cmp r0, #200	@ 0003948c c828
.org 0x3948e
	bls.n 0x394a2	@ 0003948e 08d9
.org 0x39490
	movs r0, #200	@ 00039490 c820
.org 0x39492
	b.n 0x394a0	@ 00039492 05e0
.org 0x39494
	ldrb r0, [r5, #0]	@ 00039494 2878
.org 0x39496
	cmp r0, #40	@ 00039496 2828
.org 0x39498
	bls.n 0x394a2	@ 00039498 03d9
.org 0x3949a
	movs r0, #40	@ 0003949a 2820
.org 0x3949c
	b.n 0x394a0	@ 0003949c 00e0
.org 0x3949e
	movs r0, #0	@ 0003949e 0020
