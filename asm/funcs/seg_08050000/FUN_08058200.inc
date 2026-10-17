@ FUN_08058200  entry 0x08058200  size 256
.thumb
.org 0x58200
FUN_08058200:
	push {r4, r5, lr}	@ 00058200 30b5
.org 0x58202
	adds r4, r0, #0	@ 00058202 041c
.org 0x58204
	ldrb r0, [r4, #15]	@ 00058204 e07b
.org 0x58206
	cmp r0, #0	@ 00058206 0028
.org 0x58208
	bne.n 0x58298	@ 00058208 46d1
.org 0x5820a
	ldr r1, [pc, #80]	@ 0005820a 1449
.org 0x5820c
	adds r0, r4, #0	@ 0005820c 201c
.org 0x5820e
	bl 0x1cf00	@ 0005820e c4f777fe
.org 0x58212
	movs r2, #0	@ 00058212 0022
.org 0x58214
	adds r0, r4, #0	@ 00058214 201c
.org 0x58216
	adds r0, #204	@ 00058216 cc30
.org 0x58218
	ldr r0, [r0, #0]	@ 00058218 0068
.org 0x5821a
	movs r1, #240	@ 0005821a f021
.org 0x5821c
	lsls r1, r1, #8	@ 0005821c 0902
.org 0x5821e
	adds r0, r0, r1	@ 0005821e 4018
.org 0x58220
	ldr r1, [r4, #84]	@ 00058220 616d
.org 0x58222
	cmp r1, r0	@ 00058222 8142
.org 0x58224
	bge.n 0x58228	@ 00058224 00da
.org 0x58226
	movs r2, #1	@ 00058226 0122
.org 0x58228
	adds r5, r2, #0	@ 00058228 151c
.org 0x5822a
	movs r3, #1	@ 0005822a 0123
.org 0x5822c
	adds r1, r5, #0	@ 0005822c 291c
.org 0x5822e
	ands r1, r3	@ 0005822e 1940
.org 0x58230
	adds r0, r4, #0	@ 00058230 201c
.org 0x58232
	adds r0, #76	@ 00058232 4c30
.org 0x58234
	strb r1, [r0, #0]	@ 00058234 0170
.org 0x58236
	movs r2, #74	@ 00058236 4a22
.org 0x58238
	adds r2, r2, r4	@ 00058238 1219
.org 0x5823a
	mov ip, r2	@ 0005823a 9446
.org 0x5823c
	lsls r1, r1, #4	@ 0005823c 0901
.org 0x5823e
	ldrb r2, [r2, #0]	@ 0005823e 1278
.org 0x58240
	movs r0, #17	@ 00058240 1120
.org 0x58242
	negs r0, r0	@ 00058242 4042
.org 0x58244
	ands r0, r2	@ 00058244 1040
.org 0x58246
	orrs r0, r1	@ 00058246 0843
.org 0x58248
	mov r1, ip	@ 00058248 6146
.org 0x5824a
	strb r0, [r1, #0]	@ 0005824a 0870
.org 0x5824c
	adds r0, r5, #0	@ 0005824c 281c
.org 0x5824e
	ands r0, r3	@ 0005824e 1840
.org 0x58250
	cmp r0, #0	@ 00058250 0028
.org 0x58252
	beq.n 0x58260	@ 00058252 05d0
.org 0x58254
	ldrb r0, [r4, #10]	@ 00058254 a07a
.org 0x58256
	movs r1, #16	@ 00058256 1021
.org 0x58258
	orrs r0, r1	@ 00058258 0843
.org 0x5825a
	b.n 0x58266	@ 0005825a 04e0
.org 0x5825c
	.byte 0x08,0xa0,0x00,0x00	@ 0005825c data
.org 0x58260
	ldrb r1, [r4, #10]	@ 00058260 a17a
.org 0x58262
	movs r0, #239	@ 00058262 ef20
.org 0x58264
	ands r0, r1	@ 00058264 0840
.org 0x58266
	strb r0, [r4, #10]	@ 00058266 a072
.org 0x58268
	adds r0, r4, #0	@ 00058268 201c
.org 0x5826a
	adds r0, #184	@ 0005826a b830
.org 0x5826c
	ldr r2, [r0, #0]	@ 0005826c 0268
.org 0x5826e
	adds r0, #4	@ 0005826e 0430
.org 0x58270
	str r2, [r0, #0]	@ 00058270 0260
.org 0x58272
	ldr r1, [pc, #144]	@ 00058272 2449
.org 0x58274
	subs r0, #7	@ 00058274 0738
.org 0x58276
	ldrb r0, [r0, #0]	@ 00058276 0078
.org 0x58278
	lsls r0, r0, #1	@ 00058278 4000
.org 0x5827a
	adds r0, r0, r1	@ 0005827a 4018
.org 0x5827c
	movs r1, #0	@ 0005827c 0021
.org 0x5827e
	ldrsh r0, [r0, r1]	@ 0005827e 405e
.org 0x58280
	lsls r0, r0, #1	@ 00058280 4000
.org 0x58282
	adds r0, r2, r0	@ 00058282 1018
.org 0x58284
	str r0, [r4, #88]	@ 00058284 a065
.org 0x58286
	lsls r1, r5, #1	@ 00058286 6900
.org 0x58288
	subs r1, #1	@ 00058288 0139
.org 0x5828a
	lsls r0, r1, #1	@ 0005828a 4800
.org 0x5828c
	adds r0, r0, r1	@ 0005828c 4018
.org 0x5828e
	lsls r0, r0, #8	@ 0005828e 0002
.org 0x58290
	str r0, [r4, #92]	@ 00058290 e065
.org 0x58292
	ldrb r0, [r4, #15]	@ 00058292 e07b
.org 0x58294
	adds r0, #1	@ 00058294 0130
.org 0x58296
	strb r0, [r4, #15]	@ 00058296 e073
.org 0x58298
	adds r0, r4, #0	@ 00058298 201c
.org 0x5829a
	bl 0x1cff0	@ 0005829a c4f7a9fe
.org 0x5829e
	adds r0, r4, #0	@ 0005829e 201c
.org 0x582a0
	adds r0, #116	@ 000582a0 7430
.org 0x582a2
	ldr r3, [pc, #100]	@ 000582a2 194b
.org 0x582a4
	ldrb r1, [r4, #30]	@ 000582a4 a17f
.org 0x582a6
	lsls r1, r1, #8	@ 000582a6 0902
.org 0x582a8
	adds r2, r4, #0	@ 000582a8 221c
.org 0x582aa
	adds r2, #112	@ 000582aa 7032
.org 0x582ac
	ldrb r2, [r2, #0]	@ 000582ac 1278
.org 0x582ae
	orrs r1, r2	@ 000582ae 1143
.org 0x582b0
	ldr r2, [pc, #88]	@ 000582b0 164a
.org 0x582b2
	adds r1, r1, r2	@ 000582b2 8918
.org 0x582b4
	lsls r1, r1, #2	@ 000582b4 8900
.org 0x582b6
	adds r1, r1, r3	@ 000582b6 c918
.org 0x582b8
	adds r2, r4, #0	@ 000582b8 221c
.org 0x582ba
	adds r2, #113	@ 000582ba 7132
.org 0x582bc
	ldrb r2, [r2, #0]	@ 000582bc 1278
.org 0x582be
	lsls r2, r2, #24	@ 000582be 1206
.org 0x582c0
	asrs r2, r2, #24	@ 000582c0 1216
.org 0x582c2
	ldr r1, [r1, #0]	@ 000582c2 0968
.org 0x582c4
	lsls r2, r2, #2	@ 000582c4 9200
.org 0x582c6
	adds r2, r2, r1	@ 000582c6 5218
.org 0x582c8
	ldr r1, [r2, #0]	@ 000582c8 1168
.org 0x582ca
	ldrb r2, [r1, #0]	@ 000582ca 0a78
.org 0x582cc
	lsls r1, r2, #1	@ 000582cc 5100
.org 0x582ce
	adds r1, r1, r2	@ 000582ce 8918
.org 0x582d0
	lsls r1, r1, #3	@ 000582d0 c900
.org 0x582d2
	ldr r2, [pc, #60]	@ 000582d2 0f4a
.org 0x582d4
	adds r1, r1, r2	@ 000582d4 8918
.org 0x582d6
	bl 0x5784	@ 000582d6 adf755fa
.org 0x582da
	ldr r2, [r4, #84]	@ 000582da 626d
.org 0x582dc
	ldr r0, [r4, #92]	@ 000582dc e06d
.org 0x582de
	adds r2, r2, r0	@ 000582de 1218
.org 0x582e0
	str r2, [r4, #84]	@ 000582e0 6265
.org 0x582e2
	adds r0, r4, #0	@ 000582e2 201c
.org 0x582e4
	adds r0, #204	@ 000582e4 cc30
.org 0x582e6
	ldr r0, [r0, #0]	@ 000582e6 0068
.org 0x582e8
	subs r0, r2, r0	@ 000582e8 101a
.org 0x582ea
	ldr r1, [pc, #40]	@ 000582ea 0a49
.org 0x582ec
	adds r0, r0, r1	@ 000582ec 4018
.org 0x582ee
	movs r1, #200	@ 000582ee c821
.org 0x582f0
	lsls r1, r1, #9	@ 000582f0 4902
.org 0x582f2
	cmp r0, r1	@ 000582f2 8842
.org 0x582f4
	bhi.n 0x582fe	@ 000582f4 03d8
.org 0x582f6
	movs r1, #0	@ 000582f6 0021
.org 0x582f8
	movs r0, #4	@ 000582f8 0420
.org 0x582fa
	strb r0, [r4, #14]	@ 000582fa a073
.org 0x582fc
	strb r1, [r4, #15]	@ 000582fc e173
.org 0x582fe
	pop {r4, r5}	@ 000582fe 30bc
