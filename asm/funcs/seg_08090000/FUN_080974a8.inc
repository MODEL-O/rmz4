@ FUN_080974a8  entry 0x080974a8  size 232
.thumb
.org 0x974a8
FUN_080974a8:
	push {r4, lr}	@ 000974a8 10b5
.org 0x974aa
	adds r4, r0, #0	@ 000974aa 041c
.org 0x974ac
	ldrb r0, [r4, #14]	@ 000974ac a07b
.org 0x974ae
	cmp r0, #0	@ 000974ae 0028
.org 0x974b0
	bne.n 0x974e2	@ 000974b0 17d1
.org 0x974b2
	ldr r1, [pc, #28]	@ 000974b2 0749
.org 0x974b4
	adds r0, r4, #0	@ 000974b4 201c
.org 0x974b6
	bl 0x1cf00	@ 000974b6 85f723fd
.org 0x974ba
	ldrb r1, [r4, #10]	@ 000974ba a17a
.org 0x974bc
	movs r0, #16	@ 000974bc 1020
.org 0x974be
	ands r0, r1	@ 000974be 0840
.org 0x974c0
	cmp r0, #0	@ 000974c0 0028
.org 0x974c2
	beq.n 0x974d4	@ 000974c2 07d0
.org 0x974c4
	movs r0, #224	@ 000974c4 e020
.org 0x974c6
	lsls r0, r0, #1	@ 000974c6 4000
.org 0x974c8
	str r0, [r4, #92]	@ 000974c8 e065
.org 0x974ca
	movs r0, #128	@ 000974ca 8020
.org 0x974cc
	lsls r0, r0, #5	@ 000974cc 4001
.org 0x974ce
	b.n 0x974da	@ 000974ce 04e0
.org 0x974d0
	.byte 0x03,0x50,0x00,0x00	@ 000974d0 data
.org 0x974d4
	ldr r0, [pc, #120]	@ 000974d4 1e48
.org 0x974d6
	str r0, [r4, #92]	@ 000974d6 e065
.org 0x974d8
	ldr r0, [pc, #120]	@ 000974d8 1e48
.org 0x974da
	str r0, [r4, #100]	@ 000974da 6066
.org 0x974dc
	ldrb r0, [r4, #14]	@ 000974dc a07b
.org 0x974de
	adds r0, #1	@ 000974de 0130
.org 0x974e0
	strb r0, [r4, #14]	@ 000974e0 a073
.org 0x974e2
	adds r0, r4, #0	@ 000974e2 201c
.org 0x974e4
	bl 0x1cff0	@ 000974e4 85f784fd
.org 0x974e8
	adds r0, r4, #0	@ 000974e8 201c
.org 0x974ea
	adds r0, #113	@ 000974ea 7130
.org 0x974ec
	ldrb r0, [r0, #0]	@ 000974ec 0078
.org 0x974ee
	lsls r0, r0, #24	@ 000974ee 0006
.org 0x974f0
	asrs r0, r0, #24	@ 000974f0 0016
.org 0x974f2
	cmp r0, #2	@ 000974f2 0228
.org 0x974f4
	beq.n 0x974fa	@ 000974f4 01d0
.org 0x974f6
	cmp r0, #6	@ 000974f6 0628
.org 0x974f8
	bne.n 0x9750e	@ 000974f8 09d1
.org 0x974fa
	adds r0, r4, #0	@ 000974fa 201c
.org 0x974fc
	adds r0, #114	@ 000974fc 7230
.org 0x974fe
	ldrb r0, [r0, #0]	@ 000974fe 0078
.org 0x97500
	lsls r0, r0, #24	@ 00097500 0006
.org 0x97502
	asrs r0, r0, #24	@ 00097502 0016
.org 0x97504
	cmp r0, #1	@ 00097504 0128
.org 0x97506
	bgt.n 0x9750e	@ 00097506 02dc
.org 0x97508
	ldr r0, [pc, #76]	@ 00097508 1348
.org 0x9750a
	bl 0x2b10	@ 0009750a 6bf701fb
.org 0x9750e
	ldr r0, [r4, #84]	@ 0009750e 606d
.org 0x97510
	ldr r1, [r4, #92]	@ 00097510 e16d
.org 0x97512
	adds r0, r0, r1	@ 00097512 4018
.org 0x97514
	str r0, [r4, #84]	@ 00097514 6065
.org 0x97516
	ldr r1, [r4, #88]	@ 00097516 a16d
.org 0x97518
	bl 0x8534	@ 00097518 71f70cf8
.org 0x9751c
	adds r3, r0, #0	@ 0009751c 031c
.org 0x9751e
	str r3, [r4, #88]	@ 0009751e a365
.org 0x97520
	ldr r0, [pc, #56]	@ 00097520 0e48
.org 0x97522
	ldr r2, [r0, #0]	@ 00097522 0268
.org 0x97524
	ldr r0, [r2, #84]	@ 00097524 506d
.org 0x97526
	ldr r1, [r4, #84]	@ 00097526 616d
.org 0x97528
	subs r0, r0, r1	@ 00097528 401a
.org 0x9752a
	movs r1, #160	@ 0009752a a021
.org 0x9752c
	lsls r1, r1, #6	@ 0009752c 8901
.org 0x9752e
	adds r0, r0, r1	@ 0009752e 4018
.org 0x97530
	movs r1, #160	@ 00097530 a021
.org 0x97532
	lsls r1, r1, #7	@ 00097532 c901
.org 0x97534
	cmp r0, r1	@ 00097534 8842
.org 0x97536
	bhi.n 0x97560	@ 00097536 13d8
.org 0x97538
	ldr r0, [r2, #88]	@ 00097538 906d
.org 0x9753a
	subs r0, r0, r3	@ 0009753a c01a
.org 0x9753c
	movs r2, #192	@ 0009753c c022
.org 0x9753e
	lsls r2, r2, #6	@ 0009753e 9201
.org 0x97540
	adds r0, r0, r2	@ 00097540 8018
.org 0x97542
	movs r1, #192	@ 00097542 c021
.org 0x97544
	lsls r1, r1, #7	@ 00097544 c901
.org 0x97546
	cmp r0, r1	@ 00097546 8842
.org 0x97548
	bhi.n 0x97560	@ 00097548 0ad8
.org 0x9754a
	movs r1, #0	@ 0009754a 0021
.org 0x9754c
	movs r0, #2	@ 0009754c 0220
.org 0x9754e
	b.n 0x9759a	@ 0009754e 24e0
.org 0x97550
	.byte 0x40,0xfe,0xff,0xff	@ 00097550 data
.org 0x97554
	.byte 0x00,0xf0,0xff,0xff	@ 00097554 data
.org 0x97558
	.byte 0x37,0x01,0x00,0x00	@ 00097558 data
.org 0x9755c
	.byte 0xf0,0xdb,0x02,0x02	@ 0009755c data
.org 0x97560
	ldr r0, [r4, #84]	@ 00097560 606d
.org 0x97562
	ldr r1, [r4, #100]	@ 00097562 616e
.org 0x97564
	adds r0, r0, r1	@ 00097564 4018
.org 0x97566
	ldr r1, [r4, #88]	@ 00097566 a16d
.org 0x97568
	ldr r2, [pc, #56]	@ 00097568 0e4a
.org 0x9756a
	adds r1, r1, r2	@ 0009756a 8918
.org 0x9756c
	bl 0x7c7c	@ 0009756c 70f786fb
.org 0x97570
	lsls r0, r0, #16	@ 00097570 0004
.org 0x97572
	cmp r0, #0	@ 00097572 0028
.org 0x97574
	beq.n 0x9757e	@ 00097574 03d0
.org 0x97576
	movs r1, #0	@ 00097576 0021
.org 0x97578
	movs r0, #4	@ 00097578 0420
.org 0x9757a
	strb r0, [r4, #13]	@ 0009757a 6073
.org 0x9757c
	strb r1, [r4, #14]	@ 0009757c a173
.org 0x9757e
	ldr r0, [r4, #84]	@ 0009757e 606d
.org 0x97580
	ldr r1, [r4, #100]	@ 00097580 616e
.org 0x97582
	adds r0, r0, r1	@ 00097582 4018
.org 0x97584
	ldr r1, [r4, #88]	@ 00097584 a16d
.org 0x97586
	movs r2, #128	@ 00097586 8022
.org 0x97588
	lsls r2, r2, #5	@ 00097588 5201
.org 0x9758a
	adds r1, r1, r2	@ 0009758a 8918
.org 0x9758c
	bl 0x7c7c	@ 0009758c 70f776fb
