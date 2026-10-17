@ FUN_08017b50  entry 0x08017b50  size 416
.thumb
.org 0x17b50
FUN_08017b50:
	push {r4, r5, r6, r7, lr}	@ 00017b50 f0b5
.org 0x17b52
	mov r7, r8	@ 00017b52 4746
.org 0x17b54
	push {r7}	@ 00017b54 80b4
.org 0x17b56
	sub sp, #8	@ 00017b56 82b0
.org 0x17b58
	mov r8, r0	@ 00017b58 8046
.org 0x17b5a
	movs r7, #159	@ 00017b5a 9f27
.org 0x17b5c
	ldr r0, [r0, #92]	@ 00017b5c c06d
.org 0x17b5e
	lsls r5, r0, #16	@ 00017b5e 0504
.org 0x17b60
	ldr r0, [pc, #396]	@ 00017b60 6348
.org 0x17b62
	ldr r1, [pc, #400]	@ 00017b62 6449
.org 0x17b64
	adds r0, r0, r1	@ 00017b64 4018
.org 0x17b66
	ldrh r0, [r0, #0]	@ 00017b66 0088
.org 0x17b68
	cmp r0, #0	@ 00017b68 0028
.org 0x17b6a
	beq.n 0x17bb4	@ 00017b6a 23d0
.org 0x17b6c
	ldr r0, [pc, #392]	@ 00017b6c 6248
.org 0x17b6e
	ldr r0, [r0, #0]	@ 00017b6e 0068
.org 0x17b70
	ldr r2, [pc, #392]	@ 00017b70 624a
.org 0x17b72
	adds r0, r0, r2	@ 00017b72 8018
.org 0x17b74
	lsrs r5, r5, #20	@ 00017b74 2d0d
.org 0x17b76
	lsls r5, r5, #1	@ 00017b76 6d00
.org 0x17b78
	ldr r1, [pc, #388]	@ 00017b78 6149
.org 0x17b7a
	adds r5, r5, r1	@ 00017b7a 6d18
.org 0x17b7c
	ldrh r2, [r5, #0]	@ 00017b7c 2a88
.org 0x17b7e
	movs r4, #248	@ 00017b7e f824
.org 0x17b80
	lsls r4, r4, #5	@ 00017b80 6401
.org 0x17b82
	adds r1, r4, #0	@ 00017b82 211c
.org 0x17b84
	ands r1, r2	@ 00017b84 1140
.org 0x17b86
	lsls r1, r1, #3	@ 00017b86 c900
.org 0x17b88
	movs r2, #192	@ 00017b88 c022
.org 0x17b8a
	lsls r2, r2, #19	@ 00017b8a d204
.org 0x17b8c
	adds r1, r1, r2	@ 00017b8c 8918
.org 0x17b8e
	movs r6, #128	@ 00017b8e 8026
.org 0x17b90
	lsls r6, r6, #2	@ 00017b90 b600
.org 0x17b92
	adds r2, r6, #0	@ 00017b92 321c
.org 0x17b94
	bl 0x128be0	@ 00017b94 11f124f8
.org 0x17b98
	movs r1, #0	@ 00017b98 0021
.org 0x17b9a
	ldrh r0, [r5, #0]	@ 00017b9a 2888
.org 0x17b9c
	ands r4, r0	@ 00017b9c 0440
.org 0x17b9e
	lsls r4, r4, #3	@ 00017b9e e400
.org 0x17ba0
	ldr r0, [pc, #352]	@ 00017ba0 5848
.org 0x17ba2
	adds r4, r4, r0	@ 00017ba2 2418
.org 0x17ba4
	str r1, [sp, #0]	@ 00017ba4 0091
.org 0x17ba6
	movs r2, #128	@ 00017ba6 8022
.org 0x17ba8
	lsls r2, r2, #17	@ 00017ba8 5204
.org 0x17baa
	orrs r2, r6	@ 00017baa 3243
.org 0x17bac
	mov r0, sp	@ 00017bac 6846
.org 0x17bae
	adds r1, r4, #0	@ 00017bae 211c
.org 0x17bb0
	bl 0x128be0	@ 00017bb0 11f116f8
.org 0x17bb4
	movs r0, #160	@ 00017bb4 a020
.org 0x17bb6
	lsls r0, r0, #2	@ 00017bb6 8000
.org 0x17bb8
	bl 0xa70	@ 00017bb8 e8f75aff
.org 0x17bbc
	adds r5, r0, #0	@ 00017bbc 051c
.org 0x17bbe
	cmp r5, #0	@ 00017bbe 002d
.org 0x17bc0
	bne.n 0x17bc4	@ 00017bc0 00d1
.org 0x17bc2
	b.n 0x17ce4	@ 00017bc2 8fe0
.org 0x17bc4
	ldr r2, [pc, #320]	@ 00017bc4 504a
.org 0x17bc6
	movs r1, #186	@ 00017bc6 ba21
.org 0x17bc8
	lsls r1, r1, #1	@ 00017bc8 4900
.org 0x17bca
	adds r0, r2, r1	@ 00017bca 5018
.org 0x17bcc
	str r5, [r0, #0]	@ 00017bcc 0560
.org 0x17bce
	movs r0, #188	@ 00017bce bc20
.org 0x17bd0
	lsls r0, r0, #1	@ 00017bd0 4000
.org 0x17bd2
	adds r1, r2, r0	@ 00017bd2 1118
.org 0x17bd4
	ldr r0, [pc, #308]	@ 00017bd4 4d48
.org 0x17bd6
	str r0, [r1, #0]	@ 00017bd6 0860
.org 0x17bd8
	movs r0, #190	@ 00017bd8 be20
.org 0x17bda
	lsls r0, r0, #1	@ 00017bda 4000
.org 0x17bdc
	adds r1, r2, r0	@ 00017bdc 1118
.org 0x17bde
	ldr r0, [pc, #304]	@ 00017bde 4c48
.org 0x17be0
	str r0, [r1, #0]	@ 00017be0 0860
.org 0x17be2
	mov r2, r8	@ 00017be2 4246
.org 0x17be4
	ldr r1, [r2, #52]	@ 00017be4 516b
.org 0x17be6
	ldr r0, [r2, #56]	@ 00017be6 906b
.org 0x17be8
	ldr r2, [pc, #296]	@ 00017be8 4a4a
.org 0x17bea
	adds r0, r0, r2	@ 00017bea 8018
.org 0x17bec
	lsls r0, r0, #16	@ 00017bec 0004
.org 0x17bee
	lsrs r6, r0, #16	@ 00017bee 060c
.org 0x17bf0
	lsls r0, r1, #3	@ 00017bf0 c800
.org 0x17bf2
	subs r0, r0, r1	@ 00017bf2 401a
.org 0x17bf4
	lsls r0, r0, #1	@ 00017bf4 4000
.org 0x17bf6
	asrs r1, r0, #4	@ 00017bf6 0111
.org 0x17bf8
	lsls r3, r6, #16	@ 00017bf8 3304
.org 0x17bfa
	asrs r0, r3, #16	@ 00017bfa 1814
.org 0x17bfc
	adds r0, #159	@ 00017bfc 9f30
.org 0x17bfe
	cmp r0, #167	@ 00017bfe a728
.org 0x17c00
	ble.n 0x17c20	@ 00017c00 0edd
.org 0x17c02
	ldr r4, [pc, #276]	@ 00017c02 454c
.org 0x17c04
	ands r4, r1	@ 00017c04 0c40
.org 0x17c06
	lsls r0, r7, #2	@ 00017c06 b800
.org 0x17c08
	adds r2, r5, r0	@ 00017c08 2a18
.org 0x17c0a
	asrs r1, r3, #16	@ 00017c0a 1914
.org 0x17c0c
	adds r0, r3, #0	@ 00017c0c 181c
.org 0x17c0e
	orrs r0, r4	@ 00017c0e 2043
.org 0x17c10
	str r0, [r2, #0]	@ 00017c10 1060
.org 0x17c12
	subs r2, #4	@ 00017c12 043a
.org 0x17c14
	subs r7, #1	@ 00017c14 013f
.org 0x17c16
	adds r1, r1, r7	@ 00017c16 c919
.org 0x17c18
	cmp r1, #167	@ 00017c18 a729
.org 0x17c1a
	ble.n 0x17c20	@ 00017c1a 01dd
.org 0x17c1c
	cmp r7, #0	@ 00017c1c 002f
.org 0x17c1e
	bge.n 0x17c0a	@ 00017c1e f4da
.org 0x17c20
	mov r1, r8	@ 00017c20 4146
.org 0x17c22
	ldr r0, [r1, #52]	@ 00017c22 486b
.org 0x17c24
	lsls r1, r0, #3	@ 00017c24 c100
.org 0x17c26
	subs r1, r1, r0	@ 00017c26 091a
.org 0x17c28
	lsls r1, r1, #1	@ 00017c28 4900
.org 0x17c2a
	asrs r1, r1, #4	@ 00017c2a 0911
.org 0x17c2c
	lsls r3, r6, #16	@ 00017c2c 3304
.org 0x17c2e
	asrs r0, r3, #16	@ 00017c2e 1814
.org 0x17c30
	adds r0, r0, r7	@ 00017c30 c019
.org 0x17c32
	adds r6, r3, #0	@ 00017c32 1e1c
.org 0x17c34
	cmp r0, #161	@ 00017c34 a128
.org 0x17c36
	ble.n 0x17c5a	@ 00017c36 10dd
.org 0x17c38
	cmp r7, #0	@ 00017c38 002f
.org 0x17c3a
	blt.n 0x17c5a	@ 00017c3a 0edb
.org 0x17c3c
	ldr r4, [pc, #216]	@ 00017c3c 364c
.org 0x17c3e
	ands r4, r1	@ 00017c3e 0c40
.org 0x17c40
	lsls r0, r7, #2	@ 00017c40 b800
.org 0x17c42
	adds r2, r0, r5	@ 00017c42 4219
.org 0x17c44
	asrs r1, r3, #16	@ 00017c44 1914
.org 0x17c46
	adds r0, r3, #0	@ 00017c46 181c
.org 0x17c48
	orrs r0, r4	@ 00017c48 2043
.org 0x17c4a
	str r0, [r2, #0]	@ 00017c4a 1060
.org 0x17c4c
	subs r2, #4	@ 00017c4c 043a
.org 0x17c4e
	subs r7, #1	@ 00017c4e 013f
.org 0x17c50
	adds r1, r1, r7	@ 00017c50 c919
.org 0x17c52
	cmp r1, #161	@ 00017c52 a129
.org 0x17c54
	ble.n 0x17c5a	@ 00017c54 01dd
.org 0x17c56
	cmp r7, #0	@ 00017c56 002f
.org 0x17c58
	bge.n 0x17c44	@ 00017c58 f4da
.org 0x17c5a
	mov r2, r8	@ 00017c5a 4246
.org 0x17c5c
	ldr r1, [r2, #52]	@ 00017c5c 516b
.org 0x17c5e
	movs r0, #13	@ 00017c5e 0d20
.org 0x17c60
	muls r0, r1	@ 00017c60 4843
.org 0x17c62
	asrs r1, r0, #4	@ 00017c62 0111
.org 0x17c64
	adds r3, r6, #0	@ 00017c64 331c
.org 0x17c66
	asrs r0, r6, #16	@ 00017c66 3014
.org 0x17c68
	adds r0, r0, r7	@ 00017c68 c019
.org 0x17c6a
	cmp r0, #151	@ 00017c6a 9728
.org 0x17c6c
	ble.n 0x17c90	@ 00017c6c 10dd
.org 0x17c6e
	cmp r7, #0	@ 00017c6e 002f
.org 0x17c70
	blt.n 0x17c90	@ 00017c70 0edb
.org 0x17c72
	ldr r4, [pc, #164]	@ 00017c72 294c
.org 0x17c74
	ands r4, r1	@ 00017c74 0c40
.org 0x17c76
	lsls r0, r7, #2	@ 00017c76 b800
.org 0x17c78
	adds r2, r0, r5	@ 00017c78 4219
.org 0x17c7a
	asrs r1, r3, #16	@ 00017c7a 1914
.org 0x17c7c
	adds r0, r3, #0	@ 00017c7c 181c
.org 0x17c7e
	orrs r0, r4	@ 00017c7e 2043
.org 0x17c80
	str r0, [r2, #0]	@ 00017c80 1060
.org 0x17c82
	subs r2, #4	@ 00017c82 043a
.org 0x17c84
	subs r7, #1	@ 00017c84 013f
.org 0x17c86
	adds r1, r1, r7	@ 00017c86 c919
.org 0x17c88
	cmp r1, #151	@ 00017c88 9729
.org 0x17c8a
	ble.n 0x17c90	@ 00017c8a 01dd
.org 0x17c8c
	cmp r7, #0	@ 00017c8c 002f
.org 0x17c8e
	bge.n 0x17c7a	@ 00017c8e f4da
.org 0x17c90
	mov r1, r8	@ 00017c90 4146
.org 0x17c92
	ldr r0, [r1, #52]	@ 00017c92 486b
.org 0x17c94
	lsls r1, r0, #1	@ 00017c94 4100
.org 0x17c96
	adds r1, r1, r0	@ 00017c96 0918
.org 0x17c98
	lsls r1, r1, #2	@ 00017c98 8900
.org 0x17c9a
	asrs r1, r1, #4	@ 00017c9a 0911
.org 0x17c9c
	adds r3, r6, #0	@ 00017c9c 331c
.org 0x17c9e
	asrs r0, r3, #16	@ 00017c9e 1814
.org 0x17ca0
	adds r0, r0, r7	@ 00017ca0 c019
.org 0x17ca2
	cmp r0, #143	@ 00017ca2 8f28
.org 0x17ca4
	ble.n 0x17cc8	@ 00017ca4 10dd
.org 0x17ca6
	cmp r7, #0	@ 00017ca6 002f
.org 0x17ca8
	blt.n 0x17ce4	@ 00017ca8 1cdb
.org 0x17caa
	ldr r4, [pc, #108]	@ 00017caa 1b4c
.org 0x17cac
	ands r4, r1	@ 00017cac 0c40
.org 0x17cae
	lsls r0, r7, #2	@ 00017cae b800
.org 0x17cb0
	adds r2, r0, r5	@ 00017cb0 4219
.org 0x17cb2
	asrs r1, r3, #16	@ 00017cb2 1914
.org 0x17cb4
	adds r0, r3, #0	@ 00017cb4 181c
.org 0x17cb6
	orrs r0, r4	@ 00017cb6 2043
.org 0x17cb8
	str r0, [r2, #0]	@ 00017cb8 1060
.org 0x17cba
	subs r2, #4	@ 00017cba 043a
.org 0x17cbc
	subs r7, #1	@ 00017cbc 013f
.org 0x17cbe
	adds r1, r1, r7	@ 00017cbe c919
.org 0x17cc0
	cmp r1, #143	@ 00017cc0 8f29
.org 0x17cc2
	ble.n 0x17cc8	@ 00017cc2 01dd
.org 0x17cc4
	cmp r7, #0	@ 00017cc4 002f
.org 0x17cc6
	bge.n 0x17cb2	@ 00017cc6 f4da
.org 0x17cc8
	cmp r7, #0	@ 00017cc8 002f
.org 0x17cca
	blt.n 0x17ce4	@ 00017cca 0bdb
.org 0x17ccc
	lsls r0, r7, #16	@ 00017ccc 3804
.org 0x17cce
	negs r1, r0	@ 00017cce 4142
.org 0x17cd0
	lsls r0, r7, #2	@ 00017cd0 b800
.org 0x17cd2
	adds r0, r0, r5	@ 00017cd2 4019
.org 0x17cd4
	movs r2, #128	@ 00017cd4 8022
.org 0x17cd6
	lsls r2, r2, #9	@ 00017cd6 5202
.org 0x17cd8
	str r1, [r0, #0]	@ 00017cd8 0160
.org 0x17cda
	adds r1, r1, r2	@ 00017cda 8918
.org 0x17cdc
	subs r0, #4	@ 00017cdc 0438
.org 0x17cde
	subs r7, #1	@ 00017cde 013f
.org 0x17ce0
	cmp r7, #0	@ 00017ce0 002f
.org 0x17ce2
	bge.n 0x17cd8	@ 00017ce2 f9da
.org 0x17ce4
	add sp, #8	@ 00017ce4 02b0
.org 0x17ce6
	pop {r3}	@ 00017ce6 08bc
.org 0x17ce8
	mov r8, r3	@ 00017ce8 9846
.org 0x17cea
	pop {r4, r5, r6, r7}	@ 00017cea f0bc
.org 0x17cec
	pop {r0}	@ 00017cec 01bc
.org 0x17cee
	bx r0	@ 00017cee 0047
