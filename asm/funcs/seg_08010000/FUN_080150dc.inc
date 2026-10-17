@ FUN_080150dc  entry 0x080150dc  size 872
.thumb
.org 0x150dc
FUN_080150dc:
	push {r4, r5, r6, r7, lr}	@ 000150dc f0b5
.org 0x150de
	mov r7, sl	@ 000150de 5746
.org 0x150e0
	mov r6, r9	@ 000150e0 4e46
.org 0x150e2
	mov r5, r8	@ 000150e2 4546
.org 0x150e4
	push {r5, r6, r7}	@ 000150e4 e0b4
.org 0x150e6
	ldr r6, [pc, #488]	@ 000150e6 7a4e
.org 0x150e8
	ldr r1, [pc, #488]	@ 000150e8 7a49
.org 0x150ea
	adds r0, r6, r1	@ 000150ea 7018
.org 0x150ec
	ldrb r1, [r0, #0]	@ 000150ec 0178
.org 0x150ee
	movs r0, #15	@ 000150ee 0f20
.org 0x150f0
	ands r0, r1	@ 000150f0 0840
.org 0x150f2
	cmp r0, #1	@ 000150f2 0128
.org 0x150f4
	beq.n 0x150f8	@ 000150f4 00d0
.org 0x150f6
	b.n 0x1539c	@ 000150f6 51e1
.org 0x150f8
	ldr r2, [pc, #476]	@ 000150f8 774a
.org 0x150fa
	adds r0, r6, r2	@ 000150fa b018
.org 0x150fc
	ldrh r1, [r0, #0]	@ 000150fc 0188
.org 0x150fe
	lsrs r0, r1, #8	@ 000150fe 080a
.org 0x15100
	cmp r0, #9	@ 00015100 0928
.org 0x15102
	bne.n 0x15150	@ 00015102 25d1
.org 0x15104
	movs r0, #255	@ 00015104 ff20
.org 0x15106
	ands r0, r1	@ 00015106 0840
.org 0x15108
	cmp r0, #0	@ 00015108 0028
.org 0x1510a
	bne.n 0x15150	@ 0001510a 21d1
.org 0x1510c
	ldr r0, [pc, #460]	@ 0001510c 7348
.org 0x1510e
	mov r8, r0	@ 0001510e 8046
.org 0x15110
	ldr r1, [pc, #460]	@ 00015110 7349
.org 0x15112
	adds r6, r6, r1	@ 00015112 7618
.org 0x15114
	ldrb r0, [r6, #0]	@ 00015114 3078
.org 0x15116
	lsrs r0, r0, #1	@ 00015116 4008
.org 0x15118
	movs r5, #3	@ 00015118 0325
.org 0x1511a
	ands r0, r5	@ 0001511a 2840
.org 0x1511c
	lsls r1, r0, #2	@ 0001511c 8100
.org 0x1511e
	adds r1, r1, r0	@ 0001511e 0918
.org 0x15120
	lsls r1, r1, #2	@ 00015120 8900
.org 0x15122
	ldr r4, [pc, #448]	@ 00015122 704c
.org 0x15124
	adds r1, r1, r4	@ 00015124 0919
.org 0x15126
	mov r2, r8	@ 00015126 4246
.org 0x15128
	ldr r0, [r2, #0]	@ 00015128 1068
.org 0x1512a
	adds r0, r0, r1	@ 0001512a 4018
.org 0x1512c
	movs r1, #128	@ 0001512c 8021
.org 0x1512e
	lsls r1, r1, #7	@ 0001512e c901
.org 0x15130
	bl 0x1ea4	@ 00015130 ecf7b8fe
.org 0x15134
	ldrb r0, [r6, #0]	@ 00015134 3078
.org 0x15136
	lsrs r0, r0, #1	@ 00015136 4008
.org 0x15138
	ands r0, r5	@ 00015138 2840
.org 0x1513a
	lsls r1, r0, #2	@ 0001513a 8100
.org 0x1513c
	adds r1, r1, r0	@ 0001513c 0918
.org 0x1513e
	lsls r1, r1, #2	@ 0001513e 8900
.org 0x15140
	adds r1, r1, r4	@ 00015140 0919
.org 0x15142
	mov r2, r8	@ 00015142 4246
.org 0x15144
	ldr r0, [r2, #0]	@ 00015144 1068
.org 0x15146
	adds r0, r0, r1	@ 00015146 4018
.org 0x15148
	adds r0, #12	@ 00015148 0c30
.org 0x1514a
	movs r1, #0	@ 0001514a 0021
.org 0x1514c
	bl 0x2208	@ 0001514c edf75cf8
.org 0x15150
	ldr r7, [pc, #380]	@ 00015150 5f4f
.org 0x15152
	ldr r0, [pc, #404]	@ 00015152 6548
.org 0x15154
	adds r0, r0, r7	@ 00015154 c019
.org 0x15156
	mov r9, r0	@ 00015156 8146
.org 0x15158
	ldrh r1, [r0, #0]	@ 00015158 0188
.org 0x1515a
	lsrs r0, r1, #8	@ 0001515a 080a
.org 0x1515c
	cmp r0, #9	@ 0001515c 0928
.org 0x1515e
	beq.n 0x15162	@ 0001515e 00d0
.org 0x15160
	b.n 0x1548c	@ 00015160 94e1
.org 0x15162
	movs r2, #255	@ 00015162 ff22
.org 0x15164
	mov sl, r2	@ 00015164 9246
.org 0x15166
	mov r0, sl	@ 00015166 5046
.org 0x15168
	ands r0, r1	@ 00015168 0840
.org 0x1516a
	cmp r0, #2	@ 0001516a 0228
.org 0x1516c
	bne.n 0x15200	@ 0001516c 48d1
.org 0x1516e
	ldr r6, [pc, #364]	@ 0001516e 5b4e
.org 0x15170
	ldr r0, [pc, #376]	@ 00015170 5e48
.org 0x15172
	adds r4, r7, r0	@ 00015172 3c18
.org 0x15174
	ldrb r0, [r4, #0]	@ 00015174 2078
.org 0x15176
	lsrs r0, r0, #2	@ 00015176 8008
.org 0x15178
	movs r1, #3	@ 00015178 0321
.org 0x1517a
	bl 0x129198	@ 0001517a 14f10df8
.org 0x1517e
	lsls r0, r0, #24	@ 0001517e 0006
.org 0x15180
	lsrs r0, r0, #24	@ 00015180 000e
.org 0x15182
	lsls r1, r0, #2	@ 00015182 8100
.org 0x15184
	adds r1, r1, r0	@ 00015184 0918
.org 0x15186
	lsls r1, r1, #2	@ 00015186 8900
.org 0x15188
	ldr r5, [pc, #356]	@ 00015188 594d
.org 0x1518a
	adds r1, r1, r5	@ 0001518a 4919
.org 0x1518c
	ldr r0, [r6, #0]	@ 0001518c 3068
.org 0x1518e
	adds r0, r0, r1	@ 0001518e 4018
.org 0x15190
	movs r1, #128	@ 00015190 8021
.org 0x15192
	lsls r1, r1, #7	@ 00015192 c901
.org 0x15194
	mov r8, r1	@ 00015194 8846
.org 0x15196
	bl 0x1ea4	@ 00015196 ecf785fe
.org 0x1519a
	ldrb r0, [r4, #0]	@ 0001519a 2078
.org 0x1519c
	lsrs r0, r0, #2	@ 0001519c 8008
.org 0x1519e
	movs r1, #3	@ 0001519e 0321
.org 0x151a0
	bl 0x129198	@ 000151a0 13f1faff
.org 0x151a4
	lsls r0, r0, #24	@ 000151a4 0006
.org 0x151a6
	lsrs r0, r0, #24	@ 000151a6 000e
.org 0x151a8
	lsls r1, r0, #2	@ 000151a8 8100
.org 0x151aa
	adds r1, r1, r0	@ 000151aa 0918
.org 0x151ac
	lsls r1, r1, #2	@ 000151ac 8900
.org 0x151ae
	adds r1, r1, r5	@ 000151ae 4919
.org 0x151b0
	ldr r0, [r6, #0]	@ 000151b0 3068
.org 0x151b2
	adds r0, r0, r1	@ 000151b2 4018
.org 0x151b4
	adds r0, #12	@ 000151b4 0c30
.org 0x151b6
	movs r1, #0	@ 000151b6 0021
.org 0x151b8
	bl 0x2208	@ 000151b8 edf726f8
.org 0x151bc
	ldrb r0, [r4, #0]	@ 000151bc 2078
.org 0x151be
	lsrs r0, r0, #2	@ 000151be 8008
.org 0x151c0
	movs r1, #3	@ 000151c0 0321
.org 0x151c2
	bl 0x129198	@ 000151c2 13f1e9ff
.org 0x151c6
	lsls r0, r0, #24	@ 000151c6 0006
.org 0x151c8
	lsrs r0, r0, #24	@ 000151c8 000e
.org 0x151ca
	lsls r1, r0, #2	@ 000151ca 8100
.org 0x151cc
	adds r1, r1, r0	@ 000151cc 0918
.org 0x151ce
	lsls r1, r1, #2	@ 000151ce 8900
.org 0x151d0
	ldr r5, [pc, #288]	@ 000151d0 484d
.org 0x151d2
	adds r1, r1, r5	@ 000151d2 4919
.org 0x151d4
	ldr r0, [r6, #0]	@ 000151d4 3068
.org 0x151d6
	adds r0, r0, r1	@ 000151d6 4018
.org 0x151d8
	mov r1, r8	@ 000151d8 4146
.org 0x151da
	bl 0x1ea4	@ 000151da ecf763fe
.org 0x151de
	ldrb r0, [r4, #0]	@ 000151de 2078
.org 0x151e0
	lsrs r0, r0, #2	@ 000151e0 8008
.org 0x151e2
	movs r1, #3	@ 000151e2 0321
.org 0x151e4
	bl 0x129198	@ 000151e4 13f1d8ff
.org 0x151e8
	lsls r0, r0, #24	@ 000151e8 0006
.org 0x151ea
	lsrs r0, r0, #24	@ 000151ea 000e
.org 0x151ec
	lsls r1, r0, #2	@ 000151ec 8100
.org 0x151ee
	adds r1, r1, r0	@ 000151ee 0918
.org 0x151f0
	lsls r1, r1, #2	@ 000151f0 8900
.org 0x151f2
	adds r1, r1, r5	@ 000151f2 4919
.org 0x151f4
	ldr r0, [r6, #0]	@ 000151f4 3068
.org 0x151f6
	adds r0, r0, r1	@ 000151f6 4018
.org 0x151f8
	adds r0, #12	@ 000151f8 0c30
.org 0x151fa
	movs r1, #0	@ 000151fa 0021
.org 0x151fc
	bl 0x2208	@ 000151fc edf704f8
.org 0x15200
	mov r2, r9	@ 00015200 4a46
.org 0x15202
	ldrh r1, [r2, #0]	@ 00015202 1188
.org 0x15204
	lsrs r0, r1, #8	@ 00015204 080a
.org 0x15206
	cmp r0, #9	@ 00015206 0928
.org 0x15208
	beq.n 0x1520c	@ 00015208 00d0
.org 0x1520a
	b.n 0x1548c	@ 0001520a 3fe1
.org 0x1520c
	mov r0, sl	@ 0001520c 5046
.org 0x1520e
	ands r0, r1	@ 0001520e 0840
.org 0x15210
	cmp r0, #1	@ 00015210 0128
.org 0x15212
	bne.n 0x15264	@ 00015212 27d1
.org 0x15214
	ldr r5, [pc, #196]	@ 00015214 314d
.org 0x15216
	ldr r0, [pc, #224]	@ 00015216 3848
.org 0x15218
	adds r6, r7, r0	@ 00015218 3e18
.org 0x1521a
	ldrb r0, [r6, #0]	@ 0001521a 3078
.org 0x1521c
	lsrs r0, r0, #2	@ 0001521c 8008
.org 0x1521e
	movs r1, #3	@ 0001521e 0321
.org 0x15220
	bl 0x129198	@ 00015220 13f1baff
.org 0x15224
	lsls r0, r0, #24	@ 00015224 0006
.org 0x15226
	lsrs r0, r0, #24	@ 00015226 000e
.org 0x15228
	movs r4, #29	@ 00015228 1d24
.org 0x1522a
	subs r0, r4, r0	@ 0001522a 201a
.org 0x1522c
	lsls r1, r0, #2	@ 0001522c 8100
.org 0x1522e
	adds r1, r1, r0	@ 0001522e 0918
.org 0x15230
	lsls r1, r1, #2	@ 00015230 8900
.org 0x15232
	adds r1, r1, r5	@ 00015232 4919
.org 0x15234
	ldr r0, [r5, #0]	@ 00015234 2868
.org 0x15236
	adds r0, r0, r1	@ 00015236 4018
.org 0x15238
	movs r1, #128	@ 00015238 8021
.org 0x1523a
	lsls r1, r1, #7	@ 0001523a c901
.org 0x1523c
	bl 0x1ea4	@ 0001523c ecf732fe
.org 0x15240
	ldrb r0, [r6, #0]	@ 00015240 3078
.org 0x15242
	lsrs r0, r0, #2	@ 00015242 8008
.org 0x15244
	movs r1, #3	@ 00015244 0321
.org 0x15246
	bl 0x129198	@ 00015246 13f1a7ff
.org 0x1524a
	lsls r0, r0, #24	@ 0001524a 0006
.org 0x1524c
	lsrs r0, r0, #24	@ 0001524c 000e
.org 0x1524e
	subs r4, r4, r0	@ 0001524e 241a
.org 0x15250
	lsls r1, r4, #2	@ 00015250 a100
.org 0x15252
	adds r1, r1, r4	@ 00015252 0919
.org 0x15254
	lsls r1, r1, #2	@ 00015254 8900
.org 0x15256
	adds r1, r1, r5	@ 00015256 4919
.org 0x15258
	ldr r0, [r5, #0]	@ 00015258 2868
.org 0x1525a
	adds r0, r0, r1	@ 0001525a 4018
.org 0x1525c
	adds r0, #12	@ 0001525c 0c30
.org 0x1525e
	movs r1, #0	@ 0001525e 0021
.org 0x15260
	bl 0x2208	@ 00015260 ecf7d2ff
.org 0x15264
	mov r2, r9	@ 00015264 4a46
.org 0x15266
	ldrh r1, [r2, #0]	@ 00015266 1188
.org 0x15268
	lsrs r0, r1, #8	@ 00015268 080a
.org 0x1526a
	cmp r0, #9	@ 0001526a 0928
.org 0x1526c
	beq.n 0x15270	@ 0001526c 00d0
.org 0x1526e
	b.n 0x1548c	@ 0001526e 0de1
.org 0x15270
	mov r0, sl	@ 00015270 5046
.org 0x15272
	ands r0, r1	@ 00015272 0840
.org 0x15274
	cmp r0, #4	@ 00015274 0428
.org 0x15276
	beq.n 0x1527a	@ 00015276 00d0
.org 0x15278
	b.n 0x1548c	@ 00015278 08e1
.org 0x1527a
	ldr r0, [pc, #128]	@ 0001527a 2048
.org 0x1527c
	adds r7, r7, r0	@ 0001527c 3f18
.org 0x1527e
	ldrb r0, [r7, #0]	@ 0001527e 3878
.org 0x15280
	cmp r0, #95	@ 00015280 5f28
.org 0x15282
	bls.n 0x15308	@ 00015282 41d9
.org 0x15284
	ldr r6, [pc, #84]	@ 00015284 154e
.org 0x15286
	ldr r5, [pc, #120]	@ 00015286 1e4d
.org 0x15288
	subs r0, #96	@ 00015288 6038
.org 0x1528a
	movs r1, #3	@ 0001528a 0321
.org 0x1528c
	bl 0x128fb8	@ 0001528c 13f194fe
.org 0x15290
	adds r0, r0, r5	@ 00015290 4019
.org 0x15292
	ldrb r0, [r0, #0]	@ 00015292 0078
.org 0x15294
	lsls r1, r0, #2	@ 00015294 8100
.org 0x15296
	adds r1, r1, r0	@ 00015296 0918
.org 0x15298
	lsls r1, r1, #2	@ 00015298 8900
.org 0x1529a
	ldr r4, [pc, #104]	@ 0001529a 1a4c
.org 0x1529c
	adds r1, r1, r4	@ 0001529c 0919
.org 0x1529e
	ldr r0, [r6, #0]	@ 0001529e 3068
.org 0x152a0
	adds r0, r0, r1	@ 000152a0 4018
.org 0x152a2
	movs r1, #128	@ 000152a2 8021
.org 0x152a4
	lsls r1, r1, #7	@ 000152a4 c901
.org 0x152a6
	bl 0x1ea4	@ 000152a6 ecf7fdfd
.org 0x152aa
	ldrb r0, [r7, #0]	@ 000152aa 3878
.org 0x152ac
	subs r0, #96	@ 000152ac 6038
.org 0x152ae
	movs r1, #3	@ 000152ae 0321
.org 0x152b0
	bl 0x128fb8	@ 000152b0 13f182fe
.org 0x152b4
	adds r0, r0, r5	@ 000152b4 4019
.org 0x152b6
	ldrb r0, [r0, #0]	@ 000152b6 0078
.org 0x152b8
	lsls r1, r0, #2	@ 000152b8 8100
.org 0x152ba
	adds r1, r1, r0	@ 000152ba 0918
.org 0x152bc
	lsls r1, r1, #2	@ 000152bc 8900
.org 0x152be
	adds r1, r1, r4	@ 000152be 0919
.org 0x152c0
	ldr r0, [r6, #0]	@ 000152c0 3068
.org 0x152c2
	adds r0, r0, r1	@ 000152c2 4018
.org 0x152c4
	adds r0, #12	@ 000152c4 0c30
.org 0x152c6
	movs r1, #0	@ 000152c6 0021
.org 0x152c8
	bl 0x2208	@ 000152c8 ecf79eff
.org 0x152cc
	b.n 0x15324	@ 000152cc 2ae0
.org 0x152ce
	.byte 0x00	@ 000152ce data
.org 0x152cf
	.byte 0x00	@ 000152cf data
.org 0x152d0
	.byte 0xb0,0x0a,0x00,0x02	@ 000152d0 data
.org 0x152d4
	.byte 0x10,0xc0,0x02,0x00	@ 000152d4 data
.org 0x152d8
	.byte 0xd4,0x07,0x00,0x00	@ 000152d8 data
.org 0x152dc
	.byte 0x48,0x20,0xdf,0x08	@ 000152dc data
.org 0x152e0
	.byte 0x2c,0xd0,0x02,0x00	@ 000152e0 data
.org 0x152e4
	.byte 0xd8,0x21,0xdf,0x08	@ 000152e4 data
.org 0x152e8
	.byte 0xd6,0x07,0x00,0x00	@ 000152e8 data
.org 0x152ec
	.byte 0x2d,0xd0,0x02,0x00	@ 000152ec data
.org 0x152f0
	.byte 0x28,0x22,0xdf,0x08	@ 000152f0 data
.org 0x152f4
	.byte 0x68,0x23,0xdf,0x08	@ 000152f4 data
.org 0x152f8
	.byte 0x2e,0xd0,0x02,0x00	@ 000152f8 data
.org 0x152fc
	.byte 0x2f,0xd0,0x02,0x00	@ 000152fc data
.org 0x15300
	.byte 0x5c,0x5a,0x83,0x08	@ 00015300 data
.org 0x15304
	.byte 0xb4,0x22,0xdf,0x08	@ 00015304 data
.org 0x15308
	ldr r4, [pc, #116]	@ 00015308 1d4c
.org 0x1530a
	ldr r0, [r4, #0]	@ 0001530a 2068
.org 0x1530c
	ldr r1, [pc, #116]	@ 0001530c 1d49
.org 0x1530e
	adds r0, r0, r1	@ 0001530e 4018
.org 0x15310
	movs r1, #128	@ 00015310 8021
.org 0x15312
	lsls r1, r1, #7	@ 00015312 c901
.org 0x15314
	bl 0x1ea4	@ 00015314 ecf7c6fd
.org 0x15318
	ldr r0, [r4, #0]	@ 00015318 2068
.org 0x1531a
	ldr r2, [pc, #108]	@ 0001531a 1b4a
.org 0x1531c
	adds r0, r0, r2	@ 0001531c 8018
.org 0x1531e
	movs r1, #0	@ 0001531e 0021
.org 0x15320
	bl 0x2208	@ 00015320 ecf772ff
.org 0x15324
	ldr r0, [pc, #88]	@ 00015324 1648
.org 0x15326
	mov r8, r0	@ 00015326 8046
.org 0x15328
	ldr r6, [pc, #96]	@ 00015328 184e
.org 0x1532a
	ldr r4, [pc, #100]	@ 0001532a 194c
.org 0x1532c
	ldr r1, [pc, #100]	@ 0001532c 1949
.org 0x1532e
	adds r4, r4, r1	@ 0001532e 6418
.org 0x15330
	ldrb r0, [r4, #0]	@ 00015330 2078
.org 0x15332
	movs r1, #3	@ 00015332 0321
.org 0x15334
	bl 0x129120	@ 00015334 13f1f4fe
.org 0x15338
	lsls r0, r0, #24	@ 00015338 0006
.org 0x1533a
	lsrs r0, r0, #24	@ 0001533a 000e
.org 0x1533c
	adds r0, r0, r6	@ 0001533c 8019
.org 0x1533e
	ldrb r0, [r0, #0]	@ 0001533e 0078
.org 0x15340
	lsls r1, r0, #2	@ 00015340 8100
.org 0x15342
	adds r1, r1, r0	@ 00015342 0918
.org 0x15344
	lsls r1, r1, #2	@ 00015344 8900
.org 0x15346
	ldr r5, [pc, #80]	@ 00015346 144d
.org 0x15348
	adds r1, r1, r5	@ 00015348 4919
.org 0x1534a
	mov r2, r8	@ 0001534a 4246
.org 0x1534c
	ldr r0, [r2, #0]	@ 0001534c 1068
.org 0x1534e
	adds r0, r0, r1	@ 0001534e 4018
.org 0x15350
	movs r1, #128	@ 00015350 8021
.org 0x15352
	lsls r1, r1, #7	@ 00015352 c901
.org 0x15354
	bl 0x1ea4	@ 00015354 ecf7a6fd
.org 0x15358
	ldrb r0, [r4, #0]	@ 00015358 2078
.org 0x1535a
	movs r1, #3	@ 0001535a 0321
.org 0x1535c
	bl 0x129120	@ 0001535c 13f1e0fe
.org 0x15360
	lsls r0, r0, #24	@ 00015360 0006
.org 0x15362
	lsrs r0, r0, #24	@ 00015362 000e
.org 0x15364
	adds r0, r0, r6	@ 00015364 8019
.org 0x15366
	ldrb r0, [r0, #0]	@ 00015366 0078
.org 0x15368
	lsls r1, r0, #2	@ 00015368 8100
.org 0x1536a
	adds r1, r1, r0	@ 0001536a 0918
.org 0x1536c
	lsls r1, r1, #2	@ 0001536c 8900
.org 0x1536e
	adds r1, r1, r5	@ 0001536e 4919
.org 0x15370
	mov r2, r8	@ 00015370 4246
.org 0x15372
	ldr r0, [r2, #0]	@ 00015372 1068
.org 0x15374
	adds r0, r0, r1	@ 00015374 4018
.org 0x15376
	adds r0, #12	@ 00015376 0c30
.org 0x15378
	movs r1, #0	@ 00015378 0021
.org 0x1537a
	bl 0x2208	@ 0001537a ecf745ff
.org 0x1537e
	b.n 0x1548c	@ 0001537e 85e0
.org 0x15380
	.byte 0x48,0x20,0xdf,0x08	@ 00015380 data
.org 0x15384
	.byte 0xb4,0x22,0xdf,0x08	@ 00015384 data
.org 0x15388
	.byte 0xc0,0x22,0xdf,0x08	@ 00015388 data
.org 0x1538c
	.byte 0x66,0x5a,0x83,0x08	@ 0001538c data
.org 0x15390
	.byte 0xb0,0x0a,0x00,0x02	@ 00015390 data
.org 0x15394
	.byte 0x30,0xd0,0x02,0x00	@ 00015394 data
.org 0x15398
	.byte 0x18,0x23,0xdf,0x08	@ 00015398 data
.org 0x1539c
	ldr r1, [pc, #252]	@ 0001539c 3f49
.org 0x1539e
	adds r0, r6, r1	@ 0001539e 7018
.org 0x153a0
	ldrh r6, [r0, #0]	@ 000153a0 0688
.org 0x153a2
	lsrs r0, r6, #8	@ 000153a2 300a
.org 0x153a4
	cmp r0, #9	@ 000153a4 0928
.org 0x153a6
	bne.n 0x153cc	@ 000153a6 11d1
.org 0x153a8
	movs r0, #255	@ 000153a8 ff20
.org 0x153aa
	ands r0, r6	@ 000153aa 3040
.org 0x153ac
	cmp r0, #0	@ 000153ac 0028
.org 0x153ae
	bne.n 0x153cc	@ 000153ae 0dd1
.org 0x153b0
	ldr r4, [pc, #236]	@ 000153b0 3b4c
.org 0x153b2
	ldr r0, [r4, #0]	@ 000153b2 2068
.org 0x153b4
	ldr r2, [pc, #236]	@ 000153b4 3b4a
.org 0x153b6
	adds r0, r0, r2	@ 000153b6 8018
.org 0x153b8
	movs r1, #128	@ 000153b8 8021
.org 0x153ba
	lsls r1, r1, #7	@ 000153ba c901
.org 0x153bc
	bl 0x1ea4	@ 000153bc ecf772fd
.org 0x153c0
	ldr r0, [r4, #0]	@ 000153c0 2068
.org 0x153c2
	ldr r1, [pc, #228]	@ 000153c2 3949
.org 0x153c4
	adds r0, r0, r1	@ 000153c4 4018
.org 0x153c6
	movs r1, #0	@ 000153c6 0021
.org 0x153c8
	bl 0x2208	@ 000153c8 ecf71eff
.org 0x153cc
	ldr r0, [pc, #220]	@ 000153cc 3748
.org 0x153ce
	ldr r2, [pc, #224]	@ 000153ce 384a
.org 0x153d0
	adds r6, r0, r2	@ 000153d0 8618
.org 0x153d2
	ldrh r1, [r6, #0]	@ 000153d2 3188
.org 0x153d4
	lsrs r0, r1, #8	@ 000153d4 080a
.org 0x153d6
	cmp r0, #9	@ 000153d6 0928
.org 0x153d8
	bne.n 0x1548c	@ 000153d8 58d1
.org 0x153da
	movs r7, #255	@ 000153da ff27
.org 0x153dc
	adds r0, r7, #0	@ 000153dc 381c
.org 0x153de
	ands r0, r1	@ 000153de 0840
.org 0x153e0
	cmp r0, #2	@ 000153e0 0228
.org 0x153e2
	bne.n 0x1541a	@ 000153e2 1ad1
.org 0x153e4
	ldr r4, [pc, #184]	@ 000153e4 2e4c
.org 0x153e6
	ldr r0, [r4, #0]	@ 000153e6 2068
.org 0x153e8
	ldr r1, [pc, #200]	@ 000153e8 3249
.org 0x153ea
	adds r0, r0, r1	@ 000153ea 4018
.org 0x153ec
	movs r5, #128	@ 000153ec 8025
.org 0x153ee
	lsls r5, r5, #7	@ 000153ee ed01
.org 0x153f0
	adds r1, r5, #0	@ 000153f0 291c
.org 0x153f2
	bl 0x1ea4	@ 000153f2 ecf757fd
.org 0x153f6
	ldr r0, [r4, #0]	@ 000153f6 2068
.org 0x153f8
	ldr r2, [pc, #188]	@ 000153f8 2f4a
.org 0x153fa
	adds r0, r0, r2	@ 000153fa 8018
.org 0x153fc
	movs r1, #0	@ 000153fc 0021
.org 0x153fe
	bl 0x2208	@ 000153fe ecf703ff
.org 0x15402
	ldr r0, [r4, #0]	@ 00015402 2068
.org 0x15404
	ldr r1, [pc, #180]	@ 00015404 2d49
.org 0x15406
	adds r0, r0, r1	@ 00015406 4018
.org 0x15408
	adds r1, r5, #0	@ 00015408 291c
.org 0x1540a
	bl 0x1ea4	@ 0001540a ecf74bfd
.org 0x1540e
	ldr r0, [r4, #0]	@ 0001540e 2068
.org 0x15410
	ldr r2, [pc, #172]	@ 00015410 2b4a
.org 0x15412
	adds r0, r0, r2	@ 00015412 8018
.org 0x15414
	movs r1, #0	@ 00015414 0021
.org 0x15416
	bl 0x2208	@ 00015416 ecf7f7fe
.org 0x1541a
	ldrh r1, [r6, #0]	@ 0001541a 3188
.org 0x1541c
	lsrs r0, r1, #8	@ 0001541c 080a
.org 0x1541e
	cmp r0, #9	@ 0001541e 0928
.org 0x15420
	bne.n 0x1548c	@ 00015420 34d1
.org 0x15422
	adds r0, r7, #0	@ 00015422 381c
.org 0x15424
	ands r0, r1	@ 00015424 0840
.org 0x15426
	cmp r0, #1	@ 00015426 0128
.org 0x15428
	bne.n 0x15446	@ 00015428 0dd1
.org 0x1542a
	ldr r4, [pc, #116]	@ 0001542a 1d4c
.org 0x1542c
	ldr r0, [r4, #0]	@ 0001542c 2068
.org 0x1542e
	ldr r1, [pc, #148]	@ 0001542e 2549
.org 0x15430
	adds r0, r0, r1	@ 00015430 4018
.org 0x15432
	movs r1, #128	@ 00015432 8021
.org 0x15434
	lsls r1, r1, #7	@ 00015434 c901
.org 0x15436
	bl 0x1ea4	@ 00015436 ecf735fd
.org 0x1543a
	ldr r0, [r4, #0]	@ 0001543a 2068
.org 0x1543c
	ldr r2, [pc, #136]	@ 0001543c 224a
.org 0x1543e
	adds r0, r0, r2	@ 0001543e 8018
.org 0x15440
	movs r1, #0	@ 00015440 0021
.org 0x15442
	bl 0x2208	@ 00015442 ecf7e1fe
