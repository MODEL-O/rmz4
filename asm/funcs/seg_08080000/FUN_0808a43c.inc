@ FUN_0808a43c  entry 0x0808a43c  size 210
.thumb
.org 0x8a43c
FUN_0808a43c:
	push {r4, r5, r6, lr}	@ 0008a43c 70b5
.org 0x8a43e
	adds r4, r0, #0	@ 0008a43e 041c
.org 0x8a440
	ldrb r0, [r4, #10]	@ 0008a440 a07a
.org 0x8a442
	lsrs r6, r0, #4	@ 0008a442 0609
.org 0x8a444
	movs r0, #1	@ 0008a444 0120
.org 0x8a446
	ands r6, r0	@ 0008a446 0640
.org 0x8a448
	ldrb r5, [r4, #14]	@ 0008a448 a57b
.org 0x8a44a
	cmp r5, #1	@ 0008a44a 012d
.org 0x8a44c
	beq.n 0x8a48a	@ 0008a44c 1dd0
.org 0x8a44e
	cmp r5, #1	@ 0008a44e 012d
.org 0x8a450
	bgt.n 0x8a458	@ 0008a450 02dc
.org 0x8a452
	cmp r5, #0	@ 0008a452 002d
.org 0x8a454
	beq.n 0x8a462	@ 0008a454 05d0
.org 0x8a456
	b.n 0x8a51a	@ 0008a456 60e0
.org 0x8a458
	cmp r5, #2	@ 0008a458 022d
.org 0x8a45a
	beq.n 0x8a4b4	@ 0008a45a 2bd0
.org 0x8a45c
	cmp r5, #3	@ 0008a45c 032d
.org 0x8a45e
	beq.n 0x8a4fc	@ 0008a45e 4dd0
.org 0x8a460
	b.n 0x8a51a	@ 0008a460 5be0
.org 0x8a462
	ldr r1, [pc, #68]	@ 0008a462 1149
.org 0x8a464
	adds r0, r4, #0	@ 0008a464 201c
.org 0x8a466
	bl 0x1cf00	@ 0008a466 92f74bfd
.org 0x8a46a
	adds r0, r4, #0	@ 0008a46a 201c
.org 0x8a46c
	adds r0, #116	@ 0008a46c 7430
.org 0x8a46e
	ldr r1, [pc, #60]	@ 0008a46e 0f49
.org 0x8a470
	ldrb r2, [r1, #3]	@ 0008a470 ca78
.org 0x8a472
	lsls r1, r2, #1	@ 0008a472 5100
.org 0x8a474
	adds r1, r1, r2	@ 0008a474 8918
.org 0x8a476
	lsls r1, r1, #3	@ 0008a476 c900
.org 0x8a478
	ldr r2, [pc, #52]	@ 0008a478 0d4a
.org 0x8a47a
	adds r1, r1, r2	@ 0008a47a 8918
.org 0x8a47c
	bl 0x5784	@ 0008a47c 7bf782f9
.org 0x8a480
	str r5, [r4, #96]	@ 0008a480 2566
.org 0x8a482
	str r5, [r4, #92]	@ 0008a482 e565
.org 0x8a484
	ldrb r0, [r4, #14]	@ 0008a484 a07b
.org 0x8a486
	adds r0, #1	@ 0008a486 0130
.org 0x8a488
	strb r0, [r4, #14]	@ 0008a488 a073
.org 0x8a48a
	adds r0, r4, #0	@ 0008a48a 201c
.org 0x8a48c
	bl 0x1cff0	@ 0008a48c 92f7b0fd
.org 0x8a490
	adds r0, r4, #0	@ 0008a490 201c
.org 0x8a492
	bl 0x8b1dc	@ 0008a492 00f0a3fe
.org 0x8a496
	adds r0, r4, #0	@ 0008a496 201c
.org 0x8a498
	adds r0, #115	@ 0008a498 7330
.org 0x8a49a
	ldrb r0, [r0, #0]	@ 0008a49a 0078
.org 0x8a49c
	cmp r0, #3	@ 0008a49c 0328
.org 0x8a49e
	bne.n 0x8a51a	@ 0008a49e 3cd1
.org 0x8a4a0
	ldrb r0, [r4, #14]	@ 0008a4a0 a07b
.org 0x8a4a2
	adds r0, #1	@ 0008a4a2 0130
.org 0x8a4a4
	strb r0, [r4, #14]	@ 0008a4a4 a073
.org 0x8a4a6
	b.n 0x8a51a	@ 0008a4a6 38e0
.org 0x8a4a8
	.byte 0x04,0x20,0x00,0x00	@ 0008a4a8 data
.org 0x8a4ac
	.byte 0x1c,0xf5,0x85,0x08	@ 0008a4ac data
.org 0x8a4b0
	.byte 0xcc,0xf3,0x85,0x08	@ 0008a4b0 data
.org 0x8a4b4
	ldr r1, [pc, #24]	@ 0008a4b4 0649
.org 0x8a4b6
	adds r0, r4, #0	@ 0008a4b6 201c
.org 0x8a4b8
	bl 0x1cf00	@ 0008a4b8 92f722fd
.org 0x8a4bc
	movs r0, #1	@ 0008a4bc 0120
.org 0x8a4be
	adds r2, r0, #0	@ 0008a4be 021c
.org 0x8a4c0
	eors r2, r6	@ 0008a4c0 7240
.org 0x8a4c2
	cmp r2, #0	@ 0008a4c2 002a
.org 0x8a4c4
	beq.n 0x8a4d4	@ 0008a4c4 06d0
.org 0x8a4c6
	ldrb r1, [r4, #10]	@ 0008a4c6 a17a
.org 0x8a4c8
	movs r0, #16	@ 0008a4c8 1020
.org 0x8a4ca
	orrs r0, r1	@ 0008a4ca 0843
.org 0x8a4cc
	b.n 0x8a4da	@ 0008a4cc 05e0
.org 0x8a4ce
	.byte 0x00	@ 0008a4ce data
.org 0x8a4cf
	.byte 0x00	@ 0008a4cf data
.org 0x8a4d0
	.byte 0x05,0x20,0x00,0x00	@ 0008a4d0 data
.org 0x8a4d4
	ldrb r1, [r4, #10]	@ 0008a4d4 a17a
.org 0x8a4d6
	movs r0, #239	@ 0008a4d6 ef20
.org 0x8a4d8
	ands r0, r1	@ 0008a4d8 0840
.org 0x8a4da
	strb r0, [r4, #10]	@ 0008a4da a072
.org 0x8a4dc
	adds r1, r2, #0	@ 0008a4dc 111c
.org 0x8a4de
	adds r0, r4, #0	@ 0008a4de 201c
.org 0x8a4e0
	adds r0, #76	@ 0008a4e0 4c30
.org 0x8a4e2
	strb r1, [r0, #0]	@ 0008a4e2 0170
.org 0x8a4e4
	adds r3, r4, #0	@ 0008a4e4 231c
.org 0x8a4e6
	adds r3, #74	@ 0008a4e6 4a33
.org 0x8a4e8
	lsls r1, r1, #4	@ 0008a4e8 0901
.org 0x8a4ea
	ldrb r2, [r3, #0]	@ 0008a4ea 1a78
.org 0x8a4ec
	movs r0, #17	@ 0008a4ec 1120
.org 0x8a4ee
	negs r0, r0	@ 0008a4ee 4042
.org 0x8a4f0
	ands r0, r2	@ 0008a4f0 1040
.org 0x8a4f2
	orrs r0, r1	@ 0008a4f2 0843
.org 0x8a4f4
	strb r0, [r3, #0]	@ 0008a4f4 1870
.org 0x8a4f6
	ldrb r0, [r4, #14]	@ 0008a4f6 a07b
.org 0x8a4f8
	adds r0, #1	@ 0008a4f8 0130
.org 0x8a4fa
	strb r0, [r4, #14]	@ 0008a4fa a073
.org 0x8a4fc
	adds r0, r4, #0	@ 0008a4fc 201c
.org 0x8a4fe
	bl 0x1cff0	@ 0008a4fe 92f777fd
.org 0x8a502
	adds r0, r4, #0	@ 0008a502 201c
.org 0x8a504
	bl 0x8b1dc	@ 0008a504 00f06afe
.org 0x8a508
	adds r0, r4, #0	@ 0008a508 201c
.org 0x8a50a
	adds r0, #115	@ 0008a50a 7330
.org 0x8a50c
	ldrb r0, [r0, #0]	@ 0008a50c 0078
