@ FUN_08050660  entry 0x08050660  size 794
.thumb
.org 0x50660
FUN_08050660:
	push {r4, r5, r6, r7, lr}	@ 00050660 f0b5
.org 0x50662
	adds r7, r0, #0	@ 00050662 071c
.org 0x50664
	ldr r0, [pc, #68]	@ 00050664 1148
.org 0x50666
	ldr r4, [r0, #0]	@ 00050666 0468
.org 0x50668
	adds r0, r7, #0	@ 00050668 381c
.org 0x5066a
	adds r0, #140	@ 0005066a 8c30
.org 0x5066c
	ldr r0, [r0, #0]	@ 0005066c 0068
.org 0x5066e
	movs r1, #128	@ 0005066e 8021
.org 0x50670
	lsls r1, r1, #2	@ 00050670 8900
.org 0x50672
	ands r0, r1	@ 00050672 0840
.org 0x50674
	cmp r0, #0	@ 00050674 0028
.org 0x50676
	bne.n 0x50684	@ 00050676 05d1
.org 0x50678
	adds r0, r7, #0	@ 00050678 381c
.org 0x5067a
	adds r0, #164	@ 0005067a a430
.org 0x5067c
	movs r1, #0	@ 0005067c 0021
.org 0x5067e
	ldrsh r0, [r0, r1]	@ 0005067e 405e
.org 0x50680
	cmp r0, #0	@ 00050680 0028
.org 0x50682
	bne.n 0x506b8	@ 00050682 19d1
.org 0x50684
	ldr r0, [pc, #40]	@ 00050684 0a48
.org 0x50686
	ldrh r1, [r0, #8]	@ 00050686 0189
.org 0x50688
	movs r0, #8	@ 00050688 0820
.org 0x5068a
	ands r0, r1	@ 0005068a 0840
.org 0x5068c
	cmp r0, #0	@ 0005068c 0028
.org 0x5068e
	bne.n 0x506b8	@ 0005068e 13d1
.org 0x50690
	ldr r1, [pc, #32]	@ 00050690 0849
.org 0x50692
	ldrb r0, [r7, #9]	@ 00050692 787a
.org 0x50694
	lsls r0, r0, #2	@ 00050694 8000
.org 0x50696
	adds r0, r0, r1	@ 00050696 4018
.org 0x50698
	movs r1, #2	@ 00050698 0221
.org 0x5069a
	str r1, [r7, #12]	@ 0005069a f960
.org 0x5069c
	ldr r0, [r0, #0]	@ 0005069c 0068
.org 0x5069e
	ldr r0, [r0, #8]	@ 0005069e 8068
.org 0x506a0
	str r0, [r7, #20]	@ 000506a0 7861
.org 0x506a2
	adds r0, r7, #0	@ 000506a2 381c
.org 0x506a4
	bl 0x50a04	@ 000506a4 00f0aef9
.org 0x506a8
	b.n 0x509f8	@ 000506a8 a6e1
.org 0x506aa
	.byte 0x00	@ 000506aa data
.org 0x506ab
	.byte 0x00	@ 000506ab data
.org 0x506ac
	.byte 0xf0,0xdb,0x02,0x02	@ 000506ac data
.org 0x506b0
	.byte 0x10,0xe9,0x02,0x02	@ 000506b0 data
.org 0x506b4
	.byte 0x70,0x7d,0x85,0x08	@ 000506b4 data
.org 0x506b8
	adds r0, r7, #0	@ 000506b8 381c
.org 0x506ba
	adds r0, #140	@ 000506ba 8c30
.org 0x506bc
	ldr r0, [r0, #0]	@ 000506bc 0068
.org 0x506be
	movs r1, #1	@ 000506be 0121
.org 0x506c0
	ands r0, r1	@ 000506c0 0840
.org 0x506c2
	cmp r0, #0	@ 000506c2 0028
.org 0x506c4
	beq.n 0x506d2	@ 000506c4 05d0
.org 0x506c6
	ldr r2, [pc, #128]	@ 000506c6 204a
.org 0x506c8
	movs r0, #7	@ 000506c8 0720
.org 0x506ca
	adds r1, r7, #0	@ 000506ca 391c
.org 0x506cc
	bl 0x2adac	@ 000506cc daf76efb
.org 0x506d0
	str r0, [r7, #44]	@ 000506d0 f862
.org 0x506d2
	ldr r0, [r7, #44]	@ 000506d2 f86a
.org 0x506d4
	cmp r0, #0	@ 000506d4 0028
.org 0x506d6
	beq.n 0x506e4	@ 000506d6 05d0
.org 0x506d8
	bl 0x2b3e4	@ 000506d8 daf784fe
.org 0x506dc
	cmp r0, #0	@ 000506dc 0028
.org 0x506de
	beq.n 0x506e4	@ 000506de 01d0
.org 0x506e0
	movs r0, #0	@ 000506e0 0020
.org 0x506e2
	str r0, [r7, #44]	@ 000506e2 f862
.org 0x506e4
	adds r1, r7, #0	@ 000506e4 391c
.org 0x506e6
	adds r1, #180	@ 000506e6 b431
.org 0x506e8
	ldrh r0, [r1, #30]	@ 000506e8 c88b
.org 0x506ea
	adds r6, r1, #0	@ 000506ea 0e1c
.org 0x506ec
	cmp r0, #0	@ 000506ec 0028
.org 0x506ee
	beq.n 0x506f4	@ 000506ee 01d0
.org 0x506f0
	subs r0, #1	@ 000506f0 0138
.org 0x506f2
	strh r0, [r1, #30]	@ 000506f2 c883
.org 0x506f4
	ldrh r0, [r1, #28]	@ 000506f4 888b
.org 0x506f6
	cmp r0, #0	@ 000506f6 0028
.org 0x506f8
	beq.n 0x506fc	@ 000506f8 00d0
.org 0x506fa
	b.n 0x509a8	@ 000506fa 55e1
.org 0x506fc
	movs r2, #158	@ 000506fc 9e22
.org 0x506fe
	lsls r2, r2, #2	@ 000506fe 9200
.org 0x50700
	adds r0, r4, r2	@ 00050700 a018
.org 0x50702
	ldrb r0, [r0, #0]	@ 00050702 0078
.org 0x50704
	cmp r0, #0	@ 00050704 0028
.org 0x50706
	bne.n 0x5070a	@ 00050706 00d1
.org 0x50708
	b.n 0x509ac	@ 00050708 50e1
.org 0x5070a
	ldr r0, [pc, #64]	@ 0005070a 1048
.org 0x5070c
	ldrh r1, [r0, #8]	@ 0005070c 0189
.org 0x5070e
	movs r0, #8	@ 0005070e 0820
.org 0x50710
	ands r0, r1	@ 00050710 0840
.org 0x50712
	cmp r0, #0	@ 00050712 0028
.org 0x50714
	beq.n 0x50718	@ 00050714 00d0
.org 0x50716
	b.n 0x509ac	@ 00050716 49e1
.org 0x50718
	ldr r2, [pc, #52]	@ 00050718 0d4a
.org 0x5071a
	ldr r1, [r2, #0]	@ 0005071a 1168
.org 0x5071c
	ldr r0, [pc, #52]	@ 0005071c 0d48
.org 0x5071e
	muls r0, r1	@ 0005071e 4843
.org 0x50720
	ldr r3, [pc, #52]	@ 00050720 0d4b
.org 0x50722
	adds r0, r0, r3	@ 00050722 c018
.org 0x50724
	lsls r0, r0, #1	@ 00050724 4000
.org 0x50726
	lsrs r1, r0, #1	@ 00050726 4108
.org 0x50728
	str r1, [r2, #0]	@ 00050728 1160
.org 0x5072a
	lsrs r1, r0, #17	@ 0005072a 410c
.org 0x5072c
	movs r0, #31	@ 0005072c 1f20
.org 0x5072e
	ands r1, r0	@ 0005072e 0140
.org 0x50730
	adds r0, r7, #0	@ 00050730 381c
.org 0x50732
	adds r0, #164	@ 00050732 a430
.org 0x50734
	movs r3, #0	@ 00050734 0023
.org 0x50736
	ldrsh r0, [r0, r3]	@ 00050736 c05e
.org 0x50738
	cmp r0, #32	@ 00050738 2028
.org 0x5073a
	ble.n 0x5075c	@ 0005073a 0fdd
.org 0x5073c
	movs r3, #3	@ 0005073c 0323
.org 0x5073e
	cmp r1, #21	@ 0005073e 1529
.org 0x50740
	bhi.n 0x5076a	@ 00050740 13d8
.org 0x50742
	movs r3, #2	@ 00050742 0223
.org 0x50744
	b.n 0x5076a	@ 00050744 11e0
.org 0x50746
	.byte 0x00	@ 00050746 data
.org 0x50747
	.byte 0x00	@ 00050747 data
.org 0x50748
	.byte 0xd4,0x81,0x85,0x08	@ 00050748 data
.org 0x5074c
	.byte 0x10,0xe9,0x02,0x02	@ 0005074c data
.org 0x50750
	.byte 0x38,0xdc,0x02,0x02	@ 00050750 data
.org 0x50754
	.byte 0xfd,0x43,0x03,0x00	@ 00050754 data
.org 0x50758
	.byte 0xc3,0x9e,0x26,0x00	@ 00050758 data
.org 0x5075c
	movs r3, #2	@ 0005075c 0223
.org 0x5075e
	cmp r1, #5	@ 0005075e 0529
.org 0x50760
	bls.n 0x5076a	@ 00050760 03d9
.org 0x50762
	movs r3, #4	@ 00050762 0423
.org 0x50764
	cmp r1, #21	@ 00050764 1529
.org 0x50766
	bhi.n 0x5076a	@ 00050766 00d8
.org 0x50768
	movs r3, #3	@ 00050768 0323
.org 0x5076a
	cmp r3, #2	@ 0005076a 022b
.org 0x5076c
	bne.n 0x5081c	@ 0005076c 56d1
.org 0x5076e
	ldr r2, [pc, #52]	@ 0005076e 0d4a
.org 0x50770
	ldr r1, [r2, #0]	@ 00050770 1168
.org 0x50772
	ldr r0, [pc, #52]	@ 00050772 0d48
.org 0x50774
	muls r0, r1	@ 00050774 4843
.org 0x50776
	ldr r1, [pc, #52]	@ 00050776 0d49
.org 0x50778
	adds r0, r0, r1	@ 00050778 4018
.org 0x5077a
	lsls r0, r0, #1	@ 0005077a 4000
.org 0x5077c
	lsrs r1, r0, #1	@ 0005077c 4108
.org 0x5077e
	str r1, [r2, #0]	@ 0005077e 1160
.org 0x50780
	lsrs r0, r0, #17	@ 00050780 400c
.org 0x50782
	movs r1, #1	@ 00050782 0121
.org 0x50784
	ands r0, r1	@ 00050784 0840
.org 0x50786
	cmp r0, #0	@ 00050786 0028
.org 0x50788
	beq.n 0x507b0	@ 00050788 12d0
.org 0x5078a
	ldr r0, [r6, #16]	@ 0005078a 3069
.org 0x5078c
	movs r2, #136	@ 0005078c 8822
.org 0x5078e
	lsls r2, r2, #8	@ 0005078e 1202
.org 0x50790
	adds r0, r0, r2	@ 00050790 8018
.org 0x50792
	ldr r1, [r6, #20]	@ 00050792 7169
.org 0x50794
	movs r3, #128	@ 00050794 8023
.org 0x50796
	lsls r3, r3, #6	@ 00050796 9b01
.org 0x50798
	adds r1, r1, r3	@ 00050798 c918
.org 0x5079a
	movs r2, #0	@ 0005079a 0022
.org 0x5079c
	bl 0x920fc	@ 0005079c 41f0aefc
.org 0x507a0
	b.n 0x507c4	@ 000507a0 10e0
.org 0x507a2
	.byte 0x00	@ 000507a2 data
.org 0x507a3
	.byte 0x00	@ 000507a3 data
.org 0x507a4
	.byte 0x38,0xdc,0x02,0x02	@ 000507a4 data
.org 0x507a8
	.byte 0xfd,0x43,0x03,0x00	@ 000507a8 data
.org 0x507ac
	.byte 0xc3,0x9e,0x26,0x00	@ 000507ac data
.org 0x507b0
	ldr r0, [r6, #16]	@ 000507b0 3069
.org 0x507b2
	movs r1, #136	@ 000507b2 8821
.org 0x507b4
	lsls r1, r1, #8	@ 000507b4 0902
.org 0x507b6
	adds r0, r0, r1	@ 000507b6 4018
.org 0x507b8
	ldr r1, [r6, #20]	@ 000507b8 7169
.org 0x507ba
	ldr r2, [pc, #52]	@ 000507ba 0d4a
.org 0x507bc
	adds r1, r1, r2	@ 000507bc 8918
.org 0x507be
	movs r2, #0	@ 000507be 0022
.org 0x507c0
	bl 0x920fc	@ 000507c0 41f09cfc
.org 0x507c4
	ldr r2, [pc, #44]	@ 000507c4 0b4a
.org 0x507c6
	ldr r1, [r2, #0]	@ 000507c6 1168
.org 0x507c8
	ldr r0, [pc, #44]	@ 000507c8 0b48
.org 0x507ca
	muls r0, r1	@ 000507ca 4843
.org 0x507cc
	ldr r3, [pc, #44]	@ 000507cc 0b4b
.org 0x507ce
	adds r0, r0, r3	@ 000507ce c018
.org 0x507d0
	lsls r0, r0, #1	@ 000507d0 4000
.org 0x507d2
	lsrs r1, r0, #1	@ 000507d2 4108
.org 0x507d4
	str r1, [r2, #0]	@ 000507d4 1160
.org 0x507d6
	lsrs r0, r0, #17	@ 000507d6 400c
.org 0x507d8
	movs r1, #1	@ 000507d8 0121
.org 0x507da
	ands r0, r1	@ 000507da 0840
.org 0x507dc
	cmp r0, #0	@ 000507dc 0028
.org 0x507de
	beq.n 0x50804	@ 000507de 11d0
.org 0x507e0
	ldr r0, [r6, #16]	@ 000507e0 3069
.org 0x507e2
	ldr r1, [pc, #28]	@ 000507e2 0749
.org 0x507e4
	adds r0, r0, r1	@ 000507e4 4018
.org 0x507e6
	ldr r1, [r6, #20]	@ 000507e6 7169
.org 0x507e8
	movs r2, #128	@ 000507e8 8022
.org 0x507ea
	lsls r2, r2, #6	@ 000507ea 9201
.org 0x507ec
	adds r1, r1, r2	@ 000507ec 8918
.org 0x507ee
	b.n 0x50938	@ 000507ee a3e0
.org 0x507f0
	.byte 0x00,0xe0,0xff,0xff	@ 000507f0 data
.org 0x507f4
	.byte 0x38,0xdc,0x02,0x02	@ 000507f4 data
.org 0x507f8
	.byte 0xfd,0x43,0x03,0x00	@ 000507f8 data
.org 0x507fc
	.byte 0xc3,0x9e,0x26,0x00	@ 000507fc data
.org 0x50800
	.byte 0x00,0x78,0xff,0xff	@ 00050800 data
.org 0x50804
	ldr r0, [r6, #16]	@ 00050804 3069
.org 0x50806
	ldr r3, [pc, #12]	@ 00050806 034b
.org 0x50808
	adds r0, r0, r3	@ 00050808 c018
.org 0x5080a
	ldr r1, [r6, #20]	@ 0005080a 7169
.org 0x5080c
	ldr r2, [pc, #8]	@ 0005080c 024a
.org 0x5080e
	adds r1, r1, r2	@ 0005080e 8918
.org 0x50810
	b.n 0x50938	@ 00050810 92e0
.org 0x50812
	.byte 0x00	@ 00050812 data
.org 0x50813
	.byte 0x00	@ 00050813 data
.org 0x50814
	.byte 0x00,0x78,0xff,0xff	@ 00050814 data
.org 0x50818
	.byte 0x00,0xe0,0xff,0xff	@ 00050818 data
.org 0x5081c
	cmp r3, #3	@ 0005081c 032b
.org 0x5081e
	beq.n 0x50822	@ 0005081e 00d0
.org 0x50820
	b.n 0x50948	@ 00050820 92e0
.org 0x50822
	ldr r1, [r2, #0]	@ 00050822 1168
.org 0x50824
	ldr r0, [pc, #32]	@ 00050824 0848
.org 0x50826
	muls r0, r1	@ 00050826 4843
.org 0x50828
	ldr r1, [pc, #32]	@ 00050828 0849
.org 0x5082a
	adds r0, r0, r1	@ 0005082a 4018
.org 0x5082c
	lsls r0, r0, #1	@ 0005082c 4000
.org 0x5082e
	lsrs r1, r0, #1	@ 0005082e 4108
.org 0x50830
	str r1, [r2, #0]	@ 00050830 1160
.org 0x50832
	lsrs r0, r0, #17	@ 00050832 400c
.org 0x50834
	ands r0, r3	@ 00050834 1840
.org 0x50836
	cmp r0, #1	@ 00050836 0128
.org 0x50838
	beq.n 0x50890	@ 00050838 2ad0
.org 0x5083a
	cmp r0, #1	@ 0005083a 0128
.org 0x5083c
	bcc.n 0x50850	@ 0005083c 08d3
.org 0x5083e
	cmp r0, #2	@ 0005083e 0228
.org 0x50840
	beq.n 0x508cc	@ 00050840 44d0
.org 0x50842
	cmp r0, #3	@ 00050842 0328
.org 0x50844
	beq.n 0x50908	@ 00050844 60d0
.org 0x50846
	b.n 0x50990	@ 00050846 a3e0
.org 0x50848
	.byte 0xfd,0x43,0x03,0x00	@ 00050848 data
.org 0x5084c
	.byte 0xc3,0x9e,0x26,0x00	@ 0005084c data
.org 0x50850
	ldr r0, [r6, #16]	@ 00050850 3069
.org 0x50852
	movs r2, #136	@ 00050852 8822
.org 0x50854
	lsls r2, r2, #8	@ 00050854 1202
.org 0x50856
	adds r0, r0, r2	@ 00050856 8018
.org 0x50858
	ldr r1, [r6, #20]	@ 00050858 7169
.org 0x5085a
	ldr r3, [pc, #44]	@ 0005085a 0b4b
.org 0x5085c
	adds r1, r1, r3	@ 0005085c c918
.org 0x5085e
	movs r2, #0	@ 0005085e 0022
.org 0x50860
	bl 0x920fc	@ 00050860 41f04cfc
.org 0x50864
	ldr r0, [r6, #16]	@ 00050864 3069
.org 0x50866
	ldr r1, [pc, #36]	@ 00050866 0949
.org 0x50868
	adds r0, r0, r1	@ 00050868 4018
.org 0x5086a
	ldr r1, [r6, #20]	@ 0005086a 7169
.org 0x5086c
	movs r2, #128	@ 0005086c 8022
.org 0x5086e
	lsls r2, r2, #6	@ 0005086e 9201
.org 0x50870
	adds r1, r1, r2	@ 00050870 8918
.org 0x50872
	movs r2, #1	@ 00050872 0122
.org 0x50874
	bl 0x920fc	@ 00050874 41f042fc
.org 0x50878
	ldr r0, [r6, #16]	@ 00050878 3069
.org 0x5087a
	ldr r3, [pc, #16]	@ 0005087a 044b
.org 0x5087c
	adds r0, r0, r3	@ 0005087c c018
.org 0x5087e
	ldr r1, [r6, #20]	@ 0005087e 7169
.org 0x50880
	ldr r2, [pc, #4]	@ 00050880 014a
.org 0x50882
	adds r1, r1, r2	@ 00050882 8918
.org 0x50884
	b.n 0x50938	@ 00050884 58e0
.org 0x50886
	.byte 0x00	@ 00050886 data
.org 0x50887
	.byte 0x00	@ 00050887 data
.org 0x50888
	.byte 0x00,0xe0,0xff,0xff	@ 00050888 data
.org 0x5088c
	.byte 0x00,0x78,0xff,0xff	@ 0005088c data
.org 0x50890
	ldr r0, [r6, #16]	@ 00050890 3069
.org 0x50892
	movs r3, #136	@ 00050892 8823
.org 0x50894
	lsls r3, r3, #8	@ 00050894 1b02
.org 0x50896
	adds r0, r0, r3	@ 00050896 c018
.org 0x50898
	ldr r1, [r6, #20]	@ 00050898 7169
.org 0x5089a
	movs r4, #128	@ 0005089a 8024
.org 0x5089c
	lsls r4, r4, #6	@ 0005089c a401
.org 0x5089e
	adds r1, r1, r4	@ 0005089e 0919
.org 0x508a0
	movs r2, #0	@ 000508a0 0022
.org 0x508a2
	bl 0x920fc	@ 000508a2 41f02bfc
.org 0x508a6
	ldr r0, [r6, #16]	@ 000508a6 3069
.org 0x508a8
	ldr r1, [pc, #24]	@ 000508a8 0649
.org 0x508aa
	adds r0, r0, r1	@ 000508aa 4018
.org 0x508ac
	ldr r1, [r6, #20]	@ 000508ac 7169
.org 0x508ae
	adds r1, r1, r4	@ 000508ae 0919
.org 0x508b0
	movs r2, #1	@ 000508b0 0122
.org 0x508b2
	bl 0x920fc	@ 000508b2 41f023fc
.org 0x508b6
	ldr r0, [r6, #16]	@ 000508b6 3069
.org 0x508b8
	ldr r2, [pc, #8]	@ 000508b8 024a
.org 0x508ba
	adds r0, r0, r2	@ 000508ba 8018
.org 0x508bc
	ldr r1, [r6, #20]	@ 000508bc 7169
.org 0x508be
	ldr r3, [pc, #8]	@ 000508be 024b
.org 0x508c0
	adds r1, r1, r3	@ 000508c0 c918
.org 0x508c2
	b.n 0x50938	@ 000508c2 39e0
.org 0x508c4
	.byte 0x00,0x78,0xff,0xff	@ 000508c4 data
.org 0x508c8
	.byte 0x00,0xe0,0xff,0xff	@ 000508c8 data
.org 0x508cc
	ldr r0, [r6, #16]	@ 000508cc 3069
.org 0x508ce
	movs r4, #136	@ 000508ce 8824
.org 0x508d0
	lsls r4, r4, #8	@ 000508d0 2402
.org 0x508d2
	adds r0, r0, r4	@ 000508d2 0019
.org 0x508d4
	ldr r1, [r6, #20]	@ 000508d4 7169
.org 0x508d6
	movs r2, #128	@ 000508d6 8022
.org 0x508d8
	lsls r2, r2, #6	@ 000508d8 9201
.org 0x508da
	adds r1, r1, r2	@ 000508da 8918
.org 0x508dc
	movs r2, #0	@ 000508dc 0022
.org 0x508de
	bl 0x920fc	@ 000508de 41f00dfc
.org 0x508e2
	ldr r0, [r6, #16]	@ 000508e2 3069
.org 0x508e4
	adds r0, r0, r4	@ 000508e4 0019
.org 0x508e6
	ldr r1, [r6, #20]	@ 000508e6 7169
.org 0x508e8
	ldr r3, [pc, #20]	@ 000508e8 054b
.org 0x508ea
	adds r1, r1, r3	@ 000508ea c918
.org 0x508ec
	movs r2, #0	@ 000508ec 0022
.org 0x508ee
	bl 0x920fc	@ 000508ee 41f005fc
.org 0x508f2
	ldr r0, [r6, #16]	@ 000508f2 3069
.org 0x508f4
	ldr r1, [pc, #12]	@ 000508f4 0349
.org 0x508f6
	adds r0, r0, r1	@ 000508f6 4018
.org 0x508f8
	ldr r1, [r6, #20]	@ 000508f8 7169
.org 0x508fa
	ldr r2, [pc, #4]	@ 000508fa 014a
.org 0x508fc
	adds r1, r1, r2	@ 000508fc 8918
.org 0x508fe
	b.n 0x50938	@ 000508fe 1be0
.org 0x50900
	.byte 0x00,0xe0,0xff,0xff	@ 00050900 data
.org 0x50904
	.byte 0x00,0x78,0xff,0xff	@ 00050904 data
.org 0x50908
	ldr r0, [r6, #16]	@ 00050908 3069
.org 0x5090a
	movs r4, #136	@ 0005090a 8824
.org 0x5090c
	lsls r4, r4, #8	@ 0005090c 2402
.org 0x5090e
	adds r0, r0, r4	@ 0005090e 0019
.org 0x50910
	ldr r1, [r6, #20]	@ 00050910 7169
.org 0x50912
	movs r5, #128	@ 00050912 8025
.org 0x50914
	lsls r5, r5, #6	@ 00050914 ad01
.org 0x50916
	adds r1, r1, r5	@ 00050916 4919
.org 0x50918
	movs r2, #0	@ 00050918 0022
.org 0x5091a
	bl 0x920fc	@ 0005091a 41f0effb
.org 0x5091e
	ldr r0, [r6, #16]	@ 0005091e 3069
.org 0x50920
	adds r0, r0, r4	@ 00050920 0019
.org 0x50922
	ldr r1, [r6, #20]	@ 00050922 7169
.org 0x50924
	ldr r3, [pc, #24]	@ 00050924 064b
.org 0x50926
	adds r1, r1, r3	@ 00050926 c918
.org 0x50928
	movs r2, #0	@ 00050928 0022
.org 0x5092a
	bl 0x920fc	@ 0005092a 41f0e7fb
.org 0x5092e
	ldr r0, [r6, #16]	@ 0005092e 3069
.org 0x50930
	ldr r1, [pc, #16]	@ 00050930 0449
.org 0x50932
	adds r0, r0, r1	@ 00050932 4018
.org 0x50934
	ldr r1, [r6, #20]	@ 00050934 7169
.org 0x50936
	adds r1, r1, r5	@ 00050936 4919
.org 0x50938
	movs r2, #1	@ 00050938 0122
.org 0x5093a
	bl 0x920fc	@ 0005093a 41f0dffb
.org 0x5093e
	b.n 0x50990	@ 0005093e 27e0
.org 0x50940
	.byte 0x00,0xe0,0xff,0xff	@ 00050940 data
.org 0x50944
	.byte 0x00,0x78,0xff,0xff	@ 00050944 data
.org 0x50948
	ldr r0, [r6, #16]	@ 00050948 3069
.org 0x5094a
	movs r4, #136	@ 0005094a 8824
.org 0x5094c
	lsls r4, r4, #8	@ 0005094c 2402
.org 0x5094e
	adds r0, r0, r4	@ 0005094e 0019
.org 0x50950
	ldr r1, [r6, #20]	@ 00050950 7169
.org 0x50952
	movs r5, #128	@ 00050952 8025
.org 0x50954
	lsls r5, r5, #6	@ 00050954 ad01
.org 0x50956
	adds r1, r1, r5	@ 00050956 4919
.org 0x50958
	movs r2, #0	@ 00050958 0022
.org 0x5095a
	bl 0x920fc	@ 0005095a 41f0cffb
.org 0x5095e
	ldr r0, [r6, #16]	@ 0005095e 3069
.org 0x50960
	adds r0, r0, r4	@ 00050960 0019
.org 0x50962
	ldr r1, [r6, #20]	@ 00050962 7169
.org 0x50964
	ldr r2, [pc, #56]	@ 00050964 0e4a
.org 0x50966
	adds r1, r1, r2	@ 00050966 8918
.org 0x50968
	movs r2, #0	@ 00050968 0022
.org 0x5096a
	bl 0x920fc	@ 0005096a 41f0c7fb
.org 0x5096e
	ldr r0, [r6, #16]	@ 0005096e 3069
.org 0x50970
	ldr r3, [pc, #48]	@ 00050970 0c4b
.org 0x50972
	adds r0, r0, r3	@ 00050972 c018
.org 0x50974
	ldr r1, [r6, #20]	@ 00050974 7169
.org 0x50976
	adds r1, r1, r5	@ 00050976 4919
.org 0x50978
	movs r2, #1	@ 00050978 0122
