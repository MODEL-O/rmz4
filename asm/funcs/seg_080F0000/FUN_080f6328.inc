@ FUN_080f6328  entry 0x080f6328  size 176
.thumb
.org 0xf6328
FUN_080f6328:
	push {r4, r5, lr}	@ 000f6328 30b5
.org 0xf632a
	adds r4, r0, #0	@ 000f632a 041c
.org 0xf632c
	movs r5, #0	@ 000f632c 0025
.org 0xf632e
	bl 0x1cff0	@ 000f632e 26f75ffe
.org 0xf6332
	adds r0, r4, #0	@ 000f6332 201c
.org 0xf6334
	adds r0, #140	@ 000f6334 8c30
.org 0xf6336
	ldr r0, [r0, #0]	@ 000f6336 0068
.org 0xf6338
	movs r1, #4	@ 000f6338 0421
.org 0xf633a
	ands r0, r1	@ 000f633a 0840
.org 0xf633c
	cmp r0, #0	@ 000f633c 0028
.org 0xf633e
	beq.n 0xf637c	@ 000f633e 1dd0
.org 0xf6340
	ldr r0, [r4, #88]	@ 000f6340 a06d
.org 0xf6342
	lsls r1, r0, #3	@ 000f6342 c100
.org 0xf6344
	subs r1, r1, r0	@ 000f6344 091a
.org 0xf6346
	ldr r0, [pc, #40]	@ 000f6346 0a48
.org 0xf6348
	ldr r2, [pc, #40]	@ 000f6348 0a4a
.org 0xf634a
	adds r0, r0, r2	@ 000f634a 8018
.org 0xf634c
	ldr r0, [r0, #0]	@ 000f634c 0068
.org 0xf634e
	adds r1, r1, r0	@ 000f634e 0918
.org 0xf6350
	movs r2, #128	@ 000f6350 8022
.org 0xf6352
	lsls r2, r2, #5	@ 000f6352 5201
.org 0xf6354
	adds r0, r1, r2	@ 000f6354 8818
.org 0xf6356
	cmp r0, #0	@ 000f6356 0028
.org 0xf6358
	bge.n 0xf635e	@ 000f6358 01da
.org 0xf635a
	adds r2, #7	@ 000f635a 0732
.org 0xf635c
	adds r0, r1, r2	@ 000f635c 8818
.org 0xf635e
	asrs r0, r0, #3	@ 000f635e c010
.org 0xf6360
	str r0, [r4, #88]	@ 000f6360 a065
.org 0xf6362
	ldr r0, [pc, #20]	@ 000f6362 0548
.org 0xf6364
	ldr r0, [r0, #0]	@ 000f6364 0068
.org 0xf6366
	ldr r1, [r0, #84]	@ 000f6366 416d
.org 0xf6368
	ldr r0, [r4, #84]	@ 000f6368 606d
.org 0xf636a
	subs r5, r1, r0	@ 000f636a 0d1a
.org 0xf636c
	b.n 0xf639c	@ 000f636c 16e0
.org 0xf636e
	.byte 0x00	@ 000f636e data
.org 0xf636f
	.byte 0x00	@ 000f636f data
.org 0xf6370
	.byte 0xb0,0x0a,0x00,0x02	@ 000f6370 data
.org 0xf6374
	.byte 0x0c,0xc0,0x02,0x00	@ 000f6374 data
.org 0xf6378
	.byte 0xf0,0xdb,0x02,0x02	@ 000f6378 data
.org 0xf637c
	ldr r0, [r4, #88]	@ 000f637c a06d
.org 0xf637e
	lsls r1, r0, #3	@ 000f637e c100
.org 0xf6380
	subs r1, r1, r0	@ 000f6380 091a
.org 0xf6382
	movs r0, #128	@ 000f6382 8020
.org 0xf6384
	lsls r0, r0, #4	@ 000f6384 0001
.org 0xf6386
	adds r1, r1, r0	@ 000f6386 0918
.org 0xf6388
	ldr r0, [pc, #92]	@ 000f6388 1748
.org 0xf638a
	ldr r2, [pc, #96]	@ 000f638a 184a
.org 0xf638c
	adds r0, r0, r2	@ 000f638c 8018
.org 0xf638e
	ldr r0, [r0, #0]	@ 000f638e 0068
.org 0xf6390
	adds r0, r1, r0	@ 000f6390 0818
.org 0xf6392
	cmp r0, #0	@ 000f6392 0028
.org 0xf6394
	bge.n 0xf6398	@ 000f6394 00da
.org 0xf6396
	adds r0, #7	@ 000f6396 0730
.org 0xf6398
	asrs r0, r0, #3	@ 000f6398 c010
.org 0xf639a
	str r0, [r4, #88]	@ 000f639a a065
.org 0xf639c
	adds r3, r4, #0	@ 000f639c 231c
.org 0xf639e
	adds r3, #180	@ 000f639e b433
.org 0xf63a0
	ldr r1, [r3, #0]	@ 000f63a0 1968
.org 0xf63a2
	lsls r0, r1, #3	@ 000f63a2 c800
.org 0xf63a4
	subs r0, r0, r1	@ 000f63a4 401a
.org 0xf63a6
	adds r1, r0, r5	@ 000f63a6 4119
.org 0xf63a8
	cmp r1, #0	@ 000f63a8 0029
.org 0xf63aa
	bge.n 0xf63ae	@ 000f63aa 00da
.org 0xf63ac
	adds r1, #7	@ 000f63ac 0731
.org 0xf63ae
	asrs r0, r1, #3	@ 000f63ae c810
.org 0xf63b0
	str r0, [r3, #0]	@ 000f63b0 1860
.org 0xf63b2
	asrs r1, r1, #14	@ 000f63b2 8913
.org 0xf63b4
	adds r0, r4, #0	@ 000f63b4 201c
.org 0xf63b6
	adds r0, #36	@ 000f63b6 2430
.org 0xf63b8
	strb r1, [r0, #0]	@ 000f63b8 0170
.org 0xf63ba
	ldr r2, [pc, #52]	@ 000f63ba 0d4a
.org 0xf63bc
	ldr r1, [r3, #0]	@ 000f63bc 1968
.org 0xf63be
	asrs r0, r1, #11	@ 000f63be c812
.org 0xf63c0
	lsls r0, r0, #24	@ 000f63c0 0006
.org 0xf63c2
	lsrs r0, r0, #23	@ 000f63c2 c00d
.org 0xf63c4
	adds r0, r0, r2	@ 000f63c4 8018
.org 0xf63c6
	movs r2, #0	@ 000f63c6 0022
.org 0xf63c8
	ldrsh r0, [r0, r2]	@ 000f63c8 805e
.org 0xf63ca
	muls r0, r1	@ 000f63ca 4843
.org 0xf63cc
	cmp r0, #0	@ 000f63cc 0028
.org 0xf63ce
	bge.n 0xf63d2	@ 000f63ce 00da
.org 0xf63d0
	adds r0, #255	@ 000f63d0 ff30
.org 0xf63d2
	asrs r1, r0, #8	@ 000f63d2 0112
.org 0xf63d4
	movs r0, #128	@ 000f63d4 8020
.org 0xf63d6
	lsls r0, r0, #5	@ 000f63d6 4001
