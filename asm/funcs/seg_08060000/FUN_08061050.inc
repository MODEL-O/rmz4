@ FUN_08061050  entry 0x08061050  size 630
.thumb
.org 0x61050
FUN_08061050:
	push {r4, r5, r6, r7, lr}	@ 00061050 f0b5
.org 0x61052
	mov r7, sl	@ 00061052 5746
.org 0x61054
	mov r6, r9	@ 00061054 4e46
.org 0x61056
	mov r5, r8	@ 00061056 4546
.org 0x61058
	push {r5, r6, r7}	@ 00061058 e0b4
.org 0x6105a
	sub sp, #8	@ 0006105a 82b0
.org 0x6105c
	adds r5, r0, #0	@ 0006105c 051c
.org 0x6105e
	ldr r1, [pc, #308]	@ 0006105e 4d49
.org 0x61060
	ldr r0, [pc, #308]	@ 00061060 4d48
.org 0x61062
	ldr r0, [r0, #0]	@ 00061062 0068
.org 0x61064
	movs r2, #186	@ 00061064 ba22
.org 0x61066
	lsls r2, r2, #1	@ 00061066 5200
.org 0x61068
	adds r0, r0, r2	@ 00061068 8018
.org 0x6106a
	ldrb r0, [r0, #0]	@ 0006106a 0078
.org 0x6106c
	lsls r0, r0, #3	@ 0006106c c000
.org 0x6106e
	adds r0, r0, r1	@ 0006106e 4018
.org 0x61070
	ldr r1, [r0, #0]	@ 00061070 0168
.org 0x61072
	ldr r2, [r0, #4]	@ 00061072 4268
.org 0x61074
	str r1, [sp, #0]	@ 00061074 0091
.org 0x61076
	str r2, [sp, #4]	@ 00061076 0192
.org 0x61078
	ldrb r4, [r5, #14]	@ 00061078 ac7b
.org 0x6107a
	cmp r4, #0	@ 0006107a 002c
.org 0x6107c
	bne.n 0x61098	@ 0006107c 0cd1
.org 0x6107e
	ldr r1, [pc, #284]	@ 0006107e 4749
.org 0x61080
	adds r0, r5, #0	@ 00061080 281c
.org 0x61082
	bl 0x1cf00	@ 00061082 bbf73dff
.org 0x61086
	movs r0, #38	@ 00061086 2620
.org 0x61088
	strb r0, [r5, #18]	@ 00061088 a874
.org 0x6108a
	adds r0, r5, #0	@ 0006108a 281c
.org 0x6108c
	adds r0, #180	@ 0006108c b430
.org 0x6108e
	str r4, [r0, #12]	@ 0006108e c460
.org 0x61090
	strb r4, [r5, #15]	@ 00061090 ec73
.org 0x61092
	ldrb r0, [r5, #14]	@ 00061092 a87b
.org 0x61094
	adds r0, #1	@ 00061094 0130
.org 0x61096
	strb r0, [r5, #14]	@ 00061096 a873
.org 0x61098
	adds r0, r5, #0	@ 00061098 281c
.org 0x6109a
	bl 0x1cff0	@ 0006109a bbf7a9ff
.org 0x6109e
	ldrb r4, [r5, #15]	@ 0006109e ec7b
.org 0x610a0
	movs r2, #180	@ 000610a0 b422
.org 0x610a2
	adds r2, r2, r5	@ 000610a2 5219
.org 0x610a4
	mov r8, r2	@ 000610a4 9046
.org 0x610a6
	cmp r4, #0	@ 000610a6 002c
.org 0x610a8
	bne.n 0x610ea	@ 000610a8 1fd1
.org 0x610aa
	adds r0, r5, #0	@ 000610aa 281c
.org 0x610ac
	adds r0, #113	@ 000610ac 7130
.org 0x610ae
	ldrb r0, [r0, #0]	@ 000610ae 0078
.org 0x610b0
	lsls r0, r0, #24	@ 000610b0 0006
.org 0x610b2
	asrs r0, r0, #24	@ 000610b2 0016
.org 0x610b4
	cmp r0, #2	@ 000610b4 0228
.org 0x610b6
	ble.n 0x610ea	@ 000610b6 18dd
.org 0x610b8
	adds r0, r5, #0	@ 000610b8 281c
.org 0x610ba
	adds r0, #84	@ 000610ba 5430
.org 0x610bc
	movs r1, #0	@ 000610bc 0021
.org 0x610be
	movs r2, #193	@ 000610be c122
.org 0x610c0
	bl 0xdad0c	@ 000610c0 79f024fe
.org 0x610c4
	mov r1, r8	@ 000610c4 4146
.org 0x610c6
	str r0, [r1, #12]	@ 000610c6 c860
.org 0x610c8
	cmp r0, #0	@ 000610c8 0028
.org 0x610ca
	bne.n 0x610ce	@ 000610ca 00d1
.org 0x610cc
	b.n 0x612ea	@ 000610cc 0de1
.org 0x610ce
	adds r1, r0, #0	@ 000610ce 011c
.org 0x610d0
	adds r1, #116	@ 000610d0 7431
.org 0x610d2
	movs r0, #255	@ 000610d2 ff20
.org 0x610d4
	strb r0, [r1, #0]	@ 000610d4 0870
.org 0x610d6
	mov r2, r8	@ 000610d6 4246
.org 0x610d8
	ldr r0, [r2, #12]	@ 000610d8 d068
.org 0x610da
	adds r0, #117	@ 000610da 7530
.org 0x610dc
	strb r4, [r0, #0]	@ 000610dc 0470
.org 0x610de
	ldr r0, [r2, #12]	@ 000610de d068
.org 0x610e0
	adds r0, #118	@ 000610e0 7630
.org 0x610e2
	strb r4, [r0, #0]	@ 000610e2 0470
.org 0x610e4
	ldrb r0, [r5, #15]	@ 000610e4 e87b
.org 0x610e6
	adds r0, #1	@ 000610e6 0130
.org 0x610e8
	strb r0, [r5, #15]	@ 000610e8 e873
.org 0x610ea
	ldr r1, [r5, #84]	@ 000610ea 696d
.org 0x610ec
	ldr r0, [r5, #92]	@ 000610ec e86d
.org 0x610ee
	adds r2, r1, r0	@ 000610ee 0a18
.org 0x610f0
	str r2, [r5, #84]	@ 000610f0 6a65
.org 0x610f2
	ldr r0, [r5, #88]	@ 000610f2 a86d
.org 0x610f4
	ldr r1, [r5, #96]	@ 000610f4 296e
.org 0x610f6
	adds r0, r0, r1	@ 000610f6 4018
.org 0x610f8
	str r0, [r5, #88]	@ 000610f8 a865
.org 0x610fa
	adds r1, #10	@ 000610fa 0a31
.org 0x610fc
	str r1, [r5, #96]	@ 000610fc 2966
.org 0x610fe
	mov r4, r8	@ 000610fe 4446
.org 0x61100
	ldr r0, [r4, #12]	@ 00061100 e068
.org 0x61102
	cmp r0, #0	@ 00061102 0028
.org 0x61104
	bne.n 0x61108	@ 00061104 00d1
.org 0x61106
	b.n 0x612c4	@ 00061106 dde0
.org 0x61108
	adds r3, r0, #0	@ 00061108 031c
.org 0x6110a
	ldrb r1, [r5, #10]	@ 0006110a a97a
.org 0x6110c
	movs r0, #16	@ 0006110c 1020
.org 0x6110e
	ands r0, r1	@ 0006110e 0840
.org 0x61110
	cmp r0, #0	@ 00061110 0028
.org 0x61112
	beq.n 0x611d6	@ 00061112 60d0
.org 0x61114
	movs r1, #168	@ 00061114 a821
.org 0x61116
	lsls r1, r1, #5	@ 00061116 4901
.org 0x61118
	adds r0, r2, r1	@ 00061118 5018
.org 0x6111a
	str r0, [r3, #92]	@ 0006111a d865
.org 0x6111c
	ldr r0, [r5, #84]	@ 0006111c 686d
.org 0x6111e
	movs r2, #180	@ 0006111e b422
.org 0x61120
	lsls r2, r2, #5	@ 00061120 5201
.org 0x61122
	adds r0, r0, r2	@ 00061122 8018
.org 0x61124
	str r0, [r3, #124]	@ 00061124 d867
.org 0x61126
	ldr r0, [r5, #88]	@ 00061126 a86d
.org 0x61128
	ldr r4, [pc, #116]	@ 00061128 1d4c
.org 0x6112a
	adds r0, r0, r4	@ 0006112a 0019
.org 0x6112c
	str r0, [r3, #96]	@ 0006112c 1866
.org 0x6112e
	movs r0, #128	@ 0006112e 8020
.org 0x61130
	adds r0, r0, r3	@ 00061130 c018
.org 0x61132
	mov ip, r0	@ 00061132 8446
.org 0x61134
	ldr r0, [r5, #88]	@ 00061134 a86d
.org 0x61136
	ldr r1, [pc, #108]	@ 00061136 1b49
.org 0x61138
	adds r0, r0, r1	@ 00061138 4018
.org 0x6113a
	mov r2, ip	@ 0006113a 6246
.org 0x6113c
	str r0, [r2, #0]	@ 0006113c 1060
.org 0x6113e
	ldr r0, [pc, #88]	@ 0006113e 1648
.org 0x61140
	ldr r4, [r0, #0]	@ 00061140 0468
.org 0x61142
	ldr r0, [r3, #92]	@ 00061142 d86d
.org 0x61144
	mov sl, r0	@ 00061144 8246
.org 0x61146
	ldr r7, [r4, #84]	@ 00061146 676d
.org 0x61148
	subs r0, r0, r7	@ 00061148 c01b
.org 0x6114a
	ldr r1, [r3, #96]	@ 0006114a 196e
.org 0x6114c
	mov r9, r1	@ 0006114c 8946
.org 0x6114e
	subs r6, r1, r0	@ 0006114e 0e1a
.org 0x61150
	ldr r0, [pc, #84]	@ 00061150 1548
.org 0x61152
	ldrh r1, [r0, #8]	@ 00061152 0189
.org 0x61154
	movs r0, #8	@ 00061154 0820
.org 0x61156
	ands r0, r1	@ 00061156 0840
.org 0x61158
	cmp r0, #0	@ 00061158 0028
.org 0x6115a
	bne.n 0x611ac	@ 0006115a 27d1
.org 0x6115c
	ldr r2, [sp, #0]	@ 0006115c 009a
.org 0x6115e
	asrs r0, r2, #16	@ 0006115e 1014
.org 0x61160
	ldr r1, [r4, #88]	@ 00061160 a16d
.org 0x61162
	adds r2, r1, r0	@ 00061162 0a18
.org 0x61164
	ldr r0, [sp, #4]	@ 00061164 0198
.org 0x61166
	asrs r1, r0, #17	@ 00061166 4114
.org 0x61168
	adds r0, r2, r1	@ 00061168 5018
.org 0x6116a
	cmp r6, r0	@ 0006116a 8642
.org 0x6116c
	bge.n 0x611ac	@ 0006116c 1eda
.org 0x6116e
	subs r0, r2, r1	@ 0006116e 501a
.org 0x61170
	cmp r6, r0	@ 00061170 8642
.org 0x61172
	ble.n 0x611ac	@ 00061172 1bdd
.org 0x61174
	str r7, [r3, #84]	@ 00061174 5f65
.org 0x61176
	ldr r2, [r4, #84]	@ 00061176 626d
.org 0x61178
	str r2, [r3, #100]	@ 00061178 5a66
.org 0x6117a
	ldr r1, [r3, #124]	@ 0006117a d96f
.org 0x6117c
	subs r1, r1, r7	@ 0006117c c91b
.org 0x6117e
	mov r4, ip	@ 0006117e 6446
.org 0x61180
	ldr r0, [r4, #0]	@ 00061180 2068
.org 0x61182
	subs r0, r0, r1	@ 00061182 401a
.org 0x61184
	str r0, [r3, #88]	@ 00061184 9865
.org 0x61186
	mov r0, sl	@ 00061186 5046
.org 0x61188
	subs r2, r0, r2	@ 00061188 821a
.org 0x6118a
	mov r1, r9	@ 0006118a 4946
.org 0x6118c
	subs r2, r1, r2	@ 0006118c 8a1a
.org 0x6118e
	str r2, [r3, #104]	@ 0006118e 9a66
.org 0x61190
	b.n 0x61282	@ 00061190 77e0
.org 0x61192
	.byte 0x00	@ 00061192 data
.org 0x61193
	.byte 0x00	@ 00061193 data
.org 0x61194
	.byte 0x6c,0x33,0x85,0x08	@ 00061194 data
.org 0x61198
	.byte 0xf0,0xdb,0x02,0x02	@ 00061198 data
.org 0x6119c
	.byte 0x19,0xa5,0x00,0x00	@ 0006119c data
.org 0x611a0
	.byte 0x00,0xf4,0xff,0xff	@ 000611a0 data
.org 0x611a4
	.byte 0x80,0xf2,0xff,0xff	@ 000611a4 data
.org 0x611a8
	.byte 0x10,0xe9,0x02,0x02	@ 000611a8 data
.org 0x611ac
	mov r2, r8	@ 000611ac 4246
.org 0x611ae
	ldr r1, [r2, #4]	@ 000611ae 5168
.org 0x611b0
	movs r0, #128	@ 000611b0 8020
.org 0x611b2
	lsls r0, r0, #3	@ 000611b2 c000
.org 0x611b4
	adds r1, r1, r0	@ 000611b4 0918
.org 0x611b6
	str r1, [r3, #88]	@ 000611b6 9965
.org 0x611b8
	ldr r2, [r2, #4]	@ 000611b8 5268
.org 0x611ba
	adds r2, r2, r0	@ 000611ba 1218
.org 0x611bc
	str r2, [r3, #104]	@ 000611bc 9a66
.org 0x611be
	adds r0, r3, #0	@ 000611be 181c
.org 0x611c0
	adds r0, #128	@ 000611c0 8030
.org 0x611c2
	ldr r0, [r0, #0]	@ 000611c2 0068
.org 0x611c4
	subs r1, r1, r0	@ 000611c4 091a
.org 0x611c6
	ldr r0, [r3, #124]	@ 000611c6 d86f
.org 0x611c8
	adds r0, r0, r1	@ 000611c8 4018
.org 0x611ca
	str r0, [r3, #84]	@ 000611ca 5865
.org 0x611cc
	ldr r0, [r3, #96]	@ 000611cc 186e
.org 0x611ce
	subs r2, r2, r0	@ 000611ce 121a
.org 0x611d0
	ldr r0, [r3, #92]	@ 000611d0 d86d
.org 0x611d2
	adds r0, r0, r2	@ 000611d2 8018
.org 0x611d4
	b.n 0x61280	@ 000611d4 54e0
.org 0x611d6
	ldr r4, [pc, #108]	@ 000611d6 1b4c
.org 0x611d8
	adds r0, r2, r4	@ 000611d8 1019
.org 0x611da
	str r0, [r3, #92]	@ 000611da d865
.org 0x611dc
	ldr r0, [r5, #84]	@ 000611dc 686d
.org 0x611de
	ldr r1, [pc, #104]	@ 000611de 1a49
.org 0x611e0
	adds r0, r0, r1	@ 000611e0 4018
.org 0x611e2
	str r0, [r3, #124]	@ 000611e2 d867
.org 0x611e4
	ldr r0, [r5, #88]	@ 000611e4 a86d
.org 0x611e6
	ldr r2, [pc, #100]	@ 000611e6 194a
.org 0x611e8
	adds r0, r0, r2	@ 000611e8 8018
.org 0x611ea
	str r0, [r3, #96]	@ 000611ea 1866
.org 0x611ec
	movs r4, #128	@ 000611ec 8024
.org 0x611ee
	adds r4, r4, r3	@ 000611ee e418
.org 0x611f0
	mov sl, r4	@ 000611f0 a246
.org 0x611f2
	ldr r0, [r5, #88]	@ 000611f2 a86d
.org 0x611f4
	ldr r1, [pc, #88]	@ 000611f4 1649
.org 0x611f6
	adds r0, r0, r1	@ 000611f6 4018
.org 0x611f8
	str r0, [r4, #0]	@ 000611f8 2060
.org 0x611fa
	ldr r0, [pc, #88]	@ 000611fa 1648
.org 0x611fc
	ldr r2, [r0, #0]	@ 000611fc 0268
.org 0x611fe
	ldr r4, [r3, #92]	@ 000611fe dc6d
.org 0x61200
	mov r9, r4	@ 00061200 a146
.org 0x61202
	ldr r4, [r2, #84]	@ 00061202 546d
.org 0x61204
	mov r1, r9	@ 00061204 4946
.org 0x61206
	subs r0, r1, r4	@ 00061206 081b
.org 0x61208
	ldr r1, [r3, #96]	@ 00061208 196e
.org 0x6120a
	mov ip, r1	@ 0006120a 8c46
.org 0x6120c
	adds r6, r1, r0	@ 0006120c 0e18
.org 0x6120e
	ldr r0, [sp, #0]	@ 0006120e 0098
.org 0x61210
	asrs r1, r0, #16	@ 00061210 0114
.org 0x61212
	ldr r0, [r2, #88]	@ 00061212 906d
.org 0x61214
	adds r7, r0, r1	@ 00061214 4718
.org 0x61216
	ldr r0, [sp, #4]	@ 00061216 0198
.org 0x61218
	asrs r1, r0, #17	@ 00061218 4114
.org 0x6121a
	adds r0, r7, r1	@ 0006121a 7818
.org 0x6121c
	cmp r6, r0	@ 0006121c 8642
.org 0x6121e
	bge.n 0x61258	@ 0006121e 1bda
.org 0x61220
	subs r0, r7, r1	@ 00061220 781a
.org 0x61222
	cmp r6, r0	@ 00061222 8642
.org 0x61224
	ble.n 0x61258	@ 00061224 18dd
.org 0x61226
	str r4, [r3, #84]	@ 00061226 5c65
.org 0x61228
	ldr r2, [r2, #84]	@ 00061228 526d
.org 0x6122a
	str r2, [r3, #100]	@ 0006122a 5a66
.org 0x6122c
	ldr r1, [r3, #124]	@ 0006122c d96f
.org 0x6122e
	subs r1, r1, r4	@ 0006122e 091b
.org 0x61230
	mov r4, sl	@ 00061230 5446
.org 0x61232
	ldr r0, [r4, #0]	@ 00061232 2068
.org 0x61234
	adds r0, r0, r1	@ 00061234 4018
.org 0x61236
	str r0, [r3, #88]	@ 00061236 9865
.org 0x61238
	mov r0, r9	@ 00061238 4846
.org 0x6123a
	subs r2, r0, r2	@ 0006123a 821a
.org 0x6123c
	add r2, ip	@ 0006123c 6244
.org 0x6123e
	str r2, [r3, #104]	@ 0006123e 9a66
.org 0x61240
	b.n 0x61282	@ 00061240 1fe0
.org 0x61242
	.byte 0x00	@ 00061242 data
.org 0x61243
	.byte 0x00	@ 00061243 data
.org 0x61244
	.byte 0x80,0xe9,0xff,0xff	@ 00061244 data
.org 0x61248
	.byte 0x00,0xeb,0xff,0xff	@ 00061248 data
.org 0x6124c
	.byte 0x80,0xf2,0xff,0xff	@ 0006124c data
.org 0x61250
	.byte 0x00,0xf4,0xff,0xff	@ 00061250 data
.org 0x61254
	.byte 0xf0,0xdb,0x02,0x02	@ 00061254 data
.org 0x61258
	mov r2, r8	@ 00061258 4246
.org 0x6125a
	ldr r1, [r2, #4]	@ 0006125a 5168
.org 0x6125c
	movs r0, #128	@ 0006125c 8020
.org 0x6125e
	lsls r0, r0, #3	@ 0006125e c000
.org 0x61260
	adds r1, r1, r0	@ 00061260 0918
.org 0x61262
	str r1, [r3, #88]	@ 00061262 9965
.org 0x61264
	ldr r2, [r2, #4]	@ 00061264 5268
.org 0x61266
	adds r2, r2, r0	@ 00061266 1218
.org 0x61268
	str r2, [r3, #104]	@ 00061268 9a66
.org 0x6126a
	adds r0, r3, #0	@ 0006126a 181c
.org 0x6126c
	adds r0, #128	@ 0006126c 8030
.org 0x6126e
	ldr r0, [r0, #0]	@ 0006126e 0068
.org 0x61270
	subs r1, r1, r0	@ 00061270 091a
.org 0x61272
	ldr r0, [r3, #124]	@ 00061272 d86f
.org 0x61274
	subs r0, r0, r1	@ 00061274 401a
.org 0x61276
	str r0, [r3, #84]	@ 00061276 5865
.org 0x61278
	ldr r0, [r3, #96]	@ 00061278 186e
.org 0x6127a
	subs r2, r2, r0	@ 0006127a 121a
.org 0x6127c
	ldr r0, [r3, #92]	@ 0006127c d86d
.org 0x6127e
	subs r0, r0, r2	@ 0006127e 801a
.org 0x61280
	str r0, [r3, #100]	@ 00061280 5866
.org 0x61282
	ldrb r0, [r5, #18]	@ 00061282 a87c
.org 0x61284
	movs r2, #1	@ 00061284 0122
.org 0x61286
	ands r2, r0	@ 00061286 0240
.org 0x61288
	cmp r2, #0	@ 00061288 002a
.org 0x6128a
	beq.n 0x612b8	@ 0006128a 15d0
.org 0x6128c
	ldr r0, [pc, #20]	@ 0006128c 0548
.org 0x6128e
	ldrh r0, [r0, #0]	@ 0006128e 0088
.org 0x61290
	cmp r0, #11	@ 00061290 0b28
.org 0x61292
	bne.n 0x612a8	@ 00061292 09d1
.org 0x61294
	adds r1, r3, #0	@ 00061294 191c
.org 0x61296
	adds r1, #120	@ 00061296 7831
.org 0x61298
	movs r0, #57	@ 00061298 3920
.org 0x6129a
	strb r0, [r1, #0]	@ 0006129a 0870
.org 0x6129c
	adds r1, #1	@ 0006129c 0131
.org 0x6129e
	movs r0, #6	@ 0006129e 0620
.org 0x612a0
	strb r0, [r1, #0]	@ 000612a0 0870
.org 0x612a2
	b.n 0x612c4	@ 000612a2 0fe0
.org 0x612a4
	.byte 0x10,0xe9,0x02,0x02	@ 000612a4 data
.org 0x612a8
	adds r1, r3, #0	@ 000612a8 191c
.org 0x612aa
	adds r1, #120	@ 000612aa 7831
.org 0x612ac
	movs r0, #53	@ 000612ac 3520
.org 0x612ae
	strb r0, [r1, #0]	@ 000612ae 0870
.org 0x612b0
	adds r1, #1	@ 000612b0 0131
.org 0x612b2
	movs r0, #10	@ 000612b2 0a20
.org 0x612b4
	strb r0, [r1, #0]	@ 000612b4 0870
.org 0x612b6
	b.n 0x612c4	@ 000612b6 05e0
.org 0x612b8
	adds r0, r3, #0	@ 000612b8 181c
.org 0x612ba
	adds r0, #120	@ 000612ba 7830
.org 0x612bc
	movs r1, #255	@ 000612bc ff21
.org 0x612be
	strb r1, [r0, #0]	@ 000612be 0170
.org 0x612c0
	adds r0, #1	@ 000612c0 0130
.org 0x612c2
	strb r2, [r0, #0]	@ 000612c2 0270
.org 0x612c4
	ldrb r0, [r5, #18]	@ 000612c4 a87c
