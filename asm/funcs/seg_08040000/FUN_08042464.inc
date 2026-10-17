@ FUN_08042464  entry 0x08042464  size 720
.thumb
.org 0x42464
FUN_08042464:
	push {r4, r5, lr}	@ 00042464 30b5
.org 0x42466
	adds r4, r0, #0	@ 00042466 041c
.org 0x42468
	ldr r0, [r4, #40]	@ 00042468 a06a
.org 0x4246a
	adds r0, #250	@ 0004246a fa30
.org 0x4246c
	ldrb r0, [r0, #0]	@ 0004246c 0078
.org 0x4246e
	cmp r0, #2	@ 0004246e 0228
.org 0x42470
	bne.n 0x42490	@ 00042470 0ed1
.org 0x42472
	ldrb r1, [r4, #10]	@ 00042472 a17a
.org 0x42474
	movs r0, #254	@ 00042474 fe20
.org 0x42476
	ands r0, r1	@ 00042476 0840
.org 0x42478
	movs r2, #0	@ 00042478 0022
.org 0x4247a
	movs r1, #253	@ 0004247a fd21
.org 0x4247c
	ands r0, r1	@ 0004247c 0840
.org 0x4247e
	strb r0, [r4, #10]	@ 0004247e a072
.org 0x42480
	adds r0, r4, #0	@ 00042480 201c
.org 0x42482
	adds r0, #140	@ 00042482 8c30
.org 0x42484
	str r2, [r0, #0]	@ 00042484 0260
.org 0x42486
	adds r0, #4	@ 00042486 0430
.org 0x42488
	str r2, [r0, #0]	@ 00042488 0260
.org 0x4248a
	adds r0, #4	@ 0004248a 0430
.org 0x4248c
	strb r2, [r0, #0]	@ 0004248c 0270
.org 0x4248e
	b.n 0x42744	@ 0004248e 59e1
.org 0x42490
	ldrb r0, [r4, #18]	@ 00042490 a07c
.org 0x42492
	cmp r0, #16	@ 00042492 1028
.org 0x42494
	bls.n 0x424f2	@ 00042494 2dd9
.org 0x42496
	ldr r0, [r4, #84]	@ 00042496 606d
.org 0x42498
	movs r5, #128	@ 00042498 8025
.org 0x4249a
	lsls r5, r5, #3	@ 0004249a ed00
.org 0x4249c
	adds r0, r0, r5	@ 0004249c 4019
.org 0x4249e
	ldr r1, [r4, #88]	@ 0004249e a16d
.org 0x424a0
	adds r1, r1, r5	@ 000424a0 4919
.org 0x424a2
	bl 0x427fc	@ 000424a2 00f0abf9
.org 0x424a6
	lsls r0, r0, #16	@ 000424a6 0004
.org 0x424a8
	cmp r0, #0	@ 000424a8 0028
.org 0x424aa
	bne.n 0x424ec	@ 000424aa 1fd1
.org 0x424ac
	ldr r0, [r4, #84]	@ 000424ac 606d
.org 0x424ae
	adds r0, r0, r5	@ 000424ae 4019
.org 0x424b0
	ldr r1, [r4, #88]	@ 000424b0 a16d
.org 0x424b2
	ldr r2, [pc, #168]	@ 000424b2 2a4a
.org 0x424b4
	adds r1, r1, r2	@ 000424b4 8918
.org 0x424b6
	bl 0x427fc	@ 000424b6 00f0a1f9
.org 0x424ba
	lsls r0, r0, #16	@ 000424ba 0004
.org 0x424bc
	cmp r0, #0	@ 000424bc 0028
.org 0x424be
	bne.n 0x424ec	@ 000424be 15d1
.org 0x424c0
	ldr r0, [r4, #84]	@ 000424c0 606d
.org 0x424c2
	ldr r1, [pc, #152]	@ 000424c2 2649
.org 0x424c4
	adds r0, r0, r1	@ 000424c4 4018
.org 0x424c6
	ldr r1, [r4, #88]	@ 000424c6 a16d
.org 0x424c8
	adds r1, r1, r5	@ 000424c8 4919
.org 0x424ca
	bl 0x427fc	@ 000424ca 00f097f9
.org 0x424ce
	lsls r0, r0, #16	@ 000424ce 0004
.org 0x424d0
	cmp r0, #0	@ 000424d0 0028
.org 0x424d2
	bne.n 0x424ec	@ 000424d2 0bd1
.org 0x424d4
	ldr r0, [r4, #84]	@ 000424d4 606d
.org 0x424d6
	ldr r2, [pc, #132]	@ 000424d6 214a
.org 0x424d8
	adds r0, r0, r2	@ 000424d8 8018
.org 0x424da
	ldr r1, [r4, #88]	@ 000424da a16d
.org 0x424dc
	adds r1, r1, r2	@ 000424dc 8918
.org 0x424de
	bl 0x427fc	@ 000424de 00f08df9
.org 0x424e2
	lsls r0, r0, #16	@ 000424e2 0004
.org 0x424e4
	cmp r0, #0	@ 000424e4 0028
.org 0x424e6
	bne.n 0x424ec	@ 000424e6 01d1
.org 0x424e8
	movs r0, #16	@ 000424e8 1020
.org 0x424ea
	strb r0, [r4, #18]	@ 000424ea a074
.org 0x424ec
	ldrb r0, [r4, #18]	@ 000424ec a07c
.org 0x424ee
	cmp r0, #16	@ 000424ee 1028
.org 0x424f0
	bhi.n 0x4251e	@ 000424f0 15d8
.org 0x424f2
	ldrb r0, [r4, #18]	@ 000424f2 a07c
.org 0x424f4
	cmp r0, #16	@ 000424f4 1028
.org 0x424f6
	bne.n 0x4250c	@ 000424f6 09d1
.org 0x424f8
	adds r0, r4, #0	@ 000424f8 201c
.org 0x424fa
	bl 0x1ce54	@ 000424fa daf7abfc
.org 0x424fe
	adds r0, r4, #0	@ 000424fe 201c
.org 0x42500
	bl 0x1ceec	@ 00042500 daf7f4fc
.org 0x42504
	ldr r1, [pc, #88]	@ 00042504 1649
.org 0x42506
	adds r0, r4, #0	@ 00042506 201c
.org 0x42508
	bl 0x1cf00	@ 00042508 daf7fafc
.org 0x4250c
	ldrb r0, [r4, #18]	@ 0004250c a07c
.org 0x4250e
	lsls r0, r0, #4	@ 0004250e 0001
.org 0x42510
	adds r1, r4, #0	@ 00042510 211c
.org 0x42512
	adds r1, #80	@ 00042512 5031
.org 0x42514
	strh r0, [r1, #0]	@ 00042514 0880
.org 0x42516
	ldrb r0, [r4, #18]	@ 00042516 a07c
.org 0x42518
	lsls r0, r0, #4	@ 00042518 0001
.org 0x4251a
	adds r1, #2	@ 0004251a 0231
.org 0x4251c
	strh r0, [r1, #0]	@ 0004251c 0880
.org 0x4251e
	adds r0, r4, #0	@ 0004251e 201c
.org 0x42520
	bl 0x1cff0	@ 00042520 daf766fd
.org 0x42524
	ldr r1, [r4, #92]	@ 00042524 e16d
.org 0x42526
	cmp r1, #0	@ 00042526 0029
.org 0x42528
	beq.n 0x4252c	@ 00042528 00d0
.org 0x4252a
	b.n 0x42626	@ 0004252a 7ce0
.org 0x4252c
	ldr r0, [r4, #88]	@ 0004252c a06d
.org 0x4252e
	ldr r1, [r4, #96]	@ 0004252e 216e
.org 0x42530
	adds r1, r0, r1	@ 00042530 4118
.org 0x42532
	str r1, [r4, #88]	@ 00042532 a165
.org 0x42534
	ldr r0, [r4, #100]	@ 00042534 606e
.org 0x42536
	cmp r0, #0	@ 00042536 0028
.org 0x42538
	ble.n 0x42588	@ 00042538 26dd
.org 0x4253a
	ldr r0, [r4, #84]	@ 0004253a 606d
.org 0x4253c
	bl 0x8868	@ 0004253c c6f794f9
.org 0x42540
	ldr r2, [r4, #84]	@ 00042540 626d
.org 0x42542
	subs r0, r2, r0	@ 00042542 101a
.org 0x42544
	cmp r0, #0	@ 00042544 0028
.org 0x42546
	blt.n 0x42568	@ 00042546 0fdb
.org 0x42548
	ldr r1, [r4, #88]	@ 00042548 a16d
.org 0x4254a
	adds r0, r2, #0	@ 0004254a 101c
.org 0x4254c
	bl 0x8868	@ 0004254c c6f78cf9
.org 0x42550
	ldr r1, [r4, #84]	@ 00042550 616d
.org 0x42552
	subs r1, r1, r0	@ 00042552 091a
.org 0x42554
	ldr r0, [pc, #12]	@ 00042554 0348
.org 0x42556
	cmp r1, r0	@ 00042556 8142
.org 0x42558
	ble.n 0x4257a	@ 00042558 0fdd
.org 0x4255a
	b.n 0x425cc	@ 0004255a 37e0
.org 0x4255c
	.byte 0x00,0xfc,0xff,0xff	@ 0004255c data
.org 0x42560
	.byte 0x0e,0x81,0x00,0x00	@ 00042560 data
.org 0x42564
	.byte 0xff,0x03,0x00,0x00	@ 00042564 data
.org 0x42568
	ldr r1, [r4, #88]	@ 00042568 a16d
.org 0x4256a
	adds r0, r2, #0	@ 0004256a 101c
.org 0x4256c
	bl 0x8868	@ 0004256c c6f77cf9
.org 0x42570
	ldr r1, [r4, #84]	@ 00042570 616d
.org 0x42572
	subs r0, r0, r1	@ 00042572 401a
.org 0x42574
	ldr r1, [pc, #12]	@ 00042574 0349
.org 0x42576
	cmp r0, r1	@ 00042576 8842
.org 0x42578
	bgt.n 0x425cc	@ 00042578 28dc
.org 0x4257a
	ldr r0, [r4, #84]	@ 0004257a 606d
.org 0x4257c
	ldr r1, [r4, #88]	@ 0004257c a16d
.org 0x4257e
	bl 0x8868	@ 0004257e c6f773f9
.org 0x42582
	b.n 0x425ca	@ 00042582 22e0
.org 0x42584
	.byte 0xff,0x03,0x00,0x00	@ 00042584 data
.org 0x42588
	ldr r0, [r4, #84]	@ 00042588 606d
.org 0x4258a
	bl 0x8988	@ 0004258a c6f7fdf9
.org 0x4258e
	ldr r2, [r4, #84]	@ 0004258e 626d
.org 0x42590
	subs r0, r2, r0	@ 00042590 101a
.org 0x42592
	cmp r0, #0	@ 00042592 0028
.org 0x42594
	blt.n 0x425b0	@ 00042594 0cdb
.org 0x42596
	ldr r1, [r4, #88]	@ 00042596 a16d
.org 0x42598
	adds r0, r2, #0	@ 00042598 101c
.org 0x4259a
	bl 0x8988	@ 0004259a c6f7f5f9
.org 0x4259e
	ldr r1, [r4, #84]	@ 0004259e 616d
.org 0x425a0
	subs r1, r1, r0	@ 000425a0 091a
.org 0x425a2
	ldr r0, [pc, #8]	@ 000425a2 0248
.org 0x425a4
	cmp r1, r0	@ 000425a4 8142
.org 0x425a6
	ble.n 0x425c2	@ 000425a6 0cdd
.org 0x425a8
	b.n 0x425cc	@ 000425a8 10e0
.org 0x425aa
	.byte 0x00	@ 000425aa data
.org 0x425ab
	.byte 0x00	@ 000425ab data
.org 0x425ac
	.byte 0xff,0x03,0x00,0x00	@ 000425ac data
.org 0x425b0
	ldr r1, [r4, #88]	@ 000425b0 a16d
.org 0x425b2
	adds r0, r2, #0	@ 000425b2 101c
.org 0x425b4
	bl 0x8988	@ 000425b4 c6f7e8f9
.org 0x425b8
	ldr r1, [r4, #84]	@ 000425b8 616d
.org 0x425ba
	subs r0, r0, r1	@ 000425ba 401a
.org 0x425bc
	ldr r1, [pc, #48]	@ 000425bc 0c49
.org 0x425be
	cmp r0, r1	@ 000425be 8842
.org 0x425c0
	bgt.n 0x425cc	@ 000425c0 04dc
.org 0x425c2
	ldr r0, [r4, #84]	@ 000425c2 606d
.org 0x425c4
	ldr r1, [r4, #88]	@ 000425c4 a16d
.org 0x425c6
	bl 0x8988	@ 000425c6 c6f7dff9
.org 0x425ca
	str r0, [r4, #84]	@ 000425ca 6065
.org 0x425cc
	ldr r0, [r4, #84]	@ 000425cc 606d
.org 0x425ce
	ldr r1, [r4, #88]	@ 000425ce a16d
.org 0x425d0
	bl 0x427fc	@ 000425d0 00f014f9
.org 0x425d4
	lsls r0, r0, #16	@ 000425d4 0004
.org 0x425d6
	cmp r0, #0	@ 000425d6 0028
.org 0x425d8
	beq.n 0x425f4	@ 000425d8 0cd0
.org 0x425da
	ldr r0, [r4, #100]	@ 000425da 606e
.org 0x425dc
	lsls r0, r0, #10	@ 000425dc 8002
.org 0x425de
	negs r0, r0	@ 000425de 4042
.org 0x425e0
	str r0, [r4, #92]	@ 000425e0 e065
.org 0x425e2
	ldr r0, [r4, #96]	@ 000425e2 206e
.org 0x425e4
	cmp r0, #0	@ 000425e4 0028
.org 0x425e6
	bgt.n 0x4261c	@ 000425e6 19dc
.org 0x425e8
	movs r0, #1	@ 000425e8 0120
.org 0x425ea
	negs r0, r0	@ 000425ea 4042
.org 0x425ec
	b.n 0x4261e	@ 000425ec 17e0
.org 0x425ee
	.byte 0x00	@ 000425ee data
.org 0x425ef
	.byte 0x00	@ 000425ef data
.org 0x425f0
	.byte 0xff,0x03,0x00,0x00	@ 000425f0 data
.org 0x425f4
	ldr r1, [r4, #100]	@ 000425f4 616e
.org 0x425f6
	lsls r1, r1, #8	@ 000425f6 0902
.org 0x425f8
	ldr r0, [r4, #84]	@ 000425f8 606d
.org 0x425fa
	adds r0, r0, r1	@ 000425fa 4018
.org 0x425fc
	ldr r1, [r4, #88]	@ 000425fc a16d
.org 0x425fe
	bl 0x427fc	@ 000425fe 00f0fdf8
.org 0x42602
	lsls r0, r0, #16	@ 00042602 0004
.org 0x42604
	cmp r0, #0	@ 00042604 0028
.org 0x42606
	beq.n 0x4260a	@ 00042606 00d0
.org 0x42608
	b.n 0x4270e	@ 00042608 81e0
.org 0x4260a
	ldr r0, [r4, #100]	@ 0004260a 606e
.org 0x4260c
	lsls r0, r0, #10	@ 0004260c 8002
.org 0x4260e
	str r0, [r4, #92]	@ 0004260e e065
.org 0x42610
	ldr r0, [r4, #96]	@ 00042610 206e
.org 0x42612
	cmp r0, #0	@ 00042612 0028
.org 0x42614
	ble.n 0x4261c	@ 00042614 02dd
.org 0x42616
	movs r0, #1	@ 00042616 0120
.org 0x42618
	negs r0, r0	@ 00042618 4042
.org 0x4261a
	b.n 0x4261e	@ 0004261a 00e0
.org 0x4261c
	movs r0, #1	@ 0004261c 0120
.org 0x4261e
	str r0, [r4, #104]	@ 0004261e a066
.org 0x42620
	movs r0, #0	@ 00042620 0020
.org 0x42622
	str r0, [r4, #96]	@ 00042622 2066
.org 0x42624
	b.n 0x4270e	@ 00042624 73e0
.org 0x42626
	ldr r0, [r4, #84]	@ 00042626 606d
.org 0x42628
	adds r2, r0, r1	@ 00042628 4218
.org 0x4262a
	str r2, [r4, #84]	@ 0004262a 6265
.org 0x4262c
	ldr r0, [r4, #104]	@ 0004262c a06e
.org 0x4262e
	cmp r0, #0	@ 0004262e 0028
.org 0x42630
	ble.n 0x42678	@ 00042630 22dd
.org 0x42632
	ldr r1, [r4, #88]	@ 00042632 a16d
.org 0x42634
	adds r0, r2, #0	@ 00042634 101c
.org 0x42636
	bl 0x8534	@ 00042636 c5f77dff
.org 0x4263a
	ldr r1, [r4, #88]	@ 0004263a a16d
.org 0x4263c
	subs r0, r1, r0	@ 0004263c 081a
.org 0x4263e
	cmp r0, #0	@ 0004263e 0028
.org 0x42640
	blt.n 0x42658	@ 00042640 0adb
.org 0x42642
	ldr r0, [r4, #84]	@ 00042642 606d
.org 0x42644
	bl 0x8534	@ 00042644 c5f776ff
.org 0x42648
	ldr r1, [r4, #88]	@ 00042648 a16d
.org 0x4264a
	subs r1, r1, r0	@ 0004264a 091a
.org 0x4264c
	ldr r0, [pc, #4]	@ 0004264c 0148
.org 0x4264e
	cmp r1, r0	@ 0004264e 8142
.org 0x42650
	ble.n 0x42668	@ 00042650 0add
.org 0x42652
	b.n 0x426ba	@ 00042652 32e0
.org 0x42654
	.byte 0xff,0x03,0x00,0x00	@ 00042654 data
.org 0x42658
	ldr r0, [r4, #84]	@ 00042658 606d
.org 0x4265a
	bl 0x8534	@ 0004265a c5f76bff
.org 0x4265e
	ldr r1, [r4, #88]	@ 0004265e a16d
.org 0x42660
	subs r0, r0, r1	@ 00042660 401a
.org 0x42662
	ldr r1, [pc, #16]	@ 00042662 0449
.org 0x42664
	cmp r0, r1	@ 00042664 8842
.org 0x42666
	bgt.n 0x426ba	@ 00042666 28dc
.org 0x42668
	ldr r0, [r4, #84]	@ 00042668 606d
.org 0x4266a
	ldr r1, [r4, #88]	@ 0004266a a16d
.org 0x4266c
	bl 0x8534	@ 0004266c c5f762ff
.org 0x42670
	b.n 0x426b8	@ 00042670 22e0
.org 0x42672
	.byte 0x00	@ 00042672 data
.org 0x42673
	.byte 0x00	@ 00042673 data
.org 0x42674
	.byte 0xff,0x03,0x00,0x00	@ 00042674 data
.org 0x42678
	ldr r1, [r4, #88]	@ 00042678 a16d
.org 0x4267a
	adds r0, r2, #0	@ 0004267a 101c
.org 0x4267c
	bl 0x8748	@ 0004267c c6f764f8
.org 0x42680
	ldr r1, [r4, #88]	@ 00042680 a16d
.org 0x42682
	subs r0, r1, r0	@ 00042682 081a
.org 0x42684
	cmp r0, #0	@ 00042684 0028
.org 0x42686
	blt.n 0x426a0	@ 00042686 0bdb
.org 0x42688
	ldr r0, [r4, #84]	@ 00042688 606d
.org 0x4268a
	bl 0x8748	@ 0004268a c6f75df8
.org 0x4268e
	ldr r1, [r4, #88]	@ 0004268e a16d
.org 0x42690
	subs r1, r1, r0	@ 00042690 091a
.org 0x42692
	ldr r0, [pc, #8]	@ 00042692 0248
.org 0x42694
	cmp r1, r0	@ 00042694 8142
.org 0x42696
	ble.n 0x426b0	@ 00042696 0bdd
.org 0x42698
	b.n 0x426ba	@ 00042698 0fe0
.org 0x4269a
	.byte 0x00	@ 0004269a data
.org 0x4269b
	.byte 0x00	@ 0004269b data
.org 0x4269c
	.byte 0xff,0x03,0x00,0x00	@ 0004269c data
.org 0x426a0
	ldr r0, [r4, #84]	@ 000426a0 606d
.org 0x426a2
	bl 0x8748	@ 000426a2 c6f751f8
.org 0x426a6
	ldr r1, [r4, #88]	@ 000426a6 a16d
.org 0x426a8
	subs r0, r0, r1	@ 000426a8 401a
.org 0x426aa
	ldr r1, [pc, #48]	@ 000426aa 0c49
.org 0x426ac
	cmp r0, r1	@ 000426ac 8842
.org 0x426ae
	bgt.n 0x426ba	@ 000426ae 04dc
.org 0x426b0
	ldr r0, [r4, #84]	@ 000426b0 606d
.org 0x426b2
	ldr r1, [r4, #88]	@ 000426b2 a16d
.org 0x426b4
	bl 0x8748	@ 000426b4 c6f748f8
.org 0x426b8
	str r0, [r4, #88]	@ 000426b8 a065
.org 0x426ba
	ldr r0, [r4, #84]	@ 000426ba 606d
.org 0x426bc
	ldr r1, [r4, #88]	@ 000426bc a16d
.org 0x426be
	bl 0x427fc	@ 000426be 00f09df8
.org 0x426c2
	lsls r0, r0, #16	@ 000426c2 0004
.org 0x426c4
	cmp r0, #0	@ 000426c4 0028
.org 0x426c6
	beq.n 0x426e0	@ 000426c6 0bd0
.org 0x426c8
	ldr r0, [r4, #104]	@ 000426c8 a06e
.org 0x426ca
	lsls r0, r0, #10	@ 000426ca 8002
.org 0x426cc
	negs r0, r0	@ 000426cc 4042
.org 0x426ce
	str r0, [r4, #96]	@ 000426ce 2066
.org 0x426d0
	ldr r0, [r4, #92]	@ 000426d0 e06d
.org 0x426d2
	cmp r0, #0	@ 000426d2 0028
.org 0x426d4
	bgt.n 0x42706	@ 000426d4 17dc
.org 0x426d6
	movs r0, #1	@ 000426d6 0120
.org 0x426d8
	negs r0, r0	@ 000426d8 4042
.org 0x426da
	b.n 0x42708	@ 000426da 15e0
.org 0x426dc
	.byte 0xff,0x03,0x00,0x00	@ 000426dc data
.org 0x426e0
	ldr r0, [r4, #84]	@ 000426e0 606d
.org 0x426e2
	ldr r2, [r4, #104]	@ 000426e2 a26e
.org 0x426e4
	lsls r2, r2, #8	@ 000426e4 1202
.org 0x426e6
	ldr r1, [r4, #88]	@ 000426e6 a16d
.org 0x426e8
	adds r1, r1, r2	@ 000426e8 8918
.org 0x426ea
	bl 0x427fc	@ 000426ea 00f087f8
.org 0x426ee
	lsls r0, r0, #16	@ 000426ee 0004
.org 0x426f0
	cmp r0, #0	@ 000426f0 0028
.org 0x426f2
	bne.n 0x4270e	@ 000426f2 0cd1
.org 0x426f4
	ldr r0, [r4, #104]	@ 000426f4 a06e
.org 0x426f6
	lsls r0, r0, #10	@ 000426f6 8002
.org 0x426f8
	str r0, [r4, #96]	@ 000426f8 2066
.org 0x426fa
	ldr r0, [r4, #92]	@ 000426fa e06d
.org 0x426fc
	cmp r0, #0	@ 000426fc 0028
.org 0x426fe
	ble.n 0x42706	@ 000426fe 02dd
.org 0x42700
	movs r0, #1	@ 00042700 0120
.org 0x42702
	negs r0, r0	@ 00042702 4042
.org 0x42704
	b.n 0x42708	@ 00042704 00e0
.org 0x42706
	movs r0, #1	@ 00042706 0120
.org 0x42708
	str r0, [r4, #100]	@ 00042708 6066
.org 0x4270a
	movs r0, #0	@ 0004270a 0020
.org 0x4270c
	str r0, [r4, #92]	@ 0004270c e065
.org 0x4270e
	ldrb r0, [r4, #18]	@ 0004270e a07c
.org 0x42710
	subs r0, #1	@ 00042710 0138
.org 0x42712
	movs r3, #0	@ 00042712 0023
.org 0x42714
	strb r0, [r4, #18]	@ 00042714 a074
.org 0x42716
	lsls r0, r0, #24	@ 00042716 0006
.org 0x42718
	lsrs r0, r0, #24	@ 00042718 000e
.org 0x4271a
	adds r2, r4, #0	@ 0004271a 221c
.org 0x4271c
	adds r2, #140	@ 0004271c 8c32
.org 0x4271e
	cmp r0, #255	@ 0004271e ff28
.org 0x42720
	beq.n 0x4272c	@ 00042720 04d0
.org 0x42722
	ldr r0, [r2, #0]	@ 00042722 1068
.org 0x42724
	movs r1, #4	@ 00042724 0421
.org 0x42726
	ands r0, r1	@ 00042726 0840
.org 0x42728
	cmp r0, #0	@ 00042728 0028
.org 0x4272a
	beq.n 0x4275e	@ 0004272a 18d0
.org 0x4272c
	ldrb r1, [r4, #10]	@ 0004272c a17a
.org 0x4272e
	movs r0, #254	@ 0004272e fe20
.org 0x42730
	ands r0, r1	@ 00042730 0840
.org 0x42732
	movs r1, #253	@ 00042732 fd21
