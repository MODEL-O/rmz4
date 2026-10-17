@ FUN_080794d0  entry 0x080794d0  size 1356
.thumb
.org 0x794d0
FUN_080794d0:
	push {r4, r5, r6, r7, lr}	@ 000794d0 f0b5
.org 0x794d2
	mov r7, sl	@ 000794d2 5746
.org 0x794d4
	mov r6, r9	@ 000794d4 4e46
.org 0x794d6
	mov r5, r8	@ 000794d6 4546
.org 0x794d8
	push {r5, r6, r7}	@ 000794d8 e0b4
.org 0x794da
	sub sp, #48	@ 000794da 8cb0
.org 0x794dc
	adds r7, r0, #0	@ 000794dc 071c
.org 0x794de
	ldrb r4, [r7, #14]	@ 000794de bc7b
.org 0x794e0
	cmp r4, #0	@ 000794e0 002c
.org 0x794e2
	bne.n 0x7954a	@ 000794e2 32d1
.org 0x794e4
	ldr r1, [pc, #144]	@ 000794e4 2449
.org 0x794e6
	bl 0x1cf00	@ 000794e6 a3f70bfd
.org 0x794ea
	adds r0, r7, #0	@ 000794ea 381c
.org 0x794ec
	adds r0, #140	@ 000794ec 8c30
.org 0x794ee
	str r4, [r0, #0]	@ 000794ee 0460
.org 0x794f0
	adds r0, #4	@ 000794f0 0430
.org 0x794f2
	str r4, [r0, #0]	@ 000794f2 0460
.org 0x794f4
	adds r0, #4	@ 000794f4 0430
.org 0x794f6
	strb r4, [r0, #0]	@ 000794f6 0470
.org 0x794f8
	ldrb r1, [r7, #10]	@ 000794f8 b97a
.org 0x794fa
	movs r0, #251	@ 000794fa fb20
.org 0x794fc
	ands r0, r1	@ 000794fc 0840
.org 0x794fe
	strb r0, [r7, #10]	@ 000794fe b872
.org 0x79500
	ldr r3, [pc, #120]	@ 00079500 1e4b
.org 0x79502
	ldrh r2, [r3, #8]	@ 00079502 1a89
.org 0x79504
	movs r4, #1	@ 00079504 0124
.org 0x79506
	adds r0, r4, #0	@ 00079506 201c
.org 0x79508
	ands r0, r2	@ 00079508 1040
.org 0x7950a
	cmp r0, #0	@ 0007950a 0028
.org 0x7950c
	beq.n 0x79522	@ 0007950c 09d0
.org 0x7950e
	ldrb r1, [r3, #18]	@ 0007950e 997c
.org 0x79510
	adds r0, r4, #0	@ 00079510 201c
.org 0x79512
	ands r0, r1	@ 00079512 0840
.org 0x79514
	cmp r0, #0	@ 00079514 0028
.org 0x79516
	bne.n 0x79522	@ 00079516 04d1
.org 0x79518
	ldr r0, [pc, #100]	@ 00079518 1948
.org 0x7951a
	ands r0, r2	@ 0007951a 1040
.org 0x7951c
	movs r1, #16	@ 0007951c 1021
.org 0x7951e
	orrs r0, r1	@ 0007951e 0843
.org 0x79520
	strh r0, [r3, #8]	@ 00079520 1881
.org 0x79522
	movs r0, #16	@ 00079522 1020
.org 0x79524
	strb r0, [r7, #18]	@ 00079524 b874
.org 0x79526
	strb r0, [r7, #19]	@ 00079526 f874
.org 0x79528
	adds r1, r7, #0	@ 00079528 391c
.org 0x7952a
	adds r1, #222	@ 0007952a de31
.org 0x7952c
	movs r0, #64	@ 0007952c 4020
.org 0x7952e
	strb r0, [r1, #0]	@ 0007952e 0870
.org 0x79530
	movs r0, #136	@ 00079530 8820
.org 0x79532
	bl 0x2624	@ 00079532 89f777f8
.org 0x79536
	movs r0, #172	@ 00079536 ac20
.org 0x79538
	lsls r0, r0, #1	@ 00079538 4000
.org 0x7953a
	bl 0x2b10	@ 0007953a 89f7e9fa
.org 0x7953e
	adds r0, r7, #0	@ 0007953e 381c
.org 0x79540
	bl 0x1c53c	@ 00079540 a2f7fcff
.org 0x79544
	ldrb r0, [r7, #14]	@ 00079544 b87b
.org 0x79546
	adds r0, #1	@ 00079546 0130
.org 0x79548
	strb r0, [r7, #14]	@ 00079548 b873
.org 0x7954a
	ldrb r0, [r7, #15]	@ 0007954a f87b
.org 0x7954c
	cmp r0, #0	@ 0007954c 0028
.org 0x7954e
	bne.n 0x79588	@ 0007954e 1bd1
.org 0x79550
	adds r4, r7, #0	@ 00079550 3c1c
.org 0x79552
	adds r4, #222	@ 00079552 de34
.org 0x79554
	ldrb r0, [r4, #0]	@ 00079554 2078
.org 0x79556
	subs r0, #1	@ 00079556 0138
.org 0x79558
	strb r0, [r4, #0]	@ 00079558 2070
.org 0x7955a
	lsls r0, r0, #24	@ 0007955a 0006
.org 0x7955c
	lsrs r0, r0, #24	@ 0007955c 000e
.org 0x7955e
	adds r5, r7, #0	@ 0007955e 3d1c
.org 0x79560
	adds r5, #140	@ 00079560 8c35
.org 0x79562
	adds r6, r7, #0	@ 00079562 3e1c
.org 0x79564
	adds r6, #144	@ 00079564 9036
.org 0x79566
	cmp r0, #255	@ 00079566 ff28
.org 0x79568
	bne.n 0x795d6	@ 00079568 35d1
.org 0x7956a
	ldr r1, [pc, #24]	@ 0007956a 0649
.org 0x7956c
	adds r0, r7, #0	@ 0007956c 381c
.org 0x7956e
	bl 0x1cf00	@ 0007956e a3f7c7fc
.org 0x79572
	movs r0, #64	@ 00079572 4020
.org 0x79574
	strb r0, [r4, #0]	@ 00079574 2070
.org 0x79576
	b.n 0x795d0	@ 00079576 2be0
.org 0x79578
	.byte 0x08,0xb1,0x00,0x00	@ 00079578 data
.org 0x7957c
	.byte 0x10,0xe9,0x02,0x02	@ 0007957c data
.org 0x79580
	.byte 0xfe,0xff,0x00,0x00	@ 00079580 data
.org 0x79584
	.byte 0x09,0xb1,0x00,0x00	@ 00079584 data
.org 0x79588
	adds r5, r7, #0	@ 00079588 3d1c
.org 0x7958a
	adds r5, #140	@ 0007958a 8c35
.org 0x7958c
	adds r6, r7, #0	@ 0007958c 3e1c
.org 0x7958e
	adds r6, #144	@ 0007958e 9036
.org 0x79590
	cmp r0, #1	@ 00079590 0128
.org 0x79592
	bne.n 0x795d6	@ 00079592 20d1
.org 0x79594
	adds r1, r7, #0	@ 00079594 391c
.org 0x79596
	adds r1, #222	@ 00079596 de31
.org 0x79598
	ldrb r0, [r1, #0]	@ 00079598 0878
.org 0x7959a
	subs r0, #1	@ 0007959a 0138
.org 0x7959c
	strb r0, [r1, #0]	@ 0007959c 0870
.org 0x7959e
	lsls r0, r0, #24	@ 0007959e 0006
.org 0x795a0
	lsrs r0, r0, #24	@ 000795a0 000e
.org 0x795a2
	cmp r0, #255	@ 000795a2 ff28
.org 0x795a4
	bne.n 0x795d6	@ 000795a4 17d1
.org 0x795a6
	ldr r1, [pc, #132]	@ 000795a6 2149
.org 0x795a8
	adds r0, r7, #0	@ 000795a8 381c
.org 0x795aa
	bl 0x1cf00	@ 000795aa a3f7a9fc
.org 0x795ae
	movs r4, #0	@ 000795ae 0024
.org 0x795b0
	movs r0, #84	@ 000795b0 5420
.org 0x795b2
	adds r0, r0, r7	@ 000795b2 c019
.org 0x795b4
	mov r8, r0	@ 000795b4 8046
.org 0x795b6
	mov r0, r8	@ 000795b6 4046
.org 0x795b8
	movs r1, #4	@ 000795b8 0421
.org 0x795ba
	movs r2, #0	@ 000795ba 0022
.org 0x795bc
	bl 0xe41b8	@ 000795bc 6af0fcfd
.org 0x795c0
	adds r0, r4, #1	@ 000795c0 601c
.org 0x795c2
	lsls r0, r0, #24	@ 000795c2 0006
.org 0x795c4
	lsrs r4, r0, #24	@ 000795c4 040e
.org 0x795c6
	cmp r4, #23	@ 000795c6 172c
.org 0x795c8
	bls.n 0x795b6	@ 000795c8 f5d9
.org 0x795ca
	ldr r0, [pc, #100]	@ 000795ca 1948
.org 0x795cc
	bl 0x2b10	@ 000795cc 89f7a0fa
.org 0x795d0
	ldrb r0, [r7, #15]	@ 000795d0 f87b
.org 0x795d2
	adds r0, #1	@ 000795d2 0130
.org 0x795d4
	strb r0, [r7, #15]	@ 000795d4 f873
.org 0x795d6
	adds r0, r7, #0	@ 000795d6 381c
.org 0x795d8
	bl 0x1cff0	@ 000795d8 a3f70afd
.org 0x795dc
	ldrb r4, [r7, #13]	@ 000795dc 7c7b
.org 0x795de
	cmp r4, #0	@ 000795de 002c
.org 0x795e0
	bne.n 0x7964e	@ 000795e0 35d1
.org 0x795e2
	ldr r0, [r5, #0]	@ 000795e2 2868
.org 0x795e4
	movs r1, #2	@ 000795e4 0221
.org 0x795e6
	negs r1, r1	@ 000795e6 4942
.org 0x795e8
	ands r0, r1	@ 000795e8 0840
.org 0x795ea
	str r0, [r5, #0]	@ 000795ea 2860
.org 0x795ec
	ldr r0, [r6, #0]	@ 000795ec 3068
.org 0x795ee
	ands r0, r1	@ 000795ee 0840
.org 0x795f0
	str r0, [r6, #0]	@ 000795f0 3060
.org 0x795f2
	adds r0, r7, #0	@ 000795f2 381c
.org 0x795f4
	bl 0x1d330	@ 000795f4 a3f79cfe
.org 0x795f8
	ldrb r0, [r7, #19]	@ 000795f8 f87c
.org 0x795fa
	subs r0, #1	@ 000795fa 0138
.org 0x795fc
	strb r0, [r7, #19]	@ 000795fc f874
.org 0x795fe
	movs r1, #255	@ 000795fe ff21
.org 0x79600
	lsls r0, r0, #24	@ 00079600 0006
.org 0x79602
	lsrs r0, r0, #24	@ 00079602 000e
.org 0x79604
	cmp r0, #255	@ 00079604 ff28
.org 0x79606
	beq.n 0x7960a	@ 00079606 00d0
.org 0x79608
	b.n 0x79a34	@ 00079608 14e2
.org 0x7960a
	ldrb r0, [r7, #18]	@ 0007960a b87c
.org 0x7960c
	subs r0, #1	@ 0007960c 0138
.org 0x7960e
	strb r0, [r7, #18]	@ 0007960e b874
.org 0x79610
	ands r0, r1	@ 00079610 0840
.org 0x79612
	cmp r0, #0	@ 00079612 0028
.org 0x79614
	bne.n 0x79634	@ 00079614 0ed1
.org 0x79616
	movs r0, #180	@ 00079616 b420
.org 0x79618
	strb r0, [r7, #18]	@ 00079618 b874
.org 0x7961a
	strb r4, [r7, #19]	@ 0007961a fc74
.org 0x7961c
	adds r1, r7, #0	@ 0007961c 391c
.org 0x7961e
	adds r1, #180	@ 0007961e b431
.org 0x79620
	movs r0, #16	@ 00079620 1020
.org 0x79622
	strh r0, [r1, #40]	@ 00079622 0885
.org 0x79624
	movs r0, #83	@ 00079624 5320
.org 0x79626
	bl 0x2b10	@ 00079626 89f773fa
.org 0x7962a
	b.n 0x79864	@ 0007962a 1be1
.org 0x7962c
	.byte 0x0a,0xb1,0x00,0x00	@ 0007962c data
.org 0x79630
	.byte 0x83,0x01,0x00,0x00	@ 00079630 data
.org 0x79634
	ldr r0, [r5, #0]	@ 00079634 2868
.org 0x79636
	movs r1, #1	@ 00079636 0121
.org 0x79638
	orrs r0, r1	@ 00079638 0843
.org 0x7963a
	str r0, [r5, #0]	@ 0007963a 2860
.org 0x7963c
	ldr r0, [r6, #0]	@ 0007963c 3068
.org 0x7963e
	orrs r0, r1	@ 0007963e 0843
.org 0x79640
	str r0, [r6, #0]	@ 00079640 3060
.org 0x79642
	adds r0, r7, #0	@ 00079642 381c
.org 0x79644
	bl 0x1d3fc	@ 00079644 a3f7dafe
.org 0x79648
	ldrb r0, [r7, #18]	@ 00079648 b87c
.org 0x7964a
	strb r0, [r7, #19]	@ 0007964a f874
.org 0x7964c
	b.n 0x79a34	@ 0007964c f2e1
.org 0x7964e
	cmp r4, #1	@ 0007964e 012c
.org 0x79650
	beq.n 0x79654	@ 00079650 00d0
.org 0x79652
	b.n 0x7987c	@ 00079652 13e1
.org 0x79654
	ldrb r1, [r7, #18]	@ 00079654 b97c
.org 0x79656
	cmp r1, #119	@ 00079656 7729
.org 0x79658
	bhi.n 0x7969a	@ 00079658 1fd8
.org 0x7965a
	adds r2, r7, #0	@ 0007965a 3a1c
.org 0x7965c
	adds r2, #180	@ 0007965c b432
.org 0x7965e
	movs r0, #8	@ 0007965e 0820
.org 0x79660
	strh r0, [r2, #40]	@ 00079660 1085
.org 0x79662
	ldrb r1, [r7, #18]	@ 00079662 b97c
.org 0x79664
	adds r0, r4, #0	@ 00079664 201c
.org 0x79666
	ands r0, r1	@ 00079666 0840
.org 0x79668
	mov sl, r2	@ 00079668 9246
.org 0x7966a
	cmp r0, #0	@ 0007966a 0028
.org 0x7966c
	beq.n 0x79686	@ 0007966c 0bd0
.org 0x7966e
	ldr r0, [r5, #0]	@ 0007966e 2868
.org 0x79670
	movs r1, #2	@ 00079670 0221
.org 0x79672
	negs r1, r1	@ 00079672 4942
.org 0x79674
	ands r0, r1	@ 00079674 0840
.org 0x79676
	str r0, [r5, #0]	@ 00079676 2860
.org 0x79678
	ldr r0, [r6, #0]	@ 00079678 3068
.org 0x7967a
	ands r0, r1	@ 0007967a 0840
.org 0x7967c
	str r0, [r6, #0]	@ 0007967c 3060
.org 0x7967e
	adds r0, r7, #0	@ 0007967e 381c
.org 0x79680
	bl 0x1d330	@ 00079680 a3f756fe
.org 0x79684
	b.n 0x796d8	@ 00079684 28e0
.org 0x79686
	ldr r0, [r5, #0]	@ 00079686 2868
.org 0x79688
	orrs r0, r4	@ 00079688 2043
.org 0x7968a
	str r0, [r5, #0]	@ 0007968a 2860
.org 0x7968c
	ldr r0, [r6, #0]	@ 0007968c 3068
.org 0x7968e
	orrs r0, r4	@ 0007968e 2043
.org 0x79690
	str r0, [r6, #0]	@ 00079690 3060
.org 0x79692
	adds r0, r7, #0	@ 00079692 381c
.org 0x79694
	bl 0x1d3fc	@ 00079694 a3f7b2fe
.org 0x79698
	b.n 0x796d8	@ 00079698 1ee0
.org 0x7969a
	movs r0, #3	@ 0007969a 0320
.org 0x7969c
	ands r0, r1	@ 0007969c 0840
.org 0x7969e
	cmp r0, #0	@ 0007969e 0028
.org 0x796a0
	beq.n 0x796c0	@ 000796a0 0ed0
.org 0x796a2
	ldr r0, [r5, #0]	@ 000796a2 2868
.org 0x796a4
	movs r1, #2	@ 000796a4 0221
.org 0x796a6
	negs r1, r1	@ 000796a6 4942
.org 0x796a8
	ands r0, r1	@ 000796a8 0840
.org 0x796aa
	str r0, [r5, #0]	@ 000796aa 2860
.org 0x796ac
	ldr r0, [r6, #0]	@ 000796ac 3068
.org 0x796ae
	ands r0, r1	@ 000796ae 0840
.org 0x796b0
	str r0, [r6, #0]	@ 000796b0 3060
.org 0x796b2
	adds r0, r7, #0	@ 000796b2 381c
.org 0x796b4
	bl 0x1d330	@ 000796b4 a3f73cfe
.org 0x796b8
	movs r1, #180	@ 000796b8 b421
.org 0x796ba
	adds r1, r1, r7	@ 000796ba c919
.org 0x796bc
	mov sl, r1	@ 000796bc 8a46
.org 0x796be
	b.n 0x796d8	@ 000796be 0be0
.org 0x796c0
	ldr r0, [r5, #0]	@ 000796c0 2868
.org 0x796c2
	orrs r0, r4	@ 000796c2 2043
.org 0x796c4
	str r0, [r5, #0]	@ 000796c4 2860
.org 0x796c6
	ldr r0, [r6, #0]	@ 000796c6 3068
.org 0x796c8
	orrs r0, r4	@ 000796c8 2043
.org 0x796ca
	str r0, [r6, #0]	@ 000796ca 3060
.org 0x796cc
	adds r0, r7, #0	@ 000796cc 381c
.org 0x796ce
	bl 0x1d3fc	@ 000796ce a3f795fe
.org 0x796d2
	movs r2, #180	@ 000796d2 b422
.org 0x796d4
	adds r2, r2, r7	@ 000796d4 d219
.org 0x796d6
	mov sl, r2	@ 000796d6 9246
.org 0x796d8
	ldrb r0, [r7, #18]	@ 000796d8 b87c
.org 0x796da
	mov r2, sl	@ 000796da 5246
.org 0x796dc
	ldrh r1, [r2, #40]	@ 000796dc 118d
.org 0x796de
	bl 0x129050	@ 000796de aff0b7fc
.org 0x796e2
	cmp r0, #0	@ 000796e2 0028
.org 0x796e4
	bne.n 0x79768	@ 000796e4 40d1
.org 0x796e6
	ldr r5, [pc, #388]	@ 000796e6 614d
.org 0x796e8
	ldr r0, [r5, #0]	@ 000796e8 2868
.org 0x796ea
	ldr r1, [pc, #388]	@ 000796ea 6149
.org 0x796ec
	mov r9, r1	@ 000796ec 8946
.org 0x796ee
	mov r2, r9	@ 000796ee 4a46
.org 0x796f0
	muls r2, r0	@ 000796f0 4243
.org 0x796f2
	adds r0, r2, #0	@ 000796f2 101c
.org 0x796f4
	ldr r6, [pc, #380]	@ 000796f4 5f4e
.org 0x796f6
	adds r0, r0, r6	@ 000796f6 8019
.org 0x796f8
	lsls r0, r0, #1	@ 000796f8 4000
.org 0x796fa
	lsrs r1, r0, #1	@ 000796fa 4108
.org 0x796fc
	mov r8, r1	@ 000796fc 8846
.org 0x796fe
	str r1, [r5, #0]	@ 000796fe 2960
.org 0x79700
	lsrs r0, r0, #17	@ 00079700 400c
.org 0x79702
	movs r1, #48	@ 00079702 3021
.org 0x79704
	bl 0x129198	@ 00079704 aff048fd
.org 0x79708
	movs r4, #24	@ 00079708 1824
.org 0x7970a
	subs r0, r4, r0	@ 0007970a 201a
.org 0x7970c
	lsls r0, r0, #8	@ 0007970c 0002
.org 0x7970e
	ldr r1, [r7, #84]	@ 0007970e 796d
.org 0x79710
	adds r1, r1, r0	@ 00079710 0918
.org 0x79712
	str r1, [sp, #0]	@ 00079712 0091
.org 0x79714
	mov r2, r9	@ 00079714 4a46
.org 0x79716
	mov r0, r8	@ 00079716 4046
.org 0x79718
	muls r0, r2	@ 00079718 5043
.org 0x7971a
	adds r0, r0, r6	@ 0007971a 8019
.org 0x7971c
	lsls r0, r0, #1	@ 0007971c 4000
.org 0x7971e
	lsrs r1, r0, #1	@ 0007971e 4108
.org 0x79720
	mov r8, r1	@ 00079720 8846
.org 0x79722
	str r1, [r5, #0]	@ 00079722 2960
.org 0x79724
	lsrs r0, r0, #17	@ 00079724 400c
.org 0x79726
	movs r1, #48	@ 00079726 3021
.org 0x79728
	bl 0x129198	@ 00079728 aff036fd
.org 0x7972c
	subs r4, r4, r0	@ 0007972c 241a
.org 0x7972e
	lsls r4, r4, #8	@ 0007972e 2402
.org 0x79730
	ldr r0, [r7, #88]	@ 00079730 b86d
.org 0x79732
	adds r0, r0, r4	@ 00079732 0019
.org 0x79734
	str r0, [sp, #4]	@ 00079734 0190
.org 0x79736
	mov r2, r9	@ 00079736 4a46
.org 0x79738
	mov r1, r8	@ 00079738 4146
.org 0x7973a
	muls r1, r2	@ 0007973a 5143
.org 0x7973c
	adds r1, r1, r6	@ 0007973c 8919
.org 0x7973e
	lsls r1, r1, #1	@ 0007973e 4900
.org 0x79740
	lsrs r0, r1, #1	@ 00079740 4808
.org 0x79742
	str r0, [r5, #0]	@ 00079742 2860
.org 0x79744
	lsrs r1, r1, #17	@ 00079744 490c
.org 0x79746
	movs r0, #63	@ 00079746 3f20
.org 0x79748
	ands r1, r0	@ 00079748 0140
.org 0x7974a
	ldrb r0, [r7, #19]	@ 0007974a f87c
.org 0x7974c
	adds r1, r1, r0	@ 0007974c 0918
.org 0x7974e
	lsls r1, r1, #24	@ 0007974e 0906
.org 0x79750
	lsrs r1, r1, #24	@ 00079750 090e
.org 0x79752
	movs r2, #224	@ 00079752 e022
.org 0x79754
	lsls r2, r2, #1	@ 00079754 5200
.org 0x79756
	mov r0, sp	@ 00079756 6846
.org 0x79758
	bl 0xe1b14	@ 00079758 68f0dcf9
.org 0x7975c
	movs r0, #53	@ 0007975c 3520
.org 0x7975e
	bl 0x2b10	@ 0007975e 89f7d7f9
.org 0x79762
	ldrb r0, [r7, #19]	@ 00079762 f87c
.org 0x79764
	adds r0, #64	@ 00079764 4030
.org 0x79766
	strb r0, [r7, #19]	@ 00079766 f874
.org 0x79768
	ldrb r0, [r7, #18]	@ 00079768 b87c
.org 0x7976a
	mov r1, sl	@ 0007976a 5146
.org 0x7976c
	ldrh r4, [r1, #40]	@ 0007976c 0c8d
.org 0x7976e
	adds r1, r4, #0	@ 0007976e 211c
.org 0x79770
	bl 0x129050	@ 00079770 aff06efc
.org 0x79774
	lsrs r4, r4, #1	@ 00079774 6408
.org 0x79776
	cmp r0, r4	@ 00079776 a042
.org 0x79778
	bne.n 0x797da	@ 00079778 2fd1
.org 0x7977a
	ldr r5, [pc, #240]	@ 0007977a 3c4d
.org 0x7977c
	ldr r0, [r5, #0]	@ 0007977c 2868
.org 0x7977e
	ldr r2, [pc, #240]	@ 0007977e 3c4a
.org 0x79780
	mov r9, r2	@ 00079780 9146
.org 0x79782
	mov r1, r9	@ 00079782 4946
.org 0x79784
	muls r1, r0	@ 00079784 4143
.org 0x79786
	adds r0, r1, #0	@ 00079786 081c
.org 0x79788
	ldr r2, [pc, #232]	@ 00079788 3a4a
.org 0x7978a
	mov r8, r2	@ 0007978a 9046
.org 0x7978c
	add r0, r8	@ 0007978c 4044
.org 0x7978e
	lsls r0, r0, #1	@ 0007978e 4000
.org 0x79790
	lsrs r6, r0, #1	@ 00079790 4608
.org 0x79792
	str r6, [r5, #0]	@ 00079792 2e60
.org 0x79794
	lsrs r0, r0, #17	@ 00079794 400c
.org 0x79796
	movs r1, #48	@ 00079796 3021
.org 0x79798
	bl 0x129198	@ 00079798 aff0fefc
.org 0x7979c
	movs r4, #24	@ 0007979c 1824
.org 0x7979e
	subs r0, r4, r0	@ 0007979e 201a
.org 0x797a0
	lsls r0, r0, #8	@ 000797a0 0002
.org 0x797a2
	ldr r1, [r7, #84]	@ 000797a2 796d
.org 0x797a4
	adds r1, r1, r0	@ 000797a4 0918
.org 0x797a6
	str r1, [sp, #8]	@ 000797a6 0291
.org 0x797a8
	mov r0, r9	@ 000797a8 4846
.org 0x797aa
	muls r0, r6	@ 000797aa 7043
.org 0x797ac
	add r0, r8	@ 000797ac 4044
.org 0x797ae
	lsls r0, r0, #1	@ 000797ae 4000
.org 0x797b0
	lsrs r1, r0, #1	@ 000797b0 4108
.org 0x797b2
	str r1, [r5, #0]	@ 000797b2 2960
.org 0x797b4
	lsrs r0, r0, #17	@ 000797b4 400c
.org 0x797b6
	movs r1, #48	@ 000797b6 3021
.org 0x797b8
	bl 0x129198	@ 000797b8 aff0eefc
.org 0x797bc
	subs r4, r4, r0	@ 000797bc 241a
.org 0x797be
	lsls r4, r4, #8	@ 000797be 2402
.org 0x797c0
	ldr r0, [r7, #88]	@ 000797c0 b86d
.org 0x797c2
	adds r0, r0, r4	@ 000797c2 0019
.org 0x797c4
	add r1, sp, #8	@ 000797c4 02a9
.org 0x797c6
	str r0, [r1, #4]	@ 000797c6 4860
.org 0x797c8
	movs r0, #1	@ 000797c8 0120
.org 0x797ca
	bl 0xd0c88	@ 000797ca 57f05dfa
.org 0x797ce
	ldrb r0, [r7, #18]	@ 000797ce b87c
.org 0x797d0
	cmp r0, #111	@ 000797d0 6f28
.org 0x797d2
	bhi.n 0x797da	@ 000797d2 02d8
.org 0x797d4
	movs r0, #53	@ 000797d4 3520
.org 0x797d6
	bl 0x2b10	@ 000797d6 89f79bf9
.org 0x797da
	ldrb r0, [r7, #18]	@ 000797da b87c
.org 0x797dc
	mov r1, sl	@ 000797dc 5146
.org 0x797de
	ldrh r4, [r1, #40]	@ 000797de 0c8d
.org 0x797e0
	adds r1, r4, #0	@ 000797e0 211c
.org 0x797e2
	bl 0x129050	@ 000797e2 aff035fc
.org 0x797e6
	adds r1, r0, #0	@ 000797e6 011c
.org 0x797e8
	lsrs r2, r4, #2	@ 000797e8 a208
.org 0x797ea
	cmp r1, r2	@ 000797ea 9142
.org 0x797ec
	beq.n 0x797f6	@ 000797ec 03d0
.org 0x797ee
	lsls r0, r2, #1	@ 000797ee 5000
.org 0x797f0
	adds r0, r0, r2	@ 000797f0 8018
.org 0x797f2
	cmp r1, r0	@ 000797f2 8142
.org 0x797f4
	bne.n 0x7984a	@ 000797f4 29d1
.org 0x797f6
	ldr r5, [pc, #116]	@ 000797f6 1d4d
.org 0x797f8
	ldr r0, [r5, #0]	@ 000797f8 2868
.org 0x797fa
	ldr r2, [pc, #116]	@ 000797fa 1d4a
.org 0x797fc
	mov r9, r2	@ 000797fc 9146
.org 0x797fe
	mov r1, r9	@ 000797fe 4946
.org 0x79800
	muls r1, r0	@ 00079800 4143
.org 0x79802
	adds r0, r1, #0	@ 00079802 081c
.org 0x79804
	ldr r2, [pc, #108]	@ 00079804 1b4a
.org 0x79806
	mov r8, r2	@ 00079806 9046
.org 0x79808
	add r0, r8	@ 00079808 4044
.org 0x7980a
	lsls r0, r0, #1	@ 0007980a 4000
.org 0x7980c
	lsrs r6, r0, #1	@ 0007980c 4608
.org 0x7980e
	str r6, [r5, #0]	@ 0007980e 2e60
.org 0x79810
	lsrs r0, r0, #17	@ 00079810 400c
.org 0x79812
	movs r1, #48	@ 00079812 3021
.org 0x79814
	bl 0x129198	@ 00079814 aff0c0fc
.org 0x79818
	movs r4, #24	@ 00079818 1824
.org 0x7981a
	subs r0, r4, r0	@ 0007981a 201a
.org 0x7981c
	lsls r0, r0, #8	@ 0007981c 0002
.org 0x7981e
	ldr r1, [r7, #84]	@ 0007981e 796d
.org 0x79820
	adds r1, r1, r0	@ 00079820 0918
.org 0x79822
	str r1, [sp, #16]	@ 00079822 0491
.org 0x79824
	mov r0, r9	@ 00079824 4846
.org 0x79826
	muls r0, r6	@ 00079826 7043
.org 0x79828
	add r0, r8	@ 00079828 4044
.org 0x7982a
	lsls r0, r0, #1	@ 0007982a 4000
.org 0x7982c
	lsrs r1, r0, #1	@ 0007982c 4108
.org 0x7982e
	str r1, [r5, #0]	@ 0007982e 2960
.org 0x79830
	lsrs r0, r0, #17	@ 00079830 400c
.org 0x79832
	movs r1, #48	@ 00079832 3021
.org 0x79834
	bl 0x129198	@ 00079834 aff0b0fc
.org 0x79838
	subs r4, r4, r0	@ 00079838 241a
.org 0x7983a
	lsls r4, r4, #8	@ 0007983a 2402
.org 0x7983c
	ldr r0, [r7, #88]	@ 0007983c b86d
.org 0x7983e
	adds r0, r0, r4	@ 0007983e 0019
.org 0x79840
	add r1, sp, #16	@ 00079840 04a9
.org 0x79842
	str r0, [r1, #4]	@ 00079842 4860
.org 0x79844
	movs r0, #2	@ 00079844 0220
.org 0x79846
	bl 0xd0c88	@ 00079846 57f01ffa
.org 0x7984a
	ldrb r0, [r7, #18]	@ 0007984a b87c
.org 0x7984c
	subs r0, #1	@ 0007984c 0138
.org 0x7984e
	strb r0, [r7, #18]	@ 0007984e b874
.org 0x79850
	lsls r0, r0, #24	@ 00079850 0006
.org 0x79852
	lsrs r0, r0, #24	@ 00079852 000e
.org 0x79854
	cmp r0, #255	@ 00079854 ff28
.org 0x79856
	beq.n 0x7985a	@ 00079856 00d0
.org 0x79858
	b.n 0x79a34	@ 00079858 ece0
.org 0x7985a
	ldr r2, [pc, #28]	@ 0007985a 074a
.org 0x7985c
	ldrb r0, [r2, #18]	@ 0007985c 907c
.org 0x7985e
	movs r1, #2	@ 0007985e 0221
.org 0x79860
	orrs r0, r1	@ 00079860 0843
.org 0x79862
	strb r0, [r2, #18]	@ 00079862 9074
.org 0x79864
	ldrb r0, [r7, #13]	@ 00079864 787b
.org 0x79866
	adds r0, #1	@ 00079866 0130
.org 0x79868
	strb r0, [r7, #13]	@ 00079868 7873
.org 0x7986a
	b.n 0x79a34	@ 0007986a e3e0
.org 0x7986c
	.byte 0x38,0xdc,0x02,0x02	@ 0007986c data
.org 0x79870
	.byte 0xfd,0x43,0x03,0x00	@ 00079870 data
.org 0x79874
	.byte 0xc3,0x9e,0x26,0x00	@ 00079874 data
.org 0x79878
	.byte 0x10,0xe9,0x02,0x02	@ 00079878 data
.org 0x7987c
	adds r2, r7, #0	@ 0007987c 3a1c
.org 0x7987e
	adds r2, #180	@ 0007987e b432
.org 0x79880
	movs r0, #8	@ 00079880 0820
.org 0x79882
	strh r0, [r2, #40]	@ 00079882 1085
.org 0x79884
	ldrb r1, [r7, #18]	@ 00079884 b97c
.org 0x79886
	movs r3, #1	@ 00079886 0123
.org 0x79888
	adds r0, r3, #0	@ 00079888 181c
.org 0x7988a
	ands r0, r1	@ 0007988a 0840
.org 0x7988c
	mov sl, r2	@ 0007988c 9246
.org 0x7988e
	cmp r0, #0	@ 0007988e 0028
.org 0x79890
	beq.n 0x798aa	@ 00079890 0bd0
.org 0x79892
	ldr r0, [r5, #0]	@ 00079892 2868
.org 0x79894
	movs r1, #2	@ 00079894 0221
.org 0x79896
	negs r1, r1	@ 00079896 4942
.org 0x79898
	ands r0, r1	@ 00079898 0840
.org 0x7989a
	str r0, [r5, #0]	@ 0007989a 2860
.org 0x7989c
	ldr r0, [r6, #0]	@ 0007989c 3068
.org 0x7989e
	ands r0, r1	@ 0007989e 0840
.org 0x798a0
	str r0, [r6, #0]	@ 000798a0 3060
.org 0x798a2
	adds r0, r7, #0	@ 000798a2 381c
.org 0x798a4
	bl 0x1d330	@ 000798a4 a3f744fd
.org 0x798a8
	b.n 0x798bc	@ 000798a8 08e0
.org 0x798aa
	ldr r0, [r5, #0]	@ 000798aa 2868
.org 0x798ac
	orrs r0, r3	@ 000798ac 1843
.org 0x798ae
	str r0, [r5, #0]	@ 000798ae 2860
.org 0x798b0
	ldr r0, [r6, #0]	@ 000798b0 3068
.org 0x798b2
	orrs r0, r3	@ 000798b2 1843
.org 0x798b4
	str r0, [r6, #0]	@ 000798b4 3060
.org 0x798b6
	adds r0, r7, #0	@ 000798b6 381c
.org 0x798b8
	bl 0x1d3fc	@ 000798b8 a3f7a0fd
.org 0x798bc
	ldrb r0, [r7, #18]	@ 000798bc b87c
.org 0x798be
	mov r2, sl	@ 000798be 5246
.org 0x798c0
	ldrh r1, [r2, #40]	@ 000798c0 118d
.org 0x798c2
	bl 0x129050	@ 000798c2 aff0c5fb
.org 0x798c6
	cmp r0, #0	@ 000798c6 0028
.org 0x798c8
	bne.n 0x7994c	@ 000798c8 40d1
.org 0x798ca
	ldr r5, [pc, #376]	@ 000798ca 5e4d
.org 0x798cc
	ldr r0, [r5, #0]	@ 000798cc 2868
.org 0x798ce
	ldr r1, [pc, #376]	@ 000798ce 5e49
.org 0x798d0
	mov r8, r1	@ 000798d0 8846
.org 0x798d2
	mov r2, r8	@ 000798d2 4246
.org 0x798d4
	muls r2, r0	@ 000798d4 4243
.org 0x798d6
	adds r0, r2, #0	@ 000798d6 101c
.org 0x798d8
	ldr r6, [pc, #368]	@ 000798d8 5c4e
.org 0x798da
	adds r0, r0, r6	@ 000798da 8019
.org 0x798dc
	lsls r0, r0, #1	@ 000798dc 4000
.org 0x798de
	lsrs r1, r0, #1	@ 000798de 4108
.org 0x798e0
	mov r9, r1	@ 000798e0 8946
.org 0x798e2
	str r1, [r5, #0]	@ 000798e2 2960
.org 0x798e4
	lsrs r0, r0, #17	@ 000798e4 400c
.org 0x798e6
	movs r1, #96	@ 000798e6 6021
.org 0x798e8
	bl 0x129198	@ 000798e8 aff056fc
.org 0x798ec
	movs r4, #48	@ 000798ec 3024
.org 0x798ee
	subs r0, r4, r0	@ 000798ee 201a
.org 0x798f0
	lsls r0, r0, #8	@ 000798f0 0002
.org 0x798f2
	ldr r1, [r7, #84]	@ 000798f2 796d
.org 0x798f4
	adds r1, r1, r0	@ 000798f4 0918
.org 0x798f6
	str r1, [sp, #24]	@ 000798f6 0691
.org 0x798f8
	mov r2, r8	@ 000798f8 4246
.org 0x798fa
	mov r0, r9	@ 000798fa 4846
.org 0x798fc
	muls r0, r2	@ 000798fc 5043
.org 0x798fe
	adds r0, r0, r6	@ 000798fe 8019
.org 0x79900
	lsls r0, r0, #1	@ 00079900 4000
.org 0x79902
	lsrs r1, r0, #1	@ 00079902 4108
.org 0x79904
	mov r9, r1	@ 00079904 8946
.org 0x79906
	str r1, [r5, #0]	@ 00079906 2960
.org 0x79908
	lsrs r0, r0, #17	@ 00079908 400c
.org 0x7990a
	movs r1, #96	@ 0007990a 6021
.org 0x7990c
	bl 0x129198	@ 0007990c aff044fc
.org 0x79910
	subs r4, r4, r0	@ 00079910 241a
.org 0x79912
	lsls r4, r4, #8	@ 00079912 2402
.org 0x79914
	ldr r1, [r7, #88]	@ 00079914 b96d
.org 0x79916
	adds r1, r1, r4	@ 00079916 0919
.org 0x79918
	add r0, sp, #24	@ 00079918 06a8
.org 0x7991a
	str r1, [r0, #4]	@ 0007991a 4160
.org 0x7991c
	mov r2, r8	@ 0007991c 4246
.org 0x7991e
	mov r1, r9	@ 0007991e 4946
.org 0x79920
	muls r1, r2	@ 00079920 5143
.org 0x79922
	adds r1, r1, r6	@ 00079922 8919
.org 0x79924
	lsls r1, r1, #1	@ 00079924 4900
.org 0x79926
	lsrs r2, r1, #1	@ 00079926 4a08
.org 0x79928
	str r2, [r5, #0]	@ 00079928 2a60
.org 0x7992a
	lsrs r1, r1, #17	@ 0007992a 490c
.org 0x7992c
	movs r2, #63	@ 0007992c 3f22
.org 0x7992e
	ands r1, r2	@ 0007992e 1140
.org 0x79930
	ldrb r2, [r7, #19]	@ 00079930 fa7c
.org 0x79932
	adds r1, r1, r2	@ 00079932 8918
.org 0x79934
	lsls r1, r1, #24	@ 00079934 0906
.org 0x79936
	lsrs r1, r1, #24	@ 00079936 090e
.org 0x79938
	movs r2, #224	@ 00079938 e022
.org 0x7993a
	lsls r2, r2, #1	@ 0007993a 5200
.org 0x7993c
	bl 0xe1b14	@ 0007993c 68f0eaf8
.org 0x79940
	movs r0, #53	@ 00079940 3520
.org 0x79942
	bl 0x2b10	@ 00079942 89f7e5f8
.org 0x79946
	ldrb r0, [r7, #19]	@ 00079946 f87c
.org 0x79948
	adds r0, #64	@ 00079948 4030
.org 0x7994a
	strb r0, [r7, #19]	@ 0007994a f874
.org 0x7994c
	ldrb r0, [r7, #18]	@ 0007994c b87c
.org 0x7994e
	mov r1, sl	@ 0007994e 5146
.org 0x79950
	ldrh r4, [r1, #40]	@ 00079950 0c8d
.org 0x79952
	adds r1, r4, #0	@ 00079952 211c
.org 0x79954
	bl 0x129050	@ 00079954 aff07cfb
.org 0x79958
	lsrs r4, r4, #1	@ 00079958 6408
.org 0x7995a
	cmp r0, r4	@ 0007995a a042
.org 0x7995c
	bne.n 0x799be	@ 0007995c 2fd1
.org 0x7995e
	ldr r5, [pc, #228]	@ 0007995e 394d
.org 0x79960
	ldr r0, [r5, #0]	@ 00079960 2868
.org 0x79962
	ldr r2, [pc, #228]	@ 00079962 394a
.org 0x79964
	mov r9, r2	@ 00079964 9146
.org 0x79966
	mov r1, r9	@ 00079966 4946
.org 0x79968
	muls r1, r0	@ 00079968 4143
.org 0x7996a
	adds r0, r1, #0	@ 0007996a 081c
.org 0x7996c
	ldr r2, [pc, #220]	@ 0007996c 374a
.org 0x7996e
	mov r8, r2	@ 0007996e 9046
.org 0x79970
	add r0, r8	@ 00079970 4044
.org 0x79972
	lsls r0, r0, #1	@ 00079972 4000
.org 0x79974
	lsrs r6, r0, #1	@ 00079974 4608
.org 0x79976
	str r6, [r5, #0]	@ 00079976 2e60
.org 0x79978
	lsrs r0, r0, #17	@ 00079978 400c
.org 0x7997a
	movs r1, #96	@ 0007997a 6021
.org 0x7997c
	bl 0x129198	@ 0007997c aff00cfc
.org 0x79980
	movs r4, #48	@ 00079980 3024
.org 0x79982
	subs r0, r4, r0	@ 00079982 201a
.org 0x79984
	lsls r0, r0, #8	@ 00079984 0002
.org 0x79986
	ldr r1, [r7, #84]	@ 00079986 796d
.org 0x79988
	adds r1, r1, r0	@ 00079988 0918
.org 0x7998a
	str r1, [sp, #32]	@ 0007998a 0891
.org 0x7998c
	mov r0, r9	@ 0007998c 4846
.org 0x7998e
	muls r0, r6	@ 0007998e 7043
.org 0x79990
	add r0, r8	@ 00079990 4044
.org 0x79992
	lsls r0, r0, #1	@ 00079992 4000
.org 0x79994
	lsrs r1, r0, #1	@ 00079994 4108
.org 0x79996
	str r1, [r5, #0]	@ 00079996 2960
.org 0x79998
	lsrs r0, r0, #17	@ 00079998 400c
.org 0x7999a
	movs r1, #96	@ 0007999a 6021
.org 0x7999c
	bl 0x129198	@ 0007999c aff0fcfb
.org 0x799a0
	subs r4, r4, r0	@ 000799a0 241a
.org 0x799a2
	lsls r4, r4, #8	@ 000799a2 2402
.org 0x799a4
	ldr r0, [r7, #88]	@ 000799a4 b86d
.org 0x799a6
	adds r0, r0, r4	@ 000799a6 0019
.org 0x799a8
	add r1, sp, #32	@ 000799a8 08a9
.org 0x799aa
	str r0, [r1, #4]	@ 000799aa 4860
.org 0x799ac
	movs r0, #1	@ 000799ac 0120
.org 0x799ae
	bl 0xd0c88	@ 000799ae 57f06bf9
.org 0x799b2
	ldrb r0, [r7, #18]	@ 000799b2 b87c
.org 0x799b4
	cmp r0, #111	@ 000799b4 6f28
.org 0x799b6
	bhi.n 0x799be	@ 000799b6 02d8
.org 0x799b8
	movs r0, #53	@ 000799b8 3520
.org 0x799ba
	bl 0x2b10	@ 000799ba 89f7a9f8
.org 0x799be
	ldrb r0, [r7, #18]	@ 000799be b87c
.org 0x799c0
	mov r1, sl	@ 000799c0 5146
.org 0x799c2
	ldrh r4, [r1, #40]	@ 000799c2 0c8d
.org 0x799c4
	adds r1, r4, #0	@ 000799c4 211c
.org 0x799c6
	bl 0x129050	@ 000799c6 aff043fb
.org 0x799ca
	adds r1, r0, #0	@ 000799ca 011c
.org 0x799cc
	lsrs r2, r4, #2	@ 000799cc a208
.org 0x799ce
	cmp r1, r2	@ 000799ce 9142
.org 0x799d0
	beq.n 0x799da	@ 000799d0 03d0
.org 0x799d2
	lsls r0, r2, #1	@ 000799d2 5000
.org 0x799d4
	adds r0, r0, r2	@ 000799d4 8018
.org 0x799d6
	cmp r1, r0	@ 000799d6 8142
.org 0x799d8
	bne.n 0x79a2e	@ 000799d8 29d1
.org 0x799da
	ldr r5, [pc, #104]	@ 000799da 1a4d
.org 0x799dc
	ldr r0, [r5, #0]	@ 000799dc 2868
.org 0x799de
	ldr r2, [pc, #104]	@ 000799de 1a4a
.org 0x799e0
	mov r9, r2	@ 000799e0 9146
.org 0x799e2
	mov r1, r9	@ 000799e2 4946
.org 0x799e4
	muls r1, r0	@ 000799e4 4143
.org 0x799e6
	adds r0, r1, #0	@ 000799e6 081c
.org 0x799e8
	ldr r2, [pc, #96]	@ 000799e8 184a
.org 0x799ea
	mov r8, r2	@ 000799ea 9046
.org 0x799ec
	add r0, r8	@ 000799ec 4044
.org 0x799ee
	lsls r0, r0, #1	@ 000799ee 4000
.org 0x799f0
	lsrs r6, r0, #1	@ 000799f0 4608
.org 0x799f2
	str r6, [r5, #0]	@ 000799f2 2e60
.org 0x799f4
	lsrs r0, r0, #17	@ 000799f4 400c
.org 0x799f6
	movs r1, #96	@ 000799f6 6021
.org 0x799f8
	bl 0x129198	@ 000799f8 aff0cefb
.org 0x799fc
	movs r4, #48	@ 000799fc 3024
.org 0x799fe
	subs r0, r4, r0	@ 000799fe 201a
.org 0x79a00
	lsls r0, r0, #8	@ 00079a00 0002
.org 0x79a02
	ldr r1, [r7, #84]	@ 00079a02 796d
.org 0x79a04
	adds r1, r1, r0	@ 00079a04 0918
.org 0x79a06
	str r1, [sp, #40]	@ 00079a06 0a91
.org 0x79a08
	mov r0, r9	@ 00079a08 4846
.org 0x79a0a
	muls r0, r6	@ 00079a0a 7043
.org 0x79a0c
	add r0, r8	@ 00079a0c 4044
.org 0x79a0e
	lsls r0, r0, #1	@ 00079a0e 4000
.org 0x79a10
	lsrs r1, r0, #1	@ 00079a10 4108
.org 0x79a12
	str r1, [r5, #0]	@ 00079a12 2960
.org 0x79a14
	lsrs r0, r0, #17	@ 00079a14 400c
.org 0x79a16
	movs r1, #96	@ 00079a16 6021
.org 0x79a18
	bl 0x129198	@ 00079a18 aff0befb
