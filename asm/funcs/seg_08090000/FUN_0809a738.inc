@ FUN_0809a738  entry 0x0809a738  size 486
.thumb
.org 0x9a738
FUN_0809a738:
	push {r4, r5, lr}	@ 0009a738 30b5
.org 0x9a73a
	adds r5, r0, #0	@ 0009a73a 051c
.org 0x9a73c
	ldrb r0, [r5, #18]	@ 0009a73c a87c
.org 0x9a73e
	adds r0, #192	@ 0009a73e c030
.org 0x9a740
	adds r1, r5, #0	@ 0009a740 291c
.org 0x9a742
	adds r1, #36	@ 0009a742 2431
.org 0x9a744
	strb r0, [r1, #0]	@ 0009a744 0870
.org 0x9a746
	adds r4, r5, #0	@ 0009a746 2c1c
.org 0x9a748
	adds r4, #190	@ 0009a748 be34
.org 0x9a74a
	ldrh r1, [r4, #0]	@ 0009a74a 2188
.org 0x9a74c
	movs r0, #128	@ 0009a74c 8020
.org 0x9a74e
	lsls r0, r0, #1	@ 0009a74e 4000
.org 0x9a750
	cmp r1, r0	@ 0009a750 8142
.org 0x9a752
	bls.n 0x9a76a	@ 0009a752 0ad9
.org 0x9a754
	adds r1, r5, #0	@ 0009a754 291c
.org 0x9a756
	adds r1, #37	@ 0009a756 2531
.org 0x9a758
	movs r0, #25	@ 0009a758 1920
.org 0x9a75a
	strb r0, [r1, #0]	@ 0009a75a 0870
.org 0x9a75c
	adds r0, r5, #0	@ 0009a75c 281c
.org 0x9a75e
	bl 0x1cff0	@ 0009a75e 82f747fc
.org 0x9a762
	ldrh r0, [r4, #0]	@ 0009a762 2088
.org 0x9a764
	subs r0, #1	@ 0009a764 0138
.org 0x9a766
	strh r0, [r4, #0]	@ 0009a766 2080
.org 0x9a768
	b.n 0x9a928	@ 0009a768 dee0
.org 0x9a76a
	cmp r1, #248	@ 0009a76a f829
.org 0x9a76c
	bls.n 0x9a776	@ 0009a76c 03d9
.org 0x9a76e
	adds r1, r5, #0	@ 0009a76e 291c
.org 0x9a770
	adds r1, #37	@ 0009a770 2531
.org 0x9a772
	movs r0, #25	@ 0009a772 1920
.org 0x9a774
	b.n 0x9a77c	@ 0009a774 02e0
.org 0x9a776
	adds r1, r5, #0	@ 0009a776 291c
.org 0x9a778
	adds r1, #37	@ 0009a778 2531
.org 0x9a77a
	movs r0, #8	@ 0009a77a 0820
.org 0x9a77c
	strb r0, [r1, #0]	@ 0009a77c 0870
.org 0x9a77e
	ldrb r0, [r5, #13]	@ 0009a77e 687b
.org 0x9a780
	cmp r0, #0	@ 0009a780 0028
.org 0x9a782
	bne.n 0x9a7d0	@ 0009a782 25d1
.org 0x9a784
	ldr r0, [r5, #84]	@ 0009a784 686d
.org 0x9a786
	ldr r2, [r5, #92]	@ 0009a786 ea6d
.org 0x9a788
	adds r0, r0, r2	@ 0009a788 8018
.org 0x9a78a
	str r0, [r5, #84]	@ 0009a78a 6865
.org 0x9a78c
	ldr r0, [r5, #88]	@ 0009a78c a86d
.org 0x9a78e
	ldr r1, [r5, #96]	@ 0009a78e 296e
.org 0x9a790
	adds r0, r0, r1	@ 0009a790 4018
.org 0x9a792
	str r0, [r5, #88]	@ 0009a792 a865
.org 0x9a794
	ldr r0, [r5, #100]	@ 0009a794 686e
.org 0x9a796
	subs r2, r2, r0	@ 0009a796 121a
.org 0x9a798
	str r2, [r5, #92]	@ 0009a798 ea65
.org 0x9a79a
	ldr r0, [r5, #104]	@ 0009a79a a86e
.org 0x9a79c
	subs r1, r1, r0	@ 0009a79c 091a
.org 0x9a79e
	str r1, [r5, #96]	@ 0009a79e 2966
.org 0x9a7a0
	ldrb r0, [r5, #19]	@ 0009a7a0 e87c
.org 0x9a7a2
	subs r0, #1	@ 0009a7a2 0138
.org 0x9a7a4
	strb r0, [r5, #19]	@ 0009a7a4 e874
.org 0x9a7a6
	lsls r0, r0, #24	@ 0009a7a6 0006
.org 0x9a7a8
	lsrs r0, r0, #24	@ 0009a7a8 000e
.org 0x9a7aa
	cmp r0, #255	@ 0009a7aa ff28
.org 0x9a7ac
	beq.n 0x9a7b0	@ 0009a7ac 00d0
.org 0x9a7ae
	b.n 0x9a8b6	@ 0009a7ae 82e0
.org 0x9a7b0
	ldr r1, [pc, #24]	@ 0009a7b0 0649
.org 0x9a7b2
	adds r0, r5, #0	@ 0009a7b2 281c
.org 0x9a7b4
	bl 0x1cf00	@ 0009a7b4 82f7a4fb
.org 0x9a7b8
	movs r0, #128	@ 0009a7b8 8020
.org 0x9a7ba
	lsls r0, r0, #1	@ 0009a7ba 4000
.org 0x9a7bc
	str r0, [r5, #100]	@ 0009a7bc 6866
.org 0x9a7be
	movs r0, #1	@ 0009a7be 0120
.org 0x9a7c0
	strb r0, [r5, #19]	@ 0009a7c0 e874
.org 0x9a7c2
	ldrb r0, [r5, #13]	@ 0009a7c2 687b
.org 0x9a7c4
	adds r0, #1	@ 0009a7c4 0130
.org 0x9a7c6
	strb r0, [r5, #13]	@ 0009a7c6 6873
.org 0x9a7c8
	b.n 0x9a8b6	@ 0009a7c8 75e0
.org 0x9a7ca
	.byte 0x00	@ 0009a7ca data
.org 0x9a7cb
	.byte 0x00	@ 0009a7cb data
.org 0x9a7cc
	.byte 0x01,0x61,0x00,0x00	@ 0009a7cc data
.org 0x9a7d0
	ldr r4, [pc, #132]	@ 0009a7d0 214c
.org 0x9a7d2
	ldrb r1, [r5, #18]	@ 0009a7d2 a97c
.org 0x9a7d4
	adds r0, r1, #0	@ 0009a7d4 081c
.org 0x9a7d6
	adds r0, #192	@ 0009a7d6 c030
.org 0x9a7d8
	lsls r0, r0, #24	@ 0009a7d8 0006
.org 0x9a7da
	lsrs r0, r0, #23	@ 0009a7da c00d
.org 0x9a7dc
	adds r0, r0, r4	@ 0009a7dc 0019
.org 0x9a7de
	movs r2, #0	@ 0009a7de 0022
.org 0x9a7e0
	ldrsh r0, [r0, r2]	@ 0009a7e0 805e
.org 0x9a7e2
	ldr r3, [r5, #100]	@ 0009a7e2 6b6e
.org 0x9a7e4
	adds r2, r0, #0	@ 0009a7e4 021c
.org 0x9a7e6
	muls r2, r3	@ 0009a7e6 5a43
.org 0x9a7e8
	asrs r2, r2, #8	@ 0009a7e8 1212
.org 0x9a7ea
	str r2, [r5, #92]	@ 0009a7ea ea65
.org 0x9a7ec
	adds r1, #128	@ 0009a7ec 8031
.org 0x9a7ee
	lsls r1, r1, #24	@ 0009a7ee 0906
.org 0x9a7f0
	lsrs r1, r1, #23	@ 0009a7f0 c90d
.org 0x9a7f2
	adds r1, r1, r4	@ 0009a7f2 0919
.org 0x9a7f4
	movs r4, #0	@ 0009a7f4 0024
.org 0x9a7f6
	ldrsh r0, [r1, r4]	@ 0009a7f6 085f
.org 0x9a7f8
	adds r1, r0, #0	@ 0009a7f8 011c
.org 0x9a7fa
	muls r1, r3	@ 0009a7fa 5943
.org 0x9a7fc
	asrs r1, r1, #8	@ 0009a7fc 0912
.org 0x9a7fe
	str r1, [r5, #96]	@ 0009a7fe 2966
.org 0x9a800
	ldr r0, [r5, #84]	@ 0009a800 686d
.org 0x9a802
	adds r0, r0, r2	@ 0009a802 8018
.org 0x9a804
	str r0, [r5, #84]	@ 0009a804 6865
.org 0x9a806
	ldr r0, [r5, #88]	@ 0009a806 a86d
.org 0x9a808
	adds r0, r0, r1	@ 0009a808 4018
.org 0x9a80a
	str r0, [r5, #88]	@ 0009a80a a865
.org 0x9a80c
	adds r3, #16	@ 0009a80c 1033
.org 0x9a80e
	str r3, [r5, #100]	@ 0009a80e 6b66
.org 0x9a810
	movs r0, #192	@ 0009a810 c020
.org 0x9a812
	lsls r0, r0, #2	@ 0009a812 8000
.org 0x9a814
	cmp r3, r0	@ 0009a814 8342
.org 0x9a816
	ble.n 0x9a81a	@ 0009a816 00dd
.org 0x9a818
	str r0, [r5, #100]	@ 0009a818 6866
.org 0x9a81a
	ldr r0, [pc, #64]	@ 0009a81a 1048
.org 0x9a81c
	ldr r2, [r0, #0]	@ 0009a81c 0268
.org 0x9a81e
	ldr r0, [r5, #84]	@ 0009a81e 686d
.org 0x9a820
	ldr r1, [r2, #84]	@ 0009a820 516d
.org 0x9a822
	subs r0, r0, r1	@ 0009a822 401a
.org 0x9a824
	lsls r0, r0, #8	@ 0009a824 0002
.org 0x9a826
	asrs r0, r0, #16	@ 0009a826 0014
.org 0x9a828
	ldr r1, [r5, #88]	@ 0009a828 a96d
.org 0x9a82a
	movs r3, #128	@ 0009a82a 8023
.org 0x9a82c
	lsls r3, r3, #6	@ 0009a82c 9b01
.org 0x9a82e
	adds r1, r1, r3	@ 0009a82e c918
.org 0x9a830
	ldr r2, [r2, #88]	@ 0009a830 926d
.org 0x9a832
	subs r1, r1, r2	@ 0009a832 891a
.org 0x9a834
	lsls r1, r1, #8	@ 0009a834 0902
.org 0x9a836
	asrs r1, r1, #16	@ 0009a836 0914
.org 0x9a838
	bl 0x128bdc	@ 0009a838 8ef0d0f9
.org 0x9a83c
	lsls r0, r0, #16	@ 0009a83c 0004
.org 0x9a83e
	lsrs r2, r0, #24	@ 0009a83e 020e
.org 0x9a840
	ldrb r4, [r5, #18]	@ 0009a840 ac7c
.org 0x9a842
	cmp r2, r4	@ 0009a842 a242
.org 0x9a844
	beq.n 0x9a8b2	@ 0009a844 35d0
.org 0x9a846
	ldrb r0, [r5, #18]	@ 0009a846 a87c
.org 0x9a848
	subs r1, r2, r0	@ 0009a848 111a
.org 0x9a84a
	adds r3, r0, #0	@ 0009a84a 031c
.org 0x9a84c
	cmp r1, #0	@ 0009a84c 0029
.org 0x9a84e
	blt.n 0x9a860	@ 0009a84e 07db
.org 0x9a850
	cmp r1, #16	@ 0009a850 1029
.org 0x9a852
	bgt.n 0x9a866	@ 0009a852 08dc
.org 0x9a854
	b.n 0x9a87a	@ 0009a854 11e0
.org 0x9a856
	.byte 0x00	@ 0009a856 data
.org 0x9a857
	.byte 0x00	@ 0009a857 data
.org 0x9a858
	.byte 0x0c,0x93,0x12,0x08	@ 0009a858 data
.org 0x9a85c
	.byte 0xf0,0xdb,0x02,0x02	@ 0009a85c data
.org 0x9a860
	subs r0, r3, r2	@ 0009a860 981a
.org 0x9a862
	cmp r0, #16	@ 0009a862 1028
.org 0x9a864
	ble.n 0x9a87a	@ 0009a864 09dd
.org 0x9a866
	ldr r0, [r5, #100]	@ 0009a866 686e
.org 0x9a868
	subs r0, #48	@ 0009a868 3038
.org 0x9a86a
	str r0, [r5, #100]	@ 0009a86a 6866
.org 0x9a86c
	cmp r0, #255	@ 0009a86c ff28
.org 0x9a86e
	bgt.n 0x9a876	@ 0009a86e 02dc
.org 0x9a870
	movs r0, #128	@ 0009a870 8020
.org 0x9a872
	lsls r0, r0, #1	@ 0009a872 4000
.org 0x9a874
	str r0, [r5, #100]	@ 0009a874 6866
.org 0x9a876
	movs r4, #2	@ 0009a876 0224
.org 0x9a878
	b.n 0x9a87c	@ 0009a878 00e0
.org 0x9a87a
	movs r4, #1	@ 0009a87a 0124
.org 0x9a87c
	lsls r0, r2, #24	@ 0009a87c 1006
.org 0x9a87e
	cmp r0, #0	@ 0009a87e 0028
.org 0x9a880
	bge.n 0x9a89a	@ 0009a880 0bda
.org 0x9a882
	ldrb r0, [r5, #18]	@ 0009a882 a87c
.org 0x9a884
	adds r1, r0, #0	@ 0009a884 011c
.org 0x9a886
	cmp r2, r1	@ 0009a886 8a42
.org 0x9a888
	bls.n 0x9a896	@ 0009a888 05d9
.org 0x9a88a
	adds r0, r2, #0	@ 0009a88a 101c
.org 0x9a88c
	subs r0, #128	@ 0009a88c 8038
.org 0x9a88e
	cmp r0, r3	@ 0009a88e 9842
.org 0x9a890
	bge.n 0x9a896	@ 0009a890 01da
.org 0x9a892
	adds r0, r4, r3	@ 0009a892 e018
.org 0x9a894
	b.n 0x9a8b0	@ 0009a894 0ce0
.org 0x9a896
	subs r0, r1, r4	@ 0009a896 081b
.org 0x9a898
	b.n 0x9a8b0	@ 0009a898 0ae0
.org 0x9a89a
	ldrb r0, [r5, #18]	@ 0009a89a a87c
.org 0x9a89c
	adds r1, r0, #0	@ 0009a89c 011c
.org 0x9a89e
	cmp r2, r1	@ 0009a89e 8a42
.org 0x9a8a0
	bcs.n 0x9a8ae	@ 0009a8a0 05d2
.org 0x9a8a2
	adds r0, r2, #0	@ 0009a8a2 101c
.org 0x9a8a4
	adds r0, #128	@ 0009a8a4 8030
.org 0x9a8a6
	cmp r0, r3	@ 0009a8a6 9842
.org 0x9a8a8
	ble.n 0x9a8ae	@ 0009a8a8 01dd
.org 0x9a8aa
	subs r0, r3, r4	@ 0009a8aa 181b
.org 0x9a8ac
	b.n 0x9a8b0	@ 0009a8ac 00e0
.org 0x9a8ae
	adds r0, r4, r1	@ 0009a8ae 6018
.org 0x9a8b0
	strb r0, [r5, #18]	@ 0009a8b0 a874
.org 0x9a8b2
	movs r0, #1	@ 0009a8b2 0120
.org 0x9a8b4
	strb r0, [r5, #19]	@ 0009a8b4 e874
.org 0x9a8b6
	adds r0, r5, #0	@ 0009a8b6 281c
.org 0x9a8b8
	bl 0x1cff0	@ 0009a8b8 82f79afb
.org 0x9a8bc
	adds r0, r5, #0	@ 0009a8bc 281c
.org 0x9a8be
	adds r0, #190	@ 0009a8be be30
.org 0x9a8c0
	ldrh r1, [r0, #0]	@ 0009a8c0 0188
.org 0x9a8c2
	adds r2, r1, #0	@ 0009a8c2 0a1c
.org 0x9a8c4
	adds r4, r0, #0	@ 0009a8c4 041c
.org 0x9a8c6
	cmp r2, #59	@ 0009a8c6 3b2a
.org 0x9a8c8
	bhi.n 0x9a8da	@ 0009a8c8 07d8
.org 0x9a8ca
	movs r0, #7	@ 0009a8ca 0720
.org 0x9a8cc
	ands r0, r1	@ 0009a8cc 0840
.org 0x9a8ce
	cmp r0, #0	@ 0009a8ce 0028
.org 0x9a8d0
	beq.n 0x9a8e6	@ 0009a8d0 09d0
.org 0x9a8d2
	adds r0, r5, #0	@ 0009a8d2 281c
.org 0x9a8d4
	bl 0x1d330	@ 0009a8d4 82f72cfd
.org 0x9a8d8
	b.n 0x9a8f4	@ 0009a8d8 0ce0
.org 0x9a8da
	cmp r2, #29	@ 0009a8da 1d2a
.org 0x9a8dc
	bhi.n 0x9a8f4	@ 0009a8dc 0ad8
.org 0x9a8de
	movs r0, #3	@ 0009a8de 0320
.org 0x9a8e0
	ands r0, r1	@ 0009a8e0 0840
.org 0x9a8e2
	cmp r0, #0	@ 0009a8e2 0028
.org 0x9a8e4
	beq.n 0x9a8ee	@ 0009a8e4 03d0
.org 0x9a8e6
	adds r0, r5, #0	@ 0009a8e6 281c
.org 0x9a8e8
	bl 0x1d3fc	@ 0009a8e8 82f788fd
.org 0x9a8ec
	b.n 0x9a8f4	@ 0009a8ec 02e0
.org 0x9a8ee
	adds r0, r5, #0	@ 0009a8ee 281c
.org 0x9a8f0
	bl 0x1d330	@ 0009a8f0 82f71efd
.org 0x9a8f4
	adds r0, r5, #0	@ 0009a8f4 281c
.org 0x9a8f6
	adds r0, #140	@ 0009a8f6 8c30
.org 0x9a8f8
	ldr r0, [r0, #0]	@ 0009a8f8 0068
.org 0x9a8fa
	movs r1, #4	@ 0009a8fa 0421
.org 0x9a8fc
	ands r0, r1	@ 0009a8fc 0840
.org 0x9a8fe
	cmp r0, #0	@ 0009a8fe 0028
.org 0x9a900
	bne.n 0x9a910	@ 0009a900 06d1
.org 0x9a902
	ldrh r0, [r4, #0]	@ 0009a902 2088
.org 0x9a904
	subs r0, #1	@ 0009a904 0138
.org 0x9a906
	strh r0, [r4, #0]	@ 0009a906 2080
.org 0x9a908
	lsls r0, r0, #16	@ 0009a908 0004
.org 0x9a90a
	ldr r1, [pc, #36]	@ 0009a90a 0949
.org 0x9a90c
	cmp r0, r1	@ 0009a90c 8842
.org 0x9a90e
	bne.n 0x9a928	@ 0009a90e 0bd1
.org 0x9a910
	ldr r1, [pc, #32]	@ 0009a910 0849
.org 0x9a912
	ldrb r0, [r5, #9]	@ 0009a912 687a
.org 0x9a914
	lsls r0, r0, #2	@ 0009a914 8000
.org 0x9a916
	adds r0, r0, r1	@ 0009a916 4018
.org 0x9a918
	movs r1, #2	@ 0009a918 0221
.org 0x9a91a
	str r1, [r5, #12]	@ 0009a91a e960
.org 0x9a91c
	ldr r0, [r0, #0]	@ 0009a91c 0068
