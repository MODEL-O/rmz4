@ FUN_08076c8c  entry 0x08076c8c  size 368
.thumb
.org 0x76c8c
FUN_08076c8c:
	push {r4, lr}	@ 00076c8c 10b5
.org 0x76c8e
	adds r4, r0, #0	@ 00076c8e 041c
.org 0x76c90
	ldrb r0, [r4, #14]	@ 00076c90 a07b
.org 0x76c92
	cmp r0, #0	@ 00076c92 0028
.org 0x76c94
	bne.n 0x76cd8	@ 00076c94 20d1
.org 0x76c96
	ldr r1, [pc, #28]	@ 00076c96 0749
.org 0x76c98
	adds r0, r4, #0	@ 00076c98 201c
.org 0x76c9a
	bl 0x1cf00	@ 00076c9a a6f731f9
.org 0x76c9e
	movs r0, #220	@ 00076c9e dc20
.org 0x76ca0
	bl 0x2b10	@ 00076ca0 8bf736ff
.org 0x76ca4
	ldrb r1, [r4, #10]	@ 00076ca4 a17a
.org 0x76ca6
	movs r0, #16	@ 00076ca6 1020
.org 0x76ca8
	ands r0, r1	@ 00076ca8 0840
.org 0x76caa
	cmp r0, #0	@ 00076caa 0028
.org 0x76cac
	beq.n 0x76cb8	@ 00076cac 04d0
.org 0x76cae
	movs r0, #160	@ 00076cae a020
.org 0x76cb0
	lsls r0, r0, #2	@ 00076cb0 8000
.org 0x76cb2
	b.n 0x76cba	@ 00076cb2 02e0
.org 0x76cb4
	.byte 0x13,0xaf,0x00,0x00	@ 00076cb4 data
.org 0x76cb8
	ldr r0, [pc, #20]	@ 00076cb8 0548
.org 0x76cba
	str r0, [r4, #92]	@ 00076cba e065
.org 0x76cbc
	ldr r0, [pc, #20]	@ 00076cbc 0548
.org 0x76cbe
	str r0, [r4, #96]	@ 00076cbe 2066
.org 0x76cc0
	movs r1, #0	@ 00076cc0 0021
.org 0x76cc2
	movs r0, #24	@ 00076cc2 1820
.org 0x76cc4
	strb r0, [r4, #18]	@ 00076cc4 a074
.org 0x76cc6
	strb r1, [r4, #15]	@ 00076cc6 e173
.org 0x76cc8
	ldrb r0, [r4, #14]	@ 00076cc8 a07b
.org 0x76cca
	adds r0, #1	@ 00076cca 0130
.org 0x76ccc
	strb r0, [r4, #14]	@ 00076ccc a073
.org 0x76cce
	b.n 0x76d26	@ 00076cce 2ae0
.org 0x76cd0
	.byte 0x80,0xfd,0xff,0xff	@ 00076cd0 data
.org 0x76cd4
	.byte 0xc0,0xf7,0xff,0xff	@ 00076cd4 data
.org 0x76cd8
	adds r2, r4, #0	@ 00076cd8 221c
.org 0x76cda
	adds r2, #113	@ 00076cda 7132
.org 0x76cdc
	movs r0, #0	@ 00076cdc 0020
.org 0x76cde
	ldrsb r0, [r2, r0]	@ 00076cde 1056
.org 0x76ce0
	cmp r0, #2	@ 00076ce0 0228
.org 0x76ce2
	bgt.n 0x76d26	@ 00076ce2 20dc
.org 0x76ce4
	adds r0, r4, #0	@ 00076ce4 201c
.org 0x76ce6
	adds r0, #114	@ 00076ce6 7230
.org 0x76ce8
	ldrb r0, [r0, #0]	@ 00076ce8 0078
.org 0x76cea
	lsls r0, r0, #24	@ 00076cea 0006
.org 0x76cec
	asrs r0, r0, #24	@ 00076cec 0016
.org 0x76cee
	cmp r0, #1	@ 00076cee 0128
.org 0x76cf0
	bgt.n 0x76d26	@ 00076cf0 19dc
.org 0x76cf2
	ldrb r1, [r4, #10]	@ 00076cf2 a17a
.org 0x76cf4
	movs r0, #16	@ 00076cf4 1020
.org 0x76cf6
	ands r0, r1	@ 00076cf6 0840
.org 0x76cf8
	cmp r0, #0	@ 00076cf8 0028
.org 0x76cfa
	beq.n 0x76d14	@ 00076cfa 0bd0
.org 0x76cfc
	ldr r1, [pc, #16]	@ 00076cfc 0449
.org 0x76cfe
	movs r0, #0	@ 00076cfe 0020
.org 0x76d00
	ldrsb r0, [r2, r0]	@ 00076d00 1056
.org 0x76d02
	lsls r0, r0, #2	@ 00076d02 8000
.org 0x76d04
	adds r0, r0, r1	@ 00076d04 4018
.org 0x76d06
	ldr r1, [r4, #84]	@ 00076d06 616d
.org 0x76d08
	ldr r0, [r0, #0]	@ 00076d08 0068
.org 0x76d0a
	adds r1, r1, r0	@ 00076d0a 0918
.org 0x76d0c
	b.n 0x76d24	@ 00076d0c 0ae0
.org 0x76d0e
	.byte 0x00	@ 00076d0e data
.org 0x76d0f
	.byte 0x00	@ 00076d0f data
.org 0x76d10
	.byte 0x2c,0xd1,0x85,0x08	@ 00076d10 data
.org 0x76d14
	ldr r1, [pc, #84]	@ 00076d14 1549
.org 0x76d16
	movs r0, #0	@ 00076d16 0020
.org 0x76d18
	ldrsb r0, [r2, r0]	@ 00076d18 1056
.org 0x76d1a
	lsls r0, r0, #2	@ 00076d1a 8000
.org 0x76d1c
	adds r0, r0, r1	@ 00076d1c 4018
.org 0x76d1e
	ldr r1, [r4, #84]	@ 00076d1e 616d
.org 0x76d20
	ldr r0, [r0, #0]	@ 00076d20 0068
.org 0x76d22
	subs r1, r1, r0	@ 00076d22 091a
.org 0x76d24
	str r1, [r4, #84]	@ 00076d24 6165
.org 0x76d26
	adds r0, r4, #0	@ 00076d26 201c
.org 0x76d28
	bl 0x1cff0	@ 00076d28 a6f762f9
.org 0x76d2c
	ldrb r0, [r4, #15]	@ 00076d2c e07b
.org 0x76d2e
	cmp r0, #0	@ 00076d2e 0028
.org 0x76d30
	bne.n 0x76d8a	@ 00076d30 2bd1
.org 0x76d32
	adds r0, r4, #0	@ 00076d32 201c
.org 0x76d34
	adds r0, #113	@ 00076d34 7130
.org 0x76d36
	ldrb r0, [r0, #0]	@ 00076d36 0078
.org 0x76d38
	lsls r0, r0, #24	@ 00076d38 0006
.org 0x76d3a
	asrs r0, r0, #24	@ 00076d3a 0016
.org 0x76d3c
	cmp r0, #1	@ 00076d3c 0128
.org 0x76d3e
	ble.n 0x76e18	@ 00076d3e 6bdd
.org 0x76d40
	adds r0, r4, #0	@ 00076d40 201c
.org 0x76d42
	adds r0, #116	@ 00076d42 7430
.org 0x76d44
	ldr r1, [pc, #40]	@ 00076d44 0a49
.org 0x76d46
	bl 0x5784	@ 00076d46 8ef71dfd
.org 0x76d4a
	ldrb r1, [r4, #10]	@ 00076d4a a17a
.org 0x76d4c
	movs r0, #16	@ 00076d4c 1020
.org 0x76d4e
	ands r0, r1	@ 00076d4e 0840
.org 0x76d50
	cmp r0, #0	@ 00076d50 0028
.org 0x76d52
	beq.n 0x76d74	@ 00076d52 0fd0
.org 0x76d54
	adds r0, r4, #0	@ 00076d54 201c
.org 0x76d56
	movs r1, #3	@ 00076d56 0321
.org 0x76d58
	movs r2, #252	@ 00076d58 fc22
.org 0x76d5a
	bl 0xcbf7c	@ 00076d5a 55f00ff9
.org 0x76d5e
	adds r0, r4, #0	@ 00076d5e 201c
.org 0x76d60
	movs r1, #3	@ 00076d60 0321
.org 0x76d62
	movs r2, #240	@ 00076d62 f022
.org 0x76d64
	bl 0xcbf7c	@ 00076d64 55f00af9
.org 0x76d68
	b.n 0x76dd6	@ 00076d68 35e0
.org 0x76d6a
	.byte 0x00	@ 00076d6a data
.org 0x76d6b
	.byte 0x00	@ 00076d6b data
.org 0x76d6c
	.byte 0x2c,0xd1,0x85,0x08	@ 00076d6c data
.org 0x76d70
	.byte 0xb4,0xcf,0x85,0x08	@ 00076d70 data
.org 0x76d74
	adds r0, r4, #0	@ 00076d74 201c
.org 0x76d76
	movs r1, #3	@ 00076d76 0321
.org 0x76d78
	movs r2, #132	@ 00076d78 8422
.org 0x76d7a
	bl 0xcbf7c	@ 00076d7a 55f0fff8
.org 0x76d7e
	adds r0, r4, #0	@ 00076d7e 201c
.org 0x76d80
	movs r1, #3	@ 00076d80 0321
.org 0x76d82
	movs r2, #144	@ 00076d82 9022
.org 0x76d84
	bl 0xcbf7c	@ 00076d84 55f0faf8
.org 0x76d88
	b.n 0x76dd6	@ 00076d88 25e0
.org 0x76d8a
	cmp r0, #1	@ 00076d8a 0128
.org 0x76d8c
	bne.n 0x76da6	@ 00076d8c 0bd1
.org 0x76d8e
	adds r1, r4, #0	@ 00076d8e 211c
.org 0x76d90
	adds r1, #217	@ 00076d90 d931
.org 0x76d92
	movs r0, #2	@ 00076d92 0220
.org 0x76d94
	strb r0, [r1, #0]	@ 00076d94 0870
.org 0x76d96
	adds r0, r4, #0	@ 00076d96 201c
.org 0x76d98
	adds r0, #113	@ 00076d98 7130
.org 0x76d9a
	ldrb r0, [r0, #0]	@ 00076d9a 0078
.org 0x76d9c
	lsls r0, r0, #24	@ 00076d9c 0006
.org 0x76d9e
	asrs r0, r0, #24	@ 00076d9e 0016
.org 0x76da0
	cmp r0, #2	@ 00076da0 0228
.org 0x76da2
	ble.n 0x76e18	@ 00076da2 39dd
.org 0x76da4
	b.n 0x76dd6	@ 00076da4 17e0
.org 0x76da6
	cmp r0, #2	@ 00076da6 0228
.org 0x76da8
	bne.n 0x76de4	@ 00076da8 1cd1
.org 0x76daa
	ldr r0, [r4, #84]	@ 00076daa 606d
.org 0x76dac
	ldr r1, [r4, #92]	@ 00076dac e16d
.org 0x76dae
	adds r0, r0, r1	@ 00076dae 4018
.org 0x76db0
	str r0, [r4, #84]	@ 00076db0 6065
.org 0x76db2
	ldr r0, [r4, #88]	@ 00076db2 a06d
.org 0x76db4
	ldr r1, [r4, #96]	@ 00076db4 216e
.org 0x76db6
	adds r0, r0, r1	@ 00076db6 4018
.org 0x76db8
	str r0, [r4, #88]	@ 00076db8 a065
.org 0x76dba
	adds r1, #64	@ 00076dba 4031
.org 0x76dbc
	str r1, [r4, #96]	@ 00076dbc 2166
.org 0x76dbe
	adds r0, r4, #0	@ 00076dbe 201c
.org 0x76dc0
	adds r0, #113	@ 00076dc0 7130
.org 0x76dc2
	ldrb r0, [r0, #0]	@ 00076dc2 0078
.org 0x76dc4
	lsls r0, r0, #24	@ 00076dc4 0006
.org 0x76dc6
	asrs r0, r0, #24	@ 00076dc6 0016
.org 0x76dc8
	cmp r0, #4	@ 00076dc8 0428
.org 0x76dca
	ble.n 0x76e18	@ 00076dca 25dd
.org 0x76dcc
	adds r0, r4, #0	@ 00076dcc 201c
.org 0x76dce
	adds r0, #116	@ 00076dce 7430
.org 0x76dd0
	ldr r1, [pc, #12]	@ 00076dd0 0349
.org 0x76dd2
	bl 0x5784	@ 00076dd2 8ef7d7fc
.org 0x76dd6
	ldrb r0, [r4, #15]	@ 00076dd6 e07b
.org 0x76dd8
	adds r0, #1	@ 00076dd8 0130
.org 0x76dda
	strb r0, [r4, #15]	@ 00076dda e073
.org 0x76ddc
	b.n 0x76e18	@ 00076ddc 1ce0
.org 0x76dde
	.byte 0x00	@ 00076dde data
.org 0x76ddf
	.byte 0x00	@ 00076ddf data
.org 0x76de0
	.byte 0xac,0xce,0x85,0x08	@ 00076de0 data
.org 0x76de4
	ldr r0, [r4, #84]	@ 00076de4 606d
.org 0x76de6
	ldr r1, [r4, #92]	@ 00076de6 e16d
.org 0x76de8
	adds r0, r0, r1	@ 00076de8 4018
.org 0x76dea
	str r0, [r4, #84]	@ 00076dea 6065
.org 0x76dec
	ldr r0, [r4, #88]	@ 00076dec a06d
.org 0x76dee
	ldr r1, [r4, #96]	@ 00076dee 216e
.org 0x76df0
	adds r0, r0, r1	@ 00076df0 4018
.org 0x76df2
	str r0, [r4, #88]	@ 00076df2 a065
.org 0x76df4
	adds r1, #64	@ 00076df4 4031
.org 0x76df6
	str r1, [r4, #96]	@ 00076df6 2166
.org 0x76df8
	adds r0, r4, #0	@ 00076df8 201c
.org 0x76dfa
	adds r0, #115	@ 00076dfa 7330
