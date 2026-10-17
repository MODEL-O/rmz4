@ FUN_08041094  entry 0x08041094  size 502
.thumb
.org 0x41094
FUN_08041094:
	push {r4, r5, r6, r7, lr}	@ 00041094 f0b5
.org 0x41096
	adds r5, r0, #0	@ 00041096 051c
.org 0x41098
	ldr r7, [r5, #40]	@ 00041098 af6a
.org 0x4109a
	bl 0x1cff0	@ 0004109a dbf7a9ff
.org 0x4109e
	ldrb r6, [r5, #13]	@ 0004109e 6e7b
.org 0x410a0
	cmp r6, #0	@ 000410a0 002e
.org 0x410a2
	beq.n 0x410a6	@ 000410a2 00d0
.org 0x410a4
	b.n 0x41220	@ 000410a4 bce0
.org 0x410a6
	ldrb r0, [r5, #18]	@ 000410a6 a87c
.org 0x410a8
	subs r0, #1	@ 000410a8 0138
.org 0x410aa
	strb r0, [r5, #18]	@ 000410aa a874
.org 0x410ac
	lsls r0, r0, #24	@ 000410ac 0006
.org 0x410ae
	lsrs r0, r0, #24	@ 000410ae 000e
.org 0x410b0
	cmp r0, #255	@ 000410b0 ff28
.org 0x410b2
	beq.n 0x410b6	@ 000410b2 00d0
.org 0x410b4
	b.n 0x4129e	@ 000410b4 f3e0
.org 0x410b6
	adds r4, r5, #0	@ 000410b6 2c1c
.org 0x410b8
	adds r4, #84	@ 000410b8 5434
.org 0x410ba
	adds r0, r7, #0	@ 000410ba 381c
.org 0x410bc
	adds r1, r4, #0	@ 000410bc 211c
.org 0x410be
	bl 0x41318	@ 000410be 00f02bf9
.org 0x410c2
	lsls r0, r0, #24	@ 000410c2 0006
.org 0x410c4
	lsrs r2, r0, #24	@ 000410c4 020e
.org 0x410c6
	mov ip, r4	@ 000410c6 a446
.org 0x410c8
	cmp r2, #0	@ 000410c8 002a
.org 0x410ca
	beq.n 0x41104	@ 000410ca 1bd0
.org 0x410cc
	ldrb r1, [r5, #10]	@ 000410cc a97a
.org 0x410ce
	movs r0, #254	@ 000410ce fe20
.org 0x410d0
	ands r0, r1	@ 000410d0 0840
.org 0x410d2
	movs r1, #253	@ 000410d2 fd21
.org 0x410d4
	ands r0, r1	@ 000410d4 0840
.org 0x410d6
	strb r0, [r5, #10]	@ 000410d6 a872
.org 0x410d8
	adds r0, r5, #0	@ 000410d8 281c
.org 0x410da
	adds r0, #140	@ 000410da 8c30
.org 0x410dc
	str r6, [r0, #0]	@ 000410dc 0660
.org 0x410de
	adds r0, #4	@ 000410de 0430
.org 0x410e0
	str r6, [r0, #0]	@ 000410e0 0660
.org 0x410e2
	adds r0, #4	@ 000410e2 0430
.org 0x410e4
	strb r6, [r0, #0]	@ 000410e4 0670
.org 0x410e6
	ldrb r1, [r5, #10]	@ 000410e6 a97a
.org 0x410e8
	movs r0, #251	@ 000410e8 fb20
.org 0x410ea
	ands r0, r1	@ 000410ea 0840
.org 0x410ec
	strb r0, [r5, #10]	@ 000410ec a872
.org 0x410ee
	ldr r1, [pc, #16]	@ 000410ee 0449
.org 0x410f0
	ldrb r0, [r5, #9]	@ 000410f0 687a
.org 0x410f2
	lsls r0, r0, #2	@ 000410f2 8000
.org 0x410f4
	adds r0, r0, r1	@ 000410f4 4018
.org 0x410f6
	movs r1, #3	@ 000410f6 0321
.org 0x410f8
	str r1, [r5, #12]	@ 000410f8 e960
.org 0x410fa
	ldr r0, [r0, #0]	@ 000410fa 0068
.org 0x410fc
	ldr r0, [r0, #12]	@ 000410fc c068
.org 0x410fe
	b.n 0x4129c	@ 000410fe cde0
.org 0x41100
	.byte 0xf8,0x39,0x85,0x08	@ 00041100 data
.org 0x41104
	ldr r1, [r5, #84]	@ 00041104 696d
.org 0x41106
	ldr r0, [r7, #84]	@ 00041106 786d
.org 0x41108
	cmp r1, r0	@ 00041108 8142
.org 0x4110a
	ble.n 0x41136	@ 0004110a 14dd
.org 0x4110c
	movs r0, #176	@ 0004110c b020
.org 0x4110e
	lsls r0, r0, #2	@ 0004110e 8000
.org 0x41110
	str r0, [r5, #92]	@ 00041110 e865
.org 0x41112
	movs r2, #1	@ 00041112 0122
.org 0x41114
	ldrb r0, [r5, #10]	@ 00041114 a87a
.org 0x41116
	movs r1, #16	@ 00041116 1021
.org 0x41118
	orrs r0, r1	@ 00041118 0843
.org 0x4111a
	strb r0, [r5, #10]	@ 0004111a a872
.org 0x4111c
	adds r0, r5, #0	@ 0004111c 281c
.org 0x4111e
	adds r0, #76	@ 0004111e 4c30
.org 0x41120
	strb r2, [r0, #0]	@ 00041120 0270
.org 0x41122
	adds r3, r5, #0	@ 00041122 2b1c
.org 0x41124
	adds r3, #74	@ 00041124 4a33
.org 0x41126
	movs r2, #16	@ 00041126 1022
.org 0x41128
	ldrb r1, [r3, #0]	@ 00041128 1978
.org 0x4112a
	movs r0, #17	@ 0004112a 1120
.org 0x4112c
	negs r0, r0	@ 0004112c 4042
.org 0x4112e
	ands r0, r1	@ 0004112e 0840
.org 0x41130
	orrs r0, r2	@ 00041130 1043
.org 0x41132
	strb r0, [r3, #0]	@ 00041132 1870
.org 0x41134
	b.n 0x41156	@ 00041134 0fe0
.org 0x41136
	ldr r0, [pc, #132]	@ 00041136 2148
.org 0x41138
	str r0, [r5, #92]	@ 00041138 e865
.org 0x4113a
	ldrb r1, [r5, #10]	@ 0004113a a97a
.org 0x4113c
	movs r0, #239	@ 0004113c ef20
.org 0x4113e
	ands r0, r1	@ 0004113e 0840
.org 0x41140
	strb r0, [r5, #10]	@ 00041140 a872
.org 0x41142
	adds r0, r5, #0	@ 00041142 281c
.org 0x41144
	adds r0, #76	@ 00041144 4c30
.org 0x41146
	strb r2, [r0, #0]	@ 00041146 0270
.org 0x41148
	adds r2, r5, #0	@ 00041148 2a1c
.org 0x4114a
	adds r2, #74	@ 0004114a 4a32
.org 0x4114c
	ldrb r1, [r2, #0]	@ 0004114c 1178
.org 0x4114e
	movs r0, #17	@ 0004114e 1120
.org 0x41150
	negs r0, r0	@ 00041150 4042
.org 0x41152
	ands r0, r1	@ 00041152 0840
.org 0x41154
	strb r0, [r2, #0]	@ 00041154 1070
.org 0x41156
	ldr r0, [pc, #104]	@ 00041156 1a48
.org 0x41158
	str r0, [r5, #96]	@ 00041158 2866
.org 0x4115a
	ldrb r1, [r5, #10]	@ 0004115a a97a
.org 0x4115c
	movs r0, #4	@ 0004115c 0420
.org 0x4115e
	movs r6, #0	@ 0004115e 0026
.org 0x41160
	orrs r0, r1	@ 00041160 0843
.org 0x41162
	strb r0, [r5, #10]	@ 00041162 a872
.org 0x41164
	adds r4, r5, #0	@ 00041164 2c1c
.org 0x41166
	adds r4, #116	@ 00041166 7434
.org 0x41168
	ldr r1, [pc, #88]	@ 00041168 1649
.org 0x4116a
	adds r0, r4, #0	@ 0004116a 201c
.org 0x4116c
	mov r2, ip	@ 0004116c 6246
.org 0x4116e
	movs r3, #8	@ 0004116e 0823
.org 0x41170
	bl 0x5760	@ 00041170 c4f7f6fa
.org 0x41174
	str r5, [r4, #44]	@ 00041174 e562
.org 0x41176
	ldr r0, [pc, #80]	@ 00041176 1448
.org 0x41178
	str r0, [r4, #36]	@ 00041178 6062
.org 0x4117a
	adds r2, r5, #0	@ 0004117a 2a1c
.org 0x4117c
	adds r2, #190	@ 0004117c be32
.org 0x4117e
	movs r1, #1	@ 0004117e 0121
.org 0x41180
	movs r0, #1	@ 00041180 0120
.org 0x41182
	strb r0, [r2, #0]	@ 00041182 1070
.org 0x41184
	ldrb r0, [r5, #10]	@ 00041184 a87a
.org 0x41186
	adds r2, r1, #0	@ 00041186 0a1c
.org 0x41188
	orrs r2, r0	@ 00041188 0243
.org 0x4118a
	strb r2, [r5, #10]	@ 0004118a aa72
.org 0x4118c
	adds r0, r7, #0	@ 0004118c 381c
.org 0x4118e
	adds r0, #180	@ 0004118e b430
.org 0x41190
	ldrb r1, [r0, #12]	@ 00041190 017b
.org 0x41192
	adds r3, r0, #0	@ 00041192 031c
.org 0x41194
	cmp r1, #2	@ 00041194 0229
.org 0x41196
	bhi.n 0x4119e	@ 00041196 02d8
.org 0x41198
	ldrb r0, [r3, #13]	@ 00041198 587b
.org 0x4119a
	cmp r0, #2	@ 0004119a 0228
.org 0x4119c
	bls.n 0x411e8	@ 0004119c 24d9
.org 0x4119e
	adds r1, r7, #0	@ 0004119e 391c
.org 0x411a0
	adds r1, #248	@ 000411a0 f831
.org 0x411a2
	ldrb r0, [r1, #0]	@ 000411a2 0878
.org 0x411a4
	cmp r0, #2	@ 000411a4 0228
.org 0x411a6
	beq.n 0x411ae	@ 000411a6 02d0
.org 0x411a8
	adds r1, r7, #0	@ 000411a8 391c
.org 0x411aa
	adds r1, #249	@ 000411aa f931
.org 0x411ac
	movs r0, #2	@ 000411ac 0220
.org 0x411ae
	strb r0, [r1, #0]	@ 000411ae 0870
.org 0x411b0
	ldrb r0, [r3, #12]	@ 000411b0 187b
.org 0x411b2
	cmp r0, #2	@ 000411b2 0228
.org 0x411b4
	bls.n 0x411cc	@ 000411b4 0ad9
.org 0x411b6
	movs r0, #2	@ 000411b6 0220
.org 0x411b8
	strb r0, [r3, #12]	@ 000411b8 1873
.org 0x411ba
	b.n 0x411d0	@ 000411ba 09e0
.org 0x411bc
	.byte 0x40,0xfd,0xff,0xff	@ 000411bc data
.org 0x411c0
	.byte 0x00,0xfd,0xff,0xff	@ 000411c0 data
.org 0x411c4
	.byte 0x90,0x56,0x85,0x08	@ 000411c4 data
.org 0x411c8
	.byte 0x15,0x13,0x04,0x08	@ 000411c8 data
.org 0x411cc
	movs r0, #2	@ 000411cc 0220
.org 0x411ce
	strb r0, [r3, #13]	@ 000411ce 5873
.org 0x411d0
	adds r1, r7, #0	@ 000411d0 391c
.org 0x411d2
	adds r1, #250	@ 000411d2 fa31
.org 0x411d4
	movs r2, #0	@ 000411d4 0022
.org 0x411d6
	movs r0, #2	@ 000411d6 0220
.org 0x411d8
	strb r0, [r1, #0]	@ 000411d8 0870
.org 0x411da
	strb r2, [r3, #15]	@ 000411da da73
.org 0x411dc
	movs r0, #70	@ 000411dc 4620
.org 0x411de
	bl 0x2b10	@ 000411de c1f797fc
.org 0x411e2
	movs r0, #1	@ 000411e2 0120
.org 0x411e4
	strb r0, [r5, #13]	@ 000411e4 6873
.org 0x411e6
	b.n 0x4129e	@ 000411e6 5ae0
.org 0x411e8
	movs r0, #254	@ 000411e8 fe20
.org 0x411ea
	ands r2, r0	@ 000411ea 0240
.org 0x411ec
	movs r0, #253	@ 000411ec fd20
.org 0x411ee
	ands r2, r0	@ 000411ee 0240
.org 0x411f0
	strb r2, [r5, #10]	@ 000411f0 aa72
.org 0x411f2
	adds r0, r5, #0	@ 000411f2 281c
.org 0x411f4
	adds r0, #140	@ 000411f4 8c30
.org 0x411f6
	str r6, [r0, #0]	@ 000411f6 0660
.org 0x411f8
	adds r0, #4	@ 000411f8 0430
.org 0x411fa
	str r6, [r0, #0]	@ 000411fa 0660
.org 0x411fc
	adds r0, #4	@ 000411fc 0430
.org 0x411fe
	strb r6, [r0, #0]	@ 000411fe 0670
.org 0x41200
	ldrb r1, [r5, #10]	@ 00041200 a97a
.org 0x41202
	movs r0, #251	@ 00041202 fb20
.org 0x41204
	ands r0, r1	@ 00041204 0840
.org 0x41206
	strb r0, [r5, #10]	@ 00041206 a872
.org 0x41208
	ldr r1, [pc, #16]	@ 00041208 0449
.org 0x4120a
	ldrb r0, [r5, #9]	@ 0004120a 687a
.org 0x4120c
	lsls r0, r0, #2	@ 0004120c 8000
.org 0x4120e
	adds r0, r0, r1	@ 0004120e 4018
.org 0x41210
	movs r1, #3	@ 00041210 0321
.org 0x41212
	str r1, [r5, #12]	@ 00041212 e960
.org 0x41214
	ldr r0, [r0, #0]	@ 00041214 0068
.org 0x41216
	ldr r0, [r0, #12]	@ 00041216 c068
.org 0x41218
	b.n 0x4129c	@ 00041218 40e0
.org 0x4121a
	.byte 0x00	@ 0004121a data
.org 0x4121b
	.byte 0x00	@ 0004121b data
.org 0x4121c
	.byte 0xf8,0x39,0x85,0x08	@ 0004121c data
.org 0x41220
	ldr r0, [r5, #84]	@ 00041220 686d
.org 0x41222
	ldr r1, [r5, #92]	@ 00041222 e96d
.org 0x41224
	adds r0, r0, r1	@ 00041224 4018
.org 0x41226
	str r0, [r5, #84]	@ 00041226 6865
.org 0x41228
	ldr r0, [r5, #88]	@ 00041228 a86d
.org 0x4122a
	ldr r1, [r5, #96]	@ 0004122a 296e
.org 0x4122c
	adds r0, r0, r1	@ 0004122c 4018
.org 0x4122e
	str r0, [r5, #88]	@ 0004122e a865
.org 0x41230
	ldr r0, [pc, #112]	@ 00041230 1c48
.org 0x41232
	cmp r1, r0	@ 00041232 8142
.org 0x41234
	bgt.n 0x4123c	@ 00041234 02dc
.org 0x41236
	adds r0, r1, #0	@ 00041236 081c
.org 0x41238
	adds r0, #64	@ 00041238 4030
.org 0x4123a
	str r0, [r5, #96]	@ 0004123a 2866
.org 0x4123c
	adds r1, r5, #0	@ 0004123c 291c
.org 0x4123e
	adds r1, #36	@ 0004123e 2431
.org 0x41240
	ldrb r0, [r1, #0]	@ 00041240 0878
.org 0x41242
	adds r0, #232	@ 00041242 e830
.org 0x41244
	strb r0, [r1, #0]	@ 00041244 0870
.org 0x41246
	adds r0, r5, #0	@ 00041246 281c
.org 0x41248
	movs r1, #3	@ 00041248 0321
.org 0x4124a
	bl 0x3a99c	@ 0004124a f9f7a7fb
.org 0x4124e
	lsls r0, r0, #24	@ 0004124e 0006
.org 0x41250
	lsrs r2, r0, #24	@ 00041250 020e
.org 0x41252
	adds r0, r7, #0	@ 00041252 381c
.org 0x41254
	adds r0, #250	@ 00041254 fa30
.org 0x41256
	ldrb r0, [r0, #0]	@ 00041256 0078
.org 0x41258
	cmp r0, #2	@ 00041258 0228
.org 0x4125a
	beq.n 0x4125e	@ 0004125a 00d0
.org 0x4125c
	movs r2, #1	@ 0004125c 0122
.org 0x4125e
	cmp r2, #0	@ 0004125e 002a
.org 0x41260
	bne.n 0x41270	@ 00041260 06d1
.org 0x41262
	adds r0, r5, #0	@ 00041262 281c
.org 0x41264
	adds r0, #140	@ 00041264 8c30
.org 0x41266
	ldr r0, [r0, #0]	@ 00041266 0068
.org 0x41268
	movs r1, #4	@ 00041268 0421
.org 0x4126a
	ands r0, r1	@ 0004126a 0840
.org 0x4126c
	cmp r0, #0	@ 0004126c 0028
.org 0x4126e
	beq.n 0x4129e	@ 0004126e 16d0
.org 0x41270
	cmp r2, #255	@ 00041270 ff2a
.org 0x41272
	beq.n 0x41284	@ 00041272 07d0
.org 0x41274
	adds r1, r5, #0	@ 00041274 291c
.org 0x41276
	adds r1, #84	@ 00041276 5431
.org 0x41278
	movs r0, #1	@ 00041278 0120
.org 0x4127a
	bl 0xd0c88	@ 0004127a 8ff005fd
.org 0x4127e
	movs r0, #39	@ 0004127e 2720
.org 0x41280
	bl 0x2b10	@ 00041280 c1f746fc
.org 0x41284
	ldrb r1, [r5, #10]	@ 00041284 a97a
.org 0x41286
	movs r0, #254	@ 00041286 fe20
.org 0x41288
	ands r0, r1	@ 00041288 0840
