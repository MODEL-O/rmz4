@ FUN_08108228  entry 0x08108228  size 200
.thumb
.org 0x108228
FUN_08108228:
	push {r4, r5, lr}	@ 00108228 30b5
.org 0x10822a
	adds r5, r0, #0	@ 0010822a 051c
.org 0x10822c
	bl 0x1cc9c	@ 0010822c 14f736fd
.org 0x108230
	ldrb r1, [r5, #10]	@ 00108230 a97a
.org 0x108232
	movs r0, #1	@ 00108232 0120
.org 0x108234
	movs r3, #0	@ 00108234 0023
.org 0x108236
	adds r2, r0, #0	@ 00108236 021c
.org 0x108238
	orrs r2, r1	@ 00108238 0a43
.org 0x10823a
	movs r0, #2	@ 0010823a 0220
.org 0x10823c
	orrs r2, r0	@ 0010823c 0243
.org 0x10823e
	orrs r2, r3	@ 0010823e 1a43
.org 0x108240
	strb r2, [r5, #10]	@ 00108240 aa72
.org 0x108242
	ldrb r0, [r5, #17]	@ 00108242 687c
.org 0x108244
	movs r1, #1	@ 00108244 0121
.org 0x108246
	ands r1, r0	@ 00108246 0140
.org 0x108248
	cmp r1, #0	@ 00108248 0029
.org 0x10824a
	beq.n 0x108252	@ 0010824a 02d0
.org 0x10824c
	movs r0, #16	@ 0010824c 1020
.org 0x10824e
	orrs r2, r0	@ 0010824e 0243
.org 0x108250
	b.n 0x108256	@ 00108250 01e0
.org 0x108252
	movs r0, #239	@ 00108252 ef20
.org 0x108254
	ands r2, r0	@ 00108254 0240
.org 0x108256
	strb r2, [r5, #10]	@ 00108256 aa72
.org 0x108258
	adds r0, r5, #0	@ 00108258 281c
.org 0x10825a
	adds r0, #76	@ 0010825a 4c30
.org 0x10825c
	strb r1, [r0, #0]	@ 0010825c 0170
.org 0x10825e
	adds r3, r5, #0	@ 0010825e 2b1c
.org 0x108260
	adds r3, #74	@ 00108260 4a33
.org 0x108262
	lsls r1, r1, #4	@ 00108262 0901
.org 0x108264
	ldrb r2, [r3, #0]	@ 00108264 1a78
.org 0x108266
	movs r0, #17	@ 00108266 1120
.org 0x108268
	negs r0, r0	@ 00108268 4042
.org 0x10826a
	ands r0, r2	@ 0010826a 1040
.org 0x10826c
	orrs r0, r1	@ 0010826c 0843
.org 0x10826e
	strb r0, [r3, #0]	@ 0010826e 1870
.org 0x108270
	ldrb r0, [r5, #17]	@ 00108270 687c
.org 0x108272
	lsrs r2, r0, #1	@ 00108272 4208
.org 0x108274
	cmp r2, #0	@ 00108274 002a
.org 0x108276
	beq.n 0x108280	@ 00108276 03d0
.org 0x108278
	ldrb r0, [r5, #10]	@ 00108278 a87a
.org 0x10827a
	movs r1, #32	@ 0010827a 2021
.org 0x10827c
	orrs r0, r1	@ 0010827c 0843
.org 0x10827e
	b.n 0x108286	@ 0010827e 02e0
.org 0x108280
	ldrb r1, [r5, #10]	@ 00108280 a97a
.org 0x108282
	movs r0, #223	@ 00108282 df20
.org 0x108284
	ands r0, r1	@ 00108284 0840
.org 0x108286
	strb r0, [r5, #10]	@ 00108286 a872
.org 0x108288
	movs r4, #1	@ 00108288 0124
.org 0x10828a
	adds r1, r4, #0	@ 0010828a 211c
.org 0x10828c
	ands r1, r2	@ 0010828c 1140
.org 0x10828e
	adds r0, r5, #0	@ 0010828e 281c
.org 0x108290
	adds r0, #77	@ 00108290 4d30
.org 0x108292
	strb r1, [r0, #0]	@ 00108292 0170
.org 0x108294
	lsls r1, r1, #5	@ 00108294 4901
.org 0x108296
	ldrb r2, [r3, #0]	@ 00108296 1a78
.org 0x108298
	movs r0, #33	@ 00108298 2120
.org 0x10829a
	negs r0, r0	@ 0010829a 4042
.org 0x10829c
	ands r0, r2	@ 0010829c 1040
.org 0x10829e
	orrs r0, r1	@ 0010829e 0843
.org 0x1082a0
	strb r0, [r3, #0]	@ 001082a0 1870
.org 0x1082a2
	ldr r1, [pc, #76]	@ 001082a2 1349
.org 0x1082a4
	adds r0, r5, #0	@ 001082a4 281c
.org 0x1082a6
	bl 0x1cf00	@ 001082a6 14f72bfe
.org 0x1082aa
	ldr r3, [r5, #88]	@ 001082aa ab6d
.org 0x1082ac
	ldr r0, [pc, #68]	@ 001082ac 1148
.org 0x1082ae
	adds r3, r3, r0	@ 001082ae 1b18
.org 0x1082b0
	str r3, [r5, #88]	@ 001082b0 ab65
.org 0x1082b2
	ldr r2, [pc, #68]	@ 001082b2 114a
.org 0x1082b4
	ldrb r0, [r5, #17]	@ 001082b4 687c
.org 0x1082b6
	lsls r0, r0, #3	@ 001082b6 c000
.org 0x1082b8
	adds r0, r0, r2	@ 001082b8 8018
.org 0x1082ba
	ldr r1, [r0, #0]	@ 001082ba 0168
.org 0x1082bc
	lsls r1, r1, #8	@ 001082bc 0902
.org 0x1082be
	ldr r0, [r5, #84]	@ 001082be 686d
.org 0x1082c0
	adds r0, r0, r1	@ 001082c0 4018
.org 0x1082c2
	str r0, [r5, #84]	@ 001082c2 6865
.org 0x1082c4
	ldrb r0, [r5, #17]	@ 001082c4 687c
.org 0x1082c6
	lsls r0, r0, #3	@ 001082c6 c000
.org 0x1082c8
	adds r2, #4	@ 001082c8 0432
.org 0x1082ca
	adds r0, r0, r2	@ 001082ca 8018
.org 0x1082cc
	ldr r0, [r0, #0]	@ 001082cc 0068
.org 0x1082ce
	lsls r0, r0, #8	@ 001082ce 0002
.org 0x1082d0
	adds r3, r3, r0	@ 001082d0 1b18
.org 0x1082d2
	str r3, [r5, #88]	@ 001082d2 ab65
.org 0x1082d4
	ldr r1, [pc, #36]	@ 001082d4 0949
.org 0x1082d6
	ldrb r0, [r5, #9]	@ 001082d6 687a
.org 0x1082d8
	lsls r0, r0, #2	@ 001082d8 8000
.org 0x1082da
	adds r0, r0, r1	@ 001082da 4018
.org 0x1082dc
	str r4, [r5, #12]	@ 001082dc ec60
.org 0x1082de
	ldr r0, [r0, #0]	@ 001082de 0068
.org 0x1082e0
	ldr r0, [r0, #4]	@ 001082e0 4068
.org 0x1082e2
	str r0, [r5, #20]	@ 001082e2 6861
.org 0x1082e4
	adds r0, r5, #0	@ 001082e4 281c
.org 0x1082e6
	bl 0x108300	@ 001082e6 00f00bf8
.org 0x1082ea
	pop {r4, r5}	@ 001082ea 30bc
.org 0x1082ec
	pop {r0}	@ 001082ec 01bc
.org 0x1082ee
	bx r0	@ 001082ee 0047
