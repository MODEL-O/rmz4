@ FUN_080a5644  entry 0x080a5644  size 298
.thumb
.org 0xa5644
FUN_080a5644:
	push {r4, r5, r6, r7, lr}	@ 000a5644 f0b5
.org 0xa5646
	adds r4, r0, #0	@ 000a5646 041c
.org 0xa5648
	ldrb r5, [r4, #16]	@ 000a5648 257c
.org 0xa564a
	ldrb r0, [r4, #15]	@ 000a564a e07b
.org 0xa564c
	cmp r0, #0	@ 000a564c 0028
.org 0xa564e
	bne.n 0xa5696	@ 000a564e 22d1
.org 0xa5650
	adds r0, r4, #0	@ 000a5650 201c
.org 0xa5652
	adds r0, #116	@ 000a5652 7430
.org 0xa5654
	ldr r1, [pc, #148]	@ 000a5654 2549
.org 0xa5656
	bl 0x5784	@ 000a5656 60f795f8
.org 0xa565a
	ldr r1, [pc, #148]	@ 000a565a 2549
.org 0xa565c
	adds r0, r4, #0	@ 000a565c 201c
.org 0xa565e
	bl 0x1cf00	@ 000a565e 77f74ffc
.org 0xa5662
	adds r0, r4, #0	@ 000a5662 201c
.org 0xa5664
	bl 0x1d330	@ 000a5664 77f764fe
.org 0xa5668
	ldr r1, [pc, #136]	@ 000a5668 2249
.org 0xa566a
	adds r0, r5, #0	@ 000a566a 281c
.org 0xa566c
	adds r0, #64	@ 000a566c 4030
.org 0xa566e
	lsls r0, r0, #24	@ 000a566e 0006
.org 0xa5670
	lsrs r0, r0, #23	@ 000a5670 c00d
.org 0xa5672
	adds r0, r0, r1	@ 000a5672 4018
.org 0xa5674
	movs r2, #0	@ 000a5674 0022
.org 0xa5676
	ldrsh r0, [r0, r2]	@ 000a5676 805e
.org 0xa5678
	lsls r0, r0, #1	@ 000a5678 4000
.org 0xa567a
	str r0, [r4, #92]	@ 000a567a e065
.org 0xa567c
	lsls r0, r5, #1	@ 000a567c 6800
.org 0xa567e
	adds r0, r0, r1	@ 000a567e 4018
.org 0xa5680
	movs r1, #0	@ 000a5680 0021
.org 0xa5682
	ldrsh r0, [r0, r1]	@ 000a5682 405e
.org 0xa5684
	lsls r0, r0, #1	@ 000a5684 4000
.org 0xa5686
	str r0, [r4, #96]	@ 000a5686 2066
.org 0xa5688
	adds r1, r4, #0	@ 000a5688 211c
.org 0xa568a
	adds r1, #180	@ 000a568a b431
.org 0xa568c
	movs r0, #128	@ 000a568c 8020
.org 0xa568e
	str r0, [r1, #0]	@ 000a568e 0860
.org 0xa5690
	ldrb r0, [r4, #15]	@ 000a5690 e07b
.org 0xa5692
	adds r0, #1	@ 000a5692 0130
.org 0xa5694
	strb r0, [r4, #15]	@ 000a5694 e073
.org 0xa5696
	adds r0, r4, #0	@ 000a5696 201c
.org 0xa5698
	bl 0x1cff0	@ 000a5698 77f7aafc
.org 0xa569c
	adds r6, r4, #0	@ 000a569c 261c
.org 0xa569e
	adds r6, #140	@ 000a569e 8c36
.org 0xa56a0
	ldr r0, [r6, #0]	@ 000a56a0 3068
.org 0xa56a2
	movs r1, #128	@ 000a56a2 8021
.org 0xa56a4
	lsls r1, r1, #2	@ 000a56a4 8900
.org 0xa56a6
	ands r0, r1	@ 000a56a6 0840
.org 0xa56a8
	adds r7, r6, #0	@ 000a56a8 371c
.org 0xa56aa
	cmp r0, #0	@ 000a56aa 0028
.org 0xa56ac
	bne.n 0xa56c6	@ 000a56ac 0bd1
.org 0xa56ae
	adds r1, r4, #0	@ 000a56ae 211c
.org 0xa56b0
	adds r1, #180	@ 000a56b0 b431
.org 0xa56b2
	ldr r0, [r1, #0]	@ 000a56b2 0868
.org 0xa56b4
	subs r0, #1	@ 000a56b4 0138
.org 0xa56b6
	str r0, [r1, #0]	@ 000a56b6 0860
.org 0xa56b8
	cmp r0, #0	@ 000a56b8 0028
.org 0xa56ba
	beq.n 0xa56c6	@ 000a56ba 04d0
.org 0xa56bc
	ldr r5, [r6, #0]	@ 000a56bc 3568
.org 0xa56be
	movs r0, #4	@ 000a56be 0420
.org 0xa56c0
	ands r5, r0	@ 000a56c0 0540
.org 0xa56c2
	cmp r5, #0	@ 000a56c2 002d
.org 0xa56c4
	beq.n 0xa56f8	@ 000a56c4 18d0
.org 0xa56c6
	adds r1, r4, #0	@ 000a56c6 211c
.org 0xa56c8
	adds r1, #84	@ 000a56c8 5431
.org 0xa56ca
	movs r0, #2	@ 000a56ca 0220
.org 0xa56cc
	bl 0xd0c88	@ 000a56cc 2bf0dcfa
.org 0xa56d0
	ldrb r1, [r4, #10]	@ 000a56d0 a17a
.org 0xa56d2
	movs r0, #254	@ 000a56d2 fe20
.org 0xa56d4
	ands r0, r1	@ 000a56d4 0840
.org 0xa56d6
	movs r2, #0	@ 000a56d6 0022
.org 0xa56d8
	movs r1, #253	@ 000a56d8 fd21
.org 0xa56da
	ands r0, r1	@ 000a56da 0840
.org 0xa56dc
	strb r0, [r4, #10]	@ 000a56dc a072
.org 0xa56de
	str r2, [r7, #0]	@ 000a56de 3a60
.org 0xa56e0
	adds r0, r4, #0	@ 000a56e0 201c
.org 0xa56e2
	adds r0, #144	@ 000a56e2 9030
.org 0xa56e4
	str r2, [r0, #0]	@ 000a56e4 0260
.org 0xa56e6
	adds r0, #4	@ 000a56e6 0430
.org 0xa56e8
	strb r2, [r0, #0]	@ 000a56e8 0270
.org 0xa56ea
	b.n 0xa5732	@ 000a56ea 22e0
.org 0xa56ec
	.byte 0x94,0x23,0x86,0x08	@ 000a56ec data
.org 0xa56f0
	.byte 0x10,0x40,0x00,0x00	@ 000a56f0 data
.org 0xa56f4
	.byte 0x0c,0x93,0x12,0x08	@ 000a56f4 data
.org 0xa56f8
	ldr r0, [r4, #84]	@ 000a56f8 606d
.org 0xa56fa
	ldr r1, [r4, #92]	@ 000a56fa e16d
.org 0xa56fc
	adds r0, r0, r1	@ 000a56fc 4018
.org 0xa56fe
	str r0, [r4, #84]	@ 000a56fe 6065
.org 0xa5700
	ldr r0, [r4, #88]	@ 000a5700 a06d
.org 0xa5702
	ldr r1, [r4, #96]	@ 000a5702 216e
.org 0xa5704
	adds r0, r0, r1	@ 000a5704 4018
.org 0xa5706
	str r0, [r4, #88]	@ 000a5706 a065
.org 0xa5708
	ldr r0, [pc, #68]	@ 000a5708 1148
.org 0xa570a
	adds r1, r4, #0	@ 000a570a 211c
.org 0xa570c
	adds r1, #84	@ 000a570c 5431
.org 0xa570e
	bl 0x1fb14	@ 000a570e 7af701fa
.org 0xa5712
	movs r1, #128	@ 000a5712 8021
.org 0xa5714
	lsls r1, r1, #6	@ 000a5714 8901
.org 0xa5716
	cmp r0, r1	@ 000a5716 8842
.org 0xa5718
	bls.n 0xa5758	@ 000a5718 1ed9
.org 0xa571a
	ldrb r1, [r4, #10]	@ 000a571a a17a
.org 0xa571c
	movs r0, #254	@ 000a571c fe20
.org 0xa571e
	ands r0, r1	@ 000a571e 0840
.org 0xa5720
	movs r1, #253	@ 000a5720 fd21
.org 0xa5722
	ands r0, r1	@ 000a5722 0840
.org 0xa5724
	strb r0, [r4, #10]	@ 000a5724 a072
.org 0xa5726
	str r5, [r6, #0]	@ 000a5726 3560
.org 0xa5728
	adds r0, r4, #0	@ 000a5728 201c
.org 0xa572a
	adds r0, #144	@ 000a572a 9030
.org 0xa572c
	str r5, [r0, #0]	@ 000a572c 0560
.org 0xa572e
	adds r0, #4	@ 000a572e 0430
.org 0xa5730
	strb r5, [r0, #0]	@ 000a5730 0570
.org 0xa5732
	ldrb r1, [r4, #10]	@ 000a5732 a17a
.org 0xa5734
	movs r0, #251	@ 000a5734 fb20
.org 0xa5736
	ands r0, r1	@ 000a5736 0840
.org 0xa5738
	strb r0, [r4, #10]	@ 000a5738 a072
.org 0xa573a
	ldr r1, [pc, #24]	@ 000a573a 0649
.org 0xa573c
	ldrb r0, [r4, #9]	@ 000a573c 607a
.org 0xa573e
	lsls r0, r0, #2	@ 000a573e 8000
.org 0xa5740
	adds r0, r0, r1	@ 000a5740 4018
.org 0xa5742
	movs r1, #3	@ 000a5742 0321
.org 0xa5744
	str r1, [r4, #12]	@ 000a5744 e160
.org 0xa5746
	ldr r0, [r0, #0]	@ 000a5746 0068
.org 0xa5748
	ldr r0, [r0, #12]	@ 000a5748 c068
.org 0xa574a
	str r0, [r4, #20]	@ 000a574a 6061
.org 0xa574c
	b.n 0xa577e	@ 000a574c 17e0
.org 0xa574e
	.byte 0x00	@ 000a574e data
.org 0xa574f
	.byte 0x00	@ 000a574f data
.org 0xa5750
	.byte 0xf8,0xe9,0x02,0x02	@ 000a5750 data
.org 0xa5754
	.byte 0x40,0xdb,0x85,0x08	@ 000a5754 data
.org 0xa5758
	ldr r0, [r4, #84]	@ 000a5758 606d
.org 0xa575a
	ldr r1, [r4, #88]	@ 000a575a a16d
.org 0xa575c
	bl 0x7c7c	@ 000a575c 62f78efa
.org 0xa5760
	lsls r0, r0, #16	@ 000a5760 0004
.org 0xa5762
	cmp r0, #0	@ 000a5762 0028
.org 0xa5764
	beq.n 0xa577e	@ 000a5764 0bd0
.org 0xa5766
	ldr r0, [r4, #84]	@ 000a5766 606d
.org 0xa5768
	ldr r1, [r4, #88]	@ 000a5768 a16d
.org 0xa576a
	bl 0x7c7c	@ 000a576a 62f787fa
