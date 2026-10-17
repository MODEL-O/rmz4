@ FUN_080a8c38  entry 0x080a8c38  size 312
.thumb
.org 0xa8c38
FUN_080a8c38:
	push {r4, r5, r6, r7, lr}	@ 000a8c38 f0b5
.org 0xa8c3a
	adds r4, r0, #0	@ 000a8c3a 041c
.org 0xa8c3c
	ldr r2, [r4, #40]	@ 000a8c3c a26a
.org 0xa8c3e
	ldr r7, [r4, #44]	@ 000a8c3e e76a
.org 0xa8c40
	ldr r0, [r2, #88]	@ 000a8c40 906d
.org 0xa8c42
	ldr r1, [pc, #64]	@ 000a8c42 1049
.org 0xa8c44
	adds r3, r0, r1	@ 000a8c44 4318
.org 0xa8c46
	ldr r0, [r7, #88]	@ 000a8c46 b86d
.org 0xa8c48
	subs r0, r0, r3	@ 000a8c48 c01a
.org 0xa8c4a
	asrs r0, r0, #1	@ 000a8c4a 4010
.org 0xa8c4c
	adds r0, r3, r0	@ 000a8c4c 1818
.org 0xa8c4e
	str r0, [r4, #88]	@ 000a8c4e a065
.org 0xa8c50
	ldrb r0, [r4, #17]	@ 000a8c50 607c
.org 0xa8c52
	cmp r0, #0	@ 000a8c52 0028
.org 0xa8c54
	beq.n 0xa8c88	@ 000a8c54 18d0
.org 0xa8c56
	ldr r0, [r2, #84]	@ 000a8c56 506d
.org 0xa8c58
	movs r2, #212	@ 000a8c58 d422
.org 0xa8c5a
	lsls r2, r2, #6	@ 000a8c5a 9201
.org 0xa8c5c
	adds r6, r0, r2	@ 000a8c5c 8618
.org 0xa8c5e
	ldr r0, [r7, #84]	@ 000a8c5e 786d
.org 0xa8c60
	subs r0, r0, r6	@ 000a8c60 801b
.org 0xa8c62
	asrs r0, r0, #1	@ 000a8c62 4010
.org 0xa8c64
	adds r0, r6, r0	@ 000a8c64 3018
.org 0xa8c66
	str r0, [r4, #84]	@ 000a8c66 6065
.org 0xa8c68
	ldr r0, [r7, #84]	@ 000a8c68 786d
.org 0xa8c6a
	subs r0, r6, r0	@ 000a8c6a 301a
.org 0xa8c6c
	lsls r0, r0, #8	@ 000a8c6c 0002
.org 0xa8c6e
	asrs r0, r0, #16	@ 000a8c6e 0014
.org 0xa8c70
	ldr r1, [r7, #88]	@ 000a8c70 b96d
.org 0xa8c72
	subs r1, r3, r1	@ 000a8c72 591a
.org 0xa8c74
	lsls r1, r1, #8	@ 000a8c74 0902
.org 0xa8c76
	asrs r1, r1, #16	@ 000a8c76 0914
.org 0xa8c78
	bl 0x128bdc	@ 000a8c78 7ff0b0ff
.org 0xa8c7c
	lsls r0, r0, #16	@ 000a8c7c 0004
.org 0xa8c7e
	lsrs r0, r0, #24	@ 000a8c7e 000e
.org 0xa8c80
	adds r0, #64	@ 000a8c80 4030
.org 0xa8c82
	b.n 0xa8cb2	@ 000a8c82 16e0
.org 0xa8c84
	.byte 0x00,0xf3,0xff,0xff	@ 000a8c84 data
.org 0xa8c88
	ldr r0, [r2, #84]	@ 000a8c88 506d
.org 0xa8c8a
	ldr r1, [pc, #144]	@ 000a8c8a 2449
.org 0xa8c8c
	adds r6, r0, r1	@ 000a8c8c 4618
.org 0xa8c8e
	ldr r0, [r7, #84]	@ 000a8c8e 786d
.org 0xa8c90
	subs r0, r0, r6	@ 000a8c90 801b
.org 0xa8c92
	asrs r0, r0, #1	@ 000a8c92 4010
.org 0xa8c94
	adds r0, r6, r0	@ 000a8c94 3018
.org 0xa8c96
	str r0, [r4, #84]	@ 000a8c96 6065
.org 0xa8c98
	ldr r0, [r7, #84]	@ 000a8c98 786d
.org 0xa8c9a
	subs r0, r6, r0	@ 000a8c9a 301a
.org 0xa8c9c
	lsls r0, r0, #8	@ 000a8c9c 0002
.org 0xa8c9e
	asrs r0, r0, #16	@ 000a8c9e 0014
.org 0xa8ca0
	ldr r1, [r7, #88]	@ 000a8ca0 b96d
.org 0xa8ca2
	subs r1, r3, r1	@ 000a8ca2 591a
.org 0xa8ca4
	lsls r1, r1, #8	@ 000a8ca4 0902
.org 0xa8ca6
	asrs r1, r1, #16	@ 000a8ca6 0914
.org 0xa8ca8
	bl 0x128bdc	@ 000a8ca8 7ff098ff
.org 0xa8cac
	lsls r0, r0, #16	@ 000a8cac 0004
.org 0xa8cae
	lsrs r0, r0, #24	@ 000a8cae 000e
.org 0xa8cb0
	adds r0, #192	@ 000a8cb0 c030
.org 0xa8cb2
	lsls r0, r0, #24	@ 000a8cb2 0006
.org 0xa8cb4
	lsrs r5, r0, #24	@ 000a8cb4 050e
.org 0xa8cb6
	ldr r3, [pc, #104]	@ 000a8cb6 1a4b
.org 0xa8cb8
	adds r0, r5, #0	@ 000a8cb8 281c
.org 0xa8cba
	adds r0, #64	@ 000a8cba 4030
.org 0xa8cbc
	lsls r0, r0, #24	@ 000a8cbc 0006
.org 0xa8cbe
	lsrs r0, r0, #23	@ 000a8cbe c00d
.org 0xa8cc0
	adds r0, r0, r3	@ 000a8cc0 c018
.org 0xa8cc2
	movs r1, #0	@ 000a8cc2 0021
.org 0xa8cc4
	ldrsh r2, [r0, r1]	@ 000a8cc4 425e
.org 0xa8cc6
	mov ip, r2	@ 000a8cc6 9446
.org 0xa8cc8
	adds r2, r7, #0	@ 000a8cc8 3a1c
.org 0xa8cca
	adds r2, #188	@ 000a8cca bc32
.org 0xa8ccc
	movs r1, #0	@ 000a8ccc 0021
.org 0xa8cce
	ldrsh r0, [r2, r1]	@ 000a8cce 505e
.org 0xa8cd0
	mov r1, ip	@ 000a8cd0 6146
.org 0xa8cd2
	muls r1, r0	@ 000a8cd2 4143
.org 0xa8cd4
	asrs r1, r1, #8	@ 000a8cd4 0912
.org 0xa8cd6
	ldr r0, [r4, #84]	@ 000a8cd6 606d
.org 0xa8cd8
	adds r0, r0, r1	@ 000a8cd8 4018
.org 0xa8cda
	str r0, [r4, #84]	@ 000a8cda 6065
.org 0xa8cdc
	lsls r0, r5, #1	@ 000a8cdc 6800
.org 0xa8cde
	adds r0, r0, r3	@ 000a8cde c018
.org 0xa8ce0
	movs r3, #0	@ 000a8ce0 0023
.org 0xa8ce2
	ldrsh r1, [r0, r3]	@ 000a8ce2 c15e
.org 0xa8ce4
	movs r3, #0	@ 000a8ce4 0023
.org 0xa8ce6
	ldrsh r0, [r2, r3]	@ 000a8ce6 d05e
.org 0xa8ce8
	muls r1, r0	@ 000a8ce8 4143
.org 0xa8cea
	asrs r1, r1, #8	@ 000a8cea 0912
.org 0xa8cec
	ldr r0, [r4, #88]	@ 000a8cec a06d
.org 0xa8cee
	adds r0, r0, r1	@ 000a8cee 4018
.org 0xa8cf0
	str r0, [r4, #88]	@ 000a8cf0 a065
.org 0xa8cf2
	ldr r0, [r7, #84]	@ 000a8cf2 786d
.org 0xa8cf4
	cmp r0, r6	@ 000a8cf4 b042
.org 0xa8cf6
	ble.n 0xa8d24	@ 000a8cf6 15dd
.org 0xa8cf8
	movs r2, #1	@ 000a8cf8 0122
.org 0xa8cfa
	ldrb r1, [r4, #10]	@ 000a8cfa a17a
.org 0xa8cfc
	movs r0, #16	@ 000a8cfc 1020
.org 0xa8cfe
	orrs r0, r1	@ 000a8cfe 0843
.org 0xa8d00
	strb r0, [r4, #10]	@ 000a8d00 a072
.org 0xa8d02
	adds r0, r4, #0	@ 000a8d02 201c
.org 0xa8d04
	adds r0, #76	@ 000a8d04 4c30
.org 0xa8d06
	strb r2, [r0, #0]	@ 000a8d06 0270
.org 0xa8d08
	adds r3, r4, #0	@ 000a8d08 231c
.org 0xa8d0a
	adds r3, #74	@ 000a8d0a 4a33
.org 0xa8d0c
	movs r2, #16	@ 000a8d0c 1022
.org 0xa8d0e
	ldrb r1, [r3, #0]	@ 000a8d0e 1978
.org 0xa8d10
	movs r0, #17	@ 000a8d10 1120
.org 0xa8d12
	negs r0, r0	@ 000a8d12 4042
.org 0xa8d14
	ands r0, r1	@ 000a8d14 0840
.org 0xa8d16
	orrs r0, r2	@ 000a8d16 1043
.org 0xa8d18
	strb r0, [r3, #0]	@ 000a8d18 1870
.org 0xa8d1a
	b.n 0xa8d42	@ 000a8d1a 12e0
.org 0xa8d1c
	.byte 0x00,0xcc,0xff,0xff	@ 000a8d1c data
.org 0xa8d20
	.byte 0x0c,0x93,0x12,0x08	@ 000a8d20 data
.org 0xa8d24
	movs r2, #0	@ 000a8d24 0022
.org 0xa8d26
	ldrb r1, [r4, #10]	@ 000a8d26 a17a
.org 0xa8d28
	movs r0, #239	@ 000a8d28 ef20
.org 0xa8d2a
	ands r0, r1	@ 000a8d2a 0840
.org 0xa8d2c
	strb r0, [r4, #10]	@ 000a8d2c a072
.org 0xa8d2e
	adds r0, r4, #0	@ 000a8d2e 201c
.org 0xa8d30
	adds r0, #76	@ 000a8d30 4c30
.org 0xa8d32
	strb r2, [r0, #0]	@ 000a8d32 0270
.org 0xa8d34
	adds r2, r4, #0	@ 000a8d34 221c
.org 0xa8d36
	adds r2, #74	@ 000a8d36 4a32
.org 0xa8d38
	ldrb r1, [r2, #0]	@ 000a8d38 1178
.org 0xa8d3a
	movs r0, #17	@ 000a8d3a 1120
.org 0xa8d3c
	negs r0, r0	@ 000a8d3c 4042
.org 0xa8d3e
	ands r0, r1	@ 000a8d3e 0840
.org 0xa8d40
	strb r0, [r2, #0]	@ 000a8d40 1070
.org 0xa8d42
	ldr r0, [r7, #84]	@ 000a8d42 786d
.org 0xa8d44
	subs r1, r0, r6	@ 000a8d44 811b
.org 0xa8d46
	cmp r1, #0	@ 000a8d46 0029
.org 0xa8d48
	blt.n 0xa8d54	@ 000a8d48 04db
.org 0xa8d4a
	movs r0, #128	@ 000a8d4a 8020
.org 0xa8d4c
	lsls r0, r0, #4	@ 000a8d4c 0001
.org 0xa8d4e
	cmp r1, r0	@ 000a8d4e 8142
.org 0xa8d50
	bgt.n 0xa8d5e	@ 000a8d50 05dc
.org 0xa8d52
	b.n 0xa8d6c	@ 000a8d52 0be0
.org 0xa8d54
	subs r1, r6, r0	@ 000a8d54 311a
.org 0xa8d56
	movs r0, #128	@ 000a8d56 8020
.org 0xa8d58
	lsls r0, r0, #4	@ 000a8d58 0001
.org 0xa8d5a
	cmp r1, r0	@ 000a8d5a 8142
.org 0xa8d5c
	ble.n 0xa8d6c	@ 000a8d5c 06dd
.org 0xa8d5e
	ldr r1, [pc, #8]	@ 000a8d5e 0249
.org 0xa8d60
	adds r0, r4, #0	@ 000a8d60 201c
.org 0xa8d62
	bl 0x1cf00	@ 000a8d62 74f7cdf8
.org 0xa8d66
	b.n 0xa8d74	@ 000a8d66 05e0
.org 0xa8d68
	.byte 0x06,0x8d,0x00,0x00	@ 000a8d68 data
.org 0xa8d6c
	ldr r1, [pc, #16]	@ 000a8d6c 0449
.org 0xa8d6e
	adds r0, r4, #0	@ 000a8d6e 201c
