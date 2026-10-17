@ FUN_08009b5c  entry 0x08009b5c  size 1056
.thumb
.org 0x9b5c
FUN_08009b5c:
	push {r4, r5, r6, r7, lr}	@ 00009b5c f0b5
.org 0x9b5e
	mov r7, sl	@ 00009b5e 5746
.org 0x9b60
	mov r6, r9	@ 00009b60 4e46
.org 0x9b62
	mov r5, r8	@ 00009b62 4546
.org 0x9b64
	push {r5, r6, r7}	@ 00009b64 e0b4
.org 0x9b66
	sub sp, #12	@ 00009b66 83b0
.org 0x9b68
	adds r7, r0, #0	@ 00009b68 071c
.org 0x9b6a
	movs r4, #159	@ 00009b6a 9f24
.org 0x9b6c
	movs r0, #160	@ 00009b6c a020
.org 0x9b6e
	lsls r0, r0, #2	@ 00009b6e 8000
.org 0x9b70
	bl 0xa70	@ 00009b70 f6f77eff
.org 0x9b74
	mov sl, r0	@ 00009b74 8246
.org 0x9b76
	cmp r0, #0	@ 00009b76 0028
.org 0x9b78
	bne.n 0x9b7c	@ 00009b78 00d1
.org 0x9b7a
	b.n 0x9f86	@ 00009b7a 04e2
