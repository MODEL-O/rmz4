@ FUN_080a0480  entry 0x080a0480  size 238
.thumb
.org 0xa0480
FUN_080a0480:
	push {r4, r5, r6, r7, lr}	@ 000a0480 f0b5
.org 0xa0482
	mov r7, r8	@ 000a0482 4746
.org 0xa0484
	push {r7}	@ 000a0484 80b4
.org 0xa0486
	sub sp, #8	@ 000a0486 82b0
.org 0xa0488
	adds r7, r0, #0	@ 000a0488 071c
.org 0xa048a
	ldrb r2, [r7, #15]	@ 000a048a fa7b
.org 0xa048c
	cmp r2, #0	@ 000a048c 002a
.org 0xa048e
	bne.n 0xa04c8	@ 000a048e 1bd1
.org 0xa0490
	adds r1, r7, #0	@ 000a0490 391c
.org 0xa0492
	adds r1, #37	@ 000a0492 2531
.org 0xa0494
	movs r0, #24	@ 000a0494 1820
.org 0xa0496
	strb r0, [r1, #0]	@ 000a0496 0870
.org 0xa0498
	ldrb r1, [r7, #10]	@ 000a0498 b97a
.org 0xa049a
	movs r0, #1	@ 000a049a 0120
.org 0xa049c
	orrs r0, r1	@ 000a049c 0843
.org 0xa049e
	strb r0, [r7, #10]	@ 000a049e b872
.org 0xa04a0
	adds r0, r7, #0	@ 000a04a0 381c
.org 0xa04a2
	adds r0, #140	@ 000a04a2 8c30
.org 0xa04a4
	str r2, [r0, #0]	@ 000a04a4 0260
.org 0xa04a6
	adds r0, #4	@ 000a04a6 0430
.org 0xa04a8
	str r2, [r0, #0]	@ 000a04a8 0260
.org 0xa04aa
	adds r0, #4	@ 000a04aa 0430
.org 0xa04ac
	strb r2, [r0, #0]	@ 000a04ac 0270
.org 0xa04ae
	ldrb r1, [r7, #10]	@ 000a04ae b97a
.org 0xa04b0
	movs r0, #251	@ 000a04b0 fb20
.org 0xa04b2
	ands r0, r1	@ 000a04b2 0840
.org 0xa04b4
	strb r0, [r7, #10]	@ 000a04b4 b872
.org 0xa04b6
	ldr r1, [pc, #184]	@ 000a04b6 2e49
.org 0xa04b8
	adds r0, r7, #0	@ 000a04b8 381c
.org 0xa04ba
	bl 0x1cf00	@ 000a04ba 7cf721fd
.org 0xa04be
	movs r0, #4	@ 000a04be 0420
.org 0xa04c0
	strb r0, [r7, #18]	@ 000a04c0 b874
.org 0xa04c2
	ldrb r0, [r7, #15]	@ 000a04c2 f87b
.org 0xa04c4
	adds r0, #1	@ 000a04c4 0130
.org 0xa04c6
	strb r0, [r7, #15]	@ 000a04c6 f873
.org 0xa04c8
	adds r0, r7, #0	@ 000a04c8 381c
.org 0xa04ca
	bl 0x1cff0	@ 000a04ca 7cf791fd
.org 0xa04ce
	ldrb r0, [r7, #18]	@ 000a04ce b87c
.org 0xa04d0
	subs r0, #1	@ 000a04d0 0138
.org 0xa04d2
	strb r0, [r7, #18]	@ 000a04d2 b874
.org 0xa04d4
	lsls r0, r0, #24	@ 000a04d4 0006
.org 0xa04d6
	lsrs r0, r0, #24	@ 000a04d6 000e
.org 0xa04d8
	mov r8, r0	@ 000a04d8 8046
.org 0xa04da
	cmp r0, #0	@ 000a04da 0028
.org 0xa04dc
	bne.n 0xa0562	@ 000a04dc 41d1
.org 0xa04de
	movs r0, #42	@ 000a04de 2a20
.org 0xa04e0
	bl 0x2b10	@ 000a04e0 62f716fb
.org 0xa04e4
	ldr r6, [pc, #140]	@ 000a04e4 234e
.org 0xa04e6
	ldr r0, [r6, #0]	@ 000a04e6 3068
.org 0xa04e8
	ldr r5, [pc, #140]	@ 000a04e8 234d
.org 0xa04ea
	muls r0, r5	@ 000a04ea 6843
.org 0xa04ec
	ldr r2, [pc, #140]	@ 000a04ec 234a
.org 0xa04ee
	adds r0, r0, r2	@ 000a04ee 8018
.org 0xa04f0
	lsls r0, r0, #1	@ 000a04f0 4000
.org 0xa04f2
	lsrs r4, r0, #1	@ 000a04f2 4408
.org 0xa04f4
	lsrs r0, r0, #17	@ 000a04f4 400c
.org 0xa04f6
	movs r3, #7	@ 000a04f6 0723
.org 0xa04f8
	ands r0, r3	@ 000a04f8 1840
.org 0xa04fa
	subs r0, #3	@ 000a04fa 0338
.org 0xa04fc
	lsls r0, r0, #8	@ 000a04fc 0002
.org 0xa04fe
	ldr r1, [r7, #84]	@ 000a04fe 796d
.org 0xa0500
	adds r1, r1, r0	@ 000a0500 0918
.org 0xa0502
	str r1, [sp, #0]	@ 000a0502 0091
.org 0xa0504
	adds r0, r4, #0	@ 000a0504 201c
.org 0xa0506
	muls r0, r5	@ 000a0506 6843
.org 0xa0508
	adds r0, r0, r2	@ 000a0508 8018
.org 0xa050a
	lsls r0, r0, #1	@ 000a050a 4000
.org 0xa050c
	lsrs r1, r0, #1	@ 000a050c 4108
.org 0xa050e
	str r1, [r6, #0]	@ 000a050e 3160
.org 0xa0510
	lsrs r0, r0, #17	@ 000a0510 400c
.org 0xa0512
	ands r0, r3	@ 000a0512 1840
.org 0xa0514
	subs r0, #3	@ 000a0514 0338
.org 0xa0516
	lsls r0, r0, #8	@ 000a0516 0002
.org 0xa0518
	ldr r1, [r7, #88]	@ 000a0518 b96d
.org 0xa051a
	adds r1, r1, r0	@ 000a051a 0918
.org 0xa051c
	str r1, [sp, #4]	@ 000a051c 0191
.org 0xa051e
	movs r0, #1	@ 000a051e 0120
.org 0xa0520
	mov r1, sp	@ 000a0520 6946
.org 0xa0522
	bl 0xd0c88	@ 000a0522 30f0b1fb
.org 0xa0526
	adds r0, r7, #0	@ 000a0526 381c
.org 0xa0528
	bl 0xa0c18	@ 000a0528 00f076fb
.org 0xa052c
	adds r4, r7, #0	@ 000a052c 3c1c
.org 0xa052e
	adds r4, #84	@ 000a052e 5434
.org 0xa0530
	movs r0, #4	@ 000a0530 0420
.org 0xa0532
	movs r1, #35	@ 000a0532 2321
.org 0xa0534
	adds r2, r4, #0	@ 000a0534 221c
.org 0xa0536
	bl 0x2ab88	@ 000a0536 8af727fb
.org 0xa053a
	ldrb r1, [r7, #10]	@ 000a053a b97a
.org 0xa053c
	movs r0, #254	@ 000a053c fe20
.org 0xa053e
	ands r0, r1	@ 000a053e 0840
.org 0xa0540
	strb r0, [r7, #10]	@ 000a0540 b872
.org 0xa0542
	ldr r2, [pc, #60]	@ 000a0542 0f4a
.org 0xa0544
	ldrh r1, [r2, #12]	@ 000a0544 9189
.org 0xa0546
	ldr r0, [pc, #60]	@ 000a0546 0f48
.org 0xa0548
	cmp r1, r0	@ 000a0548 8142
.org 0xa054a
	bhi.n 0xa0550	@ 000a054a 01d8
.org 0xa054c
	adds r0, r1, #1	@ 000a054c 481c
.org 0xa054e
	strh r0, [r2, #12]	@ 000a054e 9081
.org 0xa0550
	adds r0, r7, #0	@ 000a0550 381c
.org 0xa0552
	adds r1, r4, #0	@ 000a0552 211c
.org 0xa0554
	bl 0x2abe0	@ 000a0554 8af744fb
.org 0xa0558
	movs r0, #4	@ 000a0558 0420
.org 0xa055a
	strb r0, [r7, #13]	@ 000a055a 7873
.org 0xa055c
	mov r0, r8	@ 000a055c 4046
.org 0xa055e
	strb r0, [r7, #14]	@ 000a055e b873
.org 0xa0560
	strb r0, [r7, #15]	@ 000a0560 f873
.org 0xa0562
	add sp, #8	@ 000a0562 02b0
.org 0xa0564
	pop {r3}	@ 000a0564 08bc
.org 0xa0566
	mov r8, r3	@ 000a0566 9846
.org 0xa0568
	pop {r4, r5, r6, r7}	@ 000a0568 f0bc
.org 0xa056a
	pop {r0}	@ 000a056a 01bc
.org 0xa056c
	bx r0	@ 000a056c 0047
