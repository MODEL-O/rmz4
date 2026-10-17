@ FUN_08090190  entry 0x08090190  size 310
.thumb
.org 0x90190
FUN_08090190:
	push {r4, r5, r6, r7, lr}	@ 00090190 f0b5
.org 0x90192
	mov r7, r9	@ 00090192 4f46
.org 0x90194
	mov r6, r8	@ 00090194 4646
.org 0x90196
	push {r6, r7}	@ 00090196 c0b4
.org 0x90198
	adds r5, r0, #0	@ 00090198 051c
.org 0x9019a
	ldr r0, [r5, #40]	@ 0009019a a86a
.org 0x9019c
	mov r8, r0	@ 0009019c 8046
.org 0x9019e
	ldrb r0, [r0, #10]	@ 0009019e 807a
.org 0x901a0
	lsrs r4, r0, #4	@ 000901a0 0409
.org 0x901a2
	movs r0, #1	@ 000901a2 0120
.org 0x901a4
	ands r4, r0	@ 000901a4 0440
.org 0x901a6
	adds r0, r5, #0	@ 000901a6 281c
.org 0x901a8
	adds r0, #183	@ 000901a8 b730
.org 0x901aa
	ldrb r6, [r0, #0]	@ 000901aa 0678
.org 0x901ac
	ldrb r0, [r5, #15]	@ 000901ac e87b
.org 0x901ae
	cmp r0, #0	@ 000901ae 0028
.org 0x901b0
	bne.n 0x90228	@ 000901b0 3ad1
.org 0x901b2
	adds r0, r5, #0	@ 000901b2 281c
.org 0x901b4
	adds r0, #116	@ 000901b4 7430
.org 0x901b6
	ldr r1, [pc, #28]	@ 000901b6 0749
.org 0x901b8
	bl 0x5784	@ 000901b8 75f7e4fa
.org 0x901bc
	ldrb r1, [r5, #10]	@ 000901bc a97a
.org 0x901be
	movs r0, #1	@ 000901be 0120
.org 0x901c0
	movs r3, #0	@ 000901c0 0023
.org 0x901c2
	adds r2, r0, #0	@ 000901c2 021c
.org 0x901c4
	orrs r2, r1	@ 000901c4 0a43
.org 0x901c6
	strb r2, [r5, #10]	@ 000901c6 aa72
.org 0x901c8
	adds r1, r4, #0	@ 000901c8 211c
.org 0x901ca
	cmp r1, #0	@ 000901ca 0029
.org 0x901cc
	beq.n 0x901d8	@ 000901cc 04d0
.org 0x901ce
	movs r0, #16	@ 000901ce 1020
.org 0x901d0
	orrs r2, r0	@ 000901d0 0243
.org 0x901d2
	b.n 0x901dc	@ 000901d2 03e0
.org 0x901d4
	.byte 0x8c,0x00,0x86,0x08	@ 000901d4 data
.org 0x901d8
	movs r0, #239	@ 000901d8 ef20
.org 0x901da
	ands r2, r0	@ 000901da 0240
.org 0x901dc
	strb r2, [r5, #10]	@ 000901dc aa72
.org 0x901de
	adds r0, r5, #0	@ 000901de 281c
.org 0x901e0
	adds r0, #76	@ 000901e0 4c30
.org 0x901e2
	strb r1, [r0, #0]	@ 000901e2 0170
.org 0x901e4
	adds r3, r5, #0	@ 000901e4 2b1c
.org 0x901e6
	adds r3, #74	@ 000901e6 4a33
.org 0x901e8
	lsls r1, r1, #4	@ 000901e8 0901
.org 0x901ea
	ldrb r2, [r3, #0]	@ 000901ea 1a78
.org 0x901ec
	movs r0, #17	@ 000901ec 1120
.org 0x901ee
	negs r0, r0	@ 000901ee 4042
.org 0x901f0
	ands r0, r2	@ 000901f0 1040
.org 0x901f2
	orrs r0, r1	@ 000901f2 0843
.org 0x901f4
	strb r0, [r3, #0]	@ 000901f4 1870
.org 0x901f6
	ldr r1, [pc, #140]	@ 000901f6 2349
.org 0x901f8
	adds r0, r5, #0	@ 000901f8 281c
.org 0x901fa
	bl 0x1cf00	@ 000901fa 8cf781fe
.org 0x901fe
	ldr r1, [pc, #136]	@ 000901fe 2249
.org 0x90200
	adds r0, r6, #0	@ 00090200 301c
.org 0x90202
	adds r0, #64	@ 00090202 4030
.org 0x90204
	lsls r0, r0, #24	@ 00090204 0006
.org 0x90206
	lsrs r0, r0, #23	@ 00090206 c00d
.org 0x90208
	adds r0, r0, r1	@ 00090208 4018
.org 0x9020a
	movs r2, #0	@ 0009020a 0022
.org 0x9020c
	ldrsh r0, [r0, r2]	@ 0009020c 805e
.org 0x9020e
	lsls r0, r0, #6	@ 0009020e 8001
.org 0x90210
	str r0, [r5, #92]	@ 00090210 e865
.org 0x90212
	lsls r0, r6, #1	@ 00090212 7000
.org 0x90214
	adds r0, r0, r1	@ 00090214 4018
.org 0x90216
	movs r1, #0	@ 00090216 0021
.org 0x90218
	ldrsh r0, [r0, r1]	@ 00090218 405e
.org 0x9021a
	lsls r0, r0, #6	@ 0009021a 8001
.org 0x9021c
	str r0, [r5, #96]	@ 0009021c 2866
.org 0x9021e
	movs r0, #20	@ 0009021e 1420
.org 0x90220
	strb r0, [r5, #18]	@ 00090220 a874
.org 0x90222
	ldrb r0, [r5, #15]	@ 00090222 e87b
.org 0x90224
	adds r0, #1	@ 00090224 0130
.org 0x90226
	strb r0, [r5, #15]	@ 00090226 e873
.org 0x90228
	ldrb r0, [r5, #18]	@ 00090228 a87c
.org 0x9022a
	cmp r0, #4	@ 0009022a 0428
.org 0x9022c
	bne.n 0x90236	@ 0009022c 03d1
.org 0x9022e
	ldr r1, [pc, #92]	@ 0009022e 1749
.org 0x90230
	adds r0, r5, #0	@ 00090230 281c
.org 0x90232
	bl 0x1cf00	@ 00090232 8cf765fe
.org 0x90236
	adds r0, r5, #0	@ 00090236 281c
.org 0x90238
	bl 0x1cff0	@ 00090238 8cf7dafe
.org 0x9023c
	ldrb r0, [r5, #18]	@ 0009023c a87c
.org 0x9023e
	cmp r0, #0	@ 0009023e 0028
.org 0x90240
	beq.n 0x90246	@ 00090240 01d0
.org 0x90242
	subs r0, #1	@ 00090242 0138
.org 0x90244
	strb r0, [r5, #18]	@ 00090244 a874
.org 0x90246
	ldrb r0, [r5, #18]	@ 00090246 a87c
.org 0x90248
	lsls r0, r0, #6	@ 00090248 8001
.org 0x9024a
	movs r1, #20	@ 0009024a 1421
.org 0x9024c
	bl 0x128fb8	@ 0009024c 98f0b4fe
.org 0x90250
	ldr r1, [pc, #52]	@ 00090250 0d49
.org 0x90252
	lsls r0, r0, #24	@ 00090252 0006
.org 0x90254
	lsrs r0, r0, #23	@ 00090254 c00d
.org 0x90256
	adds r0, r0, r1	@ 00090256 4018
.org 0x90258
	ldrh r7, [r0, #0]	@ 00090258 0788
.org 0x9025a
	movs r2, #128	@ 0009025a 8022
.org 0x9025c
	lsls r2, r2, #1	@ 0009025c 5200
.org 0x9025e
	mov r9, r2	@ 0009025e 9146
.org 0x90260
	mov r0, r8	@ 00090260 4046
.org 0x90262
	ldr r6, [r0, #84]	@ 00090262 466d
.org 0x90264
	ldr r4, [r5, #92]	@ 00090264 ec6d
.org 0x90266
	adds r0, r4, #0	@ 00090266 201c
.org 0x90268
	muls r0, r7	@ 00090268 7843
.org 0x9026a
	mov r1, r9	@ 0009026a 4946
.org 0x9026c
	bl 0x128fb8	@ 0009026c 98f0a4fe
.org 0x90270
	adds r2, r0, #0	@ 00090270 021c
.org 0x90272
	mov r0, r8	@ 00090272 4046
.org 0x90274
	ldrb r1, [r0, #10]	@ 00090274 817a
.org 0x90276
	movs r0, #16	@ 00090276 1020
.org 0x90278
	ands r0, r1	@ 00090278 0840
.org 0x9027a
	cmp r0, #0	@ 0009027a 0028
.org 0x9027c
	beq.n 0x90290	@ 0009027c 08d0
.org 0x9027e
	movs r1, #128	@ 0009027e 8021
.org 0x90280
	lsls r1, r1, #3	@ 00090280 c900
.org 0x90282
	b.n 0x90292	@ 00090282 06e0
.org 0x90284
	.byte 0x07,0x39,0x00,0x00	@ 00090284 data
.org 0x90288
	.byte 0x0c,0x93,0x12,0x08	@ 00090288 data
.org 0x9028c
	.byte 0x08,0x39,0x00,0x00	@ 0009028c data
.org 0x90290
	ldr r1, [pc, #68]	@ 00090290 1149
.org 0x90292
	adds r0, r4, r1	@ 00090292 6018
.org 0x90294
	adds r0, r6, r0	@ 00090294 3018
.org 0x90296
	subs r0, r0, r2	@ 00090296 801a
.org 0x90298
	str r0, [r5, #84]	@ 00090298 6865
.org 0x9029a
	ldr r1, [r5, #96]	@ 0009029a 296e
.org 0x9029c
	ldr r2, [pc, #60]	@ 0009029c 0f4a
.org 0x9029e
	adds r0, r1, r2	@ 0009029e 8818
.org 0x902a0
	mov r2, r8	@ 000902a0 4246
.org 0x902a2
	ldr r4, [r2, #88]	@ 000902a2 946d
.org 0x902a4
	adds r4, r4, r0	@ 000902a4 2418
.org 0x902a6
	adds r0, r1, #0	@ 000902a6 081c
.org 0x902a8
	muls r0, r7	@ 000902a8 7843
.org 0x902aa
	mov r1, r9	@ 000902aa 4946
.org 0x902ac
	bl 0x128fb8	@ 000902ac 98f084fe
.org 0x902b0
	subs r4, r4, r0	@ 000902b0 241a
.org 0x902b2
	str r4, [r5, #88]	@ 000902b2 ac65
.org 0x902b4
	ldrb r1, [r5, #18]	@ 000902b4 a97c
.org 0x902b6
	cmp r1, #0	@ 000902b6 0029
.org 0x902b8
	bne.n 0x902ca	@ 000902b8 07d1
.org 0x902ba
	adds r0, r5, #0	@ 000902ba 281c
.org 0x902bc
	adds r0, #115	@ 000902bc 7330
.org 0x902be
	ldrb r0, [r0, #0]	@ 000902be 0078
.org 0x902c0
	cmp r0, #3	@ 000902c0 0328
.org 0x902c2
	bne.n 0x902ca	@ 000902c2 02d1
.org 0x902c4
	movs r0, #1	@ 000902c4 0120
