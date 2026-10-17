@ FUN_080fa448  entry 0x080fa448  size 162
.thumb
.org 0xfa448
FUN_080fa448:
	push {r4, r5, lr}	@ 000fa448 30b5
.org 0xfa44a
	sub sp, #8	@ 000fa44a 82b0
.org 0xfa44c
	adds r4, r0, #0	@ 000fa44c 041c
.org 0xfa44e
	ldrb r0, [r4, #14]	@ 000fa44e a07b
.org 0xfa450
	cmp r0, #0	@ 000fa450 0028
.org 0xfa452
	bne.n 0xfa4d8	@ 000fa452 41d1
.org 0xfa454
	adds r0, r4, #0	@ 000fa454 201c
.org 0xfa456
	adds r0, #189	@ 000fa456 bd30
.org 0xfa458
	ldrb r0, [r0, #0]	@ 000fa458 0078
.org 0xfa45a
	cmp r0, #0	@ 000fa45a 0028
.org 0xfa45c
	beq.n 0xfa468	@ 000fa45c 04d0
.org 0xfa45e
	movs r0, #2	@ 000fa45e 0220
.org 0xfa460
	strb r0, [r4, #13]	@ 000fa460 6073
.org 0xfa462
	adds r5, r4, #0	@ 000fa462 251c
.org 0xfa464
	adds r5, #140	@ 000fa464 8c35
.org 0xfa466
	b.n 0xfa4a6	@ 000fa466 1ee0
.org 0xfa468
	adds r1, r4, #0	@ 000fa468 211c
.org 0xfa46a
	adds r1, #140	@ 000fa46a 8c31
.org 0xfa46c
	ldr r2, [r1, #0]	@ 000fa46c 0a68
.org 0xfa46e
	movs r0, #128	@ 000fa46e 8020
.org 0xfa470
	lsls r0, r0, #9	@ 000fa470 4002
.org 0xfa472
	ands r2, r0	@ 000fa472 0240
.org 0xfa474
	adds r5, r1, #0	@ 000fa474 0d1c
.org 0xfa476
	cmp r2, #0	@ 000fa476 002a
.org 0xfa478
	beq.n 0xfa4a4	@ 000fa478 14d0
.org 0xfa47a
	ldr r0, [r4, #100]	@ 000fa47a 606e
.org 0xfa47c
	str r0, [sp, #0]	@ 000fa47c 0090
.org 0xfa47e
	ldr r0, [r4, #104]	@ 000fa47e a06e
.org 0xfa480
	ldr r1, [pc, #28]	@ 000fa480 0749
.org 0xfa482
	adds r0, r0, r1	@ 000fa482 4018
.org 0xfa484
	str r0, [sp, #4]	@ 000fa484 0190
.org 0xfa486
	movs r2, #128	@ 000fa486 8022
.org 0xfa488
	lsls r2, r2, #2	@ 000fa488 9200
.org 0xfa48a
	adds r0, r4, #0	@ 000fa48a 201c
.org 0xfa48c
	adds r0, #188	@ 000fa48c bc30
.org 0xfa48e
	ldrb r3, [r0, #0]	@ 000fa48e 0378
.org 0xfa490
	movs r0, #0	@ 000fa490 0020
.org 0xfa492
	mov r1, sp	@ 000fa492 6946
.org 0xfa494
	bl 0xd0dc4	@ 000fa494 d6f796fc
.org 0xfa498
	movs r0, #1	@ 000fa498 0120
.org 0xfa49a
	strb r0, [r4, #13]	@ 000fa49a 6073
.org 0xfa49c
	b.n 0xfa4a6	@ 000fa49c 03e0
.org 0xfa49e
	.byte 0x00	@ 000fa49e data
.org 0xfa49f
	.byte 0x00	@ 000fa49f data
.org 0xfa4a0
	.byte 0x00,0xf8,0xff,0xff	@ 000fa4a0 data
.org 0xfa4a4
	strb r2, [r4, #13]	@ 000fa4a4 6273
.org 0xfa4a6
	ldr r0, [r4, #100]	@ 000fa4a6 606e
.org 0xfa4a8
	ldr r1, [r4, #104]	@ 000fa4a8 a16e
.org 0xfa4aa
	str r0, [r4, #84]	@ 000fa4aa 6065
.org 0xfa4ac
	str r1, [r4, #88]	@ 000fa4ac a165
.org 0xfa4ae
	adds r0, r4, #0	@ 000fa4ae 201c
.org 0xfa4b0
	adds r0, #84	@ 000fa4b0 5430
.org 0xfa4b2
	str r0, [r4, #64]	@ 000fa4b2 2064
.org 0xfa4b4
	ldrb r1, [r4, #11]	@ 000fa4b4 e17a
.org 0xfa4b6
	movs r0, #247	@ 000fa4b6 f720
.org 0xfa4b8
	ands r0, r1	@ 000fa4b8 0840
.org 0xfa4ba
	movs r1, #0	@ 000fa4ba 0021
.org 0xfa4bc
	strb r0, [r4, #11]	@ 000fa4bc e072
.org 0xfa4be
	str r1, [r5, #0]	@ 000fa4be 2960
.org 0xfa4c0
	adds r0, r4, #0	@ 000fa4c0 201c
.org 0xfa4c2
	adds r0, #144	@ 000fa4c2 9030
.org 0xfa4c4
	str r1, [r0, #0]	@ 000fa4c4 0160
.org 0xfa4c6
	adds r0, #4	@ 000fa4c6 0430
.org 0xfa4c8
	strb r1, [r0, #0]	@ 000fa4c8 0170
.org 0xfa4ca
	ldrb r1, [r4, #10]	@ 000fa4ca a17a
.org 0xfa4cc
	movs r0, #251	@ 000fa4cc fb20
.org 0xfa4ce
	ands r0, r1	@ 000fa4ce 0840
.org 0xfa4d0
	strb r0, [r4, #10]	@ 000fa4d0 a072
.org 0xfa4d2
	ldrb r0, [r4, #14]	@ 000fa4d2 a07b
.org 0xfa4d4
	adds r0, #1	@ 000fa4d4 0130
.org 0xfa4d6
	strb r0, [r4, #14]	@ 000fa4d6 a073
.org 0xfa4d8
	ldr r0, [pc, #20]	@ 000fa4d8 0548
.org 0xfa4da
	ldrb r1, [r4, #13]	@ 000fa4da 617b
.org 0xfa4dc
	lsls r1, r1, #2	@ 000fa4dc 8900
.org 0xfa4de
	adds r1, r1, r0	@ 000fa4de 0918
.org 0xfa4e0
	ldr r1, [r1, #0]	@ 000fa4e0 0968
.org 0xfa4e2
	adds r0, r4, #0	@ 000fa4e2 201c
.org 0xfa4e4
	bl 0x128f80	@ 000fa4e4 2ef04cfd
.org 0xfa4e8
	add sp, #8	@ 000fa4e8 02b0
