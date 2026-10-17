@ FUN_080c6ce8  entry 0x080c6ce8  size 294
.thumb
.org 0xc6ce8
FUN_080c6ce8:
	push {r4, r5, lr}	@ 000c6ce8 30b5
.org 0xc6cea
	adds r4, r0, #0	@ 000c6cea 041c
.org 0xc6cec
	ldr r5, [r4, #40]	@ 000c6cec a56a
.org 0xc6cee
	bl 0x1cff0	@ 000c6cee 56f77ff9
.org 0xc6cf2
	ldrb r0, [r5, #30]	@ 000c6cf2 a87f
.org 0xc6cf4
	lsls r0, r0, #8	@ 000c6cf4 0002
.org 0xc6cf6
	adds r1, r5, #0	@ 000c6cf6 291c
.org 0xc6cf8
	adds r1, #112	@ 000c6cf8 7031
.org 0xc6cfa
	ldrb r1, [r1, #0]	@ 000c6cfa 0978
.org 0xc6cfc
	orrs r0, r1	@ 000c6cfc 0843
.org 0xc6cfe
	ldr r1, [pc, #60]	@ 000c6cfe 0f49
.org 0xc6d00
	cmp r0, r1	@ 000c6d00 8842
.org 0xc6d02
	beq.n 0xc6d44	@ 000c6d02 1fd0
.org 0xc6d04
	ldrb r1, [r4, #10]	@ 000c6d04 a17a
.org 0xc6d06
	movs r0, #254	@ 000c6d06 fe20
.org 0xc6d08
	ands r0, r1	@ 000c6d08 0840
.org 0xc6d0a
	movs r2, #0	@ 000c6d0a 0022
.org 0xc6d0c
	movs r1, #253	@ 000c6d0c fd21
.org 0xc6d0e
	ands r0, r1	@ 000c6d0e 0840
.org 0xc6d10
	strb r0, [r4, #10]	@ 000c6d10 a072
.org 0xc6d12
	adds r0, r4, #0	@ 000c6d12 201c
.org 0xc6d14
	adds r0, #140	@ 000c6d14 8c30
.org 0xc6d16
	str r2, [r0, #0]	@ 000c6d16 0260
.org 0xc6d18
	adds r0, #4	@ 000c6d18 0430
.org 0xc6d1a
	str r2, [r0, #0]	@ 000c6d1a 0260
.org 0xc6d1c
	adds r0, #4	@ 000c6d1c 0430
.org 0xc6d1e
	strb r2, [r0, #0]	@ 000c6d1e 0270
.org 0xc6d20
	ldrb r1, [r4, #10]	@ 000c6d20 a17a
.org 0xc6d22
	movs r0, #251	@ 000c6d22 fb20
.org 0xc6d24
	ands r0, r1	@ 000c6d24 0840
.org 0xc6d26
	strb r0, [r4, #10]	@ 000c6d26 a072
.org 0xc6d28
	ldr r1, [pc, #20]	@ 000c6d28 0549
.org 0xc6d2a
	ldrb r0, [r4, #9]	@ 000c6d2a 607a
.org 0xc6d2c
	lsls r0, r0, #2	@ 000c6d2c 8000
.org 0xc6d2e
	adds r0, r0, r1	@ 000c6d2e 4018
.org 0xc6d30
	movs r1, #3	@ 000c6d30 0321
.org 0xc6d32
	str r1, [r4, #12]	@ 000c6d32 e160
.org 0xc6d34
	ldr r0, [r0, #0]	@ 000c6d34 0068
.org 0xc6d36
	ldr r0, [r0, #12]	@ 000c6d36 c068
.org 0xc6d38
	b.n 0xc6e26	@ 000c6d38 75e0
.org 0xc6d3a
	.byte 0x00	@ 000c6d3a data
.org 0xc6d3b
	.byte 0x00	@ 000c6d3b data
.org 0xc6d3c
	.byte 0x0c,0xa5,0x00,0x00	@ 000c6d3c data
.org 0xc6d40
	.byte 0xf4,0x49,0x86,0x08	@ 000c6d40 data
.org 0xc6d44
	ldrb r0, [r5, #10]	@ 000c6d44 a87a
.org 0xc6d46
	lsrs r2, r0, #4	@ 000c6d46 0209
.org 0xc6d48
	movs r0, #1	@ 000c6d48 0120
.org 0xc6d4a
	ands r2, r0	@ 000c6d4a 0240
.org 0xc6d4c
	cmp r2, #0	@ 000c6d4c 002a
.org 0xc6d4e
	beq.n 0xc6d58	@ 000c6d4e 03d0
.org 0xc6d50
	ldrb r1, [r4, #10]	@ 000c6d50 a17a
.org 0xc6d52
	movs r0, #16	@ 000c6d52 1020
.org 0xc6d54
	orrs r0, r1	@ 000c6d54 0843
.org 0xc6d56
	b.n 0xc6d5e	@ 000c6d56 02e0
.org 0xc6d58
	ldrb r1, [r4, #10]	@ 000c6d58 a17a
.org 0xc6d5a
	movs r0, #239	@ 000c6d5a ef20
.org 0xc6d5c
	ands r0, r1	@ 000c6d5c 0840
.org 0xc6d5e
	strb r0, [r4, #10]	@ 000c6d5e a072
.org 0xc6d60
	adds r1, r2, #0	@ 000c6d60 111c
.org 0xc6d62
	adds r0, r4, #0	@ 000c6d62 201c
.org 0xc6d64
	adds r0, #76	@ 000c6d64 4c30
.org 0xc6d66
	strb r1, [r0, #0]	@ 000c6d66 0170
.org 0xc6d68
	adds r3, r4, #0	@ 000c6d68 231c
.org 0xc6d6a
	adds r3, #74	@ 000c6d6a 4a33
.org 0xc6d6c
	lsls r1, r1, #4	@ 000c6d6c 0901
.org 0xc6d6e
	ldrb r2, [r3, #0]	@ 000c6d6e 1a78
.org 0xc6d70
	movs r0, #17	@ 000c6d70 1120
.org 0xc6d72
	negs r0, r0	@ 000c6d72 4042
.org 0xc6d74
	ands r0, r2	@ 000c6d74 1040
.org 0xc6d76
	orrs r0, r1	@ 000c6d76 0843
.org 0xc6d78
	strb r0, [r3, #0]	@ 000c6d78 1870
.org 0xc6d7a
	adds r0, r5, #0	@ 000c6d7a 281c
.org 0xc6d7c
	adds r0, #113	@ 000c6d7c 7130
.org 0xc6d7e
	ldrb r0, [r0, #0]	@ 000c6d7e 0078
.org 0xc6d80
	lsls r0, r0, #24	@ 000c6d80 0006
.org 0xc6d82
	asrs r0, r0, #24	@ 000c6d82 0016
.org 0xc6d84
	movs r2, #156	@ 000c6d84 9c22
.org 0xc6d86
	lsls r2, r2, #6	@ 000c6d86 9201
.org 0xc6d88
	cmp r0, #0	@ 000c6d88 0028
.org 0xc6d8a
	bne.n 0xc6d90	@ 000c6d8a 01d1
.org 0xc6d8c
	movs r2, #148	@ 000c6d8c 9422
.org 0xc6d8e
	lsls r2, r2, #6	@ 000c6d8e 9201
.org 0xc6d90
	ldrb r1, [r4, #10]	@ 000c6d90 a17a
.org 0xc6d92
	movs r0, #16	@ 000c6d92 1020
.org 0xc6d94
	ands r0, r1	@ 000c6d94 0840
.org 0xc6d96
	cmp r0, #0	@ 000c6d96 0028
.org 0xc6d98
	beq.n 0xc6da0	@ 000c6d98 02d0
.org 0xc6d9a
	ldr r0, [r5, #84]	@ 000c6d9a 686d
.org 0xc6d9c
	adds r0, r0, r2	@ 000c6d9c 8018
.org 0xc6d9e
	b.n 0xc6da4	@ 000c6d9e 01e0
.org 0xc6da0
	ldr r0, [r5, #84]	@ 000c6da0 686d
.org 0xc6da2
	subs r0, r0, r2	@ 000c6da2 801a
.org 0xc6da4
	str r0, [r4, #84]	@ 000c6da4 6065
.org 0xc6da6
	ldr r0, [r5, #88]	@ 000c6da6 a86d
.org 0xc6da8
	ldr r1, [pc, #20]	@ 000c6da8 0549
.org 0xc6daa
	adds r0, r0, r1	@ 000c6daa 4018
.org 0xc6dac
	str r0, [r4, #88]	@ 000c6dac a065
.org 0xc6dae
	ldr r0, [r5, #104]	@ 000c6dae a86e
.org 0xc6db0
	cmp r0, #11	@ 000c6db0 0b28
.org 0xc6db2
	ble.n 0xc6dc8	@ 000c6db2 09dd
.org 0xc6db4
	adds r0, r4, #0	@ 000c6db4 201c
.org 0xc6db6
	adds r0, #116	@ 000c6db6 7430
.org 0xc6db8
	ldr r1, [pc, #8]	@ 000c6db8 0249
.org 0xc6dba
	bl 0x5784	@ 000c6dba 3ef7e3fc
.org 0xc6dbe
	b.n 0xc6de6	@ 000c6dbe 12e0
.org 0xc6dc0
	.byte 0x00,0xde,0xff,0xff	@ 000c6dc0 data
.org 0xc6dc4
	.byte 0xa8,0x5c,0x86,0x08	@ 000c6dc4 data
.org 0xc6dc8
	cmp r0, #8	@ 000c6dc8 0828
.org 0xc6dca
	ble.n 0xc6ddc	@ 000c6dca 07dd
.org 0xc6dcc
	adds r0, r4, #0	@ 000c6dcc 201c
.org 0xc6dce
	adds r0, #116	@ 000c6dce 7430
.org 0xc6dd0
	ldr r1, [pc, #4]	@ 000c6dd0 0149
.org 0xc6dd2
	bl 0x5784	@ 000c6dd2 3ef7d7fc
.org 0xc6dd6
	b.n 0xc6de6	@ 000c6dd6 06e0
.org 0xc6dd8
	.byte 0x90,0x5c,0x86,0x08	@ 000c6dd8 data
.org 0xc6ddc
	adds r0, r4, #0	@ 000c6ddc 201c
.org 0xc6dde
	adds r0, #116	@ 000c6dde 7430
.org 0xc6de0
	ldr r1, [pc, #32]	@ 000c6de0 0849
.org 0xc6de2
	bl 0x5784	@ 000c6de2 3ef7cffc
.org 0xc6de6
	ldrb r0, [r4, #13]	@ 000c6de6 607b
.org 0xc6de8
	cmp r0, #0	@ 000c6de8 0028
.org 0xc6dea
	bne.n 0xc6e0c	@ 000c6dea 0fd1
.org 0xc6dec
	ldrb r0, [r5, #15]	@ 000c6dec e87b
.org 0xc6dee
	cmp r0, #2	@ 000c6dee 0228
.org 0xc6df0
	bne.n 0xc6e28	@ 000c6df0 1ad1
.org 0xc6df2
	ldr r1, [pc, #20]	@ 000c6df2 0549
.org 0xc6df4
	adds r0, r4, #0	@ 000c6df4 201c
.org 0xc6df6
	bl 0x1cf00	@ 000c6df6 56f783f8
.org 0xc6dfa
	ldrb r0, [r4, #13]	@ 000c6dfa 607b
.org 0xc6dfc
	adds r0, #1	@ 000c6dfc 0130
.org 0xc6dfe
	strb r0, [r4, #13]	@ 000c6dfe 6073
.org 0xc6e00
	b.n 0xc6e28	@ 000c6e00 12e0
.org 0xc6e02
	.byte 0x00	@ 000c6e02 data
.org 0xc6e03
	.byte 0x00	@ 000c6e03 data
.org 0xc6e04
	.byte 0x78,0x5c,0x86,0x08	@ 000c6e04 data
.org 0xc6e08
	.byte 0x01,0xa6,0x00,0x00	@ 000c6e08 data
.org 0xc6e0c
	adds r0, r4, #0	@ 000c6e0c 201c
