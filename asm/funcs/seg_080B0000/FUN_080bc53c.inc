@ FUN_080bc53c  entry 0x080bc53c  size 254
.thumb
.org 0xbc53c
FUN_080bc53c:
	push {r4, r5, r6, lr}	@ 000bc53c 70b5
.org 0xbc53e
	adds r5, r0, #0	@ 000bc53e 051c
.org 0xbc540
	adds r0, #180	@ 000bc540 b430
.org 0xbc542
	ldrb r0, [r0, #0]	@ 000bc542 0078
.org 0xbc544
	cmp r0, #1	@ 000bc544 0128
.org 0xbc546
	bne.n 0xbc578	@ 000bc546 17d1
.org 0xbc548
	adds r0, r5, #0	@ 000bc548 281c
.org 0xbc54a
	adds r0, #140	@ 000bc54a 8c30
.org 0xbc54c
	ldr r0, [r0, #0]	@ 000bc54c 0068
.org 0xbc54e
	movs r1, #128	@ 000bc54e 8021
.org 0xbc550
	lsls r1, r1, #2	@ 000bc550 8900
.org 0xbc552
	ands r0, r1	@ 000bc552 0840
.org 0xbc554
	cmp r0, #0	@ 000bc554 0028
.org 0xbc556
	beq.n 0xbc578	@ 000bc556 0fd0
.org 0xbc558
	ldr r1, [pc, #24]	@ 000bc558 0649
.org 0xbc55a
	ldrb r0, [r5, #9]	@ 000bc55a 687a
.org 0xbc55c
	lsls r0, r0, #2	@ 000bc55c 8000
.org 0xbc55e
	adds r0, r0, r1	@ 000bc55e 4018
.org 0xbc560
	movs r1, #2	@ 000bc560 0221
.org 0xbc562
	str r1, [r5, #12]	@ 000bc562 e960
.org 0xbc564
	ldr r0, [r0, #0]	@ 000bc564 0068
.org 0xbc566
	ldr r0, [r0, #8]	@ 000bc566 8068
.org 0xbc568
	str r0, [r5, #20]	@ 000bc568 6861
.org 0xbc56a
	adds r0, r5, #0	@ 000bc56a 281c
.org 0xbc56c
	bl 0xbc654	@ 000bc56c 00f072f8
.org 0xbc570
	b.n 0xbc64a	@ 000bc570 6be0
.org 0xbc572
	.byte 0x00	@ 000bc572 data
.org 0xbc573
	.byte 0x00	@ 000bc573 data
.org 0xbc574
	.byte 0x40,0xdb,0x85,0x08	@ 000bc574 data
.org 0xbc578
	adds r0, r5, #0	@ 000bc578 281c
.org 0xbc57a
	bl 0x7f9b4	@ 000bc57a c3f71bfa
.org 0xbc57e
	cmp r0, #0	@ 000bc57e 0028
.org 0xbc580
	beq.n 0xbc59c	@ 000bc580 0cd0
.org 0xbc582
	ldr r0, [pc, #20]	@ 000bc582 0548
.org 0xbc584
	ldr r0, [r0, #0]	@ 000bc584 0068
.org 0xbc586
	adds r1, r5, #0	@ 000bc586 291c
.org 0xbc588
	adds r1, #184	@ 000bc588 b831
.org 0xbc58a
	ldr r2, [r0, #88]	@ 000bc58a 826d
.org 0xbc58c
	ldr r0, [r1, #0]	@ 000bc58c 0868
.org 0xbc58e
	cmp r2, r0	@ 000bc58e 8242
.org 0xbc590
	bge.n 0xbc59c	@ 000bc590 04da
.org 0xbc592
	subs r1, #3	@ 000bc592 0339
.org 0xbc594
	movs r0, #1	@ 000bc594 0120
.org 0xbc596
	b.n 0xbc5a2	@ 000bc596 04e0
.org 0xbc598
	.byte 0xf0,0xdb,0x02,0x02	@ 000bc598 data
.org 0xbc59c
	adds r1, r5, #0	@ 000bc59c 291c
.org 0xbc59e
	adds r1, #181	@ 000bc59e b531
.org 0xbc5a0
	movs r0, #0	@ 000bc5a0 0020
.org 0xbc5a2
	strb r0, [r1, #0]	@ 000bc5a2 0870
.org 0xbc5a4
	adds r4, r5, #0	@ 000bc5a4 2c1c
.org 0xbc5a6
	adds r4, #180	@ 000bc5a6 b434
.org 0xbc5a8
	ldrb r6, [r4, #0]	@ 000bc5a8 2678
.org 0xbc5aa
	cmp r6, #0	@ 000bc5aa 002e
.org 0xbc5ac
	bne.n 0xbc620	@ 000bc5ac 38d1
.org 0xbc5ae
	ldr r1, [r5, #88]	@ 000bc5ae a96d
.org 0xbc5b0
	ldr r0, [r5, #96]	@ 000bc5b0 286e
.org 0xbc5b2
	adds r1, r1, r0	@ 000bc5b2 0918
.org 0xbc5b4
	str r1, [r5, #88]	@ 000bc5b4 a965
.org 0xbc5b6
	adds r0, #64	@ 000bc5b6 4030
.org 0xbc5b8
	str r0, [r5, #96]	@ 000bc5b8 2866
.org 0xbc5ba
	ldr r0, [r5, #84]	@ 000bc5ba 686d
.org 0xbc5bc
	movs r2, #224	@ 000bc5bc e022
.org 0xbc5be
	lsls r2, r2, #4	@ 000bc5be 1201
.org 0xbc5c0
	adds r1, r1, r2	@ 000bc5c0 8918
.org 0xbc5c2
	bl 0x7c7c	@ 000bc5c2 4bf75bfb
.org 0xbc5c6
	lsls r0, r0, #16	@ 000bc5c6 0004
.org 0xbc5c8
	cmp r0, #0	@ 000bc5c8 0028
.org 0xbc5ca
	beq.n 0xbc644	@ 000bc5ca 3bd0
.org 0xbc5cc
	ldr r0, [r5, #84]	@ 000bc5cc 686d
.org 0xbc5ce
	ldr r1, [r5, #88]	@ 000bc5ce a96d
.org 0xbc5d0
	bl 0x8534	@ 000bc5d0 4bf7b0ff
.org 0xbc5d4
	ldr r1, [pc, #60]	@ 000bc5d4 0f49
.org 0xbc5d6
	adds r0, r0, r1	@ 000bc5d6 4018
.org 0xbc5d8
	str r0, [r5, #88]	@ 000bc5d8 a865
.org 0xbc5da
	adds r1, r5, #0	@ 000bc5da 291c
.org 0xbc5dc
	adds r1, #184	@ 000bc5dc b831
.org 0xbc5de
	str r0, [r1, #0]	@ 000bc5de 0860
.org 0xbc5e0
	movs r0, #1	@ 000bc5e0 0120
.org 0xbc5e2
	strb r0, [r4, #0]	@ 000bc5e2 2070
.org 0xbc5e4
	ldrb r1, [r5, #10]	@ 000bc5e4 a97a
.org 0xbc5e6
	movs r0, #4	@ 000bc5e6 0420
.org 0xbc5e8
	orrs r0, r1	@ 000bc5e8 0843
.org 0xbc5ea
	strb r0, [r5, #10]	@ 000bc5ea a872
.org 0xbc5ec
	subs r4, #64	@ 000bc5ec 403c
.org 0xbc5ee
	ldr r1, [pc, #40]	@ 000bc5ee 0a49
.org 0xbc5f0
	adds r2, r5, #0	@ 000bc5f0 2a1c
.org 0xbc5f2
	adds r2, #84	@ 000bc5f2 5432
.org 0xbc5f4
	adds r0, r4, #0	@ 000bc5f4 201c
.org 0xbc5f6
	movs r3, #1	@ 000bc5f6 0123
.org 0xbc5f8
	bl 0x5760	@ 000bc5f8 49f7b2f8
.org 0xbc5fc
	str r5, [r4, #44]	@ 000bc5fc e562
.org 0xbc5fe
	str r6, [r4, #36]	@ 000bc5fe 6662
.org 0xbc600
	ldrb r0, [r5, #17]	@ 000bc600 687c
.org 0xbc602
	cmp r0, #1	@ 000bc602 0128
.org 0xbc604
	bne.n 0xbc644	@ 000bc604 1ed1
.org 0xbc606
	movs r0, #64	@ 000bc606 4020
.org 0xbc608
	strb r0, [r5, #18]	@ 000bc608 a874
.org 0xbc60a
	ldr r1, [pc, #16]	@ 000bc60a 0449
.org 0xbc60c
	adds r0, r5, #0	@ 000bc60c 281c
.org 0xbc60e
	bl 0x1cf00	@ 000bc60e 60f777fc
.org 0xbc612
	b.n 0xbc644	@ 000bc612 17e0
.org 0xbc614
	.byte 0x00,0xf2,0xff,0xff	@ 000bc614 data
.org 0xbc618
	.byte 0x60,0x47,0x86,0x08	@ 000bc618 data
.org 0xbc61c
	.byte 0x08,0xe9,0x00,0x00	@ 000bc61c data
.org 0xbc620
	ldrb r0, [r5, #17]	@ 000bc620 687c
.org 0xbc622
	cmp r0, #1	@ 000bc622 0128
.org 0xbc624
	bne.n 0xbc644	@ 000bc624 0ed1
.org 0xbc626
	ldrb r0, [r5, #18]	@ 000bc626 a87c
.org 0xbc628
	cmp r0, #0	@ 000bc628 0028
.org 0xbc62a
	beq.n 0xbc632	@ 000bc62a 02d0
.org 0xbc62c
	subs r0, #1	@ 000bc62c 0138
.org 0xbc62e
	strb r0, [r5, #18]	@ 000bc62e a874
.org 0xbc630
	b.n 0xbc644	@ 000bc630 08e0
.org 0xbc632
	ldr r1, [pc, #28]	@ 000bc632 0749
.org 0xbc634
	ldrb r0, [r5, #9]	@ 000bc634 687a
.org 0xbc636
	lsls r0, r0, #2	@ 000bc636 8000
.org 0xbc638
	adds r0, r0, r1	@ 000bc638 4018
