@ FUN_08020854  entry 0x08020854  size 238
.thumb
.org 0x20854
FUN_08020854:
	push {r4, r5, r6, lr}	@ 00020854 70b5
.org 0x20856
	adds r2, r0, #0	@ 00020856 021c
.org 0x20858
	ldr r3, [r2, #32]	@ 00020858 136a
.org 0x2085a
	movs r0, #190	@ 0002085a be20
.org 0x2085c
	lsls r0, r0, #1	@ 0002085c 4000
.org 0x2085e
	adds r5, r2, r0	@ 0002085e 1518
.org 0x20860
	ldrb r0, [r5, #0]	@ 00020860 2878
.org 0x20862
	cmp r0, #0	@ 00020862 0028
.org 0x20864
	bne.n 0x208dc	@ 00020864 3ad1
.org 0x20866
	ldr r3, [pc, #48]	@ 00020866 0c4b
.org 0x20868
	ldrh r0, [r3, #8]	@ 00020868 1889
.org 0x2086a
	movs r6, #1	@ 0002086a 0126
.org 0x2086c
	orrs r0, r6	@ 0002086c 3043
.org 0x2086e
	strh r0, [r3, #8]	@ 0002086e 1881
.org 0x20870
	ldr r2, [pc, #40]	@ 00020870 0a4a
.org 0x20872
	ldrb r1, [r2, #4]	@ 00020872 1179
.org 0x20874
	movs r0, #247	@ 00020874 f720
.org 0x20876
	ands r0, r1	@ 00020876 0840
.org 0x20878
	strb r0, [r2, #4]	@ 00020878 1071
.org 0x2087a
	ldrb r4, [r3, #2]	@ 0002087a 9c78
.org 0x2087c
	cmp r4, #0	@ 0002087c 002c
.org 0x2087e
	bne.n 0x208a4	@ 0002087e 11d1
.org 0x20880
	adds r0, r3, #0	@ 00020880 181c
.org 0x20882
	adds r0, #16	@ 00020882 1030
.org 0x20884
	ldr r1, [pc, #24]	@ 00020884 0649
.org 0x20886
	ldr r1, [r1, #8]	@ 00020886 8968
.org 0x20888
	ldr r1, [r1, #36]	@ 00020888 496a
.org 0x2088a
	bl 0x275f0	@ 0002088a 06f0b1fe
.org 0x2088e
	movs r0, #1	@ 0002088e 0120
.org 0x20890
	bl 0x1f63c	@ 00020890 fef7d4fe
.org 0x20894
	strb r6, [r5, #0]	@ 00020894 2e70
.org 0x20896
	b.n 0x20968	@ 00020896 67e0
.org 0x20898
	.byte 0x10,0xe9,0x02,0x02	@ 00020898 data
.org 0x2089c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002089c data
.org 0x208a0
	.byte 0xf8,0x2c,0x84,0x08	@ 000208a0 data
.org 0x208a4
	cmp r4, #1	@ 000208a4 012c
.org 0x208a6
	bne.n 0x208c0	@ 000208a6 0bd1
.org 0x208a8
	adds r0, r3, #0	@ 000208a8 181c
.org 0x208aa
	adds r0, #16	@ 000208aa 1030
.org 0x208ac
	ldr r1, [pc, #12]	@ 000208ac 0349
.org 0x208ae
	ldr r1, [r1, #8]	@ 000208ae 8968
.org 0x208b0
	ldr r1, [r1, #8]	@ 000208b0 8968
.org 0x208b2
	bl 0x275f0	@ 000208b2 06f09dfe
.org 0x208b6
	strb r6, [r5, #0]	@ 000208b6 2e70
.org 0x208b8
	b.n 0x20968	@ 000208b8 56e0
.org 0x208ba
	.byte 0x00	@ 000208ba data
.org 0x208bb
	.byte 0x00	@ 000208bb data
.org 0x208bc
	.byte 0xf8,0x2c,0x84,0x08	@ 000208bc data
.org 0x208c0
	cmp r4, #2	@ 000208c0 022c
.org 0x208c2
	bne.n 0x20968	@ 000208c2 51d1
.org 0x208c4
	adds r0, r3, #0	@ 000208c4 181c
.org 0x208c6
	adds r0, #16	@ 000208c6 1030
.org 0x208c8
	ldr r1, [pc, #12]	@ 000208c8 0349
.org 0x208ca
	ldr r1, [r1, #8]	@ 000208ca 8968
.org 0x208cc
	ldr r1, [r1, #12]	@ 000208cc c968
.org 0x208ce
	bl 0x275f0	@ 000208ce 06f08ffe
.org 0x208d2
	strb r4, [r5, #0]	@ 000208d2 2c70
.org 0x208d4
	b.n 0x20968	@ 000208d4 48e0
.org 0x208d6
	.byte 0x00	@ 000208d6 data
.org 0x208d7
	.byte 0x00	@ 000208d7 data
.org 0x208d8
	.byte 0xf8,0x2c,0x84,0x08	@ 000208d8 data
.org 0x208dc
	cmp r0, #1	@ 000208dc 0128
.org 0x208de
	bne.n 0x20904	@ 000208de 11d1
.org 0x208e0
	ldr r1, [r3, #84]	@ 000208e0 596d
.org 0x208e2
	ldr r0, [pc, #24]	@ 000208e2 0648
.org 0x208e4
	cmp r1, r0	@ 000208e4 8142
.org 0x208e6
	ble.n 0x20904	@ 000208e6 0ddd
.org 0x208e8
	ldr r0, [pc, #20]	@ 000208e8 0548
.org 0x208ea
	movs r1, #135	@ 000208ea 8721
.org 0x208ec
	lsls r1, r1, #13	@ 000208ec 4903
.org 0x208ee
	str r1, [r0, #0]	@ 000208ee 0160
.org 0x208f0
	movs r0, #2	@ 000208f0 0220
.org 0x208f2
	bl 0x1f63c	@ 000208f2 fef7a3fe
.org 0x208f6
	movs r0, #2	@ 000208f6 0220
.org 0x208f8
	strb r0, [r5, #0]	@ 000208f8 2870
.org 0x208fa
	b.n 0x20968	@ 000208fa 35e0
.org 0x208fc
	.byte 0xff,0x57,0x11,0x00	@ 000208fc data
.org 0x20900
	.byte 0x54,0xea,0x02,0x02	@ 00020900 data
.org 0x20904
	movs r0, #190	@ 00020904 be20
.org 0x20906
	lsls r0, r0, #1	@ 00020906 4000
.org 0x20908
	adds r4, r2, r0	@ 00020908 1418
.org 0x2090a
	ldrb r0, [r4, #0]	@ 0002090a 2078
.org 0x2090c
	cmp r0, #2	@ 0002090c 0228
.org 0x2090e
	bne.n 0x20944	@ 0002090e 19d1
.org 0x20910
	ldr r1, [r3, #84]	@ 00020910 596d
.org 0x20912
	ldr r0, [pc, #36]	@ 00020912 0948
.org 0x20914
	cmp r1, r0	@ 00020914 8142
.org 0x20916
	ble.n 0x20922	@ 00020916 04dd
.org 0x20918
	ldr r2, [pc, #32]	@ 00020918 084a
.org 0x2091a
	ldrb r1, [r2, #1]	@ 0002091a 5178
.org 0x2091c
	movs r0, #2	@ 0002091c 0220
.org 0x2091e
	orrs r0, r1	@ 0002091e 0843
.org 0x20920
	strb r0, [r2, #1]	@ 00020920 5070
.org 0x20922
	ldr r1, [r3, #84]	@ 00020922 596d
.org 0x20924
	ldr r0, [pc, #24]	@ 00020924 0648
.org 0x20926
	cmp r1, r0	@ 00020926 8142
.org 0x20928
	ble.n 0x20968	@ 00020928 1edd
.org 0x2092a
	ldr r0, [pc, #16]	@ 0002092a 0448
.org 0x2092c
	movs r1, #0	@ 0002092c 0021
.org 0x2092e
	strb r1, [r0, #1]	@ 0002092e 4170
.org 0x20930
	movs r0, #3	@ 00020930 0320
.org 0x20932
	strb r0, [r4, #0]	@ 00020932 2070
.org 0x20934
	b.n 0x20968	@ 00020934 18e0
.org 0x20936
	.byte 0x00	@ 00020936 data
.org 0x20937
	.byte 0x00	@ 00020937 data
.org 0x20938
	.byte 0xff,0x0f,0x1c,0x00	@ 00020938 data
.org 0x2093c
	.byte 0xe0,0x32,0x00,0x03	@ 0002093c data
.org 0x20940
	.byte 0xff,0x2f,0x1c,0x00	@ 00020940 data
