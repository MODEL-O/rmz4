@ FUN_080d1234  entry 0x080d1234  size 152
.thumb
.org 0xd1234
FUN_080d1234:
	push {r4, r5, r6, lr}	@ 000d1234 70b5
.org 0xd1236
	mov r6, r8	@ 000d1236 4646
.org 0xd1238
	push {r6}	@ 000d1238 40b4
.org 0xd123a
	adds r4, r0, #0	@ 000d123a 041c
.org 0xd123c
	bl 0x1cc9c	@ 000d123c 4bf72efd
.org 0xd1240
	ldrb r1, [r4, #10]	@ 000d1240 a17a
.org 0xd1242
	movs r0, #1	@ 000d1242 0120
.org 0xd1244
	orrs r0, r1	@ 000d1244 0843
.org 0xd1246
	strb r0, [r4, #10]	@ 000d1246 a072
.org 0xd1248
	adds r0, r4, #0	@ 000d1248 201c
.org 0xd124a
	movs r1, #13	@ 000d124a 0d21
.org 0xd124c
	bl 0x1cf00	@ 000d124c 4bf758fe
.org 0xd1250
	ldr r0, [pc, #120]	@ 000d1250 1e48
.org 0xd1252
	mov r8, r0	@ 000d1252 8046
.org 0xd1254
	ldr r0, [r0, #0]	@ 000d1254 0068
.org 0xd1256
	ldr r3, [pc, #120]	@ 000d1256 1e4b
.org 0xd1258
	muls r0, r3	@ 000d1258 5843
.org 0xd125a
	ldr r2, [pc, #120]	@ 000d125a 1e4a
.org 0xd125c
	adds r0, r0, r2	@ 000d125c 8018
.org 0xd125e
	lsls r0, r0, #1	@ 000d125e 4000
.org 0xd1260
	lsrs r5, r0, #1	@ 000d1260 4508
.org 0xd1262
	lsrs r0, r0, #17	@ 000d1262 400c
.org 0xd1264
	movs r1, #255	@ 000d1264 ff21
.org 0xd1266
	ands r0, r1	@ 000d1266 0840
.org 0xd1268
	movs r6, #128	@ 000d1268 8026
.org 0xd126a
	subs r0, r6, r0	@ 000d126a 301a
.org 0xd126c
	str r0, [r4, #92]	@ 000d126c e065
.org 0xd126e
	adds r0, r5, #0	@ 000d126e 281c
.org 0xd1270
	muls r0, r3	@ 000d1270 5843
.org 0xd1272
	adds r0, r0, r2	@ 000d1272 8018
.org 0xd1274
	lsls r0, r0, #1	@ 000d1274 4000
.org 0xd1276
	lsrs r5, r0, #1	@ 000d1276 4508
.org 0xd1278
	lsrs r0, r0, #17	@ 000d1278 400c
.org 0xd127a
	ands r0, r1	@ 000d127a 0840
.org 0xd127c
	movs r1, #144	@ 000d127c 9021
.org 0xd127e
	lsls r1, r1, #3	@ 000d127e c900
.org 0xd1280
	adds r0, r0, r1	@ 000d1280 4018
.org 0xd1282
	str r0, [r4, #96]	@ 000d1282 2066
.org 0xd1284
	ldr r0, [r4, #84]	@ 000d1284 606d
.org 0xd1286
	str r0, [r4, #116]	@ 000d1286 6067
.org 0xd1288
	adds r0, r5, #0	@ 000d1288 281c
.org 0xd128a
	muls r0, r3	@ 000d128a 5843
.org 0xd128c
	adds r0, r0, r2	@ 000d128c 8018
.org 0xd128e
	lsls r0, r0, #1	@ 000d128e 4000
.org 0xd1290
	lsrs r1, r0, #1	@ 000d1290 4108
.org 0xd1292
	lsrs r0, r0, #17	@ 000d1292 400c
.org 0xd1294
	strb r0, [r4, #18]	@ 000d1294 a074
.org 0xd1296
	adds r0, r1, #0	@ 000d1296 081c
.org 0xd1298
	muls r0, r3	@ 000d1298 5843
.org 0xd129a
	adds r0, r0, r2	@ 000d129a 8018
.org 0xd129c
	lsls r0, r0, #1	@ 000d129c 4000
.org 0xd129e
	lsrs r1, r0, #1	@ 000d129e 4108
.org 0xd12a0
	mov r2, r8	@ 000d12a0 4246
.org 0xd12a2
	str r1, [r2, #0]	@ 000d12a2 1160
.org 0xd12a4
	lsrs r0, r0, #17	@ 000d12a4 400c
.org 0xd12a6
	strb r0, [r4, #19]	@ 000d12a6 e074
.org 0xd12a8
	str r6, [r4, #120]	@ 000d12a8 a667
.org 0xd12aa
	ldr r1, [pc, #44]	@ 000d12aa 0b49
.org 0xd12ac
	ldrb r0, [r4, #9]	@ 000d12ac 607a
.org 0xd12ae
	lsls r0, r0, #2	@ 000d12ae 8000
.org 0xd12b0
	adds r0, r0, r1	@ 000d12b0 4018
.org 0xd12b2
	movs r1, #1	@ 000d12b2 0121
.org 0xd12b4
	str r1, [r4, #12]	@ 000d12b4 e160
.org 0xd12b6
	ldr r0, [r0, #0]	@ 000d12b6 0068
.org 0xd12b8
	ldr r0, [r0, #4]	@ 000d12b8 4068
.org 0xd12ba
	str r0, [r4, #20]	@ 000d12ba 6061
.org 0xd12bc
	adds r0, r4, #0	@ 000d12bc 201c
.org 0xd12be
	bl 0xd108c	@ 000d12be fff7e5fe
.org 0xd12c2
	pop {r3}	@ 000d12c2 08bc
.org 0xd12c4
	mov r8, r3	@ 000d12c4 9846
.org 0xd12c6
	pop {r4, r5, r6}	@ 000d12c6 70bc
.org 0xd12c8
	pop {r0}	@ 000d12c8 01bc
.org 0xd12ca
	bx r0	@ 000d12ca 0047
