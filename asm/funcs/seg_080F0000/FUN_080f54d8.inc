@ FUN_080f54d8  entry 0x080f54d8  size 288
.thumb
.org 0xf54d8
FUN_080f54d8:
	push {r4, r5, r6, r7, lr}	@ 000f54d8 f0b5
.org 0xf54da
	adds r5, r0, #0	@ 000f54da 051c
.org 0xf54dc
	adds r4, r5, #0	@ 000f54dc 2c1c
.org 0xf54de
	adds r4, #188	@ 000f54de bc34
.org 0xf54e0
	ldr r6, [r4, #0]	@ 000f54e0 2668
.org 0xf54e2
	bl 0x1cff0	@ 000f54e2 27f785fd
.org 0xf54e6
	ldr r7, [r5, #88]	@ 000f54e6 af6d
.org 0xf54e8
	ldr r0, [r4, #0]	@ 000f54e8 2068
.org 0xf54ea
	cmp r0, #0	@ 000f54ea 0028
.org 0xf54ec
	beq.n 0xf5578	@ 000f54ec 44d0
.org 0xf54ee
	ldrb r0, [r6, #13]	@ 000f54ee 707b
.org 0xf54f0
	cmp r0, #3	@ 000f54f0 0328
.org 0xf54f2
	bne.n 0xf5578	@ 000f54f2 41d1
.org 0xf54f4
	ldrb r0, [r6, #14]	@ 000f54f4 b07b
.org 0xf54f6
	cmp r0, #1	@ 000f54f6 0128
.org 0xf54f8
	bls.n 0xf5578	@ 000f54f8 3ed9
.org 0xf54fa
	movs r0, #150	@ 000f54fa 9620
.org 0xf54fc
	lsls r0, r0, #2	@ 000f54fc 8000
.org 0xf54fe
	adds r4, r6, r0	@ 000f54fe 3418
.org 0xf5500
	ldr r0, [r4, #0]	@ 000f5500 2068
.org 0xf5502
	movs r1, #64	@ 000f5502 4021
.org 0xf5504
	ands r0, r1	@ 000f5504 0840
.org 0xf5506
	cmp r0, #0	@ 000f5506 0028
.org 0xf5508
	beq.n 0xf5510	@ 000f5508 02d0
.org 0xf550a
	ldr r1, [pc, #40]	@ 000f550a 0a49
.org 0xf550c
	adds r0, r7, r1	@ 000f550c 7818
.org 0xf550e
	str r0, [r5, #88]	@ 000f550e a865
.org 0xf5510
	ldr r0, [r4, #0]	@ 000f5510 2068
.org 0xf5512
	movs r1, #128	@ 000f5512 8021
.org 0xf5514
	ands r0, r1	@ 000f5514 0840
.org 0xf5516
	cmp r0, #0	@ 000f5516 0028
.org 0xf5518
	beq.n 0xf5524	@ 000f5518 04d0
.org 0xf551a
	ldr r0, [r5, #88]	@ 000f551a a86d
.org 0xf551c
	movs r3, #128	@ 000f551c 8023
.org 0xf551e
	lsls r3, r3, #2	@ 000f551e 9b00
.org 0xf5520
	adds r0, r0, r3	@ 000f5520 c018
.org 0xf5522
	str r0, [r5, #88]	@ 000f5522 a865
.org 0xf5524
	adds r0, r5, #0	@ 000f5524 281c
.org 0xf5526
	adds r0, #184	@ 000f5526 b830
.org 0xf5528
	ldr r2, [r5, #88]	@ 000f5528 aa6d
.org 0xf552a
	ldr r1, [r0, #0]	@ 000f552a 0168
.org 0xf552c
	cmp r2, r1	@ 000f552c 8a42
.org 0xf552e
	ble.n 0xf5538	@ 000f552e 03dd
.org 0xf5530
	str r1, [r5, #88]	@ 000f5530 a965
.org 0xf5532
	b.n 0xf5548	@ 000f5532 09e0
.org 0xf5534
	.byte 0x00,0xfe,0xff,0xff	@ 000f5534 data
.org 0xf5538
	adds r0, r5, #0	@ 000f5538 281c
.org 0xf553a
	adds r0, #192	@ 000f553a c030
.org 0xf553c
	ldrb r0, [r0, #0]	@ 000f553c 0078
.org 0xf553e
	lsls r0, r0, #12	@ 000f553e 0003
.org 0xf5540
	subs r0, r1, r0	@ 000f5540 081a
.org 0xf5542
	cmp r2, r0	@ 000f5542 8242
.org 0xf5544
	bge.n 0xf5548	@ 000f5544 00da
.org 0xf5546
	str r0, [r5, #88]	@ 000f5546 a865
.org 0xf5548
	ldr r0, [r5, #88]	@ 000f5548 a86d
.org 0xf554a
	cmp r7, r0	@ 000f554a 8742
.org 0xf554c
	beq.n 0xf5564	@ 000f554c 0ad0
.org 0xf554e
	adds r4, r5, #0	@ 000f554e 2c1c
.org 0xf5550
	adds r4, #194	@ 000f5550 c234
.org 0xf5552
	ldrh r0, [r4, #0]	@ 000f5552 2088
.org 0xf5554
	cmp r0, #119	@ 000f5554 7728
.org 0xf5556
	beq.n 0xf55fe	@ 000f5556 52d0
.org 0xf5558
	movs r0, #119	@ 000f5558 7720
.org 0xf555a
	bl 0x2b10	@ 000f555a 0df7d9fa
.org 0xf555e
	movs r0, #119	@ 000f555e 7720
.org 0xf5560
	strh r0, [r4, #0]	@ 000f5560 2080
.org 0xf5562
	b.n 0xf55fe	@ 000f5562 4ce0
.org 0xf5564
	adds r6, r5, #0	@ 000f5564 2e1c
.org 0xf5566
	adds r6, #194	@ 000f5566 c236
.org 0xf5568
	ldrh r0, [r6, #0]	@ 000f5568 3088
.org 0xf556a
	cmp r0, #119	@ 000f556a 7728
.org 0xf556c
	bne.n 0xf55fe	@ 000f556c 47d1
.org 0xf556e
	ldr r4, [pc, #4]	@ 000f556e 014c
.org 0xf5570
	b.n 0xf55f6	@ 000f5570 41e0
.org 0xf5572
	.byte 0x00	@ 000f5572 data
.org 0xf5573
	.byte 0x00	@ 000f5573 data
.org 0xf5574
	.byte 0x9d,0x01,0x00,0x00	@ 000f5574 data
.org 0xf5578
	adds r0, r5, #0	@ 000f5578 281c
.org 0xf557a
	adds r0, #184	@ 000f557a b830
.org 0xf557c
	ldr r2, [r5, #88]	@ 000f557c aa6d
.org 0xf557e
	ldr r3, [r0, #0]	@ 000f557e 0368
.org 0xf5580
	adds r1, r0, #0	@ 000f5580 011c
.org 0xf5582
	cmp r2, r3	@ 000f5582 9a42
.org 0xf5584
	bge.n 0xf558c	@ 000f5584 02da
.org 0xf5586
	movs r3, #128	@ 000f5586 8023
.org 0xf5588
	lsls r3, r3, #2	@ 000f5588 9b00
.org 0xf558a
	b.n 0xf5592	@ 000f558a 02e0
.org 0xf558c
	cmp r2, r3	@ 000f558c 9a42
.org 0xf558e
	ble.n 0xf55a8	@ 000f558e 0bdd
.org 0xf5590
	ldr r3, [pc, #16]	@ 000f5590 044b
.org 0xf5592
	adds r0, r2, r3	@ 000f5592 d018
.org 0xf5594
	str r0, [r5, #88]	@ 000f5594 a865
.org 0xf5596
	ldr r0, [r5, #88]	@ 000f5596 a86d
.org 0xf5598
	ldr r2, [r1, #0]	@ 000f5598 0a68
.org 0xf559a
	cmp r0, r2	@ 000f559a 9042
.org 0xf559c
	ble.n 0xf55a8	@ 000f559c 04dd
.org 0xf559e
	str r2, [r5, #88]	@ 000f559e aa65
.org 0xf55a0
	b.n 0xf55bc	@ 000f55a0 0ce0
.org 0xf55a2
	.byte 0x00	@ 000f55a2 data
.org 0xf55a3
	.byte 0x00	@ 000f55a3 data
.org 0xf55a4
	.byte 0x00,0xfe,0xff,0xff	@ 000f55a4 data
.org 0xf55a8
	adds r0, r5, #0	@ 000f55a8 281c
.org 0xf55aa
	adds r0, #192	@ 000f55aa c030
.org 0xf55ac
	ldrb r0, [r0, #0]	@ 000f55ac 0078
.org 0xf55ae
	lsls r0, r0, #12	@ 000f55ae 0003
.org 0xf55b0
	ldr r1, [r1, #0]	@ 000f55b0 0968
.org 0xf55b2
	subs r1, r1, r0	@ 000f55b2 091a
.org 0xf55b4
	ldr r0, [r5, #88]	@ 000f55b4 a86d
.org 0xf55b6
	cmp r0, r1	@ 000f55b6 8842
.org 0xf55b8
	bge.n 0xf55bc	@ 000f55b8 00da
.org 0xf55ba
	str r1, [r5, #88]	@ 000f55ba a965
.org 0xf55bc
	adds r6, r5, #0	@ 000f55bc 2e1c
.org 0xf55be
	adds r6, #194	@ 000f55be c236
.org 0xf55c0
	ldrh r0, [r6, #0]	@ 000f55c0 3088
.org 0xf55c2
	cmp r0, #119	@ 000f55c2 7728
.org 0xf55c4
	bne.n 0xf55d0	@ 000f55c4 04d1
.org 0xf55c6
	ldr r4, [pc, #32]	@ 000f55c6 084c
.org 0xf55c8
	adds r0, r4, #0	@ 000f55c8 201c
.org 0xf55ca
	bl 0x2b10	@ 000f55ca 0df7a1fa
.org 0xf55ce
	strh r4, [r6, #0]	@ 000f55ce 3480
.org 0xf55d0
	ldr r0, [r5, #88]	@ 000f55d0 a86d
.org 0xf55d2
	cmp r7, r0	@ 000f55d2 8742
.org 0xf55d4
	beq.n 0xf55ec	@ 000f55d4 0ad0
.org 0xf55d6
	ldrh r0, [r6, #0]	@ 000f55d6 3088
.org 0xf55d8
	cmp r0, #164	@ 000f55d8 a428
.org 0xf55da
	beq.n 0xf55fe	@ 000f55da 10d0
.org 0xf55dc
	movs r0, #164	@ 000f55dc a420
.org 0xf55de
	bl 0x2b10	@ 000f55de 0df797fa
.org 0xf55e2
	movs r0, #164	@ 000f55e2 a420
.org 0xf55e4
	strh r0, [r6, #0]	@ 000f55e4 3080
.org 0xf55e6
	b.n 0xf55fe	@ 000f55e6 0ae0
.org 0xf55e8
	.byte 0x9d,0x01,0x00,0x00	@ 000f55e8 data
.org 0xf55ec
	ldrh r0, [r6, #0]	@ 000f55ec 3088
.org 0xf55ee
	cmp r0, #164	@ 000f55ee a428
.org 0xf55f0
	bne.n 0xf55fe	@ 000f55f0 05d1
.org 0xf55f2
	movs r4, #207	@ 000f55f2 cf24
.org 0xf55f4
	lsls r4, r4, #1	@ 000f55f4 6400
.org 0xf55f6
	adds r0, r4, #0	@ 000f55f6 201c
