@ FUN_08052438  entry 0x08052438  size 202
.thumb
.org 0x52438
FUN_08052438:
	push {r4, lr}	@ 00052438 10b5
.org 0x5243a
	adds r4, r0, #0	@ 0005243a 041c
.org 0x5243c
	ldrb r0, [r4, #14]	@ 0005243c a07b
.org 0x5243e
	cmp r0, #0	@ 0005243e 0028
.org 0x52440
	bne.n 0x5249c	@ 00052440 2cd1
.org 0x52442
	ldr r1, [pc, #32]	@ 00052442 0849
.org 0x52444
	adds r0, r4, #0	@ 00052444 201c
.org 0x52446
	bl 0x1cf00	@ 00052446 caf75bfd
.org 0x5244a
	adds r0, r4, #0	@ 0005244a 201c
.org 0x5244c
	adds r0, #116	@ 0005244c 7430
.org 0x5244e
	ldr r1, [pc, #24]	@ 0005244e 0649
.org 0x52450
	bl 0x5784	@ 00052450 b3f798f9
.org 0x52454
	adds r0, r4, #0	@ 00052454 201c
.org 0x52456
	adds r0, #164	@ 00052456 a430
.org 0x52458
	movs r1, #0	@ 00052458 0021
.org 0x5245a
	ldrsh r0, [r0, r1]	@ 0005245a 405e
.org 0x5245c
	cmp r0, #32	@ 0005245c 2028
.org 0x5245e
	ble.n 0x5246c	@ 0005245e 05dd
.org 0x52460
	movs r0, #48	@ 00052460 3020
.org 0x52462
	b.n 0x52476	@ 00052462 08e0
.org 0x52464
	.byte 0x0e,0xa1,0x00,0x00	@ 00052464 data
.org 0x52468
	.byte 0x04,0x80,0x85,0x08	@ 00052468 data
.org 0x5246c
	cmp r0, #16	@ 0005246c 1028
.org 0x5246e
	ble.n 0x52474	@ 0005246e 01dd
.org 0x52470
	movs r0, #40	@ 00052470 2820
.org 0x52472
	b.n 0x52476	@ 00052472 00e0
.org 0x52474
	movs r0, #32	@ 00052474 2020
.org 0x52476
	strb r0, [r4, #18]	@ 00052476 a074
.org 0x52478
	adds r0, r4, #0	@ 00052478 201c
.org 0x5247a
	adds r0, #226	@ 0005247a e230
.org 0x5247c
	ldrb r0, [r0, #0]	@ 0005247c 0078
.org 0x5247e
	cmp r0, #0	@ 0005247e 0028
.org 0x52480
	beq.n 0x52486	@ 00052480 01d0
.org 0x52482
	movs r0, #0	@ 00052482 0020
.org 0x52484
	strb r0, [r4, #18]	@ 00052484 a074
.org 0x52486
	ldr r0, [pc, #96]	@ 00052486 1848
.org 0x52488
	ldrh r1, [r0, #8]	@ 00052488 0189
.org 0x5248a
	movs r0, #8	@ 0005248a 0820
.org 0x5248c
	ands r0, r1	@ 0005248c 0840
.org 0x5248e
	cmp r0, #0	@ 0005248e 0028
.org 0x52490
	beq.n 0x52496	@ 00052490 01d0
.org 0x52492
	movs r0, #0	@ 00052492 0020
.org 0x52494
	strb r0, [r4, #18]	@ 00052494 a074
.org 0x52496
	ldrb r0, [r4, #14]	@ 00052496 a07b
.org 0x52498
	adds r0, #1	@ 00052498 0130
.org 0x5249a
	strb r0, [r4, #14]	@ 0005249a a073
.org 0x5249c
	adds r0, r4, #0	@ 0005249c 201c
.org 0x5249e
	bl 0x1cff0	@ 0005249e caf7a7fd
.org 0x524a2
	movs r3, #0	@ 000524a2 0023
.org 0x524a4
	ldr r0, [pc, #68]	@ 000524a4 1148
.org 0x524a6
	ldr r2, [r0, #0]	@ 000524a6 0268
.org 0x524a8
	ldr r1, [r4, #84]	@ 000524a8 616d
.org 0x524aa
	ldr r0, [r2, #84]	@ 000524aa 506d
.org 0x524ac
	cmp r1, r0	@ 000524ac 8142
.org 0x524ae
	bge.n 0x524b2	@ 000524ae 00da
.org 0x524b0
	movs r3, #1	@ 000524b0 0123
.org 0x524b2
	adds r0, r4, #0	@ 000524b2 201c
.org 0x524b4
	adds r0, #76	@ 000524b4 4c30
.org 0x524b6
	strb r3, [r0, #0]	@ 000524b6 0370
.org 0x524b8
	movs r3, #0	@ 000524b8 0023
.org 0x524ba
	ldr r1, [r4, #84]	@ 000524ba 616d
.org 0x524bc
	ldr r0, [r2, #84]	@ 000524bc 506d
.org 0x524be
	cmp r1, r0	@ 000524be 8142
.org 0x524c0
	bge.n 0x524c4	@ 000524c0 00da
.org 0x524c2
	movs r3, #1	@ 000524c2 0123
.org 0x524c4
	movs r0, #74	@ 000524c4 4a20
.org 0x524c6
	adds r0, r0, r4	@ 000524c6 0019
.org 0x524c8
	mov ip, r0	@ 000524c8 8446
.org 0x524ca
	lsls r2, r3, #4	@ 000524ca 1a01
.org 0x524cc
	ldrb r1, [r0, #0]	@ 000524cc 0178
.org 0x524ce
	movs r0, #17	@ 000524ce 1120
.org 0x524d0
	negs r0, r0	@ 000524d0 4042
.org 0x524d2
	ands r0, r1	@ 000524d2 0840
.org 0x524d4
	orrs r0, r2	@ 000524d4 1043
.org 0x524d6
	mov r1, ip	@ 000524d6 6146
.org 0x524d8
	strb r0, [r1, #0]	@ 000524d8 0870
.org 0x524da
	cmp r3, #0	@ 000524da 002b
.org 0x524dc
	beq.n 0x524f0	@ 000524dc 08d0
.org 0x524de
	ldrb r0, [r4, #10]	@ 000524de a07a
.org 0x524e0
	movs r1, #16	@ 000524e0 1021
.org 0x524e2
	orrs r0, r1	@ 000524e2 0843
.org 0x524e4
	b.n 0x524f6	@ 000524e4 07e0
.org 0x524e6
	.byte 0x00	@ 000524e6 data
.org 0x524e7
	.byte 0x00	@ 000524e7 data
.org 0x524e8
	.byte 0x10,0xe9,0x02,0x02	@ 000524e8 data
.org 0x524ec
	.byte 0xf0,0xdb,0x02,0x02	@ 000524ec data
.org 0x524f0
	ldrb r1, [r4, #10]	@ 000524f0 a17a
.org 0x524f2
	movs r0, #239	@ 000524f2 ef20
.org 0x524f4
	ands r0, r1	@ 000524f4 0840
.org 0x524f6
	strb r0, [r4, #10]	@ 000524f6 a072
.org 0x524f8
	ldrb r0, [r4, #18]	@ 000524f8 a07c
.org 0x524fa
	subs r0, #1	@ 000524fa 0138
.org 0x524fc
	strb r0, [r4, #18]	@ 000524fc a074
.org 0x524fe
	lsls r0, r0, #24	@ 000524fe 0006
.org 0x52500
	lsrs r0, r0, #24	@ 00052500 000e
