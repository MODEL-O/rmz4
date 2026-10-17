@ FUN_080c4368  entry 0x080c4368  size 140
.thumb
.org 0xc4368
FUN_080c4368:
	push {r4, r5, lr}	@ 000c4368 30b5
.org 0xc436a
	adds r4, r0, #0	@ 000c436a 041c
.org 0xc436c
	ldr r0, [r4, #40]	@ 000c436c a06a
.org 0xc436e
	ldrb r0, [r0, #10]	@ 000c436e 807a
.org 0xc4370
	lsrs r5, r0, #4	@ 000c4370 0509
.org 0xc4372
	movs r0, #1	@ 000c4372 0120
.org 0xc4374
	ands r5, r0	@ 000c4374 0540
.org 0xc4376
	ldrb r0, [r4, #15]	@ 000c4376 e07b
.org 0xc4378
	cmp r0, #0	@ 000c4378 0028
.org 0xc437a
	bne.n 0xc4398	@ 000c437a 0dd1
.org 0xc437c
	adds r0, r4, #0	@ 000c437c 201c
.org 0xc437e
	adds r0, #116	@ 000c437e 7430
.org 0xc4380
	ldr r1, [pc, #112]	@ 000c4380 1c49
.org 0xc4382
	bl 0x5784	@ 000c4382 41f7fff9
.org 0xc4386
	lsls r1, r5, #1	@ 000c4386 6900
.org 0xc4388
	subs r1, #1	@ 000c4388 0139
.org 0xc438a
	lsls r0, r1, #1	@ 000c438a 4800
.org 0xc438c
	adds r0, r0, r1	@ 000c438c 4018
.org 0xc438e
	lsls r0, r0, #8	@ 000c438e 0002
.org 0xc4390
	str r0, [r4, #92]	@ 000c4390 e065
.org 0xc4392
	ldrb r0, [r4, #15]	@ 000c4392 e07b
.org 0xc4394
	adds r0, #1	@ 000c4394 0130
.org 0xc4396
	strb r0, [r4, #15]	@ 000c4396 e073
.org 0xc4398
	adds r0, r4, #0	@ 000c4398 201c
.org 0xc439a
	bl 0x1cff0	@ 000c439a 58f729fe
.org 0xc439e
	ldr r0, [r4, #84]	@ 000c439e 606d
.org 0xc43a0
	ldr r1, [r4, #92]	@ 000c43a0 e16d
.org 0xc43a2
	adds r0, r0, r1	@ 000c43a2 4018
.org 0xc43a4
	str r0, [r4, #84]	@ 000c43a4 6065
.org 0xc43a6
	ldr r0, [pc, #80]	@ 000c43a6 1448
.org 0xc43a8
	adds r1, r4, #0	@ 000c43a8 211c
.org 0xc43aa
	adds r1, #84	@ 000c43aa 5431
.org 0xc43ac
	bl 0x1fb14	@ 000c43ac 5bf7b2fb
.org 0xc43b0
	movs r1, #180	@ 000c43b0 b421
.org 0xc43b2
	lsls r1, r1, #7	@ 000c43b2 c901
.org 0xc43b4
	cmp r0, r1	@ 000c43b4 8842
.org 0xc43b6
	bls.n 0xc43ee	@ 000c43b6 1ad9
.org 0xc43b8
	ldrb r1, [r4, #10]	@ 000c43b8 a17a
.org 0xc43ba
	movs r0, #254	@ 000c43ba fe20
.org 0xc43bc
	ands r0, r1	@ 000c43bc 0840
.org 0xc43be
	movs r2, #0	@ 000c43be 0022
.org 0xc43c0
	movs r1, #253	@ 000c43c0 fd21
.org 0xc43c2
	ands r0, r1	@ 000c43c2 0840
.org 0xc43c4
	strb r0, [r4, #10]	@ 000c43c4 a072
.org 0xc43c6
	adds r0, r4, #0	@ 000c43c6 201c
.org 0xc43c8
	adds r0, #140	@ 000c43c8 8c30
.org 0xc43ca
	str r2, [r0, #0]	@ 000c43ca 0260
.org 0xc43cc
	adds r0, #4	@ 000c43cc 0430
.org 0xc43ce
	str r2, [r0, #0]	@ 000c43ce 0260
.org 0xc43d0
	adds r0, #4	@ 000c43d0 0430
.org 0xc43d2
	strb r2, [r0, #0]	@ 000c43d2 0270
.org 0xc43d4
	ldrb r1, [r4, #10]	@ 000c43d4 a17a
.org 0xc43d6
	movs r0, #251	@ 000c43d6 fb20
.org 0xc43d8
	ands r0, r1	@ 000c43d8 0840
.org 0xc43da
	strb r0, [r4, #10]	@ 000c43da a072
.org 0xc43dc
	ldr r1, [pc, #28]	@ 000c43dc 0749
.org 0xc43de
	ldrb r0, [r4, #9]	@ 000c43de 607a
.org 0xc43e0
	lsls r0, r0, #2	@ 000c43e0 8000
.org 0xc43e2
	adds r0, r0, r1	@ 000c43e2 4018
.org 0xc43e4
	movs r1, #3	@ 000c43e4 0321
.org 0xc43e6
	str r1, [r4, #12]	@ 000c43e6 e160
.org 0xc43e8
	ldr r0, [r0, #0]	@ 000c43e8 0068
.org 0xc43ea
	ldr r0, [r0, #12]	@ 000c43ea c068
.org 0xc43ec
	str r0, [r4, #20]	@ 000c43ec 6061
.org 0xc43ee
	pop {r4, r5}	@ 000c43ee 30bc
.org 0xc43f0
	pop {r0}	@ 000c43f0 01bc
.org 0xc43f2
	bx r0	@ 000c43f2 0047
