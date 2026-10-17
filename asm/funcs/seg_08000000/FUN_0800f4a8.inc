@ FUN_0800f4a8  entry 0x0800f4a8  size 316
.thumb
.org 0xf4a8
FUN_0800f4a8:
	push {r4, r5, r6, r7, lr}	@ 0000f4a8 f0b5
.org 0xf4aa
	mov r7, r8	@ 0000f4aa 4746
.org 0xf4ac
	push {r7}	@ 0000f4ac 80b4
.org 0xf4ae
	adds r7, r0, #0	@ 0000f4ae 071c
.org 0xf4b0
	ldrb r6, [r7, #14]	@ 0000f4b0 be7b
.org 0xf4b2
	cmp r6, #0	@ 0000f4b2 002e
.org 0xf4b4
	bne.n 0xf538	@ 0000f4b4 40d1
.org 0xf4b6
	ldr r0, [r7, #92]	@ 0000f4b6 f86d
.org 0xf4b8
	lsls r0, r0, #16	@ 0000f4b8 0004
.org 0xf4ba
	lsrs r0, r0, #20	@ 0000f4ba 000d
.org 0xf4bc
	lsls r5, r0, #1	@ 0000f4bc 4500
.org 0xf4be
	ldr r3, [pc, #240]	@ 0000f4be 3c4b
.org 0xf4c0
	adds r5, r5, r3	@ 0000f4c0 ed18
.org 0xf4c2
	ldr r1, [r7, #100]	@ 0000f4c2 796e
.org 0xf4c4
	ldr r4, [pc, #236]	@ 0000f4c4 3b4c
.org 0xf4c6
	adds r2, r4, #0	@ 0000f4c6 221c
.org 0xf4c8
	orrs r1, r2	@ 0000f4c8 1143
.org 0xf4ca
	strh r1, [r5, #0]	@ 0000f4ca 2980
.org 0xf4cc
	lsls r0, r0, #2	@ 0000f4cc 8000
.org 0xf4ce
	adds r3, #8	@ 0000f4ce 0833
.org 0xf4d0
	adds r0, r0, r3	@ 0000f4d0 c018
.org 0xf4d2
	str r6, [r0, #0]	@ 0000f4d2 0660
.org 0xf4d4
	movs r0, #128	@ 0000f4d4 8020
.org 0xf4d6
	lsls r0, r0, #2	@ 0000f4d6 8000
.org 0xf4d8
	mov r8, r0	@ 0000f4d8 8046
.org 0xf4da
	str r0, [r7, #76]	@ 0000f4da f864
.org 0xf4dc
	ldr r0, [pc, #216]	@ 0000f4dc 3648
.org 0xf4de
	ldr r0, [r0, #0]	@ 0000f4de 0068
.org 0xf4e0
	ldr r2, [pc, #216]	@ 0000f4e0 364a
.org 0xf4e2
	adds r0, r0, r2	@ 0000f4e2 8018
.org 0xf4e4
	movs r4, #248	@ 0000f4e4 f824
.org 0xf4e6
	lsls r4, r4, #5	@ 0000f4e6 6401
.org 0xf4e8
	ands r1, r4	@ 0000f4e8 2140
.org 0xf4ea
	lsls r1, r1, #3	@ 0000f4ea c900
.org 0xf4ec
	movs r2, #192	@ 0000f4ec c022
.org 0xf4ee
	lsls r2, r2, #19	@ 0000f4ee d204
.org 0xf4f0
	adds r1, r1, r2	@ 0000f4f0 8918
.org 0xf4f2
	mov r2, r8	@ 0000f4f2 4246
.org 0xf4f4
	bl 0x128be0	@ 0000f4f4 19f174fb
.org 0xf4f8
	ldr r0, [pc, #196]	@ 0000f4f8 3148
.org 0xf4fa
	ldr r0, [r0, #0]	@ 0000f4fa 0068
.org 0xf4fc
	ldr r1, [pc, #196]	@ 0000f4fc 3149
.org 0xf4fe
	adds r0, r0, r1	@ 0000f4fe 4018
.org 0xf500
	ldrh r1, [r5, #0]	@ 0000f500 2988
.org 0xf502
	ands r4, r1	@ 0000f502 0c40
.org 0xf504
	lsls r4, r4, #3	@ 0000f504 e400
.org 0xf506
	ldr r2, [pc, #192]	@ 0000f506 304a
.org 0xf508
	adds r4, r4, r2	@ 0000f508 a418
.org 0xf50a
	adds r1, r4, #0	@ 0000f50a 211c
.org 0xf50c
	mov r2, r8	@ 0000f50c 4246
.org 0xf50e
	bl 0x128be0	@ 0000f50e 19f167fb
.org 0xf512
	str r6, [r7, #68]	@ 0000f512 7e64
.org 0xf514
	movs r0, #128	@ 0000f514 8020
.org 0xf516
	str r0, [r7, #72]	@ 0000f516 b864
.org 0xf518
	adds r0, r7, #0	@ 0000f518 381c
.org 0xf51a
	adds r0, #108	@ 0000f51a 6c30
.org 0xf51c
	movs r1, #0	@ 0000f51c 0021
.org 0xf51e
	strh r6, [r0, #0]	@ 0000f51e 0680
.org 0xf520
	adds r0, #2	@ 0000f520 0230
.org 0xf522
	strh r6, [r0, #0]	@ 0000f522 0680
.org 0xf524
	ldr r0, [pc, #164]	@ 0000f524 2948
.org 0xf526
	ldr r4, [pc, #168]	@ 0000f526 2a4c
.org 0xf528
	adds r0, r0, r4	@ 0000f528 0019
.org 0xf52a
	strb r1, [r0, #0]	@ 0000f52a 0170
.org 0xf52c
	adds r0, r7, #0	@ 0000f52c 381c
.org 0xf52e
	adds r0, #104	@ 0000f52e 6830
.org 0xf530
	strh r6, [r0, #0]	@ 0000f530 0680
.org 0xf532
	ldrb r0, [r7, #14]	@ 0000f532 b87b
.org 0xf534
	adds r0, #1	@ 0000f534 0130
.org 0xf536
	strb r0, [r7, #14]	@ 0000f536 b873
.org 0xf538
	adds r0, r7, #0	@ 0000f538 381c
.org 0xf53a
	adds r0, #104	@ 0000f53a 6830
.org 0xf53c
	ldrh r1, [r0, #0]	@ 0000f53c 0188
.org 0xf53e
	adds r4, r0, #0	@ 0000f53e 041c
.org 0xf540
	cmp r1, #0	@ 0000f540 0029
.org 0xf542
	bne.n 0xf55a	@ 0000f542 0ad1
.org 0xf544
	ldr r0, [pc, #140]	@ 0000f544 2348
.org 0xf546
	ldr r0, [r0, #0]	@ 0000f546 0068
.org 0xf548
	ldr r1, [r0, #88]	@ 0000f548 816d
.org 0xf54a
	ldr r0, [pc, #140]	@ 0000f54a 2348
.org 0xf54c
	cmp r1, r0	@ 0000f54c 8142
.org 0xf54e
	bgt.n 0xf55a	@ 0000f54e 04dc
.org 0xf550
	movs r0, #121	@ 0000f550 7920
.org 0xf552
	bl 0x2b10	@ 0000f552 f3f7ddfa
.org 0xf556
	movs r0, #121	@ 0000f556 7920
.org 0xf558
	strh r0, [r4, #0]	@ 0000f558 2080
.org 0xf55a
	ldrh r0, [r4, #0]	@ 0000f55a 2088
.org 0xf55c
	cmp r0, #121	@ 0000f55c 7928
.org 0xf55e
	bne.n 0xf576	@ 0000f55e 0ad1
.org 0xf560
	ldr r0, [pc, #112]	@ 0000f560 1c48
.org 0xf562
	ldr r0, [r0, #0]	@ 0000f562 0068
.org 0xf564
	ldr r1, [r0, #88]	@ 0000f564 816d
.org 0xf566
	ldr r0, [pc, #112]	@ 0000f566 1c48
.org 0xf568
	cmp r1, r0	@ 0000f568 8142
.org 0xf56a
	ble.n 0xf576	@ 0000f56a 04dd
.org 0xf56c
	movs r0, #121	@ 0000f56c 7920
.org 0xf56e
	bl 0x2b5c	@ 0000f56e f3f7f5fa
.org 0xf572
	movs r0, #0	@ 0000f572 0020
.org 0xf574
	strh r0, [r4, #0]	@ 0000f574 2080
.org 0xf576
	ldr r0, [pc, #84]	@ 0000f576 1548
.org 0xf578
	ldr r2, [pc, #96]	@ 0000f578 184a
.org 0xf57a
	adds r1, r0, r2	@ 0000f57a 8118
.org 0xf57c
	ldrh r2, [r1, #0]	@ 0000f57c 0a88
.org 0xf57e
	lsrs r1, r2, #8	@ 0000f57e 110a
.org 0xf580
	adds r4, r0, #0	@ 0000f580 041c
.org 0xf582
	cmp r1, #4	@ 0000f582 0429
.org 0xf584
	bne.n 0xf60e	@ 0000f584 43d1
.org 0xf586
	movs r0, #255	@ 0000f586 ff20
.org 0xf588
	ands r0, r2	@ 0000f588 1040
.org 0xf58a
	cmp r0, #5	@ 0000f58a 0528
.org 0xf58c
	bne.n 0xf60e	@ 0000f58c 3fd1
.org 0xf58e
	adds r1, r7, #0	@ 0000f58e 391c
.org 0xf590
	adds r1, #110	@ 0000f590 6e31
.org 0xf592
	ldrh r0, [r1, #0]	@ 0000f592 0888
.org 0xf594
	adds r3, r7, #0	@ 0000f594 3b1c
.org 0xf596
	adds r3, #108	@ 0000f596 6c33
.org 0xf598
	strh r0, [r3, #0]	@ 0000f598 1880
.org 0xf59a
	ldr r0, [r7, #52]	@ 0000f59a 786b
.org 0xf59c
	strh r0, [r1, #0]	@ 0000f59c 0880
.org 0xf59e
	ldrh r2, [r1, #0]	@ 0000f59e 0a88
.org 0xf5a0
	ldrh r0, [r3, #0]	@ 0000f5a0 1888
.org 0xf5a2
	subs r2, r2, r0	@ 0000f5a2 121a
.org 0xf5a4
	ldr r0, [pc, #56]	@ 0000f5a4 0e48
.org 0xf5a6
	cmp r2, r0	@ 0000f5a6 8242
.org 0xf5a8
	bge.n 0xf5e4	@ 0000f5a8 1cda
.org 0xf5aa
	ldr r0, [r7, #76]	@ 0000f5aa f86c
.org 0xf5ac
	subs r0, #64	@ 0000f5ac 4038
.org 0xf5ae
	b.n 0xf5f0	@ 0000f5ae 1fe0
.org 0xf5b0
	.byte 0x04,0x0a,0x00,0x02	@ 0000f5b0 data
.org 0xf5b4
	.byte 0x47,0x80,0x00,0x00	@ 0000f5b4 data
.org 0xf5b8
	.byte 0x54,0xc1,0xb2,0x08	@ 0000f5b8 data
.org 0xf5bc
	.byte 0x5c,0xc1,0xb2,0x08	@ 0000f5bc data
.org 0xf5c0
	.byte 0x58,0xc1,0xb2,0x08	@ 0000f5c0 data
.org 0xf5c4
	.byte 0x60,0xc1,0xb2,0x08	@ 0000f5c4 data
.org 0xf5c8
	.byte 0x00,0x08,0x00,0x06	@ 0000f5c8 data
.org 0xf5cc
	.byte 0xb0,0x0a,0x00,0x02	@ 0000f5cc data
.org 0xf5d0
	.byte 0x2a,0xd0,0x02,0x00	@ 0000f5d0 data
.org 0xf5d4
	.byte 0xf0,0xdb,0x02,0x02	@ 0000f5d4 data
.org 0xf5d8
	.byte 0xff,0x7f,0x12,0x00	@ 0000f5d8 data
.org 0xf5dc
	.byte 0xd6,0x07,0x00,0x00	@ 0000f5dc data
.org 0xf5e0
	.byte 0x00,0xff,0xff,0xff	@ 0000f5e0 data
