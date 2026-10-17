@ FUN_080b1218  entry 0x080b1218  size 312
.thumb
.org 0xb1218
FUN_080b1218:
	push {r4, r5, r6, r7, lr}	@ 000b1218 f0b5
.org 0xb121a
	adds r6, r0, #0	@ 000b121a 061c
.org 0xb121c
	bl 0x1ce54	@ 000b121c 6bf71afe
.org 0xb1220
	ldrb r1, [r6, #10]	@ 000b1220 b17a
.org 0xb1222
	movs r0, #1	@ 000b1222 0120
.org 0xb1224
	orrs r0, r1	@ 000b1224 0843
.org 0xb1226
	movs r1, #2	@ 000b1226 0221
.org 0xb1228
	orrs r0, r1	@ 000b1228 0843
.org 0xb122a
	movs r5, #0	@ 000b122a 0025
.org 0xb122c
	movs r1, #239	@ 000b122c ef21
.org 0xb122e
	ands r0, r1	@ 000b122e 0840
.org 0xb1230
	strb r0, [r6, #10]	@ 000b1230 b072
.org 0xb1232
	movs r2, #1	@ 000b1232 0122
.org 0xb1234
	adds r0, r6, #0	@ 000b1234 301c
.org 0xb1236
	adds r0, #76	@ 000b1236 4c30
.org 0xb1238
	strb r5, [r0, #0]	@ 000b1238 0570
.org 0xb123a
	adds r3, r6, #0	@ 000b123a 331c
.org 0xb123c
	adds r3, #74	@ 000b123c 4a33
.org 0xb123e
	ldrb r1, [r3, #0]	@ 000b123e 1978
.org 0xb1240
	movs r0, #17	@ 000b1240 1120
.org 0xb1242
	negs r0, r0	@ 000b1242 4042
.org 0xb1244
	ands r0, r1	@ 000b1244 0840
.org 0xb1246
	strb r0, [r3, #0]	@ 000b1246 1870
.org 0xb1248
	ldr r1, [pc, #184]	@ 000b1248 2e49
.org 0xb124a
	ldrb r0, [r6, #9]	@ 000b124a 707a
.org 0xb124c
	lsls r0, r0, #2	@ 000b124c 8000
.org 0xb124e
	adds r0, r0, r1	@ 000b124e 4018
.org 0xb1250
	str r2, [r6, #12]	@ 000b1250 f260
.org 0xb1252
	ldr r0, [r0, #0]	@ 000b1252 0068
.org 0xb1254
	ldr r0, [r0, #4]	@ 000b1254 4068
.org 0xb1256
	str r0, [r6, #20]	@ 000b1256 7061
.org 0xb1258
	movs r1, #185	@ 000b1258 b921
.org 0xb125a
	lsls r1, r1, #8	@ 000b125a 0902
.org 0xb125c
	adds r0, r6, #0	@ 000b125c 301c
.org 0xb125e
	bl 0x1cf00	@ 000b125e 6bf74ffe
.org 0xb1262
	ldrb r1, [r6, #10]	@ 000b1262 b17a
.org 0xb1264
	movs r0, #4	@ 000b1264 0420
.org 0xb1266
	orrs r0, r1	@ 000b1266 0843
.org 0xb1268
	strb r0, [r6, #10]	@ 000b1268 b072
.org 0xb126a
	adds r4, r6, #0	@ 000b126a 341c
.org 0xb126c
	adds r4, #116	@ 000b126c 7434
.org 0xb126e
	ldr r1, [pc, #152]	@ 000b126e 2649
.org 0xb1270
	adds r7, r6, #0	@ 000b1270 371c
.org 0xb1272
	adds r7, #84	@ 000b1272 5437
.org 0xb1274
	adds r0, r4, #0	@ 000b1274 201c
.org 0xb1276
	adds r2, r7, #0	@ 000b1276 3a1c
.org 0xb1278
	movs r3, #1	@ 000b1278 0123
.org 0xb127a
	bl 0x5760	@ 000b127a 54f771fa
.org 0xb127e
	str r6, [r4, #44]	@ 000b127e e662
.org 0xb1280
	ldr r0, [pc, #136]	@ 000b1280 2248
.org 0xb1282
	str r0, [r4, #36]	@ 000b1282 6062
.org 0xb1284
	strb r5, [r6, #18]	@ 000b1284 b574
.org 0xb1286
	strb r5, [r6, #19]	@ 000b1286 f574
.org 0xb1288
	adds r0, r6, #0	@ 000b1288 301c
.org 0xb128a
	adds r0, #192	@ 000b128a c030
.org 0xb128c
	strb r5, [r0, #0]	@ 000b128c 0570
.org 0xb128e
	adds r0, #1	@ 000b128e 0130
.org 0xb1290
	strb r5, [r0, #0]	@ 000b1290 0570
.org 0xb1292
	adds r1, r6, #0	@ 000b1292 311c
.org 0xb1294
	adds r1, #188	@ 000b1294 bc31
.org 0xb1296
	ldr r4, [pc, #120]	@ 000b1296 1e4c
.org 0xb1298
	ldrb r0, [r6, #17]	@ 000b1298 707c
.org 0xb129a
	subs r0, #1	@ 000b129a 0138
.org 0xb129c
	lsls r0, r0, #2	@ 000b129c 8000
.org 0xb129e
	adds r0, r0, r4	@ 000b129e 0019
.org 0xb12a0
	ldr r0, [r0, #0]	@ 000b12a0 0068
.org 0xb12a2
	adds r0, #16	@ 000b12a2 1030
.org 0xb12a4
	lsls r0, r0, #8	@ 000b12a4 0002
.org 0xb12a6
	str r0, [r1, #0]	@ 000b12a6 0860
.org 0xb12a8
	adds r0, r6, #0	@ 000b12a8 301c
.org 0xb12aa
	adds r0, #194	@ 000b12aa c230
.org 0xb12ac
	strb r5, [r0, #0]	@ 000b12ac 0570
.org 0xb12ae
	str r5, [r6, #40]	@ 000b12ae b562
.org 0xb12b0
	str r5, [r6, #44]	@ 000b12b0 f562
.org 0xb12b2
	ldrb r0, [r6, #17]	@ 000b12b2 707c
.org 0xb12b4
	cmp r0, #1	@ 000b12b4 0128
.org 0xb12b6
	bls.n 0xb12cc	@ 000b12b6 09d9
.org 0xb12b8
	ldrb r1, [r6, #16]	@ 000b12b8 317c
.org 0xb12ba
	lsls r1, r1, #8	@ 000b12ba 0902
.org 0xb12bc
	subs r0, #1	@ 000b12bc 0138
.org 0xb12be
	orrs r1, r0	@ 000b12be 0143
.org 0xb12c0
	lsls r1, r1, #16	@ 000b12c0 0904
.org 0xb12c2
	lsrs r1, r1, #16	@ 000b12c2 090c
.org 0xb12c4
	adds r0, r7, #0	@ 000b12c4 381c
.org 0xb12c6
	bl 0xb1008	@ 000b12c6 fff79ffe
.org 0xb12ca
	str r0, [r6, #44]	@ 000b12ca f062
.org 0xb12cc
	movs r0, #160	@ 000b12cc a020
.org 0xb12ce
	lsls r0, r0, #1	@ 000b12ce 4000
.org 0xb12d0
	str r0, [r6, #92]	@ 000b12d0 f065
.org 0xb12d2
	str r0, [r6, #96]	@ 000b12d2 3066
.org 0xb12d4
	adds r1, r6, #0	@ 000b12d4 311c
.org 0xb12d6
	adds r1, #184	@ 000b12d6 b831
.org 0xb12d8
	movs r0, #144	@ 000b12d8 9020
.org 0xb12da
	lsls r0, r0, #4	@ 000b12da 0001
.org 0xb12dc
	str r0, [r1, #0]	@ 000b12dc 0860
.org 0xb12de
	ldrb r0, [r6, #16]	@ 000b12de 307c
.org 0xb12e0
	adds r3, r1, #0	@ 000b12e0 0b1c
.org 0xb12e2
	cmp r0, #1	@ 000b12e2 0128
.org 0xb12e4
	bhi.n 0xb1318	@ 000b12e4 18d8
.org 0xb12e6
	ldrb r0, [r6, #17]	@ 000b12e6 707c
.org 0xb12e8
	subs r0, #1	@ 000b12e8 0138
.org 0xb12ea
	lsls r0, r0, #2	@ 000b12ea 8000
.org 0xb12ec
	adds r0, r0, r4	@ 000b12ec 0019
.org 0xb12ee
	ldr r1, [r0, #0]	@ 000b12ee 0168
.org 0xb12f0
	lsls r1, r1, #8	@ 000b12f0 0902
.org 0xb12f2
	ldr r0, [r6, #84]	@ 000b12f2 706d
.org 0xb12f4
	subs r0, r0, r1	@ 000b12f4 401a
.org 0xb12f6
	str r0, [r6, #84]	@ 000b12f6 7065
.org 0xb12f8
	adds r1, r6, #0	@ 000b12f8 311c
.org 0xb12fa
	adds r1, #180	@ 000b12fa b431
.org 0xb12fc
	ldr r0, [pc, #20]	@ 000b12fc 0548
.org 0xb12fe
	str r0, [r1, #0]	@ 000b12fe 0860
.org 0xb1300
	b.n 0xb1344	@ 000b1300 20e0
.org 0xb1302
	.byte 0x00	@ 000b1302 data
.org 0xb1303
	.byte 0x00	@ 000b1303 data
.org 0xb1304
	.byte 0x40,0xdb,0x85,0x08	@ 000b1304 data
.org 0xb1308
	.byte 0x10,0x34,0x86,0x08	@ 000b1308 data
.org 0xb130c
	.byte 0x1d,0x11,0x0b,0x08	@ 000b130c data
.org 0xb1310
	.byte 0x48,0x34,0x86,0x08	@ 000b1310 data
.org 0xb1314
	.byte 0x00,0xf8,0xff,0xff	@ 000b1314 data
.org 0xb1318
	ldrb r0, [r6, #17]	@ 000b1318 707c
.org 0xb131a
	subs r0, #1	@ 000b131a 0138
.org 0xb131c
	lsls r0, r0, #2	@ 000b131c 8000
.org 0xb131e
	adds r0, r0, r4	@ 000b131e 0019
.org 0xb1320
	ldr r1, [r0, #0]	@ 000b1320 0168
.org 0xb1322
	lsls r1, r1, #8	@ 000b1322 0902
.org 0xb1324
	ldr r0, [r6, #84]	@ 000b1324 706d
.org 0xb1326
	adds r0, r0, r1	@ 000b1326 4018
.org 0xb1328
	str r0, [r6, #84]	@ 000b1328 7065
.org 0xb132a
	adds r1, r6, #0	@ 000b132a 311c
.org 0xb132c
	adds r1, #180	@ 000b132c b431
.org 0xb132e
	movs r0, #128	@ 000b132e 8020
.org 0xb1330
	lsls r0, r0, #4	@ 000b1330 0001
.org 0xb1332
	str r0, [r1, #0]	@ 000b1332 0860
.org 0xb1334
	ldr r0, [r6, #92]	@ 000b1334 f06d
.org 0xb1336
	lsls r0, r0, #8	@ 000b1336 0002
.org 0xb1338
	negs r0, r0	@ 000b1338 4042
.org 0xb133a
	cmp r0, #0	@ 000b133a 0028
.org 0xb133c
	bge.n 0xb1340	@ 000b133c 00da
.org 0xb133e
	adds r0, #255	@ 000b133e ff30
.org 0xb1340
	asrs r0, r0, #8	@ 000b1340 0012
.org 0xb1342
	str r0, [r6, #92]	@ 000b1342 f065
.org 0xb1344
	ldrb r1, [r6, #16]	@ 000b1344 317c
.org 0xb1346
	movs r2, #1	@ 000b1346 0122
.org 0xb1348
	adds r0, r2, #0	@ 000b1348 101c
.org 0xb134a
	ands r0, r1	@ 000b134a 0840
.org 0xb134c
	cmp r0, #0	@ 000b134c 0028
.org 0xb134e
	beq.n 0xb1358	@ 000b134e 03d0
