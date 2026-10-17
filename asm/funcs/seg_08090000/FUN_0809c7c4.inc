@ FUN_0809c7c4  entry 0x0809c7c4  size 674
.thumb
.org 0x9c7c4
FUN_0809c7c4:
	push {r4, r5, r6, lr}	@ 0009c7c4 70b5
.org 0x9c7c6
	adds r6, r0, #0	@ 0009c7c6 061c
.org 0x9c7c8
	ldr r4, [r6, #40]	@ 0009c7c8 b46a
.org 0x9c7ca
	bl 0x1cff0	@ 0009c7ca 80f711fc
.org 0x9c7ce
	ldrb r0, [r4, #12]	@ 0009c7ce 207b
.org 0x9c7d0
	cmp r0, #1	@ 0009c7d0 0128
.org 0x9c7d2
	bls.n 0x9c810	@ 0009c7d2 1dd9
.org 0x9c7d4
	ldrb r1, [r6, #10]	@ 0009c7d4 b17a
.org 0x9c7d6
	movs r0, #254	@ 0009c7d6 fe20
.org 0x9c7d8
	ands r0, r1	@ 0009c7d8 0840
.org 0x9c7da
	movs r2, #0	@ 0009c7da 0022
.org 0x9c7dc
	movs r1, #253	@ 0009c7dc fd21
.org 0x9c7de
	ands r0, r1	@ 0009c7de 0840
.org 0x9c7e0
	strb r0, [r6, #10]	@ 0009c7e0 b072
.org 0x9c7e2
	adds r0, r6, #0	@ 0009c7e2 301c
.org 0x9c7e4
	adds r0, #140	@ 0009c7e4 8c30
.org 0x9c7e6
	str r2, [r0, #0]	@ 0009c7e6 0260
.org 0x9c7e8
	adds r0, #4	@ 0009c7e8 0430
.org 0x9c7ea
	str r2, [r0, #0]	@ 0009c7ea 0260
.org 0x9c7ec
	adds r0, #4	@ 0009c7ec 0430
.org 0x9c7ee
	strb r2, [r0, #0]	@ 0009c7ee 0270
.org 0x9c7f0
	ldrb r1, [r6, #10]	@ 0009c7f0 b17a
.org 0x9c7f2
	movs r0, #251	@ 0009c7f2 fb20
.org 0x9c7f4
	ands r0, r1	@ 0009c7f4 0840
.org 0x9c7f6
	strb r0, [r6, #10]	@ 0009c7f6 b072
.org 0x9c7f8
	ldr r1, [pc, #16]	@ 0009c7f8 0449
.org 0x9c7fa
	ldrb r0, [r6, #9]	@ 0009c7fa 707a
.org 0x9c7fc
	lsls r0, r0, #2	@ 0009c7fc 8000
.org 0x9c7fe
	adds r0, r0, r1	@ 0009c7fe 4018
.org 0x9c800
	movs r1, #3	@ 0009c800 0321
.org 0x9c802
	str r1, [r6, #12]	@ 0009c802 f160
.org 0x9c804
	ldr r0, [r0, #0]	@ 0009c804 0068
.org 0x9c806
	ldr r0, [r0, #12]	@ 0009c806 c068
.org 0x9c808
	str r0, [r6, #20]	@ 0009c808 7061
.org 0x9c80a
	b.n 0x9cab4	@ 0009c80a 53e1
.org 0x9c80c
	.byte 0x40,0xdb,0x85,0x08	@ 0009c80c data
.org 0x9c810
	ldrb r0, [r6, #13]	@ 0009c810 707b
.org 0x9c812
	cmp r0, #0	@ 0009c812 0028
.org 0x9c814
	beq.n 0x9c818	@ 0009c814 00d0
.org 0x9c816
	b.n 0x9ca2c	@ 0009c816 09e1
.org 0x9c818
	ldr r1, [pc, #36]	@ 0009c818 0949
.org 0x9c81a
	ldr r0, [r1, #0]	@ 0009c81a 0868
.org 0x9c81c
	ldr r2, [r6, #84]	@ 0009c81c 726d
.org 0x9c81e
	ldr r0, [r0, #84]	@ 0009c81e 406d
.org 0x9c820
	adds r3, r1, #0	@ 0009c820 0b1c
.org 0x9c822
	cmp r2, r0	@ 0009c822 8242
.org 0x9c824
	ble.n 0x9c848	@ 0009c824 10dd
.org 0x9c826
	ldr r1, [r6, #92]	@ 0009c826 f16d
.org 0x9c828
	adds r0, r1, #0	@ 0009c828 081c
.org 0x9c82a
	subs r0, #32	@ 0009c82a 2038
.org 0x9c82c
	str r0, [r6, #92]	@ 0009c82c f065
.org 0x9c82e
	cmp r0, #0	@ 0009c82e 0028
.org 0x9c830
	ble.n 0x9c836	@ 0009c830 01dd
.org 0x9c832
	subs r0, #32	@ 0009c832 2038
.org 0x9c834
	str r0, [r6, #92]	@ 0009c834 f065
.org 0x9c836
	ldr r0, [r6, #92]	@ 0009c836 f06d
.org 0x9c838
	ldr r1, [pc, #8]	@ 0009c838 0249
.org 0x9c83a
	cmp r0, r1	@ 0009c83a 8842
.org 0x9c83c
	bge.n 0x9c862	@ 0009c83c 11da
.org 0x9c83e
	b.n 0x9c860	@ 0009c83e 0fe0
.org 0x9c840
	.byte 0xf0,0xdb,0x02,0x02	@ 0009c840 data
.org 0x9c844
	.byte 0x00,0xfc,0xff,0xff	@ 0009c844 data
.org 0x9c848
	ldr r0, [r6, #92]	@ 0009c848 f06d
.org 0x9c84a
	adds r0, #32	@ 0009c84a 2030
.org 0x9c84c
	str r0, [r6, #92]	@ 0009c84c f065
.org 0x9c84e
	cmp r0, #0	@ 0009c84e 0028
.org 0x9c850
	bge.n 0x9c856	@ 0009c850 01da
.org 0x9c852
	adds r0, #32	@ 0009c852 2030
.org 0x9c854
	str r0, [r6, #92]	@ 0009c854 f065
.org 0x9c856
	ldr r0, [r6, #92]	@ 0009c856 f06d
.org 0x9c858
	movs r1, #128	@ 0009c858 8021
.org 0x9c85a
	lsls r1, r1, #3	@ 0009c85a c900
.org 0x9c85c
	cmp r0, r1	@ 0009c85c 8842
.org 0x9c85e
	ble.n 0x9c862	@ 0009c85e 00dd
.org 0x9c860
	str r1, [r6, #92]	@ 0009c860 f165
.org 0x9c862
	ldr r0, [r6, #84]	@ 0009c862 706d
.org 0x9c864
	ldr r1, [r6, #92]	@ 0009c864 f16d
.org 0x9c866
	adds r0, r0, r1	@ 0009c866 4018
.org 0x9c868
	str r0, [r6, #84]	@ 0009c868 7065
.org 0x9c86a
	ldrb r1, [r4, #10]	@ 0009c86a a17a
.org 0x9c86c
	movs r0, #16	@ 0009c86c 1020
.org 0x9c86e
	ands r0, r1	@ 0009c86e 0840
.org 0x9c870
	lsls r0, r0, #24	@ 0009c870 0006
.org 0x9c872
	lsrs r1, r0, #24	@ 0009c872 010e
.org 0x9c874
	cmp r1, #0	@ 0009c874 0029
.org 0x9c876
	beq.n 0x9c8a8	@ 0009c876 17d0
.org 0x9c878
	adds r0, r6, #0	@ 0009c878 301c
.org 0x9c87a
	adds r0, #180	@ 0009c87a b430
.org 0x9c87c
	ldr r1, [r6, #84]	@ 0009c87c 716d
.org 0x9c87e
	ldr r0, [r0, #0]	@ 0009c87e 0068
.org 0x9c880
	cmp r1, r0	@ 0009c880 8142
.org 0x9c882
	bge.n 0x9c88e	@ 0009c882 04da
.org 0x9c884
	str r0, [r6, #84]	@ 0009c884 7065
.org 0x9c886
	movs r0, #0	@ 0009c886 0020
.org 0x9c888
	str r0, [r6, #92]	@ 0009c888 f065
.org 0x9c88a
	strb r0, [r6, #19]	@ 0009c88a f074
.org 0x9c88c
	b.n 0x9c8d0	@ 0009c88c 20e0
.org 0x9c88e
	adds r0, r4, #0	@ 0009c88e 201c
.org 0x9c890
	adds r0, #180	@ 0009c890 b430
.org 0x9c892
	ldr r0, [r0, #12]	@ 0009c892 c068
.org 0x9c894
	ldr r2, [pc, #12]	@ 0009c894 034a
.org 0x9c896
	adds r0, r0, r2	@ 0009c896 8018
.org 0x9c898
	cmp r1, r0	@ 0009c898 8142
.org 0x9c89a
	ble.n 0x9c8d0	@ 0009c89a 19dd
.org 0x9c89c
	str r0, [r6, #84]	@ 0009c89c 7065
.org 0x9c89e
	movs r0, #0	@ 0009c89e 0020
.org 0x9c8a0
	str r0, [r6, #92]	@ 0009c8a0 f065
.org 0x9c8a2
	b.n 0x9c8d0	@ 0009c8a2 15e0
.org 0x9c8a4
	.byte 0x00,0xe8,0xff,0xff	@ 0009c8a4 data
.org 0x9c8a8
	adds r0, r6, #0	@ 0009c8a8 301c
.org 0x9c8aa
	adds r0, #180	@ 0009c8aa b430
.org 0x9c8ac
	ldr r2, [r6, #84]	@ 0009c8ac 726d
.org 0x9c8ae
	ldr r0, [r0, #0]	@ 0009c8ae 0068
.org 0x9c8b0
	cmp r2, r0	@ 0009c8b0 8242
.org 0x9c8b2
	ble.n 0x9c8bc	@ 0009c8b2 03dd
.org 0x9c8b4
	str r0, [r6, #84]	@ 0009c8b4 7065
.org 0x9c8b6
	str r1, [r6, #92]	@ 0009c8b6 f165
.org 0x9c8b8
	strb r1, [r6, #19]	@ 0009c8b8 f174
.org 0x9c8ba
	b.n 0x9c8d0	@ 0009c8ba 09e0
.org 0x9c8bc
	adds r0, r4, #0	@ 0009c8bc 201c
.org 0x9c8be
	adds r0, #180	@ 0009c8be b430
.org 0x9c8c0
	ldr r0, [r0, #8]	@ 0009c8c0 8068
.org 0x9c8c2
	movs r4, #192	@ 0009c8c2 c024
.org 0x9c8c4
	lsls r4, r4, #5	@ 0009c8c4 6401
.org 0x9c8c6
	adds r0, r0, r4	@ 0009c8c6 0019
.org 0x9c8c8
	cmp r2, r0	@ 0009c8c8 8242
.org 0x9c8ca
	bge.n 0x9c8d0	@ 0009c8ca 01da
.org 0x9c8cc
	str r0, [r6, #84]	@ 0009c8cc 7065
.org 0x9c8ce
	str r1, [r6, #92]	@ 0009c8ce f165
.org 0x9c8d0
	ldr r0, [r3, #0]	@ 0009c8d0 1868
.org 0x9c8d2
	ldr r0, [r0, #88]	@ 0009c8d2 806d
.org 0x9c8d4
	ldr r1, [pc, #12]	@ 0009c8d4 0349
.org 0x9c8d6
	adds r0, r0, r1	@ 0009c8d6 4018
.org 0x9c8d8
	ldr r1, [r6, #88]	@ 0009c8d8 b16d
.org 0x9c8da
	cmp r1, r0	@ 0009c8da 8142
.org 0x9c8dc
	ble.n 0x9c8ec	@ 0009c8dc 06dd
.org 0x9c8de
	ldr r0, [pc, #8]	@ 0009c8de 0248
.org 0x9c8e0
	b.n 0x9c8f0	@ 0009c8e0 06e0
.org 0x9c8e2
	.byte 0x00	@ 0009c8e2 data
.org 0x9c8e3
	.byte 0x00	@ 0009c8e3 data
.org 0x9c8e4
	.byte 0x00,0x90,0xff,0xff	@ 0009c8e4 data
.org 0x9c8e8
	.byte 0x00,0xff,0xff,0xff	@ 0009c8e8 data
.org 0x9c8ec
	movs r0, #128	@ 0009c8ec 8020
.org 0x9c8ee
	lsls r0, r0, #3	@ 0009c8ee c000
.org 0x9c8f0
	str r0, [r6, #96]	@ 0009c8f0 3066
.org 0x9c8f2
	ldr r0, [r6, #88]	@ 0009c8f2 b06d
.org 0x9c8f4
	ldr r1, [r6, #96]	@ 0009c8f4 316e
.org 0x9c8f6
	adds r0, r0, r1	@ 0009c8f6 4018
.org 0x9c8f8
	str r0, [r6, #88]	@ 0009c8f8 b065
.org 0x9c8fa
	adds r2, r6, #0	@ 0009c8fa 321c
.org 0x9c8fc
	adds r2, #188	@ 0009c8fc bc32
.org 0x9c8fe
	ldr r1, [r2, #0]	@ 0009c8fe 1168
.org 0x9c900
	ldr r3, [pc, #72]	@ 0009c900 124b
.org 0x9c902
	adds r1, r1, r3	@ 0009c902 c918
.org 0x9c904
	cmp r0, r1	@ 0009c904 8842
.org 0x9c906
	bls.n 0x9c90a	@ 0009c906 00d9
.org 0x9c908
	str r1, [r6, #88]	@ 0009c908 b165
.org 0x9c90a
	ldr r0, [r2, #0]	@ 0009c90a 1068
.org 0x9c90c
	ldr r4, [pc, #64]	@ 0009c90c 104c
.org 0x9c90e
	adds r1, r0, r4	@ 0009c90e 0119
.org 0x9c910
	ldr r0, [r6, #88]	@ 0009c910 b06d
.org 0x9c912
	cmp r0, r1	@ 0009c912 8842
.org 0x9c914
	bcs.n 0x9c918	@ 0009c914 00d2
.org 0x9c916
	str r1, [r6, #88]	@ 0009c916 b165
.org 0x9c918
	ldrb r0, [r6, #18]	@ 0009c918 b07c
.org 0x9c91a
	cmp r0, #17	@ 0009c91a 1128
.org 0x9c91c
	bhi.n 0x9c9fc	@ 0009c91c 6ed8
.org 0x9c91e
	ldrb r0, [r6, #19]	@ 0009c91e f07c
.org 0x9c920
	subs r0, #1	@ 0009c920 0138
.org 0x9c922
	strb r0, [r6, #19]	@ 0009c922 f074
.org 0x9c924
	lsls r0, r0, #24	@ 0009c924 0006
.org 0x9c926
	lsrs r0, r0, #24	@ 0009c926 000e
.org 0x9c928
	cmp r0, #255	@ 0009c928 ff28
.org 0x9c92a
	beq.n 0x9c92e	@ 0009c92a 00d0
.org 0x9c92c
	b.n 0x9cab4	@ 0009c92c c2e0
.org 0x9c92e
	ldrb r4, [r6, #18]	@ 0009c92e b47c
.org 0x9c930
	adds r0, r4, #0	@ 0009c930 201c
.org 0x9c932
	movs r1, #3	@ 0009c932 0321
.org 0x9c934
	bl 0x129198	@ 0009c934 8cf030fc
.org 0x9c938
	lsls r0, r0, #24	@ 0009c938 0006
.org 0x9c93a
	lsrs r0, r0, #24	@ 0009c93a 000e
.org 0x9c93c
	cmp r0, #1	@ 0009c93c 0128
.org 0x9c93e
	beq.n 0x9c974	@ 0009c93e 19d0
.org 0x9c940
	cmp r0, #1	@ 0009c940 0128
.org 0x9c942
	bgt.n 0x9c954	@ 0009c942 07dc
.org 0x9c944
	cmp r0, #0	@ 0009c944 0028
.org 0x9c946
	beq.n 0x9c95a	@ 0009c946 08d0
.org 0x9c948
	b.n 0x9c9e4	@ 0009c948 4ce0
.org 0x9c94a
	.byte 0x00	@ 0009c94a data
.org 0x9c94b
	.byte 0x00	@ 0009c94b data
.org 0x9c94c
	.byte 0x00,0xb0,0xff,0xff	@ 0009c94c data
.org 0x9c950
	.byte 0x00,0x30,0xff,0xff	@ 0009c950 data
.org 0x9c954
	cmp r0, #2	@ 0009c954 0228
.org 0x9c956
	beq.n 0x9c9b4	@ 0009c956 2dd0
.org 0x9c958
	b.n 0x9c9e4	@ 0009c958 44e0
.org 0x9c95a
	ldr r0, [pc, #20]	@ 0009c95a 0548
.org 0x9c95c
	adds r0, r4, r0	@ 0009c95c 2018
.org 0x9c95e
	ldrb r2, [r0, #0]	@ 0009c95e 0278
.org 0x9c960
	adds r0, r6, #0	@ 0009c960 301c
.org 0x9c962
	movs r1, #0	@ 0009c962 0021
.org 0x9c964
	movs r3, #0	@ 0009c964 0023
.org 0x9c966
	bl 0xc87d4	@ 0009c966 2bf035ff
.org 0x9c96a
	str r0, [r6, #44]	@ 0009c96a f062
.org 0x9c96c
	movs r0, #8	@ 0009c96c 0820
.org 0x9c96e
	b.n 0x9c9e2	@ 0009c96e 38e0
.org 0x9c970
	.byte 0x1c,0x14,0x86,0x08	@ 0009c970 data
.org 0x9c974
	ldr r0, [pc, #44]	@ 0009c974 0b48
.org 0x9c976
	adds r0, r4, r0	@ 0009c976 2018
.org 0x9c978
	ldrb r2, [r0, #0]	@ 0009c978 0278
.org 0x9c97a
	ldr r4, [pc, #44]	@ 0009c97a 0b4c
.org 0x9c97c
	ldr r1, [r4, #0]	@ 0009c97c 2168
.org 0x9c97e
	ldr r0, [pc, #44]	@ 0009c97e 0b48
.org 0x9c980
	adds r3, r1, #0	@ 0009c980 0b1c
.org 0x9c982
	muls r3, r0	@ 0009c982 4343
.org 0x9c984
	ldr r0, [pc, #40]	@ 0009c984 0a48
.org 0x9c986
	adds r3, r3, r0	@ 0009c986 1b18
.org 0x9c988
	lsls r3, r3, #1	@ 0009c988 5b00
.org 0x9c98a
	lsrs r0, r3, #1	@ 0009c98a 5808
.org 0x9c98c
	str r0, [r4, #0]	@ 0009c98c 2060
.org 0x9c98e
	lsrs r3, r3, #17	@ 0009c98e 5b0c
.org 0x9c990
	movs r0, #1	@ 0009c990 0120
.org 0x9c992
	ands r3, r0	@ 0009c992 0340
.org 0x9c994
	adds r3, #1	@ 0009c994 0133
.org 0x9c996
	adds r0, r6, #0	@ 0009c996 301c
.org 0x9c998
	movs r1, #0	@ 0009c998 0021
.org 0x9c99a
	bl 0xc87d4	@ 0009c99a 2bf01bff
.org 0x9c99e
	str r0, [r6, #44]	@ 0009c99e f062
.org 0x9c9a0
	movs r0, #8	@ 0009c9a0 0820
.org 0x9c9a2
	b.n 0x9c9e2	@ 0009c9a2 1ee0
.org 0x9c9a4
	.byte 0x1c,0x14,0x86,0x08	@ 0009c9a4 data
.org 0x9c9a8
	.byte 0x38,0xdc,0x02,0x02	@ 0009c9a8 data
.org 0x9c9ac
	.byte 0xfd,0x43,0x03,0x00	@ 0009c9ac data
.org 0x9c9b0
	.byte 0xc3,0x9e,0x26,0x00	@ 0009c9b0 data
.org 0x9c9b4
	ldr r0, [pc, #52]	@ 0009c9b4 0d48
.org 0x9c9b6
	adds r0, r4, r0	@ 0009c9b6 2018
.org 0x9c9b8
	ldrb r2, [r0, #0]	@ 0009c9b8 0278
.org 0x9c9ba
	ldr r4, [pc, #52]	@ 0009c9ba 0d4c
.org 0x9c9bc
	ldr r1, [r4, #0]	@ 0009c9bc 2168
.org 0x9c9be
	ldr r0, [pc, #52]	@ 0009c9be 0d48
.org 0x9c9c0
	adds r3, r1, #0	@ 0009c9c0 0b1c
.org 0x9c9c2
	muls r3, r0	@ 0009c9c2 4343
.org 0x9c9c4
	ldr r1, [pc, #48]	@ 0009c9c4 0c49
.org 0x9c9c6
	adds r3, r3, r1	@ 0009c9c6 5b18
.org 0x9c9c8
	lsls r3, r3, #1	@ 0009c9c8 5b00
.org 0x9c9ca
	lsrs r0, r3, #1	@ 0009c9ca 5808
.org 0x9c9cc
	str r0, [r4, #0]	@ 0009c9cc 2060
.org 0x9c9ce
	lsrs r3, r3, #17	@ 0009c9ce 5b0c
.org 0x9c9d0
	movs r0, #1	@ 0009c9d0 0120
.org 0x9c9d2
	ands r3, r0	@ 0009c9d2 0340
.org 0x9c9d4
	adds r3, #3	@ 0009c9d4 0333
.org 0x9c9d6
	adds r0, r6, #0	@ 0009c9d6 301c
.org 0x9c9d8
	movs r1, #0	@ 0009c9d8 0021
.org 0x9c9da
	bl 0xc87d4	@ 0009c9da 2bf0fbfe
.org 0x9c9de
	str r0, [r6, #44]	@ 0009c9de f062
.org 0x9c9e0
	movs r0, #64	@ 0009c9e0 4020
.org 0x9c9e2
	strb r0, [r6, #19]	@ 0009c9e2 f074
.org 0x9c9e4
	ldrb r0, [r6, #18]	@ 0009c9e4 b07c
.org 0x9c9e6
	adds r0, #1	@ 0009c9e6 0130
.org 0x9c9e8
	strb r0, [r6, #18]	@ 0009c9e8 b074
.org 0x9c9ea
	b.n 0x9cab4	@ 0009c9ea 63e0
.org 0x9c9ec
	.byte 0x1c,0x14,0x86,0x08	@ 0009c9ec data
.org 0x9c9f0
	.byte 0x38,0xdc,0x02,0x02	@ 0009c9f0 data
.org 0x9c9f4
	.byte 0xfd,0x43,0x03,0x00	@ 0009c9f4 data
.org 0x9c9f8
	.byte 0xc3,0x9e,0x26,0x00	@ 0009c9f8 data
.org 0x9c9fc
	ldr r0, [r6, #44]	@ 0009c9fc f06a
.org 0x9c9fe
	ldrb r0, [r0, #13]	@ 0009c9fe 407b
.org 0x9ca00
	cmp r0, #1	@ 0009ca00 0128
.org 0x9ca02
	bls.n 0x9cab4	@ 0009ca02 57d9
.org 0x9ca04
	ldrb r1, [r6, #10]	@ 0009ca04 b17a
.org 0x9ca06
	movs r0, #4	@ 0009ca06 0420
.org 0x9ca08
	movs r5, #0	@ 0009ca08 0025
.org 0x9ca0a
	orrs r0, r1	@ 0009ca0a 0843
.org 0x9ca0c
	strb r0, [r6, #10]	@ 0009ca0c b072
.org 0x9ca0e
	adds r4, r6, #0	@ 0009ca0e 341c
.org 0x9ca10
	adds r4, #116	@ 0009ca10 7434
.org 0x9ca12
	ldr r1, [pc, #20]	@ 0009ca12 0549
.org 0x9ca14
	adds r2, r6, #0	@ 0009ca14 321c
.org 0x9ca16
	adds r2, #84	@ 0009ca16 5432
.org 0x9ca18
	adds r0, r4, #0	@ 0009ca18 201c
.org 0x9ca1a
	movs r3, #8	@ 0009ca1a 0823
.org 0x9ca1c
	bl 0x5760	@ 0009ca1c 68f7a0fe
.org 0x9ca20
	str r6, [r4, #44]	@ 0009ca20 e662
.org 0x9ca22
	str r5, [r4, #36]	@ 0009ca22 6562
.org 0x9ca24
	str r5, [r6, #96]	@ 0009ca24 3566
.org 0x9ca26
	b.n 0x9ca90	@ 0009ca26 33e0
.org 0x9ca28
	.byte 0x04,0x14,0x86,0x08	@ 0009ca28 data
.org 0x9ca2c
	cmp r0, #1	@ 0009ca2c 0128
.org 0x9ca2e
	bne.n 0x9ca64	@ 0009ca2e 19d1
.org 0x9ca30
	ldr r1, [r6, #88]	@ 0009ca30 b16d
.org 0x9ca32
	ldr r0, [r6, #96]	@ 0009ca32 306e
.org 0x9ca34
	adds r1, r1, r0	@ 0009ca34 0918
.org 0x9ca36
	str r1, [r6, #88]	@ 0009ca36 b165
.org 0x9ca38
	adds r0, #64	@ 0009ca38 4030
.org 0x9ca3a
	str r0, [r6, #96]	@ 0009ca3a 3066
.org 0x9ca3c
	ldr r0, [r6, #84]	@ 0009ca3c 706d
.org 0x9ca3e
	bl 0x8534	@ 0009ca3e 6bf779fd
.org 0x9ca42
	ldr r2, [pc, #28]	@ 0009ca42 074a
.org 0x9ca44
	adds r4, r0, r2	@ 0009ca44 8418
.org 0x9ca46
	ldr r0, [r6, #88]	@ 0009ca46 b06d
.org 0x9ca48
	cmp r0, r4	@ 0009ca48 a042
.org 0x9ca4a
	ble.n 0x9cab4	@ 0009ca4a 33dd
.org 0x9ca4c
	adds r1, r6, #0	@ 0009ca4c 311c
.org 0x9ca4e
	adds r1, #84	@ 0009ca4e 5431
.org 0x9ca50
	movs r0, #8	@ 0009ca50 0820
.org 0x9ca52
	bl 0x1fe64	@ 0009ca52 83f707fa
.org 0x9ca56
	movs r0, #56	@ 0009ca56 3820
.org 0x9ca58
	bl 0x2b10	@ 0009ca58 66f75af8
.org 0x9ca5c
	str r4, [r6, #88]	@ 0009ca5c b465
.org 0x9ca5e
	b.n 0x9ca90	@ 0009ca5e 17e0
.org 0x9ca60
	.byte 0x00,0xef,0xff,0xff	@ 0009ca60 data
.org 0x9ca64
	cmp r0, #2	@ 0009ca64 0228
