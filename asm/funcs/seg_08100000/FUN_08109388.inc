@ FUN_08109388  entry 0x08109388  size 238
.thumb
.org 0x109388
FUN_08109388:
	push {r4, r5, r6, r7, lr}	@ 00109388 f0b5
.org 0x10938a
	sub sp, #8	@ 0010938a 82b0
.org 0x10938c
	adds r5, r0, #0	@ 0010938c 051c
.org 0x10938e
	ldr r7, [r5, #40]	@ 0010938e af6a
.org 0x109390
	ldr r1, [pc, #228]	@ 00109390 3949
.org 0x109392
	movs r2, #186	@ 00109392 ba22
.org 0x109394
	lsls r2, r2, #1	@ 00109394 5200
.org 0x109396
	adds r0, r7, r2	@ 00109396 b818
.org 0x109398
	ldrb r0, [r0, #0]	@ 00109398 0078
.org 0x10939a
	lsls r0, r0, #3	@ 0010939a c000
.org 0x10939c
	adds r0, r0, r1	@ 0010939c 4018
.org 0x10939e
	ldr r1, [r0, #0]	@ 0010939e 0168
.org 0x1093a0
	ldr r2, [r0, #4]	@ 001093a0 4268
.org 0x1093a2
	str r1, [sp, #0]	@ 001093a2 0091
.org 0x1093a4
	str r2, [sp, #4]	@ 001093a4 0192
.org 0x1093a6
	adds r0, r7, #0	@ 001093a6 381c
.org 0x1093a8
	adds r0, #241	@ 001093a8 f130
.org 0x1093aa
	ldrb r6, [r0, #0]	@ 001093aa 0678
.org 0x1093ac
	adds r0, #1	@ 001093ac 0130
.org 0x1093ae
	ldrb r2, [r0, #0]	@ 001093ae 0278
.org 0x1093b0
	cmp r6, r2	@ 001093b0 9642
.org 0x1093b2
	bcs.n 0x1093b6	@ 001093b2 00d2
.org 0x1093b4
	ldrb r6, [r0, #0]	@ 001093b4 0678
.org 0x1093b6
	adds r0, r7, #0	@ 001093b6 381c
.org 0x1093b8
	adds r0, #243	@ 001093b8 f330
.org 0x1093ba
	ldrb r1, [r0, #0]	@ 001093ba 0178
.org 0x1093bc
	cmp r6, r1	@ 001093bc 8e42
.org 0x1093be
	bcs.n 0x1093c2	@ 001093be 00d2
.org 0x1093c0
	ldrb r6, [r0, #0]	@ 001093c0 0678
.org 0x1093c2
	adds r0, r5, #0	@ 001093c2 281c
.org 0x1093c4
	bl 0x1cc9c	@ 001093c4 13f76afc
.org 0x1093c8
	adds r0, r5, #0	@ 001093c8 281c
.org 0x1093ca
	bl 0x1ceec	@ 001093ca 13f78ffd
.org 0x1093ce
	ldrb r1, [r5, #10]	@ 001093ce a97a
.org 0x1093d0
	movs r0, #1	@ 001093d0 0120
.org 0x1093d2
	movs r4, #0	@ 001093d2 0024
.org 0x1093d4
	orrs r0, r1	@ 001093d4 0843
.org 0x1093d6
	movs r1, #2	@ 001093d6 0221
.org 0x1093d8
	orrs r0, r1	@ 001093d8 0843
.org 0x1093da
	strb r0, [r5, #10]	@ 001093da a872
.org 0x1093dc
	movs r2, #148	@ 001093dc 9422
.org 0x1093de
	lsls r2, r2, #8	@ 001093de 1202
.org 0x1093e0
	adds r0, r2, #0	@ 001093e0 101c
.org 0x1093e2
	orrs r6, r0	@ 001093e2 0643
.org 0x1093e4
	adds r0, r5, #0	@ 001093e4 281c
.org 0x1093e6
	adds r1, r6, #0	@ 001093e6 311c
.org 0x1093e8
	bl 0x1cf00	@ 001093e8 13f78afd
.org 0x1093ec
	adds r0, r5, #0	@ 001093ec 281c
.org 0x1093ee
	bl 0x1cff0	@ 001093ee 13f7fffd
.org 0x1093f2
	adds r0, r5, #0	@ 001093f2 281c
.org 0x1093f4
	adds r0, #76	@ 001093f4 4c30
.org 0x1093f6
	strb r4, [r0, #0]	@ 001093f6 0470
.org 0x1093f8
	adds r2, r5, #0	@ 001093f8 2a1c
.org 0x1093fa
	adds r2, #74	@ 001093fa 4a32
.org 0x1093fc
	ldrb r1, [r2, #0]	@ 001093fc 1178
.org 0x1093fe
	movs r0, #17	@ 001093fe 1120
.org 0x109400
	negs r0, r0	@ 00109400 4042
.org 0x109402
	ands r0, r1	@ 00109402 0840
.org 0x109404
	strb r0, [r2, #0]	@ 00109404 1070
.org 0x109406
	ldrb r1, [r5, #10]	@ 00109406 a97a
.org 0x109408
	movs r0, #239	@ 00109408 ef20
.org 0x10940a
	ands r0, r1	@ 0010940a 0840
.org 0x10940c
	strb r0, [r5, #10]	@ 0010940c a872
.org 0x10940e
	ldr r1, [sp, #0]	@ 0010940e 0099
.org 0x109410
	lsls r0, r1, #16	@ 00109410 0804
.org 0x109412
	asrs r0, r0, #16	@ 00109412 0014
.org 0x109414
	ldr r1, [r7, #84]	@ 00109414 796d
.org 0x109416
	adds r1, r1, r0	@ 00109416 0918
.org 0x109418
	str r1, [r5, #84]	@ 00109418 6965
.org 0x10941a
	ldr r0, [sp, #0]	@ 0010941a 0098
.org 0x10941c
	asrs r2, r0, #16	@ 0010941c 0214
.org 0x10941e
	ldr r0, [r7, #88]	@ 0010941e b86d
.org 0x109420
	adds r0, r0, r2	@ 00109420 8018
.org 0x109422
	str r0, [r5, #88]	@ 00109422 a865
.org 0x109424
	adds r0, r5, #0	@ 00109424 281c
.org 0x109426
	adds r0, #180	@ 00109426 b430
.org 0x109428
	str r1, [r0, #0]	@ 00109428 0160
.org 0x10942a
	adds r1, r5, #0	@ 0010942a 291c
.org 0x10942c
	adds r1, #184	@ 0010942c b831
.org 0x10942e
	ldr r0, [r5, #88]	@ 0010942e a86d
.org 0x109430
	str r0, [r1, #0]	@ 00109430 0860
.org 0x109432
	movs r0, #128	@ 00109432 8020
.org 0x109434
	lsls r0, r0, #2	@ 00109434 8000
.org 0x109436
	str r0, [r5, #96]	@ 00109436 2866
.org 0x109438
	adds r0, r5, #0	@ 00109438 281c
.org 0x10943a
	adds r0, #188	@ 0010943a bc30
.org 0x10943c
	strb r4, [r0, #0]	@ 0010943c 0470
.org 0x10943e
	adds r1, #5	@ 0010943e 0531
.org 0x109440
	movs r0, #32	@ 00109440 2020
.org 0x109442
	strb r0, [r1, #0]	@ 00109442 0870
.org 0x109444
	movs r0, #60	@ 00109444 3c20
.org 0x109446
	strb r0, [r5, #18]	@ 00109446 a874
.org 0x109448
	adds r0, r5, #0	@ 00109448 281c
.org 0x10944a
	adds r0, #192	@ 0010944a c030
.org 0x10944c
	strh r4, [r0, #0]	@ 0010944c 0480
.org 0x10944e
	adds r0, #2	@ 0010944e 0230
.org 0x109450
	strh r4, [r0, #0]	@ 00109450 0480
.org 0x109452
	str r4, [r5, #100]	@ 00109452 6c66
.org 0x109454
	str r4, [r5, #104]	@ 00109454 ac66
.org 0x109456
	ldr r1, [pc, #36]	@ 00109456 0949
.org 0x109458
	ldrb r0, [r5, #9]	@ 00109458 687a
.org 0x10945a
	lsls r0, r0, #2	@ 0010945a 8000
.org 0x10945c
	adds r0, r0, r1	@ 0010945c 4018
.org 0x10945e
	movs r1, #1	@ 0010945e 0121
.org 0x109460
	str r1, [r5, #12]	@ 00109460 e960
.org 0x109462
	ldr r0, [r0, #0]	@ 00109462 0068
.org 0x109464
	ldr r0, [r0, #4]	@ 00109464 4068
.org 0x109466
	str r0, [r5, #20]	@ 00109466 6861
.org 0x109468
	adds r0, r5, #0	@ 00109468 281c
.org 0x10946a
	bl 0x109480	@ 0010946a 00f009f8
.org 0x10946e
	add sp, #8	@ 0010946e 02b0
.org 0x109470
	pop {r4, r5, r6, r7}	@ 00109470 f0bc
.org 0x109472
	pop {r0}	@ 00109472 01bc
.org 0x109474
	bx r0	@ 00109474 0047
