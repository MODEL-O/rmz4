@ FUN_080b9374  entry 0x080b9374  size 232
.thumb
.org 0xb9374
FUN_080b9374:
	push {r4, r5, lr}	@ 000b9374 30b5
.org 0xb9376
	adds r5, r0, #0	@ 000b9376 051c
.org 0xb9378
	ldr r1, [r5, #40]	@ 000b9378 a96a
.org 0xb937a
	ldrb r0, [r5, #15]	@ 000b937a e87b
.org 0xb937c
	cmp r0, #0	@ 000b937c 0028
.org 0xb937e
	bne.n 0xb93be	@ 000b937e 1ed1
.org 0xb9380
	adds r1, #191	@ 000b9380 bf31
.org 0xb9382
	ldrb r0, [r1, #0]	@ 000b9382 0878
.org 0xb9384
	movs r4, #4	@ 000b9384 0424
.org 0xb9386
	orrs r0, r4	@ 000b9386 2043
.org 0xb9388
	strb r0, [r1, #0]	@ 000b9388 0870
.org 0xb938a
	adds r0, r5, #0	@ 000b938a 281c
.org 0xb938c
	adds r0, #116	@ 000b938c 7430
.org 0xb938e
	ldr r1, [pc, #204]	@ 000b938e 3349
.org 0xb9390
	bl 0x5784	@ 000b9390 4cf7f8f9
.org 0xb9394
	ldr r1, [pc, #200]	@ 000b9394 3249
.org 0xb9396
	ldr r0, [pc, #204]	@ 000b9396 3348
.org 0xb9398
	strh r0, [r1, #0]	@ 000b9398 0880
.org 0xb939a
	adds r2, r5, #0	@ 000b939a 2a1c
.org 0xb939c
	adds r2, #69	@ 000b939c 4532
.org 0xb939e
	ldrb r1, [r2, #0]	@ 000b939e 1178
.org 0xb93a0
	movs r0, #13	@ 000b93a0 0d20
.org 0xb93a2
	negs r0, r0	@ 000b93a2 4042
.org 0xb93a4
	ands r0, r1	@ 000b93a4 0840
.org 0xb93a6
	orrs r0, r4	@ 000b93a6 2043
.org 0xb93a8
	strb r0, [r2, #0]	@ 000b93a8 1070
.org 0xb93aa
	movs r1, #187	@ 000b93aa bb21
.org 0xb93ac
	lsls r1, r1, #8	@ 000b93ac 0902
.org 0xb93ae
	adds r0, r5, #0	@ 000b93ae 281c
.org 0xb93b0
	bl 0x1cf00	@ 000b93b0 63f7a6fd
.org 0xb93b4
	movs r0, #32	@ 000b93b4 2020
.org 0xb93b6
	strb r0, [r5, #18]	@ 000b93b6 a874
.org 0xb93b8
	ldrb r0, [r5, #15]	@ 000b93b8 e87b
.org 0xb93ba
	adds r0, #1	@ 000b93ba 0130
.org 0xb93bc
	strb r0, [r5, #15]	@ 000b93bc e873
.org 0xb93be
	adds r0, r5, #0	@ 000b93be 281c
.org 0xb93c0
	bl 0x1cff0	@ 000b93c0 63f716fe
.org 0xb93c4
	ldrb r0, [r5, #18]	@ 000b93c4 a87c
.org 0xb93c6
	subs r4, r0, #1	@ 000b93c6 441e
.org 0xb93c8
	strb r4, [r5, #18]	@ 000b93c8 ac74
.org 0xb93ca
	ldrb r0, [r5, #18]	@ 000b93ca a87c
.org 0xb93cc
	ldr r2, [pc, #152]	@ 000b93cc 264a
.org 0xb93ce
	lsls r0, r0, #25	@ 000b93ce 4006
.org 0xb93d0
	lsrs r0, r0, #23	@ 000b93d0 c00d
.org 0xb93d2
	adds r0, r0, r2	@ 000b93d2 8018
.org 0xb93d4
	movs r1, #0	@ 000b93d4 0021
.org 0xb93d6
	ldrsh r0, [r0, r1]	@ 000b93d6 405e
.org 0xb93d8
	adds r1, r0, #0	@ 000b93d8 011c
.org 0xb93da
	cmp r0, #0	@ 000b93da 0028
.org 0xb93dc
	bge.n 0xb93e0	@ 000b93dc 00da
.org 0xb93de
	adds r1, r0, #3	@ 000b93de c11c
.org 0xb93e0
	asrs r0, r1, #2	@ 000b93e0 8810
.org 0xb93e2
	lsls r0, r0, #24	@ 000b93e2 0006
.org 0xb93e4
	lsrs r0, r0, #23	@ 000b93e4 c00d
.org 0xb93e6
	adds r0, r0, r2	@ 000b93e6 8018
.org 0xb93e8
	movs r1, #0	@ 000b93e8 0021
.org 0xb93ea
	ldrsh r0, [r0, r1]	@ 000b93ea 405e
.org 0xb93ec
	cmp r0, #0	@ 000b93ec 0028
.org 0xb93ee
	bge.n 0xb93f2	@ 000b93ee 00da
.org 0xb93f0
	adds r0, #15	@ 000b93f0 0f30
.org 0xb93f2
	asrs r2, r0, #4	@ 000b93f2 0211
.org 0xb93f4
	ldr r3, [pc, #104]	@ 000b93f4 1a4b
.org 0xb93f6
	movs r0, #31	@ 000b93f6 1f20
.org 0xb93f8
	adds r1, r2, #0	@ 000b93f8 111c
.org 0xb93fa
	ands r1, r0	@ 000b93fa 0140
.org 0xb93fc
	movs r0, #16	@ 000b93fc 1020
.org 0xb93fe
	subs r0, r0, r2	@ 000b93fe 801a
.org 0xb9400
	lsls r0, r0, #8	@ 000b9400 0002
.org 0xb9402
	orrs r1, r0	@ 000b9402 0143
.org 0xb9404
	strh r1, [r3, #2]	@ 000b9404 5980
.org 0xb9406
	lsls r0, r4, #24	@ 000b9406 2006
.org 0xb9408
	lsrs r2, r0, #24	@ 000b9408 020e
.org 0xb940a
	cmp r2, #0	@ 000b940a 002a
.org 0xb940c
	bne.n 0xb9456	@ 000b940c 23d1
.org 0xb940e
	strh r2, [r3, #0]	@ 000b940e 1a80
.org 0xb9410
	adds r3, r5, #0	@ 000b9410 2b1c
.org 0xb9412
	adds r3, #69	@ 000b9412 4533
.org 0xb9414
	ldrb r1, [r3, #0]	@ 000b9414 1978
.org 0xb9416
	movs r0, #13	@ 000b9416 0d20
.org 0xb9418
	negs r0, r0	@ 000b9418 4042
.org 0xb941a
	ands r0, r1	@ 000b941a 0840
.org 0xb941c
	strb r0, [r3, #0]	@ 000b941c 1870
.org 0xb941e
	ldrb r1, [r5, #10]	@ 000b941e a97a
.org 0xb9420
	movs r0, #254	@ 000b9420 fe20
.org 0xb9422
	ands r0, r1	@ 000b9422 0840
.org 0xb9424
	movs r1, #253	@ 000b9424 fd21
.org 0xb9426
	ands r0, r1	@ 000b9426 0840
.org 0xb9428
	strb r0, [r5, #10]	@ 000b9428 a872
.org 0xb942a
	adds r0, r5, #0	@ 000b942a 281c
.org 0xb942c
	adds r0, #140	@ 000b942c 8c30
.org 0xb942e
	str r2, [r0, #0]	@ 000b942e 0260
.org 0xb9430
	adds r0, #4	@ 000b9430 0430
.org 0xb9432
	str r2, [r0, #0]	@ 000b9432 0260
.org 0xb9434
	adds r1, r5, #0	@ 000b9434 291c
.org 0xb9436
	adds r1, #148	@ 000b9436 9431
.org 0xb9438
	movs r0, #0	@ 000b9438 0020
.org 0xb943a
	strb r0, [r1, #0]	@ 000b943a 0870
.org 0xb943c
	ldrb r1, [r5, #10]	@ 000b943c a97a
.org 0xb943e
	movs r0, #251	@ 000b943e fb20
.org 0xb9440
	ands r0, r1	@ 000b9440 0840
.org 0xb9442
	strb r0, [r5, #10]	@ 000b9442 a872
.org 0xb9444
	ldr r1, [pc, #36]	@ 000b9444 0949
.org 0xb9446
	ldrb r0, [r5, #9]	@ 000b9446 687a
.org 0xb9448
	lsls r0, r0, #2	@ 000b9448 8000
.org 0xb944a
	adds r0, r0, r1	@ 000b944a 4018
.org 0xb944c
	movs r1, #3	@ 000b944c 0321
.org 0xb944e
	str r1, [r5, #12]	@ 000b944e e960
.org 0xb9450
	ldr r0, [r0, #0]	@ 000b9450 0068
.org 0xb9452
	ldr r0, [r0, #12]	@ 000b9452 c068
.org 0xb9454
	str r0, [r5, #20]	@ 000b9454 6861
.org 0xb9456
	pop {r4, r5}	@ 000b9456 30bc
.org 0xb9458
	pop {r0}	@ 000b9458 01bc
.org 0xb945a
	bx r0	@ 000b945a 0047
