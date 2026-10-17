@ FUN_080600e0  entry 0x080600e0  size 338
.thumb
.org 0x600e0
FUN_080600e0:
	push {r4, r5, r6, lr}	@ 000600e0 70b5
.org 0x600e2
	adds r4, r0, #0	@ 000600e2 041c
.org 0x600e4
	ldrb r5, [r4, #14]	@ 000600e4 a57b
.org 0x600e6
	cmp r5, #0	@ 000600e6 002d
.org 0x600e8
	bne.n 0x60106	@ 000600e8 0dd1
.org 0x600ea
	ldr r1, [pc, #44]	@ 000600ea 0b49
.org 0x600ec
	bl 0x1cf00	@ 000600ec bcf708ff
.org 0x600f0
	ldr r0, [r4, #92]	@ 000600f0 e06d
.org 0x600f2
	cmp r0, #0	@ 000600f2 0028
.org 0x600f4
	bge.n 0x600f8	@ 000600f4 00da
.org 0x600f6
	adds r0, #15	@ 000600f6 0f30
.org 0x600f8
	asrs r0, r0, #4	@ 000600f8 0011
.org 0x600fa
	str r0, [r4, #100]	@ 000600fa 6066
.org 0x600fc
	strb r5, [r4, #18]	@ 000600fc a574
.org 0x600fe
	strb r5, [r4, #15]	@ 000600fe e573
.org 0x60100
	ldrb r0, [r4, #14]	@ 00060100 a07b
.org 0x60102
	adds r0, #1	@ 00060102 0130
.org 0x60104
	strb r0, [r4, #14]	@ 00060104 a073
.org 0x60106
	ldrb r3, [r4, #15]	@ 00060106 e37b
.org 0x60108
	cmp r3, #1	@ 00060108 012b
.org 0x6010a
	beq.n 0x601c8	@ 0006010a 5dd0
.org 0x6010c
	cmp r3, #1	@ 0006010c 012b
.org 0x6010e
	bgt.n 0x6011c	@ 0006010e 05dc
.org 0x60110
	cmp r3, #0	@ 00060110 002b
.org 0x60112
	beq.n 0x60124	@ 00060112 07d0
.org 0x60114
	b.n 0x60242	@ 00060114 95e0
.org 0x60116
	.byte 0x00	@ 00060116 data
.org 0x60117
	.byte 0x00	@ 00060117 data
.org 0x60118
	.byte 0x07,0xa5,0x00,0x00	@ 00060118 data
.org 0x6011c
	cmp r3, #2	@ 0006011c 022b
.org 0x6011e
	bne.n 0x60122	@ 0006011e 00d1
.org 0x60120
	b.n 0x60230	@ 00060120 86e0
.org 0x60122
	b.n 0x60242	@ 00060122 8ee0
.org 0x60124
	ldrb r0, [r4, #18]	@ 00060124 a07c
.org 0x60126
	adds r0, #1	@ 00060126 0130
.org 0x60128
	strb r0, [r4, #18]	@ 00060128 a074
.org 0x6012a
	movs r1, #255	@ 0006012a ff21
.org 0x6012c
	ands r0, r1	@ 0006012c 0840
.org 0x6012e
	movs r1, #1	@ 0006012e 0121
.org 0x60130
	ands r0, r1	@ 00060130 0840
.org 0x60132
	cmp r0, #0	@ 00060132 0028
.org 0x60134
	beq.n 0x6013e	@ 00060134 03d0
.org 0x60136
	ldrb r1, [r4, #10]	@ 00060136 a17a
.org 0x60138
	movs r0, #254	@ 00060138 fe20
.org 0x6013a
	ands r0, r1	@ 0006013a 0840
.org 0x6013c
	b.n 0x60142	@ 0006013c 01e0
.org 0x6013e
	ldrb r0, [r4, #10]	@ 0006013e a07a
.org 0x60140
	orrs r0, r1	@ 00060140 0843
.org 0x60142
	strb r0, [r4, #10]	@ 00060142 a072
.org 0x60144
	ldr r0, [r4, #84]	@ 00060144 606d
.org 0x60146
	ldr r1, [r4, #92]	@ 00060146 e16d
.org 0x60148
	adds r0, r0, r1	@ 00060148 4018
.org 0x6014a
	str r0, [r4, #84]	@ 0006014a 6065
.org 0x6014c
	ldr r0, [r4, #100]	@ 0006014c 606e
.org 0x6014e
	subs r1, r1, r0	@ 0006014e 091a
.org 0x60150
	str r1, [r4, #92]	@ 00060150 e165
.org 0x60152
	adds r0, r4, #0	@ 00060152 201c
.org 0x60154
	adds r0, #115	@ 00060154 7330
.org 0x60156
	ldrb r0, [r0, #0]	@ 00060156 0078
.org 0x60158
	cmp r0, #3	@ 00060158 0328
.org 0x6015a
	bne.n 0x60242	@ 0006015a 72d1
.org 0x6015c
	ldrb r1, [r4, #10]	@ 0006015c a17a
.org 0x6015e
	movs r0, #1	@ 0006015e 0120
.org 0x60160
	orrs r0, r1	@ 00060160 0843
.org 0x60162
	strb r0, [r4, #10]	@ 00060162 a072
.org 0x60164
	ldr r1, [r4, #44]	@ 00060164 e16a
.org 0x60166
	cmp r1, #0	@ 00060166 0029
.org 0x60168
	beq.n 0x60172	@ 00060168 03d0
.org 0x6016a
	movs r0, #2	@ 0006016a 0220
.org 0x6016c
	strb r0, [r1, #17]	@ 0006016c 4874
.org 0x6016e
	movs r0, #0	@ 0006016e 0020
.org 0x60170
	str r0, [r4, #44]	@ 00060170 e062
.org 0x60172
	adds r0, r4, #0	@ 00060172 201c
.org 0x60174
	adds r0, #116	@ 00060174 7430
.org 0x60176
	ldr r1, [pc, #56]	@ 00060176 0e49
.org 0x60178
	bl 0x5784	@ 00060178 a5f704fb
.org 0x6017c
	ldrb r0, [r4, #10]	@ 0006017c a07a
.org 0x6017e
	lsrs r0, r0, #4	@ 0006017e 0009
.org 0x60180
	movs r5, #1	@ 00060180 0125
.org 0x60182
	adds r2, r5, #0	@ 00060182 2a1c
.org 0x60184
	bics r2, r0	@ 00060184 8243
.org 0x60186
	movs r3, #0	@ 00060186 0023
.org 0x60188
	ldr r0, [pc, #40]	@ 00060188 0a48
.org 0x6018a
	ldr r0, [r0, #0]	@ 0006018a 0068
.org 0x6018c
	ldr r1, [r4, #84]	@ 0006018c 616d
.org 0x6018e
	ldr r0, [r0, #84]	@ 0006018e 406d
.org 0x60190
	cmp r1, r0	@ 00060190 8142
.org 0x60192
	bge.n 0x60196	@ 00060192 00da
.org 0x60194
	movs r3, #1	@ 00060194 0123
.org 0x60196
	cmp r2, r3	@ 00060196 9a42
.org 0x60198
	beq.n 0x601b8	@ 00060198 0ed0
.org 0x6019a
	movs r1, #165	@ 0006019a a521
.org 0x6019c
	lsls r1, r1, #8	@ 0006019c 0902
.org 0x6019e
	adds r0, r4, #0	@ 0006019e 201c
.org 0x601a0
	bl 0x1cf00	@ 000601a0 bcf7aefe
.org 0x601a4
	strb r5, [r4, #18]	@ 000601a4 a574
.org 0x601a6
	ldrb r0, [r4, #15]	@ 000601a6 e07b
.org 0x601a8
	adds r0, #2	@ 000601a8 0230
.org 0x601aa
	strb r0, [r4, #15]	@ 000601aa e073
.org 0x601ac
	b.n 0x60242	@ 000601ac 49e0
.org 0x601ae
	.byte 0x00	@ 000601ae data
.org 0x601af
	.byte 0x00	@ 000601af data
.org 0x601b0
	.byte 0x54,0xaa,0x85,0x08	@ 000601b0 data
.org 0x601b4
	.byte 0xf0,0xdb,0x02,0x02	@ 000601b4 data
.org 0x601b8
	ldr r1, [pc, #8]	@ 000601b8 0249
.org 0x601ba
	adds r0, r4, #0	@ 000601ba 201c
.org 0x601bc
	bl 0x1cf00	@ 000601bc bcf7a0fe
.org 0x601c0
	b.n 0x60224	@ 000601c0 30e0
.org 0x601c2
	.byte 0x00	@ 000601c2 data
.org 0x601c3
	.byte 0x00	@ 000601c3 data
.org 0x601c4
	.byte 0x01,0xa5,0x00,0x00	@ 000601c4 data
.org 0x601c8
	ldrb r0, [r4, #18]	@ 000601c8 a07c
.org 0x601ca
	subs r0, #1	@ 000601ca 0138
.org 0x601cc
	strb r0, [r4, #18]	@ 000601cc a074
.org 0x601ce
	lsls r0, r0, #24	@ 000601ce 0006
.org 0x601d0
	cmp r0, #0	@ 000601d0 0028
.org 0x601d2
	bne.n 0x60242	@ 000601d2 36d1
.org 0x601d4
	movs r5, #0	@ 000601d4 0025
.org 0x601d6
	ldr r0, [pc, #64]	@ 000601d6 1048
.org 0x601d8
	ldr r2, [r0, #0]	@ 000601d8 0268
.org 0x601da
	ldr r1, [r4, #84]	@ 000601da 616d
.org 0x601dc
	ldr r0, [r2, #84]	@ 000601dc 506d
.org 0x601de
	cmp r1, r0	@ 000601de 8142
.org 0x601e0
	bge.n 0x601e4	@ 000601e0 00da
.org 0x601e2
	movs r5, #1	@ 000601e2 0125
.org 0x601e4
	adds r0, r4, #0	@ 000601e4 201c
.org 0x601e6
	adds r0, #76	@ 000601e6 4c30
.org 0x601e8
	strb r5, [r0, #0]	@ 000601e8 0570
.org 0x601ea
	movs r6, #0	@ 000601ea 0026
.org 0x601ec
	ldr r1, [r4, #84]	@ 000601ec 616d
.org 0x601ee
	ldr r0, [r2, #84]	@ 000601ee 506d
.org 0x601f0
	cmp r1, r0	@ 000601f0 8142
.org 0x601f2
	bge.n 0x601f6	@ 000601f2 00da
.org 0x601f4
	movs r6, #1	@ 000601f4 0126
.org 0x601f6
	adds r5, r4, #0	@ 000601f6 251c
.org 0x601f8
	adds r5, #74	@ 000601f8 4a35
.org 0x601fa
	ands r3, r6	@ 000601fa 3340
.org 0x601fc
	lsls r2, r3, #4	@ 000601fc 1a01
.org 0x601fe
	ldrb r1, [r5, #0]	@ 000601fe 2978
.org 0x60200
	movs r0, #17	@ 00060200 1120
.org 0x60202
	negs r0, r0	@ 00060202 4042
.org 0x60204
	ands r0, r1	@ 00060204 0840
.org 0x60206
	orrs r0, r2	@ 00060206 1043
.org 0x60208
	strb r0, [r5, #0]	@ 00060208 2870
.org 0x6020a
	cmp r3, #0	@ 0006020a 002b
.org 0x6020c
	beq.n 0x6021c	@ 0006020c 06d0
.org 0x6020e
	ldrb r0, [r4, #10]	@ 0006020e a07a
.org 0x60210
	movs r1, #16	@ 00060210 1021
.org 0x60212
	orrs r0, r1	@ 00060212 0843
.org 0x60214
	b.n 0x60222	@ 00060214 05e0
.org 0x60216
	.byte 0x00	@ 00060216 data
.org 0x60217
	.byte 0x00	@ 00060217 data
.org 0x60218
	.byte 0xf0,0xdb,0x02,0x02	@ 00060218 data
.org 0x6021c
	ldrb r1, [r4, #10]	@ 0006021c a17a
.org 0x6021e
	movs r0, #239	@ 0006021e ef20
.org 0x60220
	ands r0, r1	@ 00060220 0840
.org 0x60222
	strb r0, [r4, #10]	@ 00060222 a072
.org 0x60224
	movs r0, #2	@ 00060224 0220
.org 0x60226
	strb r0, [r4, #18]	@ 00060226 a074
.org 0x60228
	ldrb r0, [r4, #15]	@ 00060228 e07b
.org 0x6022a
	adds r0, #1	@ 0006022a 0130
.org 0x6022c
	strb r0, [r4, #15]	@ 0006022c e073
.org 0x6022e
	b.n 0x60242	@ 0006022e 08e0
.org 0x60230
	ldrb r0, [r4, #18]	@ 00060230 a07c
