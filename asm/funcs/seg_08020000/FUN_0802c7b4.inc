@ FUN_0802c7b4  entry 0x0802c7b4  size 656
.thumb
.org 0x2c7b4
FUN_0802c7b4:
	push {r4, r5, r6, r7, lr}	@ 0002c7b4 f0b5
.org 0x2c7b6
	mov r7, r9	@ 0002c7b6 4f46
.org 0x2c7b8
	mov r6, r8	@ 0002c7b8 4646
.org 0x2c7ba
	push {r6, r7}	@ 0002c7ba c0b4
.org 0x2c7bc
	adds r7, r0, #0	@ 0002c7bc 071c
.org 0x2c7be
	mov r8, r1	@ 0002c7be 8846
.org 0x2c7c0
	movs r1, #158	@ 0002c7c0 9e21
.org 0x2c7c2
	lsls r1, r1, #2	@ 0002c7c2 8900
.org 0x2c7c4
	adds r0, r7, r1	@ 0002c7c4 7818
.org 0x2c7c6
	ldrb r0, [r0, #0]	@ 0002c7c6 0078
.org 0x2c7c8
	cmp r0, #0	@ 0002c7c8 0028
.org 0x2c7ca
	beq.n 0x2c7ce	@ 0002c7ca 00d0
.org 0x2c7cc
	b.n 0x2ca54	@ 0002c7cc 42e1
.org 0x2c7ce
	adds r0, r7, #0	@ 0002c7ce 381c
.org 0x2c7d0
	adds r0, #148	@ 0002c7d0 9430
.org 0x2c7d2
	ldrb r0, [r0, #0]	@ 0002c7d2 0078
.org 0x2c7d4
	ldr r2, [pc, #48]	@ 0002c7d4 0c4a
.org 0x2c7d6
	mov r9, r2	@ 0002c7d6 9146
.org 0x2c7d8
	cmp r0, #0	@ 0002c7d8 0028
.org 0x2c7da
	beq.n 0x2c7e0	@ 0002c7da 01d0
.org 0x2c7dc
	ldr r3, [pc, #44]	@ 0002c7dc 0b4b
.org 0x2c7de
	mov r9, r3	@ 0002c7de 9946
.org 0x2c7e0
	ldrb r1, [r7, #10]	@ 0002c7e0 b97a
.org 0x2c7e2
	movs r0, #16	@ 0002c7e2 1020
.org 0x2c7e4
	ands r0, r1	@ 0002c7e4 0840
.org 0x2c7e6
	cmp r0, #0	@ 0002c7e6 0028
.org 0x2c7e8
	beq.n 0x2c814	@ 0002c7e8 14d0
.org 0x2c7ea
	mov r1, r8	@ 0002c7ea 4146
.org 0x2c7ec
	movs r2, #0	@ 0002c7ec 0022
.org 0x2c7ee
	ldrsh r0, [r1, r2]	@ 0002c7ee 885e
.org 0x2c7f0
	ldr r2, [r7, #84]	@ 0002c7f0 7a6d
.org 0x2c7f2
	subs r2, r2, r0	@ 0002c7f2 121a
.org 0x2c7f4
	ldrh r0, [r1, #4]	@ 0002c7f4 8888
.org 0x2c7f6
	lsls r0, r0, #16	@ 0002c7f6 0004
.org 0x2c7f8
	asrs r0, r0, #17	@ 0002c7f8 4014
.org 0x2c7fa
	adds r1, r2, r0	@ 0002c7fa 1118
.org 0x2c7fc
	movs r3, #128	@ 0002c7fc 8023
.org 0x2c7fe
	lsls r3, r3, #4	@ 0002c7fe 1b01
.org 0x2c800
	adds r4, r1, r3	@ 0002c800 cc18
.org 0x2c802
	subs r2, r2, r0	@ 0002c802 121a
.org 0x2c804
	ldr r0, [pc, #8]	@ 0002c804 0248
.org 0x2c806
	b.n 0x2c830	@ 0002c806 13e0
.org 0x2c808
	.byte 0x1f,0x88,0x00,0x00	@ 0002c808 data
.org 0x2c80c
	.byte 0x0f,0x88,0x00,0x00	@ 0002c80c data
.org 0x2c810
	.byte 0x00,0xf8,0xff,0xff	@ 0002c810 data
.org 0x2c814
	mov r1, r8	@ 0002c814 4146
.org 0x2c816
	movs r2, #0	@ 0002c816 0022
.org 0x2c818
	ldrsh r0, [r1, r2]	@ 0002c818 885e
.org 0x2c81a
	ldr r2, [r7, #84]	@ 0002c81a 7a6d
.org 0x2c81c
	adds r2, r2, r0	@ 0002c81c 1218
.org 0x2c81e
	ldrh r0, [r1, #4]	@ 0002c81e 8888
.org 0x2c820
	lsls r0, r0, #16	@ 0002c820 0004
.org 0x2c822
	asrs r0, r0, #17	@ 0002c822 4014
.org 0x2c824
	subs r1, r2, r0	@ 0002c824 111a
.org 0x2c826
	ldr r3, [pc, #120]	@ 0002c826 1e4b
.org 0x2c828
	adds r4, r1, r3	@ 0002c828 cc18
.org 0x2c82a
	adds r2, r2, r0	@ 0002c82a 1218
.org 0x2c82c
	movs r0, #128	@ 0002c82c 8020
.org 0x2c82e
	lsls r0, r0, #4	@ 0002c82e 0001
.org 0x2c830
	adds r5, r2, r0	@ 0002c830 1518
.org 0x2c832
	mov r1, r8	@ 0002c832 4146
.org 0x2c834
	movs r2, #2	@ 0002c834 0222
.org 0x2c836
	ldrsh r0, [r1, r2]	@ 0002c836 885e
.org 0x2c838
	ldr r1, [r7, #88]	@ 0002c838 b96d
.org 0x2c83a
	adds r1, r1, r0	@ 0002c83a 0918
.org 0x2c83c
	mov r3, r8	@ 0002c83c 4346
.org 0x2c83e
	ldrh r0, [r3, #6]	@ 0002c83e d888
.org 0x2c840
	lsls r0, r0, #16	@ 0002c840 0004
.org 0x2c842
	asrs r0, r0, #17	@ 0002c842 4014
.org 0x2c844
	adds r1, r1, r0	@ 0002c844 0918
.org 0x2c846
	ldr r0, [pc, #92]	@ 0002c846 1748
.org 0x2c848
	adds r6, r1, r0	@ 0002c848 0e18
.org 0x2c84a
	adds r0, r7, #0	@ 0002c84a 381c
.org 0x2c84c
	adds r1, r4, #0	@ 0002c84c 211c
.org 0x2c84e
	adds r2, r6, #0	@ 0002c84e 321c
.org 0x2c850
	bl 0x2e55c	@ 0002c850 01f084fe
.org 0x2c854
	lsls r0, r0, #24	@ 0002c854 0006
.org 0x2c856
	lsrs r0, r0, #24	@ 0002c856 000e
.org 0x2c858
	cmp r0, #0	@ 0002c858 0028
.org 0x2c85a
	beq.n 0x2c85e	@ 0002c85a 00d0
.org 0x2c85c
	b.n 0x2ca56	@ 0002c85c fbe0
.org 0x2c85e
	adds r0, r4, #0	@ 0002c85e 201c
.org 0x2c860
	adds r1, r6, #0	@ 0002c860 311c
.org 0x2c862
	bl 0x7020	@ 0002c862 daf7ddfb
.org 0x2c866
	mov r2, r9	@ 0002c866 4a46
.org 0x2c868
	ands r2, r0	@ 0002c868 0240
.org 0x2c86a
	movs r1, #0	@ 0002c86a 0021
.org 0x2c86c
	ldr r0, [r7, #84]	@ 0002c86c 786d
.org 0x2c86e
	cmp r0, r4	@ 0002c86e a042
.org 0x2c870
	bge.n 0x2c874	@ 0002c870 00da
.org 0x2c872
	movs r1, #1	@ 0002c872 0121
.org 0x2c874
	adds r0, r2, #0	@ 0002c874 101c
.org 0x2c876
	bl 0x2f084	@ 0002c876 02f005fc
.org 0x2c87a
	lsls r0, r0, #24	@ 0002c87a 0006
.org 0x2c87c
	cmp r0, #0	@ 0002c87c 0028
.org 0x2c87e
	beq.n 0x2c8be	@ 0002c87e 1ed0
.org 0x2c880
	ldrb r1, [r7, #10]	@ 0002c880 b97a
.org 0x2c882
	movs r0, #16	@ 0002c882 1020
.org 0x2c884
	ands r0, r1	@ 0002c884 0840
.org 0x2c886
	cmp r0, #0	@ 0002c886 0028
.org 0x2c888
	beq.n 0x2c8ac	@ 0002c888 10d0
.org 0x2c88a
	ldr r1, [pc, #28]	@ 0002c88a 0749
.org 0x2c88c
	adds r0, r4, r1	@ 0002c88c 6018
.org 0x2c88e
	adds r1, r6, #0	@ 0002c88e 311c
.org 0x2c890
	bl 0x7020	@ 0002c890 daf7c6fb
.org 0x2c894
	lsls r0, r0, #16	@ 0002c894 0004
.org 0x2c896
	cmp r0, #0	@ 0002c896 0028
.org 0x2c898
	bne.n 0x2c8be	@ 0002c898 11d1
.org 0x2c89a
	movs r0, #2	@ 0002c89a 0220
.org 0x2c89c
	b.n 0x2ca56	@ 0002c89c dbe0
.org 0x2c89e
	.byte 0x00	@ 0002c89e data
.org 0x2c89f
	.byte 0x00	@ 0002c89f data
.org 0x2c8a0
	.byte 0x00,0xf8,0xff,0xff	@ 0002c8a0 data
.org 0x2c8a4
	.byte 0x00,0xfe,0xff,0xff	@ 0002c8a4 data
.org 0x2c8a8
	.byte 0x00,0xf0,0xff,0xff	@ 0002c8a8 data
.org 0x2c8ac
	movs r2, #128	@ 0002c8ac 8022
.org 0x2c8ae
	lsls r2, r2, #5	@ 0002c8ae 5201
.org 0x2c8b0
	adds r0, r4, r2	@ 0002c8b0 a018
.org 0x2c8b2
	adds r1, r6, #0	@ 0002c8b2 311c
.org 0x2c8b4
	bl 0x7020	@ 0002c8b4 daf7b4fb
.org 0x2c8b8
	lsls r0, r0, #16	@ 0002c8b8 0004
.org 0x2c8ba
	cmp r0, #0	@ 0002c8ba 0028
.org 0x2c8bc
	beq.n 0x2c910	@ 0002c8bc 28d0
.org 0x2c8be
	adds r0, r7, #0	@ 0002c8be 381c
.org 0x2c8c0
	adds r1, r5, #0	@ 0002c8c0 291c
.org 0x2c8c2
	adds r2, r6, #0	@ 0002c8c2 321c
.org 0x2c8c4
	bl 0x2e55c	@ 0002c8c4 01f04afe
.org 0x2c8c8
	lsls r0, r0, #24	@ 0002c8c8 0006
.org 0x2c8ca
	lsrs r0, r0, #24	@ 0002c8ca 000e
.org 0x2c8cc
	cmp r0, #0	@ 0002c8cc 0028
.org 0x2c8ce
	beq.n 0x2c8d2	@ 0002c8ce 00d0
.org 0x2c8d0
	b.n 0x2ca56	@ 0002c8d0 c1e0
.org 0x2c8d2
	adds r0, r5, #0	@ 0002c8d2 281c
.org 0x2c8d4
	adds r1, r6, #0	@ 0002c8d4 311c
.org 0x2c8d6
	bl 0x7020	@ 0002c8d6 daf7a3fb
.org 0x2c8da
	mov r2, r9	@ 0002c8da 4a46
.org 0x2c8dc
	ands r2, r0	@ 0002c8dc 0240
.org 0x2c8de
	movs r1, #0	@ 0002c8de 0021
.org 0x2c8e0
	ldr r0, [r7, #84]	@ 0002c8e0 786d
.org 0x2c8e2
	cmp r0, r5	@ 0002c8e2 a842
.org 0x2c8e4
	bge.n 0x2c8e8	@ 0002c8e4 00da
.org 0x2c8e6
	movs r1, #1	@ 0002c8e6 0121
.org 0x2c8e8
	adds r0, r2, #0	@ 0002c8e8 101c
.org 0x2c8ea
	bl 0x2f084	@ 0002c8ea 02f0cbfb
.org 0x2c8ee
	lsls r0, r0, #24	@ 0002c8ee 0006
.org 0x2c8f0
	cmp r0, #0	@ 0002c8f0 0028
.org 0x2c8f2
	beq.n 0x2c924	@ 0002c8f2 17d0
.org 0x2c8f4
	ldrb r1, [r7, #10]	@ 0002c8f4 b97a
.org 0x2c8f6
	movs r0, #16	@ 0002c8f6 1020
.org 0x2c8f8
	ands r0, r1	@ 0002c8f8 0840
.org 0x2c8fa
	cmp r0, #0	@ 0002c8fa 0028
.org 0x2c8fc
	beq.n 0x2c914	@ 0002c8fc 0ad0
.org 0x2c8fe
	movs r3, #128	@ 0002c8fe 8023
.org 0x2c900
	lsls r3, r3, #5	@ 0002c900 5b01
.org 0x2c902
	adds r0, r5, r3	@ 0002c902 e818
.org 0x2c904
	adds r1, r6, #0	@ 0002c904 311c
.org 0x2c906
	bl 0x7020	@ 0002c906 daf78bfb
.org 0x2c90a
	lsls r0, r0, #16	@ 0002c90a 0004
.org 0x2c90c
	cmp r0, #0	@ 0002c90c 0028
.org 0x2c90e
	bne.n 0x2c924	@ 0002c90e 09d1
.org 0x2c910
	movs r0, #1	@ 0002c910 0120
.org 0x2c912
	b.n 0x2ca56	@ 0002c912 a0e0
.org 0x2c914
	ldr r1, [pc, #88]	@ 0002c914 1649
.org 0x2c916
	adds r0, r5, r1	@ 0002c916 6818
.org 0x2c918
	adds r1, r6, #0	@ 0002c918 311c
.org 0x2c91a
	bl 0x7020	@ 0002c91a daf781fb
.org 0x2c91e
	lsls r0, r0, #16	@ 0002c91e 0004
.org 0x2c920
	cmp r0, #0	@ 0002c920 0028
.org 0x2c922
	beq.n 0x2c89a	@ 0002c922 bad0
.org 0x2c924
	mov r2, r8	@ 0002c924 4246
.org 0x2c926
	movs r3, #2	@ 0002c926 0223
.org 0x2c928
	ldrsh r1, [r2, r3]	@ 0002c928 d15e
.org 0x2c92a
	ldr r0, [r7, #88]	@ 0002c92a b86d
.org 0x2c92c
	adds r6, r0, r1	@ 0002c92c 4618
.org 0x2c92e
	adds r0, r7, #0	@ 0002c92e 381c
.org 0x2c930
	adds r1, r4, #0	@ 0002c930 211c
.org 0x2c932
	adds r2, r6, #0	@ 0002c932 321c
.org 0x2c934
	bl 0x2e55c	@ 0002c934 01f012fe
.org 0x2c938
	lsls r0, r0, #24	@ 0002c938 0006
.org 0x2c93a
	lsrs r0, r0, #24	@ 0002c93a 000e
.org 0x2c93c
	cmp r0, #0	@ 0002c93c 0028
.org 0x2c93e
	beq.n 0x2c942	@ 0002c93e 00d0
.org 0x2c940
	b.n 0x2ca56	@ 0002c940 89e0
.org 0x2c942
	adds r0, r4, #0	@ 0002c942 201c
.org 0x2c944
	adds r1, r6, #0	@ 0002c944 311c
.org 0x2c946
	bl 0x7020	@ 0002c946 daf76bfb
.org 0x2c94a
	mov r2, r9	@ 0002c94a 4a46
.org 0x2c94c
	ands r2, r0	@ 0002c94c 0240
.org 0x2c94e
	movs r1, #0	@ 0002c94e 0021
.org 0x2c950
	ldr r0, [r7, #84]	@ 0002c950 786d
.org 0x2c952
	cmp r0, r4	@ 0002c952 a042
.org 0x2c954
	bge.n 0x2c958	@ 0002c954 00da
.org 0x2c956
	movs r1, #1	@ 0002c956 0121
.org 0x2c958
	adds r0, r2, #0	@ 0002c958 101c
.org 0x2c95a
	bl 0x2f084	@ 0002c95a 02f093fb
.org 0x2c95e
	lsls r0, r0, #24	@ 0002c95e 0006
.org 0x2c960
	cmp r0, #0	@ 0002c960 0028
.org 0x2c962
	beq.n 0x2c974	@ 0002c962 07d0
.org 0x2c964
	ldrb r1, [r7, #10]	@ 0002c964 b97a
.org 0x2c966
	movs r0, #16	@ 0002c966 1020
.org 0x2c968
	ands r0, r1	@ 0002c968 0840
.org 0x2c96a
	cmp r0, #0	@ 0002c96a 0028
.org 0x2c96c
	bne.n 0x2c89a	@ 0002c96c 95d1
.org 0x2c96e
	b.n 0x2c910	@ 0002c96e cfe7
.org 0x2c970
	.byte 0x00,0xf0,0xff,0xff	@ 0002c970 data
.org 0x2c974
	adds r0, r7, #0	@ 0002c974 381c
.org 0x2c976
	adds r1, r5, #0	@ 0002c976 291c
.org 0x2c978
	adds r2, r6, #0	@ 0002c978 321c
.org 0x2c97a
	bl 0x2e55c	@ 0002c97a 01f0effd
.org 0x2c97e
	lsls r0, r0, #24	@ 0002c97e 0006
.org 0x2c980
	lsrs r0, r0, #24	@ 0002c980 000e
.org 0x2c982
	cmp r0, #0	@ 0002c982 0028
.org 0x2c984
	bne.n 0x2ca56	@ 0002c984 67d1
.org 0x2c986
	adds r0, r5, #0	@ 0002c986 281c
.org 0x2c988
	adds r1, r6, #0	@ 0002c988 311c
.org 0x2c98a
	bl 0x7020	@ 0002c98a daf749fb
.org 0x2c98e
	mov r2, r9	@ 0002c98e 4a46
.org 0x2c990
	ands r2, r0	@ 0002c990 0240
.org 0x2c992
	movs r1, #0	@ 0002c992 0021
.org 0x2c994
	ldr r0, [r7, #84]	@ 0002c994 786d
.org 0x2c996
	cmp r0, r5	@ 0002c996 a842
.org 0x2c998
	bge.n 0x2c99c	@ 0002c998 00da
.org 0x2c99a
	movs r1, #1	@ 0002c99a 0121
.org 0x2c99c
	adds r0, r2, #0	@ 0002c99c 101c
.org 0x2c99e
	bl 0x2f084	@ 0002c99e 02f071fb
.org 0x2c9a2
	lsls r0, r0, #24	@ 0002c9a2 0006
.org 0x2c9a4
	cmp r0, #0	@ 0002c9a4 0028
.org 0x2c9a6
	beq.n 0x2c9b4	@ 0002c9a6 05d0
.org 0x2c9a8
	ldrb r1, [r7, #10]	@ 0002c9a8 b97a
.org 0x2c9aa
	movs r0, #16	@ 0002c9aa 1020
.org 0x2c9ac
	ands r0, r1	@ 0002c9ac 0840
.org 0x2c9ae
	cmp r0, #0	@ 0002c9ae 0028
.org 0x2c9b0
	bne.n 0x2c910	@ 0002c9b0 aed1
.org 0x2c9b2
	b.n 0x2c89a	@ 0002c9b2 72e7
.org 0x2c9b4
	mov r1, r8	@ 0002c9b4 4146
.org 0x2c9b6
	movs r2, #2	@ 0002c9b6 0222
.org 0x2c9b8
	ldrsh r0, [r1, r2]	@ 0002c9b8 885e
.org 0x2c9ba
	ldr r1, [r7, #88]	@ 0002c9ba b96d
.org 0x2c9bc
	adds r1, r1, r0	@ 0002c9bc 0918
.org 0x2c9be
	mov r3, r8	@ 0002c9be 4346
.org 0x2c9c0
	ldrh r0, [r3, #6]	@ 0002c9c0 d888
.org 0x2c9c2
	lsls r0, r0, #16	@ 0002c9c2 0004
.org 0x2c9c4
	asrs r0, r0, #17	@ 0002c9c4 4014
.org 0x2c9c6
	subs r6, r1, r0	@ 0002c9c6 0e1a
.org 0x2c9c8
	movs r0, #128	@ 0002c9c8 8020
.org 0x2c9ca
	lsls r0, r0, #2	@ 0002c9ca 8000
.org 0x2c9cc
	adds r0, r0, r6	@ 0002c9cc 8019
.org 0x2c9ce
	mov r8, r0	@ 0002c9ce 8046
.org 0x2c9d0
	adds r0, r7, #0	@ 0002c9d0 381c
.org 0x2c9d2
	adds r1, r4, #0	@ 0002c9d2 211c
.org 0x2c9d4
	mov r2, r8	@ 0002c9d4 4246
.org 0x2c9d6
	bl 0x2e55c	@ 0002c9d6 01f0c1fd
.org 0x2c9da
	lsls r0, r0, #24	@ 0002c9da 0006
.org 0x2c9dc
	lsrs r0, r0, #24	@ 0002c9dc 000e
.org 0x2c9de
	cmp r0, #0	@ 0002c9de 0028
.org 0x2c9e0
	bne.n 0x2ca56	@ 0002c9e0 39d1
.org 0x2c9e2
	adds r0, r4, #0	@ 0002c9e2 201c
.org 0x2c9e4
	adds r1, r6, #0	@ 0002c9e4 311c
.org 0x2c9e6
	bl 0x7020	@ 0002c9e6 daf71bfb
.org 0x2c9ea
	mov r2, r9	@ 0002c9ea 4a46
.org 0x2c9ec
	ands r2, r0	@ 0002c9ec 0240
.org 0x2c9ee
	movs r1, #0	@ 0002c9ee 0021
.org 0x2c9f0
	ldr r0, [r7, #84]	@ 0002c9f0 786d
.org 0x2c9f2
	cmp r0, r4	@ 0002c9f2 a042
.org 0x2c9f4
	bge.n 0x2c9f8	@ 0002c9f4 00da
.org 0x2c9f6
	movs r1, #1	@ 0002c9f6 0121
.org 0x2c9f8
	adds r0, r2, #0	@ 0002c9f8 101c
.org 0x2c9fa
	bl 0x2f084	@ 0002c9fa 02f043fb
.org 0x2c9fe
	lsls r0, r0, #24	@ 0002c9fe 0006
.org 0x2ca00
	cmp r0, #0	@ 0002ca00 0028
.org 0x2ca02
	beq.n 0x2ca12	@ 0002ca02 06d0
.org 0x2ca04
	ldrb r1, [r7, #10]	@ 0002ca04 b97a
.org 0x2ca06
	movs r0, #16	@ 0002ca06 1020
.org 0x2ca08
	ands r0, r1	@ 0002ca08 0840
.org 0x2ca0a
	cmp r0, #0	@ 0002ca0a 0028
.org 0x2ca0c
	beq.n 0x2ca10	@ 0002ca0c 00d0
.org 0x2ca0e
	b.n 0x2c89a	@ 0002ca0e 44e7
.org 0x2ca10
	b.n 0x2c910	@ 0002ca10 7ee7
.org 0x2ca12
	adds r0, r7, #0	@ 0002ca12 381c
.org 0x2ca14
	adds r1, r5, #0	@ 0002ca14 291c
.org 0x2ca16
	mov r2, r8	@ 0002ca16 4246
.org 0x2ca18
	bl 0x2e55c	@ 0002ca18 01f0a0fd
.org 0x2ca1c
	lsls r0, r0, #24	@ 0002ca1c 0006
.org 0x2ca1e
	lsrs r0, r0, #24	@ 0002ca1e 000e
.org 0x2ca20
	cmp r0, #0	@ 0002ca20 0028
.org 0x2ca22
	bne.n 0x2ca56	@ 0002ca22 18d1
.org 0x2ca24
	adds r0, r5, #0	@ 0002ca24 281c
.org 0x2ca26
	adds r1, r6, #0	@ 0002ca26 311c
.org 0x2ca28
	bl 0x7020	@ 0002ca28 daf7fafa
.org 0x2ca2c
	mov r2, r9	@ 0002ca2c 4a46
.org 0x2ca2e
	ands r2, r0	@ 0002ca2e 0240
.org 0x2ca30
	movs r1, #0	@ 0002ca30 0021
.org 0x2ca32
	ldr r0, [r7, #84]	@ 0002ca32 786d
.org 0x2ca34
	cmp r0, r5	@ 0002ca34 a842
.org 0x2ca36
	bge.n 0x2ca3a	@ 0002ca36 00da
.org 0x2ca38
	movs r1, #1	@ 0002ca38 0121
.org 0x2ca3a
	adds r0, r2, #0	@ 0002ca3a 101c
.org 0x2ca3c
	bl 0x2f084	@ 0002ca3c 02f022fb
.org 0x2ca40
	lsls r0, r0, #24	@ 0002ca40 0006
.org 0x2ca42
	cmp r0, #0	@ 0002ca42 0028
