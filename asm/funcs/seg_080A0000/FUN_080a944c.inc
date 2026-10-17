@ FUN_080a944c  entry 0x080a944c  size 170
.thumb
.org 0xa944c
FUN_080a944c:
	push {r4, r5, r6, lr}	@ 000a944c 70b5
.org 0xa944e
	adds r4, r0, #0	@ 000a944e 041c
.org 0xa9450
	ldr r5, [r4, #40]	@ 000a9450 a56a
.org 0xa9452
	ldrb r0, [r4, #14]	@ 000a9452 a07b
.org 0xa9454
	cmp r0, #0	@ 000a9454 0028
.org 0xa9456
	bne.n 0xa947a	@ 000a9456 10d1
.org 0xa9458
	adds r0, r5, #0	@ 000a9458 281c
.org 0xa945a
	adds r0, #225	@ 000a945a e130
.org 0xa945c
	ldrb r2, [r4, #16]	@ 000a945c 227c
.org 0xa945e
	movs r6, #1	@ 000a945e 0126
.org 0xa9460
	ldrb r1, [r0, #0]	@ 000a9460 0178
.org 0xa9462
	adds r0, r6, #0	@ 000a9462 301c
.org 0xa9464
	ands r0, r2	@ 000a9464 1040
.org 0xa9466
	cmp r1, r0	@ 000a9466 8142
.org 0xa9468
	bne.n 0xa9472	@ 000a9468 03d1
.org 0xa946a
	ldr r1, [pc, #140]	@ 000a946a 2349
.org 0xa946c
	adds r0, r4, #0	@ 000a946c 201c
.org 0xa946e
	bl 0x1cf00	@ 000a946e 73f747fd
.org 0xa9472
	strb r6, [r4, #18]	@ 000a9472 a674
.org 0xa9474
	ldrb r0, [r4, #14]	@ 000a9474 a07b
.org 0xa9476
	adds r0, #1	@ 000a9476 0130
.org 0xa9478
	strb r0, [r4, #14]	@ 000a9478 a073
.org 0xa947a
	adds r0, r4, #0	@ 000a947a 201c
.org 0xa947c
	bl 0x1cff0	@ 000a947c 73f7b8fd
.org 0xa9480
	ldrb r0, [r4, #30]	@ 000a9480 a07f
.org 0xa9482
	lsls r0, r0, #8	@ 000a9482 0002
.org 0xa9484
	adds r1, r4, #0	@ 000a9484 211c
.org 0xa9486
	adds r1, #112	@ 000a9486 7031
.org 0xa9488
	ldrb r1, [r1, #0]	@ 000a9488 0978
.org 0xa948a
	orrs r0, r1	@ 000a948a 0843
.org 0xa948c
	ldr r1, [pc, #104]	@ 000a948c 1a49
.org 0xa948e
	cmp r0, r1	@ 000a948e 8842
.org 0xa9490
	bne.n 0xa94e4	@ 000a9490 28d1
.org 0xa9492
	adds r0, r5, #0	@ 000a9492 281c
.org 0xa9494
	adds r0, #180	@ 000a9494 b430
.org 0xa9496
	ldrh r0, [r0, #40]	@ 000a9496 008d
.org 0xa9498
	cmp r0, #0	@ 000a9498 0028
.org 0xa949a
	beq.n 0xa94e4	@ 000a949a 23d0
.org 0xa949c
	ldrb r1, [r4, #18]	@ 000a949c a17c
.org 0xa949e
	adds r0, r1, #1	@ 000a949e 481c
.org 0xa94a0
	strb r0, [r4, #18]	@ 000a94a0 a074
.org 0xa94a2
	movs r0, #63	@ 000a94a2 3f20
.org 0xa94a4
	ands r0, r1	@ 000a94a4 0840
.org 0xa94a6
	cmp r0, #0	@ 000a94a6 0028
.org 0xa94a8
	bne.n 0xa94e4	@ 000a94a8 1cd1
.org 0xa94aa
	movs r0, #44	@ 000a94aa 2c20
.org 0xa94ac
	bl 0x2b10	@ 000a94ac 59f730fb
.org 0xa94b0
	ldr r0, [pc, #72]	@ 000a94b0 1248
.org 0xa94b2
	ldr r2, [r0, #0]	@ 000a94b2 0268
.org 0xa94b4
	ldr r0, [r4, #84]	@ 000a94b4 606d
.org 0xa94b6
	ldr r1, [r2, #84]	@ 000a94b6 516d
.org 0xa94b8
	subs r0, r0, r1	@ 000a94b8 401a
.org 0xa94ba
	lsls r0, r0, #8	@ 000a94ba 0002
.org 0xa94bc
	asrs r0, r0, #16	@ 000a94bc 0014
.org 0xa94be
	ldr r1, [r4, #88]	@ 000a94be a16d
.org 0xa94c0
	movs r3, #240	@ 000a94c0 f023
.org 0xa94c2
	lsls r3, r3, #4	@ 000a94c2 1b01
.org 0xa94c4
	adds r1, r1, r3	@ 000a94c4 c918
.org 0xa94c6
	ldr r2, [r2, #88]	@ 000a94c6 926d
.org 0xa94c8
	subs r1, r1, r2	@ 000a94c8 891a
.org 0xa94ca
	lsls r1, r1, #8	@ 000a94ca 0902
.org 0xa94cc
	asrs r1, r1, #16	@ 000a94cc 0914
.org 0xa94ce
	bl 0x128bdc	@ 000a94ce 7ff085fb
.org 0xa94d2
	adds r2, r0, #0	@ 000a94d2 021c
.org 0xa94d4
	lsls r2, r2, #16	@ 000a94d4 1204
.org 0xa94d6
	lsrs r2, r2, #24	@ 000a94d6 120e
.org 0xa94d8
	adds r0, r4, #0	@ 000a94d8 201c
.org 0xa94da
	adds r0, #84	@ 000a94da 5430
.org 0xa94dc
	movs r1, #192	@ 000a94dc c021
.org 0xa94de
	lsls r1, r1, #2	@ 000a94de 8900
.org 0xa94e0
	bl 0xbd4d4	@ 000a94e0 13f0f8ff
.org 0xa94e4
	ldrb r0, [r5, #13]	@ 000a94e4 687b
.org 0xa94e6
	cmp r0, #3	@ 000a94e6 0328
.org 0xa94e8
	bne.n 0xa94f0	@ 000a94e8 02d1
.org 0xa94ea
	movs r0, #0	@ 000a94ea 0020
.org 0xa94ec
	strb r0, [r4, #13]	@ 000a94ec 6073
.org 0xa94ee
	strb r0, [r4, #14]	@ 000a94ee a073
.org 0xa94f0
	pop {r4, r5, r6}	@ 000a94f0 70bc
.org 0xa94f2
	pop {r0}	@ 000a94f2 01bc
.org 0xa94f4
	bx r0	@ 000a94f4 0047
