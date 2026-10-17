@ FUN_0812712e  entry 0x0812712e  size 586
.thumb
.org 0x12712e
FUN_0812712e:
	push {r0, lr}	@ 0012712e 01b5
.org 0x127130
	ldr r3, [r0, #56]	@ 00127130 836b
.org 0x127132
	cmp r3, #0	@ 00127132 002b
.org 0x127134
	beq.n 0x12713c	@ 00127134 02d0
.org 0x127136
	ldr r0, [r0, #60]	@ 00127136 c06b
.org 0x127138
	bl 0x127378	@ 00127138 00f01ef9
.org 0x12713c
	pop {r0}	@ 0012713c 01bc
.org 0x12713e
	push {r4, r5, r6, r7}	@ 0012713e f0b4
.org 0x127140
	mov r4, r8	@ 00127140 4446
.org 0x127142
	mov r5, r9	@ 00127142 4d46
.org 0x127144
	mov r6, sl	@ 00127144 5646
.org 0x127146
	mov r7, fp	@ 00127146 5f46
.org 0x127148
	push {r4, r5, r6, r7}	@ 00127148 f0b4
.org 0x12714a
	adds r7, r0, #0	@ 0012714a 071c
.org 0x12714c
	ldr r0, [r7, #4]	@ 0012714c 7868
.org 0x12714e
	cmp r0, #0	@ 0012714e 0028
.org 0x127150
	bge.n 0x127154	@ 00127150 00da
.org 0x127152
	b.n 0x127368	@ 00127152 09e1
.org 0x127154
	ldr r0, [pc, #552]	@ 00127154 8a48
.org 0x127156
	ldr r0, [r0, #0]	@ 00127156 0068
.org 0x127158
	mov r8, r0	@ 00127158 8046
.org 0x12715a
	adds r0, r7, #0	@ 0012715a 381c
.org 0x12715c
	bl 0x127fc4	@ 0012715c 00f032ff
.org 0x127160
	ldr r0, [r7, #4]	@ 00127160 7868
.org 0x127162
	cmp r0, #0	@ 00127162 0028
.org 0x127164
	bge.n 0x127168	@ 00127164 00da
.org 0x127166
	b.n 0x127368	@ 00127166 ffe0
.org 0x127168
	ldrh r0, [r7, #34]	@ 00127168 788c
.org 0x12716a
	ldrh r1, [r7, #32]	@ 0012716a 398c
.org 0x12716c
	adds r0, r0, r1	@ 0012716c 4018
.org 0x12716e
	b.n 0x1272b8	@ 0012716e a3e0
.org 0x127170
	ldrb r6, [r7, #8]	@ 00127170 3e7a
.org 0x127172
	ldr r5, [r7, #44]	@ 00127172 fd6a
.org 0x127174
	movs r3, #1	@ 00127174 0123
.org 0x127176
	movs r4, #0	@ 00127176 0024
.org 0x127178
	ldrb r0, [r5, #0]	@ 00127178 2878
.org 0x12717a
	movs r1, #128	@ 0012717a 8021
.org 0x12717c
	tst r1, r0	@ 0012717c 0142
.org 0x12717e
	bne.n 0x127182	@ 0012717e 00d1
.org 0x127180
	b.n 0x127294	@ 00127180 88e0
.org 0x127182
	mov sl, r3	@ 00127182 9a46
.org 0x127184
	orrs r4, r3	@ 00127184 1c43
.org 0x127186
	mov fp, r4	@ 00127186 a346
.org 0x127188
	ldr r4, [r5, #32]	@ 00127188 2c6a
.org 0x12718a
	cmp r4, #0	@ 0012718a 002c
.org 0x12718c
	beq.n 0x1271b6	@ 0012718c 13d0
.org 0x12718e
	ldrb r1, [r4, #0]	@ 0012718e 2178
.org 0x127190
	movs r0, #199	@ 00127190 c720
.org 0x127192
	tst r0, r1	@ 00127192 0842
.org 0x127194
	beq.n 0x1271aa	@ 00127194 09d0
.org 0x127196
	ldrb r0, [r4, #16]	@ 00127196 207c
.org 0x127198
	cmp r0, #0	@ 00127198 0028
.org 0x12719a
	beq.n 0x1271b0	@ 0012719a 09d0
.org 0x12719c
	subs r0, #1	@ 0012719c 0138
.org 0x12719e
	strb r0, [r4, #16]	@ 0012719e 2074
.org 0x1271a0
	bne.n 0x1271b0	@ 001271a0 06d1
.org 0x1271a2
	movs r0, #64	@ 001271a2 4020
.org 0x1271a4
	orrs r1, r0	@ 001271a4 0143
.org 0x1271a6
	strb r1, [r4, #0]	@ 001271a6 2170
.org 0x1271a8
	b.n 0x1271b0	@ 001271a8 02e0
.org 0x1271aa
	adds r0, r4, #0	@ 001271aa 201c
.org 0x1271ac
	bl 0x127b08	@ 001271ac 00f0acfc
.org 0x1271b0
	ldr r4, [r4, #52]	@ 001271b0 646b
.org 0x1271b2
	cmp r4, #0	@ 001271b2 002c
.org 0x1271b4
	bne.n 0x12718e	@ 001271b4 ebd1
.org 0x1271b6
	ldrb r3, [r5, #0]	@ 001271b6 2b78
.org 0x1271b8
	movs r0, #64	@ 001271b8 4020
.org 0x1271ba
	tst r0, r3	@ 001271ba 1842
.org 0x1271bc
	beq.n 0x127234	@ 001271bc 3ad0
.org 0x1271be
	adds r0, r5, #0	@ 001271be 281c
.org 0x1271c0
	bl 0x127b1c	@ 001271c0 00f0acfc
.org 0x1271c4
	movs r0, #128	@ 001271c4 8020
.org 0x1271c6
	strb r0, [r5, #0]	@ 001271c6 2870
.org 0x1271c8
	movs r0, #2	@ 001271c8 0220
.org 0x1271ca
	strb r0, [r5, #15]	@ 001271ca e873
.org 0x1271cc
	movs r0, #64	@ 001271cc 4020
.org 0x1271ce
	strb r0, [r5, #19]	@ 001271ce e874
.org 0x1271d0
	movs r0, #22	@ 001271d0 1620
.org 0x1271d2
	strb r0, [r5, #25]	@ 001271d2 6876
.org 0x1271d4
	movs r0, #1	@ 001271d4 0120
.org 0x1271d6
	adds r1, r5, #6	@ 001271d6 a91d
.org 0x1271d8
	strb r0, [r1, #30]	@ 001271d8 8877
.org 0x1271da
	b.n 0x127234	@ 001271da 2be0
.org 0x1271dc
	ldr r2, [r5, #64]	@ 001271dc 2a6c
.org 0x1271de
	ldrb r1, [r2, #0]	@ 001271de 1178
.org 0x1271e0
	cmp r1, #128	@ 001271e0 8029
.org 0x1271e2
	bcs.n 0x1271e8	@ 001271e2 01d2
.org 0x1271e4
	ldrb r1, [r5, #7]	@ 001271e4 e979
.org 0x1271e6
	b.n 0x1271f2	@ 001271e6 04e0
.org 0x1271e8
	adds r2, #1	@ 001271e8 0132
.org 0x1271ea
	str r2, [r5, #64]	@ 001271ea 2a64
.org 0x1271ec
	cmp r1, #189	@ 001271ec bd29
.org 0x1271ee
	bcc.n 0x1271f2	@ 001271ee 00d3
.org 0x1271f0
	strb r1, [r5, #7]	@ 001271f0 e971
.org 0x1271f2
	cmp r1, #207	@ 001271f2 cf29
.org 0x1271f4
	bcc.n 0x127208	@ 001271f4 08d3
.org 0x1271f6
	mov r0, r8	@ 001271f6 4046
.org 0x1271f8
	ldr r3, [r0, #56]	@ 001271f8 836b
.org 0x1271fa
	adds r0, r1, #0	@ 001271fa 081c
.org 0x1271fc
	subs r0, #207	@ 001271fc cf38
.org 0x1271fe
	adds r1, r7, #0	@ 001271fe 391c
.org 0x127200
	adds r2, r5, #0	@ 00127200 2a1c
.org 0x127202
	bl 0x127378	@ 00127202 00f0b9f8
.org 0x127206
	b.n 0x127234	@ 00127206 15e0
.org 0x127208
	cmp r1, #176	@ 00127208 b029
.org 0x12720a
	bls.n 0x12722a	@ 0012720a 0ed9
.org 0x12720c
	adds r0, r1, #0	@ 0012720c 081c
.org 0x12720e
	subs r0, #177	@ 0012720e b138
.org 0x127210
	strb r0, [r7, #10]	@ 00127210 b872
.org 0x127212
	mov r3, r8	@ 00127212 4346
.org 0x127214
	ldr r3, [r3, #52]	@ 00127214 5b6b
.org 0x127216
	lsls r0, r0, #2	@ 00127216 8000
.org 0x127218
	ldr r3, [r3, r0]	@ 00127218 1b58
.org 0x12721a
	adds r0, r7, #0	@ 0012721a 381c
.org 0x12721c
	adds r1, r5, #0	@ 0012721c 291c
.org 0x12721e
	bl 0x127378	@ 0012721e 00f0abf8
.org 0x127222
	ldrb r0, [r5, #0]	@ 00127222 2878
.org 0x127224
	cmp r0, #0	@ 00127224 0028
.org 0x127226
	beq.n 0x127290	@ 00127226 33d0
.org 0x127228
	b.n 0x127234	@ 00127228 04e0
.org 0x12722a
	ldr r0, [pc, #336]	@ 0012722a 5448
.org 0x12722c
	subs r1, #128	@ 0012722c 8039
.org 0x12722e
	adds r1, r1, r0	@ 0012722e 0918
.org 0x127230
	ldrb r0, [r1, #0]	@ 00127230 0878
.org 0x127232
	strb r0, [r5, #1]	@ 00127232 6870
.org 0x127234
	ldrb r0, [r5, #1]	@ 00127234 6878
.org 0x127236
	cmp r0, #0	@ 00127236 0028
.org 0x127238
	beq.n 0x1271dc	@ 00127238 d0d0
.org 0x12723a
	subs r0, #1	@ 0012723a 0138
.org 0x12723c
	strb r0, [r5, #1]	@ 0012723c 6870
.org 0x12723e
	ldrb r1, [r5, #25]	@ 0012723e 697e
.org 0x127240
	cmp r1, #0	@ 00127240 0029
.org 0x127242
	beq.n 0x127290	@ 00127242 25d0
.org 0x127244
	ldrb r0, [r5, #23]	@ 00127244 e87d
.org 0x127246
	cmp r0, #0	@ 00127246 0028
.org 0x127248
	beq.n 0x127290	@ 00127248 22d0
.org 0x12724a
	ldrb r0, [r5, #28]	@ 0012724a 287f
.org 0x12724c
	cmp r0, #0	@ 0012724c 0028
.org 0x12724e
	beq.n 0x127256	@ 0012724e 02d0
.org 0x127250
	subs r0, #1	@ 00127250 0138
.org 0x127252
	strb r0, [r5, #28]	@ 00127252 2877
.org 0x127254
	b.n 0x127290	@ 00127254 1ce0
.org 0x127256
	ldrb r0, [r5, #26]	@ 00127256 a87e
.org 0x127258
	adds r0, r0, r1	@ 00127258 4018
.org 0x12725a
	strb r0, [r5, #26]	@ 0012725a a876
.org 0x12725c
	adds r1, r0, #0	@ 0012725c 011c
.org 0x12725e
	subs r0, #64	@ 0012725e 4038
.org 0x127260
	lsls r0, r0, #24	@ 00127260 0006
.org 0x127262
	bpl.n 0x12726a	@ 00127262 02d5
.org 0x127264
	lsls r2, r1, #24	@ 00127264 0a06
.org 0x127266
	asrs r2, r2, #24	@ 00127266 1216
.org 0x127268
	b.n 0x12726e	@ 00127268 01e0
.org 0x12726a
	movs r0, #128	@ 0012726a 8020
.org 0x12726c
	subs r2, r0, r1	@ 0012726c 421a
.org 0x12726e
	ldrb r0, [r5, #23]	@ 0012726e e87d
.org 0x127270
	muls r0, r2	@ 00127270 5043
.org 0x127272
	asrs r2, r0, #6	@ 00127272 8211
.org 0x127274
	ldrb r0, [r5, #22]	@ 00127274 a87d
.org 0x127276
	eors r0, r2	@ 00127276 5040
.org 0x127278
	lsls r0, r0, #24	@ 00127278 0006
.org 0x12727a
	beq.n 0x127290	@ 0012727a 09d0
.org 0x12727c
	strb r2, [r5, #22]	@ 0012727c aa75
.org 0x12727e
	ldrb r0, [r5, #0]	@ 0012727e 2878
.org 0x127280
	ldrb r1, [r5, #24]	@ 00127280 297e
.org 0x127282
	cmp r1, #0	@ 00127282 0029
.org 0x127284
	bne.n 0x12728a	@ 00127284 01d1
.org 0x127286
	movs r1, #12	@ 00127286 0c21
.org 0x127288
	b.n 0x12728c	@ 00127288 00e0
.org 0x12728a
	movs r1, #3	@ 0012728a 0321
.org 0x12728c
	orrs r0, r1	@ 0012728c 0843
.org 0x12728e
	strb r0, [r5, #0]	@ 0012728e 2870
.org 0x127290
	mov r3, sl	@ 00127290 5346
.org 0x127292
	mov r4, fp	@ 00127292 5c46
.org 0x127294
	subs r6, #1	@ 00127294 013e
.org 0x127296
	ble.n 0x1272a0	@ 00127296 03dd
.org 0x127298
	movs r0, #80	@ 00127298 5020
.org 0x12729a
	adds r5, r5, r0	@ 0012729a 2d18
.org 0x12729c
	lsls r3, r3, #1	@ 0012729c 5b00
.org 0x12729e
	b.n 0x127178	@ 0012729e 6be7
.org 0x1272a0
	ldr r0, [r7, #12]	@ 001272a0 f868
.org 0x1272a2
	adds r0, #1	@ 001272a2 0130
.org 0x1272a4
	str r0, [r7, #12]	@ 001272a4 f860
.org 0x1272a6
	cmp r4, #0	@ 001272a6 002c
.org 0x1272a8
	bne.n 0x1272b2	@ 001272a8 03d1
.org 0x1272aa
	movs r0, #128	@ 001272aa 8020
.org 0x1272ac
	lsls r0, r0, #24	@ 001272ac 0006
.org 0x1272ae
	str r0, [r7, #4]	@ 001272ae 7860
.org 0x1272b0
	b.n 0x127368	@ 001272b0 5ae0
.org 0x1272b2
	str r4, [r7, #4]	@ 001272b2 7c60
.org 0x1272b4
	ldrh r0, [r7, #34]	@ 001272b4 788c
.org 0x1272b6
	subs r0, #150	@ 001272b6 9638
.org 0x1272b8
	strh r0, [r7, #34]	@ 001272b8 7884
.org 0x1272ba
	cmp r0, #150	@ 001272ba 9628
.org 0x1272bc
	bcc.n 0x1272c0	@ 001272bc 00d3
.org 0x1272be
	b.n 0x127170	@ 001272be 57e7
.org 0x1272c0
	ldrb r2, [r7, #8]	@ 001272c0 3a7a
.org 0x1272c2
	ldr r5, [r7, #44]	@ 001272c2 fd6a
.org 0x1272c4
	ldrb r0, [r5, #0]	@ 001272c4 2878
.org 0x1272c6
	movs r1, #128	@ 001272c6 8021
.org 0x1272c8
	tst r1, r0	@ 001272c8 0142
.org 0x1272ca
	beq.n 0x12735e	@ 001272ca 48d0
.org 0x1272cc
	movs r1, #15	@ 001272cc 0f21
.org 0x1272ce
	tst r1, r0	@ 001272ce 0142
.org 0x1272d0
	beq.n 0x12735e	@ 001272d0 45d0
.org 0x1272d2
	mov r9, r2	@ 001272d2 9146
.org 0x1272d4
	adds r0, r7, #0	@ 001272d4 381c
.org 0x1272d6
	adds r1, r5, #0	@ 001272d6 291c
.org 0x1272d8
	bl 0x12808c	@ 001272d8 00f0d8fe
.org 0x1272dc
	ldr r4, [r5, #32]	@ 001272dc 2c6a
.org 0x1272de
	cmp r4, #0	@ 001272de 002c
.org 0x1272e0
	beq.n 0x127354	@ 001272e0 38d0
.org 0x1272e2
	ldrb r1, [r4, #0]	@ 001272e2 2178
.org 0x1272e4
	movs r0, #199	@ 001272e4 c720
.org 0x1272e6
	tst r0, r1	@ 001272e6 0842
.org 0x1272e8
	bne.n 0x1272f2	@ 001272e8 03d1
.org 0x1272ea
	adds r0, r4, #0	@ 001272ea 201c
.org 0x1272ec
	bl 0x127b08	@ 001272ec 00f00cfc
.org 0x1272f0
	b.n 0x12734e	@ 001272f0 2de0
.org 0x1272f2
	ldrb r0, [r4, #1]	@ 001272f2 6078
.org 0x1272f4
	movs r6, #7	@ 001272f4 0726
.org 0x1272f6
	ands r6, r0	@ 001272f6 0640
.org 0x1272f8
	ldrb r3, [r5, #0]	@ 001272f8 2b78
.org 0x1272fa
	movs r0, #3	@ 001272fa 0320
.org 0x1272fc
	tst r0, r3	@ 001272fc 1842
.org 0x1272fe
	beq.n 0x127310	@ 001272fe 07d0
.org 0x127300
	bl 0x1273cc	@ 00127300 00f064f8
.org 0x127304
	cmp r6, #0	@ 00127304 002e
.org 0x127306
	beq.n 0x127310	@ 00127306 03d0
.org 0x127308
	ldrb r0, [r4, #29]	@ 00127308 607f
.org 0x12730a
	movs r1, #1	@ 0012730a 0121
.org 0x12730c
	orrs r0, r1	@ 0012730c 0843
.org 0x12730e
	strb r0, [r4, #29]	@ 0012730e 6077
.org 0x127310
	ldrb r3, [r5, #0]	@ 00127310 2b78
.org 0x127312
	movs r0, #12	@ 00127312 0c20
.org 0x127314
	tst r0, r3	@ 00127314 1842
.org 0x127316
	beq.n 0x12734e	@ 00127316 1ad0
.org 0x127318
	ldrb r1, [r4, #8]	@ 00127318 217a
.org 0x12731a
	movs r0, #8	@ 0012731a 0820
.org 0x12731c
	ldrsb r0, [r5, r0]	@ 0012731c 2856
.org 0x12731e
	adds r2, r1, r0	@ 0012731e 0a18
.org 0x127320
	bpl.n 0x127324	@ 00127320 00d5
.org 0x127322
	movs r2, #0	@ 00127322 0022
.org 0x127324
	cmp r6, #0	@ 00127324 002e
.org 0x127326
	beq.n 0x127342	@ 00127326 0cd0
.org 0x127328
	mov r0, r8	@ 00127328 4046
.org 0x12732a
	ldr r3, [r0, #48]	@ 0012732a 036b
.org 0x12732c
	adds r1, r2, #0	@ 0012732c 111c
.org 0x12732e
	ldrb r2, [r5, #9]	@ 0012732e 6a7a
.org 0x127330
	adds r0, r6, #0	@ 00127330 301c
.org 0x127332
	bl 0x127378	@ 00127332 00f021f8
.org 0x127336
	str r0, [r4, #32]	@ 00127336 2062
.org 0x127338
	ldrb r0, [r4, #29]	@ 00127338 607f
.org 0x12733a
	movs r1, #2	@ 0012733a 0221
.org 0x12733c
	orrs r0, r1	@ 0012733c 0843
.org 0x12733e
	strb r0, [r4, #29]	@ 0012733e 6077
.org 0x127340
	b.n 0x12734e	@ 00127340 05e0
.org 0x127342
	adds r1, r2, #0	@ 00127342 111c
.org 0x127344
	ldrb r2, [r5, #9]	@ 00127344 6a7a
.org 0x127346
	ldr r0, [r4, #36]	@ 00127346 606a
.org 0x127348
	bl 0x12768c	@ 00127348 00f0a0f9
.org 0x12734c
	str r0, [r4, #32]	@ 0012734c 2062
.org 0x12734e
	ldr r4, [r4, #52]	@ 0012734e 646b
.org 0x127350
	cmp r4, #0	@ 00127350 002c
.org 0x127352
	bne.n 0x1272e2	@ 00127352 c6d1
.org 0x127354
	ldrb r0, [r5, #0]	@ 00127354 2878
.org 0x127356
	movs r1, #240	@ 00127356 f021
.org 0x127358
	ands r0, r1	@ 00127358 0840
.org 0x12735a
	strb r0, [r5, #0]	@ 0012735a 2870
.org 0x12735c
	mov r2, r9	@ 0012735c 4a46
.org 0x12735e
	subs r2, #1	@ 0012735e 013a
.org 0x127360
	ble.n 0x127368	@ 00127360 02dd
.org 0x127362
	movs r0, #80	@ 00127362 5020
.org 0x127364
	adds r5, r5, r0	@ 00127364 2d18
.org 0x127366
	bgt.n 0x1272c4	@ 00127366 addc
.org 0x127368
	ldr r0, [pc, #24]	@ 00127368 0648
.org 0x12736a
	str r0, [r7, #52]	@ 0012736a 7863
.org 0x12736c
	pop {r0, r1, r2, r3, r4, r5, r6, r7}	@ 0012736c ffbc
.org 0x12736e
	mov r8, r0	@ 0012736e 8046
.org 0x127370
	mov r9, r1	@ 00127370 8946
.org 0x127372
	mov sl, r2	@ 00127372 9246
.org 0x127374
	mov fp, r3	@ 00127374 9b46
.org 0x127376
	pop {r3}	@ 00127376 08bc
