@ FUN_0808612c  entry 0x0808612c  size 528
.thumb
.org 0x8612c
FUN_0808612c:
	push {r4, r5, r6, r7, lr}	@ 0008612c f0b5
.org 0x8612e
	adds r4, r0, #0	@ 0008612e 041c
.org 0x86130
	adds r0, #140	@ 00086130 8c30
.org 0x86132
	ldr r0, [r0, #0]	@ 00086132 0068
.org 0x86134
	movs r1, #1	@ 00086134 0121
.org 0x86136
	ands r0, r1	@ 00086136 0840
.org 0x86138
	cmp r0, #0	@ 00086138 0028
.org 0x8613a
	beq.n 0x86142	@ 0008613a 02d0
.org 0x8613c
	movs r0, #23	@ 0008613c 1720
.org 0x8613e
	bl 0x6984	@ 0008613e 80f721fc
.org 0x86142
	ldr r0, [r4, #40]	@ 00086142 a06a
.org 0x86144
	cmp r0, #0	@ 00086144 0028
.org 0x86146
	beq.n 0x86152	@ 00086146 04d0
.org 0x86148
	ldrb r0, [r0, #12]	@ 00086148 007b
.org 0x8614a
	cmp r0, #1	@ 0008614a 0128
.org 0x8614c
	bls.n 0x86152	@ 0008614c 01d9
.org 0x8614e
	movs r0, #0	@ 0008614e 0020
.org 0x86150
	str r0, [r4, #40]	@ 00086150 a062
.org 0x86152
	ldr r0, [pc, #40]	@ 00086152 0a48
.org 0x86154
	ldrh r1, [r0, #20]	@ 00086154 818a
.org 0x86156
	movs r0, #1	@ 00086156 0120
.org 0x86158
	ands r0, r1	@ 00086158 0840
.org 0x8615a
	cmp r0, #0	@ 0008615a 0028
.org 0x8615c
	beq.n 0x86184	@ 0008615c 12d0
.org 0x8615e
	ldr r2, [r4, #40]	@ 0008615e a26a
.org 0x86160
	cmp r2, #0	@ 00086160 002a
.org 0x86162
	bne.n 0x86184	@ 00086162 0fd1
.org 0x86164
	ldr r1, [pc, #24]	@ 00086164 0649
.org 0x86166
	ldrb r0, [r4, #9]	@ 00086166 607a
.org 0x86168
	lsls r0, r0, #2	@ 00086168 8000
.org 0x8616a
	adds r0, r0, r1	@ 0008616a 4018
.org 0x8616c
	movs r1, #2	@ 0008616c 0221
.org 0x8616e
	str r1, [r4, #12]	@ 0008616e e160
.org 0x86170
	ldr r0, [r0, #0]	@ 00086170 0068
.org 0x86172
	ldr r0, [r0, #8]	@ 00086172 8068
.org 0x86174
	str r0, [r4, #20]	@ 00086174 6061
.org 0x86176
	strb r2, [r4, #13]	@ 00086176 6273
.org 0x86178
	b.n 0x86240	@ 00086178 62e0
.org 0x8617a
	.byte 0x00	@ 0008617a data
.org 0x8617b
	.byte 0x00	@ 0008617b data
.org 0x8617c
	.byte 0x10,0xe9,0x02,0x02	@ 0008617c data
.org 0x86180
	.byte 0x40,0xdb,0x85,0x08	@ 00086180 data
.org 0x86184
	adds r0, r4, #0	@ 00086184 201c
.org 0x86186
	adds r0, #184	@ 00086186 b830
.org 0x86188
	ldrh r1, [r0, #0]	@ 00086188 0188
.org 0x8618a
	subs r1, #1	@ 0008618a 0139
.org 0x8618c
	movs r2, #0	@ 0008618c 0022
.org 0x8618e
	strh r1, [r0, #0]	@ 0008618e 0180
.org 0x86190
	lsls r0, r1, #16	@ 00086190 0804
.org 0x86192
	asrs r0, r0, #16	@ 00086192 0014
.org 0x86194
	cmp r0, #0	@ 00086194 0028
.org 0x86196
	bne.n 0x861b4	@ 00086196 0dd1
.org 0x86198
	ldr r1, [pc, #20]	@ 00086198 0549
.org 0x8619a
	ldrb r0, [r4, #9]	@ 0008619a 607a
.org 0x8619c
	lsls r0, r0, #2	@ 0008619c 8000
.org 0x8619e
	adds r0, r0, r1	@ 0008619e 4018
.org 0x861a0
	movs r1, #2	@ 000861a0 0221
.org 0x861a2
	str r1, [r4, #12]	@ 000861a2 e160
.org 0x861a4
	ldr r0, [r0, #0]	@ 000861a4 0068
.org 0x861a6
	ldr r0, [r0, #8]	@ 000861a6 8068
.org 0x861a8
	str r0, [r4, #20]	@ 000861a8 6061
.org 0x861aa
	movs r0, #3	@ 000861aa 0320
.org 0x861ac
	strb r0, [r4, #13]	@ 000861ac 6073
.org 0x861ae
	b.n 0x86240	@ 000861ae 47e0
.org 0x861b0
	.byte 0x40,0xdb,0x85,0x08	@ 000861b0 data
.org 0x861b4
	cmp r0, #59	@ 000861b4 3b28
.org 0x861b6
	bgt.n 0x861c8	@ 000861b6 07dc
.org 0x861b8
	movs r0, #1	@ 000861b8 0120
.org 0x861ba
	ands r1, r0	@ 000861ba 0140
.org 0x861bc
	cmp r1, #0	@ 000861bc 0029
.org 0x861be
	beq.n 0x861dc	@ 000861be 0dd0
.org 0x861c0
	ldrb r1, [r4, #10]	@ 000861c0 a17a
.org 0x861c2
	movs r0, #254	@ 000861c2 fe20
.org 0x861c4
	ands r0, r1	@ 000861c4 0840
.org 0x861c6
	b.n 0x861e2	@ 000861c6 0ce0
.org 0x861c8
	cmp r0, #179	@ 000861c8 b328
.org 0x861ca
	bgt.n 0x861e4	@ 000861ca 0bdc
.org 0x861cc
	movs r0, #3	@ 000861cc 0320
.org 0x861ce
	ands r1, r0	@ 000861ce 0140
.org 0x861d0
	cmp r1, #0	@ 000861d0 0029
.org 0x861d2
	bne.n 0x861dc	@ 000861d2 03d1
.org 0x861d4
	ldrb r1, [r4, #10]	@ 000861d4 a17a
.org 0x861d6
	movs r0, #254	@ 000861d6 fe20
.org 0x861d8
	ands r0, r1	@ 000861d8 0840
.org 0x861da
	b.n 0x861e2	@ 000861da 02e0
.org 0x861dc
	ldrb r1, [r4, #10]	@ 000861dc a17a
.org 0x861de
	movs r0, #1	@ 000861de 0120
.org 0x861e0
	orrs r0, r1	@ 000861e0 0843
.org 0x861e2
	strb r0, [r4, #10]	@ 000861e2 a072
.org 0x861e4
	adds r0, r4, #0	@ 000861e4 201c
.org 0x861e6
	adds r0, #183	@ 000861e6 b730
.org 0x861e8
	ldrb r0, [r0, #0]	@ 000861e8 0078
.org 0x861ea
	cmp r0, #0	@ 000861ea 0028
.org 0x861ec
	bne.n 0x861fe	@ 000861ec 07d1
.org 0x861ee
	adds r1, r4, #0	@ 000861ee 211c
.org 0x861f0
	adds r1, #140	@ 000861f0 8c31
.org 0x861f2
	ldr r5, [r1, #0]	@ 000861f2 0d68
.org 0x861f4
	movs r0, #4	@ 000861f4 0420
.org 0x861f6
	ands r5, r0	@ 000861f6 0540
.org 0x861f8
	adds r7, r1, #0	@ 000861f8 0f1c
.org 0x861fa
	cmp r5, #0	@ 000861fa 002d
.org 0x861fc
	beq.n 0x86250	@ 000861fc 28d0
.org 0x861fe
	adds r0, r4, #0	@ 000861fe 201c
.org 0x86200
	adds r0, #188	@ 00086200 bc30
.org 0x86202
	ldrb r2, [r0, #0]	@ 00086202 0278
.org 0x86204
	cmp r2, #0	@ 00086204 002a
.org 0x86206
	beq.n 0x8622c	@ 00086206 11d0
.org 0x86208
	ldr r1, [pc, #28]	@ 00086208 0749
.org 0x8620a
	ldrb r0, [r4, #9]	@ 0008620a 607a
.org 0x8620c
	lsls r0, r0, #2	@ 0008620c 8000
.org 0x8620e
	adds r0, r0, r1	@ 0008620e 4018
.org 0x86210
	movs r1, #2	@ 00086210 0221
.org 0x86212
	str r1, [r4, #12]	@ 00086212 e160
.org 0x86214
	ldr r0, [r0, #0]	@ 00086214 0068
.org 0x86216
	ldr r0, [r0, #8]	@ 00086216 8068
.org 0x86218
	str r0, [r4, #20]	@ 00086218 6061
.org 0x8621a
	movs r1, #0	@ 0008621a 0021
.org 0x8621c
	movs r0, #1	@ 0008621c 0120
.org 0x8621e
	strb r0, [r4, #13]	@ 0008621e 6073
.org 0x86220
	strb r1, [r4, #14]	@ 00086220 a173
.org 0x86222
	strb r1, [r4, #15]	@ 00086222 e173
.org 0x86224
	b.n 0x86244	@ 00086224 0ee0
.org 0x86226
	.byte 0x00	@ 00086226 data
.org 0x86227
	.byte 0x00	@ 00086227 data
.org 0x86228
	.byte 0x40,0xdb,0x85,0x08	@ 00086228 data
.org 0x8622c
	ldr r1, [pc, #28]	@ 0008622c 0749
.org 0x8622e
	ldrb r0, [r4, #9]	@ 0008622e 607a
.org 0x86230
	lsls r0, r0, #2	@ 00086230 8000
.org 0x86232
	adds r0, r0, r1	@ 00086232 4018
.org 0x86234
	movs r1, #2	@ 00086234 0221
.org 0x86236
	str r1, [r4, #12]	@ 00086236 e160
.org 0x86238
	ldr r0, [r0, #0]	@ 00086238 0068
.org 0x8623a
	ldr r0, [r0, #8]	@ 0008623a 8068
.org 0x8623c
	str r0, [r4, #20]	@ 0008623c 6061
.org 0x8623e
	strb r1, [r4, #13]	@ 0008623e 6173
.org 0x86240
	strb r2, [r4, #14]	@ 00086240 a273
.org 0x86242
	strb r2, [r4, #15]	@ 00086242 e273
.org 0x86244
	adds r0, r4, #0	@ 00086244 201c
.org 0x86246
	bl 0x8671c	@ 00086246 00f069fa
.org 0x8624a
	b.n 0x86366	@ 0008624a 8ce0
.org 0x8624c
	.byte 0x40,0xdb,0x85,0x08	@ 0008624c data
.org 0x86250
	ldrb r6, [r4, #13]	@ 00086250 667b
.org 0x86252
	cmp r6, #3	@ 00086252 032e
.org 0x86254
	beq.n 0x8625c	@ 00086254 02d0
.org 0x86256
	cmp r6, #4	@ 00086256 042e
.org 0x86258
	beq.n 0x862a4	@ 00086258 24d0
.org 0x8625a
	b.n 0x862f4	@ 0008625a 4be0
.org 0x8625c
	ldr r0, [pc, #60]	@ 0008625c 0f48
.org 0x8625e
	adds r1, r4, #0	@ 0008625e 211c
.org 0x86260
	adds r1, #84	@ 00086260 5431
.org 0x86262
	bl 0x1fb14	@ 00086262 99f757fc
.org 0x86266
	movs r1, #160	@ 00086266 a021
.org 0x86268
	lsls r1, r1, #7	@ 00086268 c901
.org 0x8626a
	cmp r0, r1	@ 0008626a 8842
.org 0x8626c
	bls.n 0x862f4	@ 0008626c 42d9
.org 0x8626e
	ldrb r1, [r4, #10]	@ 0008626e a17a
.org 0x86270
	movs r0, #254	@ 00086270 fe20
.org 0x86272
	ands r0, r1	@ 00086272 0840
.org 0x86274
	movs r1, #253	@ 00086274 fd21
.org 0x86276
	ands r0, r1	@ 00086276 0840
.org 0x86278
	strb r0, [r4, #10]	@ 00086278 a072
.org 0x8627a
	str r5, [r7, #0]	@ 0008627a 3d60
.org 0x8627c
	adds r0, r4, #0	@ 0008627c 201c
.org 0x8627e
	adds r0, #144	@ 0008627e 9030
.org 0x86280
	str r5, [r0, #0]	@ 00086280 0560
.org 0x86282
	adds r0, #4	@ 00086282 0430
.org 0x86284
	strb r5, [r0, #0]	@ 00086284 0570
.org 0x86286
	ldrb r1, [r4, #10]	@ 00086286 a17a
.org 0x86288
	movs r0, #251	@ 00086288 fb20
.org 0x8628a
	ands r0, r1	@ 0008628a 0840
.org 0x8628c
	strb r0, [r4, #10]	@ 0008628c a072
.org 0x8628e
	ldr r1, [pc, #16]	@ 0008628e 0449
.org 0x86290
	ldrb r0, [r4, #9]	@ 00086290 607a
.org 0x86292
	lsls r0, r0, #2	@ 00086292 8000
.org 0x86294
	adds r0, r0, r1	@ 00086294 4018
.org 0x86296
	str r6, [r4, #12]	@ 00086296 e660
.org 0x86298
	b.n 0x862e2	@ 00086298 23e0
.org 0x8629a
	.byte 0x00	@ 0008629a data
.org 0x8629b
	.byte 0x00	@ 0008629b data
.org 0x8629c
	.byte 0xf8,0xe9,0x02,0x02	@ 0008629c data
.org 0x862a0
	.byte 0x40,0xdb,0x85,0x08	@ 000862a0 data
.org 0x862a4
	ldr r0, [pc, #68]	@ 000862a4 1148
.org 0x862a6
	adds r1, r4, #0	@ 000862a6 211c
.org 0x862a8
	adds r1, #84	@ 000862a8 5431
.org 0x862aa
	bl 0x1fb14	@ 000862aa 99f733fc
.org 0x862ae
	movs r1, #240	@ 000862ae f021
.org 0x862b0
	lsls r1, r1, #8	@ 000862b0 0902
.org 0x862b2
	cmp r0, r1	@ 000862b2 8842
.org 0x862b4
	bls.n 0x862f4	@ 000862b4 1ed9
.org 0x862b6
	ldrb r1, [r4, #10]	@ 000862b6 a17a
.org 0x862b8
	movs r0, #254	@ 000862b8 fe20
.org 0x862ba
	ands r0, r1	@ 000862ba 0840
.org 0x862bc
	movs r1, #253	@ 000862bc fd21
.org 0x862be
	ands r0, r1	@ 000862be 0840
.org 0x862c0
	strb r0, [r4, #10]	@ 000862c0 a072
.org 0x862c2
	str r5, [r7, #0]	@ 000862c2 3d60
.org 0x862c4
	adds r0, r4, #0	@ 000862c4 201c
.org 0x862c6
	adds r0, #144	@ 000862c6 9030
.org 0x862c8
	str r5, [r0, #0]	@ 000862c8 0560
.org 0x862ca
	adds r0, #4	@ 000862ca 0430
.org 0x862cc
	strb r5, [r0, #0]	@ 000862cc 0570
.org 0x862ce
	ldrb r1, [r4, #10]	@ 000862ce a17a
.org 0x862d0
	movs r0, #251	@ 000862d0 fb20
.org 0x862d2
	ands r0, r1	@ 000862d2 0840
.org 0x862d4
	strb r0, [r4, #10]	@ 000862d4 a072
.org 0x862d6
	ldr r1, [pc, #24]	@ 000862d6 0649
.org 0x862d8
	ldrb r0, [r4, #9]	@ 000862d8 607a
.org 0x862da
	lsls r0, r0, #2	@ 000862da 8000
.org 0x862dc
	adds r0, r0, r1	@ 000862dc 4018
.org 0x862de
	movs r1, #3	@ 000862de 0321
.org 0x862e0
	str r1, [r4, #12]	@ 000862e0 e160
.org 0x862e2
	ldr r0, [r0, #0]	@ 000862e2 0068
.org 0x862e4
	ldr r0, [r0, #12]	@ 000862e4 c068
.org 0x862e6
	str r0, [r4, #20]	@ 000862e6 6061
.org 0x862e8
	b.n 0x86366	@ 000862e8 3de0
.org 0x862ea
	.byte 0x00	@ 000862ea data
.org 0x862eb
	.byte 0x00	@ 000862eb data
.org 0x862ec
	.byte 0xf8,0xe9,0x02,0x02	@ 000862ec data
.org 0x862f0
	.byte 0x40,0xdb,0x85,0x08	@ 000862f0 data
.org 0x862f4
	ldr r0, [r7, #0]	@ 000862f4 3868
.org 0x862f6
	movs r6, #1	@ 000862f6 0126
.org 0x862f8
	ands r0, r6	@ 000862f8 3040
.org 0x862fa
	cmp r0, #0	@ 000862fa 0028
.org 0x862fc
	beq.n 0x86346	@ 000862fc 23d0
.org 0x862fe
	ldr r5, [r4, #44]	@ 000862fe e56a
.org 0x86300
	cmp r5, #0	@ 00086300 002d
.org 0x86302
	bne.n 0x86346	@ 00086302 20d1
.org 0x86304
	ldrb r0, [r4, #13]	@ 00086304 607b
.org 0x86306
	cmp r0, #4	@ 00086306 0428
.org 0x86308
	beq.n 0x86346	@ 00086308 1dd0
.org 0x8630a
	ldr r2, [pc, #40]	@ 0008630a 0a4a
.org 0x8630c
	movs r0, #0	@ 0008630c 0020
.org 0x8630e
	adds r1, r4, #0	@ 0008630e 211c
.org 0x86310
	bl 0x2adac	@ 00086310 a4f74cfd
.org 0x86314
	adds r2, r0, #0	@ 00086314 021c
.org 0x86316
	str r2, [r4, #44]	@ 00086316 e262
.org 0x86318
	movs r0, #4	@ 00086318 0420
.org 0x8631a
	strb r0, [r4, #13]	@ 0008631a 6073
.org 0x8631c
	strb r5, [r4, #14]	@ 0008631c a573
.org 0x8631e
	strb r5, [r4, #15]	@ 0008631e e573
.org 0x86320
	adds r0, r4, #0	@ 00086320 201c
.org 0x86322
	adds r0, #151	@ 00086322 9730
.org 0x86324
	ldrb r1, [r0, #0]	@ 00086324 0178
.org 0x86326
	movs r0, #240	@ 00086326 f020
.org 0x86328
	ands r0, r1	@ 00086328 0840
.org 0x8632a
	cmp r0, #32	@ 0008632a 2028
.org 0x8632c
	bne.n 0x86338	@ 0008632c 04d1
.org 0x8632e
	movs r0, #2	@ 0008632e 0220
.org 0x86330
	strb r0, [r4, #14]	@ 00086330 a073
.org 0x86332
	b.n 0x86346	@ 00086332 08e0
.org 0x86334
	.byte 0x3c,0xee,0x85,0x08	@ 00086334 data
.org 0x86338
	cmp r2, #0	@ 00086338 002a
.org 0x8633a
	beq.n 0x86342	@ 0008633a 02d0
