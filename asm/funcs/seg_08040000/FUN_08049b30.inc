@ FUN_08049b30  entry 0x08049b30  size 494
.thumb
.org 0x49b30
FUN_08049b30:
	push {r4, r5, r6, lr}	@ 00049b30 70b5
.org 0x49b32
	adds r4, r0, #0	@ 00049b32 041c
.org 0x49b34
	adds r6, r4, #0	@ 00049b34 261c
.org 0x49b36
	adds r6, #140	@ 00049b36 8c36
.org 0x49b38
	ldr r1, [r6, #0]	@ 00049b38 3168
.org 0x49b3a
	movs r5, #129	@ 00049b3a 8125
.org 0x49b3c
	lsls r5, r5, #2	@ 00049b3c ad00
.org 0x49b3e
	ands r5, r1	@ 00049b3e 0d40
.org 0x49b40
	cmp r5, #0	@ 00049b40 002d
.org 0x49b42
	beq.n 0x49b88	@ 00049b42 21d0
.org 0x49b44
	movs r0, #128	@ 00049b44 8020
.org 0x49b46
	lsls r0, r0, #2	@ 00049b46 8000
.org 0x49b48
	ands r1, r0	@ 00049b48 0140
.org 0x49b4a
	adds r5, r4, #0	@ 00049b4a 251c
.org 0x49b4c
	adds r5, #84	@ 00049b4c 5435
.org 0x49b4e
	cmp r1, #0	@ 00049b4e 0029
.org 0x49b50
	beq.n 0x49b5c	@ 00049b50 04d0
.org 0x49b52
	movs r0, #1	@ 00049b52 0120
.org 0x49b54
	movs r1, #255	@ 00049b54 ff21
.org 0x49b56
	adds r2, r5, #0	@ 00049b56 2a1c
.org 0x49b58
	bl 0x2ab88	@ 00049b58 e1f716f8
.org 0x49b5c
	movs r0, #2	@ 00049b5c 0220
.org 0x49b5e
	adds r1, r5, #0	@ 00049b5e 291c
.org 0x49b60
	bl 0xd0c88	@ 00049b60 87f092f8
.org 0x49b64
	movs r0, #42	@ 00049b64 2a20
.org 0x49b66
	bl 0x2b10	@ 00049b66 b8f7d3ff
.org 0x49b6a
	ldr r1, [pc, #24]	@ 00049b6a 0649
.org 0x49b6c
	ldrb r0, [r4, #9]	@ 00049b6c 607a
.org 0x49b6e
	lsls r0, r0, #2	@ 00049b6e 8000
.org 0x49b70
	adds r0, r0, r1	@ 00049b70 4018
.org 0x49b72
	movs r1, #2	@ 00049b72 0221
.org 0x49b74
	str r1, [r4, #12]	@ 00049b74 e160
.org 0x49b76
	ldr r0, [r0, #0]	@ 00049b76 0068
.org 0x49b78
	ldr r0, [r0, #8]	@ 00049b78 8068
.org 0x49b7a
	str r0, [r4, #20]	@ 00049b7a 6061
.org 0x49b7c
	adds r0, r4, #0	@ 00049b7c 201c
.org 0x49b7e
	bl 0x49814	@ 00049b7e fff749fe
.org 0x49b82
	b.n 0x49d2c	@ 00049b82 d3e0
.org 0x49b84
	.byte 0xf8,0x39,0x85,0x08	@ 00049b84 data
.org 0x49b88
	adds r0, r4, #0	@ 00049b88 201c
.org 0x49b8a
	bl 0x1cff0	@ 00049b8a d3f731fa
.org 0x49b8e
	ldrb r3, [r4, #13]	@ 00049b8e 637b
.org 0x49b90
	cmp r3, #0	@ 00049b90 002b
.org 0x49b92
	bne.n 0x49c0a	@ 00049b92 3ad1
.org 0x49b94
	ldr r0, [pc, #44]	@ 00049b94 0b48
.org 0x49b96
	ldr r0, [r0, #0]	@ 00049b96 0068
.org 0x49b98
	ldr r1, [r4, #84]	@ 00049b98 616d
.org 0x49b9a
	ldr r0, [r0, #84]	@ 00049b9a 406d
.org 0x49b9c
	cmp r1, r0	@ 00049b9c 8142
.org 0x49b9e
	bge.n 0x49bc8	@ 00049b9e 13da
.org 0x49ba0
	movs r2, #1	@ 00049ba0 0122
.org 0x49ba2
	ldrb r1, [r4, #10]	@ 00049ba2 a17a
.org 0x49ba4
	movs r0, #16	@ 00049ba4 1020
.org 0x49ba6
	orrs r0, r1	@ 00049ba6 0843
.org 0x49ba8
	strb r0, [r4, #10]	@ 00049ba8 a072
.org 0x49baa
	adds r0, r4, #0	@ 00049baa 201c
.org 0x49bac
	adds r0, #76	@ 00049bac 4c30
.org 0x49bae
	strb r2, [r0, #0]	@ 00049bae 0270
.org 0x49bb0
	adds r3, r4, #0	@ 00049bb0 231c
.org 0x49bb2
	adds r3, #74	@ 00049bb2 4a33
.org 0x49bb4
	movs r2, #16	@ 00049bb4 1022
.org 0x49bb6
	ldrb r1, [r3, #0]	@ 00049bb6 1978
.org 0x49bb8
	movs r0, #17	@ 00049bb8 1120
.org 0x49bba
	negs r0, r0	@ 00049bba 4042
.org 0x49bbc
	ands r0, r1	@ 00049bbc 0840
.org 0x49bbe
	orrs r0, r2	@ 00049bbe 1043
.org 0x49bc0
	strb r0, [r3, #0]	@ 00049bc0 1870
.org 0x49bc2
	b.n 0x49be4	@ 00049bc2 0fe0
.org 0x49bc4
	.byte 0xf0,0xdb,0x02,0x02	@ 00049bc4 data
.org 0x49bc8
	ldrb r1, [r4, #10]	@ 00049bc8 a17a
.org 0x49bca
	movs r0, #239	@ 00049bca ef20
.org 0x49bcc
	ands r0, r1	@ 00049bcc 0840
.org 0x49bce
	strb r0, [r4, #10]	@ 00049bce a072
.org 0x49bd0
	adds r0, r4, #0	@ 00049bd0 201c
.org 0x49bd2
	adds r0, #76	@ 00049bd2 4c30
.org 0x49bd4
	strb r5, [r0, #0]	@ 00049bd4 0570
.org 0x49bd6
	adds r2, r4, #0	@ 00049bd6 221c
.org 0x49bd8
	adds r2, #74	@ 00049bd8 4a32
.org 0x49bda
	ldrb r1, [r2, #0]	@ 00049bda 1178
.org 0x49bdc
	movs r0, #17	@ 00049bdc 1120
.org 0x49bde
	negs r0, r0	@ 00049bde 4042
.org 0x49be0
	ands r0, r1	@ 00049be0 0840
.org 0x49be2
	strb r0, [r2, #0]	@ 00049be2 1070
.org 0x49be4
	ldr r0, [r4, #84]	@ 00049be4 606d
.org 0x49be6
	ldr r1, [r4, #92]	@ 00049be6 e16d
.org 0x49be8
	adds r0, r0, r1	@ 00049be8 4018
.org 0x49bea
	str r0, [r4, #84]	@ 00049bea 6065
.org 0x49bec
	ldr r0, [r4, #88]	@ 00049bec a06d
.org 0x49bee
	ldr r1, [r4, #96]	@ 00049bee 216e
.org 0x49bf0
	adds r0, r0, r1	@ 00049bf0 4018
.org 0x49bf2
	str r0, [r4, #88]	@ 00049bf2 a065
.org 0x49bf4
	ldrb r0, [r4, #18]	@ 00049bf4 a07c
.org 0x49bf6
	subs r0, #1	@ 00049bf6 0138
.org 0x49bf8
	strb r0, [r4, #18]	@ 00049bf8 a074
.org 0x49bfa
	lsls r0, r0, #24	@ 00049bfa 0006
.org 0x49bfc
	lsrs r0, r0, #24	@ 00049bfc 000e
.org 0x49bfe
	cmp r0, #255	@ 00049bfe ff28
.org 0x49c00
	beq.n 0x49c04	@ 00049c00 00d0
.org 0x49c02
	b.n 0x49d2c	@ 00049c02 93e0
.org 0x49c04
	movs r0, #48	@ 00049c04 3020
.org 0x49c06
	strb r0, [r4, #18]	@ 00049c06 a074
.org 0x49c08
	b.n 0x49cca	@ 00049c08 5fe0
.org 0x49c0a
	cmp r3, #1	@ 00049c0a 012b
.org 0x49c0c
	bne.n 0x49cd8	@ 00049c0c 64d1
.org 0x49c0e
	ldr r1, [pc, #52]	@ 00049c0e 0d49
.org 0x49c10
	ldr r0, [r1, #0]	@ 00049c10 0868
.org 0x49c12
	ldr r2, [r4, #84]	@ 00049c12 626d
.org 0x49c14
	ldr r0, [r0, #84]	@ 00049c14 406d
.org 0x49c16
	adds r6, r1, #0	@ 00049c16 0e1c
.org 0x49c18
	cmp r2, r0	@ 00049c18 8242
.org 0x49c1a
	bge.n 0x49c48	@ 00049c1a 15da
.org 0x49c1c
	ldrb r1, [r4, #10]	@ 00049c1c a17a
.org 0x49c1e
	movs r0, #16	@ 00049c1e 1020
.org 0x49c20
	orrs r0, r1	@ 00049c20 0843
.org 0x49c22
	strb r0, [r4, #10]	@ 00049c22 a072
.org 0x49c24
	adds r0, r4, #0	@ 00049c24 201c
.org 0x49c26
	adds r0, #76	@ 00049c26 4c30
.org 0x49c28
	strb r3, [r0, #0]	@ 00049c28 0370
.org 0x49c2a
	movs r0, #74	@ 00049c2a 4a20
.org 0x49c2c
	adds r0, r0, r4	@ 00049c2c 0019
.org 0x49c2e
	mov ip, r0	@ 00049c2e 8446
.org 0x49c30
	movs r2, #16	@ 00049c30 1022
.org 0x49c32
	ldrb r1, [r0, #0]	@ 00049c32 0178
.org 0x49c34
	movs r0, #17	@ 00049c34 1120
.org 0x49c36
	negs r0, r0	@ 00049c36 4042
.org 0x49c38
	ands r0, r1	@ 00049c38 0840
.org 0x49c3a
	orrs r0, r2	@ 00049c3a 1043
.org 0x49c3c
	mov r1, ip	@ 00049c3c 6146
.org 0x49c3e
	strb r0, [r1, #0]	@ 00049c3e 0870
.org 0x49c40
	b.n 0x49c64	@ 00049c40 10e0
.org 0x49c42
	.byte 0x00	@ 00049c42 data
.org 0x49c43
	.byte 0x00	@ 00049c43 data
.org 0x49c44
	.byte 0xf0,0xdb,0x02,0x02	@ 00049c44 data
.org 0x49c48
	ldrb r1, [r4, #10]	@ 00049c48 a17a
.org 0x49c4a
	movs r0, #239	@ 00049c4a ef20
.org 0x49c4c
	ands r0, r1	@ 00049c4c 0840
.org 0x49c4e
	strb r0, [r4, #10]	@ 00049c4e a072
.org 0x49c50
	adds r0, r4, #0	@ 00049c50 201c
.org 0x49c52
	adds r0, #76	@ 00049c52 4c30
.org 0x49c54
	strb r5, [r0, #0]	@ 00049c54 0570
.org 0x49c56
	adds r2, r4, #0	@ 00049c56 221c
.org 0x49c58
	adds r2, #74	@ 00049c58 4a32
.org 0x49c5a
	ldrb r1, [r2, #0]	@ 00049c5a 1178
.org 0x49c5c
	movs r0, #17	@ 00049c5c 1120
.org 0x49c5e
	negs r0, r0	@ 00049c5e 4042
.org 0x49c60
	ands r0, r1	@ 00049c60 0840
.org 0x49c62
	strb r0, [r2, #0]	@ 00049c62 1070
.org 0x49c64
	ldrb r0, [r4, #18]	@ 00049c64 a07c
.org 0x49c66
	subs r0, #1	@ 00049c66 0138
.org 0x49c68
	strb r0, [r4, #18]	@ 00049c68 a074
.org 0x49c6a
	lsls r0, r0, #24	@ 00049c6a 0006
.org 0x49c6c
	lsrs r0, r0, #24	@ 00049c6c 000e
.org 0x49c6e
	cmp r0, #255	@ 00049c6e ff28
.org 0x49c70
	bne.n 0x49d2c	@ 00049c70 5cd1
.org 0x49c72
	ldr r3, [r6, #0]	@ 00049c72 3368
.org 0x49c74
	ldr r0, [r3, #84]	@ 00049c74 586d
.org 0x49c76
	ldr r1, [r4, #84]	@ 00049c76 616d
.org 0x49c78
	subs r0, r0, r1	@ 00049c78 401a
.org 0x49c7a
	lsls r0, r0, #4	@ 00049c7a 0001
.org 0x49c7c
	asrs r0, r0, #16	@ 00049c7c 0014
.org 0x49c7e
	ldr r2, [r4, #88]	@ 00049c7e a26d
.org 0x49c80
	movs r1, #240	@ 00049c80 f021
.org 0x49c82
	lsls r1, r1, #4	@ 00049c82 0901
.org 0x49c84
	adds r2, r2, r1	@ 00049c84 5218
.org 0x49c86
	ldr r1, [r3, #88]	@ 00049c86 996d
.org 0x49c88
	subs r1, r1, r2	@ 00049c88 891a
.org 0x49c8a
	lsls r1, r1, #4	@ 00049c8a 0901
.org 0x49c8c
	asrs r1, r1, #16	@ 00049c8c 0914
.org 0x49c8e
	bl 0x128bdc	@ 00049c8e def0a5ff
.org 0x49c92
	lsls r0, r0, #16	@ 00049c92 0004
.org 0x49c94
	lsrs r0, r0, #16	@ 00049c94 000c
.org 0x49c96
	movs r2, #128	@ 00049c96 8022
.org 0x49c98
	lsls r2, r2, #7	@ 00049c98 d201
.org 0x49c9a
	adds r0, r0, r2	@ 00049c9a 8018
.org 0x49c9c
	asrs r0, r0, #8	@ 00049c9c 0012
.org 0x49c9e
	lsls r0, r0, #24	@ 00049c9e 0006
.org 0x49ca0
	ldr r2, [pc, #48]	@ 00049ca0 0c4a
.org 0x49ca2
	movs r3, #192	@ 00049ca2 c023
.org 0x49ca4
	lsls r3, r3, #24	@ 00049ca4 1b06
.org 0x49ca6
	adds r1, r0, r3	@ 00049ca6 c118
.org 0x49ca8
	lsrs r0, r0, #23	@ 00049ca8 c00d
.org 0x49caa
	adds r0, r0, r2	@ 00049caa 8018
.org 0x49cac
	movs r3, #0	@ 00049cac 0023
.org 0x49cae
	ldrsh r0, [r0, r3]	@ 00049cae c05e
.org 0x49cb0
	lsls r0, r0, #2	@ 00049cb0 8000
.org 0x49cb2
	str r0, [r4, #92]	@ 00049cb2 e065
.org 0x49cb4
	lsrs r1, r1, #23	@ 00049cb4 c90d
.org 0x49cb6
	adds r1, r1, r2	@ 00049cb6 8918
.org 0x49cb8
	movs r2, #0	@ 00049cb8 0022
.org 0x49cba
	ldrsh r0, [r1, r2]	@ 00049cba 885e
.org 0x49cbc
	lsls r0, r0, #2	@ 00049cbc 8000
.org 0x49cbe
	str r0, [r4, #96]	@ 00049cbe 2066
.org 0x49cc0
	movs r0, #64	@ 00049cc0 4020
.org 0x49cc2
	strb r0, [r4, #18]	@ 00049cc2 a074
.org 0x49cc4
	movs r0, #107	@ 00049cc4 6b20
.org 0x49cc6
	bl 0x2b10	@ 00049cc6 b8f723ff
.org 0x49cca
	ldrb r0, [r4, #13]	@ 00049cca 607b
.org 0x49ccc
	adds r0, #1	@ 00049ccc 0130
.org 0x49cce
	strb r0, [r4, #13]	@ 00049cce 6073
.org 0x49cd0
	b.n 0x49d2c	@ 00049cd0 2ce0
.org 0x49cd2
	.byte 0x00	@ 00049cd2 data
.org 0x49cd3
	.byte 0x00	@ 00049cd3 data
.org 0x49cd4
	.byte 0x0c,0x93,0x12,0x08	@ 00049cd4 data
.org 0x49cd8
	ldr r0, [r4, #84]	@ 00049cd8 606d
.org 0x49cda
	ldr r1, [r4, #92]	@ 00049cda e16d
.org 0x49cdc
	adds r0, r0, r1	@ 00049cdc 4018
.org 0x49cde
	str r0, [r4, #84]	@ 00049cde 6065
.org 0x49ce0
	ldr r0, [r4, #88]	@ 00049ce0 a06d
.org 0x49ce2
	ldr r1, [r4, #96]	@ 00049ce2 216e
.org 0x49ce4
	adds r0, r0, r1	@ 00049ce4 4018
.org 0x49ce6
	str r0, [r4, #88]	@ 00049ce6 a065
.org 0x49ce8
	ldr r0, [pc, #72]	@ 00049ce8 1248
.org 0x49cea
	adds r1, r4, #0	@ 00049cea 211c
.org 0x49cec
	adds r1, #84	@ 00049cec 5431
.org 0x49cee
	bl 0x1fb14	@ 00049cee d5f711ff
.org 0x49cf2
	movs r1, #128	@ 00049cf2 8021
.org 0x49cf4
	lsls r1, r1, #5	@ 00049cf4 4901
.org 0x49cf6
	cmp r0, r1	@ 00049cf6 8842
.org 0x49cf8
	bls.n 0x49d2c	@ 00049cf8 18d9
.org 0x49cfa
	ldrb r1, [r4, #10]	@ 00049cfa a17a
.org 0x49cfc
	movs r0, #254	@ 00049cfc fe20
.org 0x49cfe
	ands r0, r1	@ 00049cfe 0840
.org 0x49d00
	movs r1, #253	@ 00049d00 fd21
.org 0x49d02
	ands r0, r1	@ 00049d02 0840
.org 0x49d04
	strb r0, [r4, #10]	@ 00049d04 a072
.org 0x49d06
	str r5, [r6, #0]	@ 00049d06 3560
.org 0x49d08
	adds r0, r4, #0	@ 00049d08 201c
.org 0x49d0a
	adds r0, #144	@ 00049d0a 9030
.org 0x49d0c
	str r5, [r0, #0]	@ 00049d0c 0560
.org 0x49d0e
	adds r0, #4	@ 00049d0e 0430
.org 0x49d10
	strb r5, [r0, #0]	@ 00049d10 0570
.org 0x49d12
	ldrb r1, [r4, #10]	@ 00049d12 a17a
.org 0x49d14
	movs r0, #251	@ 00049d14 fb20
.org 0x49d16
	ands r0, r1	@ 00049d16 0840
.org 0x49d18
	strb r0, [r4, #10]	@ 00049d18 a072
.org 0x49d1a
	ldr r1, [pc, #28]	@ 00049d1a 0749
.org 0x49d1c
	ldrb r0, [r4, #9]	@ 00049d1c 607a
