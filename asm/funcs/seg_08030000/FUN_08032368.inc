@ FUN_08032368  entry 0x08032368  size 164
.thumb
.org 0x32368
FUN_08032368:
	push {r4, r5, r6, lr}	@ 00032368 70b5
.org 0x3236a
	adds r4, r0, #0	@ 0003236a 041c
.org 0x3236c
	ldr r0, [pc, #124]	@ 0003236c 1f48
.org 0x3236e
	ldrb r1, [r4, #15]	@ 0003236e e17b
.org 0x32370
	lsls r1, r1, #2	@ 00032370 8900
.org 0x32372
	adds r1, r1, r0	@ 00032372 0918
.org 0x32374
	ldr r1, [r1, #0]	@ 00032374 0968
.org 0x32376
	adds r0, r4, #0	@ 00032376 201c
.org 0x32378
	bl 0x128f80	@ 00032378 f6f002fe
.org 0x3237c
	movs r0, #156	@ 0003237c 9c20
.org 0x3237e
	lsls r0, r0, #1	@ 0003237e 4000
.org 0x32380
	adds r1, r4, r0	@ 00032380 2118
.org 0x32382
	ldrh r0, [r1, #0]	@ 00032382 0888
.org 0x32384
	cmp r0, #0	@ 00032384 0028
.org 0x32386
	beq.n 0x3238c	@ 00032386 01d0
.org 0x32388
	subs r0, #1	@ 00032388 0138
.org 0x3238a
	strh r0, [r1, #0]	@ 0003238a 0880
.org 0x3238c
	adds r0, r4, #0	@ 0003238c 201c
.org 0x3238e
	adds r0, #115	@ 0003238e 7330
.org 0x32390
	ldrb r0, [r0, #0]	@ 00032390 0078
.org 0x32392
	cmp r0, #3	@ 00032392 0328
.org 0x32394
	bne.n 0x32410	@ 00032394 3cd1
.org 0x32396
	ldrh r5, [r1, #0]	@ 00032396 0d88
.org 0x32398
	cmp r5, #0	@ 00032398 002d
.org 0x3239a
	bne.n 0x32410	@ 0003239a 39d1
.org 0x3239c
	ldrb r6, [r4, #15]	@ 0003239c e67b
.org 0x3239e
	cmp r6, #2	@ 0003239e 022e
.org 0x323a0
	bne.n 0x323f4	@ 000323a0 28d1
.org 0x323a2
	ldr r1, [pc, #76]	@ 000323a2 1349
.org 0x323a4
	adds r0, r4, #0	@ 000323a4 201c
.org 0x323a6
	movs r2, #2	@ 000323a6 0222
.org 0x323a8
	movs r3, #1	@ 000323a8 0123
.org 0x323aa
	bl 0x1cfc8	@ 000323aa eaf70dfe
.org 0x323ae
	movs r0, #1	@ 000323ae 0120
.org 0x323b0
	strb r0, [r4, #13]	@ 000323b0 6073
.org 0x323b2
	strb r6, [r4, #14]	@ 000323b2 a673
.org 0x323b4
	strb r0, [r4, #15]	@ 000323b4 e073
.org 0x323b6
	ldr r5, [r4, #92]	@ 000323b6 e56d
.org 0x323b8
	cmp r5, #0	@ 000323b8 002d
.org 0x323ba
	bge.n 0x323be	@ 000323ba 00da
.org 0x323bc
	negs r5, r5	@ 000323bc 6d42
.org 0x323be
	adds r0, r4, #0	@ 000323be 201c
.org 0x323c0
	bl 0x386d4	@ 000323c0 06f088f9
.org 0x323c4
	lsls r0, r0, #16	@ 000323c4 0004
.org 0x323c6
	asrs r0, r0, #16	@ 000323c6 0014
.org 0x323c8
	cmp r5, r0	@ 000323c8 8542
.org 0x323ca
	blt.n 0x323dc	@ 000323ca 07db
.org 0x323cc
	ldr r1, [r4, #92]	@ 000323cc e16d
.org 0x323ce
	cmp r1, #0	@ 000323ce 0029
.org 0x323d0
	bge.n 0x323d4	@ 000323d0 00da
.org 0x323d2
	negs r1, r1	@ 000323d2 4942
.org 0x323d4
	movs r0, #224	@ 000323d4 e020
.org 0x323d6
	lsls r0, r0, #2	@ 000323d6 8000
.org 0x323d8
	cmp r1, r0	@ 000323d8 8142
.org 0x323da
	ble.n 0x32410	@ 000323da 19dd
.org 0x323dc
	adds r0, r4, #0	@ 000323dc 201c
.org 0x323de
	bl 0x386d4	@ 000323de 06f079f9
.org 0x323e2
	lsls r0, r0, #16	@ 000323e2 0004
.org 0x323e4
	asrs r0, r0, #16	@ 000323e4 0014
.org 0x323e6
	str r0, [r4, #92]	@ 000323e6 e065
.org 0x323e8
	b.n 0x32410	@ 000323e8 12e0
.org 0x323ea
	.byte 0x00	@ 000323ea data
.org 0x323eb
	.byte 0x00	@ 000323eb data
.org 0x323ec
	.byte 0xbc,0x2f,0x85,0x08	@ 000323ec data
.org 0x323f0
	.byte 0x04,0x04,0x00,0x00	@ 000323f0 data
.org 0x323f4
	adds r0, r4, #0	@ 000323f4 201c
.org 0x323f6
	bl 0x2b7d8	@ 000323f6 f9f7eff9
.org 0x323fa
	adds r1, r0, #0	@ 000323fa 011c
.org 0x323fc
	lsls r1, r1, #16	@ 000323fc 0904
.org 0x323fe
	lsrs r1, r1, #16	@ 000323fe 090c
.org 0x32400
	adds r0, r4, #0	@ 00032400 201c
.org 0x32402
	bl 0x1cf00	@ 00032402 eaf77dfd
.org 0x32406
	strb r5, [r4, #13]	@ 00032406 6573
.org 0x32408
	strb r5, [r4, #14]	@ 00032408 a573
.org 0x3240a
	movs r0, #1	@ 0003240a 0120
