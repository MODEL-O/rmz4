@ FUN_08094430  entry 0x08094430  size 152
.thumb
.org 0x94430
FUN_08094430:
	push {r4, r5, lr}	@ 00094430 30b5
.org 0x94432
	sub sp, #8	@ 00094432 82b0
.org 0x94434
	adds r4, r0, #0	@ 00094434 041c
.org 0x94436
	ldrb r0, [r4, #10]	@ 00094436 a07a
.org 0x94438
	lsrs r2, r0, #4	@ 00094438 0209
.org 0x9443a
	movs r3, #1	@ 0009443a 0123
.org 0x9443c
	ands r2, r3	@ 0009443c 1a40
.org 0x9443e
	ldrb r5, [r4, #15]	@ 0009443e e57b
.org 0x94440
	cmp r5, #0	@ 00094440 002d
.org 0x94442
	bne.n 0x94482	@ 00094442 1ed1
.org 0x94444
	ldr r0, [r4, #84]	@ 00094444 606d
.org 0x94446
	ldr r1, [r4, #88]	@ 00094446 a16d
.org 0x94448
	str r0, [sp, #0]	@ 00094448 0090
.org 0x9444a
	str r1, [sp, #4]	@ 0009444a 0191
.org 0x9444c
	lsls r0, r2, #1	@ 0009444c 5000
.org 0x9444e
	subs r0, r3, r0	@ 0009444e 181a
.org 0x94450
	lsls r0, r0, #8	@ 00094450 0002
.org 0x94452
	ldr r1, [sp, #0]	@ 00094452 0099
.org 0x94454
	adds r0, r0, r1	@ 00094454 4018
.org 0x94456
	str r0, [sp, #0]	@ 00094456 0090
.org 0x94458
	ldr r0, [sp, #4]	@ 00094458 0198
.org 0x9445a
	ldr r1, [pc, #108]	@ 0009445a 1b49
.org 0x9445c
	adds r0, r0, r1	@ 0009445c 4018
.org 0x9445e
	str r0, [sp, #4]	@ 0009445e 0190
.org 0x94460
	adds r0, r4, #0	@ 00094460 201c
.org 0x94462
	adds r0, #186	@ 00094462 ba30
.org 0x94464
	ldrb r3, [r0, #0]	@ 00094464 0378
.org 0x94466
	mov r0, sp	@ 00094466 6846
.org 0x94468
	movs r1, #1	@ 00094468 0121
.org 0x9446a
	bl 0xdb788	@ 0009446a 47f08df9
.org 0x9446e
	ldr r1, [pc, #92]	@ 0009446e 1749
.org 0x94470
	adds r0, r4, #0	@ 00094470 201c
.org 0x94472
	bl 0x1cf00	@ 00094472 88f745fd
.org 0x94476
	str r5, [r4, #96]	@ 00094476 2566
.org 0x94478
	movs r0, #24	@ 00094478 1820
.org 0x9447a
	strb r0, [r4, #18]	@ 0009447a a074
.org 0x9447c
	ldrb r0, [r4, #15]	@ 0009447c e07b
.org 0x9447e
	adds r0, #1	@ 0009447e 0130
.org 0x94480
	strb r0, [r4, #15]	@ 00094480 e073
.org 0x94482
	adds r0, r4, #0	@ 00094482 201c
.org 0x94484
	bl 0x1cff0	@ 00094484 88f7b4fd
.org 0x94488
	ldr r0, [r4, #96]	@ 00094488 206e
.org 0x9448a
	adds r0, #64	@ 0009448a 4030
.org 0x9448c
	str r0, [r4, #96]	@ 0009448c 2066
.org 0x9448e
	movs r1, #224	@ 0009448e e021
.org 0x94490
	lsls r1, r1, #3	@ 00094490 c900
.org 0x94492
	cmp r0, r1	@ 00094492 8842
.org 0x94494
	ble.n 0x94498	@ 00094494 00dd
.org 0x94496
	str r1, [r4, #96]	@ 00094496 2166
.org 0x94498
	ldr r1, [r4, #88]	@ 00094498 a16d
.org 0x9449a
	ldr r0, [r4, #96]	@ 0009449a 206e
.org 0x9449c
	adds r2, r1, r0	@ 0009449c 0a18
.org 0x9449e
	str r2, [r4, #88]	@ 0009449e a265
.org 0x944a0
	ldrb r0, [r4, #18]	@ 000944a0 a07c
.org 0x944a2
	subs r0, #1	@ 000944a2 0138
.org 0x944a4
	strb r0, [r4, #18]	@ 000944a4 a074
.org 0x944a6
	lsls r0, r0, #24	@ 000944a6 0006
.org 0x944a8
	cmp r0, #0	@ 000944a8 0028
.org 0x944aa
	beq.n 0x944b8	@ 000944aa 05d0
.org 0x944ac
	ldr r1, [r4, #84]	@ 000944ac 616d
.org 0x944ae
	adds r0, r4, #0	@ 000944ae 201c
.org 0x944b0
	bl 0x947b4	@ 000944b0 00f080f9
.org 0x944b4
	cmp r0, #0	@ 000944b4 0028
.org 0x944b6
	beq.n 0x944c0	@ 000944b6 03d0
.org 0x944b8
	movs r0, #3	@ 000944b8 0320
.org 0x944ba
	strb r0, [r4, #14]	@ 000944ba a073
.org 0x944bc
	movs r0, #0	@ 000944bc 0020
.org 0x944be
	strb r0, [r4, #15]	@ 000944be e073
.org 0x944c0
	add sp, #8	@ 000944c0 02b0
.org 0x944c2
	pop {r4, r5}	@ 000944c2 30bc
.org 0x944c4
	pop {r0}	@ 000944c4 01bc
.org 0x944c6
	bx r0	@ 000944c6 0047
