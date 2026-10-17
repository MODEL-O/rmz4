@ FUN_0805b2ac  entry 0x0805b2ac  size 214
.thumb
.org 0x5b2ac
FUN_0805b2ac:
	push {r4, r5, r6, lr}	@ 0005b2ac 70b5
.org 0x5b2ae
	sub sp, #8	@ 0005b2ae 82b0
.org 0x5b2b0
	adds r4, r0, #0	@ 0005b2b0 041c
.org 0x5b2b2
	ldrb r0, [r4, #15]	@ 0005b2b2 e07b
.org 0x5b2b4
	cmp r0, #0	@ 0005b2b4 0028
.org 0x5b2b6
	bne.n 0x5b2e4	@ 0005b2b6 15d1
.org 0x5b2b8
	movs r0, #191	@ 0005b2b8 bf20
.org 0x5b2ba
	bl 0x2b10	@ 0005b2ba a7f729fc
.org 0x5b2be
	adds r0, r4, #0	@ 0005b2be 201c
.org 0x5b2c0
	adds r0, #116	@ 0005b2c0 7430
.org 0x5b2c2
	ldr r1, [pc, #192]	@ 0005b2c2 3049
.org 0x5b2c4
	bl 0x5784	@ 0005b2c4 aaf75efa
.org 0x5b2c8
	ldr r1, [pc, #188]	@ 0005b2c8 2f49
.org 0x5b2ca
	adds r0, r4, #0	@ 0005b2ca 201c
.org 0x5b2cc
	bl 0x1cf00	@ 0005b2cc c1f718fe
.org 0x5b2d0
	adds r0, r4, #0	@ 0005b2d0 201c
.org 0x5b2d2
	adds r0, #189	@ 0005b2d2 bd30
.org 0x5b2d4
	movs r1, #1	@ 0005b2d4 0121
.org 0x5b2d6
	strb r1, [r0, #0]	@ 0005b2d6 0170
.org 0x5b2d8
	movs r0, #16	@ 0005b2d8 1020
.org 0x5b2da
	strb r0, [r4, #18]	@ 0005b2da a074
.org 0x5b2dc
	strb r1, [r4, #19]	@ 0005b2dc e174
.org 0x5b2de
	ldrb r0, [r4, #15]	@ 0005b2de e07b
.org 0x5b2e0
	adds r0, #1	@ 0005b2e0 0130
.org 0x5b2e2
	strb r0, [r4, #15]	@ 0005b2e2 e073
.org 0x5b2e4
	adds r0, r4, #0	@ 0005b2e4 201c
.org 0x5b2e6
	bl 0x1cff0	@ 0005b2e6 c1f783fe
.org 0x5b2ea
	adds r0, r4, #0	@ 0005b2ea 201c
.org 0x5b2ec
	adds r0, #115	@ 0005b2ec 7330
.org 0x5b2ee
	ldrb r0, [r0, #0]	@ 0005b2ee 0078
.org 0x5b2f0
	cmp r0, #3	@ 0005b2f0 0328
.org 0x5b2f2
	bne.n 0x5b37a	@ 0005b2f2 42d1
.org 0x5b2f4
	ldrb r0, [r4, #19]	@ 0005b2f4 e07c
.org 0x5b2f6
	cmp r0, #0	@ 0005b2f6 0028
.org 0x5b2f8
	beq.n 0x5b366	@ 0005b2f8 35d0
.org 0x5b2fa
	ldr r0, [pc, #144]	@ 0005b2fa 2448
.org 0x5b2fc
	ldr r1, [pc, #144]	@ 0005b2fc 2449
.org 0x5b2fe
	adds r1, #146	@ 0005b2fe 9231
.org 0x5b300
	ldrh r1, [r1, #0]	@ 0005b300 0988
.org 0x5b302
	ldrh r2, [r0, #6]	@ 0005b302 c288
.org 0x5b304
	lsrs r2, r2, #6	@ 0005b304 9209
.org 0x5b306
	subs r1, r1, r2	@ 0005b306 891a
.org 0x5b308
	lsls r1, r1, #5	@ 0005b308 4901
.org 0x5b30a
	movs r2, #128	@ 0005b30a 8022
.org 0x5b30c
	lsls r2, r2, #9	@ 0005b30c 5202
.org 0x5b30e
	adds r1, r1, r2	@ 0005b30e 8918
.org 0x5b310
	bl 0x1d30	@ 0005b310 a6f70efd
.org 0x5b314
	ldr r0, [pc, #124]	@ 0005b314 1f48
.org 0x5b316
	ldr r1, [pc, #128]	@ 0005b316 2049
.org 0x5b318
	adds r1, #146	@ 0005b318 9231
.org 0x5b31a
	ldrh r1, [r1, #0]	@ 0005b31a 0988
.org 0x5b31c
	ldrb r2, [r0, #7]	@ 0005b31c c279
.org 0x5b31e
	subs r1, r1, r2	@ 0005b31e 891a
.org 0x5b320
	lsls r1, r1, #5	@ 0005b320 4901
.org 0x5b322
	movs r2, #128	@ 0005b322 8022
.org 0x5b324
	lsls r2, r2, #2	@ 0005b324 9200
.org 0x5b326
	adds r1, r1, r2	@ 0005b326 8918
.org 0x5b328
	bl 0x2208	@ 0005b328 a6f76eff
.org 0x5b32c
	ldr r0, [r4, #84]	@ 0005b32c 606d
.org 0x5b32e
	str r0, [sp, #0]	@ 0005b32e 0090
.org 0x5b330
	ldr r0, [r4, #88]	@ 0005b330 a06d
.org 0x5b332
	ldr r1, [pc, #104]	@ 0005b332 1a49
.org 0x5b334
	adds r0, r0, r1	@ 0005b334 4018
.org 0x5b336
	str r0, [sp, #4]	@ 0005b336 0190
.org 0x5b338
	adds r5, r4, #0	@ 0005b338 251c
.org 0x5b33a
	adds r5, #200	@ 0005b33a c835
.org 0x5b33c
	ldr r0, [r5, #0]	@ 0005b33c 2868
.org 0x5b33e
	adds r6, r4, #0	@ 0005b33e 261c
.org 0x5b340
	adds r6, #191	@ 0005b340 bf36
.org 0x5b342
	cmp r0, #0	@ 0005b342 0028
.org 0x5b344
	beq.n 0x5b34c	@ 0005b344 02d0
.org 0x5b346
	ldrb r0, [r6, #0]	@ 0005b346 3078
.org 0x5b348
	cmp r0, #5	@ 0005b348 0528
.org 0x5b34a
	beq.n 0x5b362	@ 0005b34a 0ad0
.org 0x5b34c
	adds r0, r4, #0	@ 0005b34c 201c
.org 0x5b34e
	mov r1, sp	@ 0005b34e 6946
.org 0x5b350
	movs r2, #1	@ 0005b350 0122
.org 0x5b352
	bl 0xc2920	@ 0005b352 67f0e5fa
.org 0x5b356
	str r0, [r5, #0]	@ 0005b356 2860
.org 0x5b358
	movs r1, #255	@ 0005b358 ff21
.org 0x5b35a
	cmp r0, #0	@ 0005b35a 0028
.org 0x5b35c
	beq.n 0x5b360	@ 0005b35c 00d0
.org 0x5b35e
	movs r1, #5	@ 0005b35e 0521
.org 0x5b360
	strb r1, [r6, #0]	@ 0005b360 3170
.org 0x5b362
	movs r0, #0	@ 0005b362 0020
.org 0x5b364
	strb r0, [r4, #19]	@ 0005b364 e074
.org 0x5b366
	ldrb r0, [r4, #18]	@ 0005b366 a07c
.org 0x5b368
	subs r0, #1	@ 0005b368 0138
.org 0x5b36a
	strb r0, [r4, #18]	@ 0005b36a a074
.org 0x5b36c
	lsls r0, r0, #24	@ 0005b36c 0006
.org 0x5b36e
	lsrs r1, r0, #24	@ 0005b36e 010e
.org 0x5b370
	cmp r1, #0	@ 0005b370 0029
.org 0x5b372
	bne.n 0x5b37a	@ 0005b372 02d1
.org 0x5b374
	movs r0, #1	@ 0005b374 0120
.org 0x5b376
	strb r0, [r4, #14]	@ 0005b376 a073
.org 0x5b378
	strb r1, [r4, #15]	@ 0005b378 e173
.org 0x5b37a
	add sp, #8	@ 0005b37a 02b0
.org 0x5b37c
	pop {r4, r5, r6}	@ 0005b37c 70bc
.org 0x5b37e
	pop {r0}	@ 0005b37e 01bc
.org 0x5b380
	bx r0	@ 0005b380 0047
