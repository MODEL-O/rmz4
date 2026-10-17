@ FUN_0805f838  entry 0x0805f838  size 1160
.thumb
.org 0x5f838
FUN_0805f838:
	push {r4, r5, r6, r7, lr}	@ 0005f838 f0b5
.org 0x5f83a
	mov r7, sl	@ 0005f83a 5746
.org 0x5f83c
	mov r6, r9	@ 0005f83c 4e46
.org 0x5f83e
	mov r5, r8	@ 0005f83e 4546
.org 0x5f840
	push {r5, r6, r7}	@ 0005f840 e0b4
.org 0x5f842
	sub sp, #12	@ 0005f842 83b0
.org 0x5f844
	adds r4, r0, #0	@ 0005f844 041c
.org 0x5f846
	bl 0x1cff0	@ 0005f846 bdf7d3fb
.org 0x5f84a
	ldr r0, [pc, #72]	@ 0005f84a 1248
.org 0x5f84c
	ldrh r1, [r0, #8]	@ 0005f84c 0189
.org 0x5f84e
	movs r0, #8	@ 0005f84e 0820
.org 0x5f850
	ands r0, r1	@ 0005f850 0840
.org 0x5f852
	cmp r0, #0	@ 0005f852 0028
.org 0x5f854
	beq.n 0x5f858	@ 0005f854 00d0
.org 0x5f856
	b.n 0x5fce4	@ 0005f856 45e2
.org 0x5f858
	ldr r0, [pc, #60]	@ 0005f858 0f48
.org 0x5f85a
	ldr r0, [r0, #0]	@ 0005f85a 0068
.org 0x5f85c
	ldr r1, [r4, #84]	@ 0005f85c 616d
.org 0x5f85e
	ldr r0, [r0, #84]	@ 0005f85e 406d
.org 0x5f860
	subs r2, r1, r0	@ 0005f860 0a1a
.org 0x5f862
	mov r9, r2	@ 0005f862 9146
.org 0x5f864
	cmp r2, #0	@ 0005f864 002a
.org 0x5f866
	bge.n 0x5f86c	@ 0005f866 01da
.org 0x5f868
	subs r0, r0, r1	@ 0005f868 401a
.org 0x5f86a
	mov r9, r0	@ 0005f86a 8146
.org 0x5f86c
	adds r0, r4, #0	@ 0005f86c 201c
.org 0x5f86e
	adds r0, #164	@ 0005f86e a430
.org 0x5f870
	movs r7, #0	@ 0005f870 0027
.org 0x5f872
	ldrsh r0, [r0, r7]	@ 0005f872 c05f
.org 0x5f874
	movs r1, #2	@ 0005f874 0221
.org 0x5f876
	mov sl, r1	@ 0005f876 8a46
.org 0x5f878
	cmp r0, #23	@ 0005f878 1728
.org 0x5f87a
	ble.n 0x5f888	@ 0005f87a 05dd
.org 0x5f87c
	movs r2, #0	@ 0005f87c 0022
.org 0x5f87e
	mov sl, r2	@ 0005f87e 9246
.org 0x5f880
	cmp r0, #47	@ 0005f880 2f28
.org 0x5f882
	bgt.n 0x5f888	@ 0005f882 01dc
.org 0x5f884
	movs r7, #1	@ 0005f884 0127
.org 0x5f886
	mov sl, r7	@ 0005f886 ba46
.org 0x5f888
	ldr r0, [pc, #16]	@ 0005f888 0448
.org 0x5f88a
	cmp r9, r0	@ 0005f88a 8145
.org 0x5f88c
	bgt.n 0x5f8a0	@ 0005f88c 08dc
.org 0x5f88e
	movs r0, #0	@ 0005f88e 0020
.org 0x5f890
	mov r9, r0	@ 0005f890 8146
.org 0x5f892
	b.n 0x5f8b4	@ 0005f892 0fe0
.org 0x5f894
	.byte 0x10,0xe9,0x02,0x02	@ 0005f894 data
.org 0x5f898
	.byte 0xf0,0xdb,0x02,0x02	@ 0005f898 data
.org 0x5f89c
	.byte 0xff,0x3e,0x00,0x00	@ 0005f89c data
.org 0x5f8a0
	ldr r0, [pc, #8]	@ 0005f8a0 0248
.org 0x5f8a2
	cmp r9, r0	@ 0005f8a2 8145
.org 0x5f8a4
	bgt.n 0x5f8b0	@ 0005f8a4 04dc
.org 0x5f8a6
	movs r1, #1	@ 0005f8a6 0121
.org 0x5f8a8
	mov r9, r1	@ 0005f8a8 8946
.org 0x5f8aa
	b.n 0x5f8b4	@ 0005f8aa 03e0
.org 0x5f8ac
	.byte 0xff,0x6e,0x00,0x00	@ 0005f8ac data
.org 0x5f8b0
	movs r2, #2	@ 0005f8b0 0222
.org 0x5f8b2
	mov r9, r2	@ 0005f8b2 9146
.org 0x5f8b4
	ldr r0, [pc, #84]	@ 0005f8b4 1548
.org 0x5f8b6
	ldrh r0, [r0, #0]	@ 0005f8b6 0088
.org 0x5f8b8
	adds r7, r4, #0	@ 0005f8b8 271c
.org 0x5f8ba
	adds r7, #180	@ 0005f8ba b437
.org 0x5f8bc
	str r7, [sp, #0]	@ 0005f8bc 0097
.org 0x5f8be
	cmp r0, #11	@ 0005f8be 0b28
.org 0x5f8c0
	beq.n 0x5f8c4	@ 0005f8c0 00d0
.org 0x5f8c2
	b.n 0x5fab4	@ 0005f8c2 f7e0
.org 0x5f8c4
	movs r2, #4	@ 0005f8c4 0422
.org 0x5f8c6
	movs r0, #14	@ 0005f8c6 0e20
.org 0x5f8c8
	mov ip, r0	@ 0005f8c8 8446
.org 0x5f8ca
	movs r6, #11	@ 0005f8ca 0b26
.org 0x5f8cc
	movs r5, #20	@ 0005f8cc 1425
.org 0x5f8ce
	movs r3, #24	@ 0005f8ce 1823
.org 0x5f8d0
	movs r1, #27	@ 0005f8d0 1b21
.org 0x5f8d2
	mov r8, r1	@ 0005f8d2 8846
.org 0x5f8d4
	ldr r7, [pc, #56]	@ 0005f8d4 0e4f
.org 0x5f8d6
	ldr r1, [r7, #0]	@ 0005f8d6 3968
.org 0x5f8d8
	ldr r0, [pc, #56]	@ 0005f8d8 0e48
.org 0x5f8da
	muls r0, r1	@ 0005f8da 4843
.org 0x5f8dc
	ldr r1, [pc, #56]	@ 0005f8dc 0e49
.org 0x5f8de
	adds r0, r0, r1	@ 0005f8de 4018
.org 0x5f8e0
	lsls r0, r0, #1	@ 0005f8e0 4000
.org 0x5f8e2
	lsrs r7, r0, #1	@ 0005f8e2 4708
.org 0x5f8e4
	ldr r1, [pc, #40]	@ 0005f8e4 0a49
.org 0x5f8e6
	str r7, [r1, #0]	@ 0005f8e6 0f60
.org 0x5f8e8
	lsrs r1, r0, #17	@ 0005f8e8 410c
.org 0x5f8ea
	movs r0, #31	@ 0005f8ea 1f20
.org 0x5f8ec
	ands r1, r0	@ 0005f8ec 0140
.org 0x5f8ee
	mov r7, r9	@ 0005f8ee 4f46
.org 0x5f8f0
	cmp r7, #0	@ 0005f8f0 002f
.org 0x5f8f2
	bne.n 0x5f976	@ 0005f8f2 40d1
.org 0x5f8f4
	mov r0, sl	@ 0005f8f4 5046
.org 0x5f8f6
	cmp r0, #0	@ 0005f8f6 0028
.org 0x5f8f8
	bne.n 0x5f92e	@ 0005f8f8 19d1
.org 0x5f8fa
	cmp r1, #3	@ 0005f8fa 0329
.org 0x5f8fc
	bhi.n 0x5f900	@ 0005f8fc 00d8
.org 0x5f8fe
	b.n 0x5fa4a	@ 0005f8fe a4e0
.org 0x5f900
	cmp r1, #7	@ 0005f900 0729
.org 0x5f902
	bls.n 0x5f9e0	@ 0005f902 6dd9
.org 0x5f904
	cmp r1, #16	@ 0005f904 1029
.org 0x5f906
	bhi.n 0x5f91c	@ 0005f906 09d8
.org 0x5f908
	mov r7, ip	@ 0005f908 6746
.org 0x5f90a
	b.n 0x5fa7c	@ 0005f90a b7e0
.org 0x5f90c
	.byte 0x10,0xe9,0x02,0x02	@ 0005f90c data
.org 0x5f910
	.byte 0x38,0xdc,0x02,0x02	@ 0005f910 data
.org 0x5f914
	.byte 0xfd,0x43,0x03,0x00	@ 0005f914 data
.org 0x5f918
	.byte 0xc3,0x9e,0x26,0x00	@ 0005f918 data
.org 0x5f91c
	cmp r1, #19	@ 0005f91c 1329
.org 0x5f91e
	bls.n 0x5f9f2	@ 0005f91e 68d9
.org 0x5f920
	cmp r1, #22	@ 0005f920 1629
.org 0x5f922
	bhi.n 0x5f926	@ 0005f922 00d8
.org 0x5f924
	b.n 0x5fa66	@ 0005f924 9fe0
.org 0x5f926
	cmp r1, #27	@ 0005f926 1b29
.org 0x5f928
	bhi.n 0x5f92c	@ 0005f928 00d8
.org 0x5f92a
	b.n 0x5fa6e	@ 0005f92a a0e0
.org 0x5f92c
	b.n 0x5fa76	@ 0005f92c a3e0
.org 0x5f92e
	mov r7, sl	@ 0005f92e 5746
.org 0x5f930
	cmp r7, #1	@ 0005f930 012f
.org 0x5f932
	bne.n 0x5f958	@ 0005f932 11d1
.org 0x5f934
	cmp r1, #2	@ 0005f934 0229
.org 0x5f936
	bhi.n 0x5f93a	@ 0005f936 00d8
.org 0x5f938
	b.n 0x5fa4a	@ 0005f938 87e0
.org 0x5f93a
	cmp r1, #5	@ 0005f93a 0529
.org 0x5f93c
	bls.n 0x5f9ae	@ 0005f93c 37d9
.org 0x5f93e
	cmp r1, #12	@ 0005f93e 0c29
.org 0x5f940
	bls.n 0x5f9b8	@ 0005f940 3ad9
.org 0x5f942
	cmp r1, #15	@ 0005f942 0f29
.org 0x5f944
	bhi.n 0x5f94a	@ 0005f944 01d8
.org 0x5f946
	movs r7, #8	@ 0005f946 0827
.org 0x5f948
	b.n 0x5fa7c	@ 0005f948 98e0
.org 0x5f94a
	cmp r1, #18	@ 0005f94a 1229
.org 0x5f94c
	bhi.n 0x5f950	@ 0005f94c 00d8
.org 0x5f94e
	b.n 0x5fa66	@ 0005f94e 8ae0
.org 0x5f950
	cmp r1, #22	@ 0005f950 1629
.org 0x5f952
	bhi.n 0x5f956	@ 0005f952 00d8
.org 0x5f954
	b.n 0x5fa6e	@ 0005f954 8be0
.org 0x5f956
	b.n 0x5f9ce	@ 0005f956 3ae0
.org 0x5f958
	cmp r1, #1	@ 0005f958 0129
.org 0x5f95a
	bls.n 0x5fa4a	@ 0005f95a 76d9
.org 0x5f95c
	cmp r1, #4	@ 0005f95c 0429
.org 0x5f95e
	bls.n 0x5f9e0	@ 0005f95e 3fd9
.org 0x5f960
	cmp r1, #11	@ 0005f960 0b29
.org 0x5f962
	bhi.n 0x5f968	@ 0005f962 01d8
.org 0x5f964
	mov r7, ip	@ 0005f964 6746
.org 0x5f966
	b.n 0x5fa7c	@ 0005f966 89e0
.org 0x5f968
	cmp r1, #14	@ 0005f968 0e29
.org 0x5f96a
	bls.n 0x5f9f2	@ 0005f96a 42d9
.org 0x5f96c
	cmp r1, #17	@ 0005f96c 1129
.org 0x5f96e
	bls.n 0x5fa66	@ 0005f96e 7ad9
.org 0x5f970
	cmp r1, #20	@ 0005f970 1429
.org 0x5f972
	bls.n 0x5fa6e	@ 0005f972 7cd9
.org 0x5f974
	b.n 0x5fa00	@ 0005f974 44e0
.org 0x5f976
	mov r7, r9	@ 0005f976 4f46
.org 0x5f978
	cmp r7, #1	@ 0005f978 012f
.org 0x5f97a
	bne.n 0x5fa0a	@ 0005f97a 46d1
.org 0x5f97c
	mov r0, sl	@ 0005f97c 5046
.org 0x5f97e
	cmp r0, #0	@ 0005f97e 0028
.org 0x5f980
	bne.n 0x5f9a0	@ 0005f980 0ed1
.org 0x5f982
	cmp r1, #3	@ 0005f982 0329
.org 0x5f984
	bls.n 0x5fa4a	@ 0005f984 61d9
.org 0x5f986
	cmp r1, #5	@ 0005f986 0529
.org 0x5f988
	bls.n 0x5f9e0	@ 0005f988 2ad9
.org 0x5f98a
	cmp r1, #11	@ 0005f98a 0b29
.org 0x5f98c
	bhi.n 0x5f992	@ 0005f98c 01d8
.org 0x5f98e
	mov r7, ip	@ 0005f98e 6746
.org 0x5f990
	b.n 0x5fa7c	@ 0005f990 74e0
.org 0x5f992
	cmp r1, #17	@ 0005f992 1129
.org 0x5f994
	bls.n 0x5f9f2	@ 0005f994 2dd9
.org 0x5f996
	cmp r1, #21	@ 0005f996 1529
.org 0x5f998
	bls.n 0x5fa66	@ 0005f998 65d9
.org 0x5f99a
	cmp r1, #27	@ 0005f99a 1b29
.org 0x5f99c
	bls.n 0x5fa6e	@ 0005f99c 67d9
.org 0x5f99e
	b.n 0x5fa76	@ 0005f99e 6ae0
.org 0x5f9a0
	mov r7, sl	@ 0005f9a0 5746
.org 0x5f9a2
	cmp r7, #1	@ 0005f9a2 012f
.org 0x5f9a4
	bne.n 0x5f9d8	@ 0005f9a4 18d1
.org 0x5f9a6
	cmp r1, #2	@ 0005f9a6 0229
.org 0x5f9a8
	bls.n 0x5fa4a	@ 0005f9a8 4fd9
.org 0x5f9aa
	cmp r1, #4	@ 0005f9aa 0429
.org 0x5f9ac
	bhi.n 0x5f9b4	@ 0005f9ac 02d8
.org 0x5f9ae
	movs r0, #6	@ 0005f9ae 0620
.org 0x5f9b0
	strb r0, [r4, #13]	@ 0005f9b0 6073
.org 0x5f9b2
	b.n 0x5fa7e	@ 0005f9b2 64e0
.org 0x5f9b4
	cmp r1, #9	@ 0005f9b4 0929
.org 0x5f9b6
	bhi.n 0x5f9be	@ 0005f9b6 02d8
.org 0x5f9b8
	mov r1, ip	@ 0005f9b8 6146
.org 0x5f9ba
	strb r1, [r4, #13]	@ 0005f9ba 6173
.org 0x5f9bc
	b.n 0x5fa7e	@ 0005f9bc 5fe0
.org 0x5f9be
	cmp r1, #13	@ 0005f9be 0d29
.org 0x5f9c0
	bhi.n 0x5f9c6	@ 0005f9c0 01d8
.org 0x5f9c2
	movs r7, #8	@ 0005f9c2 0827
.org 0x5f9c4
	b.n 0x5fa7c	@ 0005f9c4 5ae0
.org 0x5f9c6
	cmp r1, #17	@ 0005f9c6 1129
.org 0x5f9c8
	bls.n 0x5fa66	@ 0005f9c8 4dd9
.org 0x5f9ca
	cmp r1, #21	@ 0005f9ca 1529
.org 0x5f9cc
	bls.n 0x5fa6e	@ 0005f9cc 4fd9
.org 0x5f9ce
	cmp r1, #25	@ 0005f9ce 1929
.org 0x5f9d0
	bls.n 0x5fa76	@ 0005f9d0 51d9
.org 0x5f9d2
	mov r0, r8	@ 0005f9d2 4046
.org 0x5f9d4
	strb r0, [r4, #13]	@ 0005f9d4 6073
.org 0x5f9d6
	b.n 0x5fa7e	@ 0005f9d6 52e0
.org 0x5f9d8
	cmp r1, #2	@ 0005f9d8 0229
.org 0x5f9da
	bls.n 0x5fa4a	@ 0005f9da 36d9
.org 0x5f9dc
	cmp r1, #4	@ 0005f9dc 0429
.org 0x5f9de
	bhi.n 0x5f9e6	@ 0005f9de 02d8
.org 0x5f9e0
	movs r1, #6	@ 0005f9e0 0621
.org 0x5f9e2
	strb r1, [r4, #13]	@ 0005f9e2 6173
.org 0x5f9e4
	b.n 0x5fa7e	@ 0005f9e4 4be0
.org 0x5f9e6
	cmp r1, #7	@ 0005f9e6 0729
.org 0x5f9e8
	bhi.n 0x5f9ee	@ 0005f9e8 01d8
.org 0x5f9ea
	mov r7, ip	@ 0005f9ea 6746
.org 0x5f9ec
	b.n 0x5fa7c	@ 0005f9ec 46e0
.org 0x5f9ee
	cmp r1, #11	@ 0005f9ee 0b29
.org 0x5f9f0
	bhi.n 0x5f9f8	@ 0005f9f0 02d8
.org 0x5f9f2
	movs r0, #8	@ 0005f9f2 0820
.org 0x5f9f4
	strb r0, [r4, #13]	@ 0005f9f4 6073
.org 0x5f9f6
	b.n 0x5fa7e	@ 0005f9f6 42e0
.org 0x5f9f8
	cmp r1, #15	@ 0005f9f8 0f29
.org 0x5f9fa
	bls.n 0x5fa66	@ 0005f9fa 34d9
.org 0x5f9fc
	cmp r1, #19	@ 0005f9fc 1329
.org 0x5f9fe
	bls.n 0x5fa6e	@ 0005f9fe 36d9
.org 0x5fa00
	cmp r1, #23	@ 0005fa00 1729
.org 0x5fa02
	bls.n 0x5fa76	@ 0005fa02 38d9
.org 0x5fa04
	mov r1, r8	@ 0005fa04 4146
.org 0x5fa06
	strb r1, [r4, #13]	@ 0005fa06 6173
.org 0x5fa08
	b.n 0x5fa7e	@ 0005fa08 39e0
.org 0x5fa0a
	mov r7, sl	@ 0005fa0a 5746
.org 0x5fa0c
	cmp r7, #0	@ 0005fa0c 002f
.org 0x5fa0e
	bne.n 0x5fa26	@ 0005fa0e 0ad1
.org 0x5fa10
	cmp r1, #5	@ 0005fa10 0529
.org 0x5fa12
	bls.n 0x5fa4a	@ 0005fa12 1ad9
.org 0x5fa14
	cmp r1, #8	@ 0005fa14 0829
.org 0x5fa16
	bls.n 0x5fa52	@ 0005fa16 1cd9
.org 0x5fa18
	cmp r1, #12	@ 0005fa18 0c29
.org 0x5fa1a
	bls.n 0x5fa5c	@ 0005fa1a 1fd9
.org 0x5fa1c
	cmp r1, #20	@ 0005fa1c 1429
.org 0x5fa1e
	bls.n 0x5fa66	@ 0005fa1e 22d9
.org 0x5fa20
	cmp r1, #25	@ 0005fa20 1929
.org 0x5fa22
	bls.n 0x5fa6e	@ 0005fa22 24d9
.org 0x5fa24
	b.n 0x5fa76	@ 0005fa24 27e0
.org 0x5fa26
	mov r7, sl	@ 0005fa26 5746
.org 0x5fa28
	cmp r7, #1	@ 0005fa28 012f
.org 0x5fa2a
	bne.n 0x5fa46	@ 0005fa2a 0cd1
.org 0x5fa2c
	cmp r1, #3	@ 0005fa2c 0329
.org 0x5fa2e
	bls.n 0x5fa4a	@ 0005fa2e 0cd9
.org 0x5fa30
	cmp r1, #5	@ 0005fa30 0529
.org 0x5fa32
	bls.n 0x5fa52	@ 0005fa32 0ed9
.org 0x5fa34
	cmp r1, #9	@ 0005fa34 0929
.org 0x5fa36
	bls.n 0x5fa5c	@ 0005fa36 11d9
.org 0x5fa38
	cmp r1, #15	@ 0005fa38 0f29
.org 0x5fa3a
	bls.n 0x5fa66	@ 0005fa3a 14d9
.org 0x5fa3c
	cmp r1, #20	@ 0005fa3c 1429
.org 0x5fa3e
	bls.n 0x5fa6e	@ 0005fa3e 16d9
.org 0x5fa40
	cmp r1, #25	@ 0005fa40 1929
.org 0x5fa42
	bls.n 0x5fa76	@ 0005fa42 18d9
.org 0x5fa44
	b.n 0x5fa7a	@ 0005fa44 19e0
.org 0x5fa46
	cmp r1, #3	@ 0005fa46 0329
.org 0x5fa48
	bhi.n 0x5fa4e	@ 0005fa48 01d8
.org 0x5fa4a
	strb r2, [r4, #13]	@ 0005fa4a 6273
.org 0x5fa4c
	b.n 0x5fa7e	@ 0005fa4c 17e0
.org 0x5fa4e
	cmp r1, #5	@ 0005fa4e 0529
.org 0x5fa50
	bhi.n 0x5fa58	@ 0005fa50 02d8
.org 0x5fa52
	mov r0, ip	@ 0005fa52 6046
.org 0x5fa54
	strb r0, [r4, #13]	@ 0005fa54 6073
.org 0x5fa56
	b.n 0x5fa7e	@ 0005fa56 12e0
.org 0x5fa58
	cmp r1, #8	@ 0005fa58 0829
.org 0x5fa5a
	bhi.n 0x5fa62	@ 0005fa5a 02d8
.org 0x5fa5c
	movs r1, #8	@ 0005fa5c 0821
.org 0x5fa5e
	strb r1, [r4, #13]	@ 0005fa5e 6173
.org 0x5fa60
	b.n 0x5fa7e	@ 0005fa60 0de0
.org 0x5fa62
	cmp r1, #14	@ 0005fa62 0e29
.org 0x5fa64
	bhi.n 0x5fa6a	@ 0005fa64 01d8
.org 0x5fa66
	strb r6, [r4, #13]	@ 0005fa66 6673
.org 0x5fa68
	b.n 0x5fa7e	@ 0005fa68 09e0
.org 0x5fa6a
	cmp r1, #18	@ 0005fa6a 1229
.org 0x5fa6c
	bhi.n 0x5fa72	@ 0005fa6c 01d8
.org 0x5fa6e
	strb r5, [r4, #13]	@ 0005fa6e 6573
.org 0x5fa70
	b.n 0x5fa7e	@ 0005fa70 05e0
.org 0x5fa72
	cmp r1, #23	@ 0005fa72 1729
.org 0x5fa74
	bhi.n 0x5fa7a	@ 0005fa74 01d8
.org 0x5fa76
	strb r3, [r4, #13]	@ 0005fa76 6373
.org 0x5fa78
	b.n 0x5fa7e	@ 0005fa78 01e0
.org 0x5fa7a
	mov r7, r8	@ 0005fa7a 4746
.org 0x5fa7c
	strb r7, [r4, #13]	@ 0005fa7c 6773
.org 0x5fa7e
	ldr r1, [pc, #44]	@ 0005fa7e 0b49
.org 0x5fa80
	ldr r0, [r1, #0]	@ 0005fa80 0868
.org 0x5fa82
	ldrb r0, [r0, #1]	@ 0005fa82 4078
.org 0x5fa84
	cmp r0, #4	@ 0005fa84 0428
.org 0x5fa86
	bls.n 0x5fa96	@ 0005fa86 06d9
.org 0x5fa88
	ldr r0, [pc, #36]	@ 0005fa88 0948
.org 0x5fa8a
	ldrb r1, [r0, #4]	@ 0005fa8a 0179
.org 0x5fa8c
	adds r0, r2, #0	@ 0005fa8c 101c
.org 0x5fa8e
	ands r0, r1	@ 0005fa8e 0840
.org 0x5fa90
	ldrb r1, [r4, #13]	@ 0005fa90 617b
.org 0x5fa92
	cmp r0, #0	@ 0005fa92 0028
.org 0x5fa94
	beq.n 0x5faa0	@ 0005fa94 04d0
.org 0x5fa96
	ldrb r0, [r4, #13]	@ 0005fa96 607b
.org 0x5fa98
	adds r1, r0, #0	@ 0005fa98 011c
.org 0x5fa9a
	cmp r1, #27	@ 0005fa9a 1b29
.org 0x5fa9c
	bne.n 0x5faa0	@ 0005fa9c 00d1
.org 0x5fa9e
	b.n 0x5f8d4	@ 0005fa9e 19e7
.org 0x5faa0
	ldr r7, [sp, #0]	@ 0005faa0 009f
.org 0x5faa2
	ldrb r7, [r7, #28]	@ 0005faa2 3f7f
.org 0x5faa4
	cmp r1, r7	@ 0005faa4 b942
.org 0x5faa6
	bne.n 0x5faaa	@ 0005faa6 00d1
.org 0x5faa8
	b.n 0x5f8d4	@ 0005faa8 14e7
.org 0x5faaa
	b.n 0x5fce0	@ 0005faaa 19e1
.org 0x5faac
	.byte 0xe0,0xe8,0x02,0x02	@ 0005faac data
.org 0x5fab0
	.byte 0xb0,0xe8,0x02,0x02	@ 0005fab0 data
.org 0x5fab4
	movs r2, #4	@ 0005fab4 0422
.org 0x5fab6
	movs r0, #14	@ 0005fab6 0e20
.org 0x5fab8
	mov r8, r0	@ 0005fab8 8046
.org 0x5faba
	movs r1, #8	@ 0005faba 0821
.org 0x5fabc
	mov ip, r1	@ 0005fabc 8c46
.org 0x5fabe
	movs r6, #20	@ 0005fabe 1426
.org 0x5fac0
	movs r5, #24	@ 0005fac0 1825
.org 0x5fac2
	movs r3, #27	@ 0005fac2 1b23
.org 0x5fac4
	ldr r7, [pc, #52]	@ 0005fac4 0d4f
.org 0x5fac6
	ldr r1, [r7, #0]	@ 0005fac6 3968
.org 0x5fac8
	ldr r0, [pc, #52]	@ 0005fac8 0d48
.org 0x5faca
	muls r0, r1	@ 0005faca 4843
.org 0x5facc
	ldr r1, [pc, #52]	@ 0005facc 0d49
.org 0x5face
	adds r0, r0, r1	@ 0005face 4018
.org 0x5fad0
	lsls r0, r0, #1	@ 0005fad0 4000
.org 0x5fad2
	lsrs r7, r0, #1	@ 0005fad2 4708
.org 0x5fad4
	ldr r1, [pc, #36]	@ 0005fad4 0949
.org 0x5fad6
	str r7, [r1, #0]	@ 0005fad6 0f60
.org 0x5fad8
	lsrs r1, r0, #17	@ 0005fad8 410c
.org 0x5fada
	movs r0, #31	@ 0005fada 1f20
.org 0x5fadc
	ands r1, r0	@ 0005fadc 0140
.org 0x5fade
	mov r7, r9	@ 0005fade 4f46
.org 0x5fae0
	cmp r7, #0	@ 0005fae0 002f
.org 0x5fae2
	bne.n 0x5fb80	@ 0005fae2 4dd1
.org 0x5fae4
	mov r0, sl	@ 0005fae4 5046
.org 0x5fae6
	cmp r0, #0	@ 0005fae6 0028
.org 0x5fae8
	bne.n 0x5fb22	@ 0005fae8 1bd1
.org 0x5faea
	cmp r1, #2	@ 0005faea 0229
.org 0x5faec
	bhi.n 0x5faf0	@ 0005faec 00d8
.org 0x5faee
	b.n 0x5fc78	@ 0005faee c3e0
.org 0x5faf0
	cmp r1, #5	@ 0005faf0 0529
.org 0x5faf2
	bls.n 0x5fb94	@ 0005faf2 4fd9
.org 0x5faf4
	cmp r1, #13	@ 0005faf4 0d29
.org 0x5faf6
	bhi.n 0x5fb08	@ 0005faf6 07d8
.org 0x5faf8
	mov r7, r8	@ 0005faf8 4746
.org 0x5fafa
	b.n 0x5fcb2	@ 0005fafa dae0
.org 0x5fafc
	.byte 0x38,0xdc,0x02,0x02	@ 0005fafc data
.org 0x5fb00
	.byte 0xfd,0x43,0x03,0x00	@ 0005fb00 data
.org 0x5fb04
	.byte 0xc3,0x9e,0x26,0x00	@ 0005fb04 data
.org 0x5fb08
	cmp r1, #17	@ 0005fb08 1129
.org 0x5fb0a
	bhi.n 0x5fb0e	@ 0005fb0a 00d8
.org 0x5fb0c
	b.n 0x5fc88	@ 0005fb0c bce0
.org 0x5fb0e
	cmp r1, #20	@ 0005fb0e 1429
.org 0x5fb10
	bhi.n 0x5fb14	@ 0005fb10 00d8
.org 0x5fb12
	b.n 0x5fc92	@ 0005fb12 bee0
.org 0x5fb14
	cmp r1, #24	@ 0005fb14 1829
.org 0x5fb16
	bhi.n 0x5fb1a	@ 0005fb16 00d8
.org 0x5fb18
	b.n 0x5fc9c	@ 0005fb18 c0e0
.org 0x5fb1a
	cmp r1, #28	@ 0005fb1a 1c29
.org 0x5fb1c
	bhi.n 0x5fb20	@ 0005fb1c 00d8
.org 0x5fb1e
	b.n 0x5fca4	@ 0005fb1e c1e0
.org 0x5fb20
	b.n 0x5fcac	@ 0005fb20 c4e0
.org 0x5fb22
	mov r7, sl	@ 0005fb22 5746
.org 0x5fb24
	cmp r7, #1	@ 0005fb24 012f
.org 0x5fb26
	bne.n 0x5fb5a	@ 0005fb26 18d1
.org 0x5fb28
	cmp r1, #1	@ 0005fb28 0129
.org 0x5fb2a
	bhi.n 0x5fb2e	@ 0005fb2a 00d8
.org 0x5fb2c
	b.n 0x5fc78	@ 0005fb2c a4e0
.org 0x5fb2e
	cmp r1, #5	@ 0005fb2e 0529
.org 0x5fb30
	bls.n 0x5fbc2	@ 0005fb30 47d9
.org 0x5fb32
	cmp r1, #13	@ 0005fb32 0d29
.org 0x5fb34
	bhi.n 0x5fb38	@ 0005fb34 00d8
.org 0x5fb36
	b.n 0x5fc4a	@ 0005fb36 88e0
.org 0x5fb38
	cmp r1, #16	@ 0005fb38 1029
.org 0x5fb3a
	bhi.n 0x5fb40	@ 0005fb3a 01d8
.org 0x5fb3c
	mov r7, ip	@ 0005fb3c 6746
.org 0x5fb3e
	b.n 0x5fcb2	@ 0005fb3e b8e0
.org 0x5fb40
	cmp r1, #19	@ 0005fb40 1329
.org 0x5fb42
	bhi.n 0x5fb46	@ 0005fb42 00d8
.org 0x5fb44
	b.n 0x5fc5c	@ 0005fb44 8ae0
.org 0x5fb46
	cmp r1, #21	@ 0005fb46 1529
.org 0x5fb48
	bhi.n 0x5fb4c	@ 0005fb48 00d8
.org 0x5fb4a
	b.n 0x5fc9c	@ 0005fb4a a7e0
.org 0x5fb4c
	cmp r1, #24	@ 0005fb4c 1829
.org 0x5fb4e
	bhi.n 0x5fb52	@ 0005fb4e 00d8
.org 0x5fb50
	b.n 0x5fca4	@ 0005fb50 a8e0
.org 0x5fb52
	cmp r1, #27	@ 0005fb52 1b29
.org 0x5fb54
	bhi.n 0x5fb58	@ 0005fb54 00d8
.org 0x5fb56
	b.n 0x5fcac	@ 0005fb56 a9e0
.org 0x5fb58
	b.n 0x5fc6e	@ 0005fb58 89e0
.org 0x5fb5a
	cmp r1, #2	@ 0005fb5a 0229
.org 0x5fb5c
	bhi.n 0x5fb60	@ 0005fb5c 00d8
.org 0x5fb5e
	b.n 0x5fc78	@ 0005fb5e 8be0
.org 0x5fb60
	cmp r1, #6	@ 0005fb60 0629
.org 0x5fb62
	bhi.n 0x5fb68	@ 0005fb62 01d8
.org 0x5fb64
	movs r7, #6	@ 0005fb64 0627
.org 0x5fb66
	b.n 0x5fcb2	@ 0005fb66 a4e0
.org 0x5fb68
	cmp r1, #13	@ 0005fb68 0d29
.org 0x5fb6a
	bls.n 0x5fc1a	@ 0005fb6a 56d9
.org 0x5fb6c
	cmp r1, #15	@ 0005fb6c 0f29
.org 0x5fb6e
	bls.n 0x5fc24	@ 0005fb6e 59d9
.org 0x5fb70
	cmp r1, #17	@ 0005fb70 1129
.org 0x5fb72
	bhi.n 0x5fb78	@ 0005fb72 01d8
.org 0x5fb74
	movs r7, #11	@ 0005fb74 0b27
.org 0x5fb76
	b.n 0x5fcb2	@ 0005fb76 9ce0
.org 0x5fb78
	cmp r1, #20	@ 0005fb78 1429
.org 0x5fb7a
	bhi.n 0x5fb7e	@ 0005fb7a 00d8
.org 0x5fb7c
	b.n 0x5fc9c	@ 0005fb7c 8ee0
.org 0x5fb7e
	b.n 0x5fbfe	@ 0005fb7e 3ee0
.org 0x5fb80
	mov r7, r9	@ 0005fb80 4f46
.org 0x5fb82
	cmp r7, #1	@ 0005fb82 012f
.org 0x5fb84
	bne.n 0x5fc0c	@ 0005fb84 42d1
.org 0x5fb86
	mov r0, sl	@ 0005fb86 5046
.org 0x5fb88
	cmp r0, #0	@ 0005fb88 0028
.org 0x5fb8a
	bne.n 0x5fbb4	@ 0005fb8a 13d1
.org 0x5fb8c
	cmp r1, #2	@ 0005fb8c 0229
.org 0x5fb8e
	bls.n 0x5fc78	@ 0005fb8e 73d9
.org 0x5fb90
	cmp r1, #4	@ 0005fb90 0429
.org 0x5fb92
	bhi.n 0x5fb9a	@ 0005fb92 02d8
.org 0x5fb94
	movs r1, #6	@ 0005fb94 0621
.org 0x5fb96
	strb r1, [r4, #13]	@ 0005fb96 6173
.org 0x5fb98
	b.n 0x5fcb4	@ 0005fb98 8ce0
.org 0x5fb9a
	cmp r1, #8	@ 0005fb9a 0829
.org 0x5fb9c
	bhi.n 0x5fba2	@ 0005fb9c 01d8
.org 0x5fb9e
	mov r7, r8	@ 0005fb9e 4746
.org 0x5fba0
	b.n 0x5fcb2	@ 0005fba0 87e0
.org 0x5fba2
	cmp r1, #13	@ 0005fba2 0d29
.org 0x5fba4
	bls.n 0x5fc88	@ 0005fba4 70d9
.org 0x5fba6
	cmp r1, #18	@ 0005fba6 1229
.org 0x5fba8
	bls.n 0x5fc92	@ 0005fba8 73d9
.org 0x5fbaa
	cmp r1, #23	@ 0005fbaa 1729
.org 0x5fbac
	bls.n 0x5fc9c	@ 0005fbac 76d9
.org 0x5fbae
	cmp r1, #28	@ 0005fbae 1c29
.org 0x5fbb0
	bls.n 0x5fca4	@ 0005fbb0 78d9
.org 0x5fbb2
	b.n 0x5fcac	@ 0005fbb2 7be0
.org 0x5fbb4
	mov r7, sl	@ 0005fbb4 5746
.org 0x5fbb6
	cmp r7, #1	@ 0005fbb6 012f
.org 0x5fbb8
	bne.n 0x5fbde	@ 0005fbb8 11d1
.org 0x5fbba
	cmp r1, #2	@ 0005fbba 0229
.org 0x5fbbc
	bls.n 0x5fc78	@ 0005fbbc 5cd9
.org 0x5fbbe
	cmp r1, #4	@ 0005fbbe 0429
.org 0x5fbc0
	bhi.n 0x5fbc8	@ 0005fbc0 02d8
.org 0x5fbc2
	movs r0, #6	@ 0005fbc2 0620
.org 0x5fbc4
	strb r0, [r4, #13]	@ 0005fbc4 6073
.org 0x5fbc6
	b.n 0x5fcb4	@ 0005fbc6 75e0
.org 0x5fbc8
	cmp r1, #8	@ 0005fbc8 0829
.org 0x5fbca
	bls.n 0x5fc4a	@ 0005fbca 3ed9
.org 0x5fbcc
	cmp r1, #12	@ 0005fbcc 0c29
.org 0x5fbce
	bhi.n 0x5fbd4	@ 0005fbce 01d8
.org 0x5fbd0
	mov r7, ip	@ 0005fbd0 6746
.org 0x5fbd2
	b.n 0x5fcb2	@ 0005fbd2 6ee0
.org 0x5fbd4
	cmp r1, #16	@ 0005fbd4 1029
.org 0x5fbd6
	bls.n 0x5fc5c	@ 0005fbd6 41d9
.org 0x5fbd8
	cmp r1, #20	@ 0005fbd8 1429
.org 0x5fbda
	bls.n 0x5fc9c	@ 0005fbda 5fd9
.org 0x5fbdc
	b.n 0x5fb4c	@ 0005fbdc b6e7
.org 0x5fbde
	cmp r1, #2	@ 0005fbde 0229
.org 0x5fbe0
	bls.n 0x5fc78	@ 0005fbe0 4ad9
.org 0x5fbe2
	cmp r1, #5	@ 0005fbe2 0529
.org 0x5fbe4
	bhi.n 0x5fbea	@ 0005fbe4 01d8
.org 0x5fbe6
	movs r7, #6	@ 0005fbe6 0627
.org 0x5fbe8
	b.n 0x5fcb2	@ 0005fbe8 63e0
.org 0x5fbea
	cmp r1, #8	@ 0005fbea 0829
.org 0x5fbec
	bls.n 0x5fc1a	@ 0005fbec 15d9
.org 0x5fbee
	cmp r1, #11	@ 0005fbee 0b29
.org 0x5fbf0
	bls.n 0x5fc24	@ 0005fbf0 18d9
.org 0x5fbf2
	cmp r1, #15	@ 0005fbf2 0f29
.org 0x5fbf4
	bhi.n 0x5fbfa	@ 0005fbf4 01d8
.org 0x5fbf6
	movs r7, #11	@ 0005fbf6 0b27
.org 0x5fbf8
	b.n 0x5fcb2	@ 0005fbf8 5be0
.org 0x5fbfa
	cmp r1, #18	@ 0005fbfa 1229
.org 0x5fbfc
	bls.n 0x5fc9c	@ 0005fbfc 4ed9
.org 0x5fbfe
	cmp r1, #22	@ 0005fbfe 1629
.org 0x5fc00
	bls.n 0x5fca4	@ 0005fc00 50d9
.org 0x5fc02
	cmp r1, #25	@ 0005fc02 1929
.org 0x5fc04
	bls.n 0x5fcac	@ 0005fc04 52d9
.org 0x5fc06
	movs r0, #31	@ 0005fc06 1f20
.org 0x5fc08
	strb r0, [r4, #13]	@ 0005fc08 6073
.org 0x5fc0a
	b.n 0x5fcb4	@ 0005fc0a 53e0
.org 0x5fc0c
	mov r7, sl	@ 0005fc0c 5746
.org 0x5fc0e
	cmp r7, #0	@ 0005fc0e 002f
.org 0x5fc10
	bne.n 0x5fc3c	@ 0005fc10 14d1
.org 0x5fc12
	cmp r1, #3	@ 0005fc12 0329
.org 0x5fc14
	bls.n 0x5fc78	@ 0005fc14 30d9
.org 0x5fc16
	cmp r1, #5	@ 0005fc16 0529
.org 0x5fc18
	bhi.n 0x5fc20	@ 0005fc18 02d8
.org 0x5fc1a
	mov r0, r8	@ 0005fc1a 4046
.org 0x5fc1c
	strb r0, [r4, #13]	@ 0005fc1c 6073
.org 0x5fc1e
	b.n 0x5fcb4	@ 0005fc1e 49e0
.org 0x5fc20
	cmp r1, #9	@ 0005fc20 0929
.org 0x5fc22
	bhi.n 0x5fc2a	@ 0005fc22 02d8
.org 0x5fc24
	mov r1, ip	@ 0005fc24 6146
.org 0x5fc26
	strb r1, [r4, #13]	@ 0005fc26 6173
.org 0x5fc28
	b.n 0x5fcb4	@ 0005fc28 44e0
.org 0x5fc2a
	cmp r1, #16	@ 0005fc2a 1029
.org 0x5fc2c
	bhi.n 0x5fc32	@ 0005fc2c 01d8
.org 0x5fc2e
	movs r7, #11	@ 0005fc2e 0b27
.org 0x5fc30
	b.n 0x5fcb2	@ 0005fc30 3fe0
.org 0x5fc32
	cmp r1, #22	@ 0005fc32 1629
.org 0x5fc34
	bls.n 0x5fc9c	@ 0005fc34 32d9
.org 0x5fc36
	cmp r1, #28	@ 0005fc36 1c29
.org 0x5fc38
	bls.n 0x5fca4	@ 0005fc38 34d9
.org 0x5fc3a
	b.n 0x5fcac	@ 0005fc3a 37e0
.org 0x5fc3c
	mov r0, sl	@ 0005fc3c 5046
.org 0x5fc3e
	cmp r0, #1	@ 0005fc3e 0128
.org 0x5fc40
	bne.n 0x5fc74	@ 0005fc40 18d1
.org 0x5fc42
	cmp r1, #4	@ 0005fc42 0429
.org 0x5fc44
	bls.n 0x5fc78	@ 0005fc44 18d9
.org 0x5fc46
	cmp r1, #6	@ 0005fc46 0629
.org 0x5fc48
	bhi.n 0x5fc50	@ 0005fc48 02d8
.org 0x5fc4a
	mov r1, r8	@ 0005fc4a 4146
.org 0x5fc4c
	strb r1, [r4, #13]	@ 0005fc4c 6173
.org 0x5fc4e
	b.n 0x5fcb4	@ 0005fc4e 31e0
.org 0x5fc50
	cmp r1, #9	@ 0005fc50 0929
.org 0x5fc52
	bhi.n 0x5fc58	@ 0005fc52 01d8
.org 0x5fc54
	mov r7, ip	@ 0005fc54 6746
.org 0x5fc56
	b.n 0x5fcb2	@ 0005fc56 2ce0
.org 0x5fc58
	cmp r1, #15	@ 0005fc58 0f29
.org 0x5fc5a
	bhi.n 0x5fc62	@ 0005fc5a 02d8
.org 0x5fc5c
	movs r0, #11	@ 0005fc5c 0b20
.org 0x5fc5e
	strb r0, [r4, #13]	@ 0005fc5e 6073
.org 0x5fc60
	b.n 0x5fcb4	@ 0005fc60 28e0
.org 0x5fc62
	cmp r1, #19	@ 0005fc62 1329
.org 0x5fc64
	bls.n 0x5fc9c	@ 0005fc64 1ad9
.org 0x5fc66
	cmp r1, #24	@ 0005fc66 1829
.org 0x5fc68
	bls.n 0x5fca4	@ 0005fc68 1cd9
.org 0x5fc6a
	cmp r1, #26	@ 0005fc6a 1a29
.org 0x5fc6c
	bls.n 0x5fcac	@ 0005fc6c 1ed9
.org 0x5fc6e
	movs r1, #31	@ 0005fc6e 1f21
.org 0x5fc70
	strb r1, [r4, #13]	@ 0005fc70 6173
.org 0x5fc72
	b.n 0x5fcb4	@ 0005fc72 1fe0
.org 0x5fc74
	cmp r1, #4	@ 0005fc74 0429
.org 0x5fc76
	bhi.n 0x5fc7c	@ 0005fc76 01d8
.org 0x5fc78
	strb r2, [r4, #13]	@ 0005fc78 6273
.org 0x5fc7a
	b.n 0x5fcb4	@ 0005fc7a 1be0
.org 0x5fc7c
	cmp r1, #6	@ 0005fc7c 0629
.org 0x5fc7e
	bhi.n 0x5fc84	@ 0005fc7e 01d8
.org 0x5fc80
	mov r7, r8	@ 0005fc80 4746
.org 0x5fc82
	b.n 0x5fcb2	@ 0005fc82 16e0
.org 0x5fc84
	cmp r1, #8	@ 0005fc84 0829
.org 0x5fc86
	bhi.n 0x5fc8e	@ 0005fc86 02d8
.org 0x5fc88
	mov r0, ip	@ 0005fc88 6046
.org 0x5fc8a
	strb r0, [r4, #13]	@ 0005fc8a 6073
.org 0x5fc8c
	b.n 0x5fcb4	@ 0005fc8c 12e0
.org 0x5fc8e
	cmp r1, #14	@ 0005fc8e 0e29
.org 0x5fc90
	bhi.n 0x5fc98	@ 0005fc90 02d8
.org 0x5fc92
	movs r1, #11	@ 0005fc92 0b21
.org 0x5fc94
	strb r1, [r4, #13]	@ 0005fc94 6173
.org 0x5fc96
	b.n 0x5fcb4	@ 0005fc96 0de0
.org 0x5fc98
	cmp r1, #18	@ 0005fc98 1229
.org 0x5fc9a
	bhi.n 0x5fca0	@ 0005fc9a 01d8
.org 0x5fc9c
	strb r6, [r4, #13]	@ 0005fc9c 6673
.org 0x5fc9e
	b.n 0x5fcb4	@ 0005fc9e 09e0
.org 0x5fca0
	cmp r1, #22	@ 0005fca0 1629
.org 0x5fca2
	bhi.n 0x5fca8	@ 0005fca2 01d8
.org 0x5fca4
	strb r5, [r4, #13]	@ 0005fca4 6573
.org 0x5fca6
	b.n 0x5fcb4	@ 0005fca6 05e0
.org 0x5fca8
	cmp r1, #25	@ 0005fca8 1929
.org 0x5fcaa
	bhi.n 0x5fcb0	@ 0005fcaa 01d8
.org 0x5fcac
	strb r3, [r4, #13]	@ 0005fcac 6373
.org 0x5fcae
	b.n 0x5fcb4	@ 0005fcae 01e0
.org 0x5fcb0
	movs r7, #31	@ 0005fcb0 1f27
.org 0x5fcb2
	strb r7, [r4, #13]	@ 0005fcb2 6773
.org 0x5fcb4
	ldr r1, [pc, #60]	@ 0005fcb4 0f49
.org 0x5fcb6
	ldr r0, [r1, #0]	@ 0005fcb6 0868
.org 0x5fcb8
	ldrb r0, [r0, #1]	@ 0005fcb8 4078
.org 0x5fcba
	cmp r0, #4	@ 0005fcba 0428
.org 0x5fcbc
	bls.n 0x5fccc	@ 0005fcbc 06d9
.org 0x5fcbe
	ldr r7, [pc, #56]	@ 0005fcbe 0e4f
