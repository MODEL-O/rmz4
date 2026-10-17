@ FUN_080dc330  entry 0x080dc330  size 152
.thumb
.org 0xdc330
FUN_080dc330:
	push {r4, r5, r6, r7, lr}	@ 000dc330 f0b5
.org 0xdc332
	mov r7, sl	@ 000dc332 5746
.org 0xdc334
	mov r6, r9	@ 000dc334 4e46
.org 0xdc336
	mov r5, r8	@ 000dc336 4546
.org 0xdc338
	push {r5, r6, r7}	@ 000dc338 e0b4
.org 0xdc33a
	sub sp, #4	@ 000dc33a 81b0
.org 0xdc33c
	str r0, [sp, #0]	@ 000dc33c 0090
.org 0xdc33e
	adds r5, r1, #0	@ 000dc33e 0d1c
.org 0xdc340
	adds r6, r2, #0	@ 000dc340 161c
.org 0xdc342
	mov sl, r3	@ 000dc342 9a46
.org 0xdc344
	ldr r0, [sp, #40]	@ 000dc344 0a98
.org 0xdc346
	ldr r1, [sp, #44]	@ 000dc346 0b99
.org 0xdc348
	lsls r0, r0, #24	@ 000dc348 0006
.org 0xdc34a
	lsrs r0, r0, #24	@ 000dc34a 000e
.org 0xdc34c
	mov r9, r0	@ 000dc34c 8146
.org 0xdc34e
	lsls r1, r1, #24	@ 000dc34e 0906
.org 0xdc350
	lsrs r1, r1, #24	@ 000dc350 090e
.org 0xdc352
	mov r8, r1	@ 000dc352 8846
.org 0xdc354
	ldr r0, [pc, #112]	@ 000dc354 1c48
.org 0xdc356
	ldr r0, [r0, #0]	@ 000dc356 0068
.org 0xdc358
	bl 0x5500	@ 000dc358 29f7d2f8
.org 0xdc35c
	mov ip, r0	@ 000dc35c 8446
.org 0xdc35e
	cmp r0, #0	@ 000dc35e 0028
.org 0xdc360
	beq.n 0xdc3b8	@ 000dc360 2ad0
.org 0xdc362
	mov r4, ip	@ 000dc362 6446
.org 0xdc364
	adds r4, #37	@ 000dc364 2534
.org 0xdc366
	movs r2, #0	@ 000dc366 0022
.org 0xdc368
	movs r3, #1	@ 000dc368 0123
.org 0xdc36a
	strb r3, [r4, #0]	@ 000dc36a 2370
.org 0xdc36c
	ldr r0, [pc, #92]	@ 000dc36c 1748
.org 0xdc36e
	movs r1, #43	@ 000dc36e 2b21
.org 0xdc370
	mov r7, ip	@ 000dc370 6746
.org 0xdc372
	strb r1, [r7, #9]	@ 000dc372 7972
.org 0xdc374
	adds r0, #172	@ 000dc374 ac30
.org 0xdc376
	ldr r0, [r0, #0]	@ 000dc376 0068
.org 0xdc378
	ldr r0, [r0, #0]	@ 000dc378 0068
.org 0xdc37a
	str r0, [r7, #20]	@ 000dc37a 7861
.org 0xdc37c
	movs r1, #0	@ 000dc37c 0021
.org 0xdc37e
	strh r2, [r7, #32]	@ 000dc37e 3a84
.org 0xdc380
	mov r0, ip	@ 000dc380 6046
.org 0xdc382
	adds r0, #34	@ 000dc382 2230
.org 0xdc384
	strb r1, [r0, #0]	@ 000dc384 0170
.org 0xdc386
	movs r0, #3	@ 000dc386 0320
.org 0xdc388
	strb r0, [r7, #16]	@ 000dc388 3874
.org 0xdc38a
	ldr r0, [sp, #0]	@ 000dc38a 0098
.org 0xdc38c
	str r0, [r7, #40]	@ 000dc38c b862
.org 0xdc38e
	ldr r0, [sp, #36]	@ 000dc38e 0998
.org 0xdc390
	str r0, [r7, #116]	@ 000dc390 7867
.org 0xdc392
	ldr r0, [r5, #0]	@ 000dc392 2868
.org 0xdc394
	str r0, [r7, #84]	@ 000dc394 7865
.org 0xdc396
	ldr r0, [r5, #4]	@ 000dc396 6868
.org 0xdc398
	str r0, [r7, #88]	@ 000dc398 b865
.org 0xdc39a
	ldr r0, [r6, #0]	@ 000dc39a 3068
.org 0xdc39c
	str r0, [r7, #92]	@ 000dc39c f865
.org 0xdc39e
	ldr r0, [r6, #4]	@ 000dc39e 7068
.org 0xdc3a0
	str r0, [r7, #96]	@ 000dc3a0 3866
.org 0xdc3a2
	mov r2, sl	@ 000dc3a2 5246
.org 0xdc3a4
	str r2, [r7, #104]	@ 000dc3a4 ba66
.org 0xdc3a6
	mov r0, r9	@ 000dc3a6 4846
.org 0xdc3a8
	strb r0, [r7, #18]	@ 000dc3a8 b874
.org 0xdc3aa
	mov r2, r8	@ 000dc3aa 4246
.org 0xdc3ac
	strb r2, [r4, #0]	@ 000dc3ac 2270
.org 0xdc3ae
	mov r0, ip	@ 000dc3ae 6046
.org 0xdc3b0
	adds r0, #120	@ 000dc3b0 7830
.org 0xdc3b2
	strb r3, [r0, #0]	@ 000dc3b2 0370
.org 0xdc3b4
	adds r0, #1	@ 000dc3b4 0130
.org 0xdc3b6
	strb r1, [r0, #0]	@ 000dc3b6 0170
.org 0xdc3b8
	add sp, #4	@ 000dc3b8 01b0
.org 0xdc3ba
	pop {r3, r4, r5}	@ 000dc3ba 38bc
.org 0xdc3bc
	mov r8, r3	@ 000dc3bc 9846
.org 0xdc3be
	mov r9, r4	@ 000dc3be a146
.org 0xdc3c0
	mov sl, r5	@ 000dc3c0 aa46
.org 0xdc3c2
	pop {r4, r5, r6, r7}	@ 000dc3c2 f0bc
.org 0xdc3c4
	pop {r0}	@ 000dc3c4 01bc
.org 0xdc3c6
	bx r0	@ 000dc3c6 0047
