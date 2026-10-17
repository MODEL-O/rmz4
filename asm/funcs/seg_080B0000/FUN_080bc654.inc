@ FUN_080bc654  entry 0x080bc654  size 294
.thumb
.org 0xbc654
FUN_080bc654:
	push {r4, r5, r6, lr}	@ 000bc654 70b5
.org 0xbc656
	adds r5, r0, #0	@ 000bc656 051c
.org 0xbc658
	movs r2, #0	@ 000bc658 0022
.org 0xbc65a
	ldr r4, [r5, #40]	@ 000bc65a ac6a
.org 0xbc65c
	movs r0, #1	@ 000bc65c 0120
.org 0xbc65e
	ldrb r1, [r5, #16]	@ 000bc65e 297c
.org 0xbc660
	lsls r0, r1	@ 000bc660 8840
.org 0xbc662
	ldrh r1, [r4, #0]	@ 000bc662 2188
.org 0xbc664
	adds r3, r1, #0	@ 000bc664 0b1c
.org 0xbc666
	bics r3, r0	@ 000bc666 8343
.org 0xbc668
	strh r3, [r4, #0]	@ 000bc668 2380
.org 0xbc66a
	ldrb r0, [r5, #17]	@ 000bc66a 687c
.org 0xbc66c
	cmp r0, #1	@ 000bc66c 0128
.org 0xbc66e
	bne.n 0xbc6a0	@ 000bc66e 17d1
.org 0xbc670
	adds r0, r5, #0	@ 000bc670 281c
.org 0xbc672
	adds r0, #140	@ 000bc672 8c30
.org 0xbc674
	ldr r1, [r0, #0]	@ 000bc674 0168
.org 0xbc676
	movs r2, #128	@ 000bc676 8022
.org 0xbc678
	lsls r2, r2, #2	@ 000bc678 9200
.org 0xbc67a
	ands r1, r2	@ 000bc67a 1140
.org 0xbc67c
	adds r6, r0, #0	@ 000bc67c 061c
.org 0xbc67e
	cmp r1, #0	@ 000bc67e 0029
.org 0xbc680
	beq.n 0xbc68c	@ 000bc680 04d0
.org 0xbc682
	movs r1, #128	@ 000bc682 8021
.org 0xbc684
	lsls r1, r1, #8	@ 000bc684 0902
.org 0xbc686
	adds r0, r1, #0	@ 000bc686 081c
.org 0xbc688
	orrs r3, r0	@ 000bc688 0343
.org 0xbc68a
	strh r3, [r4, #0]	@ 000bc68a 2380
.org 0xbc68c
	adds r0, r5, #0	@ 000bc68c 281c
.org 0xbc68e
	adds r0, #84	@ 000bc68e 5430
.org 0xbc690
	ldr r2, [r5, #40]	@ 000bc690 aa6a
.org 0xbc692
	movs r1, #0	@ 000bc692 0021
.org 0xbc694
	bl 0xd05c0	@ 000bc694 13f094ff
.org 0xbc698
	movs r0, #166	@ 000bc698 a620
.org 0xbc69a
	bl 0x2b10	@ 000bc69a 46f739fa
.org 0xbc69e
	b.n 0xbc766	@ 000bc69e 62e0
.org 0xbc6a0
	ldr r0, [pc, #36]	@ 000bc6a0 0948
.org 0xbc6a2
	ldr r0, [r0, #0]	@ 000bc6a2 0068
.org 0xbc6a4
	ldr r4, [r5, #84]	@ 000bc6a4 6c6d
.org 0xbc6a6
	ldr r1, [r0, #84]	@ 000bc6a6 416d
.org 0xbc6a8
	cmp r4, r1	@ 000bc6a8 8c42
.org 0xbc6aa
	bge.n 0xbc6ae	@ 000bc6aa 00da
.org 0xbc6ac
	movs r2, #1	@ 000bc6ac 0122
.org 0xbc6ae
	adds r0, r5, #0	@ 000bc6ae 281c
.org 0xbc6b0
	adds r0, #181	@ 000bc6b0 b530
.org 0xbc6b2
	ldrb r0, [r0, #0]	@ 000bc6b2 0078
.org 0xbc6b4
	cmp r0, #1	@ 000bc6b4 0128
.org 0xbc6b6
	bne.n 0xbc6cc	@ 000bc6b6 09d1
.org 0xbc6b8
	adds r0, r5, #0	@ 000bc6b8 281c
.org 0xbc6ba
	adds r0, #84	@ 000bc6ba 5430
.org 0xbc6bc
	movs r4, #192	@ 000bc6bc c024
.org 0xbc6be
	lsls r4, r4, #2	@ 000bc6be a400
.org 0xbc6c0
	adds r1, r4, #0	@ 000bc6c0 211c
.org 0xbc6c2
	movs r2, #0	@ 000bc6c2 0022
.org 0xbc6c4
	b.n 0xbc71e	@ 000bc6c4 2be0
.org 0xbc6c6
	.byte 0x00	@ 000bc6c6 data
.org 0xbc6c7
	.byte 0x00	@ 000bc6c7 data
.org 0xbc6c8
	.byte 0xf0,0xdb,0x02,0x02	@ 000bc6c8 data
.org 0xbc6cc
	subs r3, r4, r1	@ 000bc6cc 631a
.org 0xbc6ce
	cmp r3, #0	@ 000bc6ce 002b
.org 0xbc6d0
	bge.n 0xbc6d4	@ 000bc6d0 00da
.org 0xbc6d2
	subs r3, r1, r4	@ 000bc6d2 0b1b
.org 0xbc6d4
	ldr r0, [pc, #40]	@ 000bc6d4 0a48
.org 0xbc6d6
	adds r1, r3, r0	@ 000bc6d6 1918
.org 0xbc6d8
	ldr r0, [pc, #40]	@ 000bc6d8 0a48
.org 0xbc6da
	cmp r1, r0	@ 000bc6da 8142
.org 0xbc6dc
	bhi.n 0xbc70c	@ 000bc6dc 16d8
.org 0xbc6de
	adds r0, r5, #0	@ 000bc6de 281c
.org 0xbc6e0
	adds r0, #84	@ 000bc6e0 5430
.org 0xbc6e2
	movs r1, #0	@ 000bc6e2 0021
.org 0xbc6e4
	bl 0xe7d70	@ 000bc6e4 2bf044fb
.org 0xbc6e8
	ldr r0, [pc, #28]	@ 000bc6e8 0748
.org 0xbc6ea
	bl 0x2b10	@ 000bc6ea 46f711fa
.org 0xbc6ee
	ldr r2, [r5, #40]	@ 000bc6ee aa6a
.org 0xbc6f0
	ldrh r0, [r2, #0]	@ 000bc6f0 1088
.org 0xbc6f2
	movs r3, #160	@ 000bc6f2 a023
.org 0xbc6f4
	lsls r3, r3, #3	@ 000bc6f4 db00
.org 0xbc6f6
	adds r1, r3, #0	@ 000bc6f6 191c
.org 0xbc6f8
	orrs r0, r1	@ 000bc6f8 0843
.org 0xbc6fa
	strh r0, [r2, #0]	@ 000bc6fa 1080
.org 0xbc6fc
	b.n 0xbc730	@ 000bc6fc 18e0
.org 0xbc6fe
	.byte 0x00	@ 000bc6fe data
.org 0xbc6ff
	.byte 0x00	@ 000bc6ff data
.org 0xbc700
	.byte 0xff,0xe1,0xff,0xff	@ 000bc700 data
.org 0xbc704
	.byte 0xfe,0x07,0x00,0x00	@ 000bc704 data
.org 0xbc708
	.byte 0x9f,0x01,0x00,0x00	@ 000bc708 data
.org 0xbc70c
	movs r0, #240	@ 000bc70c f020
.org 0xbc70e
	lsls r0, r0, #5	@ 000bc70e 4001
.org 0xbc710
	cmp r3, r0	@ 000bc710 8342
.org 0xbc712
	bgt.n 0xbc73c	@ 000bc712 13dc
.org 0xbc714
	adds r0, r5, #0	@ 000bc714 281c
.org 0xbc716
	adds r0, #84	@ 000bc716 5430
.org 0xbc718
	movs r4, #128	@ 000bc718 8024
.org 0xbc71a
	lsls r4, r4, #2	@ 000bc71a a400
.org 0xbc71c
	adds r1, r4, #0	@ 000bc71c 211c
.org 0xbc71e
	bl 0xe7d70	@ 000bc71e 2bf027fb
.org 0xbc722
	ldr r0, [pc, #20]	@ 000bc722 0548
.org 0xbc724
	bl 0x2b10	@ 000bc724 46f7f4f9
.org 0xbc728
	ldr r1, [r5, #40]	@ 000bc728 a96a
.org 0xbc72a
	ldrh r0, [r1, #0]	@ 000bc72a 0888
.org 0xbc72c
	orrs r4, r0	@ 000bc72c 0443
.org 0xbc72e
	strh r4, [r1, #0]	@ 000bc72e 0c80
.org 0xbc730
	adds r6, r5, #0	@ 000bc730 2e1c
.org 0xbc732
	adds r6, #140	@ 000bc732 8c36
.org 0xbc734
	b.n 0xbc766	@ 000bc734 17e0
.org 0xbc736
	.byte 0x00	@ 000bc736 data
.org 0xbc737
	.byte 0x00	@ 000bc737 data
.org 0xbc738
	.byte 0xa3,0x01,0x00,0x00	@ 000bc738 data
.org 0xbc73c
	ldr r0, [pc, #84]	@ 000bc73c 1548
.org 0xbc73e
	adds r6, r5, #0	@ 000bc73e 2e1c
.org 0xbc740
	adds r6, #140	@ 000bc740 8c36
.org 0xbc742
	cmp r3, r0	@ 000bc742 8342
.org 0xbc744
	ble.n 0xbc766	@ 000bc744 0fdd
.org 0xbc746
	adds r0, r5, #0	@ 000bc746 281c
.org 0xbc748
	adds r0, #84	@ 000bc748 5430
.org 0xbc74a
	movs r1, #128	@ 000bc74a 8021
.org 0xbc74c
	lsls r1, r1, #1	@ 000bc74c 4900
.org 0xbc74e
	bl 0xe7d70	@ 000bc74e 2bf00ffb
.org 0xbc752
	ldr r0, [pc, #68]	@ 000bc752 1148
.org 0xbc754
	bl 0x2b10	@ 000bc754 46f7dcf9
.org 0xbc758
	ldr r2, [r5, #40]	@ 000bc758 aa6a
.org 0xbc75a
	ldrh r0, [r2, #0]	@ 000bc75a 1088
.org 0xbc75c
	movs r3, #128	@ 000bc75c 8023
.org 0xbc75e
	lsls r3, r3, #2	@ 000bc75e 9b00
.org 0xbc760
	adds r1, r3, #0	@ 000bc760 191c
.org 0xbc762
	orrs r0, r1	@ 000bc762 0843
.org 0xbc764
	strh r0, [r2, #0]	@ 000bc764 1080
.org 0xbc766
	movs r1, #0	@ 000bc766 0021
.org 0xbc768
	str r1, [r6, #0]	@ 000bc768 3160
.org 0xbc76a
	adds r0, r5, #0	@ 000bc76a 281c
.org 0xbc76c
	adds r0, #144	@ 000bc76c 9030
.org 0xbc76e
	str r1, [r0, #0]	@ 000bc76e 0160
.org 0xbc770
	adds r0, #4	@ 000bc770 0430
.org 0xbc772
	strb r1, [r0, #0]	@ 000bc772 0170
.org 0xbc774
	ldrb r1, [r5, #10]	@ 000bc774 a97a
.org 0xbc776
	movs r0, #251	@ 000bc776 fb20
.org 0xbc778
	ands r0, r1	@ 000bc778 0840
