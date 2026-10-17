@ FUN_08056d28  entry 0x08056d28  size 288
.thumb
.org 0x56d28
FUN_08056d28:
	push {r4, r5, r6, lr}	@ 00056d28 70b5
.org 0x56d2a
	adds r4, r0, #0	@ 00056d2a 041c
.org 0x56d2c
	ldrb r0, [r4, #15]	@ 00056d2c e07b
.org 0x56d2e
	cmp r0, #0	@ 00056d2e 0028
.org 0x56d30
	bne.n 0x56dcc	@ 00056d30 4cd1
.org 0x56d32
	ldrb r1, [r4, #10]	@ 00056d32 a17a
.org 0x56d34
	movs r0, #1	@ 00056d34 0120
.org 0x56d36
	movs r6, #0	@ 00056d36 0026
.org 0x56d38
	orrs r0, r1	@ 00056d38 0843
.org 0x56d3a
	strb r0, [r4, #10]	@ 00056d3a a072
.org 0x56d3c
	ldr r1, [pc, #80]	@ 00056d3c 1449
.org 0x56d3e
	adds r0, r4, #0	@ 00056d3e 201c
.org 0x56d40
	bl 0x1cf00	@ 00056d40 c6f7def8
.org 0x56d44
	movs r2, #0	@ 00056d44 0022
.org 0x56d46
	adds r0, r4, #0	@ 00056d46 201c
.org 0x56d48
	adds r0, #204	@ 00056d48 cc30
.org 0x56d4a
	ldr r0, [r0, #0]	@ 00056d4a 0068
.org 0x56d4c
	movs r1, #240	@ 00056d4c f021
.org 0x56d4e
	lsls r1, r1, #8	@ 00056d4e 0902
.org 0x56d50
	adds r0, r0, r1	@ 00056d50 4018
.org 0x56d52
	ldr r1, [r4, #84]	@ 00056d52 616d
.org 0x56d54
	cmp r1, r0	@ 00056d54 8142
.org 0x56d56
	bge.n 0x56d5a	@ 00056d56 00da
.org 0x56d58
	movs r2, #1	@ 00056d58 0122
.org 0x56d5a
	adds r5, r2, #0	@ 00056d5a 151c
.org 0x56d5c
	movs r3, #1	@ 00056d5c 0123
.org 0x56d5e
	adds r1, r5, #0	@ 00056d5e 291c
.org 0x56d60
	ands r1, r3	@ 00056d60 1940
.org 0x56d62
	adds r0, r4, #0	@ 00056d62 201c
.org 0x56d64
	adds r0, #76	@ 00056d64 4c30
.org 0x56d66
	strb r1, [r0, #0]	@ 00056d66 0170
.org 0x56d68
	movs r2, #74	@ 00056d68 4a22
.org 0x56d6a
	adds r2, r2, r4	@ 00056d6a 1219
.org 0x56d6c
	mov ip, r2	@ 00056d6c 9446
.org 0x56d6e
	lsls r1, r1, #4	@ 00056d6e 0901
.org 0x56d70
	ldrb r2, [r2, #0]	@ 00056d70 1278
.org 0x56d72
	movs r0, #17	@ 00056d72 1120
.org 0x56d74
	negs r0, r0	@ 00056d74 4042
.org 0x56d76
	ands r0, r2	@ 00056d76 1040
.org 0x56d78
	orrs r0, r1	@ 00056d78 0843
.org 0x56d7a
	mov r1, ip	@ 00056d7a 6146
.org 0x56d7c
	strb r0, [r1, #0]	@ 00056d7c 0870
.org 0x56d7e
	adds r0, r5, #0	@ 00056d7e 281c
.org 0x56d80
	ands r0, r3	@ 00056d80 1840
.org 0x56d82
	cmp r0, #0	@ 00056d82 0028
.org 0x56d84
	beq.n 0x56d94	@ 00056d84 06d0
.org 0x56d86
	ldrb r0, [r4, #10]	@ 00056d86 a07a
.org 0x56d88
	movs r1, #16	@ 00056d88 1021
.org 0x56d8a
	orrs r0, r1	@ 00056d8a 0843
.org 0x56d8c
	b.n 0x56d9a	@ 00056d8c 05e0
.org 0x56d8e
	.byte 0x00	@ 00056d8e data
.org 0x56d8f
	.byte 0x00	@ 00056d8f data
.org 0x56d90
	.byte 0x08,0xa0,0x00,0x00	@ 00056d90 data
.org 0x56d94
	ldrb r1, [r4, #10]	@ 00056d94 a17a
.org 0x56d96
	movs r0, #239	@ 00056d96 ef20
.org 0x56d98
	ands r0, r1	@ 00056d98 0840
.org 0x56d9a
	strb r0, [r4, #10]	@ 00056d9a a072
.org 0x56d9c
	adds r0, r4, #0	@ 00056d9c 201c
.org 0x56d9e
	adds r0, #184	@ 00056d9e b830
.org 0x56da0
	ldr r2, [r0, #0]	@ 00056da0 0268
.org 0x56da2
	adds r0, #4	@ 00056da2 0430
.org 0x56da4
	str r2, [r0, #0]	@ 00056da4 0260
.org 0x56da6
	ldr r1, [pc, #128]	@ 00056da6 2049
.org 0x56da8
	subs r0, #7	@ 00056da8 0738
.org 0x56daa
	ldrb r0, [r0, #0]	@ 00056daa 0078
.org 0x56dac
	lsls r0, r0, #1	@ 00056dac 4000
.org 0x56dae
	adds r0, r0, r1	@ 00056dae 4018
.org 0x56db0
	movs r1, #0	@ 00056db0 0021
.org 0x56db2
	ldrsh r0, [r0, r1]	@ 00056db2 405e
.org 0x56db4
	lsls r0, r0, #1	@ 00056db4 4000
.org 0x56db6
	adds r0, r2, r0	@ 00056db6 1018
.org 0x56db8
	str r0, [r4, #88]	@ 00056db8 a065
.org 0x56dba
	lsls r1, r5, #1	@ 00056dba 6900
.org 0x56dbc
	subs r1, #1	@ 00056dbc 0139
.org 0x56dbe
	lsls r0, r1, #1	@ 00056dbe 4800
.org 0x56dc0
	adds r0, r0, r1	@ 00056dc0 4018
.org 0x56dc2
	lsls r0, r0, #8	@ 00056dc2 0002
.org 0x56dc4
	str r0, [r4, #92]	@ 00056dc4 e065
.org 0x56dc6
	ldrb r0, [r4, #15]	@ 00056dc6 e07b
.org 0x56dc8
	adds r0, #1	@ 00056dc8 0130
.org 0x56dca
	strb r0, [r4, #15]	@ 00056dca e073
.org 0x56dcc
	adds r0, r4, #0	@ 00056dcc 201c
.org 0x56dce
	bl 0x1cff0	@ 00056dce c6f70ff9
.org 0x56dd2
	adds r0, r4, #0	@ 00056dd2 201c
.org 0x56dd4
	adds r0, #116	@ 00056dd4 7430
.org 0x56dd6
	ldr r3, [pc, #84]	@ 00056dd6 154b
.org 0x56dd8
	ldrb r1, [r4, #30]	@ 00056dd8 a17f
.org 0x56dda
	lsls r1, r1, #8	@ 00056dda 0902
.org 0x56ddc
	adds r2, r4, #0	@ 00056ddc 221c
.org 0x56dde
	adds r2, #112	@ 00056dde 7032
.org 0x56de0
	ldrb r2, [r2, #0]	@ 00056de0 1278
.org 0x56de2
	orrs r1, r2	@ 00056de2 1143
.org 0x56de4
	ldr r2, [pc, #72]	@ 00056de4 124a
.org 0x56de6
	adds r1, r1, r2	@ 00056de6 8918
.org 0x56de8
	lsls r1, r1, #2	@ 00056de8 8900
.org 0x56dea
	adds r1, r1, r3	@ 00056dea c918
.org 0x56dec
	adds r2, r4, #0	@ 00056dec 221c
.org 0x56dee
	adds r2, #113	@ 00056dee 7132
.org 0x56df0
	ldrb r2, [r2, #0]	@ 00056df0 1278
.org 0x56df2
	lsls r2, r2, #24	@ 00056df2 1206
.org 0x56df4
	asrs r2, r2, #24	@ 00056df4 1216
.org 0x56df6
	ldr r1, [r1, #0]	@ 00056df6 0968
.org 0x56df8
	lsls r2, r2, #2	@ 00056df8 9200
.org 0x56dfa
	adds r2, r2, r1	@ 00056dfa 5218
.org 0x56dfc
	ldr r1, [r2, #0]	@ 00056dfc 1168
.org 0x56dfe
	ldrb r2, [r1, #0]	@ 00056dfe 0a78
.org 0x56e00
	lsls r1, r2, #1	@ 00056e00 5100
.org 0x56e02
	adds r1, r1, r2	@ 00056e02 8918
.org 0x56e04
	lsls r1, r1, #3	@ 00056e04 c900
.org 0x56e06
	ldr r2, [pc, #44]	@ 00056e06 0b4a
.org 0x56e08
	adds r1, r1, r2	@ 00056e08 8918
.org 0x56e0a
	bl 0x5784	@ 00056e0a aef7bbfc
.org 0x56e0e
	adds r0, r4, #0	@ 00056e0e 201c
.org 0x56e10
	bl 0x597ac	@ 00056e10 02f0ccfc
.org 0x56e14
	adds r3, r0, #0	@ 00056e14 031c
.org 0x56e16
	cmp r3, #0	@ 00056e16 002b
.org 0x56e18
	beq.n 0x56e38	@ 00056e18 0ed0
.org 0x56e1a
	movs r1, #0	@ 00056e1a 0021
.org 0x56e1c
	movs r0, #4	@ 00056e1c 0420
.org 0x56e1e
	strb r0, [r4, #13]	@ 00056e1e 6073
.org 0x56e20
	strb r1, [r4, #14]	@ 00056e20 a173
.org 0x56e22
	strb r1, [r4, #15]	@ 00056e22 e173
.org 0x56e24
	b.n 0x56e5a	@ 00056e24 19e0
.org 0x56e26
	.byte 0x00	@ 00056e26 data
.org 0x56e27
	.byte 0x00	@ 00056e27 data
.org 0x56e28
	.byte 0x0c,0x93,0x12,0x08	@ 00056e28 data
.org 0x56e2c
	.byte 0x1c,0x87,0x85,0x08	@ 00056e2c data
.org 0x56e30
	.byte 0x00,0x60,0xff,0xff	@ 00056e30 data
.org 0x56e34
	.byte 0xcc,0x84,0x85,0x08	@ 00056e34 data
.org 0x56e38
	ldr r2, [r4, #84]	@ 00056e38 626d
.org 0x56e3a
	ldr r0, [r4, #92]	@ 00056e3a e06d
.org 0x56e3c
	adds r2, r2, r0	@ 00056e3c 1218
.org 0x56e3e
	str r2, [r4, #84]	@ 00056e3e 6265
.org 0x56e40
	adds r0, r4, #0	@ 00056e40 201c
.org 0x56e42
	adds r0, #204	@ 00056e42 cc30
.org 0x56e44
	ldr r0, [r0, #0]	@ 00056e44 0068
.org 0x56e46
	subs r0, r2, r0	@ 00056e46 101a
