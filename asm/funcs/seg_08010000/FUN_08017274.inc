@ FUN_08017274  entry 0x08017274  size 402
.thumb
.org 0x17274
FUN_08017274:
	push {r4, r5, r6, r7, lr}	@ 00017274 f0b5
.org 0x17276
	mov r7, r8	@ 00017276 4746
.org 0x17278
	push {r7}	@ 00017278 80b4
.org 0x1727a
	sub sp, #8	@ 0001727a 82b0
.org 0x1727c
	mov r8, r0	@ 0001727c 8046
.org 0x1727e
	movs r7, #159	@ 0001727e 9f27
.org 0x17280
	ldr r0, [r0, #92]	@ 00017280 c06d
.org 0x17282
	lsls r5, r0, #16	@ 00017282 0504
.org 0x17284
	ldr r0, [pc, #384]	@ 00017284 6048
.org 0x17286
	ldr r1, [pc, #388]	@ 00017286 6149
.org 0x17288
	adds r0, r0, r1	@ 00017288 4018
.org 0x1728a
	ldrh r0, [r0, #0]	@ 0001728a 0088
.org 0x1728c
	cmp r0, #0	@ 0001728c 0028
.org 0x1728e
	beq.n 0x172d8	@ 0001728e 23d0
.org 0x17290
	ldr r0, [pc, #380]	@ 00017290 5f48
.org 0x17292
	ldr r0, [r0, #0]	@ 00017292 0068
.org 0x17294
	ldr r1, [pc, #380]	@ 00017294 5f49
.org 0x17296
	adds r0, r0, r1	@ 00017296 4018
.org 0x17298
	lsrs r5, r5, #20	@ 00017298 2d0d
.org 0x1729a
	lsls r5, r5, #1	@ 0001729a 6d00
.org 0x1729c
	ldr r1, [pc, #376]	@ 0001729c 5e49
.org 0x1729e
	adds r5, r5, r1	@ 0001729e 6d18
.org 0x172a0
	ldrh r2, [r5, #0]	@ 000172a0 2a88
.org 0x172a2
	movs r4, #248	@ 000172a2 f824
.org 0x172a4
	lsls r4, r4, #5	@ 000172a4 6401
.org 0x172a6
	adds r1, r4, #0	@ 000172a6 211c
.org 0x172a8
	ands r1, r2	@ 000172a8 1140
.org 0x172aa
	lsls r1, r1, #3	@ 000172aa c900
.org 0x172ac
	movs r2, #192	@ 000172ac c022
.org 0x172ae
	lsls r2, r2, #19	@ 000172ae d204
.org 0x172b0
	adds r1, r1, r2	@ 000172b0 8918
.org 0x172b2
	movs r6, #128	@ 000172b2 8026
.org 0x172b4
	lsls r6, r6, #2	@ 000172b4 b600
.org 0x172b6
	adds r2, r6, #0	@ 000172b6 321c
.org 0x172b8
	bl 0x128be0	@ 000172b8 11f192fc
.org 0x172bc
	movs r1, #0	@ 000172bc 0021
.org 0x172be
	ldrh r0, [r5, #0]	@ 000172be 2888
.org 0x172c0
	ands r4, r0	@ 000172c0 0440
.org 0x172c2
	lsls r4, r4, #3	@ 000172c2 e400
.org 0x172c4
	ldr r0, [pc, #340]	@ 000172c4 5548
.org 0x172c6
	adds r4, r4, r0	@ 000172c6 2418
.org 0x172c8
	str r1, [sp, #0]	@ 000172c8 0091
.org 0x172ca
	movs r2, #128	@ 000172ca 8022
.org 0x172cc
	lsls r2, r2, #17	@ 000172cc 5204
.org 0x172ce
	orrs r2, r6	@ 000172ce 3243
.org 0x172d0
	mov r0, sp	@ 000172d0 6846
.org 0x172d2
	adds r1, r4, #0	@ 000172d2 211c
.org 0x172d4
	bl 0x128be0	@ 000172d4 11f184fc
.org 0x172d8
	movs r0, #160	@ 000172d8 a020
.org 0x172da
	lsls r0, r0, #2	@ 000172da 8000
.org 0x172dc
	bl 0xa70	@ 000172dc e9f7c8fb
.org 0x172e0
	adds r5, r0, #0	@ 000172e0 051c
.org 0x172e2
	cmp r5, #0	@ 000172e2 002d
.org 0x172e4
	bne.n 0x172e8	@ 000172e4 00d1
.org 0x172e6
	b.n 0x173fa	@ 000172e6 88e0
.org 0x172e8
	ldr r2, [pc, #308]	@ 000172e8 4d4a
.org 0x172ea
	movs r1, #186	@ 000172ea ba21
.org 0x172ec
	lsls r1, r1, #1	@ 000172ec 4900
.org 0x172ee
	adds r0, r2, r1	@ 000172ee 5018
.org 0x172f0
	str r5, [r0, #0]	@ 000172f0 0560
.org 0x172f2
	movs r0, #188	@ 000172f2 bc20
.org 0x172f4
	lsls r0, r0, #1	@ 000172f4 4000
.org 0x172f6
	adds r1, r2, r0	@ 000172f6 1118
.org 0x172f8
	ldr r0, [pc, #296]	@ 000172f8 4a48
.org 0x172fa
	str r0, [r1, #0]	@ 000172fa 0860
.org 0x172fc
	movs r0, #190	@ 000172fc be20
.org 0x172fe
	lsls r0, r0, #1	@ 000172fe 4000
.org 0x17300
	adds r1, r2, r0	@ 00017300 1118
.org 0x17302
	ldr r0, [pc, #292]	@ 00017302 4948
.org 0x17304
	str r0, [r1, #0]	@ 00017304 0860
.org 0x17306
	mov r1, r8	@ 00017306 4146
.org 0x17308
	ldr r0, [r1, #56]	@ 00017308 886b
.org 0x1730a
	ldr r1, [pc, #288]	@ 0001730a 4849
.org 0x1730c
	adds r0, r0, r1	@ 0001730c 4018
.org 0x1730e
	lsls r0, r0, #16	@ 0001730e 0004
.org 0x17310
	lsrs r6, r0, #16	@ 00017310 060c
.org 0x17312
	mov r0, r8	@ 00017312 4046
.org 0x17314
	ldr r1, [r0, #52]	@ 00017314 416b
.org 0x17316
	lsls r0, r1, #3	@ 00017316 c800
.org 0x17318
	subs r0, r0, r1	@ 00017318 401a
.org 0x1731a
	lsls r0, r0, #13	@ 0001731a 4003
.org 0x1731c
	lsrs r1, r0, #16	@ 0001731c 010c
.org 0x1731e
	lsls r3, r6, #16	@ 0001731e 3304
.org 0x17320
	asrs r0, r3, #16	@ 00017320 1814
.org 0x17322
	adds r0, #159	@ 00017322 9f30
.org 0x17324
	cmp r0, #175	@ 00017324 af28
.org 0x17326
	ble.n 0x17344	@ 00017326 0ddd
.org 0x17328
	adds r4, r1, #0	@ 00017328 0c1c
.org 0x1732a
	lsls r0, r7, #2	@ 0001732a b800
.org 0x1732c
	adds r2, r5, r0	@ 0001732c 2a18
.org 0x1732e
	asrs r1, r3, #16	@ 0001732e 1914
.org 0x17330
	adds r0, r3, #0	@ 00017330 181c
.org 0x17332
	orrs r0, r4	@ 00017332 2043
.org 0x17334
	str r0, [r2, #0]	@ 00017334 1060
.org 0x17336
	subs r2, #4	@ 00017336 043a
.org 0x17338
	subs r7, #1	@ 00017338 013f
.org 0x1733a
	adds r1, r1, r7	@ 0001733a c919
.org 0x1733c
	cmp r1, #175	@ 0001733c af29
.org 0x1733e
	ble.n 0x17344	@ 0001733e 01dd
.org 0x17340
	cmp r7, #0	@ 00017340 002f
.org 0x17342
	bge.n 0x1732e	@ 00017342 f4da
.org 0x17344
	mov r1, r8	@ 00017344 4146
.org 0x17346
	ldr r0, [r1, #52]	@ 00017346 486b
.org 0x17348
	lsls r0, r0, #13	@ 00017348 4003
.org 0x1734a
	lsrs r1, r0, #16	@ 0001734a 010c
.org 0x1734c
	lsls r3, r6, #16	@ 0001734c 3304
.org 0x1734e
	asrs r0, r3, #16	@ 0001734e 1814
.org 0x17350
	adds r0, r0, r7	@ 00017350 c019
.org 0x17352
	cmp r0, #159	@ 00017352 9f28
.org 0x17354
	ble.n 0x17376	@ 00017354 0fdd
.org 0x17356
	cmp r7, #0	@ 00017356 002f
.org 0x17358
	blt.n 0x17376	@ 00017358 0ddb
.org 0x1735a
	adds r4, r1, #0	@ 0001735a 0c1c
.org 0x1735c
	lsls r0, r7, #2	@ 0001735c b800
.org 0x1735e
	adds r2, r0, r5	@ 0001735e 4219
.org 0x17360
	asrs r1, r3, #16	@ 00017360 1914
.org 0x17362
	adds r0, r3, #0	@ 00017362 181c
.org 0x17364
	orrs r0, r4	@ 00017364 2043
.org 0x17366
	str r0, [r2, #0]	@ 00017366 1060
.org 0x17368
	subs r2, #4	@ 00017368 043a
.org 0x1736a
	subs r7, #1	@ 0001736a 013f
.org 0x1736c
	adds r1, r1, r7	@ 0001736c c919
.org 0x1736e
	cmp r1, #159	@ 0001736e 9f29
.org 0x17370
	ble.n 0x17376	@ 00017370 01dd
.org 0x17372
	cmp r7, #0	@ 00017372 002f
.org 0x17374
	bge.n 0x17360	@ 00017374 f4da
.org 0x17376
	mov r1, r8	@ 00017376 4146
.org 0x17378
	ldr r0, [r1, #56]	@ 00017378 886b
.org 0x1737a
	ldr r1, [pc, #180]	@ 0001737a 2d49
.org 0x1737c
	adds r0, r0, r1	@ 0001737c 4018
.org 0x1737e
	asrs r0, r0, #3	@ 0001737e c010
.org 0x17380
	lsls r1, r6, #16	@ 00017380 3104
.org 0x17382
	asrs r1, r1, #16	@ 00017382 0914
.org 0x17384
	subs r1, r1, r0	@ 00017384 091a
.org 0x17386
	lsls r1, r1, #16	@ 00017386 0904
.org 0x17388
	lsrs r6, r1, #16	@ 00017388 0e0c
.org 0x1738a
	asrs r1, r1, #16	@ 0001738a 0914
.org 0x1738c
	adds r0, r1, r7	@ 0001738c c819
.org 0x1738e
	cmp r0, #159	@ 0001738e 9f28
.org 0x17390
	ble.n 0x173ba	@ 00017390 13dd
.org 0x17392
	cmp r7, #0	@ 00017392 002f
.org 0x17394
	blt.n 0x173ba	@ 00017394 11db
.org 0x17396
	adds r3, r1, #0	@ 00017396 0b1c
.org 0x17398
	lsls r0, r7, #16	@ 00017398 3804
.org 0x1739a
	movs r1, #160	@ 0001739a a021
.org 0x1739c
	lsls r1, r1, #16	@ 0001739c 0904
.org 0x1739e
	subs r1, r1, r0	@ 0001739e 091a
.org 0x173a0
	lsls r0, r7, #2	@ 000173a0 b800
.org 0x173a2
	adds r2, r0, r5	@ 000173a2 4219
.org 0x173a4
	movs r4, #128	@ 000173a4 8024
.org 0x173a6
	lsls r4, r4, #9	@ 000173a6 6402
.org 0x173a8
	str r1, [r2, #0]	@ 000173a8 1160
.org 0x173aa
	adds r1, r1, r4	@ 000173aa 0919
.org 0x173ac
	subs r2, #4	@ 000173ac 043a
.org 0x173ae
	subs r7, #1	@ 000173ae 013f
.org 0x173b0
	adds r0, r3, r7	@ 000173b0 d819
.org 0x173b2
	cmp r0, #159	@ 000173b2 9f28
.org 0x173b4
	ble.n 0x173ba	@ 000173b4 01dd
.org 0x173b6
	cmp r7, #0	@ 000173b6 002f
.org 0x173b8
	bge.n 0x173a8	@ 000173b8 f6da
.org 0x173ba
	lsls r1, r6, #16	@ 000173ba 3104
.org 0x173bc
	asrs r0, r1, #16	@ 000173bc 0814
.org 0x173be
	adds r0, r0, r7	@ 000173be c019
.org 0x173c0
	cmp r0, #0	@ 000173c0 0028
.org 0x173c2
	blt.n 0x173de	@ 000173c2 0cdb
.org 0x173c4
	cmp r7, #0	@ 000173c4 002f
.org 0x173c6
	blt.n 0x173fa	@ 000173c6 18db
.org 0x173c8
	lsls r0, r7, #2	@ 000173c8 b800
.org 0x173ca
	adds r2, r0, r5	@ 000173ca 4219
.org 0x173cc
	asrs r0, r1, #16	@ 000173cc 0814
.org 0x173ce
	str r1, [r2, #0]	@ 000173ce 1160
.org 0x173d0
	subs r2, #4	@ 000173d0 043a
.org 0x173d2
	subs r7, #1	@ 000173d2 013f
.org 0x173d4
	adds r0, r0, r7	@ 000173d4 c019
.org 0x173d6
	cmp r0, #0	@ 000173d6 0028
.org 0x173d8
	blt.n 0x173de	@ 000173d8 01db
.org 0x173da
	cmp r7, #0	@ 000173da 002f
.org 0x173dc
	bge.n 0x173cc	@ 000173dc f6da
.org 0x173de
	cmp r7, #0	@ 000173de 002f
.org 0x173e0
	blt.n 0x173fa	@ 000173e0 0bdb
.org 0x173e2
	lsls r0, r7, #16	@ 000173e2 3804
.org 0x173e4
	negs r1, r0	@ 000173e4 4142
.org 0x173e6
	lsls r0, r7, #2	@ 000173e6 b800
.org 0x173e8
	adds r0, r0, r5	@ 000173e8 4019
.org 0x173ea
	movs r2, #128	@ 000173ea 8022
.org 0x173ec
	lsls r2, r2, #9	@ 000173ec 5202
.org 0x173ee
	str r1, [r0, #0]	@ 000173ee 0160
.org 0x173f0
	adds r1, r1, r2	@ 000173f0 8918
.org 0x173f2
	subs r0, #4	@ 000173f2 0438
.org 0x173f4
	subs r7, #1	@ 000173f4 013f
.org 0x173f6
	cmp r7, #0	@ 000173f6 002f
.org 0x173f8
	bge.n 0x173ee	@ 000173f8 f9da
.org 0x173fa
	add sp, #8	@ 000173fa 02b0
.org 0x173fc
	pop {r3}	@ 000173fc 08bc
.org 0x173fe
	mov r8, r3	@ 000173fe 9846
.org 0x17400
	pop {r4, r5, r6, r7}	@ 00017400 f0bc
.org 0x17402
	pop {r0}	@ 00017402 01bc
.org 0x17404
	bx r0	@ 00017404 0047
