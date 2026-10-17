@ FUN_080be424  entry 0x080be424  size 242
.thumb
.org 0xbe424
FUN_080be424:
	push {r4, r5, r6, r7, lr}	@ 000be424 f0b5
.org 0xbe426
	adds r6, r0, #0	@ 000be426 061c
.org 0xbe428
	ldrb r7, [r6, #14]	@ 000be428 b77b
.org 0xbe42a
	cmp r7, #0	@ 000be42a 002f
.org 0xbe42c
	beq.n 0xbe434	@ 000be42c 02d0
.org 0xbe42e
	cmp r7, #1	@ 000be42e 012f
.org 0xbe430
	beq.n 0xbe48c	@ 000be430 2cd0
.org 0xbe432
	b.n 0xbe51e	@ 000be432 74e0
.org 0xbe434
	adds r5, r6, #0	@ 000be434 351c
.org 0xbe436
	adds r5, #184	@ 000be436 b835
.org 0xbe438
	strb r7, [r5, #0]	@ 000be438 2f70
.org 0xbe43a
	ldr r1, [pc, #148]	@ 000be43a 2549
.org 0xbe43c
	ldrb r0, [r5, #0]	@ 000be43c 2878
.org 0xbe43e
	lsls r0, r0, #1	@ 000be43e 4000
.org 0xbe440
	adds r0, r0, r1	@ 000be440 4018
.org 0xbe442
	ldrh r1, [r0, #0]	@ 000be442 0188
.org 0xbe444
	adds r0, r6, #0	@ 000be444 301c
.org 0xbe446
	bl 0x1cf00	@ 000be446 5ef75bfd
.org 0xbe44a
	ldrb r1, [r6, #10]	@ 000be44a b17a
.org 0xbe44c
	movs r0, #4	@ 000be44c 0420
.org 0xbe44e
	orrs r0, r1	@ 000be44e 0843
.org 0xbe450
	strb r0, [r6, #10]	@ 000be450 b072
.org 0xbe452
	adds r4, r6, #0	@ 000be452 341c
.org 0xbe454
	adds r4, #116	@ 000be454 7434
.org 0xbe456
	ldrb r0, [r5, #0]	@ 000be456 2878
.org 0xbe458
	lsls r1, r0, #1	@ 000be458 4100
.org 0xbe45a
	adds r1, r1, r0	@ 000be45a 0918
.org 0xbe45c
	lsls r1, r1, #3	@ 000be45c c900
.org 0xbe45e
	ldr r0, [pc, #116]	@ 000be45e 1d48
.org 0xbe460
	adds r1, r1, r0	@ 000be460 0918
.org 0xbe462
	adds r2, r6, #0	@ 000be462 321c
.org 0xbe464
	adds r2, #84	@ 000be464 5432
.org 0xbe466
	adds r0, r4, #0	@ 000be466 201c
.org 0xbe468
	movs r3, #1	@ 000be468 0123
.org 0xbe46a
	bl 0x5760	@ 000be46a 47f779f9
.org 0xbe46e
	str r6, [r4, #44]	@ 000be46e e662
.org 0xbe470
	str r7, [r4, #36]	@ 000be470 6762
.org 0xbe472
	strb r7, [r6, #18]	@ 000be472 b774
.org 0xbe474
	ldrb r1, [r6, #10]	@ 000be474 b17a
.org 0xbe476
	movs r0, #16	@ 000be476 1020
.org 0xbe478
	ands r0, r1	@ 000be478 0840
.org 0xbe47a
	movs r1, #144	@ 000be47a 9021
.org 0xbe47c
	lsls r1, r1, #2	@ 000be47c 8900
.org 0xbe47e
	cmp r0, #0	@ 000be47e 0028
.org 0xbe480
	beq.n 0xbe484	@ 000be480 00d0
.org 0xbe482
	ldr r1, [pc, #84]	@ 000be482 1549
.org 0xbe484
	str r1, [r6, #92]	@ 000be484 f165
.org 0xbe486
	ldrb r0, [r6, #14]	@ 000be486 b07b
.org 0xbe488
	adds r0, #1	@ 000be488 0130
.org 0xbe48a
	strb r0, [r6, #14]	@ 000be48a b073
.org 0xbe48c
	ldrb r1, [r6, #18]	@ 000be48c b17c
.org 0xbe48e
	adds r1, #1	@ 000be48e 0131
.org 0xbe490
	strb r1, [r6, #18]	@ 000be490 b174
.org 0xbe492
	ldr r0, [r6, #84]	@ 000be492 706d
.org 0xbe494
	ldr r2, [r6, #92]	@ 000be494 f26d
.org 0xbe496
	adds r0, r0, r2	@ 000be496 8018
.org 0xbe498
	str r0, [r6, #84]	@ 000be498 7065
.org 0xbe49a
	ldr r0, [pc, #64]	@ 000be49a 1048
.org 0xbe49c
	adds r5, r6, #0	@ 000be49c 351c
.org 0xbe49e
	adds r5, #184	@ 000be49e b835
.org 0xbe4a0
	ldrb r2, [r5, #0]	@ 000be4a0 2a78
.org 0xbe4a2
	adds r0, r2, r0	@ 000be4a2 1018
.org 0xbe4a4
	lsls r1, r1, #24	@ 000be4a4 0906
.org 0xbe4a6
	lsrs r1, r1, #24	@ 000be4a6 090e
.org 0xbe4a8
	ldrb r0, [r0, #0]	@ 000be4a8 0078
.org 0xbe4aa
	cmp r1, r0	@ 000be4aa 8142
.org 0xbe4ac
	bne.n 0xbe51e	@ 000be4ac 37d1
.org 0xbe4ae
	adds r0, r2, #1	@ 000be4ae 501c
.org 0xbe4b0
	strb r0, [r5, #0]	@ 000be4b0 2870
.org 0xbe4b2
	lsls r0, r0, #24	@ 000be4b2 0006
.org 0xbe4b4
	lsrs r0, r0, #24	@ 000be4b4 000e
.org 0xbe4b6
	ldrb r1, [r6, #16]	@ 000be4b6 317c
.org 0xbe4b8
	cmp r0, r1	@ 000be4b8 8842
.org 0xbe4ba
	bls.n 0xbe4e4	@ 000be4ba 13d9
.org 0xbe4bc
	ldr r1, [pc, #32]	@ 000be4bc 0849
.org 0xbe4be
	ldrb r0, [r6, #9]	@ 000be4be 707a
.org 0xbe4c0
	lsls r0, r0, #2	@ 000be4c0 8000
.org 0xbe4c2
	adds r0, r0, r1	@ 000be4c2 4018
.org 0xbe4c4
	movs r1, #2	@ 000be4c4 0221
.org 0xbe4c6
	str r1, [r6, #12]	@ 000be4c6 f160
.org 0xbe4c8
	ldr r0, [r0, #0]	@ 000be4c8 0068
.org 0xbe4ca
	ldr r0, [r0, #8]	@ 000be4ca 8068
.org 0xbe4cc
	str r0, [r6, #20]	@ 000be4cc 7061
.org 0xbe4ce
	b.n 0xbe51e	@ 000be4ce 26e0
.org 0xbe4d0
	.byte 0xc0,0x4d,0x86,0x08	@ 000be4d0 data
.org 0xbe4d4
	.byte 0x48,0x4d,0x86,0x08	@ 000be4d4 data
.org 0xbe4d8
	.byte 0xc0,0xfd,0xff,0xff	@ 000be4d8 data
.org 0xbe4dc
	.byte 0xc8,0x4d,0x86,0x08	@ 000be4dc data
.org 0xbe4e0
	.byte 0xf4,0x49,0x86,0x08	@ 000be4e0 data
.org 0xbe4e4
	ldr r1, [pc, #68]	@ 000be4e4 1149
.org 0xbe4e6
	ldrb r0, [r5, #0]	@ 000be4e6 2878
.org 0xbe4e8
	lsls r0, r0, #1	@ 000be4e8 4000
.org 0xbe4ea
	adds r0, r0, r1	@ 000be4ea 4018
.org 0xbe4ec
	ldrh r1, [r0, #0]	@ 000be4ec 0188
.org 0xbe4ee
	adds r0, r6, #0	@ 000be4ee 301c
.org 0xbe4f0
	bl 0x1cf00	@ 000be4f0 5ef706fd
.org 0xbe4f4
	ldrb r0, [r6, #10]	@ 000be4f4 b07a
.org 0xbe4f6
	movs r1, #4	@ 000be4f6 0421
.org 0xbe4f8
	orrs r0, r1	@ 000be4f8 0843
.org 0xbe4fa
	strb r0, [r6, #10]	@ 000be4fa b072
.org 0xbe4fc
	adds r4, r6, #0	@ 000be4fc 341c
.org 0xbe4fe
	adds r4, #116	@ 000be4fe 7434
.org 0xbe500
	ldrb r0, [r5, #0]	@ 000be500 2878
.org 0xbe502
	lsls r1, r0, #1	@ 000be502 4100
.org 0xbe504
	adds r1, r1, r0	@ 000be504 0918
.org 0xbe506
	lsls r1, r1, #3	@ 000be506 c900
.org 0xbe508
	ldr r0, [pc, #36]	@ 000be508 0948
.org 0xbe50a
	adds r1, r1, r0	@ 000be50a 0918
.org 0xbe50c
	adds r2, r6, #0	@ 000be50c 321c
.org 0xbe50e
	adds r2, #84	@ 000be50e 5432
.org 0xbe510
	adds r0, r4, #0	@ 000be510 201c
.org 0xbe512
	movs r3, #1	@ 000be512 0123
.org 0xbe514
	bl 0x5760	@ 000be514 47f724f9
