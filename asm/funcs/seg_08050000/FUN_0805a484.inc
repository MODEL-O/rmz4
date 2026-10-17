@ FUN_0805a484  entry 0x0805a484  size 186
.thumb
.org 0x5a484
FUN_0805a484:
	push {r4, r5, r6, lr}	@ 0005a484 70b5
.org 0x5a486
	adds r4, r0, #0	@ 0005a486 041c
.org 0x5a488
	ldrb r0, [r4, #15]	@ 0005a488 e07b
.org 0x5a48a
	cmp r0, #0	@ 0005a48a 0028
.org 0x5a48c
	bne.n 0x5a4b0	@ 0005a48c 10d1
.org 0x5a48e
	adds r0, r4, #0	@ 0005a48e 201c
.org 0x5a490
	adds r0, #116	@ 0005a490 7430
.org 0x5a492
	ldr r1, [pc, #172]	@ 0005a492 2b49
.org 0x5a494
	bl 0x5784	@ 0005a494 abf776f9
.org 0x5a498
	ldr r1, [pc, #168]	@ 0005a498 2a49
.org 0x5a49a
	adds r0, r4, #0	@ 0005a49a 201c
.org 0x5a49c
	bl 0x1cf00	@ 0005a49c c2f730fd
.org 0x5a4a0
	adds r1, r4, #0	@ 0005a4a0 211c
.org 0x5a4a2
	adds r1, #189	@ 0005a4a2 bd31
.org 0x5a4a4
	movs r0, #1	@ 0005a4a4 0120
.org 0x5a4a6
	strb r0, [r1, #0]	@ 0005a4a6 0870
.org 0x5a4a8
	strb r0, [r4, #18]	@ 0005a4a8 a074
.org 0x5a4aa
	ldrb r0, [r4, #15]	@ 0005a4aa e07b
.org 0x5a4ac
	adds r0, #1	@ 0005a4ac 0130
.org 0x5a4ae
	strb r0, [r4, #15]	@ 0005a4ae e073
.org 0x5a4b0
	adds r0, r4, #0	@ 0005a4b0 201c
.org 0x5a4b2
	bl 0x1cff0	@ 0005a4b2 c2f79dfd
.org 0x5a4b6
	ldrb r0, [r4, #18]	@ 0005a4b6 a07c
.org 0x5a4b8
	cmp r0, #0	@ 0005a4b8 0028
.org 0x5a4ba
	beq.n 0x5a526	@ 0005a4ba 34d0
.org 0x5a4bc
	adds r0, r4, #0	@ 0005a4bc 201c
.org 0x5a4be
	adds r0, #113	@ 0005a4be 7130
.org 0x5a4c0
	ldrb r0, [r0, #0]	@ 0005a4c0 0078
.org 0x5a4c2
	lsls r0, r0, #24	@ 0005a4c2 0006
.org 0x5a4c4
	asrs r0, r0, #24	@ 0005a4c4 0016
.org 0x5a4c6
	cmp r0, #4	@ 0005a4c6 0428
.org 0x5a4c8
	bne.n 0x5a526	@ 0005a4c8 2dd1
.org 0x5a4ca
	ldr r0, [pc, #124]	@ 0005a4ca 1f48
.org 0x5a4cc
	ldr r1, [pc, #124]	@ 0005a4cc 1f49
.org 0x5a4ce
	adds r1, #138	@ 0005a4ce 8a31
.org 0x5a4d0
	ldrh r1, [r1, #0]	@ 0005a4d0 0988
.org 0x5a4d2
	ldrh r2, [r0, #6]	@ 0005a4d2 c288
.org 0x5a4d4
	lsrs r2, r2, #6	@ 0005a4d4 9209
.org 0x5a4d6
	subs r1, r1, r2	@ 0005a4d6 891a
.org 0x5a4d8
	lsls r1, r1, #5	@ 0005a4d8 4901
.org 0x5a4da
	movs r2, #128	@ 0005a4da 8022
.org 0x5a4dc
	lsls r2, r2, #9	@ 0005a4dc 5202
.org 0x5a4de
	adds r1, r1, r2	@ 0005a4de 8918
.org 0x5a4e0
	bl 0x1d30	@ 0005a4e0 a7f726fc
.org 0x5a4e4
	ldr r0, [pc, #104]	@ 0005a4e4 1a48
.org 0x5a4e6
	ldr r1, [pc, #108]	@ 0005a4e6 1b49
.org 0x5a4e8
	adds r1, #138	@ 0005a4e8 8a31
.org 0x5a4ea
	ldrh r1, [r1, #0]	@ 0005a4ea 0988
.org 0x5a4ec
	ldrb r2, [r0, #7]	@ 0005a4ec c279
.org 0x5a4ee
	subs r1, r1, r2	@ 0005a4ee 891a
.org 0x5a4f0
	lsls r1, r1, #5	@ 0005a4f0 4901
.org 0x5a4f2
	movs r2, #128	@ 0005a4f2 8022
.org 0x5a4f4
	lsls r2, r2, #2	@ 0005a4f4 9200
.org 0x5a4f6
	adds r1, r1, r2	@ 0005a4f6 8918
.org 0x5a4f8
	bl 0x2208	@ 0005a4f8 a7f786fe
.org 0x5a4fc
	adds r5, r4, #0	@ 0005a4fc 251c
.org 0x5a4fe
	adds r5, #200	@ 0005a4fe c835
.org 0x5a500
	ldr r0, [r5, #0]	@ 0005a500 2868
.org 0x5a502
	adds r6, r4, #0	@ 0005a502 261c
.org 0x5a504
	adds r6, #191	@ 0005a504 bf36
.org 0x5a506
	cmp r0, #0	@ 0005a506 0028
.org 0x5a508
	beq.n 0x5a510	@ 0005a508 02d0
.org 0x5a50a
	ldrb r0, [r6, #0]	@ 0005a50a 3078
.org 0x5a50c
	cmp r0, #0	@ 0005a50c 0028
.org 0x5a50e
	beq.n 0x5a522	@ 0005a50e 08d0
.org 0x5a510
	adds r0, r4, #0	@ 0005a510 201c
.org 0x5a512
	bl 0xc245c	@ 0005a512 67f0a3ff
.org 0x5a516
	str r0, [r5, #0]	@ 0005a516 2860
.org 0x5a518
	movs r1, #0	@ 0005a518 0021
.org 0x5a51a
	cmp r0, #0	@ 0005a51a 0028
.org 0x5a51c
	bne.n 0x5a520	@ 0005a51c 00d1
.org 0x5a51e
	movs r1, #255	@ 0005a51e ff21
.org 0x5a520
	strb r1, [r6, #0]	@ 0005a520 3170
.org 0x5a522
	movs r0, #0	@ 0005a522 0020
.org 0x5a524
	strb r0, [r4, #18]	@ 0005a524 a074
.org 0x5a526
	adds r0, r4, #0	@ 0005a526 201c
.org 0x5a528
	adds r0, #115	@ 0005a528 7330
.org 0x5a52a
	ldrb r0, [r0, #0]	@ 0005a52a 0078
.org 0x5a52c
	cmp r0, #3	@ 0005a52c 0328
.org 0x5a52e
	bne.n 0x5a538	@ 0005a52e 03d1
.org 0x5a530
	movs r1, #0	@ 0005a530 0021
.org 0x5a532
	movs r0, #2	@ 0005a532 0220
.org 0x5a534
	strb r0, [r4, #14]	@ 0005a534 a073
.org 0x5a536
	strb r1, [r4, #15]	@ 0005a536 e173
.org 0x5a538
	pop {r4, r5, r6}	@ 0005a538 70bc
.org 0x5a53a
	pop {r0}	@ 0005a53a 01bc
.org 0x5a53c
	bx r0	@ 0005a53c 0047
