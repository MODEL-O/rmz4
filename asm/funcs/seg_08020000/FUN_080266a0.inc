@ FUN_080266a0  entry 0x080266a0  size 2196
.thumb
.org 0x266a0
FUN_080266a0:
	push {r4, r5, r6, r7, lr}	@ 000266a0 f0b5
.org 0x266a2
	mov r7, r9	@ 000266a2 4f46
.org 0x266a4
	mov r6, r8	@ 000266a4 4646
.org 0x266a6
	push {r6, r7}	@ 000266a6 c0b4
.org 0x266a8
	sub sp, #4	@ 000266a8 81b0
.org 0x266aa
	adds r7, r0, #0	@ 000266aa 071c
.org 0x266ac
	ldr r6, [r7, #32]	@ 000266ac 3e6a
.org 0x266ae
	movs r0, #190	@ 000266ae be20
.org 0x266b0
	lsls r0, r0, #1	@ 000266b0 4000
.org 0x266b2
	adds r5, r7, r0	@ 000266b2 3d18
.org 0x266b4
	ldrb r0, [r5, #0]	@ 000266b4 2878
.org 0x266b6
	cmp r0, #0	@ 000266b6 0028
.org 0x266b8
	beq.n 0x266bc	@ 000266b8 00d0
.org 0x266ba
	b.n 0x2688c	@ 000266ba e7e0
.org 0x266bc
	ldr r2, [pc, #112]	@ 000266bc 1c4a
.org 0x266be
	ldrh r1, [r2, #8]	@ 000266be 1189
.org 0x266c0
	movs r0, #1	@ 000266c0 0120
.org 0x266c2
	movs r3, #0	@ 000266c2 0023
.org 0x266c4
	mov r8, r3	@ 000266c4 9846
.org 0x266c6
	orrs r0, r1	@ 000266c6 0843
.org 0x266c8
	strh r0, [r2, #8]	@ 000266c8 1081
.org 0x266ca
	ldr r6, [pc, #104]	@ 000266ca 1a4e
.org 0x266cc
	ldrb r1, [r6, #4]	@ 000266cc 3179
.org 0x266ce
	movs r0, #8	@ 000266ce 0820
.org 0x266d0
	orrs r0, r1	@ 000266d0 0843
.org 0x266d2
	strb r0, [r6, #4]	@ 000266d2 3071
.org 0x266d4
	ldrb r4, [r2, #2]	@ 000266d4 9478
.org 0x266d6
	cmp r4, #0	@ 000266d6 002c
.org 0x266d8
	bne.n 0x26740	@ 000266d8 32d1
.org 0x266da
	movs r3, #0	@ 000266da 0023
.org 0x266dc
	adds r2, #16	@ 000266dc 1032
.org 0x266de
	mov r9, r2	@ 000266de 9146
.org 0x266e0
	ldr r0, [pc, #84]	@ 000266e0 1548
.org 0x266e2
	mov ip, r0	@ 000266e2 8446
.org 0x266e4
	ldr r1, [pc, #84]	@ 000266e4 1549
.org 0x266e6
	mov r8, r1	@ 000266e6 8846
.org 0x266e8
	adds r5, r6, #4	@ 000266e8 351d
.org 0x266ea
	movs r6, #7	@ 000266ea 0726
.org 0x266ec
	movs r4, #1	@ 000266ec 0124
.org 0x266ee
	lsls r0, r3, #1	@ 000266ee 5800
.org 0x266f0
	add r0, r8	@ 000266f0 4044
.org 0x266f2
	ldrh r1, [r0, #0]	@ 000266f2 0188
.org 0x266f4
	lsrs r2, r1, #3	@ 000266f4 ca08
.org 0x266f6
	adds r2, r2, r5	@ 000266f6 5219
.org 0x266f8
	adds r0, r6, #0	@ 000266f8 301c
.org 0x266fa
	ands r0, r1	@ 000266fa 0840
.org 0x266fc
	adds r1, r4, #0	@ 000266fc 211c
.org 0x266fe
	lsls r1, r0	@ 000266fe 8140
.org 0x26700
	ldrb r0, [r2, #0]	@ 00026700 1078
.org 0x26702
	bics r0, r1	@ 00026702 8843
.org 0x26704
	strb r0, [r2, #0]	@ 00026704 1070
.org 0x26706
	adds r0, r3, #1	@ 00026706 581c
.org 0x26708
	lsls r0, r0, #24	@ 00026708 0006
.org 0x2670a
	lsrs r3, r0, #24	@ 0002670a 030e
.org 0x2670c
	cmp r3, #7	@ 0002670c 072b
.org 0x2670e
	bls.n 0x266ee	@ 0002670e eed9
.org 0x26710
	mov r2, ip	@ 00026710 6246
.org 0x26712
	ldr r0, [r2, #64]	@ 00026712 106c
.org 0x26714
	ldr r1, [r0, #0]	@ 00026714 0168
.org 0x26716
	mov r0, r9	@ 00026716 4846
.org 0x26718
	bl 0x275f0	@ 00026718 00f06aff
.org 0x2671c
	movs r0, #1	@ 0002671c 0120
.org 0x2671e
	bl 0x1f63c	@ 0002671e f8f78dff
.org 0x26722
	movs r3, #190	@ 00026722 be23
.org 0x26724
	lsls r3, r3, #1	@ 00026724 5b00
.org 0x26726
	adds r1, r7, r3	@ 00026726 f918
.org 0x26728
	movs r0, #1	@ 00026728 0120
.org 0x2672a
	strb r0, [r1, #0]	@ 0002672a 0870
.org 0x2672c
	bl 0x27170	@ 0002672c 00f020fd
.org 0x26730
	.byte 0x10,0xe9,0x02,0x02	@ 00026730 data
.org 0x26734
	.byte 0xb0,0xe8,0x02,0x02	@ 00026734 data
.org 0x26738
	.byte 0xf8,0x2c,0x84,0x08	@ 00026738 data
.org 0x2673c
	.byte 0x44,0x2c,0x84,0x08	@ 0002673c data
.org 0x26740
	cmp r4, #1	@ 00026740 012c
.org 0x26742
	bne.n 0x26764	@ 00026742 0fd1
.org 0x26744
	adds r0, r2, #0	@ 00026744 101c
.org 0x26746
	adds r0, #16	@ 00026746 1030
.org 0x26748
	ldr r1, [pc, #20]	@ 00026748 0549
.org 0x2674a
	ldr r1, [r1, #64]	@ 0002674a 096c
.org 0x2674c
	ldr r1, [r1, #4]	@ 0002674c 4968
.org 0x2674e
	bl 0x275f0	@ 0002674e 00f04fff
.org 0x26752
	movs r0, #2	@ 00026752 0220
.org 0x26754
	bl 0x1f63c	@ 00026754 f8f772ff
.org 0x26758
	movs r0, #2	@ 00026758 0220
.org 0x2675a
	bl 0x2716e	@ 0002675a 00f008fd
.org 0x2675e
	.byte 0x00	@ 0002675e data
.org 0x2675f
	.byte 0x00	@ 0002675f data
.org 0x26760
	.byte 0xf8,0x2c,0x84,0x08	@ 00026760 data
.org 0x26764
	cmp r4, #2	@ 00026764 022c
.org 0x26766
	bne.n 0x26778	@ 00026766 07d1
.org 0x26768
	adds r0, r2, #0	@ 00026768 101c
.org 0x2676a
	adds r0, #16	@ 0002676a 1030
.org 0x2676c
	ldr r1, [pc, #4]	@ 0002676c 0149
.org 0x2676e
	ldr r1, [r1, #64]	@ 0002676e 096c
.org 0x26770
	ldr r1, [r1, #8]	@ 00026770 8968
.org 0x26772
	b.n 0x267bc	@ 00026772 23e0
.org 0x26774
	.byte 0xf8,0x2c,0x84,0x08	@ 00026774 data
.org 0x26778
	cmp r4, #3	@ 00026778 032c
.org 0x2677a
	bne.n 0x26794	@ 0002677a 0bd1
.org 0x2677c
	adds r0, r2, #0	@ 0002677c 101c
.org 0x2677e
	adds r0, #16	@ 0002677e 1030
.org 0x26780
	ldr r1, [pc, #12]	@ 00026780 0349
.org 0x26782
	ldr r1, [r1, #64]	@ 00026782 096c
.org 0x26784
	ldr r1, [r1, #12]	@ 00026784 c968
.org 0x26786
	bl 0x275f0	@ 00026786 00f033ff
.org 0x2678a
	movs r0, #4	@ 0002678a 0420
.org 0x2678c
	bl 0x2716e	@ 0002678c 00f0effc
.org 0x26790
	.byte 0xf8,0x2c,0x84,0x08	@ 00026790 data
.org 0x26794
	cmp r4, #4	@ 00026794 042c
.org 0x26796
	bne.n 0x267d0	@ 00026796 1bd1
.org 0x26798
	movs r0, #170	@ 00026798 aa20
.org 0x2679a
	lsls r0, r0, #1	@ 0002679a 4000
.org 0x2679c
	adds r1, r2, r0	@ 0002679c 1118
.org 0x2679e
	movs r0, #1	@ 0002679e 0120
.org 0x267a0
	str r0, [r1, #0]	@ 000267a0 0860
.org 0x267a2
	ldrh r0, [r2, #10]	@ 000267a2 5089
.org 0x267a4
	lsrs r0, r0, #8	@ 000267a4 000a
.org 0x267a6
	ldr r3, [pc, #32]	@ 000267a6 084b
.org 0x267a8
	adds r1, r7, r3	@ 000267a8 f918
.org 0x267aa
	strb r0, [r1, #0]	@ 000267aa 0870
.org 0x267ac
	adds r0, r2, #0	@ 000267ac 101c
.org 0x267ae
	adds r0, #16	@ 000267ae 1030
.org 0x267b0
	ldr r2, [pc, #24]	@ 000267b0 064a
.org 0x267b2
	ldrb r1, [r1, #0]	@ 000267b2 0978
.org 0x267b4
	ldr r2, [r2, #64]	@ 000267b4 126c
.org 0x267b6
	lsls r1, r1, #3	@ 000267b6 c900
.org 0x267b8
	adds r1, r1, r2	@ 000267b8 8918
.org 0x267ba
	ldr r1, [r1, #16]	@ 000267ba 0969
.org 0x267bc
	bl 0x275f0	@ 000267bc 00f018ff
.org 0x267c0
	strb r4, [r5, #0]	@ 000267c0 2c70
.org 0x267c2
	bl 0x27170	@ 000267c2 00f0d5fc
.org 0x267c6
	.byte 0x00	@ 000267c6 data
.org 0x267c7
	.byte 0x00	@ 000267c7 data
.org 0x267c8
	.byte 0x7d,0x01,0x00,0x00	@ 000267c8 data
.org 0x267cc
	.byte 0xf8,0x2c,0x84,0x08	@ 000267cc data
.org 0x267d0
	cmp r4, #5	@ 000267d0 052c
.org 0x267d2
	bne.n 0x267fc	@ 000267d2 13d1
.org 0x267d4
	adds r0, r2, #0	@ 000267d4 101c
.org 0x267d6
	adds r0, #16	@ 000267d6 1030
.org 0x267d8
	ldr r1, [pc, #24]	@ 000267d8 0649
.org 0x267da
	ldr r1, [r1, #64]	@ 000267da 096c
.org 0x267dc
	ldr r1, [r1, #84]	@ 000267dc 496d
.org 0x267de
	bl 0x275f0	@ 000267de 00f007ff
.org 0x267e2
	movs r0, #7	@ 000267e2 0720
.org 0x267e4
	strb r0, [r5, #0]	@ 000267e4 2870
.org 0x267e6
	ldr r1, [pc, #16]	@ 000267e6 0449
.org 0x267e8
	adds r0, r7, r1	@ 000267e8 7818
.org 0x267ea
	mov r2, r8	@ 000267ea 4246
.org 0x267ec
	strb r2, [r0, #0]	@ 000267ec 0270
.org 0x267ee
	bl 0x27170	@ 000267ee 00f0bffc
.org 0x267f2
	.byte 0x00	@ 000267f2 data
.org 0x267f3
	.byte 0x00	@ 000267f3 data
.org 0x267f4
	.byte 0xf8,0x2c,0x84,0x08	@ 000267f4 data
.org 0x267f8
	.byte 0x7d,0x01,0x00,0x00	@ 000267f8 data
.org 0x267fc
	cmp r4, #6	@ 000267fc 062c
.org 0x267fe
	bne.n 0x26818	@ 000267fe 0bd1
.org 0x26800
	adds r0, r2, #0	@ 00026800 101c
.org 0x26802
	adds r0, #16	@ 00026802 1030
.org 0x26804
	ldr r1, [pc, #12]	@ 00026804 0349
.org 0x26806
	ldr r1, [r1, #64]	@ 00026806 096c
.org 0x26808
	ldr r1, [r1, #92]	@ 00026808 c96d
.org 0x2680a
	bl 0x275f0	@ 0002680a 00f0f1fe
.org 0x2680e
	movs r0, #9	@ 0002680e 0920
.org 0x26810
	bl 0x2716e	@ 00026810 00f0adfc
.org 0x26814
	.byte 0xf8,0x2c,0x84,0x08	@ 00026814 data
.org 0x26818
	cmp r4, #7	@ 00026818 072c
.org 0x2681a
	bne.n 0x2683c	@ 0002681a 0fd1
.org 0x2681c
	adds r0, r2, #0	@ 0002681c 101c
.org 0x2681e
	adds r0, #16	@ 0002681e 1030
.org 0x26820
	ldr r1, [pc, #20]	@ 00026820 0549
.org 0x26822
	ldr r1, [r1, #64]	@ 00026822 096c
.org 0x26824
	ldr r1, [r1, #100]	@ 00026824 496e
.org 0x26826
	bl 0x275f0	@ 00026826 00f0e3fe
.org 0x2682a
	movs r0, #6	@ 0002682a 0620
.org 0x2682c
	bl 0x1f63c	@ 0002682c f8f706ff
.org 0x26830
	movs r0, #10	@ 00026830 0a20
.org 0x26832
	bl 0x2716e	@ 00026832 00f09cfc
.org 0x26836
	.byte 0x00	@ 00026836 data
.org 0x26837
	.byte 0x00	@ 00026837 data
.org 0x26838
	.byte 0xf8,0x2c,0x84,0x08	@ 00026838 data
.org 0x2683c
	cmp r4, #8	@ 0002683c 082c
.org 0x2683e
	bne.n 0x26860	@ 0002683e 0fd1
.org 0x26840
	adds r0, r2, #0	@ 00026840 101c
.org 0x26842
	adds r0, #16	@ 00026842 1030
.org 0x26844
	ldr r1, [pc, #20]	@ 00026844 0549
.org 0x26846
	ldr r1, [r1, #64]	@ 00026846 096c
.org 0x26848
	ldr r1, [r1, #112]	@ 00026848 096f
.org 0x2684a
	bl 0x275f0	@ 0002684a 00f0d1fe
.org 0x2684e
	movs r0, #6	@ 0002684e 0620
.org 0x26850
	bl 0x1f63c	@ 00026850 f8f7f4fe
.org 0x26854
	movs r0, #13	@ 00026854 0d20
.org 0x26856
	bl 0x2716e	@ 00026856 00f08afc
.org 0x2685a
	.byte 0x00	@ 0002685a data
.org 0x2685b
	.byte 0x00	@ 0002685b data
.org 0x2685c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002685c data
.org 0x26860
	ldrb r0, [r2, #2]	@ 00026860 9078
.org 0x26862
	cmp r0, #9	@ 00026862 0928
.org 0x26864
	beq.n 0x2686a	@ 00026864 01d0
.org 0x26866
	bl 0x27170	@ 00026866 00f083fc
.org 0x2686a
	ldrh r1, [r2, #8]	@ 0002686a 1189
.org 0x2686c
	ldr r0, [pc, #20]	@ 0002686c 0548
.org 0x2686e
	ands r0, r1	@ 0002686e 0840
.org 0x26870
	ldr r1, [pc, #20]	@ 00026870 0549
.org 0x26872
	ands r0, r1	@ 00026872 0840
.org 0x26874
	strh r0, [r2, #8]	@ 00026874 1081
.org 0x26876
	movs r3, #190	@ 00026876 be23
.org 0x26878
	lsls r3, r3, #1	@ 00026878 5b00
.org 0x2687a
	adds r1, r7, r3	@ 0002687a f918
.org 0x2687c
	movs r0, #15	@ 0002687c 0f20
.org 0x2687e
	strb r0, [r1, #0]	@ 0002687e 0870
.org 0x26880
	bl 0x27170	@ 00026880 00f076fc
.org 0x26884
	.byte 0xbf,0xff,0x00,0x00	@ 00026884 data
.org 0x26888
	.byte 0xfe,0xff,0x00,0x00	@ 00026888 data
.org 0x2688c
	cmp r0, #1	@ 0002688c 0128
.org 0x2688e
	bne.n 0x2689c	@ 0002688e 05d1
.org 0x26890
	movs r0, #2	@ 00026890 0220
.org 0x26892
	bl 0x1f63c	@ 00026892 f8f7d3fe
.org 0x26896
	movs r0, #2	@ 00026896 0220
.org 0x26898
	bl 0x2716e	@ 00026898 00f069fc
.org 0x2689c
	cmp r0, #2	@ 0002689c 0228
.org 0x2689e
	bne.n 0x268c8	@ 0002689e 13d1
.org 0x268a0
	ldr r1, [r6, #84]	@ 000268a0 716d
.org 0x268a2
	ldr r0, [pc, #28]	@ 000268a2 0748
.org 0x268a4
	cmp r1, r0	@ 000268a4 8142
.org 0x268a6
	ble.n 0x268c8	@ 000268a6 0fdd
.org 0x268a8
	ldr r2, [pc, #24]	@ 000268a8 064a
.org 0x268aa
	ldrb r1, [r2, #1]	@ 000268aa 5178
.org 0x268ac
	movs r0, #2	@ 000268ac 0220
.org 0x268ae
	orrs r0, r1	@ 000268ae 0843
.org 0x268b0
	strb r0, [r2, #1]	@ 000268b0 5070
.org 0x268b2
	movs r0, #3	@ 000268b2 0320
.org 0x268b4
	bl 0x1f63c	@ 000268b4 f8f7c2fe
.org 0x268b8
	movs r0, #3	@ 000268b8 0320
.org 0x268ba
	bl 0x2716e	@ 000268ba 00f058fc
.org 0x268be
	.byte 0x00	@ 000268be data
.org 0x268bf
	.byte 0x00	@ 000268bf data
.org 0x268c0
	.byte 0xff,0x5f,0x09,0x00	@ 000268c0 data
.org 0x268c4
	.byte 0xe0,0x32,0x00,0x03	@ 000268c4 data
.org 0x268c8
	movs r0, #190	@ 000268c8 be20
.org 0x268ca
	lsls r0, r0, #1	@ 000268ca 4000
.org 0x268cc
	adds r3, r7, r0	@ 000268cc 3b18
.org 0x268ce
	ldrb r0, [r3, #0]	@ 000268ce 1878
.org 0x268d0
	cmp r0, #3	@ 000268d0 0328
.org 0x268d2
	bne.n 0x26910	@ 000268d2 1dd1
.org 0x268d4
	ldr r1, [r6, #84]	@ 000268d4 716d
.org 0x268d6
	ldr r0, [pc, #40]	@ 000268d6 0a48
.org 0x268d8
	cmp r1, r0	@ 000268d8 8142
.org 0x268da
	ble.n 0x26910	@ 000268da 19dd
.org 0x268dc
	ldr r2, [pc, #36]	@ 000268dc 094a
.org 0x268de
	ldrh r0, [r2, #20]	@ 000268de 908a
.org 0x268e0
	movs r1, #1	@ 000268e0 0121
.org 0x268e2
	ands r1, r0	@ 000268e2 0140
.org 0x268e4
	cmp r1, #0	@ 000268e4 0029
.org 0x268e6
	bne.n 0x26910	@ 000268e6 13d1
.org 0x268e8
	ldr r0, [pc, #28]	@ 000268e8 0748
.org 0x268ea
	strb r1, [r0, #1]	@ 000268ea 4170
.org 0x268ec
	movs r0, #0	@ 000268ec 0020
.org 0x268ee
	strh r1, [r2, #10]	@ 000268ee 5181
.org 0x268f0
	ldr r2, [pc, #24]	@ 000268f0 064a
.org 0x268f2
	adds r1, r7, r2	@ 000268f2 b918
.org 0x268f4
	strb r0, [r1, #0]	@ 000268f4 0870
.org 0x268f6
	movs r0, #4	@ 000268f6 0420
.org 0x268f8
	strb r0, [r3, #0]	@ 000268f8 1870
.org 0x268fa
	bl 0x27170	@ 000268fa 00f039fc
.org 0x268fe
	.byte 0x00	@ 000268fe data
.org 0x268ff
	.byte 0x00	@ 000268ff data
.org 0x26900
	.byte 0xff,0x4f,0x0a,0x00	@ 00026900 data
.org 0x26904
	.byte 0x10,0xe9,0x02,0x02	@ 00026904 data
.org 0x26908
	.byte 0xe0,0x32,0x00,0x03	@ 00026908 data
.org 0x2690c
	.byte 0x7d,0x01,0x00,0x00	@ 0002690c data
.org 0x26910
	movs r3, #190	@ 00026910 be23
.org 0x26912
	lsls r3, r3, #1	@ 00026912 5b00
.org 0x26914
	adds r5, r7, r3	@ 00026914 fd18
.org 0x26916
	ldrb r0, [r5, #0]	@ 00026916 2878
.org 0x26918
	cmp r0, #4	@ 00026918 0428
.org 0x2691a
	beq.n 0x2691e	@ 0002691a 00d0
.org 0x2691c
	b.n 0x26da8	@ 0002691c 44e2
.org 0x2691e
	ldr r3, [pc, #116]	@ 0002691e 1d4b
.org 0x26920
	ldrh r4, [r3, #8]	@ 00026920 1c89
.org 0x26922
	movs r0, #16	@ 00026922 1020
.org 0x26924
	ands r0, r4	@ 00026924 2040
.org 0x26926
	lsls r0, r0, #16	@ 00026926 0004
.org 0x26928
	lsrs r5, r0, #16	@ 00026928 050c
.org 0x2692a
	cmp r5, #0	@ 0002692a 002d
.org 0x2692c
	beq.n 0x26a04	@ 0002692c 6ad0
.org 0x2692e
	ldr r1, [pc, #104]	@ 0002692e 1a49
.org 0x26930
	ldrb r2, [r1, #0]	@ 00026930 0a78
.org 0x26932
	movs r0, #128	@ 00026932 8020
.org 0x26934
	orrs r0, r2	@ 00026934 1043
.org 0x26936
	strb r0, [r1, #0]	@ 00026936 0870
.org 0x26938
	ldrb r2, [r1, #1]	@ 00026938 4a78
.org 0x2693a
	movs r0, #2	@ 0002693a 0220
.org 0x2693c
	orrs r0, r2	@ 0002693c 1043
.org 0x2693e
	strb r0, [r1, #1]	@ 0002693e 4870
.org 0x26940
	ldr r1, [pc, #88]	@ 00026940 1649
.org 0x26942
	ands r1, r4	@ 00026942 2140
.org 0x26944
	ldr r0, [pc, #88]	@ 00026944 1648
.org 0x26946
	ands r1, r0	@ 00026946 0140
.org 0x26948
	ldrb r2, [r3, #18]	@ 00026948 9a7c
.org 0x2694a
	movs r0, #253	@ 0002694a fd20
.org 0x2694c
	ands r0, r2	@ 0002694c 1040
.org 0x2694e
	strb r0, [r3, #18]	@ 0002694e 9874
.org 0x26950
	movs r0, #1	@ 00026950 0120
.org 0x26952
	orrs r1, r0	@ 00026952 0143
.org 0x26954
	strh r1, [r3, #8]	@ 00026954 1981
.org 0x26956
	ldr r1, [pc, #76]	@ 00026956 1349
.org 0x26958
	ldr r2, [pc, #76]	@ 00026958 134a
.org 0x2695a
	ldr r0, [pc, #80]	@ 0002695a 1448
.org 0x2695c
	adds r4, r7, r0	@ 0002695c 3c18
.org 0x2695e
	ldrb r0, [r4, #0]	@ 0002695e 2078
.org 0x26960
	subs r0, #1	@ 00026960 0138
.org 0x26962
	lsls r0, r0, #1	@ 00026962 4000
.org 0x26964
	adds r0, r0, r2	@ 00026964 8018
.org 0x26966
	ldrh r0, [r0, #0]	@ 00026966 0088
.org 0x26968
	lsrs r2, r0, #3	@ 00026968 c208
.org 0x2696a
	adds r1, #4	@ 0002696a 0431
.org 0x2696c
	adds r2, r2, r1	@ 0002696c 5218
.org 0x2696e
	movs r1, #7	@ 0002696e 0721
.org 0x26970
	ands r1, r0	@ 00026970 0140
.org 0x26972
	movs r0, #1	@ 00026972 0120
.org 0x26974
	lsls r0, r1	@ 00026974 8840
.org 0x26976
	ldrb r1, [r2, #0]	@ 00026976 1178
.org 0x26978
	orrs r0, r1	@ 00026978 0843
.org 0x2697a
	strb r0, [r2, #0]	@ 0002697a 1070
.org 0x2697c
	ldrb r0, [r4, #0]	@ 0002697c 2078
.org 0x2697e
	cmp r0, #3	@ 0002697e 0328
.org 0x26980
	bne.n 0x269b4	@ 00026980 18d1
.org 0x26982
	adds r0, r3, #0	@ 00026982 181c
.org 0x26984
	adds r0, #16	@ 00026984 1030
.org 0x26986
	ldr r1, [pc, #40]	@ 00026986 0a49
.org 0x26988
	ldr r1, [r1, #64]	@ 00026988 096c
.org 0x2698a
	ldr r1, [r1, #124]	@ 0002698a c96f
.org 0x2698c
	bl 0x275f0	@ 0002698c 00f030fe
.org 0x26990
	b.n 0x269c2	@ 00026990 17e0
.org 0x26992
	.byte 0x00	@ 00026992 data
.org 0x26993
	.byte 0x00	@ 00026993 data
.org 0x26994
	.byte 0x10,0xe9,0x02,0x02	@ 00026994 data
.org 0x26998
	.byte 0xe0,0x32,0x00,0x03	@ 00026998 data
.org 0x2699c
	.byte 0xfd,0xff,0x00,0x00	@ 0002699c data
.org 0x269a0
	.byte 0xef,0xff,0x00,0x00	@ 000269a0 data
.org 0x269a4
	.byte 0xb0,0xe8,0x02,0x02	@ 000269a4 data
.org 0x269a8
	.byte 0x44,0x2c,0x84,0x08	@ 000269a8 data
.org 0x269ac
	.byte 0x7d,0x01,0x00,0x00	@ 000269ac data
.org 0x269b0
	.byte 0xf8,0x2c,0x84,0x08	@ 000269b0 data
.org 0x269b4
	adds r0, r3, #0	@ 000269b4 181c
.org 0x269b6
	adds r0, #16	@ 000269b6 1030
.org 0x269b8
	ldr r1, [pc, #60]	@ 000269b8 0f49
.org 0x269ba
	ldr r1, [r1, #64]	@ 000269ba 096c
.org 0x269bc
	ldr r1, [r1, #16]	@ 000269bc 0969
.org 0x269be
	bl 0x275f0	@ 000269be 00f017fe
.org 0x269c2
	ldr r2, [pc, #56]	@ 000269c2 0e4a
.org 0x269c4
	adds r1, r7, r2	@ 000269c4 b918
.org 0x269c6
	movs r0, #10	@ 000269c6 0a20
.org 0x269c8
	strb r0, [r1, #0]	@ 000269c8 0870
.org 0x269ca
	ldr r2, [pc, #52]	@ 000269ca 0d4a
.org 0x269cc
	ldrb r1, [r2, #7]	@ 000269cc d179
.org 0x269ce
	movs r0, #240	@ 000269ce f020
.org 0x269d0
	ands r0, r1	@ 000269d0 0840
.org 0x269d2
	cmp r0, #240	@ 000269d2 f028
.org 0x269d4
	beq.n 0x269d8	@ 000269d4 00d0
.org 0x269d6
	b.n 0x27170	@ 000269d6 cbe3
.org 0x269d8
	ldrb r1, [r2, #8]	@ 000269d8 117a
.org 0x269da
	movs r0, #15	@ 000269da 0f20
.org 0x269dc
	ands r0, r1	@ 000269dc 0840
.org 0x269de
	cmp r0, #15	@ 000269de 0f28
.org 0x269e0
	beq.n 0x269e4	@ 000269e0 00d0
.org 0x269e2
	b.n 0x27170	@ 000269e2 c5e3
.org 0x269e4
	ldrb r1, [r2, #4]	@ 000269e4 1179
.org 0x269e6
	movs r0, #247	@ 000269e6 f720
.org 0x269e8
	ands r0, r1	@ 000269e8 0840
.org 0x269ea
	strb r0, [r2, #4]	@ 000269ea 1071
.org 0x269ec
	movs r3, #190	@ 000269ec be23
.org 0x269ee
	lsls r3, r3, #1	@ 000269ee 5b00
.org 0x269f0
	adds r1, r7, r3	@ 000269f0 f918
.org 0x269f2
	movs r0, #5	@ 000269f2 0520
.org 0x269f4
	strb r0, [r1, #0]	@ 000269f4 0870
.org 0x269f6
	b.n 0x27170	@ 000269f6 bbe3
.org 0x269f8
	.byte 0xf8,0x2c,0x84,0x08	@ 000269f8 data
.org 0x269fc
	.byte 0x7d,0x01,0x00,0x00	@ 000269fc data
.org 0x26a00
	.byte 0xb0,0xe8,0x02,0x02	@ 00026a00 data
.org 0x26a04
	ldr r0, [pc, #52]	@ 00026a04 0d48
.org 0x26a06
	adds r4, r7, r0	@ 00026a06 3c18
.org 0x26a08
	ldrb r0, [r4, #0]	@ 00026a08 2078
.org 0x26a0a
	cmp r0, #10	@ 00026a0a 0a28
.org 0x26a0c
	bne.n 0x26a26	@ 00026a0c 0bd1
.org 0x26a0e
	ldr r0, [pc, #48]	@ 00026a0e 0c48
.org 0x26a10
	ldrb r2, [r0, #0]	@ 00026a10 0278
.org 0x26a12
	movs r1, #127	@ 00026a12 7f21
.org 0x26a14
	ands r1, r2	@ 00026a14 1140
.org 0x26a16
	strb r1, [r0, #0]	@ 00026a16 0170
.org 0x26a18
	strb r5, [r0, #1]	@ 00026a18 4570
.org 0x26a1a
	movs r0, #3	@ 00026a1a 0320
.org 0x26a1c
	str r3, [sp, #0]	@ 00026a1c 0093
.org 0x26a1e
	bl 0x1f63c	@ 00026a1e f8f70dfe
.org 0x26a22
	strb r5, [r4, #0]	@ 00026a22 2570
.org 0x26a24
	ldr r3, [sp, #0]	@ 00026a24 009b
.org 0x26a26
	ldrb r0, [r4, #0]	@ 00026a26 2078
.org 0x26a28
	cmp r0, #0	@ 00026a28 0028
.org 0x26a2a
	beq.n 0x26a44	@ 00026a2a 0bd0
.org 0x26a2c
	ldrb r0, [r3, #2]	@ 00026a2c 9878
.org 0x26a2e
	cmp r0, #4	@ 00026a2e 0428
.org 0x26a30
	beq.n 0x26a34	@ 00026a30 00d0
.org 0x26a32
	b.n 0x27170	@ 00026a32 9de3
.org 0x26a34
	movs r0, #3	@ 00026a34 0320
.org 0x26a36
	bl 0x1f63c	@ 00026a36 f8f701fe
.org 0x26a3a
	b.n 0x27170	@ 00026a3a 99e3
.org 0x26a3c
	.byte 0x7d,0x01,0x00,0x00	@ 00026a3c data
.org 0x26a40
	.byte 0xe0,0x32,0x00,0x03	@ 00026a40 data
.org 0x26a44
	ldr r0, [pc, #48]	@ 00026a44 0c48
.org 0x26a46
	ldr r2, [r6, #84]	@ 00026a46 726d
.org 0x26a48
	cmp r2, r0	@ 00026a48 8242
.org 0x26a4a
	bgt.n 0x26a4e	@ 00026a4a 00dc
.org 0x26a4c
	b.n 0x27170	@ 00026a4c 90e3
.org 0x26a4e
	ldr r0, [pc, #44]	@ 00026a4e 0b48
.org 0x26a50
	cmp r2, r0	@ 00026a50 8242
.org 0x26a52
	bgt.n 0x26abc	@ 00026a52 33dc
.org 0x26a54
	ldr r1, [r6, #88]	@ 00026a54 b16d
.org 0x26a56
	movs r0, #240	@ 00026a56 f020
.org 0x26a58
	lsls r0, r0, #11	@ 00026a58 c002
.org 0x26a5a
	cmp r1, r0	@ 00026a5a 8142
.org 0x26a5c
	ble.n 0x26abc	@ 00026a5c 2edd
.org 0x26a5e
	ldrh r1, [r3, #10]	@ 00026a5e 5989
.org 0x26a60
	movs r0, #1	@ 00026a60 0120
.org 0x26a62
	ands r0, r1	@ 00026a62 0840
.org 0x26a64
	cmp r0, #0	@ 00026a64 0028
.org 0x26a66
	bne.n 0x26a84	@ 00026a66 0dd1
.org 0x26a68
	adds r0, r3, #0	@ 00026a68 181c
.org 0x26a6a
	adds r0, #16	@ 00026a6a 1030
.org 0x26a6c
	ldr r1, [pc, #16]	@ 00026a6c 0449
.org 0x26a6e
	ldr r1, [r1, #64]	@ 00026a6e 096c
.org 0x26a70
	ldr r1, [r1, #20]	@ 00026a70 4969
.org 0x26a72
	bl 0x275f0	@ 00026a72 00f0bdfd
.org 0x26a76
	b.n 0x26a92	@ 00026a76 0ce0
.org 0x26a78
	.byte 0xff,0x3f,0x0b,0x00	@ 00026a78 data
.org 0x26a7c
	.byte 0xff,0x9f,0x14,0x00	@ 00026a7c data
.org 0x26a80
	.byte 0xf8,0x2c,0x84,0x08	@ 00026a80 data
.org 0x26a84
	adds r0, r3, #0	@ 00026a84 181c
.org 0x26a86
	adds r0, #16	@ 00026a86 1030
.org 0x26a88
	ldr r1, [pc, #36]	@ 00026a88 0949
.org 0x26a8a
	ldr r1, [r1, #64]	@ 00026a8a 096c
.org 0x26a8c
	ldr r1, [r1, #24]	@ 00026a8c 8969
.org 0x26a8e
	bl 0x275f0	@ 00026a8e 00f0affd
.org 0x26a92
	ldr r1, [pc, #32]	@ 00026a92 0849
.org 0x26a94
	adds r0, r7, r1	@ 00026a94 7818
.org 0x26a96
	movs r2, #1	@ 00026a96 0122
.org 0x26a98
	strb r2, [r0, #0]	@ 00026a98 0270
.org 0x26a9a
	ldr r3, [pc, #28]	@ 00026a9a 074b
.org 0x26a9c
	ldrb r0, [r3, #10]	@ 00026a9c 987a
.org 0x26a9e
	movs r1, #1	@ 00026a9e 0121
.org 0x26aa0
	orrs r0, r1	@ 00026aa0 0843
.org 0x26aa2
	lsls r2, r2, #8	@ 00026aa2 1202
.org 0x26aa4
	orrs r0, r2	@ 00026aa4 1043
.org 0x26aa6
	strh r0, [r3, #10]	@ 00026aa6 5881
.org 0x26aa8
	movs r0, #4	@ 00026aa8 0420
.org 0x26aaa
	bl 0x1f63c	@ 00026aaa f8f7c7fd
.org 0x26aae
	b.n 0x27170	@ 00026aae 5fe3
.org 0x26ab0
	.byte 0xf8,0x2c,0x84,0x08	@ 00026ab0 data
.org 0x26ab4
	.byte 0x7d,0x01,0x00,0x00	@ 00026ab4 data
.org 0x26ab8
	.byte 0x10,0xe9,0x02,0x02	@ 00026ab8 data
.org 0x26abc
	movs r0, #165	@ 00026abc a520
.org 0x26abe
	lsls r0, r0, #13	@ 00026abe 4003
.org 0x26ac0
	cmp r2, r0	@ 00026ac0 8242
.org 0x26ac2
	ble.n 0x26b28	@ 00026ac2 31dd
.org 0x26ac4
	ldr r1, [r6, #88]	@ 00026ac4 b16d
.org 0x26ac6
	movs r0, #160	@ 00026ac6 a020
.org 0x26ac8
	lsls r0, r0, #11	@ 00026ac8 c002
.org 0x26aca
	cmp r1, r0	@ 00026aca 8142
.org 0x26acc
	ble.n 0x26b28	@ 00026acc 2cdd
.org 0x26ace
	ldr r0, [pc, #32]	@ 00026ace 0848
.org 0x26ad0
	cmp r1, r0	@ 00026ad0 8142
.org 0x26ad2
	bgt.n 0x26b28	@ 00026ad2 29dc
.org 0x26ad4
	ldr r2, [pc, #28]	@ 00026ad4 074a
.org 0x26ad6
	ldrh r1, [r2, #10]	@ 00026ad6 5189
.org 0x26ad8
	movs r0, #2	@ 00026ad8 0220
.org 0x26ada
	ands r0, r1	@ 00026ada 0840
.org 0x26adc
	cmp r0, #0	@ 00026adc 0028
.org 0x26ade
	bne.n 0x26afc	@ 00026ade 0dd1
.org 0x26ae0
	adds r0, r2, #0	@ 00026ae0 101c
.org 0x26ae2
	adds r0, #16	@ 00026ae2 1030
.org 0x26ae4
	ldr r1, [pc, #16]	@ 00026ae4 0449
.org 0x26ae6
	ldr r1, [r1, #64]	@ 00026ae6 096c
.org 0x26ae8
	ldr r1, [r1, #28]	@ 00026ae8 c969
.org 0x26aea
	bl 0x275f0	@ 00026aea 00f081fd
.org 0x26aee
	b.n 0x26b0a	@ 00026aee 0ce0
.org 0x26af0
	.byte 0xff,0xdf,0x06,0x00	@ 00026af0 data
.org 0x26af4
	.byte 0x10,0xe9,0x02,0x02	@ 00026af4 data
.org 0x26af8
	.byte 0xf8,0x2c,0x84,0x08	@ 00026af8 data
.org 0x26afc
	adds r0, r2, #0	@ 00026afc 101c
.org 0x26afe
	adds r0, #16	@ 00026afe 1030
.org 0x26b00
	ldr r1, [pc, #24]	@ 00026b00 0649
.org 0x26b02
	ldr r1, [r1, #64]	@ 00026b02 096c
.org 0x26b04
	ldr r1, [r1, #32]	@ 00026b04 096a
.org 0x26b06
	bl 0x275f0	@ 00026b06 00f073fd
.org 0x26b0a
	ldr r2, [pc, #20]	@ 00026b0a 054a
.org 0x26b0c
	adds r0, r7, r2	@ 00026b0c b818
.org 0x26b0e
	movs r2, #2	@ 00026b0e 0222
.org 0x26b10
	strb r2, [r0, #0]	@ 00026b10 0270
.org 0x26b12
	ldr r3, [pc, #16]	@ 00026b12 044b
.org 0x26b14
	ldrb r0, [r3, #10]	@ 00026b14 987a
.org 0x26b16
	movs r1, #2	@ 00026b16 0221
.org 0x26b18
	b.n 0x26aa0	@ 00026b18 c2e7
.org 0x26b1a
	.byte 0x00	@ 00026b1a data
.org 0x26b1b
	.byte 0x00	@ 00026b1b data
.org 0x26b1c
	.byte 0xf8,0x2c,0x84,0x08	@ 00026b1c data
.org 0x26b20
	.byte 0x7d,0x01,0x00,0x00	@ 00026b20 data
.org 0x26b24
	.byte 0x10,0xe9,0x02,0x02	@ 00026b24 data
.org 0x26b28
	ldr r0, [pc, #40]	@ 00026b28 0a48
.org 0x26b2a
	cmp r2, r0	@ 00026b2a 8242
.org 0x26b2c
	bgt.n 0x26b90	@ 00026b2c 30dc
.org 0x26b2e
	ldr r1, [r6, #88]	@ 00026b2e b16d
.org 0x26b30
	ldr r0, [pc, #36]	@ 00026b30 0948
.org 0x26b32
	cmp r1, r0	@ 00026b32 8142
.org 0x26b34
	bgt.n 0x26b90	@ 00026b34 2cdc
.org 0x26b36
	ldr r2, [pc, #36]	@ 00026b36 094a
.org 0x26b38
	ldrh r1, [r2, #10]	@ 00026b38 5189
.org 0x26b3a
	movs r0, #4	@ 00026b3a 0420
.org 0x26b3c
	ands r0, r1	@ 00026b3c 0840
.org 0x26b3e
	cmp r0, #0	@ 00026b3e 0028
.org 0x26b40
	bne.n 0x26b64	@ 00026b40 10d1
.org 0x26b42
	adds r0, r2, #0	@ 00026b42 101c
.org 0x26b44
	adds r0, #16	@ 00026b44 1030
.org 0x26b46
	ldr r1, [pc, #24]	@ 00026b46 0649
.org 0x26b48
	ldr r1, [r1, #64]	@ 00026b48 096c
.org 0x26b4a
	ldr r1, [r1, #36]	@ 00026b4a 496a
.org 0x26b4c
	bl 0x275f0	@ 00026b4c 00f050fd
.org 0x26b50
	b.n 0x26b72	@ 00026b50 0fe0
.org 0x26b52
	.byte 0x00	@ 00026b52 data
.org 0x26b53
	.byte 0x00	@ 00026b53 data
.org 0x26b54
	.byte 0xff,0x9f,0x14,0x00	@ 00026b54 data
.org 0x26b58
	.byte 0xff,0x1f,0x03,0x00	@ 00026b58 data
.org 0x26b5c
	.byte 0x10,0xe9,0x02,0x02	@ 00026b5c data
.org 0x26b60
	.byte 0xf8,0x2c,0x84,0x08	@ 00026b60 data
.org 0x26b64
	adds r0, r2, #0	@ 00026b64 101c
.org 0x26b66
	adds r0, #16	@ 00026b66 1030
.org 0x26b68
	ldr r1, [pc, #24]	@ 00026b68 0649
.org 0x26b6a
	ldr r1, [r1, #64]	@ 00026b6a 096c
.org 0x26b6c
	ldr r1, [r1, #40]	@ 00026b6c 896a
.org 0x26b6e
	bl 0x275f0	@ 00026b6e 00f03ffd
.org 0x26b72
	ldr r3, [pc, #20]	@ 00026b72 054b
.org 0x26b74
	adds r0, r7, r3	@ 00026b74 f818
.org 0x26b76
	movs r2, #3	@ 00026b76 0322
.org 0x26b78
	strb r2, [r0, #0]	@ 00026b78 0270
.org 0x26b7a
	ldr r3, [pc, #16]	@ 00026b7a 044b
.org 0x26b7c
	ldrb r0, [r3, #10]	@ 00026b7c 987a
.org 0x26b7e
	movs r1, #4	@ 00026b7e 0421
.org 0x26b80
	b.n 0x26aa0	@ 00026b80 8ee7
.org 0x26b82
	.byte 0x00	@ 00026b82 data
.org 0x26b83
	.byte 0x00	@ 00026b83 data
.org 0x26b84
	.byte 0xf8,0x2c,0x84,0x08	@ 00026b84 data
.org 0x26b88
	.byte 0x7d,0x01,0x00,0x00	@ 00026b88 data
.org 0x26b8c
	.byte 0x10,0xe9,0x02,0x02	@ 00026b8c data
.org 0x26b90
	movs r0, #165	@ 00026b90 a520
.org 0x26b92
	lsls r0, r0, #13	@ 00026b92 4003
.org 0x26b94
	cmp r2, r0	@ 00026b94 8242
.org 0x26b96
	ble.n 0x26c60	@ 00026b96 63dd
.org 0x26b98
	movs r0, #240	@ 00026b98 f020
.org 0x26b9a
	lsls r0, r0, #10	@ 00026b9a 8002
.org 0x26b9c
	ldr r1, [r6, #88]	@ 00026b9c b16d
.org 0x26b9e
	cmp r1, r0	@ 00026b9e 8142
.org 0x26ba0
	ble.n 0x26bfc	@ 00026ba0 2cdd
.org 0x26ba2
	ldr r0, [pc, #32]	@ 00026ba2 0848
.org 0x26ba4
	cmp r1, r0	@ 00026ba4 8142
.org 0x26ba6
	bgt.n 0x26bfc	@ 00026ba6 29dc
.org 0x26ba8
	ldr r2, [pc, #28]	@ 00026ba8 074a
.org 0x26baa
	ldrh r1, [r2, #10]	@ 00026baa 5189
.org 0x26bac
	movs r0, #8	@ 00026bac 0820
.org 0x26bae
	ands r0, r1	@ 00026bae 0840
.org 0x26bb0
	cmp r0, #0	@ 00026bb0 0028
.org 0x26bb2
	bne.n 0x26bd0	@ 00026bb2 0dd1
.org 0x26bb4
	adds r0, r2, #0	@ 00026bb4 101c
.org 0x26bb6
	adds r0, #16	@ 00026bb6 1030
.org 0x26bb8
	ldr r1, [pc, #16]	@ 00026bb8 0449
.org 0x26bba
	ldr r1, [r1, #64]	@ 00026bba 096c
.org 0x26bbc
	ldr r1, [r1, #44]	@ 00026bbc c96a
.org 0x26bbe
	bl 0x275f0	@ 00026bbe 00f017fd
.org 0x26bc2
	b.n 0x26bde	@ 00026bc2 0ce0
.org 0x26bc4
	.byte 0xff,0x5f,0x04,0x00	@ 00026bc4 data
.org 0x26bc8
	.byte 0x10,0xe9,0x02,0x02	@ 00026bc8 data
.org 0x26bcc
	.byte 0xf8,0x2c,0x84,0x08	@ 00026bcc data
.org 0x26bd0
	adds r0, r2, #0	@ 00026bd0 101c
.org 0x26bd2
	adds r0, #16	@ 00026bd2 1030
.org 0x26bd4
	ldr r1, [pc, #24]	@ 00026bd4 0649
.org 0x26bd6
	ldr r1, [r1, #64]	@ 00026bd6 096c
.org 0x26bd8
	ldr r1, [r1, #48]	@ 00026bd8 096b
.org 0x26bda
	bl 0x275f0	@ 00026bda 00f009fd
.org 0x26bde
	ldr r1, [pc, #20]	@ 00026bde 0549
.org 0x26be0
	adds r0, r7, r1	@ 00026be0 7818
.org 0x26be2
	movs r2, #4	@ 00026be2 0422
.org 0x26be4
	strb r2, [r0, #0]	@ 00026be4 0270
.org 0x26be6
	ldr r3, [pc, #16]	@ 00026be6 044b
.org 0x26be8
	ldrb r0, [r3, #10]	@ 00026be8 987a
.org 0x26bea
	movs r1, #8	@ 00026bea 0821
.org 0x26bec
	b.n 0x26aa0	@ 00026bec 58e7
.org 0x26bee
	.byte 0x00	@ 00026bee data
.org 0x26bef
	.byte 0x00	@ 00026bef data
.org 0x26bf0
	.byte 0xf8,0x2c,0x84,0x08	@ 00026bf0 data
.org 0x26bf4
	.byte 0x7d,0x01,0x00,0x00	@ 00026bf4 data
.org 0x26bf8
	.byte 0x10,0xe9,0x02,0x02	@ 00026bf8 data
.org 0x26bfc
	movs r0, #165	@ 00026bfc a520
.org 0x26bfe
	lsls r0, r0, #13	@ 00026bfe 4003
.org 0x26c00
	cmp r2, r0	@ 00026c00 8242
.org 0x26c02
	ble.n 0x26c60	@ 00026c02 2ddd
.org 0x26c04
	ldr r0, [pc, #32]	@ 00026c04 0848
.org 0x26c06
	cmp r1, r0	@ 00026c06 8142
.org 0x26c08
	bgt.n 0x26c60	@ 00026c08 2adc
.org 0x26c0a
	ldr r2, [pc, #32]	@ 00026c0a 084a
.org 0x26c0c
	ldrh r1, [r2, #10]	@ 00026c0c 5189
.org 0x26c0e
	movs r0, #16	@ 00026c0e 1020
.org 0x26c10
	ands r0, r1	@ 00026c10 0840
.org 0x26c12
	cmp r0, #0	@ 00026c12 0028
.org 0x26c14
	bne.n 0x26c34	@ 00026c14 0ed1
.org 0x26c16
	adds r0, r2, #0	@ 00026c16 101c
.org 0x26c18
	adds r0, #16	@ 00026c18 1030
.org 0x26c1a
	ldr r1, [pc, #20]	@ 00026c1a 0549
.org 0x26c1c
	ldr r1, [r1, #64]	@ 00026c1c 096c
.org 0x26c1e
	ldr r1, [r1, #52]	@ 00026c1e 496b
.org 0x26c20
	bl 0x275f0	@ 00026c20 00f0e6fc
.org 0x26c24
	b.n 0x26c42	@ 00026c24 0de0
.org 0x26c26
	.byte 0x00	@ 00026c26 data
.org 0x26c27
	.byte 0x00	@ 00026c27 data
.org 0x26c28
	.byte 0xff,0x1f,0x03,0x00	@ 00026c28 data
.org 0x26c2c
	.byte 0x10,0xe9,0x02,0x02	@ 00026c2c data
.org 0x26c30
	.byte 0xf8,0x2c,0x84,0x08	@ 00026c30 data
.org 0x26c34
	adds r0, r2, #0	@ 00026c34 101c
.org 0x26c36
	adds r0, #16	@ 00026c36 1030
.org 0x26c38
	ldr r1, [pc, #24]	@ 00026c38 0649
.org 0x26c3a
	ldr r1, [r1, #64]	@ 00026c3a 096c
.org 0x26c3c
	ldr r1, [r1, #56]	@ 00026c3c 896b
.org 0x26c3e
	bl 0x275f0	@ 00026c3e 00f0d7fc
.org 0x26c42
	ldr r2, [pc, #20]	@ 00026c42 054a
.org 0x26c44
	adds r0, r7, r2	@ 00026c44 b818
.org 0x26c46
	movs r2, #5	@ 00026c46 0522
.org 0x26c48
	strb r2, [r0, #0]	@ 00026c48 0270
.org 0x26c4a
	ldr r3, [pc, #16]	@ 00026c4a 044b
.org 0x26c4c
	ldrb r0, [r3, #10]	@ 00026c4c 987a
.org 0x26c4e
	movs r1, #16	@ 00026c4e 1021
.org 0x26c50
	b.n 0x26aa0	@ 00026c50 26e7
.org 0x26c52
	.byte 0x00	@ 00026c52 data
.org 0x26c53
	.byte 0x00	@ 00026c53 data
.org 0x26c54
	.byte 0xf8,0x2c,0x84,0x08	@ 00026c54 data
.org 0x26c58
	.byte 0x7d,0x01,0x00,0x00	@ 00026c58 data
.org 0x26c5c
	.byte 0x10,0xe9,0x02,0x02	@ 00026c5c data
.org 0x26c60
	ldr r0, [pc, #48]	@ 00026c60 0c48
.org 0x26c62
	cmp r2, r0	@ 00026c62 8242
.org 0x26c64
	bgt.n 0x26cd0	@ 00026c64 34dc
.org 0x26c66
	ldr r1, [r6, #88]	@ 00026c66 b16d
.org 0x26c68
	movs r0, #240	@ 00026c68 f020
.org 0x26c6a
	lsls r0, r0, #10	@ 00026c6a 8002
.org 0x26c6c
	cmp r1, r0	@ 00026c6c 8142
.org 0x26c6e
	ble.n 0x26cd0	@ 00026c6e 2fdd
.org 0x26c70
	ldr r0, [pc, #36]	@ 00026c70 0948
.org 0x26c72
	cmp r1, r0	@ 00026c72 8142
.org 0x26c74
	bgt.n 0x26cd0	@ 00026c74 2cdc
.org 0x26c76
	ldr r2, [pc, #36]	@ 00026c76 094a
.org 0x26c78
	ldrh r1, [r2, #10]	@ 00026c78 5189
.org 0x26c7a
	movs r0, #32	@ 00026c7a 2020
.org 0x26c7c
	ands r0, r1	@ 00026c7c 0840
.org 0x26c7e
	cmp r0, #0	@ 00026c7e 0028
.org 0x26c80
	bne.n 0x26ca4	@ 00026c80 10d1
.org 0x26c82
	adds r0, r2, #0	@ 00026c82 101c
.org 0x26c84
	adds r0, #16	@ 00026c84 1030
.org 0x26c86
	ldr r1, [pc, #24]	@ 00026c86 0649
.org 0x26c88
	ldr r1, [r1, #64]	@ 00026c88 096c
.org 0x26c8a
	ldr r1, [r1, #60]	@ 00026c8a c96b
.org 0x26c8c
	bl 0x275f0	@ 00026c8c 00f0b0fc
.org 0x26c90
	b.n 0x26cb2	@ 00026c90 0fe0
.org 0x26c92
	.byte 0x00	@ 00026c92 data
.org 0x26c93
	.byte 0x00	@ 00026c93 data
.org 0x26c94
	.byte 0xff,0x9f,0x14,0x00	@ 00026c94 data
.org 0x26c98
	.byte 0xff,0x5f,0x04,0x00	@ 00026c98 data
.org 0x26c9c
	.byte 0x10,0xe9,0x02,0x02	@ 00026c9c data
.org 0x26ca0
	.byte 0xf8,0x2c,0x84,0x08	@ 00026ca0 data
.org 0x26ca4
	adds r0, r2, #0	@ 00026ca4 101c
.org 0x26ca6
	adds r0, #16	@ 00026ca6 1030
.org 0x26ca8
	ldr r1, [pc, #24]	@ 00026ca8 0649
.org 0x26caa
	ldr r1, [r1, #64]	@ 00026caa 096c
.org 0x26cac
	ldr r1, [r1, #64]	@ 00026cac 096c
.org 0x26cae
	bl 0x275f0	@ 00026cae 00f09ffc
.org 0x26cb2
	ldr r3, [pc, #20]	@ 00026cb2 054b
.org 0x26cb4
	adds r0, r7, r3	@ 00026cb4 f818
.org 0x26cb6
	movs r2, #6	@ 00026cb6 0622
.org 0x26cb8
	strb r2, [r0, #0]	@ 00026cb8 0270
.org 0x26cba
	ldr r3, [pc, #16]	@ 00026cba 044b
.org 0x26cbc
	ldrb r0, [r3, #10]	@ 00026cbc 987a
.org 0x26cbe
	movs r1, #32	@ 00026cbe 2021
.org 0x26cc0
	b.n 0x26aa0	@ 00026cc0 eee6
.org 0x26cc2
	.byte 0x00	@ 00026cc2 data
.org 0x26cc3
	.byte 0x00	@ 00026cc3 data
.org 0x26cc4
	.byte 0xf8,0x2c,0x84,0x08	@ 00026cc4 data
.org 0x26cc8
	.byte 0x7d,0x01,0x00,0x00	@ 00026cc8 data
.org 0x26ccc
	.byte 0x10,0xe9,0x02,0x02	@ 00026ccc data
.org 0x26cd0
	movs r0, #165	@ 00026cd0 a520
.org 0x26cd2
	lsls r0, r0, #13	@ 00026cd2 4003
.org 0x26cd4
	cmp r2, r0	@ 00026cd4 8242
.org 0x26cd6
	ble.n 0x26d34	@ 00026cd6 2ddd
.org 0x26cd8
	ldr r1, [r6, #88]	@ 00026cd8 b16d
.org 0x26cda
	movs r0, #240	@ 00026cda f020
.org 0x26cdc
	lsls r0, r0, #11	@ 00026cdc c002
.org 0x26cde
	cmp r1, r0	@ 00026cde 8142
.org 0x26ce0
	ble.n 0x26d34	@ 00026ce0 28dd
.org 0x26ce2
	ldr r2, [pc, #28]	@ 00026ce2 074a
.org 0x26ce4
	ldrh r1, [r2, #10]	@ 00026ce4 5189
.org 0x26ce6
	movs r0, #64	@ 00026ce6 4020
.org 0x26ce8
	ands r0, r1	@ 00026ce8 0840
.org 0x26cea
	cmp r0, #0	@ 00026cea 0028
.org 0x26cec
	bne.n 0x26d08	@ 00026cec 0cd1
.org 0x26cee
	adds r0, r2, #0	@ 00026cee 101c
.org 0x26cf0
	adds r0, #16	@ 00026cf0 1030
.org 0x26cf2
	ldr r1, [pc, #16]	@ 00026cf2 0449
.org 0x26cf4
	ldr r1, [r1, #64]	@ 00026cf4 096c
.org 0x26cf6
	ldr r1, [r1, #68]	@ 00026cf6 496c
.org 0x26cf8
	bl 0x275f0	@ 00026cf8 00f07afc
.org 0x26cfc
	b.n 0x26d16	@ 00026cfc 0be0
.org 0x26cfe
	.byte 0x00	@ 00026cfe data
.org 0x26cff
	.byte 0x00	@ 00026cff data
.org 0x26d00
	.byte 0x10,0xe9,0x02,0x02	@ 00026d00 data
.org 0x26d04
	.byte 0xf8,0x2c,0x84,0x08	@ 00026d04 data
.org 0x26d08
	adds r0, r2, #0	@ 00026d08 101c
.org 0x26d0a
	adds r0, #16	@ 00026d0a 1030
.org 0x26d0c
	ldr r1, [pc, #24]	@ 00026d0c 0649
.org 0x26d0e
	ldr r1, [r1, #64]	@ 00026d0e 096c
.org 0x26d10
	ldr r1, [r1, #72]	@ 00026d10 896c
.org 0x26d12
	bl 0x275f0	@ 00026d12 00f06dfc
.org 0x26d16
	ldr r1, [pc, #20]	@ 00026d16 0549
.org 0x26d18
	adds r0, r7, r1	@ 00026d18 7818
.org 0x26d1a
	movs r2, #7	@ 00026d1a 0722
.org 0x26d1c
	strb r2, [r0, #0]	@ 00026d1c 0270
.org 0x26d1e
	ldr r3, [pc, #16]	@ 00026d1e 044b
.org 0x26d20
	ldrb r0, [r3, #10]	@ 00026d20 987a
.org 0x26d22
	movs r1, #64	@ 00026d22 4021
.org 0x26d24
	b.n 0x26aa0	@ 00026d24 bce6
.org 0x26d26
	.byte 0x00	@ 00026d26 data
.org 0x26d27
	.byte 0x00	@ 00026d27 data
.org 0x26d28
	.byte 0xf8,0x2c,0x84,0x08	@ 00026d28 data
.org 0x26d2c
	.byte 0x7d,0x01,0x00,0x00	@ 00026d2c data
.org 0x26d30
	.byte 0x10,0xe9,0x02,0x02	@ 00026d30 data
.org 0x26d34
	ldr r0, [pc, #52]	@ 00026d34 0d48
.org 0x26d36
	cmp r2, r0	@ 00026d36 8242
.org 0x26d38
	ble.n 0x26d3c	@ 00026d38 00dd
.org 0x26d3a
	b.n 0x27170	@ 00026d3a 19e2
.org 0x26d3c
	ldr r1, [r6, #88]	@ 00026d3c b16d
.org 0x26d3e
	movs r0, #160	@ 00026d3e a020
.org 0x26d40
	lsls r0, r0, #11	@ 00026d40 c002
.org 0x26d42
	cmp r1, r0	@ 00026d42 8142
.org 0x26d44
	bgt.n 0x26d48	@ 00026d44 00dc
.org 0x26d46
	b.n 0x27170	@ 00026d46 13e2
.org 0x26d48
	ldr r0, [pc, #36]	@ 00026d48 0948
.org 0x26d4a
	cmp r1, r0	@ 00026d4a 8142
.org 0x26d4c
	ble.n 0x26d50	@ 00026d4c 00dd
.org 0x26d4e
	b.n 0x27170	@ 00026d4e 0fe2
.org 0x26d50
	ldr r2, [pc, #32]	@ 00026d50 084a
.org 0x26d52
	ldrh r1, [r2, #10]	@ 00026d52 5189
.org 0x26d54
	movs r0, #128	@ 00026d54 8020
.org 0x26d56
	ands r0, r1	@ 00026d56 0840
.org 0x26d58
	cmp r0, #0	@ 00026d58 0028
.org 0x26d5a
	bne.n 0x26d7c	@ 00026d5a 0fd1
.org 0x26d5c
	adds r0, r2, #0	@ 00026d5c 101c
.org 0x26d5e
	adds r0, #16	@ 00026d5e 1030
.org 0x26d60
	ldr r1, [pc, #20]	@ 00026d60 0549
.org 0x26d62
	ldr r1, [r1, #64]	@ 00026d62 096c
.org 0x26d64
	ldr r1, [r1, #76]	@ 00026d64 c96c
.org 0x26d66
	bl 0x275f0	@ 00026d66 00f043fc
.org 0x26d6a
	b.n 0x26d8a	@ 00026d6a 0ee0
.org 0x26d6c
	.byte 0xff,0x9f,0x14,0x00	@ 00026d6c data
.org 0x26d70
	.byte 0xff,0x9f,0x05,0x00	@ 00026d70 data
.org 0x26d74
	.byte 0x10,0xe9,0x02,0x02	@ 00026d74 data
.org 0x26d78
	.byte 0xf8,0x2c,0x84,0x08	@ 00026d78 data
.org 0x26d7c
	adds r0, r2, #0	@ 00026d7c 101c
.org 0x26d7e
	adds r0, #16	@ 00026d7e 1030
.org 0x26d80
	ldr r1, [pc, #24]	@ 00026d80 0649
.org 0x26d82
	ldr r1, [r1, #64]	@ 00026d82 096c
.org 0x26d84
	ldr r1, [r1, #80]	@ 00026d84 096d
.org 0x26d86
	bl 0x275f0	@ 00026d86 00f033fc
.org 0x26d8a
	ldr r2, [pc, #20]	@ 00026d8a 054a
.org 0x26d8c
	adds r0, r7, r2	@ 00026d8c b818
.org 0x26d8e
	movs r2, #8	@ 00026d8e 0822
.org 0x26d90
	strb r2, [r0, #0]	@ 00026d90 0270
.org 0x26d92
	ldr r3, [pc, #16]	@ 00026d92 044b
.org 0x26d94
	ldrb r0, [r3, #10]	@ 00026d94 987a
.org 0x26d96
	movs r1, #128	@ 00026d96 8021
.org 0x26d98
	b.n 0x26aa0	@ 00026d98 82e6
.org 0x26d9a
	.byte 0x00	@ 00026d9a data
.org 0x26d9b
	.byte 0x00	@ 00026d9b data
.org 0x26d9c
	.byte 0xf8,0x2c,0x84,0x08	@ 00026d9c data
.org 0x26da0
	.byte 0x7d,0x01,0x00,0x00	@ 00026da0 data
.org 0x26da4
	.byte 0x10,0xe9,0x02,0x02	@ 00026da4 data
.org 0x26da8
	cmp r0, #5	@ 00026da8 0528
.org 0x26daa
	bne.n 0x26dcc	@ 00026daa 0fd1
.org 0x26dac
	ldr r1, [pc, #20]	@ 00026dac 0549
.org 0x26dae
	movs r3, #0	@ 00026dae 0023
.org 0x26db0
	movs r0, #0	@ 00026db0 0020
.org 0x26db2
	strh r0, [r1, #10]	@ 00026db2 4881
.org 0x26db4
	ldr r1, [pc, #16]	@ 00026db4 0449
.org 0x26db6
	ldrb r2, [r1, #0]	@ 00026db6 0a78
.org 0x26db8
	movs r0, #127	@ 00026db8 7f20
.org 0x26dba
	ands r0, r2	@ 00026dba 1040
.org 0x26dbc
	strb r0, [r1, #0]	@ 00026dbc 0870
.org 0x26dbe
	strb r3, [r1, #1]	@ 00026dbe 4b70
.org 0x26dc0
	movs r0, #6	@ 00026dc0 0620
.org 0x26dc2
	b.n 0x2716e	@ 00026dc2 d4e1
.org 0x26dc4
	.byte 0x10,0xe9,0x02,0x02	@ 00026dc4 data
.org 0x26dc8
	.byte 0xe0,0x32,0x00,0x03	@ 00026dc8 data
.org 0x26dcc
	cmp r0, #6	@ 00026dcc 0628
.org 0x26dce
	bne.n 0x26e00	@ 00026dce 17d1
.org 0x26dd0
	ldr r1, [r6, #84]	@ 00026dd0 716d
.org 0x26dd2
	movs r0, #180	@ 00026dd2 b420
.org 0x26dd4
	lsls r0, r0, #12	@ 00026dd4 0003
.org 0x26dd6
	cmp r1, r0	@ 00026dd6 8142
.org 0x26dd8
	ble.n 0x26e00	@ 00026dd8 12dd
.org 0x26dda
	ldr r2, [pc, #28]	@ 00026dda 074a
.org 0x26ddc
	ldrb r1, [r2, #4]	@ 00026ddc 1179
.org 0x26dde
	movs r0, #8	@ 00026dde 0820
.org 0x26de0
	movs r4, #0	@ 00026de0 0024
.org 0x26de2
	orrs r0, r1	@ 00026de2 0843
.org 0x26de4
	strb r0, [r2, #4]	@ 00026de4 1071
.org 0x26de6
	movs r0, #5	@ 00026de6 0520
.org 0x26de8
	bl 0x1f63c	@ 00026de8 f8f728fc
.org 0x26dec
	movs r0, #7	@ 00026dec 0720
.org 0x26dee
	strb r0, [r5, #0]	@ 00026dee 2870
.org 0x26df0
	ldr r3, [pc, #8]	@ 00026df0 024b
.org 0x26df2
	adds r0, r7, r3	@ 00026df2 f818
.org 0x26df4
	strb r4, [r0, #0]	@ 00026df4 0470
.org 0x26df6
	b.n 0x27170	@ 00026df6 bbe1
.org 0x26df8
	.byte 0xb0,0xe8,0x02,0x02	@ 00026df8 data
.org 0x26dfc
	.byte 0x7d,0x01,0x00,0x00	@ 00026dfc data
.org 0x26e00
	movs r1, #190	@ 00026e00 be21
.org 0x26e02
	lsls r1, r1, #1	@ 00026e02 4900
.org 0x26e04
	adds r0, r7, r1	@ 00026e04 7818
.org 0x26e06
	ldrb r0, [r0, #0]	@ 00026e06 0078
.org 0x26e08
	cmp r0, #7	@ 00026e08 0728
.org 0x26e0a
	bne.n 0x26ee0	@ 00026e0a 69d1
.org 0x26e0c
	ldr r1, [r6, #88]	@ 00026e0c b16d
.org 0x26e0e
	ldr r0, [pc, #72]	@ 00026e0e 1248
.org 0x26e10
	cmp r1, r0	@ 00026e10 8142
.org 0x26e12
	bgt.n 0x26ee0	@ 00026e12 65dc
.org 0x26e14
	ldr r2, [pc, #68]	@ 00026e14 114a
.org 0x26e16
	adds r2, r2, r7	@ 00026e16 d219
.org 0x26e18
	mov r8, r2	@ 00026e18 9046
.org 0x26e1a
	ldrb r0, [r2, #0]	@ 00026e1a 1078
.org 0x26e1c
	cmp r0, #0	@ 00026e1c 0028
.org 0x26e1e
	bne.n 0x26e68	@ 00026e1e 23d1
.org 0x26e20
	ldr r1, [r6, #84]	@ 00026e20 716d
.org 0x26e22
	movs r0, #179	@ 00026e22 b320
.org 0x26e24
	lsls r0, r0, #12	@ 00026e24 0003
.org 0x26e26
	cmp r1, r0	@ 00026e26 8142
.org 0x26e28
	ble.n 0x26e68	@ 00026e28 1edd
.org 0x26e2a
	ldr r2, [pc, #52]	@ 00026e2a 0d4a
.org 0x26e2c
	ldrb r1, [r2, #1]	@ 00026e2c 5178
.org 0x26e2e
	movs r0, #2	@ 00026e2e 0220
.org 0x26e30
	orrs r0, r1	@ 00026e30 0843
.org 0x26e32
	strb r0, [r2, #1]	@ 00026e32 5070
.org 0x26e34
	ldr r0, [pc, #44]	@ 00026e34 0b48
.org 0x26e36
	movs r3, #180	@ 00026e36 b423
.org 0x26e38
	lsls r3, r3, #1	@ 00026e38 5b00
.org 0x26e3a
	adds r5, r0, r3	@ 00026e3a c518
.org 0x26e3c
	ldr r0, [r5, #0]	@ 00026e3c 2868
.org 0x26e3e
	movs r4, #1	@ 00026e3e 0124
.org 0x26e40
	negs r4, r4	@ 00026e40 6442
.org 0x26e42
	cmp r0, r4	@ 00026e42 a042
.org 0x26e44
	beq.n 0x26e50	@ 00026e44 04d0
.org 0x26e46
	lsls r0, r0, #16	@ 00026e46 0004
.org 0x26e48
	lsrs r0, r0, #16	@ 00026e48 000c
.org 0x26e4a
	bl 0x2a98	@ 00026e4a dbf725fe
.org 0x26e4e
	str r4, [r5, #0]	@ 00026e4e 2c60
.org 0x26e50
	movs r0, #1	@ 00026e50 0120
.org 0x26e52
	mov r1, r8	@ 00026e52 4146
.org 0x26e54
	strb r0, [r1, #0]	@ 00026e54 0870
.org 0x26e56
	b.n 0x27170	@ 00026e56 8be1
.org 0x26e58
	.byte 0xff,0x7f,0x02,0x00	@ 00026e58 data
.org 0x26e5c
	.byte 0x7d,0x01,0x00,0x00	@ 00026e5c data
.org 0x26e60
	.byte 0xe0,0x32,0x00,0x03	@ 00026e60 data
.org 0x26e64
	.byte 0x10,0xe9,0x02,0x02	@ 00026e64 data
.org 0x26e68
	ldr r3, [pc, #20]	@ 00026e68 054b
.org 0x26e6a
	adds r2, r7, r3	@ 00026e6a fa18
.org 0x26e6c
	ldrb r0, [r2, #0]	@ 00026e6c 1078
.org 0x26e6e
	cmp r0, #1	@ 00026e6e 0128
.org 0x26e70
	bne.n 0x26e88	@ 00026e70 0ad1
.org 0x26e72
	ldr r0, [pc, #16]	@ 00026e72 0448
.org 0x26e74
	movs r1, #0	@ 00026e74 0021
.org 0x26e76
	strb r1, [r0, #1]	@ 00026e76 4170
.org 0x26e78
	movs r0, #2	@ 00026e78 0220
.org 0x26e7a
	strb r0, [r2, #0]	@ 00026e7a 1070
.org 0x26e7c
	b.n 0x27170	@ 00026e7c 78e1
.org 0x26e7e
	.byte 0x00	@ 00026e7e data
.org 0x26e7f
	.byte 0x00	@ 00026e7f data
.org 0x26e80
	.byte 0x7d,0x01,0x00,0x00	@ 00026e80 data
.org 0x26e84
	.byte 0xe0,0x32,0x00,0x03	@ 00026e84 data
.org 0x26e88
	cmp r0, #2	@ 00026e88 0228
.org 0x26e8a
	beq.n 0x26e8e	@ 00026e8a 00d0
.org 0x26e8c
	b.n 0x27170	@ 00026e8c 70e1
.org 0x26e8e
	ldr r1, [r6, #84]	@ 00026e8e 716d
.org 0x26e90
	ldr r0, [pc, #64]	@ 00026e90 1048
.org 0x26e92
	cmp r1, r0	@ 00026e92 8142
.org 0x26e94
	bgt.n 0x26e98	@ 00026e94 00dc
.org 0x26e96
	b.n 0x27170	@ 00026e96 6be1
.org 0x26e98
	ldr r0, [pc, #60]	@ 00026e98 0f48
.org 0x26e9a
	movs r1, #0	@ 00026e9a 0021
.org 0x26e9c
	strb r1, [r0, #1]	@ 00026e9c 4170
.org 0x26e9e
	ldr r0, [pc, #60]	@ 00026e9e 0f48
.org 0x26ea0
	movs r1, #180	@ 00026ea0 b421
.org 0x26ea2
	lsls r1, r1, #1	@ 00026ea2 4900
.org 0x26ea4
	adds r4, r0, r1	@ 00026ea4 4418
.org 0x26ea6
	ldr r0, [r4, #0]	@ 00026ea6 2068
.org 0x26ea8
	cmp r0, #155	@ 00026ea8 9b28
.org 0x26eaa
	beq.n 0x26ec8	@ 00026eaa 0dd0
.org 0x26eac
	movs r5, #1	@ 00026eac 0125
.org 0x26eae
	negs r5, r5	@ 00026eae 6d42
.org 0x26eb0
	cmp r0, r5	@ 00026eb0 a842
.org 0x26eb2
	beq.n 0x26ebe	@ 00026eb2 04d0
.org 0x26eb4
	lsls r0, r0, #16	@ 00026eb4 0004
.org 0x26eb6
	lsrs r0, r0, #16	@ 00026eb6 000c
.org 0x26eb8
	bl 0x2a98	@ 00026eb8 dbf7eefd
.org 0x26ebc
	str r5, [r4, #0]	@ 00026ebc 2560
.org 0x26ebe
	movs r0, #155	@ 00026ebe 9b20
.org 0x26ec0
	bl 0x2a88	@ 00026ec0 dbf7e2fd
.org 0x26ec4
	movs r0, #155	@ 00026ec4 9b20
.org 0x26ec6
	str r0, [r4, #0]	@ 00026ec6 2060
.org 0x26ec8
	movs r2, #190	@ 00026ec8 be22
.org 0x26eca
	lsls r2, r2, #1	@ 00026eca 5200
.org 0x26ecc
	adds r1, r7, r2	@ 00026ecc b918
.org 0x26ece
	movs r0, #8	@ 00026ece 0820
.org 0x26ed0
	strb r0, [r1, #0]	@ 00026ed0 0870
.org 0x26ed2
	b.n 0x27170	@ 00026ed2 4de1
.org 0x26ed4
	.byte 0xff,0x4f,0x0b,0x00	@ 00026ed4 data
.org 0x26ed8
	.byte 0xe0,0x32,0x00,0x03	@ 00026ed8 data
.org 0x26edc
	.byte 0x10,0xe9,0x02,0x02	@ 00026edc data
.org 0x26ee0
	movs r3, #190	@ 00026ee0 be23
.org 0x26ee2
	lsls r3, r3, #1	@ 00026ee2 5b00
.org 0x26ee4
	adds r4, r7, r3	@ 00026ee4 fc18
.org 0x26ee6
	ldrb r0, [r4, #0]	@ 00026ee6 2078
.org 0x26ee8
	cmp r0, #8	@ 00026ee8 0828
.org 0x26eea
	bne.n 0x26f0c	@ 00026eea 0fd1
.org 0x26eec
	ldr r1, [r6, #88]	@ 00026eec b16d
.org 0x26eee
	ldr r0, [pc, #16]	@ 00026eee 0448
.org 0x26ef0
	cmp r1, r0	@ 00026ef0 8142
.org 0x26ef2
	bgt.n 0x26f0c	@ 00026ef2 0bdc
.org 0x26ef4
	ldr r0, [pc, #12]	@ 00026ef4 0348
.org 0x26ef6
	ldr r1, [pc, #16]	@ 00026ef6 0449
.org 0x26ef8
	ldr r1, [r1, #64]	@ 00026ef8 096c
.org 0x26efa
	ldr r1, [r1, #88]	@ 00026efa 896d
.org 0x26efc
	b.n 0x26f28	@ 00026efc 14e0
.org 0x26efe
	.byte 0x00	@ 00026efe data
.org 0x26eff
	.byte 0x00	@ 00026eff data
.org 0x26f00
	.byte 0xff,0xdf,0x01,0x00	@ 00026f00 data
.org 0x26f04
	.byte 0x20,0xe9,0x02,0x02	@ 00026f04 data
.org 0x26f08
	.byte 0xf8,0x2c,0x84,0x08	@ 00026f08 data
.org 0x26f0c
	movs r0, #190	@ 00026f0c be20
.org 0x26f0e
	lsls r0, r0, #1	@ 00026f0e 4000
.org 0x26f10
	adds r4, r7, r0	@ 00026f10 3c18
.org 0x26f12
	ldrb r0, [r4, #0]	@ 00026f12 2078
.org 0x26f14
	cmp r0, #9	@ 00026f14 0928
.org 0x26f16
	bne.n 0x26f44	@ 00026f16 15d1
.org 0x26f18
	ldr r1, [r6, #88]	@ 00026f18 b16d
.org 0x26f1a
	ldr r0, [pc, #28]	@ 00026f1a 0748
.org 0x26f1c
	cmp r1, r0	@ 00026f1c 8142
.org 0x26f1e
	bgt.n 0x26f44	@ 00026f1e 11dc
.org 0x26f20
	ldr r0, [pc, #24]	@ 00026f20 0648
.org 0x26f22
	ldr r1, [pc, #28]	@ 00026f22 0749
.org 0x26f24
	ldr r1, [r1, #64]	@ 00026f24 096c
.org 0x26f26
	ldr r1, [r1, #96]	@ 00026f26 096e
.org 0x26f28
	bl 0x275f0	@ 00026f28 00f062fb
.org 0x26f2c
	movs r0, #7	@ 00026f2c 0720
.org 0x26f2e
	bl 0x1f63c	@ 00026f2e f8f785fb
.org 0x26f32
	movs r0, #10	@ 00026f32 0a20
