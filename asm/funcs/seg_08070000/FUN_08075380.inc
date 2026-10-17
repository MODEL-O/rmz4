@ FUN_08075380  entry 0x08075380  size 384
.thumb
.org 0x75380
FUN_08075380:
	push {r4, r5, r6, r7, lr}	@ 00075380 f0b5
.org 0x75382
	mov r7, r9	@ 00075382 4f46
.org 0x75384
	mov r6, r8	@ 00075384 4646
.org 0x75386
	push {r6, r7}	@ 00075386 c0b4
.org 0x75388
	adds r4, r0, #0	@ 00075388 041c
.org 0x7538a
	ldrb r0, [r4, #30]	@ 0007538a a07f
.org 0x7538c
	lsls r0, r0, #8	@ 0007538c 0002
.org 0x7538e
	adds r1, r4, #0	@ 0007538e 211c
.org 0x75390
	adds r1, #112	@ 00075390 7031
.org 0x75392
	ldrb r1, [r1, #0]	@ 00075392 0978
.org 0x75394
	orrs r0, r1	@ 00075394 0843
.org 0x75396
	ldr r1, [pc, #84]	@ 00075396 1549
.org 0x75398
	cmp r0, r1	@ 00075398 8842
.org 0x7539a
	beq.n 0x753a2	@ 0007539a 02d0
.org 0x7539c
	adds r0, r4, #0	@ 0007539c 201c
.org 0x7539e
	bl 0x1cf00	@ 0007539e a7f7affd
.org 0x753a2
	adds r0, r4, #0	@ 000753a2 201c
.org 0x753a4
	adds r0, #116	@ 000753a4 7430
.org 0x753a6
	ldr r1, [pc, #72]	@ 000753a6 1249
.org 0x753a8
	bl 0x5784	@ 000753a8 90f7ecf9
.org 0x753ac
	adds r0, r4, #0	@ 000753ac 201c
.org 0x753ae
	bl 0x1cff0	@ 000753ae a7f71ffe
.org 0x753b2
	ldr r0, [pc, #64]	@ 000753b2 1048
.org 0x753b4
	ldrh r1, [r0, #8]	@ 000753b4 0189
.org 0x753b6
	movs r0, #8	@ 000753b6 0820
.org 0x753b8
	ands r0, r1	@ 000753b8 0840
.org 0x753ba
	lsls r0, r0, #16	@ 000753ba 0004
.org 0x753bc
	lsrs r6, r0, #16	@ 000753bc 060c
.org 0x753be
	cmp r6, #0	@ 000753be 002e
.org 0x753c0
	beq.n 0x753c4	@ 000753c0 00d0
.org 0x753c2
	b.n 0x7552c	@ 000753c2 b3e0
.org 0x753c4
	ldrb r0, [r4, #10]	@ 000753c4 a07a
.org 0x753c6
	lsrs r2, r0, #4	@ 000753c6 0209
.org 0x753c8
	movs r0, #1	@ 000753c8 0120
.org 0x753ca
	ands r2, r0	@ 000753ca 0240
.org 0x753cc
	movs r5, #0	@ 000753cc 0025
.org 0x753ce
	ldr r1, [pc, #40]	@ 000753ce 0a49
.org 0x753d0
	ldr r0, [r1, #0]	@ 000753d0 0868
.org 0x753d2
	ldr r0, [r0, #84]	@ 000753d2 406d
.org 0x753d4
	adds r7, r1, #0	@ 000753d4 0f1c
.org 0x753d6
	ldr r3, [r4, #84]	@ 000753d6 636d
.org 0x753d8
	cmp r3, r0	@ 000753d8 8342
.org 0x753da
	bge.n 0x753de	@ 000753da 00da
.org 0x753dc
	movs r5, #1	@ 000753dc 0125
.org 0x753de
	cmp r2, r5	@ 000753de aa42
.org 0x753e0
	beq.n 0x753fc	@ 000753e0 0cd0
.org 0x753e2
	movs r0, #5	@ 000753e2 0520
.org 0x753e4
	strb r0, [r4, #13]	@ 000753e4 6073
.org 0x753e6
	strb r6, [r4, #14]	@ 000753e6 a673
.org 0x753e8
	b.n 0x7552c	@ 000753e8 a0e0
.org 0x753ea
	.byte 0x00	@ 000753ea data
.org 0x753eb
	.byte 0x00	@ 000753eb data
.org 0x753ec
	.byte 0x01,0xaf,0x00,0x00	@ 000753ec data
.org 0x753f0
	.byte 0x1c,0xce,0x85,0x08	@ 000753f0 data
.org 0x753f4
	.byte 0x10,0xe9,0x02,0x02	@ 000753f4 data
.org 0x753f8
	.byte 0xf0,0xdb,0x02,0x02	@ 000753f8 data
.org 0x753fc
	subs r1, r3, r0	@ 000753fc 191a
.org 0x753fe
	cmp r1, #0	@ 000753fe 0029
.org 0x75400
	blt.n 0x75410	@ 00075400 06db
.org 0x75402
	ldr r0, [pc, #8]	@ 00075402 0248
.org 0x75404
	cmp r1, r0	@ 00075404 8142
.org 0x75406
	ble.n 0x75418	@ 00075406 07dd
.org 0x75408
	b.n 0x75420	@ 00075408 0ae0
.org 0x7540a
	.byte 0x00	@ 0007540a data
.org 0x7540b
	.byte 0x00	@ 0007540b data
.org 0x7540c
	.byte 0xff,0x4e,0x00,0x00	@ 0007540c data
.org 0x75410
	subs r1, r0, r3	@ 00075410 c11a
.org 0x75412
	ldr r0, [pc, #8]	@ 00075412 0248
.org 0x75414
	cmp r1, r0	@ 00075414 8142
.org 0x75416
	bgt.n 0x75420	@ 00075416 03dc
.org 0x75418
	movs r0, #0	@ 00075418 0020
.org 0x7541a
	b.n 0x7544e	@ 0007541a 18e0
.org 0x7541c
	.byte 0xff,0x4e,0x00,0x00	@ 0007541c data
.org 0x75420
	ldr r0, [r7, #0]	@ 00075420 3868
.org 0x75422
	ldr r1, [r0, #84]	@ 00075422 416d
.org 0x75424
	subs r2, r3, r1	@ 00075424 5a1a
.org 0x75426
	cmp r2, #0	@ 00075426 002a
.org 0x75428
	blt.n 0x75438	@ 00075428 06db
.org 0x7542a
	ldr r0, [pc, #8]	@ 0007542a 0248
.org 0x7542c
	cmp r2, r0	@ 0007542c 8242
.org 0x7542e
	ble.n 0x75440	@ 0007542e 07dd
.org 0x75430
	b.n 0x7544c	@ 00075430 0ce0
.org 0x75432
	.byte 0x00	@ 00075432 data
.org 0x75433
	.byte 0x00	@ 00075433 data
.org 0x75434
	.byte 0xff,0x8e,0x00,0x00	@ 00075434 data
.org 0x75438
	subs r1, r1, r3	@ 00075438 c91a
.org 0x7543a
	ldr r0, [pc, #12]	@ 0007543a 0348
.org 0x7543c
	cmp r1, r0	@ 0007543c 8142
.org 0x7543e
	bgt.n 0x7544c	@ 0007543e 05dc
.org 0x75440
	movs r1, #1	@ 00075440 0121
.org 0x75442
	mov ip, r1	@ 00075442 8c46
.org 0x75444
	b.n 0x75450	@ 00075444 04e0
.org 0x75446
	.byte 0x00	@ 00075446 data
.org 0x75447
	.byte 0x00	@ 00075447 data
.org 0x75448
	.byte 0xff,0x8e,0x00,0x00	@ 00075448 data
.org 0x7544c
	movs r0, #2	@ 0007544c 0220
.org 0x7544e
	mov ip, r0	@ 0007544e 8446
.org 0x75450
	adds r0, r4, #0	@ 00075450 201c
.org 0x75452
	adds r0, #164	@ 00075452 a430
.org 0x75454
	movs r1, #0	@ 00075454 0021
.org 0x75456
	ldrsh r0, [r0, r1]	@ 00075456 405e
.org 0x75458
	movs r1, #2	@ 00075458 0221
.org 0x7545a
	mov r8, r1	@ 0007545a 8846
.org 0x7545c
	cmp r0, #15	@ 0007545c 0f28
.org 0x7545e
	ble.n 0x7546c	@ 0007545e 05dd
.org 0x75460
	movs r1, #0	@ 00075460 0021
.org 0x75462
	mov r8, r1	@ 00075462 8846
.org 0x75464
	cmp r0, #31	@ 00075464 1f28
.org 0x75466
	bgt.n 0x7546c	@ 00075466 01dc
.org 0x75468
	movs r0, #1	@ 00075468 0120
.org 0x7546a
	mov r8, r0	@ 0007546a 8046
.org 0x7546c
	ldr r0, [r7, #0]	@ 0007546c 3868
.org 0x7546e
	ldr r0, [r0, #84]	@ 0007546e 406d
.org 0x75470
	cmp r3, r0	@ 00075470 8342
.org 0x75472
	ble.n 0x75486	@ 00075472 08dd
.org 0x75474
	adds r0, r4, #0	@ 00075474 201c
.org 0x75476
	adds r0, #180	@ 00075476 b430
.org 0x75478
	ldr r0, [r0, #16]	@ 00075478 0069
.org 0x7547a
	movs r1, #192	@ 0007547a c021
.org 0x7547c
	lsls r1, r1, #6	@ 0007547c 8901
.org 0x7547e
	adds r0, r0, r1	@ 0007547e 4018
.org 0x75480
	cmp r3, r0	@ 00075480 8342
.org 0x75482
	bge.n 0x754a8	@ 00075482 11da
.org 0x75484
	b.n 0x75494	@ 00075484 06e0
.org 0x75486
	adds r0, r4, #0	@ 00075486 201c
.org 0x75488
	adds r0, #180	@ 00075488 b430
.org 0x7548a
	ldr r0, [r0, #20]	@ 0007548a 4069
.org 0x7548c
	ldr r7, [pc, #20]	@ 0007548c 054f
.org 0x7548e
	adds r0, r0, r7	@ 0007548e c019
.org 0x75490
	cmp r3, r0	@ 00075490 8342
.org 0x75492
	ble.n 0x754a8	@ 00075492 09dd
.org 0x75494
	movs r0, #0	@ 00075494 0020
.org 0x75496
	movs r1, #13	@ 00075496 0d21
.org 0x75498
	strb r1, [r4, #13]	@ 00075498 6173
.org 0x7549a
	strb r0, [r4, #14]	@ 0007549a a073
.org 0x7549c
	adds r0, r4, #0	@ 0007549c 201c
.org 0x7549e
	adds r0, #220	@ 0007549e dc30
.org 0x754a0
	strb r1, [r0, #0]	@ 000754a0 0170
.org 0x754a2
	b.n 0x7552c	@ 000754a2 43e0
.org 0x754a4
	.byte 0x00,0xd0,0xff,0xff	@ 000754a4 data
.org 0x754a8
	adds r6, r4, #0	@ 000754a8 261c
.org 0x754aa
	adds r6, #220	@ 000754aa dc36
.org 0x754ac
	ldr r0, [pc, #48]	@ 000754ac 0c48
.org 0x754ae
	mov r9, r0	@ 000754ae 8146
.org 0x754b0
	movs r5, #4	@ 000754b0 0425
.org 0x754b2
	movs r3, #11	@ 000754b2 0b23
.org 0x754b4
	movs r2, #13	@ 000754b4 0d22
.org 0x754b6
	mov r7, r9	@ 000754b6 4f46
.org 0x754b8
	ldr r1, [r7, #0]	@ 000754b8 3968
.org 0x754ba
	ldr r0, [pc, #40]	@ 000754ba 0a48
.org 0x754bc
	muls r0, r1	@ 000754bc 4843
.org 0x754be
	ldr r1, [pc, #40]	@ 000754be 0a49
.org 0x754c0
	adds r0, r0, r1	@ 000754c0 4018
.org 0x754c2
	lsls r0, r0, #1	@ 000754c2 4000
.org 0x754c4
	lsrs r1, r0, #1	@ 000754c4 4108
.org 0x754c6
	str r1, [r7, #0]	@ 000754c6 3960
.org 0x754c8
	lsrs r1, r0, #17	@ 000754c8 410c
.org 0x754ca
	movs r0, #31	@ 000754ca 1f20
.org 0x754cc
	ands r1, r0	@ 000754cc 0140
.org 0x754ce
	adds r0, r1, #0	@ 000754ce 081c
.org 0x754d0
	mov r7, ip	@ 000754d0 6746
.org 0x754d2
	cmp r7, #0	@ 000754d2 002f
.org 0x754d4
	bne.n 0x754ec	@ 000754d4 0ad1
.org 0x754d6
	cmp r1, #9	@ 000754d6 0929
.org 0x754d8
	bls.n 0x75510	@ 000754d8 1ad9
.org 0x754da
	cmp r1, #20	@ 000754da 1429
.org 0x754dc
	bls.n 0x75518	@ 000754dc 1cd9
.org 0x754de
	b.n 0x7551c	@ 000754de 1de0
.org 0x754e0
	.byte 0x38,0xdc,0x02,0x02	@ 000754e0 data
.org 0x754e4
	.byte 0xfd,0x43,0x03,0x00	@ 000754e4 data
.org 0x754e8
	.byte 0xc3,0x9e,0x26,0x00	@ 000754e8 data
.org 0x754ec
	mov r7, ip	@ 000754ec 6746
.org 0x754ee
	cmp r7, #1	@ 000754ee 012f
.org 0x754f0
	bne.n 0x7550c	@ 000754f0 0cd1
.org 0x754f2
	mov r0, r8	@ 000754f2 4046
.org 0x754f4
	cmp r0, #0	@ 000754f4 0028
.org 0x754f6
	bne.n 0x75502	@ 000754f6 04d1
.org 0x754f8
	cmp r1, #13	@ 000754f8 0d29
.org 0x754fa
	bls.n 0x75510	@ 000754fa 09d9
.org 0x754fc
	cmp r1, #22	@ 000754fc 1629
.org 0x754fe
	bls.n 0x75518	@ 000754fe 0bd9
