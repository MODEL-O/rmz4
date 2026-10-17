@ FUN_08093138  entry 0x08093138  size 380
.thumb
.org 0x93138
FUN_08093138:
	push {r4, r5, r6, r7, lr}	@ 00093138 f0b5
.org 0x9313a
	mov r7, r8	@ 0009313a 4746
.org 0x9313c
	push {r7}	@ 0009313c 80b4
.org 0x9313e
	adds r4, r0, #0	@ 0009313e 041c
.org 0x93140
	ldrb r7, [r4, #16]	@ 00093140 277c
.org 0x93142
	adds r6, r4, #0	@ 00093142 261c
.org 0x93144
	adds r6, #140	@ 00093144 8c36
.org 0x93146
	ldr r0, [r6, #0]	@ 00093146 3068
.org 0x93148
	movs r1, #1	@ 00093148 0121
.org 0x9314a
	mov r8, r1	@ 0009314a 8846
.org 0x9314c
	ands r0, r1	@ 0009314c 0840
.org 0x9314e
	cmp r0, #0	@ 0009314e 0028
.org 0x93150
	beq.n 0x93158	@ 00093150 02d0
.org 0x93152
	movs r0, #27	@ 00093152 1b20
.org 0x93154
	bl 0x6984	@ 00093154 73f716fc
.org 0x93158
	ldr r5, [r6, #0]	@ 00093158 3568
.org 0x9315a
	movs r0, #128	@ 0009315a 8020
.org 0x9315c
	lsls r0, r0, #2	@ 0009315c 8000
.org 0x9315e
	ands r5, r0	@ 0009315e 0540
.org 0x93160
	cmp r5, #0	@ 00093160 002d
.org 0x93162
	beq.n 0x931ae	@ 00093162 24d0
.org 0x93164
	ldr r1, [pc, #36]	@ 00093164 0949
.org 0x93166
	ldrb r0, [r4, #9]	@ 00093166 607a
.org 0x93168
	lsls r0, r0, #2	@ 00093168 8000
.org 0x9316a
	adds r0, r0, r1	@ 0009316a 4018
.org 0x9316c
	movs r1, #2	@ 0009316c 0221
.org 0x9316e
	str r1, [r4, #12]	@ 0009316e e160
.org 0x93170
	ldr r0, [r0, #0]	@ 00093170 0068
.org 0x93172
	ldr r0, [r0, #8]	@ 00093172 8068
.org 0x93174
	str r0, [r4, #20]	@ 00093174 6061
.org 0x93176
	adds r0, r4, #0	@ 00093176 201c
.org 0x93178
	adds r0, #185	@ 00093178 b930
.org 0x9317a
	ldrb r2, [r0, #0]	@ 0009317a 0278
.org 0x9317c
	cmp r2, #0	@ 0009317c 002a
.org 0x9317e
	beq.n 0x93190	@ 0009317e 07d0
.org 0x93180
	movs r0, #0	@ 00093180 0020
.org 0x93182
	strb r1, [r4, #13]	@ 00093182 6173
.org 0x93184
	strb r0, [r4, #14]	@ 00093184 a073
.org 0x93186
	strb r0, [r4, #15]	@ 00093186 e073
.org 0x93188
	b.n 0x931dc	@ 00093188 28e0
.org 0x9318a
	.byte 0x00	@ 0009318a data
.org 0x9318b
	.byte 0x00	@ 0009318b data
.org 0x9318c
	.byte 0x40,0xdb,0x85,0x08	@ 0009318c data
.org 0x93190
	ldr r1, [r6, #0]	@ 00093190 3168
.org 0x93192
	movs r0, #128	@ 00093192 8020
.org 0x93194
	lsls r0, r0, #9	@ 00093194 4002
.org 0x93196
	ands r1, r0	@ 00093196 0140
.org 0x93198
	cmp r1, #0	@ 00093198 0029
.org 0x9319a
	beq.n 0x931a6	@ 0009319a 04d0
.org 0x9319c
	mov r0, r8	@ 0009319c 4046
.org 0x9319e
	strb r0, [r4, #13]	@ 0009319e 6073
.org 0x931a0
	strb r2, [r4, #14]	@ 000931a0 a273
.org 0x931a2
	strb r2, [r4, #15]	@ 000931a2 e273
.org 0x931a4
	b.n 0x931dc	@ 000931a4 1ae0
.org 0x931a6
	strb r1, [r4, #13]	@ 000931a6 6173
.org 0x931a8
	strb r1, [r4, #14]	@ 000931a8 a173
.org 0x931aa
	strb r1, [r4, #15]	@ 000931aa e173
.org 0x931ac
	b.n 0x931dc	@ 000931ac 16e0
.org 0x931ae
	adds r0, r4, #0	@ 000931ae 201c
.org 0x931b0
	bl 0x94720	@ 000931b0 01f0b6fa
.org 0x931b4
	cmp r0, #0	@ 000931b4 0028
.org 0x931b6
	beq.n 0x931e8	@ 000931b6 17d0
.org 0x931b8
	ldrb r0, [r4, #13]	@ 000931b8 607b
.org 0x931ba
	cmp r0, #9	@ 000931ba 0928
.org 0x931bc
	beq.n 0x931e8	@ 000931bc 14d0
.org 0x931be
	cmp r0, #10	@ 000931be 0a28
.org 0x931c0
	beq.n 0x931e8	@ 000931c0 12d0
.org 0x931c2
	ldr r1, [pc, #32]	@ 000931c2 0849
.org 0x931c4
	ldrb r0, [r4, #9]	@ 000931c4 607a
.org 0x931c6
	lsls r0, r0, #2	@ 000931c6 8000
.org 0x931c8
	adds r0, r0, r1	@ 000931c8 4018
.org 0x931ca
	movs r1, #2	@ 000931ca 0221
.org 0x931cc
	str r1, [r4, #12]	@ 000931cc e160
.org 0x931ce
	ldr r0, [r0, #0]	@ 000931ce 0068
.org 0x931d0
	ldr r0, [r0, #8]	@ 000931d0 8068
.org 0x931d2
	str r0, [r4, #20]	@ 000931d2 6061
.org 0x931d4
	movs r0, #3	@ 000931d4 0320
.org 0x931d6
	strb r0, [r4, #13]	@ 000931d6 6073
.org 0x931d8
	strb r5, [r4, #14]	@ 000931d8 a573
.org 0x931da
	strb r5, [r4, #15]	@ 000931da e573
.org 0x931dc
	adds r0, r4, #0	@ 000931dc 201c
.org 0x931de
	bl 0x93ff0	@ 000931de 00f007ff
.org 0x931e2
	b.n 0x932c4	@ 000931e2 6fe0
.org 0x931e4
	.byte 0x40,0xdb,0x85,0x08	@ 000931e4 data
.org 0x931e8
	cmp r7, #1	@ 000931e8 012f
.org 0x931ea
	bne.n 0x93240	@ 000931ea 29d1
.org 0x931ec
	ldr r0, [pc, #72]	@ 000931ec 1248
.org 0x931ee
	adds r1, r4, #0	@ 000931ee 211c
.org 0x931f0
	adds r1, #84	@ 000931f0 5431
.org 0x931f2
	bl 0x1fb14	@ 000931f2 8cf78ffc
.org 0x931f6
	movs r1, #240	@ 000931f6 f021
.org 0x931f8
	lsls r1, r1, #8	@ 000931f8 0902
.org 0x931fa
	cmp r0, r1	@ 000931fa 8842
.org 0x931fc
	bls.n 0x93240	@ 000931fc 20d9
.org 0x931fe
	ldrb r1, [r4, #10]	@ 000931fe a17a
.org 0x93200
	movs r0, #254	@ 00093200 fe20
.org 0x93202
	ands r0, r1	@ 00093202 0840
.org 0x93204
	movs r2, #0	@ 00093204 0022
.org 0x93206
	movs r1, #253	@ 00093206 fd21
.org 0x93208
	ands r0, r1	@ 00093208 0840
.org 0x9320a
	strb r0, [r4, #10]	@ 0009320a a072
.org 0x9320c
	adds r0, r4, #0	@ 0009320c 201c
.org 0x9320e
	adds r0, #140	@ 0009320e 8c30
.org 0x93210
	str r2, [r0, #0]	@ 00093210 0260
.org 0x93212
	adds r0, #4	@ 00093212 0430
.org 0x93214
	str r2, [r0, #0]	@ 00093214 0260
.org 0x93216
	adds r0, #4	@ 00093216 0430
.org 0x93218
	strb r2, [r0, #0]	@ 00093218 0270
.org 0x9321a
	ldrb r1, [r4, #10]	@ 0009321a a17a
.org 0x9321c
	movs r0, #251	@ 0009321c fb20
.org 0x9321e
	ands r0, r1	@ 0009321e 0840
.org 0x93220
	strb r0, [r4, #10]	@ 00093220 a072
.org 0x93222
	ldr r1, [pc, #24]	@ 00093222 0649
.org 0x93224
	ldrb r0, [r4, #9]	@ 00093224 607a
.org 0x93226
	lsls r0, r0, #2	@ 00093226 8000
.org 0x93228
	adds r0, r0, r1	@ 00093228 4018
.org 0x9322a
	movs r1, #3	@ 0009322a 0321
.org 0x9322c
	str r1, [r4, #12]	@ 0009322c e160
.org 0x9322e
	ldr r0, [r0, #0]	@ 0009322e 0068
.org 0x93230
	ldr r0, [r0, #12]	@ 00093230 c068
.org 0x93232
	str r0, [r4, #20]	@ 00093232 6061
.org 0x93234
	b.n 0x932c4	@ 00093234 46e0
.org 0x93236
	.byte 0x00	@ 00093236 data
.org 0x93237
	.byte 0x00	@ 00093237 data
.org 0x93238
	.byte 0xf8,0xe9,0x02,0x02	@ 00093238 data
.org 0x9323c
	.byte 0x40,0xdb,0x85,0x08	@ 0009323c data
.org 0x93240
	adds r0, r4, #0	@ 00093240 201c
.org 0x93242
	adds r0, #140	@ 00093242 8c30
.org 0x93244
	ldr r0, [r0, #0]	@ 00093244 0068
.org 0x93246
	movs r1, #1	@ 00093246 0121
.org 0x93248
	ands r0, r1	@ 00093248 0840
.org 0x9324a
	cmp r0, #0	@ 0009324a 0028
.org 0x9324c
	beq.n 0x93290	@ 0009324c 20d0
.org 0x9324e
	ldr r5, [r4, #44]	@ 0009324e e56a
.org 0x93250
	cmp r5, #0	@ 00093250 002d
.org 0x93252
	bne.n 0x93296	@ 00093252 20d1
.org 0x93254
	ldr r2, [pc, #24]	@ 00093254 064a
.org 0x93256
	movs r0, #0	@ 00093256 0020
.org 0x93258
	adds r1, r4, #0	@ 00093258 211c
.org 0x9325a
	bl 0x2adac	@ 0009325a 97f7a7fd
.org 0x9325e
	str r0, [r4, #44]	@ 0009325e e062
.org 0x93260
	cmp r0, #0	@ 00093260 0028
.org 0x93262
	beq.n 0x93274	@ 00093262 07d0
.org 0x93264
	movs r0, #7	@ 00093264 0720
.org 0x93266
	strb r0, [r4, #13]	@ 00093266 6073
.org 0x93268
	strb r5, [r4, #14]	@ 00093268 a573
.org 0x9326a
	strb r5, [r4, #15]	@ 0009326a e573
.org 0x9326c
	b.n 0x93290	@ 0009326c 10e0
.org 0x9326e
	.byte 0x00	@ 0009326e data
.org 0x9326f
	.byte 0x00	@ 0009326f data
.org 0x93270
	.byte 0xf4,0x05,0x86,0x08	@ 00093270 data
.org 0x93274
	ldrb r0, [r4, #13]	@ 00093274 607b
.org 0x93276
	cmp r0, #6	@ 00093276 0628
.org 0x93278
	beq.n 0x93290	@ 00093278 0ad0
.org 0x9327a
	cmp r0, #6	@ 0009327a 0628
.org 0x9327c
	blt.n 0x93286	@ 0009327c 03db
.org 0x9327e
	cmp r0, #9	@ 0009327e 0928
.org 0x93280
	bgt.n 0x93286	@ 00093280 01dc
.org 0x93282
	cmp r0, #8	@ 00093282 0828
.org 0x93284
	bge.n 0x93290	@ 00093284 04da
.org 0x93286
	movs r1, #0	@ 00093286 0021
.org 0x93288
	movs r0, #6	@ 00093288 0620
.org 0x9328a
	strb r0, [r4, #13]	@ 0009328a 6073
.org 0x9328c
	strb r1, [r4, #14]	@ 0009328c a173
.org 0x9328e
	strb r1, [r4, #15]	@ 0009328e e173
.org 0x93290
	ldr r5, [r4, #44]	@ 00093290 e56a
.org 0x93292
	cmp r5, #0	@ 00093292 002d
.org 0x93294
	beq.n 0x932a4	@ 00093294 06d0
.org 0x93296
	adds r0, r5, #0	@ 00093296 281c
.org 0x93298
	bl 0x2b3e4	@ 00093298 98f7a4f8
.org 0x9329c
	cmp r0, #0	@ 0009329c 0028
.org 0x9329e
	beq.n 0x932a4	@ 0009329e 01d0
.org 0x932a0
	movs r0, #0	@ 000932a0 0020
.org 0x932a2
	str r0, [r4, #44]	@ 000932a2 e062
.org 0x932a4
	ldr r1, [pc, #40]	@ 000932a4 0a49
.org 0x932a6
	ldrb r0, [r4, #13]	@ 000932a6 607b
.org 0x932a8
	lsls r0, r0, #2	@ 000932a8 8000
.org 0x932aa
	adds r0, r0, r1	@ 000932aa 4018
.org 0x932ac
	ldr r1, [r0, #0]	@ 000932ac 0168
.org 0x932ae
	adds r0, r4, #0	@ 000932ae 201c
.org 0x932b0
	bl 0x128f80	@ 000932b0 95f066fe
