@ FUN_08089498  entry 0x08089498  size 352
.thumb
.org 0x89498
FUN_08089498:
	push {r4, r5, lr}	@ 00089498 30b5
.org 0x8949a
	adds r5, r0, #0	@ 0008949a 051c
.org 0x8949c
	ldrb r0, [r5, #14]	@ 0008949c a87b
.org 0x8949e
	cmp r0, #1	@ 0008949e 0128
.org 0x894a0
	beq.n 0x8952c	@ 000894a0 44d0
.org 0x894a2
	cmp r0, #1	@ 000894a2 0128
.org 0x894a4
	bgt.n 0x894ac	@ 000894a4 02dc
.org 0x894a6
	cmp r0, #0	@ 000894a6 0028
.org 0x894a8
	beq.n 0x894b4	@ 000894a8 04d0
.org 0x894aa
	b.n 0x89614	@ 000894aa b3e0
.org 0x894ac
	cmp r0, #2	@ 000894ac 0228
.org 0x894ae
	bne.n 0x894b2	@ 000894ae 00d1
.org 0x894b0
	b.n 0x8960e	@ 000894b0 ade0
.org 0x894b2
	b.n 0x89614	@ 000894b2 afe0
.org 0x894b4
	adds r4, r5, #0	@ 000894b4 2c1c
.org 0x894b6
	adds r4, #192	@ 000894b6 c034
.org 0x894b8
	ldr r0, [pc, #56]	@ 000894b8 0e48
.org 0x894ba
	adds r1, r0, #0	@ 000894ba 011c
.org 0x894bc
	ldrb r0, [r4, #0]	@ 000894bc 2078
.org 0x894be
	adds r1, r1, r0	@ 000894be 0918
.org 0x894c0
	adds r0, r5, #0	@ 000894c0 281c
.org 0x894c2
	bl 0x1cf00	@ 000894c2 93f71dfd
.org 0x894c6
	adds r0, r5, #0	@ 000894c6 281c
.org 0x894c8
	adds r0, #116	@ 000894c8 7430
.org 0x894ca
	ldr r2, [pc, #44]	@ 000894ca 0b4a
.org 0x894cc
	ldrb r1, [r4, #0]	@ 000894cc 2178
.org 0x894ce
	adds r1, #2	@ 000894ce 0231
.org 0x894d0
	adds r1, r1, r2	@ 000894d0 8918
.org 0x894d2
	ldrb r2, [r1, #0]	@ 000894d2 0a78
.org 0x894d4
	lsls r1, r2, #1	@ 000894d4 5100
.org 0x894d6
	adds r1, r1, r2	@ 000894d6 8918
.org 0x894d8
	lsls r1, r1, #3	@ 000894d8 c900
.org 0x894da
	ldr r2, [pc, #32]	@ 000894da 084a
.org 0x894dc
	adds r1, r1, r2	@ 000894dc 8918
.org 0x894de
	bl 0x5784	@ 000894de 7cf751f9
.org 0x894e2
	ldrb r2, [r5, #10]	@ 000894e2 aa7a
.org 0x894e4
	lsrs r1, r2, #4	@ 000894e4 1109
.org 0x894e6
	movs r0, #1	@ 000894e6 0120
.org 0x894e8
	ands r1, r0	@ 000894e8 0140
.org 0x894ea
	cmp r1, #0	@ 000894ea 0029
.org 0x894ec
	beq.n 0x89500	@ 000894ec 08d0
.org 0x894ee
	movs r0, #16	@ 000894ee 1020
.org 0x894f0
	orrs r0, r2	@ 000894f0 1043
.org 0x894f2
	b.n 0x89504	@ 000894f2 07e0
.org 0x894f4
	.byte 0x02,0x1f,0x00,0x00	@ 000894f4 data
.org 0x894f8
	.byte 0xac,0xf2,0x85,0x08	@ 000894f8 data
.org 0x894fc
	.byte 0x44,0xf1,0x85,0x08	@ 000894fc data
.org 0x89500
	movs r0, #239	@ 00089500 ef20
.org 0x89502
	ands r0, r2	@ 00089502 1040
.org 0x89504
	strb r0, [r5, #10]	@ 00089504 a872
.org 0x89506
	adds r0, r5, #0	@ 00089506 281c
.org 0x89508
	adds r0, #76	@ 00089508 4c30
.org 0x8950a
	movs r3, #0	@ 0008950a 0023
.org 0x8950c
	strb r1, [r0, #0]	@ 0008950c 0170
.org 0x8950e
	adds r4, r5, #0	@ 0008950e 2c1c
.org 0x89510
	adds r4, #74	@ 00089510 4a34
.org 0x89512
	lsls r1, r1, #4	@ 00089512 0901
.org 0x89514
	ldrb r2, [r4, #0]	@ 00089514 2278
.org 0x89516
	movs r0, #17	@ 00089516 1120
.org 0x89518
	negs r0, r0	@ 00089518 4042
.org 0x8951a
	ands r0, r2	@ 0008951a 1040
.org 0x8951c
	orrs r0, r1	@ 0008951c 0843
.org 0x8951e
	strb r0, [r4, #0]	@ 0008951e 2070
.org 0x89520
	strb r3, [r5, #19]	@ 00089520 eb74
.org 0x89522
	movs r0, #8	@ 00089522 0820
.org 0x89524
	strb r0, [r5, #18]	@ 00089524 a874
.org 0x89526
	ldrb r0, [r5, #14]	@ 00089526 a87b
.org 0x89528
	adds r0, #1	@ 00089528 0130
.org 0x8952a
	strb r0, [r5, #14]	@ 0008952a a873
.org 0x8952c
	ldrb r0, [r5, #18]	@ 0008952c a87c
.org 0x8952e
	cmp r0, #0	@ 0008952e 0028
.org 0x89530
	beq.n 0x8953c	@ 00089530 04d0
.org 0x89532
	subs r0, #1	@ 00089532 0138
.org 0x89534
	strb r0, [r5, #18]	@ 00089534 a874
.org 0x89536
	lsls r0, r0, #24	@ 00089536 0006
.org 0x89538
	cmp r0, #0	@ 00089538 0028
.org 0x8953a
	bne.n 0x89606	@ 0008953a 64d1
.org 0x8953c
	ldrb r0, [r5, #19]	@ 0008953c e87c
.org 0x8953e
	adds r0, #1	@ 0008953e 0130
.org 0x89540
	strb r0, [r5, #19]	@ 00089540 e874
.org 0x89542
	lsls r0, r0, #24	@ 00089542 0006
.org 0x89544
	lsrs r1, r0, #24	@ 00089544 010e
.org 0x89546
	cmp r1, #2	@ 00089546 0229
.org 0x89548
	bls.n 0x89552	@ 00089548 03d9
.org 0x8954a
	ldrb r0, [r5, #14]	@ 0008954a a87b
.org 0x8954c
	adds r0, #1	@ 0008954c 0130
.org 0x8954e
	strb r0, [r5, #14]	@ 0008954e a873
.org 0x89550
	b.n 0x895c2	@ 00089550 37e0
.org 0x89552
	movs r0, #8	@ 00089552 0820
.org 0x89554
	strb r0, [r5, #18]	@ 00089554 a874
.org 0x89556
	adds r4, r5, #0	@ 00089556 2c1c
.org 0x89558
	adds r4, #192	@ 00089558 c034
.org 0x8955a
	cmp r1, #2	@ 0008955a 0229
.org 0x8955c
	bne.n 0x89576	@ 0008955c 0bd1
.org 0x8955e
	ldr r1, [pc, #60]	@ 0008955e 0f49
.org 0x89560
	ldrb r0, [r5, #19]	@ 00089560 e87c
.org 0x89562
	lsls r0, r0, #1	@ 00089562 4000
.org 0x89564
	adds r0, r0, r1	@ 00089564 4018
.org 0x89566
	ldrb r2, [r4, #0]	@ 00089566 2278
.org 0x89568
	ldrh r1, [r0, #0]	@ 00089568 0188
.org 0x8956a
	adds r1, r1, r2	@ 0008956a 8918
.org 0x8956c
	lsls r1, r1, #16	@ 0008956c 0904
.org 0x8956e
	lsrs r1, r1, #16	@ 0008956e 090c
.org 0x89570
	adds r0, r5, #0	@ 00089570 281c
.org 0x89572
	bl 0x1cf00	@ 00089572 93f7c5fc
.org 0x89576
	ldrb r0, [r5, #19]	@ 00089576 e87c
.org 0x89578
	cmp r0, #1	@ 00089578 0128
.org 0x8957a
	bne.n 0x895a8	@ 0008957a 15d1
.org 0x8957c
	adds r0, r5, #0	@ 0008957c 281c
.org 0x8957e
	adds r0, #116	@ 0008957e 7430
.org 0x89580
	ldr r2, [pc, #28]	@ 00089580 074a
.org 0x89582
	ldrb r1, [r4, #0]	@ 00089582 2178
.org 0x89584
	adds r1, #2	@ 00089584 0231
.org 0x89586
	adds r1, r1, r2	@ 00089586 8918
.org 0x89588
	ldrb r2, [r1, #0]	@ 00089588 0a78
.org 0x8958a
	lsls r1, r2, #1	@ 0008958a 5100
.org 0x8958c
	adds r1, r1, r2	@ 0008958c 8918
.org 0x8958e
	lsls r1, r1, #3	@ 0008958e c900
.org 0x89590
	ldr r2, [pc, #16]	@ 00089590 044a
.org 0x89592
	adds r1, r1, r2	@ 00089592 8918
.org 0x89594
	bl 0x5784	@ 00089594 7cf7f6f8
.org 0x89598
	b.n 0x895c2	@ 00089598 13e0
.org 0x8959a
	.byte 0x00	@ 0008959a data
.org 0x8959b
	.byte 0x00	@ 0008959b data
.org 0x8959c
	.byte 0x20,0x9b,0x12,0x08	@ 0008959c data
.org 0x895a0
	.byte 0xac,0xf2,0x85,0x08	@ 000895a0 data
.org 0x895a4
	.byte 0x44,0xf1,0x85,0x08	@ 000895a4 data
.org 0x895a8
	adds r0, r5, #0	@ 000895a8 281c
.org 0x895aa
	adds r0, #116	@ 000895aa 7430
.org 0x895ac
	ldr r2, [pc, #44]	@ 000895ac 0b4a
.org 0x895ae
	ldrb r1, [r4, #0]	@ 000895ae 2178
.org 0x895b0
	adds r1, r1, r2	@ 000895b0 8918
.org 0x895b2
	ldrb r2, [r1, #0]	@ 000895b2 0a78
.org 0x895b4
	lsls r1, r2, #1	@ 000895b4 5100
.org 0x895b6
	adds r1, r1, r2	@ 000895b6 8918
.org 0x895b8
	lsls r1, r1, #3	@ 000895b8 c900
.org 0x895ba
	ldr r2, [pc, #36]	@ 000895ba 094a
.org 0x895bc
	adds r1, r1, r2	@ 000895bc 8918
.org 0x895be
	bl 0x5784	@ 000895be 7cf7e1f8
.org 0x895c2
	ldrb r0, [r5, #19]	@ 000895c2 e87c
.org 0x895c4
	cmp r0, #1	@ 000895c4 0128
.org 0x895c6
	bne.n 0x89606	@ 000895c6 1ed1
.org 0x895c8
	ldrb r1, [r5, #10]	@ 000895c8 a97a
.org 0x895ca
	lsrs r2, r1, #4	@ 000895ca 0a09
.org 0x895cc
	ands r2, r0	@ 000895cc 0240
.org 0x895ce
	movs r0, #1	@ 000895ce 0120
.org 0x895d0
	eors r2, r0	@ 000895d0 4240
.org 0x895d2
	cmp r2, #0	@ 000895d2 002a
.org 0x895d4
	beq.n 0x895e4	@ 000895d4 06d0
.org 0x895d6
	movs r0, #16	@ 000895d6 1020
.org 0x895d8
	orrs r0, r1	@ 000895d8 0843
.org 0x895da
	b.n 0x895e8	@ 000895da 05e0
.org 0x895dc
	.byte 0xac,0xf2,0x85,0x08	@ 000895dc data
.org 0x895e0
	.byte 0x44,0xf1,0x85,0x08	@ 000895e0 data
.org 0x895e4
	movs r0, #239	@ 000895e4 ef20
.org 0x895e6
	ands r0, r1	@ 000895e6 0840
.org 0x895e8
	strb r0, [r5, #10]	@ 000895e8 a872
.org 0x895ea
	movs r1, #1	@ 000895ea 0121
.org 0x895ec
	ands r1, r2	@ 000895ec 1140
.org 0x895ee
	adds r0, r5, #0	@ 000895ee 281c
.org 0x895f0
	adds r0, #76	@ 000895f0 4c30
.org 0x895f2
	strb r1, [r0, #0]	@ 000895f2 0170
.org 0x895f4
	adds r3, r5, #0	@ 000895f4 2b1c
.org 0x895f6
	adds r3, #74	@ 000895f6 4a33
