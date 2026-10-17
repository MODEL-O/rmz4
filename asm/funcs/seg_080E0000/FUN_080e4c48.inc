@ FUN_080e4c48  entry 0x080e4c48  size 332
.thumb
.org 0xe4c48
FUN_080e4c48:
	push {r4, r5, r6, r7, lr}	@ 000e4c48 f0b5
.org 0xe4c4a
	adds r6, r0, #0	@ 000e4c4a 061c
.org 0xe4c4c
	ldrb r0, [r6, #17]	@ 000e4c4c 707c
.org 0xe4c4e
	cmp r0, #0	@ 000e4c4e 0028
.org 0xe4c50
	bne.n 0xe4c96	@ 000e4c50 21d1
.org 0xe4c52
	adds r5, r6, #0	@ 000e4c52 351c
.org 0xe4c54
	adds r5, #84	@ 000e4c54 5435
.org 0xe4c56
	movs r0, #1	@ 000e4c56 0120
.org 0xe4c58
	adds r1, r5, #0	@ 000e4c58 291c
.org 0xe4c5a
	bl 0xd0c88	@ 000e4c5a ecf715f8
.org 0xe4c5e
	movs r0, #42	@ 000e4c5e 2a20
.org 0xe4c60
	bl 0x2b10	@ 000e4c60 1df756ff
.org 0xe4c64
	movs r4, #1	@ 000e4c64 0124
.org 0xe4c66
	strb r4, [r6, #17]	@ 000e4c66 7474
.org 0xe4c68
	movs r1, #129	@ 000e4c68 8121
.org 0xe4c6a
	lsls r1, r1, #1	@ 000e4c6a 4900
.org 0xe4c6c
	ldrb r2, [r6, #10]	@ 000e4c6c b27a
.org 0xe4c6e
	lsrs r2, r2, #4	@ 000e4c6e 1209
.org 0xe4c70
	ands r2, r4	@ 000e4c70 2240
.org 0xe4c72
	adds r0, r5, #0	@ 000e4c72 281c
.org 0xe4c74
	bl 0xe4a54	@ 000e4c74 fff7eefe
.org 0xe4c78
	ldr r1, [pc, #172]	@ 000e4c78 2b49
.org 0xe4c7a
	ldrb r2, [r6, #10]	@ 000e4c7a b27a
.org 0xe4c7c
	lsrs r2, r2, #4	@ 000e4c7c 1209
.org 0xe4c7e
	ands r2, r4	@ 000e4c7e 2240
.org 0xe4c80
	adds r0, r5, #0	@ 000e4c80 281c
.org 0xe4c82
	bl 0xe4a54	@ 000e4c82 fff7e7fe
.org 0xe4c86
	movs r1, #130	@ 000e4c86 8221
.org 0xe4c88
	lsls r1, r1, #1	@ 000e4c88 4900
.org 0xe4c8a
	ldrb r2, [r6, #10]	@ 000e4c8a b27a
.org 0xe4c8c
	lsrs r2, r2, #4	@ 000e4c8c 1209
.org 0xe4c8e
	ands r2, r4	@ 000e4c8e 2240
.org 0xe4c90
	adds r0, r5, #0	@ 000e4c90 281c
.org 0xe4c92
	bl 0xe4a54	@ 000e4c92 fff7dffe
.org 0xe4c96
	ldr r0, [pc, #148]	@ 000e4c96 2548
.org 0xe4c98
	ldrb r2, [r6, #17]	@ 000e4c98 727c
.org 0xe4c9a
	subs r2, #1	@ 000e4c9a 013a
.org 0xe4c9c
	lsls r2, r2, #2	@ 000e4c9c 9200
.org 0xe4c9e
	adds r2, r2, r0	@ 000e4c9e 1218
.org 0xe4ca0
	ldr r4, [pc, #140]	@ 000e4ca0 234c
.org 0xe4ca2
	ldr r0, [r4, #0]	@ 000e4ca2 2068
.org 0xe4ca4
	ldr r1, [pc, #140]	@ 000e4ca4 2349
.org 0xe4ca6
	mov ip, r1	@ 000e4ca6 8c46
.org 0xe4ca8
	mov r1, ip	@ 000e4ca8 6146
.org 0xe4caa
	muls r1, r0	@ 000e4caa 4143
.org 0xe4cac
	adds r0, r1, #0	@ 000e4cac 081c
.org 0xe4cae
	ldr r5, [pc, #136]	@ 000e4cae 224d
.org 0xe4cb0
	adds r0, r0, r5	@ 000e4cb0 4019
.org 0xe4cb2
	lsls r0, r0, #1	@ 000e4cb2 4000
.org 0xe4cb4
	lsrs r3, r0, #1	@ 000e4cb4 4308
.org 0xe4cb6
	str r3, [r4, #0]	@ 000e4cb6 2360
.org 0xe4cb8
	lsrs r0, r0, #17	@ 000e4cb8 400c
.org 0xe4cba
	movs r1, #127	@ 000e4cba 7f21
.org 0xe4cbc
	ands r0, r1	@ 000e4cbc 0840
.org 0xe4cbe
	adds r1, #129	@ 000e4cbe 8131
.org 0xe4cc0
	adds r0, r0, r1	@ 000e4cc0 4018
.org 0xe4cc2
	ldr r1, [r2, #0]	@ 000e4cc2 1168
.org 0xe4cc4
	muls r0, r1	@ 000e4cc4 4843
.org 0xe4cc6
	cmp r0, #0	@ 000e4cc6 0028
.org 0xe4cc8
	bge.n 0xe4ccc	@ 000e4cc8 00da
.org 0xe4cca
	adds r0, #255	@ 000e4cca ff30
.org 0xe4ccc
	asrs r7, r0, #8	@ 000e4ccc 0712
.org 0xe4cce
	str r7, [r6, #92]	@ 000e4cce f765
.org 0xe4cd0
	mov r0, ip	@ 000e4cd0 6046
.org 0xe4cd2
	muls r0, r3	@ 000e4cd2 5843
.org 0xe4cd4
	adds r0, r0, r5	@ 000e4cd4 4019
.org 0xe4cd6
	lsls r0, r0, #1	@ 000e4cd6 4000
.org 0xe4cd8
	lsrs r1, r0, #1	@ 000e4cd8 4108
.org 0xe4cda
	str r1, [r4, #0]	@ 000e4cda 2160
.org 0xe4cdc
	lsrs r0, r0, #17	@ 000e4cdc 400c
.org 0xe4cde
	movs r1, #255	@ 000e4cde ff21
.org 0xe4ce0
	ands r0, r1	@ 000e4ce0 0840
.org 0xe4ce2
	movs r1, #128	@ 000e4ce2 8021
.org 0xe4ce4
	lsls r1, r1, #2	@ 000e4ce4 8900
.org 0xe4ce6
	adds r0, r0, r1	@ 000e4ce6 4018
.org 0xe4ce8
	lsls r0, r0, #8	@ 000e4ce8 0002
.org 0xe4cea
	negs r0, r0	@ 000e4cea 4042
.org 0xe4cec
	cmp r0, #0	@ 000e4cec 0028
.org 0xe4cee
	bge.n 0xe4cf2	@ 000e4cee 00da
.org 0xe4cf0
	adds r0, #255	@ 000e4cf0 ff30
.org 0xe4cf2
	asrs r0, r0, #8	@ 000e4cf2 0012
.org 0xe4cf4
	str r0, [r6, #96]	@ 000e4cf4 3066
.org 0xe4cf6
	ldrb r1, [r6, #10]	@ 000e4cf6 b17a
.org 0xe4cf8
	movs r0, #16	@ 000e4cf8 1020
.org 0xe4cfa
	ands r0, r1	@ 000e4cfa 0840
.org 0xe4cfc
	adds r3, r1, #0	@ 000e4cfc 0b1c
.org 0xe4cfe
	cmp r0, #0	@ 000e4cfe 0028
.org 0xe4d00
	beq.n 0xe4d40	@ 000e4d00 1ed0
.org 0xe4d02
	ldr r2, [pc, #56]	@ 000e4d02 0e4a
.org 0xe4d04
	ldrb r0, [r6, #17]	@ 000e4d04 707c
.org 0xe4d06
	subs r0, #1	@ 000e4d06 0138
.org 0xe4d08
	lsls r0, r0, #3	@ 000e4d08 c000
.org 0xe4d0a
	adds r0, r0, r2	@ 000e4d0a 8018
.org 0xe4d0c
	ldr r1, [r0, #0]	@ 000e4d0c 0168
.org 0xe4d0e
	lsls r1, r1, #8	@ 000e4d0e 0902
.org 0xe4d10
	ldr r0, [r6, #84]	@ 000e4d10 706d
.org 0xe4d12
	subs r0, r0, r1	@ 000e4d12 401a
.org 0xe4d14
	str r0, [r6, #84]	@ 000e4d14 7065
.org 0xe4d16
	lsls r0, r7, #8	@ 000e4d16 3802
.org 0xe4d18
	negs r0, r0	@ 000e4d18 4042
.org 0xe4d1a
	adds r4, r2, #0	@ 000e4d1a 141c
.org 0xe4d1c
	cmp r0, #0	@ 000e4d1c 0028
.org 0xe4d1e
	bge.n 0xe4d22	@ 000e4d1e 00da
.org 0xe4d20
	adds r0, #255	@ 000e4d20 ff30
.org 0xe4d22
	asrs r0, r0, #8	@ 000e4d22 0012
.org 0xe4d24
	str r0, [r6, #92]	@ 000e4d24 f065
.org 0xe4d26
	b.n 0xe4d56	@ 000e4d26 16e0
.org 0xe4d28
	.byte 0x03,0x01,0x00,0x00	@ 000e4d28 data
.org 0xe4d2c
	.byte 0xd8,0x8d,0x86,0x08	@ 000e4d2c data
.org 0xe4d30
	.byte 0x38,0xdc,0x02,0x02	@ 000e4d30 data
.org 0xe4d34
	.byte 0xfd,0x43,0x03,0x00	@ 000e4d34 data
.org 0xe4d38
	.byte 0xc3,0x9e,0x26,0x00	@ 000e4d38 data
.org 0xe4d3c
	.byte 0xb8,0x8d,0x86,0x08	@ 000e4d3c data
.org 0xe4d40
	ldr r2, [pc, #104]	@ 000e4d40 1a4a
.org 0xe4d42
	ldrb r0, [r6, #17]	@ 000e4d42 707c
.org 0xe4d44
	subs r0, #1	@ 000e4d44 0138
.org 0xe4d46
	lsls r0, r0, #3	@ 000e4d46 c000
.org 0xe4d48
	adds r0, r0, r2	@ 000e4d48 8018
.org 0xe4d4a
	ldr r1, [r0, #0]	@ 000e4d4a 0168
.org 0xe4d4c
	lsls r1, r1, #8	@ 000e4d4c 0902
.org 0xe4d4e
	ldr r0, [r6, #84]	@ 000e4d4e 706d
.org 0xe4d50
	adds r0, r0, r1	@ 000e4d50 4018
.org 0xe4d52
	str r0, [r6, #84]	@ 000e4d52 7065
.org 0xe4d54
	adds r4, r2, #0	@ 000e4d54 141c
.org 0xe4d56
	ldrb r0, [r6, #17]	@ 000e4d56 707c
.org 0xe4d58
	cmp r0, #4	@ 000e4d58 0428
.org 0xe4d5a
	bne.n 0xe4d7c	@ 000e4d5a 0fd1
.org 0xe4d5c
	movs r1, #1	@ 000e4d5c 0121
.org 0xe4d5e
	movs r0, #32	@ 000e4d5e 2020
.org 0xe4d60
	orrs r0, r3	@ 000e4d60 1843
.org 0xe4d62
	strb r0, [r6, #10]	@ 000e4d62 b072
.org 0xe4d64
	adds r0, r6, #0	@ 000e4d64 301c
.org 0xe4d66
	adds r0, #77	@ 000e4d66 4d30
.org 0xe4d68
	strb r1, [r0, #0]	@ 000e4d68 0170
.org 0xe4d6a
	adds r3, r6, #0	@ 000e4d6a 331c
.org 0xe4d6c
	adds r3, #74	@ 000e4d6c 4a33
.org 0xe4d6e
	movs r2, #32	@ 000e4d6e 2022
.org 0xe4d70
	ldrb r1, [r3, #0]	@ 000e4d70 1978
.org 0xe4d72
	movs r0, #33	@ 000e4d72 2120
.org 0xe4d74
	negs r0, r0	@ 000e4d74 4042
.org 0xe4d76
	ands r0, r1	@ 000e4d76 0840
.org 0xe4d78
	orrs r0, r2	@ 000e4d78 1043
.org 0xe4d7a
	strb r0, [r3, #0]	@ 000e4d7a 1870
.org 0xe4d7c
	ldrb r0, [r6, #17]	@ 000e4d7c 707c
.org 0xe4d7e
	subs r0, #1	@ 000e4d7e 0138
.org 0xe4d80
	lsls r0, r0, #3	@ 000e4d80 c000
.org 0xe4d82
	adds r1, r4, #4	@ 000e4d82 211d
.org 0xe4d84
	adds r0, r0, r1	@ 000e4d84 4018
.org 0xe4d86
	ldr r1, [r0, #0]	@ 000e4d86 0168
.org 0xe4d88
	lsls r1, r1, #8	@ 000e4d88 0902
.org 0xe4d8a
	ldr r0, [r6, #88]	@ 000e4d8a b06d
.org 0xe4d8c
	adds r0, r0, r1	@ 000e4d8c 4018
.org 0xe4d8e
	str r0, [r6, #88]	@ 000e4d8e b065
.org 0xe4d90
	ldr r1, [pc, #28]	@ 000e4d90 0749
.org 0xe4d92
	ldrb r0, [r6, #17]	@ 000e4d92 707c
