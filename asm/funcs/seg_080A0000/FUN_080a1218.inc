@ FUN_080a1218  entry 0x080a1218  size 198
.thumb
.org 0xa1218
FUN_080a1218:
	push {r4, r5, r6, lr}	@ 000a1218 70b5
.org 0xa121a
	adds r5, r0, #0	@ 000a121a 051c
.org 0xa121c
	ldr r0, [r5, #40]	@ 000a121c a86a
.org 0xa121e
	ldrb r4, [r0, #10]	@ 000a121e 847a
.org 0xa1220
	lsrs r4, r4, #4	@ 000a1220 2409
.org 0xa1222
	movs r2, #1	@ 000a1222 0122
.org 0xa1224
	ands r4, r2	@ 000a1224 1440
.org 0xa1226
	ldr r1, [pc, #92]	@ 000a1226 1749
.org 0xa1228
	ldrb r0, [r5, #9]	@ 000a1228 687a
.org 0xa122a
	lsls r0, r0, #2	@ 000a122a 8000
.org 0xa122c
	adds r0, r0, r1	@ 000a122c 4018
.org 0xa122e
	str r2, [r5, #12]	@ 000a122e ea60
.org 0xa1230
	ldr r0, [r0, #0]	@ 000a1230 0068
.org 0xa1232
	ldr r0, [r0, #4]	@ 000a1232 4068
.org 0xa1234
	str r0, [r5, #20]	@ 000a1234 6861
.org 0xa1236
	movs r2, #0	@ 000a1236 0022
.org 0xa1238
	strb r2, [r5, #13]	@ 000a1238 6a73
.org 0xa123a
	strb r2, [r5, #14]	@ 000a123a aa73
.org 0xa123c
	strb r2, [r5, #15]	@ 000a123c ea73
.org 0xa123e
	ldrb r0, [r5, #10]	@ 000a123e a87a
.org 0xa1240
	movs r1, #1	@ 000a1240 0121
.org 0xa1242
	movs r6, #0	@ 000a1242 0026
.org 0xa1244
	orrs r0, r1	@ 000a1244 0843
.org 0xa1246
	movs r1, #2	@ 000a1246 0221
.org 0xa1248
	orrs r0, r1	@ 000a1248 0843
.org 0xa124a
	strb r0, [r5, #10]	@ 000a124a a872
.org 0xa124c
	adds r1, r5, #0	@ 000a124c 291c
.org 0xa124e
	adds r1, #180	@ 000a124e b431
.org 0xa1250
	ldr r0, [r5, #88]	@ 000a1250 a86d
.org 0xa1252
	ldr r3, [pc, #52]	@ 000a1252 0d4b
.org 0xa1254
	adds r0, r0, r3	@ 000a1254 c018
.org 0xa1256
	str r0, [r1, #0]	@ 000a1256 0860
.org 0xa1258
	adds r0, r5, #0	@ 000a1258 281c
.org 0xa125a
	adds r0, #184	@ 000a125a b830
.org 0xa125c
	strb r2, [r0, #0]	@ 000a125c 0270
.org 0xa125e
	adds r0, #1	@ 000a125e 0130
.org 0xa1260
	strb r2, [r0, #0]	@ 000a1260 0270
.org 0xa1262
	adds r0, #1	@ 000a1262 0130
.org 0xa1264
	strb r2, [r0, #0]	@ 000a1264 0270
.org 0xa1266
	str r2, [r5, #44]	@ 000a1266 ea62
.org 0xa1268
	adds r0, #1	@ 000a1268 0130
.org 0xa126a
	strb r2, [r0, #0]	@ 000a126a 0270
.org 0xa126c
	adds r0, #1	@ 000a126c 0130
.org 0xa126e
	strb r2, [r0, #0]	@ 000a126e 0270
.org 0xa1270
	adds r0, r5, #0	@ 000a1270 281c
.org 0xa1272
	bl 0x1cc9c	@ 000a1272 7bf713fd
.org 0xa1276
	cmp r4, #0	@ 000a1276 002c
.org 0xa1278
	beq.n 0xa128c	@ 000a1278 08d0
.org 0xa127a
	ldrb r0, [r5, #10]	@ 000a127a a87a
.org 0xa127c
	movs r1, #16	@ 000a127c 1021
.org 0xa127e
	orrs r0, r1	@ 000a127e 0843
.org 0xa1280
	b.n 0xa1292	@ 000a1280 07e0
.org 0xa1282
	.byte 0x00	@ 000a1282 data
.org 0xa1283
	.byte 0x00	@ 000a1283 data
.org 0xa1284
	.byte 0x40,0xdb,0x85,0x08	@ 000a1284 data
.org 0xa1288
	.byte 0x00,0xe0,0xff,0xff	@ 000a1288 data
.org 0xa128c
	ldrb r1, [r5, #10]	@ 000a128c a97a
.org 0xa128e
	movs r0, #239	@ 000a128e ef20
.org 0xa1290
	ands r0, r1	@ 000a1290 0840
.org 0xa1292
	strb r0, [r5, #10]	@ 000a1292 a872
.org 0xa1294
	adds r1, r4, #0	@ 000a1294 211c
.org 0xa1296
	adds r0, r5, #0	@ 000a1296 281c
.org 0xa1298
	adds r0, #76	@ 000a1298 4c30
.org 0xa129a
	strb r1, [r0, #0]	@ 000a129a 0170
.org 0xa129c
	adds r3, r5, #0	@ 000a129c 2b1c
.org 0xa129e
	adds r3, #74	@ 000a129e 4a33
.org 0xa12a0
	lsls r1, r1, #4	@ 000a12a0 0901
.org 0xa12a2
	ldrb r2, [r3, #0]	@ 000a12a2 1a78
.org 0xa12a4
	movs r0, #17	@ 000a12a4 1120
.org 0xa12a6
	negs r0, r0	@ 000a12a6 4042
.org 0xa12a8
	ands r0, r2	@ 000a12a8 1040
.org 0xa12aa
	orrs r0, r1	@ 000a12aa 0843
.org 0xa12ac
	strb r0, [r3, #0]	@ 000a12ac 1870
.org 0xa12ae
	ldr r1, [pc, #56]	@ 000a12ae 0e49
.org 0xa12b0
	adds r0, r5, #0	@ 000a12b0 281c
.org 0xa12b2
	bl 0x1cf00	@ 000a12b2 7bf725fe
.org 0xa12b6
	adds r0, r5, #0	@ 000a12b6 281c
.org 0xa12b8
	bl 0x1cff0	@ 000a12b8 7bf79afe
.org 0xa12bc
	ldrb r1, [r5, #10]	@ 000a12bc a97a
.org 0xa12be
	movs r0, #4	@ 000a12be 0420
.org 0xa12c0
	orrs r0, r1	@ 000a12c0 0843
.org 0xa12c2
	strb r0, [r5, #10]	@ 000a12c2 a872
.org 0xa12c4
	adds r4, r5, #0	@ 000a12c4 2c1c
.org 0xa12c6
	adds r4, #116	@ 000a12c6 7434
.org 0xa12c8
	ldr r1, [pc, #32]	@ 000a12c8 0849
.org 0xa12ca
	adds r2, r5, #0	@ 000a12ca 2a1c
.org 0xa12cc
	adds r2, #84	@ 000a12cc 5432
.org 0xa12ce
	adds r0, r4, #0	@ 000a12ce 201c
.org 0xa12d0
	movs r3, #6	@ 000a12d0 0623
.org 0xa12d2
	bl 0x5760	@ 000a12d2 64f745fa
.org 0xa12d6
	str r5, [r4, #44]	@ 000a12d6 e562
.org 0xa12d8
	ldr r0, [pc, #20]	@ 000a12d8 0548
.org 0xa12da
	str r0, [r4, #36]	@ 000a12da 6062
.org 0xa12dc
	adds r0, r5, #0	@ 000a12dc 281c
