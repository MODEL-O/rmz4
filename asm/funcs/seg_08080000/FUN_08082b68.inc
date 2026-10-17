@ FUN_08082b68  entry 0x08082b68  size 432
.thumb
.org 0x82b68
FUN_08082b68:
	push {r4, r5, lr}	@ 00082b68 30b5
.org 0x82b6a
	sub sp, #8	@ 00082b6a 82b0
.org 0x82b6c
	adds r4, r0, #0	@ 00082b6c 041c
.org 0x82b6e
	ldrb r0, [r4, #14]	@ 00082b6e a07b
.org 0x82b70
	cmp r0, #0	@ 00082b70 0028
.org 0x82b72
	beq.n 0x82b7c	@ 00082b72 03d0
.org 0x82b74
	cmp r0, #1	@ 00082b74 0128
.org 0x82b76
	bne.n 0x82b7a	@ 00082b76 00d1
.org 0x82b78
	b.n 0x82c8a	@ 00082b78 87e0
.org 0x82b7a
	b.n 0x82d2c	@ 00082b7a d7e0
.org 0x82b7c
	adds r0, r4, #0	@ 00082b7c 201c
.org 0x82b7e
	adds r0, #190	@ 00082b7e be30
.org 0x82b80
	ldrb r0, [r0, #0]	@ 00082b80 0078
.org 0x82b82
	cmp r0, #2	@ 00082b82 0228
.org 0x82b84
	beq.n 0x82bb8	@ 00082b84 18d0
.org 0x82b86
	cmp r0, #2	@ 00082b86 0228
.org 0x82b88
	bgt.n 0x82b90	@ 00082b88 02dc
.org 0x82b8a
	cmp r0, #1	@ 00082b8a 0128
.org 0x82b8c
	beq.n 0x82b9a	@ 00082b8c 05d0
.org 0x82b8e
	b.n 0x82c64	@ 00082b8e 69e0
.org 0x82b90
	cmp r0, #3	@ 00082b90 0328
.org 0x82b92
	beq.n 0x82bdc	@ 00082b92 23d0
.org 0x82b94
	cmp r0, #4	@ 00082b94 0428
.org 0x82b96
	beq.n 0x82c10	@ 00082b96 3bd0
.org 0x82b98
	b.n 0x82c64	@ 00082b98 64e0
.org 0x82b9a
	ldr r3, [r4, #88]	@ 00082b9a a36d
.org 0x82b9c
	ldr r1, [pc, #20]	@ 00082b9c 0549
.org 0x82b9e
	adds r0, r3, r1	@ 00082b9e 5818
.org 0x82ba0
	str r0, [r4, #88]	@ 00082ba0 a065
.org 0x82ba2
	adds r2, r0, #0	@ 00082ba2 021c
.org 0x82ba4
	ldrb r1, [r4, #10]	@ 00082ba4 a17a
.org 0x82ba6
	movs r0, #32	@ 00082ba6 2020
.org 0x82ba8
	ands r0, r1	@ 00082ba8 0840
.org 0x82baa
	cmp r0, #0	@ 00082baa 0028
.org 0x82bac
	beq.n 0x82bd2	@ 00082bac 11d0
.org 0x82bae
	movs r0, #144	@ 00082bae 9020
.org 0x82bb0
	lsls r0, r0, #5	@ 00082bb0 4001
.org 0x82bb2
	b.n 0x82bd0	@ 00082bb2 0de0
.org 0x82bb4
	.byte 0x00,0xee,0xff,0xff	@ 00082bb4 data
.org 0x82bb8
	ldr r3, [r4, #88]	@ 00082bb8 a36d
.org 0x82bba
	ldr r1, [pc, #28]	@ 00082bba 0749
.org 0x82bbc
	adds r0, r3, r1	@ 00082bbc 5818
.org 0x82bbe
	str r0, [r4, #88]	@ 00082bbe a065
.org 0x82bc0
	adds r2, r0, #0	@ 00082bc0 021c
.org 0x82bc2
	ldrb r1, [r4, #10]	@ 00082bc2 a17a
.org 0x82bc4
	movs r0, #32	@ 00082bc4 2020
.org 0x82bc6
	ands r0, r1	@ 00082bc6 0840
.org 0x82bc8
	cmp r0, #0	@ 00082bc8 0028
.org 0x82bca
	beq.n 0x82bd2	@ 00082bca 02d0
.org 0x82bcc
	movs r0, #192	@ 00082bcc c020
.org 0x82bce
	lsls r0, r0, #5	@ 00082bce 4001
.org 0x82bd0
	adds r2, r3, r0	@ 00082bd0 1a18
.org 0x82bd2
	str r2, [r4, #88]	@ 00082bd2 a265
.org 0x82bd4
	b.n 0x82c64	@ 00082bd4 46e0
.org 0x82bd6
	.byte 0x00	@ 00082bd6 data
.org 0x82bd7
	.byte 0x00	@ 00082bd7 data
.org 0x82bd8
	.byte 0x00,0xe8,0xff,0xff	@ 00082bd8 data
.org 0x82bdc
	ldr r3, [r4, #88]	@ 00082bdc a36d
.org 0x82bde
	ldr r1, [pc, #44]	@ 00082bde 0b49
.org 0x82be0
	adds r0, r3, r1	@ 00082be0 5818
.org 0x82be2
	str r0, [r4, #88]	@ 00082be2 a065
.org 0x82be4
	adds r2, r0, #0	@ 00082be4 021c
.org 0x82be6
	ldrb r1, [r4, #10]	@ 00082be6 a17a
.org 0x82be8
	movs r0, #32	@ 00082be8 2020
.org 0x82bea
	ands r0, r1	@ 00082bea 0840
.org 0x82bec
	cmp r0, #0	@ 00082bec 0028
.org 0x82bee
	beq.n 0x82bf6	@ 00082bee 02d0
.org 0x82bf0
	movs r0, #140	@ 00082bf0 8c20
.org 0x82bf2
	lsls r0, r0, #6	@ 00082bf2 8001
.org 0x82bf4
	adds r2, r3, r0	@ 00082bf4 1a18
.org 0x82bf6
	str r2, [r4, #88]	@ 00082bf6 a265
.org 0x82bf8
	lsls r0, r1, #24	@ 00082bf8 0806
.org 0x82bfa
	lsrs r0, r0, #29	@ 00082bfa 400f
.org 0x82bfc
	movs r2, #1	@ 00082bfc 0122
.org 0x82bfe
	bics r2, r0	@ 00082bfe 8243
.org 0x82c00
	cmp r2, #0	@ 00082c00 002a
.org 0x82c02
	beq.n 0x82c44	@ 00082c02 1fd0
.org 0x82c04
	movs r0, #32	@ 00082c04 2020
.org 0x82c06
	orrs r0, r1	@ 00082c06 0843
.org 0x82c08
	b.n 0x82c48	@ 00082c08 1ee0
.org 0x82c0a
	.byte 0x00	@ 00082c0a data
.org 0x82c0b
	.byte 0x00	@ 00082c0b data
.org 0x82c0c
	.byte 0x00,0xdd,0xff,0xff	@ 00082c0c data
.org 0x82c10
	ldr r3, [r4, #88]	@ 00082c10 a36d
.org 0x82c12
	ldr r1, [pc, #44]	@ 00082c12 0b49
.org 0x82c14
	adds r0, r3, r1	@ 00082c14 5818
.org 0x82c16
	str r0, [r4, #88]	@ 00082c16 a065
.org 0x82c18
	adds r2, r0, #0	@ 00082c18 021c
.org 0x82c1a
	ldrb r1, [r4, #10]	@ 00082c1a a17a
.org 0x82c1c
	movs r0, #32	@ 00082c1c 2020
.org 0x82c1e
	ands r0, r1	@ 00082c1e 0840
.org 0x82c20
	cmp r0, #0	@ 00082c20 0028
.org 0x82c22
	beq.n 0x82c2a	@ 00082c22 02d0
.org 0x82c24
	movs r0, #172	@ 00082c24 ac20
.org 0x82c26
	lsls r0, r0, #6	@ 00082c26 8001
.org 0x82c28
	adds r2, r3, r0	@ 00082c28 1a18
.org 0x82c2a
	str r2, [r4, #88]	@ 00082c2a a265
.org 0x82c2c
	lsls r0, r1, #24	@ 00082c2c 0806
.org 0x82c2e
	lsrs r0, r0, #29	@ 00082c2e 400f
.org 0x82c30
	movs r2, #1	@ 00082c30 0122
.org 0x82c32
	bics r2, r0	@ 00082c32 8243
.org 0x82c34
	cmp r2, #0	@ 00082c34 002a
.org 0x82c36
	beq.n 0x82c44	@ 00082c36 05d0
.org 0x82c38
	movs r0, #32	@ 00082c38 2020
.org 0x82c3a
	orrs r0, r1	@ 00082c3a 0843
.org 0x82c3c
	b.n 0x82c48	@ 00082c3c 04e0
.org 0x82c3e
	.byte 0x00	@ 00082c3e data
.org 0x82c3f
	.byte 0x00	@ 00082c3f data
.org 0x82c40
	.byte 0x00,0xd5,0xff,0xff	@ 00082c40 data
.org 0x82c44
	movs r0, #223	@ 00082c44 df20
.org 0x82c46
	ands r0, r1	@ 00082c46 0840
.org 0x82c48
	strb r0, [r4, #10]	@ 00082c48 a072
.org 0x82c4a
	adds r0, r2, #0	@ 00082c4a 101c
.org 0x82c4c
	adds r1, r4, #0	@ 00082c4c 211c
.org 0x82c4e
	adds r1, #77	@ 00082c4e 4d31
.org 0x82c50
	strb r0, [r1, #0]	@ 00082c50 0870
.org 0x82c52
	adds r3, r4, #0	@ 00082c52 231c
.org 0x82c54
	adds r3, #74	@ 00082c54 4a33
.org 0x82c56
	lsls r0, r0, #5	@ 00082c56 4001
.org 0x82c58
	ldrb r2, [r3, #0]	@ 00082c58 1a78
.org 0x82c5a
	movs r1, #33	@ 00082c5a 2121
.org 0x82c5c
	negs r1, r1	@ 00082c5c 4942
.org 0x82c5e
	ands r1, r2	@ 00082c5e 1140
.org 0x82c60
	orrs r1, r0	@ 00082c60 0143
.org 0x82c62
	strb r1, [r3, #0]	@ 00082c62 1970
.org 0x82c64
	ldrb r1, [r4, #10]	@ 00082c64 a17a
.org 0x82c66
	movs r0, #254	@ 00082c66 fe20
.org 0x82c68
	ands r0, r1	@ 00082c68 0840
.org 0x82c6a
	movs r1, #0	@ 00082c6a 0021
.org 0x82c6c
	strb r0, [r4, #10]	@ 00082c6c a072
.org 0x82c6e
	adds r0, r4, #0	@ 00082c6e 201c
.org 0x82c70
	adds r0, #140	@ 00082c70 8c30
.org 0x82c72
	str r1, [r0, #0]	@ 00082c72 0160
.org 0x82c74
	adds r0, #4	@ 00082c74 0430
.org 0x82c76
	str r1, [r0, #0]	@ 00082c76 0160
.org 0x82c78
	adds r0, #4	@ 00082c78 0430
.org 0x82c7a
	strb r1, [r0, #0]	@ 00082c7a 0170
.org 0x82c7c
	ldrb r1, [r4, #10]	@ 00082c7c a17a
.org 0x82c7e
	movs r0, #251	@ 00082c7e fb20
.org 0x82c80
	ands r0, r1	@ 00082c80 0840
.org 0x82c82
	strb r0, [r4, #10]	@ 00082c82 a072
.org 0x82c84
	ldrb r0, [r4, #14]	@ 00082c84 a07b
.org 0x82c86
	adds r0, #1	@ 00082c86 0130
.org 0x82c88
	strb r0, [r4, #14]	@ 00082c88 a073
.org 0x82c8a
	ldr r0, [r4, #84]	@ 00082c8a 606d
.org 0x82c8c
	str r0, [sp, #0]	@ 00082c8c 0090
.org 0x82c8e
	ldr r0, [r4, #88]	@ 00082c8e a06d
.org 0x82c90
	ldr r1, [pc, #76]	@ 00082c90 1349
.org 0x82c92
	adds r0, r0, r1	@ 00082c92 4018
.org 0x82c94
	str r0, [sp, #4]	@ 00082c94 0190
.org 0x82c96
	movs r0, #1	@ 00082c96 0120
.org 0x82c98
	mov r1, sp	@ 00082c98 6946
.org 0x82c9a
	bl 0xd0c88	@ 00082c9a 4df0f5ff
.org 0x82c9e
	adds r0, r4, #0	@ 00082c9e 201c
.org 0x82ca0
	mov r1, sp	@ 00082ca0 6946
.org 0x82ca2
	movs r2, #0	@ 00082ca2 0022
.org 0x82ca4
	bl 0xd621c	@ 00082ca4 53f0bafa
.org 0x82ca8
	movs r0, #42	@ 00082ca8 2a20
.org 0x82caa
	bl 0x2b10	@ 00082caa 7ff731ff
.org 0x82cae
	ldr r0, [r4, #84]	@ 00082cae 606d
.org 0x82cb0
	ldr r1, [r4, #88]	@ 00082cb0 a16d
.org 0x82cb2
	bl 0x7c7c	@ 00082cb2 84f7e3ff
.org 0x82cb6
	lsls r0, r0, #16	@ 00082cb6 0004
.org 0x82cb8
	cmp r0, #0	@ 00082cb8 0028
.org 0x82cba
	beq.n 0x82cf6	@ 00082cba 1cd0
.org 0x82cbc
	ldr r0, [r4, #84]	@ 00082cbc 606d
.org 0x82cbe
	ldr r1, [r4, #88]	@ 00082cbe a16d
.org 0x82cc0
	bl 0x7db4	@ 00082cc0 85f778f8
.org 0x82cc4
	adds r5, r0, #0	@ 00082cc4 051c
.org 0x82cc6
	ldr r0, [r4, #84]	@ 00082cc6 606d
.org 0x82cc8
	ldr r1, [r4, #88]	@ 00082cc8 a16d
.org 0x82cca
	bl 0x7f8c	@ 00082cca 85f75ff9
.org 0x82cce
	adds r1, r0, #0	@ 00082cce 011c
.org 0x82cd0
	cmp r5, #0	@ 00082cd0 002d
.org 0x82cd2
	bgt.n 0x82cf0	@ 00082cd2 0ddc
.org 0x82cd4
	cmp r1, #0	@ 00082cd4 0029
.org 0x82cd6
	bge.n 0x82ce4	@ 00082cd6 05da
.org 0x82cd8
	ldr r0, [r4, #88]	@ 00082cd8 a06d
.org 0x82cda
	adds r0, r0, r5	@ 00082cda 4019
.org 0x82cdc
	b.n 0x82cf4	@ 00082cdc 0ae0
.org 0x82cde
	.byte 0x00	@ 00082cde data
.org 0x82cdf
	.byte 0x00	@ 00082cdf data
.org 0x82ce0
	.byte 0x00,0xf8,0xff,0xff	@ 00082ce0 data
.org 0x82ce4
	negs r0, r5	@ 00082ce4 6842
.org 0x82ce6
	cmp r0, r1	@ 00082ce6 8842
.org 0x82ce8
	bge.n 0x82cf0	@ 00082ce8 02da
.org 0x82cea
	ldr r0, [r4, #88]	@ 00082cea a06d
.org 0x82cec
	adds r0, r0, r5	@ 00082cec 4019
.org 0x82cee
	b.n 0x82cf4	@ 00082cee 01e0
.org 0x82cf0
	ldr r0, [r4, #88]	@ 00082cf0 a06d
.org 0x82cf2
	adds r0, r0, r1	@ 00082cf2 4018
.org 0x82cf4
	str r0, [r4, #88]	@ 00082cf4 a065
.org 0x82cf6
	adds r5, r4, #0	@ 00082cf6 251c
.org 0x82cf8
	adds r5, #84	@ 00082cf8 5435
.org 0x82cfa
	movs r0, #4	@ 00082cfa 0420
.org 0x82cfc
	movs r1, #8	@ 00082cfc 0821
.org 0x82cfe
	adds r2, r5, #0	@ 00082cfe 2a1c
.org 0x82d00
	bl 0x2ab88	@ 00082d00 a7f742ff
.org 0x82d04
	ldr r2, [pc, #44]	@ 00082d04 0b4a
.org 0x82d06
	ldrh r1, [r2, #12]	@ 00082d06 9189
.org 0x82d08
	ldr r0, [pc, #44]	@ 00082d08 0b48
.org 0x82d0a
	cmp r1, r0	@ 00082d0a 8142
.org 0x82d0c
	bhi.n 0x82d12	@ 00082d0c 01d8
.org 0x82d0e
	adds r0, r1, #1	@ 00082d0e 481c
.org 0x82d10
	strh r0, [r2, #12]	@ 00082d10 9081
.org 0x82d12
	adds r0, r4, #0	@ 00082d12 201c
.org 0x82d14
	adds r1, r5, #0	@ 00082d14 291c
.org 0x82d16
	bl 0x2abe0	@ 00082d16 a7f763ff