.org 0x9b7c
	ldr r2, [pc, #820]	@ 00009b7c cd4a
.org 0x9b7e
	movs r1, #186	@ 00009b7e ba21
.org 0x9b80
	lsls r1, r1, #1	@ 00009b80 4900
.org 0x9b82
	adds r0, r2, r1	@ 00009b82 5018
.org 0x9b84
	mov r3, sl	@ 00009b84 5346
.org 0x9b86
	str r3, [r0, #0]	@ 00009b86 0360
.org 0x9b88
	movs r0, #188	@ 00009b88 bc20
.org 0x9b8a
	lsls r0, r0, #1	@ 00009b8a 4000
.org 0x9b8c
	adds r1, r2, r0	@ 00009b8c 1118
.org 0x9b8e
	ldr r0, [pc, #808]	@ 00009b8e ca48
.org 0x9b90
	str r0, [r1, #0]	@ 00009b90 0860
.org 0x9b92
	movs r3, #190	@ 00009b92 be23
.org 0x9b94
	lsls r3, r3, #1	@ 00009b94 5b00
.org 0x9b96
	adds r1, r2, r3	@ 00009b96 d118
.org 0x9b98
	ldr r0, [pc, #800]	@ 00009b98 c848
.org 0x9b9a
	str r0, [r1, #0]	@ 00009b9a 0860
.org 0x9b9c
	ldr r0, [r7, #52]	@ 00009b9c 786b
.org 0x9b9e
	lsls r0, r0, #15	@ 00009b9e c003
.org 0x9ba0
	lsrs r5, r0, #16	@ 00009ba0 050c
.org 0x9ba2
	ldr r0, [r7, #56]	@ 00009ba2 b86b
.org 0x9ba4
	ldr r1, [pc, #792]	@ 00009ba4 c649
.org 0x9ba6
	adds r0, r0, r1	@ 00009ba6 4018
.org 0x9ba8
	asrs r0, r0, #3	@ 00009ba8 c010
.org 0x9baa
	adds r0, #19	@ 00009baa 1330
.org 0x9bac
	lsls r0, r0, #16	@ 00009bac 0004
.org 0x9bae
	asrs r2, r0, #16	@ 00009bae 0214
.org 0x9bb0
	adds r0, r2, #0	@ 00009bb0 101c
.org 0x9bb2
	adds r0, #159	@ 00009bb2 9f30
.org 0x9bb4
	cmp r0, #128	@ 00009bb4 8028
.org 0x9bb6
	ble.n 0x9bd4	@ 00009bb6 0ddd
.org 0x9bb8
	movs r1, #159	@ 00009bb8 9f21
.org 0x9bba
	lsls r1, r1, #2	@ 00009bba 8900
.org 0x9bbc
	add r1, sl	@ 00009bbc 5144
.org 0x9bbe
	adds r3, r2, #0	@ 00009bbe 131c
.org 0x9bc0
	lsls r2, r3, #16	@ 00009bc0 1a04
.org 0x9bc2
	orrs r2, r5	@ 00009bc2 2a43
.org 0x9bc4
	str r2, [r1, #0]	@ 00009bc4 0a60
.org 0x9bc6
	subs r1, #4	@ 00009bc6 0439
.org 0x9bc8
	subs r4, #1	@ 00009bc8 013c
.org 0x9bca
	cmp r4, #0	@ 00009bca 002c
.org 0x9bcc
	blt.n 0x9bd4	@ 00009bcc 02db
.org 0x9bce
	adds r0, r3, r4	@ 00009bce 1819
.org 0x9bd0
	cmp r0, #128	@ 00009bd0 8028
.org 0x9bd2
	bgt.n 0x9bc4	@ 00009bd2 f7dc
.org 0x9bd4
	ldr r0, [r7, #52]	@ 00009bd4 786b
.org 0x9bd6
	lsls r0, r0, #14	@ 00009bd6 8003
.org 0x9bd8
	lsrs r5, r0, #16	@ 00009bd8 050c
.org 0x9bda
	ldr r0, [r7, #56]	@ 00009bda b86b
.org 0x9bdc
	ldr r2, [pc, #736]	@ 00009bdc b84a
.org 0x9bde
	adds r0, r0, r2	@ 00009bde 8018
.org 0x9be0
	asrs r0, r0, #4	@ 00009be0 0011
.org 0x9be2
	adds r0, #28	@ 00009be2 1c30
.org 0x9be4
	lsls r0, r0, #16	@ 00009be4 0004
.org 0x9be6
	lsrs r1, r0, #16	@ 00009be6 010c
.org 0x9be8
	cmp r4, #0	@ 00009be8 002c
.org 0x9bea
	blt.n 0x9c48	@ 00009bea 2ddb
.org 0x9bec
	lsls r0, r1, #16	@ 00009bec 0804
.org 0x9bee
	asrs r2, r0, #16	@ 00009bee 0214
.org 0x9bf0
	adds r1, r2, r4	@ 00009bf0 1119
.org 0x9bf2
	adds r6, r0, #0	@ 00009bf2 061c
.org 0x9bf4
	cmp r1, #128	@ 00009bf4 8029
.org 0x9bf6
	ble.n 0x9c20	@ 00009bf6 13dd
.org 0x9bf8
	adds r1, r2, #0	@ 00009bf8 111c
.org 0x9bfa
	lsls r0, r4, #16	@ 00009bfa 2004
.org 0x9bfc
	negs r0, r0	@ 00009bfc 4042
.org 0x9bfe
	movs r2, #128	@ 00009bfe 8022
.org 0x9c00
	lsls r2, r2, #16	@ 00009c00 1204
.org 0x9c02
	adds r3, r0, r2	@ 00009c02 8318
.org 0x9c04
	lsls r2, r4, #2	@ 00009c04 a200
.org 0x9c06
	add r2, sl	@ 00009c06 5244
.org 0x9c08
	movs r0, #128	@ 00009c08 8020
.org 0x9c0a
	lsls r0, r0, #9	@ 00009c0a 4002
.org 0x9c0c
	mov r8, r0	@ 00009c0c 8046
.org 0x9c0e
	str r3, [r2, #0]	@ 00009c0e 1360
.org 0x9c10
	add r3, r8	@ 00009c10 4344
.org 0x9c12
	subs r2, #4	@ 00009c12 043a
.org 0x9c14
	subs r4, #1	@ 00009c14 013c
.org 0x9c16
	cmp r4, #0	@ 00009c16 002c
.org 0x9c18
	blt.n 0x9c48	@ 00009c18 16db
.org 0x9c1a
	adds r0, r1, r4	@ 00009c1a 0819
.org 0x9c1c
	cmp r0, #128	@ 00009c1c 8028
.org 0x9c1e
	bgt.n 0x9c0e	@ 00009c1e f6dc
.org 0x9c20
	cmp r4, #0	@ 00009c20 002c
.org 0x9c22
	blt.n 0x9c48	@ 00009c22 11db
.org 0x9c24
	asrs r2, r6, #16	@ 00009c24 3214
.org 0x9c26
	adds r0, r2, r4	@ 00009c26 1019
.org 0x9c28
	cmp r0, #119	@ 00009c28 7728
.org 0x9c2a
	ble.n 0x9c48	@ 00009c2a 0ddd
.org 0x9c2c
	lsls r0, r4, #2	@ 00009c2c a000
.org 0x9c2e
	mov r3, sl	@ 00009c2e 5346
.org 0x9c30
	adds r1, r0, r3	@ 00009c30 c118
.org 0x9c32
	adds r3, r2, #0	@ 00009c32 131c
.org 0x9c34
	lsls r2, r3, #16	@ 00009c34 1a04
.org 0x9c36
	orrs r2, r5	@ 00009c36 2a43
.org 0x9c38
	str r2, [r1, #0]	@ 00009c38 0a60
.org 0x9c3a
	subs r1, #4	@ 00009c3a 0439
.org 0x9c3c
	subs r4, #1	@ 00009c3c 013c
.org 0x9c3e
	cmp r4, #0	@ 00009c3e 002c
.org 0x9c40
	blt.n 0x9c48	@ 00009c40 02db
.org 0x9c42
	adds r0, r3, r4	@ 00009c42 1819
.org 0x9c44
	cmp r0, #119	@ 00009c44 7728
.org 0x9c46
	bgt.n 0x9c38	@ 00009c46 f7dc
.org 0x9c48
	ldr r0, [r7, #52]	@ 00009c48 786b
.org 0x9c4a
	lsls r0, r0, #13	@ 00009c4a 4003
.org 0x9c4c
	lsrs r5, r0, #16	@ 00009c4c 050c
.org 0x9c4e
	ldr r0, [r7, #56]	@ 00009c4e b86b
.org 0x9c50
	ldr r1, [pc, #620]	@ 00009c50 9b49
.org 0x9c52
	adds r0, r0, r1	@ 00009c52 4018
.org 0x9c54
	asrs r0, r0, #5	@ 00009c54 4011
.org 0x9c56
	adds r0, #32	@ 00009c56 2030
.org 0x9c58
	lsls r0, r0, #16	@ 00009c58 0004
.org 0x9c5a
	lsrs r1, r0, #16	@ 00009c5a 010c
.org 0x9c5c
	cmp r4, #0	@ 00009c5c 002c
.org 0x9c5e
	blt.n 0x9cba	@ 00009c5e 2cdb
.org 0x9c60
	lsls r0, r1, #16	@ 00009c60 0804
.org 0x9c62
	asrs r2, r0, #16	@ 00009c62 0214
.org 0x9c64
	adds r1, r2, r4	@ 00009c64 1119
.org 0x9c66
	adds r6, r0, #0	@ 00009c66 061c
.org 0x9c68
	cmp r1, #119	@ 00009c68 7729
.org 0x9c6a
	ble.n 0x9c92	@ 00009c6a 12dd
.org 0x9c6c
	adds r3, r2, #0	@ 00009c6c 131c
.org 0x9c6e
	lsls r0, r4, #16	@ 00009c6e 2004
.org 0x9c70
	movs r1, #238	@ 00009c70 ee21
.org 0x9c72
	lsls r1, r1, #15	@ 00009c72 c903
.org 0x9c74
	subs r1, r1, r0	@ 00009c74 091a
.org 0x9c76
	lsls r2, r4, #2	@ 00009c76 a200
.org 0x9c78
	add r2, sl	@ 00009c78 5244
.org 0x9c7a
	movs r0, #128	@ 00009c7a 8020
.org 0x9c7c
	lsls r0, r0, #9	@ 00009c7c 4002
.org 0x9c7e
	mov r8, r0	@ 00009c7e 8046
.org 0x9c80
	str r1, [r2, #0]	@ 00009c80 1160
.org 0x9c82
	add r1, r8	@ 00009c82 4144
.org 0x9c84
	subs r2, #4	@ 00009c84 043a
.org 0x9c86
	subs r4, #1	@ 00009c86 013c
.org 0x9c88
	cmp r4, #0	@ 00009c88 002c
.org 0x9c8a
	blt.n 0x9cba	@ 00009c8a 16db
.org 0x9c8c
	adds r0, r3, r4	@ 00009c8c 1819
.org 0x9c8e
	cmp r0, #119	@ 00009c8e 7728
.org 0x9c90
	bgt.n 0x9c80	@ 00009c90 f6dc
.org 0x9c92
	cmp r4, #0	@ 00009c92 002c
.org 0x9c94
	blt.n 0x9cba	@ 00009c94 11db
.org 0x9c96
	asrs r2, r6, #16	@ 00009c96 3214
.org 0x9c98
	adds r0, r2, r4	@ 00009c98 1019
.org 0x9c9a
	cmp r0, #112	@ 00009c9a 7028
.org 0x9c9c
	ble.n 0x9cba	@ 00009c9c 0ddd
.org 0x9c9e
	lsls r0, r4, #2	@ 00009c9e a000
.org 0x9ca0
	mov r3, sl	@ 00009ca0 5346
.org 0x9ca2
	adds r1, r0, r3	@ 00009ca2 c118
.org 0x9ca4
	adds r3, r2, #0	@ 00009ca4 131c
.org 0x9ca6
	lsls r2, r3, #16	@ 00009ca6 1a04
.org 0x9ca8
	orrs r2, r5	@ 00009ca8 2a43
.org 0x9caa
	str r2, [r1, #0]	@ 00009caa 0a60
.org 0x9cac
	subs r1, #4	@ 00009cac 0439
.org 0x9cae
	subs r4, #1	@ 00009cae 013c
.org 0x9cb0
	cmp r4, #0	@ 00009cb0 002c
.org 0x9cb2
	blt.n 0x9cba	@ 00009cb2 02db
.org 0x9cb4
	adds r0, r3, r4	@ 00009cb4 1819
.org 0x9cb6
	cmp r0, #112	@ 00009cb6 7028
.org 0x9cb8
	bgt.n 0x9caa	@ 00009cb8 f7dc
.org 0x9cba
	lsls r2, r4, #16	@ 00009cba 2204
.org 0x9cbc
	ldr r0, [r7, #104]	@ 00009cbc b86e
.org 0x9cbe
	lsrs r0, r0, #1	@ 00009cbe 4008
.org 0x9cc0
	ldr r1, [r7, #52]	@ 00009cc0 796b
.org 0x9cc2
	asrs r1, r1, #2	@ 00009cc2 8910
.org 0x9cc4
	adds r0, r0, r1	@ 00009cc4 4018
.org 0x9cc6
	lsls r0, r0, #16	@ 00009cc6 0004
.org 0x9cc8
	lsrs r5, r0, #16	@ 00009cc8 050c
.org 0x9cca
	ldr r0, [r7, #56]	@ 00009cca b86b
.org 0x9ccc
	ldr r1, [pc, #500]	@ 00009ccc 7d49
.org 0x9cce
	adds r0, r0, r1	@ 00009cce 4018
.org 0x9cd0
	asrs r0, r0, #4	@ 00009cd0 0011
.org 0x9cd2
	adds r0, #24	@ 00009cd2 1830
.org 0x9cd4
	lsls r0, r0, #16	@ 00009cd4 0004
.org 0x9cd6
	lsrs r1, r0, #16	@ 00009cd6 010c
.org 0x9cd8
	movs r4, #0	@ 00009cd8 0024
.org 0x9cda
	lsrs r3, r2, #16	@ 00009cda 130c
.org 0x9cdc
	mov r8, r3	@ 00009cdc 9846
.org 0x9cde
	asrs r2, r2, #16	@ 00009cde 1214
.org 0x9ce0
	cmp r4, r2	@ 00009ce0 9442
.org 0x9ce2
	bgt.n 0x9d02	@ 00009ce2 0edc
.org 0x9ce4
	lsls r0, r1, #16	@ 00009ce4 0804
.org 0x9ce6
	asrs r0, r0, #16	@ 00009ce6 0014
.org 0x9ce8
	cmp r0, #38	@ 00009ce8 2628
.org 0x9cea
	bgt.n 0x9d02	@ 00009cea 0adc
.org 0x9cec
	mov r6, sl	@ 00009cec 5646
.org 0x9cee
	adds r3, r0, #0	@ 00009cee 031c
.org 0x9cf0
	lsls r1, r3, #16	@ 00009cf0 1904
.org 0x9cf2
	orrs r1, r5	@ 00009cf2 2943
.org 0x9cf4
	stmia r6!, {r1}	@ 00009cf4 02c6
.org 0x9cf6
	adds r4, #1	@ 00009cf6 0134
.org 0x9cf8
	cmp r4, r2	@ 00009cf8 9442
.org 0x9cfa
	bgt.n 0x9d02	@ 00009cfa 02dc
.org 0x9cfc
	adds r0, r3, r4	@ 00009cfc 1819
.org 0x9cfe
	cmp r0, #38	@ 00009cfe 2628
.org 0x9d00
	ble.n 0x9cf4	@ 00009d00 f8dd
.org 0x9d02
	ldr r0, [r7, #104]	@ 00009d02 b86e
.org 0x9d04
	lsrs r0, r0, #2	@ 00009d04 8008
.org 0x9d06
	ldr r1, [r7, #52]	@ 00009d06 796b
.org 0x9d08
	asrs r1, r1, #3	@ 00009d08 c910
.org 0x9d0a
	adds r0, r0, r1	@ 00009d0a 4018
.org 0x9d0c
	lsls r0, r0, #16	@ 00009d0c 0004
.org 0x9d0e
	lsrs r5, r0, #16	@ 00009d0e 050c
.org 0x9d10
	ldr r0, [r7, #56]	@ 00009d10 b86b
.org 0x9d12
	ldr r1, [pc, #432]	@ 00009d12 6c49
.org 0x9d14
	adds r0, r0, r1	@ 00009d14 4018
.org 0x9d16
	asrs r0, r0, #5	@ 00009d16 4011
.org 0x9d18
	adds r0, #24	@ 00009d18 1830
.org 0x9d1a
	lsls r0, r0, #16	@ 00009d1a 0004
.org 0x9d1c
	lsrs r1, r0, #16	@ 00009d1c 010c
.org 0x9d1e
	mov r2, r8	@ 00009d1e 4246
.org 0x9d20
	lsls r0, r2, #16	@ 00009d20 1004
.org 0x9d22
	asrs r2, r0, #16	@ 00009d22 0214
.org 0x9d24
	str r0, [sp, #0]	@ 00009d24 0090
.org 0x9d26
	cmp r4, r2	@ 00009d26 9442
.org 0x9d28
	bgt.n 0x9d96	@ 00009d28 35dc
.org 0x9d2a
	lsls r0, r1, #16	@ 00009d2a 0804
.org 0x9d2c
	asrs r3, r0, #16	@ 00009d2c 0314
.org 0x9d2e
	adds r1, r3, r4	@ 00009d2e 1919
.org 0x9d30
	adds r6, r0, #0	@ 00009d30 061c
.org 0x9d32
	cmp r1, #38	@ 00009d32 2629
.org 0x9d34
	bgt.n 0x9d6c	@ 00009d34 1adc
.org 0x9d36
	mov r8, r5	@ 00009d36 a846
.org 0x9d38
	lsls r0, r4, #16	@ 00009d38 2004
.org 0x9d3a
	movs r1, #156	@ 00009d3a 9c21
.org 0x9d3c
	lsls r1, r1, #14	@ 00009d3c 8903
.org 0x9d3e
	subs r1, r1, r0	@ 00009d3e 091a
.org 0x9d40
	lsls r0, r4, #2	@ 00009d40 a000
.org 0x9d42
	add r0, sl	@ 00009d42 5044
.org 0x9d44
	mov ip, r0	@ 00009d44 8446
.org 0x9d46
	ldr r0, [pc, #384]	@ 00009d46 6048
.org 0x9d48
	mov r9, r0	@ 00009d48 8146
.org 0x9d4a
	str r3, [sp, #4]	@ 00009d4a 0193
.org 0x9d4c
	adds r0, r1, #0	@ 00009d4c 081c
.org 0x9d4e
	mov r3, r8	@ 00009d4e 4346
.org 0x9d50
	orrs r0, r3	@ 00009d50 1843
.org 0x9d52
	mov r3, ip	@ 00009d52 6346
.org 0x9d54
	adds r3, #4	@ 00009d54 0433
.org 0x9d56
	mov ip, r3	@ 00009d56 9c46
.org 0x9d58
	subs r3, #4	@ 00009d58 043b
.org 0x9d5a
	stmia r3!, {r0}	@ 00009d5a 01c3
.org 0x9d5c
	add r1, r9	@ 00009d5c 4944
.org 0x9d5e
	adds r4, #1	@ 00009d5e 0134
.org 0x9d60
	cmp r4, r2	@ 00009d60 9442
.org 0x9d62
	bgt.n 0x9d96	@ 00009d62 18dc
.org 0x9d64
	ldr r3, [sp, #4]	@ 00009d64 019b
.org 0x9d66
	adds r0, r3, r4	@ 00009d66 1819
.org 0x9d68
	cmp r0, #38	@ 00009d68 2628
.org 0x9d6a
	ble.n 0x9d4c	@ 00009d6a efdd
.org 0x9d6c
	ldr r0, [sp, #0]	@ 00009d6c 0098
.org 0x9d6e
	asrs r2, r0, #16	@ 00009d6e 0214
.org 0x9d70
	cmp r4, r2	@ 00009d70 9442
.org 0x9d72
	bgt.n 0x9d96	@ 00009d72 10dc
.org 0x9d74
	asrs r1, r6, #16	@ 00009d74 3114
.org 0x9d76
	adds r0, r1, r4	@ 00009d76 0819
.org 0x9d78
	cmp r0, #52	@ 00009d78 3428
.org 0x9d7a
	bgt.n 0x9d96	@ 00009d7a 0cdc
.org 0x9d7c
	lsls r0, r4, #2	@ 00009d7c a000
.org 0x9d7e
	mov r3, sl	@ 00009d7e 5346
.org 0x9d80
	adds r6, r0, r3	@ 00009d80 c618
.org 0x9d82
	adds r3, r1, #0	@ 00009d82 0b1c
.org 0x9d84
	lsls r1, r3, #16	@ 00009d84 1904
.org 0x9d86
	orrs r1, r5	@ 00009d86 2943
.org 0x9d88
	stmia r6!, {r1}	@ 00009d88 02c6
.org 0x9d8a
	adds r4, #1	@ 00009d8a 0134
.org 0x9d8c
	cmp r4, r2	@ 00009d8c 9442
.org 0x9d8e
	bgt.n 0x9d96	@ 00009d8e 02dc
.org 0x9d90
	adds r0, r3, r4	@ 00009d90 1819
.org 0x9d92
	cmp r0, #52	@ 00009d92 3428
.org 0x9d94
	ble.n 0x9d88	@ 00009d94 f8dd
.org 0x9d96
	ldr r0, [r7, #104]	@ 00009d96 b86e
.org 0x9d98
	lsrs r0, r0, #3	@ 00009d98 c008
.org 0x9d9a
	ldr r1, [r7, #52]	@ 00009d9a 796b
.org 0x9d9c
	asrs r1, r1, #4	@ 00009d9c 0911
.org 0x9d9e
	adds r0, r0, r1	@ 00009d9e 4018
.org 0x9da0
	lsls r0, r0, #16	@ 00009da0 0004
.org 0x9da2
	lsrs r5, r0, #16	@ 00009da2 050c
.org 0x9da4
	ldr r0, [r7, #56]	@ 00009da4 b86b
.org 0x9da6
	ldr r1, [pc, #284]	@ 00009da6 4749
.org 0x9da8
	adds r0, r0, r1	@ 00009da8 4018
.org 0x9daa
	asrs r0, r0, #6	@ 00009daa 8011
.org 0x9dac
	adds r0, #24	@ 00009dac 1830
.org 0x9dae
	lsls r0, r0, #16	@ 00009dae 0004
.org 0x9db0
	lsrs r1, r0, #16	@ 00009db0 010c
.org 0x9db2
	ldr r3, [sp, #0]	@ 00009db2 009b
.org 0x9db4
	asrs r2, r3, #16	@ 00009db4 1a14
.org 0x9db6
	cmp r4, r2	@ 00009db6 9442
.org 0x9db8
	bgt.n 0x9e26	@ 00009db8 35dc
.org 0x9dba
	lsls r0, r1, #16	@ 00009dba 0804
.org 0x9dbc
	asrs r3, r0, #16	@ 00009dbc 0314
.org 0x9dbe
	adds r1, r3, r4	@ 00009dbe 1919
.org 0x9dc0
	adds r6, r0, #0	@ 00009dc0 061c
.org 0x9dc2
	cmp r1, #52	@ 00009dc2 3429
.org 0x9dc4
	bgt.n 0x9dfc	@ 00009dc4 1adc
.org 0x9dc6
	mov r8, r5	@ 00009dc6 a846
.org 0x9dc8
	lsls r0, r4, #16	@ 00009dc8 2004
.org 0x9dca
	movs r1, #212	@ 00009dca d421
.org 0x9dcc
	lsls r1, r1, #14	@ 00009dcc 8903
.org 0x9dce
	subs r1, r1, r0	@ 00009dce 091a
.org 0x9dd0
	lsls r0, r4, #2	@ 00009dd0 a000
.org 0x9dd2
	add r0, sl	@ 00009dd2 5044
.org 0x9dd4
	mov ip, r0	@ 00009dd4 8446
.org 0x9dd6
	ldr r0, [pc, #240]	@ 00009dd6 3c48
.org 0x9dd8
	mov r9, r0	@ 00009dd8 8146
.org 0x9dda
	str r3, [sp, #4]	@ 00009dda 0193
.org 0x9ddc
	adds r0, r1, #0	@ 00009ddc 081c
.org 0x9dde
	mov r3, r8	@ 00009dde 4346
.org 0x9de0
	orrs r0, r3	@ 00009de0 1843
.org 0x9de2
	mov r3, ip	@ 00009de2 6346
.org 0x9de4
	adds r3, #4	@ 00009de4 0433
.org 0x9de6
	mov ip, r3	@ 00009de6 9c46
.org 0x9de8
	subs r3, #4	@ 00009de8 043b
.org 0x9dea
	stmia r3!, {r0}	@ 00009dea 01c3
.org 0x9dec
	add r1, r9	@ 00009dec 4944
.org 0x9dee
	adds r4, #1	@ 00009dee 0134
.org 0x9df0
	cmp r4, r2	@ 00009df0 9442
.org 0x9df2
	bgt.n 0x9e26	@ 00009df2 18dc
.org 0x9df4
	ldr r3, [sp, #4]	@ 00009df4 019b
.org 0x9df6
	adds r0, r3, r4	@ 00009df6 1819
.org 0x9df8
	cmp r0, #52	@ 00009df8 3428
.org 0x9dfa
	ble.n 0x9ddc	@ 00009dfa efdd
.org 0x9dfc
	ldr r0, [sp, #0]	@ 00009dfc 0098
.org 0x9dfe
	asrs r2, r0, #16	@ 00009dfe 0214
.org 0x9e00
	cmp r4, r2	@ 00009e00 9442
.org 0x9e02
	bgt.n 0x9e26	@ 00009e02 10dc
.org 0x9e04
	asrs r1, r6, #16	@ 00009e04 3114
.org 0x9e06
	adds r0, r1, r4	@ 00009e06 0819
.org 0x9e08
	cmp r0, #63	@ 00009e08 3f28
.org 0x9e0a
	bgt.n 0x9e26	@ 00009e0a 0cdc
.org 0x9e0c
	lsls r0, r4, #2	@ 00009e0c a000
.org 0x9e0e
	mov r3, sl	@ 00009e0e 5346
.org 0x9e10
	adds r6, r0, r3	@ 00009e10 c618
.org 0x9e12
	adds r3, r1, #0	@ 00009e12 0b1c
.org 0x9e14
	lsls r1, r3, #16	@ 00009e14 1904
.org 0x9e16
	orrs r1, r5	@ 00009e16 2943
.org 0x9e18
	stmia r6!, {r1}	@ 00009e18 02c6
.org 0x9e1a
	adds r4, #1	@ 00009e1a 0134
.org 0x9e1c
	cmp r4, r2	@ 00009e1c 9442
.org 0x9e1e
	bgt.n 0x9e26	@ 00009e1e 02dc
.org 0x9e20
	adds r0, r3, r4	@ 00009e20 1819
.org 0x9e22
	cmp r0, #63	@ 00009e22 3f28
.org 0x9e24
	ble.n 0x9e18	@ 00009e24 f8dd
.org 0x9e26
	ldr r0, [r7, #104]	@ 00009e26 b86e
.org 0x9e28
	lsrs r0, r0, #4	@ 00009e28 0009
.org 0x9e2a
	ldr r1, [r7, #52]	@ 00009e2a 796b
.org 0x9e2c
	asrs r1, r1, #5	@ 00009e2c 4911
.org 0x9e2e
	adds r0, r0, r1	@ 00009e2e 4018
.org 0x9e30
	lsls r0, r0, #16	@ 00009e30 0004
.org 0x9e32
	lsrs r5, r0, #16	@ 00009e32 050c
.org 0x9e34
	ldr r0, [r7, #56]	@ 00009e34 b86b
.org 0x9e36
	ldr r1, [pc, #140]	@ 00009e36 2349
.org 0x9e38
	adds r0, r0, r1	@ 00009e38 4018
.org 0x9e3a
	asrs r0, r0, #7	@ 00009e3a c011
.org 0x9e3c
	adds r0, #24	@ 00009e3c 1830
.org 0x9e3e
	lsls r0, r0, #16	@ 00009e3e 0004
.org 0x9e40
	lsrs r1, r0, #16	@ 00009e40 010c
.org 0x9e42
	ldr r3, [sp, #0]	@ 00009e42 009b
.org 0x9e44
	asrs r2, r3, #16	@ 00009e44 1a14
.org 0x9e46
	cmp r4, r2	@ 00009e46 9442
.org 0x9e48
	bgt.n 0x9ed6	@ 00009e48 45dc
.org 0x9e4a
	lsls r0, r1, #16	@ 00009e4a 0804
.org 0x9e4c
	asrs r1, r0, #16	@ 00009e4c 0114
.org 0x9e4e
	mov r8, r1	@ 00009e4e 8846
.org 0x9e50
	adds r1, r1, r4	@ 00009e50 0919
.org 0x9e52
	adds r6, r0, #0	@ 00009e52 061c
.org 0x9e54
	cmp r1, #63	@ 00009e54 3f29
.org 0x9e56
	bgt.n 0x9e90	@ 00009e56 1bdc
.org 0x9e58
	mov r9, r5	@ 00009e58 a946
.org 0x9e5a
	lsls r0, r4, #16	@ 00009e5a 2004
.org 0x9e5c
	negs r0, r0	@ 00009e5c 4042
.org 0x9e5e
	movs r1, #128	@ 00009e5e 8021
.org 0x9e60
	lsls r1, r1, #15	@ 00009e60 c903
.org 0x9e62
	adds r3, r0, r1	@ 00009e62 4318
.org 0x9e64
	lsls r0, r4, #2	@ 00009e64 a000
.org 0x9e66
	add r0, sl	@ 00009e66 5044
.org 0x9e68
	mov ip, r0	@ 00009e68 8446
.org 0x9e6a
	str r2, [sp, #8]	@ 00009e6a 0292
.org 0x9e6c
	mov r1, r8	@ 00009e6c 4146
.org 0x9e6e
	adds r0, r3, #0	@ 00009e6e 181c
.org 0x9e70
	mov r2, r9	@ 00009e70 4a46
.org 0x9e72
	orrs r0, r2	@ 00009e72 1043
.org 0x9e74
	mov r2, ip	@ 00009e74 6246
.org 0x9e76
	adds r2, #4	@ 00009e76 0432
.org 0x9e78
	mov ip, r2	@ 00009e78 9446
.org 0x9e7a
	subs r2, #4	@ 00009e7a 043a
.org 0x9e7c
	stmia r2!, {r0}	@ 00009e7c 01c2
.org 0x9e7e
	ldr r0, [pc, #72]	@ 00009e7e 1248
.org 0x9e80
	adds r3, r3, r0	@ 00009e80 1b18
.org 0x9e82
	adds r4, #1	@ 00009e82 0134
.org 0x9e84
	ldr r2, [sp, #8]	@ 00009e84 029a
.org 0x9e86
	cmp r4, r2	@ 00009e86 9442
.org 0x9e88
	bgt.n 0x9ed6	@ 00009e88 25dc
.org 0x9e8a
	adds r0, r1, r4	@ 00009e8a 0819
.org 0x9e8c
	cmp r0, #63	@ 00009e8c 3f28
.org 0x9e8e
	ble.n 0x9e6e	@ 00009e8e eedd
.org 0x9e90
	ldr r3, [sp, #0]	@ 00009e90 009b
.org 0x9e92
	asrs r2, r3, #16	@ 00009e92 1a14
.org 0x9e94
	cmp r4, r2	@ 00009e94 9442
.org 0x9e96
	bgt.n 0x9ed6	@ 00009e96 1edc
.org 0x9e98
	asrs r1, r6, #16	@ 00009e98 3114
.org 0x9e9a
	adds r0, r1, r4	@ 00009e9a 0819
.org 0x9e9c
	cmp r0, #71	@ 00009e9c 4728
.org 0x9e9e
	bgt.n 0x9ed6	@ 00009e9e 1adc
.org 0x9ea0
	lsls r0, r4, #2	@ 00009ea0 a000
.org 0x9ea2
	mov r3, sl	@ 00009ea2 5346
.org 0x9ea4
	adds r6, r0, r3	@ 00009ea4 c618
.org 0x9ea6
	adds r3, r1, #0	@ 00009ea6 0b1c
.org 0x9ea8
	lsls r1, r3, #16	@ 00009ea8 1904
.org 0x9eaa
	orrs r1, r5	@ 00009eaa 2943
.org 0x9eac
	stmia r6!, {r1}	@ 00009eac 02c6
.org 0x9eae
	adds r4, #1	@ 00009eae 0134
.org 0x9eb0
	b.n 0x9ecc	@ 00009eb0 0ce0
.org 0x9eb2
	.byte 0x00	@ 00009eb2 data
.org 0x9eb3
	.byte 0x00	@ 00009eb3 data
.org 0x9eb4
	.byte 0x90,0x15,0x00,0x03	@ 00009eb4 data
.org 0x9eb8
	.byte 0x1c,0x00,0x00,0x04	@ 00009eb8 data
.org 0x9ebc
	.byte 0x01,0x00,0x60,0xa6	@ 00009ebc data
.org 0x9ec0
	.byte 0x60,0xfa,0xff,0xff	@ 00009ec0 data
.org 0x9ec4
	.byte 0x00,0xfb,0xff,0xff	@ 00009ec4 data
.org 0x9ec8
	.byte 0x00,0x00,0xff,0xff	@ 00009ec8 data
.org 0x9ecc
	cmp r4, r2	@ 00009ecc 9442
.org 0x9ece
	bgt.n 0x9ed6	@ 00009ece 02dc
.org 0x9ed0
	adds r0, r3, r4	@ 00009ed0 1819
.org 0x9ed2
	cmp r0, #71	@ 00009ed2 4728
.org 0x9ed4
	ble.n 0x9eac	@ 00009ed4 eadd
.org 0x9ed6
	ldr r0, [r7, #104]	@ 00009ed6 b86e
.org 0x9ed8
	lsrs r0, r0, #5	@ 00009ed8 4009
.org 0x9eda
	ldr r1, [r7, #52]	@ 00009eda 796b
.org 0x9edc
	asrs r1, r1, #6	@ 00009edc 8911
.org 0x9ede
	adds r0, r0, r1	@ 00009ede 4018
.org 0x9ee0
	lsls r0, r0, #16	@ 00009ee0 0004
.org 0x9ee2
	lsrs r5, r0, #16	@ 00009ee2 050c
.org 0x9ee4
	ldr r0, [r7, #56]	@ 00009ee4 b86b
.org 0x9ee6
	ldr r7, [pc, #176]	@ 00009ee6 2c4f
.org 0x9ee8
	adds r0, r0, r7	@ 00009ee8 c019
.org 0x9eea
	asrs r0, r0, #8	@ 00009eea 0012
.org 0x9eec
	adds r0, #24	@ 00009eec 1830
.org 0x9eee
	lsls r0, r0, #16	@ 00009eee 0004
.org 0x9ef0
	lsrs r1, r0, #16	@ 00009ef0 010c
.org 0x9ef2
	ldr r0, [sp, #0]	@ 00009ef2 0098
.org 0x9ef4
	asrs r2, r0, #16	@ 00009ef4 0214
.org 0x9ef6
	cmp r4, r2	@ 00009ef6 9442
.org 0x9ef8
	bgt.n 0x9f86	@ 00009ef8 45dc
.org 0x9efa
	lsls r0, r1, #16	@ 00009efa 0804
.org 0x9efc
	asrs r3, r0, #16	@ 00009efc 0314
.org 0x9efe
	adds r1, r3, r4	@ 00009efe 1919
.org 0x9f00
	adds r6, r0, #0	@ 00009f00 061c
.org 0x9f02
	cmp r1, #71	@ 00009f02 4729
.org 0x9f04
	bgt.n 0x9f38	@ 00009f04 18dc
.org 0x9f06
	mov r8, r5	@ 00009f06 a846
.org 0x9f08
	lsls r0, r4, #16	@ 00009f08 2004
.org 0x9f0a
	movs r1, #144	@ 00009f0a 9021
.org 0x9f0c
	lsls r1, r1, #15	@ 00009f0c c903
.org 0x9f0e
	subs r1, r1, r0	@ 00009f0e 091a
.org 0x9f10
	lsls r0, r4, #2	@ 00009f10 a000
.org 0x9f12
	add r0, sl	@ 00009f12 5044
.org 0x9f14
	mov ip, r0	@ 00009f14 8446
.org 0x9f16
	ldr r7, [pc, #132]	@ 00009f16 214f
.org 0x9f18
	mov r9, r7	@ 00009f18 b946
.org 0x9f1a
	adds r0, r1, #0	@ 00009f1a 081c
.org 0x9f1c
	mov r7, r8	@ 00009f1c 4746
.org 0x9f1e
	orrs r0, r7	@ 00009f1e 3843
.org 0x9f20
	mov r7, ip	@ 00009f20 6746
.org 0x9f22
	adds r7, #4	@ 00009f22 0437
.org 0x9f24
	mov ip, r7	@ 00009f24 bc46
.org 0x9f26
	subs r7, #4	@ 00009f26 043f
.org 0x9f28
	stmia r7!, {r0}	@ 00009f28 01c7
.org 0x9f2a
	add r1, r9	@ 00009f2a 4944
.org 0x9f2c
	adds r4, #1	@ 00009f2c 0134
.org 0x9f2e
	cmp r4, r2	@ 00009f2e 9442
.org 0x9f30
	bgt.n 0x9f86	@ 00009f30 29dc
.org 0x9f32
	adds r0, r3, r4	@ 00009f32 1819
.org 0x9f34
	cmp r0, #71	@ 00009f34 4728
.org 0x9f36
	ble.n 0x9f1a	@ 00009f36 f0dd
.org 0x9f38
	ldr r0, [sp, #0]	@ 00009f38 0098
.org 0x9f3a
	asrs r7, r0, #16	@ 00009f3a 0714
.org 0x9f3c
	cmp r4, r7	@ 00009f3c bc42
.org 0x9f3e
	bgt.n 0x9f86	@ 00009f3e 22dc
.org 0x9f40
	asrs r1, r6, #16	@ 00009f40 3114
.org 0x9f42
	adds r0, r1, r4	@ 00009f42 0819
.org 0x9f44
	cmp r0, #83	@ 00009f44 5328
.org 0x9f46
	bgt.n 0x9f64	@ 00009f46 0ddc
.org 0x9f48
	lsls r0, r4, #2	@ 00009f48 a000
.org 0x9f4a
	mov r2, sl	@ 00009f4a 5246
.org 0x9f4c
	adds r6, r0, r2	@ 00009f4c 8618
.org 0x9f4e
	adds r3, r1, #0	@ 00009f4e 0b1c
.org 0x9f50
	lsls r1, r3, #16	@ 00009f50 1904
.org 0x9f52
	orrs r1, r5	@ 00009f52 2943
.org 0x9f54
	adds r2, r7, #0	@ 00009f54 3a1c
.org 0x9f56
	stmia r6!, {r1}	@ 00009f56 02c6
.org 0x9f58
	adds r4, #1	@ 00009f58 0134
.org 0x9f5a
	cmp r4, r2	@ 00009f5a 9442
.org 0x9f5c
	bgt.n 0x9f86	@ 00009f5c 13dc
.org 0x9f5e
	adds r0, r3, r4	@ 00009f5e 1819
.org 0x9f60
	cmp r0, #83	@ 00009f60 5328
.org 0x9f62
	ble.n 0x9f56	@ 00009f62 f8dd
.org 0x9f64
	ldr r3, [sp, #0]	@ 00009f64 009b
.org 0x9f66
	asrs r0, r3, #16	@ 00009f66 1814
.org 0x9f68
	cmp r4, r0	@ 00009f68 8442
.org 0x9f6a
	bgt.n 0x9f86	@ 00009f6a 0cdc
.org 0x9f6c
	adds r2, r0, #0	@ 00009f6c 021c
.org 0x9f6e
	lsls r0, r4, #16	@ 00009f6e 2004
.org 0x9f70
	movs r1, #228	@ 00009f70 e421
.org 0x9f72
	lsls r1, r1, #15	@ 00009f72 c903
.org 0x9f74
	subs r1, r1, r0	@ 00009f74 091a
.org 0x9f76
	lsls r0, r4, #2	@ 00009f76 a000
.org 0x9f78
	add r0, sl	@ 00009f78 5044
.org 0x9f7a
	ldr r3, [pc, #32]	@ 00009f7a 084b
