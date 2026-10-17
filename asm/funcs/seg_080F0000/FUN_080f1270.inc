@ FUN_080f1270  entry 0x080f1270  size 172
.thumb
.org 0xf1270
FUN_080f1270:
	push {r4, r5, lr}	@ 000f1270 30b5
.org 0xf1272
	adds r4, r0, #0	@ 000f1272 041c
.org 0xf1274
	ldrb r5, [r4, #17]	@ 000f1274 657c
.org 0xf1276
	cmp r5, #1	@ 000f1276 012d
.org 0xf1278
	beq.n 0xf12e2	@ 000f1278 33d0
.org 0xf127a
	cmp r5, #1	@ 000f127a 012d
.org 0xf127c
	bgt.n 0xf1284	@ 000f127c 02dc
.org 0xf127e
	cmp r5, #0	@ 000f127e 002d
.org 0xf1280
	beq.n 0xf128a	@ 000f1280 03d0
.org 0xf1282
	b.n 0xf131c	@ 000f1282 4be0
.org 0xf1284
	cmp r5, #2	@ 000f1284 022d
.org 0xf1286
	beq.n 0xf1304	@ 000f1286 3dd0
.org 0xf1288
	b.n 0xf131c	@ 000f1288 48e0
.org 0xf128a
	ldr r0, [pc, #108]	@ 000f128a 1b48
.org 0xf128c
	movs r2, #194	@ 000f128c c222
.org 0xf128e
	lsls r2, r2, #1	@ 000f128e 5200
.org 0xf1290
	adds r0, r0, r2	@ 000f1290 8018
.org 0xf1292
	movs r1, #128	@ 000f1292 8021
.org 0xf1294
	lsls r1, r1, #2	@ 000f1294 8900
.org 0xf1296
	strh r1, [r0, #0]	@ 000f1296 0180
.org 0xf1298
	ldr r0, [pc, #96]	@ 000f1298 1848
.org 0xf129a
	adds r0, r0, r2	@ 000f129a 8018
.org 0xf129c
	movs r1, #4	@ 000f129c 0421
.org 0xf129e
	strh r1, [r0, #0]	@ 000f129e 0180
.org 0xf12a0
	movs r1, #194	@ 000f12a0 c221
.org 0xf12a2
	lsls r1, r1, #8	@ 000f12a2 0902
.org 0xf12a4
	adds r0, r4, #0	@ 000f12a4 201c
.org 0xf12a6
	bl 0x1cf00	@ 000f12a6 2bf72bfe
.org 0xf12aa
	adds r2, r4, #0	@ 000f12aa 221c
.org 0xf12ac
	adds r2, #73	@ 000f12ac 4932
.org 0xf12ae
	ldrb r1, [r2, #0]	@ 000f12ae 1178
.org 0xf12b0
	movs r0, #13	@ 000f12b0 0d20
.org 0xf12b2
	negs r0, r0	@ 000f12b2 4042
.org 0xf12b4
	ands r0, r1	@ 000f12b4 0840
.org 0xf12b6
	strb r0, [r2, #0]	@ 000f12b6 1070
.org 0xf12b8
	ldrb r1, [r4, #10]	@ 000f12b8 a17a
.org 0xf12ba
	movs r0, #239	@ 000f12ba ef20
.org 0xf12bc
	ands r0, r1	@ 000f12bc 0840
.org 0xf12be
	strb r0, [r4, #10]	@ 000f12be a072
.org 0xf12c0
	adds r0, r4, #0	@ 000f12c0 201c
.org 0xf12c2
	adds r0, #76	@ 000f12c2 4c30
.org 0xf12c4
	strb r5, [r0, #0]	@ 000f12c4 0570
.org 0xf12c6
	adds r2, #1	@ 000f12c6 0132
.org 0xf12c8
	ldrb r1, [r2, #0]	@ 000f12c8 1178
.org 0xf12ca
	movs r0, #17	@ 000f12ca 1120
.org 0xf12cc
	negs r0, r0	@ 000f12cc 4042
.org 0xf12ce
	ands r0, r1	@ 000f12ce 0840
.org 0xf12d0
	strb r0, [r2, #0]	@ 000f12d0 1070
.org 0xf12d2
	ldr r0, [r4, #84]	@ 000f12d2 606d
.org 0xf12d4
	ldr r1, [r4, #88]	@ 000f12d4 a16d
.org 0xf12d6
	bl 0x8534	@ 000f12d6 17f72df9
.org 0xf12da
	str r0, [r4, #88]	@ 000f12da a065
.org 0xf12dc
	ldrb r0, [r4, #17]	@ 000f12dc 607c
.org 0xf12de
	adds r0, #1	@ 000f12de 0130
.org 0xf12e0
	strb r0, [r4, #17]	@ 000f12e0 6074
.org 0xf12e2
	ldr r0, [r4, #24]	@ 000f12e2 a069
.org 0xf12e4
	ldrb r1, [r0, #9]	@ 000f12e4 417a
.org 0xf12e6
	movs r0, #1	@ 000f12e6 0120
.org 0xf12e8
	ands r0, r1	@ 000f12e8 0840
.org 0xf12ea
	cmp r0, #0	@ 000f12ea 0028
.org 0xf12ec
	beq.n 0xf131c	@ 000f12ec 16d0
.org 0xf12ee
	ldr r1, [pc, #16]	@ 000f12ee 0449
.org 0xf12f0
	adds r0, r4, #0	@ 000f12f0 201c
.org 0xf12f2
	bl 0x1cf00	@ 000f12f2 2bf705fe
.org 0xf12f6
	b.n 0xf1316	@ 000f12f6 0ee0
.org 0xf12f8
	.byte 0x40,0xe2,0x02,0x02	@ 000f12f8 data
.org 0xf12fc
	.byte 0x40,0xdc,0x02,0x02	@ 000f12fc data
.org 0xf1300
	.byte 0x06,0xc2,0x00,0x00	@ 000f1300 data
.org 0xf1304
	ldr r0, [r4, #24]	@ 000f1304 a069
.org 0xf1306
	ldrb r0, [r0, #9]	@ 000f1306 407a
.org 0xf1308
	ands r5, r0	@ 000f1308 0540
.org 0xf130a
	cmp r5, #0	@ 000f130a 002d
.org 0xf130c
	beq.n 0xf131c	@ 000f130c 06d0
.org 0xf130e
	ldr r0, [pc, #24]	@ 000f130e 0648
.org 0xf1310
	ldr r1, [pc, #24]	@ 000f1310 0649
.org 0xf1312
	bl 0x1126ac	@ 000f1312 21f0cbf9
.org 0xf1316
	ldrb r0, [r4, #17]	@ 000f1316 607c
.org 0xf1318
	adds r0, #1	@ 000f1318 0130
.org 0xf131a
	strb r0, [r4, #17]	@ 000f131a 6074
