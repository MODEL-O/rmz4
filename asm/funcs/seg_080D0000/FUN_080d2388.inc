@ FUN_080d2388  entry 0x080d2388  size 268
.thumb
.org 0xd2388
FUN_080d2388:
	push {r4, r5, r6, lr}	@ 000d2388 70b5
.org 0xd238a
	adds r6, r0, #0	@ 000d238a 061c
.org 0xd238c
	ldrb r1, [r6, #10]	@ 000d238c b17a
.org 0xd238e
	movs r0, #16	@ 000d238e 1020
.org 0xd2390
	ands r0, r1	@ 000d2390 0840
.org 0xd2392
	cmp r0, #0	@ 000d2392 0028
.org 0xd2394
	beq.n 0xd239e	@ 000d2394 03d0
.org 0xd2396
	ldr r0, [r6, #84]	@ 000d2396 706d
.org 0xd2398
	movs r1, #240	@ 000d2398 f021
.org 0xd239a
	lsls r1, r1, #4	@ 000d239a 0901
.org 0xd239c
	b.n 0xd23a2	@ 000d239c 01e0
.org 0xd239e
	ldr r0, [r6, #84]	@ 000d239e 706d
.org 0xd23a0
	ldr r1, [pc, #76]	@ 000d23a0 1349
.org 0xd23a2
	adds r0, r0, r1	@ 000d23a2 4018
.org 0xd23a4
	str r0, [r6, #84]	@ 000d23a4 7065
.org 0xd23a6
	ldr r0, [r6, #84]	@ 000d23a6 706d
.org 0xd23a8
	ldr r1, [r6, #88]	@ 000d23a8 b16d
.org 0xd23aa
	bl 0x7c7c	@ 000d23aa 35f767fc
.org 0xd23ae
	movs r4, #15	@ 000d23ae 0f24
.org 0xd23b0
	adds r1, r4, #0	@ 000d23b0 211c
.org 0xd23b2
	ands r1, r0	@ 000d23b2 0140
.org 0xd23b4
	cmp r1, #0	@ 000d23b4 0029
.org 0xd23b6
	bne.n 0xd23fc	@ 000d23b6 21d1
.org 0xd23b8
	ldr r1, [r6, #88]	@ 000d23b8 b16d
.org 0xd23ba
	ldr r0, [pc, #56]	@ 000d23ba 0e48
.org 0xd23bc
	adds r1, r1, r0	@ 000d23bc 0918
.org 0xd23be
	str r1, [r6, #88]	@ 000d23be b165
.org 0xd23c0
	ldr r0, [r6, #84]	@ 000d23c0 706d
.org 0xd23c2
	bl 0x7c7c	@ 000d23c2 35f75bfc
.org 0xd23c6
	adds r1, r4, #0	@ 000d23c6 211c
.org 0xd23c8
	ands r1, r0	@ 000d23c8 0140
.org 0xd23ca
	cmp r1, #0	@ 000d23ca 0029
.org 0xd23cc
	bne.n 0xd23fc	@ 000d23cc 16d1
.org 0xd23ce
	ldrb r1, [r6, #10]	@ 000d23ce b17a
.org 0xd23d0
	movs r0, #254	@ 000d23d0 fe20
.org 0xd23d2
	ands r0, r1	@ 000d23d2 0840
.org 0xd23d4
	movs r1, #253	@ 000d23d4 fd21
.org 0xd23d6
	ands r0, r1	@ 000d23d6 0840
.org 0xd23d8
	strb r0, [r6, #10]	@ 000d23d8 b072
.org 0xd23da
	ldr r1, [pc, #28]	@ 000d23da 0749
.org 0xd23dc
	ldrb r0, [r6, #9]	@ 000d23dc 707a
.org 0xd23de
	lsls r0, r0, #2	@ 000d23de 8000
.org 0xd23e0
	adds r0, r0, r1	@ 000d23e0 4018
.org 0xd23e2
	movs r1, #3	@ 000d23e2 0321
.org 0xd23e4
	str r1, [r6, #12]	@ 000d23e4 f160
.org 0xd23e6
	ldr r0, [r0, #0]	@ 000d23e6 0068
.org 0xd23e8
	ldr r0, [r0, #12]	@ 000d23e8 c068
.org 0xd23ea
	str r0, [r6, #20]	@ 000d23ea 7061
.org 0xd23ec
	b.n 0xd24ac	@ 000d23ec 5ee0
.org 0xd23ee
	.byte 0x00	@ 000d23ee data
.org 0xd23ef
	.byte 0x00	@ 000d23ef data
.org 0xd23f0
	.byte 0x00,0xf1,0xff,0xff	@ 000d23f0 data
.org 0xd23f4
	.byte 0x00,0xee,0xff,0xff	@ 000d23f4 data
.org 0xd23f8
	.byte 0x64,0x6f,0x86,0x08	@ 000d23f8 data
.org 0xd23fc
	ldr r5, [pc, #124]	@ 000d23fc 1f4d
.org 0xd23fe
	ldr r0, [r5, #0]	@ 000d23fe 2868
.org 0xd2400
	ldr r3, [pc, #124]	@ 000d2400 1f4b
.org 0xd2402
	muls r0, r3	@ 000d2402 5843
.org 0xd2404
	ldr r2, [pc, #124]	@ 000d2404 1f4a
.org 0xd2406
	adds r0, r0, r2	@ 000d2406 8018
.org 0xd2408
	lsls r0, r0, #1	@ 000d2408 4000
.org 0xd240a
	lsrs r4, r0, #1	@ 000d240a 4408
.org 0xd240c
	lsrs r0, r0, #17	@ 000d240c 400c
.org 0xd240e
	movs r1, #7	@ 000d240e 0721
.org 0xd2410
	ands r0, r1	@ 000d2410 0840
.org 0xd2412
	adds r0, #60	@ 000d2412 3c30
.org 0xd2414
	strb r0, [r6, #18]	@ 000d2414 b074
.org 0xd2416
	adds r0, r4, #0	@ 000d2416 201c
.org 0xd2418
	muls r0, r3	@ 000d2418 5843
.org 0xd241a
	adds r0, r0, r2	@ 000d241a 8018
.org 0xd241c
	lsls r0, r0, #1	@ 000d241c 4000
.org 0xd241e
	lsrs r4, r0, #1	@ 000d241e 4408
.org 0xd2420
	lsrs r0, r0, #17	@ 000d2420 400c
.org 0xd2422
	movs r1, #3	@ 000d2422 0321
.org 0xd2424
	ands r0, r1	@ 000d2424 0840
.org 0xd2426
	subs r0, #2	@ 000d2426 0238
.org 0xd2428
	lsls r0, r0, #8	@ 000d2428 0002
.org 0xd242a
	ldr r1, [r6, #84]	@ 000d242a 716d
.org 0xd242c
	adds r1, r1, r0	@ 000d242c 0918
.org 0xd242e
	str r1, [r6, #84]	@ 000d242e 7165
.org 0xd2430
	adds r0, r4, #0	@ 000d2430 201c
.org 0xd2432
	muls r0, r3	@ 000d2432 5843
.org 0xd2434
	adds r0, r0, r2	@ 000d2434 8018
.org 0xd2436
	lsls r0, r0, #1	@ 000d2436 4000
.org 0xd2438
	lsrs r1, r0, #1	@ 000d2438 4108
.org 0xd243a
	str r1, [r5, #0]	@ 000d243a 2960
.org 0xd243c
	lsrs r0, r0, #17	@ 000d243c 400c
.org 0xd243e
	movs r1, #63	@ 000d243e 3f21
.org 0xd2440
	ands r0, r1	@ 000d2440 0840
.org 0xd2442
	adds r0, #192	@ 000d2442 c030
.org 0xd2444
	str r0, [r6, #96]	@ 000d2444 3066
.org 0xd2446
	adds r0, r6, #0	@ 000d2446 301c
.org 0xd2448
	bl 0x1cc9c	@ 000d2448 4af728fc
.org 0xd244c
	ldrb r0, [r6, #10]	@ 000d244c b07a
.org 0xd244e
	movs r1, #1	@ 000d244e 0121
.org 0xd2450
	orrs r0, r1	@ 000d2450 0843
.org 0xd2452
	movs r1, #2	@ 000d2452 0221
.org 0xd2454
	orrs r0, r1	@ 000d2454 0843
.org 0xd2456
	strb r0, [r6, #10]	@ 000d2456 b072
.org 0xd2458
	adds r0, r6, #0	@ 000d2458 301c
.org 0xd245a
	movs r1, #13	@ 000d245a 0d21
.org 0xd245c
	bl 0x1cf00	@ 000d245c 4af750fd
.org 0xd2460
	ldr r2, [pc, #36]	@ 000d2460 094a
.org 0xd2462
	movs r1, #232	@ 000d2462 e821
.org 0xd2464
	lsls r1, r1, #1	@ 000d2464 4900
.org 0xd2466
	adds r0, r2, r1	@ 000d2466 5018
.org 0xd2468
	ldrh r1, [r0, #0]	@ 000d2468 0188
.org 0xd246a
	movs r0, #127	@ 000d246a 7f20
.org 0xd246c
	ands r0, r1	@ 000d246c 0840
.org 0xd246e
	cmp r0, #2	@ 000d246e 0228
.org 0xd2470
	bne.n 0xd248c	@ 000d2470 0cd1
.org 0xd2472
	adds r0, r6, #0	@ 000d2472 301c
.org 0xd2474
	adds r0, #84	@ 000d2474 5430
.org 0xd2476
	bl 0x7b84	@ 000d2476 35f785fb
.org 0xd247a
	b.n 0xd2492	@ 000d247a 0ae0
.org 0xd247c
	.byte 0x38,0xdc,0x02,0x02	@ 000d247c data
.org 0xd2480
	.byte 0xfd,0x43,0x03,0x00	@ 000d2480 data
.org 0xd2484
	.byte 0xc3,0x9e,0x26,0x00	@ 000d2484 data
.org 0xd2488
	.byte 0xb0,0x0a,0x00,0x02	@ 000d2488 data
.org 0xd248c
	ldr r1, [pc, #36]	@ 000d248c 0949
.org 0xd248e
	adds r0, r2, r1	@ 000d248e 5018
.org 0xd2490
	ldr r0, [r0, #0]	@ 000d2490 0068
.org 0xd2492
	str r0, [r6, #116]	@ 000d2492 7067
