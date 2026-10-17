@ FUN_080238a4  entry 0x080238a4  size 668
.thumb
.org 0x238a4
FUN_080238a4:
	push {r4, r5, r6, r7, lr}	@ 000238a4 f0b5
.org 0x238a6
	mov r7, r8	@ 000238a6 4746
.org 0x238a8
	push {r7}	@ 000238a8 80b4
.org 0x238aa
	adds r6, r0, #0	@ 000238aa 061c
.org 0x238ac
	ldr r4, [r6, #32]	@ 000238ac 346a
.org 0x238ae
	movs r1, #190	@ 000238ae be21
.org 0x238b0
	lsls r1, r1, #1	@ 000238b0 4900
.org 0x238b2
	adds r1, r1, r6	@ 000238b2 8919
.org 0x238b4
	mov r8, r1	@ 000238b4 8846
.org 0x238b6
	ldrb r7, [r1, #0]	@ 000238b6 0f78
.org 0x238b8
	cmp r7, #0	@ 000238b8 002f
.org 0x238ba
	beq.n 0x238be	@ 000238ba 00d0
.org 0x238bc
	b.n 0x239b8	@ 000238bc 7ce0
.org 0x238be
	ldr r5, [pc, #68]	@ 000238be 114d
.org 0x238c0
	ldrh r2, [r5, #8]	@ 000238c0 2a89
.org 0x238c2
	movs r1, #1	@ 000238c2 0121
.org 0x238c4
	movs r4, #0	@ 000238c4 0024
.org 0x238c6
	orrs r1, r2	@ 000238c6 1143
.org 0x238c8
	strh r1, [r5, #8]	@ 000238c8 2981
.org 0x238ca
	ldr r3, [pc, #60]	@ 000238ca 0f4b
.org 0x238cc
	ldrb r2, [r3, #4]	@ 000238cc 1a79
.org 0x238ce
	movs r1, #8	@ 000238ce 0821
.org 0x238d0
	orrs r1, r2	@ 000238d0 1143
.org 0x238d2
	strb r1, [r3, #4]	@ 000238d2 1971
.org 0x238d4
	ldr r1, [pc, #52]	@ 000238d4 0d49
.org 0x238d6
	ldr r3, [pc, #56]	@ 000238d6 0e4b
.org 0x238d8
	adds r2, r1, r3	@ 000238d8 ca18
.org 0x238da
	strb r4, [r2, #0]	@ 000238da 1470
.org 0x238dc
	ldr r2, [pc, #52]	@ 000238dc 0d4a
.org 0x238de
	adds r1, r1, r2	@ 000238de 8918
.org 0x238e0
	movs r2, #12	@ 000238e0 0c22
.org 0x238e2
	strb r2, [r1, #0]	@ 000238e2 0a70
.org 0x238e4
	ldrb r4, [r5, #2]	@ 000238e4 ac78
.org 0x238e6
	cmp r4, #0	@ 000238e6 002c
.org 0x238e8
	bne.n 0x2391c	@ 000238e8 18d1
.org 0x238ea
	adds r0, r5, #0	@ 000238ea 281c
.org 0x238ec
	adds r0, #16	@ 000238ec 1030
.org 0x238ee
	ldr r1, [pc, #40]	@ 000238ee 0a49
.org 0x238f0
	ldr r1, [r1, #32]	@ 000238f0 096a
.org 0x238f2
	ldr r1, [r1, #56]	@ 000238f2 896b
.org 0x238f4
	bl 0x275f0	@ 000238f4 03f07cfe
.org 0x238f8
	movs r0, #2	@ 000238f8 0220
.org 0x238fa
	bl 0x1f63c	@ 000238fa fbf79ffe
.org 0x238fe
	strh r7, [r5, #10]	@ 000238fe 6f81
.org 0x23900
	movs r1, #2	@ 00023900 0221
.org 0x23902
	b.n 0x239ae	@ 00023902 54e0
.org 0x23904
	.byte 0x10,0xe9,0x02,0x02	@ 00023904 data
.org 0x23908
	.byte 0xb0,0xe8,0x02,0x02	@ 00023908 data
.org 0x2390c
	.byte 0xb0,0x0a,0x00,0x02	@ 0002390c data
.org 0x23910
	.byte 0x40,0xd0,0x02,0x00	@ 00023910 data
.org 0x23914
	.byte 0x41,0xd0,0x02,0x00	@ 00023914 data
.org 0x23918
	.byte 0xf8,0x2c,0x84,0x08	@ 00023918 data
.org 0x2391c
	cmp r4, #2	@ 0002391c 022c
.org 0x2391e
	bne.n 0x23938	@ 0002391e 0bd1
.org 0x23920
	adds r0, r5, #0	@ 00023920 281c
.org 0x23922
	adds r0, #16	@ 00023922 1030
.org 0x23924
	ldr r1, [pc, #12]	@ 00023924 0349
.org 0x23926
	ldr r1, [r1, #32]	@ 00023926 096a
.org 0x23928
	ldr r1, [r1, #8]	@ 00023928 8968
.org 0x2392a
	bl 0x275f0	@ 0002392a 03f061fe
.org 0x2392e
	mov r1, r8	@ 0002392e 4146
.org 0x23930
	strb r4, [r1, #0]	@ 00023930 0c70
.org 0x23932
	b.n 0x23bbc	@ 00023932 43e1
.org 0x23934
	.byte 0xf8,0x2c,0x84,0x08	@ 00023934 data
.org 0x23938
	cmp r4, #3	@ 00023938 032c
.org 0x2393a
	bne.n 0x23978	@ 0002393a 1dd1
.org 0x2393c
	ldrh r0, [r5, #10]	@ 0002393c 6889
.org 0x2393e
	cmp r0, #0	@ 0002393e 0028
.org 0x23940
	beq.n 0x23958	@ 00023940 0ad0
.org 0x23942
	adds r0, r5, #0	@ 00023942 281c
.org 0x23944
	adds r0, #16	@ 00023944 1030
.org 0x23946
	ldr r1, [pc, #12]	@ 00023946 0349
.org 0x23948
	ldr r1, [r1, #32]	@ 00023948 096a
.org 0x2394a
	ldr r1, [r1, #16]	@ 0002394a 0969
.org 0x2394c
	bl 0x275f0	@ 0002394c 03f050fe
.org 0x23950
	b.n 0x23966	@ 00023950 09e0
.org 0x23952
	.byte 0x00	@ 00023952 data
.org 0x23953
	.byte 0x00	@ 00023953 data
.org 0x23954
	.byte 0xf8,0x2c,0x84,0x08	@ 00023954 data
.org 0x23958
	adds r0, r5, #0	@ 00023958 281c
.org 0x2395a
	adds r0, #16	@ 0002395a 1030
.org 0x2395c
	ldr r1, [pc, #20]	@ 0002395c 0549
.org 0x2395e
	ldr r1, [r1, #32]	@ 0002395e 096a
.org 0x23960
	ldr r1, [r1, #64]	@ 00023960 096c
.org 0x23962
	bl 0x275f0	@ 00023962 03f045fe
.org 0x23966
	movs r3, #190	@ 00023966 be23
.org 0x23968
	lsls r3, r3, #1	@ 00023968 5b00
.org 0x2396a
	adds r2, r6, r3	@ 0002396a f218
.org 0x2396c
	movs r1, #4	@ 0002396c 0421
.org 0x2396e
	strb r1, [r2, #0]	@ 0002396e 1170
.org 0x23970
	b.n 0x23bbc	@ 00023970 24e1
.org 0x23972
	.byte 0x00	@ 00023972 data
.org 0x23973
	.byte 0x00	@ 00023973 data
.org 0x23974
	.byte 0xf8,0x2c,0x84,0x08	@ 00023974 data
.org 0x23978
	cmp r4, #4	@ 00023978 042c
.org 0x2397a
	bne.n 0x23998	@ 0002397a 0dd1
.org 0x2397c
	adds r0, r5, #0	@ 0002397c 281c
.org 0x2397e
	adds r0, #16	@ 0002397e 1030
.org 0x23980
	ldr r1, [pc, #16]	@ 00023980 0449
.org 0x23982
	ldr r1, [r1, #32]	@ 00023982 096a
.org 0x23984
	ldr r1, [r1, #24]	@ 00023984 8969
.org 0x23986
	bl 0x275f0	@ 00023986 03f033fe
.org 0x2398a
	movs r1, #5	@ 0002398a 0521
.org 0x2398c
	mov r2, r8	@ 0002398c 4246
.org 0x2398e
	strb r1, [r2, #0]	@ 0002398e 1170
.org 0x23990
	b.n 0x23bbc	@ 00023990 14e1
.org 0x23992
	.byte 0x00	@ 00023992 data
.org 0x23993
	.byte 0x00	@ 00023993 data
.org 0x23994
	.byte 0xf8,0x2c,0x84,0x08	@ 00023994 data
.org 0x23998
	cmp r4, #5	@ 00023998 052c
.org 0x2399a
	beq.n 0x2399e	@ 0002399a 00d0
.org 0x2399c
	b.n 0x23bbc	@ 0002399c 0ee1
.org 0x2399e
	adds r0, r5, #0	@ 0002399e 281c
.org 0x239a0
	adds r0, #16	@ 000239a0 1030
.org 0x239a2
	ldr r1, [pc, #16]	@ 000239a2 0449
.org 0x239a4
	ldr r1, [r1, #32]	@ 000239a4 096a
.org 0x239a6
	ldr r1, [r1, #32]	@ 000239a6 096a
.org 0x239a8
	bl 0x275f0	@ 000239a8 03f022fe
.org 0x239ac
	movs r1, #9	@ 000239ac 0921
.org 0x239ae
	mov r3, r8	@ 000239ae 4346
.org 0x239b0
	strb r1, [r3, #0]	@ 000239b0 1970
.org 0x239b2
	b.n 0x23bbc	@ 000239b2 03e1
.org 0x239b4
	.byte 0xf8,0x2c,0x84,0x08	@ 000239b4 data
.org 0x239b8
	cmp r7, #2	@ 000239b8 022f
.org 0x239ba
	bne.n 0x239f4	@ 000239ba 1bd1
.org 0x239bc
	ldr r2, [r4, #84]	@ 000239bc 626d
.org 0x239be
	movs r1, #210	@ 000239be d221
.org 0x239c0
	lsls r1, r1, #11	@ 000239c0 c902
.org 0x239c2
	cmp r2, r1	@ 000239c2 8a42
.org 0x239c4
	ble.n 0x239f4	@ 000239c4 16dd
.org 0x239c6
	ldr r2, [r4, #88]	@ 000239c6 a26d
.org 0x239c8
	ldr r1, [pc, #8]	@ 000239c8 0249
.org 0x239ca
	cmp r2, r1	@ 000239ca 8a42
.org 0x239cc
	bgt.n 0x239dc	@ 000239cc 06dc
.org 0x239ce
	ldr r2, [pc, #8]	@ 000239ce 024a
.org 0x239d0
	movs r1, #1	@ 000239d0 0121
.org 0x239d2
	b.n 0x239e0	@ 000239d2 05e0
.org 0x239d4
	.byte 0xff,0x7f,0x02,0x00	@ 000239d4 data
.org 0x239d8
	.byte 0x10,0xe9,0x02,0x02	@ 000239d8 data
.org 0x239dc
	ldr r2, [pc, #16]	@ 000239dc 044a
.org 0x239de
	movs r1, #0	@ 000239de 0021
.org 0x239e0
	strh r1, [r2, #10]	@ 000239e0 5181
.org 0x239e2
	movs r1, #190	@ 000239e2 be21
.org 0x239e4
	lsls r1, r1, #1	@ 000239e4 4900
.org 0x239e6
	adds r2, r6, r1	@ 000239e6 7218
.org 0x239e8
	movs r1, #3	@ 000239e8 0321
.org 0x239ea
	strb r1, [r2, #0]	@ 000239ea 1170
.org 0x239ec
	b.n 0x23bbc	@ 000239ec e6e0
.org 0x239ee
	.byte 0x00	@ 000239ee data
.org 0x239ef
	.byte 0x00	@ 000239ef data
.org 0x239f0
	.byte 0x10,0xe9,0x02,0x02	@ 000239f0 data
.org 0x239f4
	movs r2, #190	@ 000239f4 be22
.org 0x239f6
	lsls r2, r2, #1	@ 000239f6 5200
.org 0x239f8
	adds r5, r6, r2	@ 000239f8 b518
.org 0x239fa
	ldrb r1, [r5, #0]	@ 000239fa 2978
.org 0x239fc
	cmp r1, #3	@ 000239fc 0329
.org 0x239fe
	bne.n 0x23a40	@ 000239fe 1fd1
.org 0x23a00
	ldr r2, [r4, #84]	@ 00023a00 626d
.org 0x23a02
	movs r1, #195	@ 00023a02 c321
.org 0x23a04
	lsls r1, r1, #12	@ 00023a04 0903
.org 0x23a06
	cmp r2, r1	@ 00023a06 8a42
.org 0x23a08
	ble.n 0x23a40	@ 00023a08 1add
.org 0x23a0a
	ldr r2, [r4, #88]	@ 00023a0a a26d
.org 0x23a0c
	movs r1, #222	@ 00023a0c de21
.org 0x23a0e
	lsls r1, r1, #11	@ 00023a0e c902
.org 0x23a10
	cmp r2, r1	@ 00023a10 8a42
.org 0x23a12
	ble.n 0x23a40	@ 00023a12 15dd
.org 0x23a14
	ldr r0, [pc, #28]	@ 00023a14 0748
.org 0x23a16
	ldr r1, [pc, #32]	@ 00023a16 0849
.org 0x23a18
	ldr r1, [r1, #32]	@ 00023a18 096a
.org 0x23a1a
	ldr r1, [r1, #20]	@ 00023a1a 4969
.org 0x23a1c
	bl 0x275f0	@ 00023a1c 03f0e8fd
.org 0x23a20
	movs r0, #4	@ 00023a20 0420
.org 0x23a22
	bl 0x1f63c	@ 00023a22 fbf70bfe
.org 0x23a26
	ldr r3, [pc, #20]	@ 00023a26 054b
.org 0x23a28
	ldrb r2, [r3, #4]	@ 00023a28 1a79
.org 0x23a2a
	movs r1, #8	@ 00023a2a 0821
.org 0x23a2c
	orrs r1, r2	@ 00023a2c 1143
.org 0x23a2e
	strb r1, [r3, #4]	@ 00023a2e 1971
.org 0x23a30
	movs r1, #5	@ 00023a30 0521
.org 0x23a32
	b.n 0x23bba	@ 00023a32 c2e0
.org 0x23a34
	.byte 0x20,0xe9,0x02,0x02	@ 00023a34 data
.org 0x23a38
	.byte 0xf8,0x2c,0x84,0x08	@ 00023a38 data
.org 0x23a3c
	.byte 0xb0,0xe8,0x02,0x02	@ 00023a3c data
.org 0x23a40
	movs r3, #190	@ 00023a40 be23
.org 0x23a42
	lsls r3, r3, #1	@ 00023a42 5b00
.org 0x23a44
	adds r5, r6, r3	@ 00023a44 f518
.org 0x23a46
	ldrb r1, [r5, #0]	@ 00023a46 2978
.org 0x23a48
	cmp r1, #4	@ 00023a48 0429
.org 0x23a4a
	bne.n 0x23a8c	@ 00023a4a 1fd1
.org 0x23a4c
	ldr r2, [r4, #84]	@ 00023a4c 626d
.org 0x23a4e
	movs r1, #195	@ 00023a4e c321
.org 0x23a50
	lsls r1, r1, #12	@ 00023a50 0903
.org 0x23a52
	cmp r2, r1	@ 00023a52 8a42
.org 0x23a54
	ble.n 0x23a8c	@ 00023a54 1add
.org 0x23a56
	ldr r2, [r4, #88]	@ 00023a56 a26d
.org 0x23a58
	movs r1, #222	@ 00023a58 de21
.org 0x23a5a
	lsls r1, r1, #11	@ 00023a5a c902
.org 0x23a5c
	cmp r2, r1	@ 00023a5c 8a42
.org 0x23a5e
	ble.n 0x23a8c	@ 00023a5e 15dd
.org 0x23a60
	ldr r0, [pc, #28]	@ 00023a60 0748
.org 0x23a62
	ldr r1, [pc, #32]	@ 00023a62 0849
.org 0x23a64
	ldr r1, [r1, #32]	@ 00023a64 096a
.org 0x23a66
	ldr r1, [r1, #20]	@ 00023a66 4969
.org 0x23a68
	bl 0x275f0	@ 00023a68 03f0c2fd
.org 0x23a6c
	movs r0, #4	@ 00023a6c 0420
.org 0x23a6e
	bl 0x1f63c	@ 00023a6e fbf7e5fd
.org 0x23a72
	ldr r3, [pc, #20]	@ 00023a72 054b
.org 0x23a74
	ldrb r2, [r3, #4]	@ 00023a74 1a79
.org 0x23a76
	movs r1, #8	@ 00023a76 0821
.org 0x23a78
	orrs r1, r2	@ 00023a78 1143
.org 0x23a7a
	strb r1, [r3, #4]	@ 00023a7a 1971
.org 0x23a7c
	movs r1, #5	@ 00023a7c 0521
.org 0x23a7e
	b.n 0x23bba	@ 00023a7e 9ce0
.org 0x23a80
	.byte 0x20,0xe9,0x02,0x02	@ 00023a80 data
.org 0x23a84
	.byte 0xf8,0x2c,0x84,0x08	@ 00023a84 data
.org 0x23a88
	.byte 0xb0,0xe8,0x02,0x02	@ 00023a88 data
.org 0x23a8c
	movs r1, #190	@ 00023a8c be21
.org 0x23a8e
	lsls r1, r1, #1	@ 00023a8e 4900
.org 0x23a90
	adds r7, r6, r1	@ 00023a90 7718
.org 0x23a92
	ldrb r1, [r7, #0]	@ 00023a92 3978
.org 0x23a94
	cmp r1, #5	@ 00023a94 0529
.org 0x23a96
	bne.n 0x23aa4	@ 00023a96 05d1
.org 0x23a98
	movs r0, #3	@ 00023a98 0320
.org 0x23a9a
	bl 0x1f63c	@ 00023a9a fbf7cffd
.org 0x23a9e
	movs r1, #6	@ 00023a9e 0621
.org 0x23aa0
	strb r1, [r7, #0]	@ 00023aa0 3970
.org 0x23aa2
	b.n 0x23bbc	@ 00023aa2 8be0
.org 0x23aa4
	cmp r1, #6	@ 00023aa4 0629
.org 0x23aa6
	bne.n 0x23b0c	@ 00023aa6 31d1
.org 0x23aa8
	ldr r5, [pc, #76]	@ 00023aa8 134d
.org 0x23aaa
	ldrh r2, [r5, #8]	@ 00023aaa 2a89
.org 0x23aac
	movs r1, #16	@ 00023aac 1021
.org 0x23aae
	ands r1, r2	@ 00023aae 1140
.org 0x23ab0
	cmp r1, #0	@ 00023ab0 0029
.org 0x23ab2
	beq.n 0x23b0c	@ 00023ab2 2bd0
.org 0x23ab4
	ldr r1, [pc, #68]	@ 00023ab4 1149
.org 0x23ab6
	ldrb r2, [r1, #0]	@ 00023ab6 0a78
.org 0x23ab8
	movs r0, #128	@ 00023ab8 8020
.org 0x23aba
	orrs r0, r2	@ 00023aba 1043
.org 0x23abc
	strb r0, [r1, #0]	@ 00023abc 0870
.org 0x23abe
	ldrb r2, [r1, #1]	@ 00023abe 4a78
.org 0x23ac0
	movs r0, #2	@ 00023ac0 0220
.org 0x23ac2
	orrs r0, r2	@ 00023ac2 1043
.org 0x23ac4
	strb r0, [r1, #1]	@ 00023ac4 4870
.org 0x23ac6
	adds r0, r5, #0	@ 00023ac6 281c
.org 0x23ac8
	adds r0, #16	@ 00023ac8 1030
.org 0x23aca
	ldr r1, [pc, #52]	@ 00023aca 0d49
.org 0x23acc
	ldr r1, [r1, #32]	@ 00023acc 096a
.org 0x23ace
	ldr r1, [r1, #28]	@ 00023ace c969
.org 0x23ad0
	bl 0x275f0	@ 00023ad0 03f08efd
.org 0x23ad4
	ldrh r1, [r5, #8]	@ 00023ad4 2989
.org 0x23ad6
	ldr r3, [pc, #44]	@ 00023ad6 0b4b
.org 0x23ad8
	ands r3, r1	@ 00023ad8 0b40
.org 0x23ada
	ldrb r2, [r5, #18]	@ 00023ada aa7c
.org 0x23adc
	movs r1, #253	@ 00023adc fd21
.org 0x23ade
	ands r1, r2	@ 00023ade 1140
.org 0x23ae0
	strb r1, [r5, #18]	@ 00023ae0 a974
.org 0x23ae2
	ldr r4, [pc, #36]	@ 00023ae2 094c
.org 0x23ae4
	ldrb r2, [r4, #4]	@ 00023ae4 2279
.org 0x23ae6
	movs r1, #247	@ 00023ae6 f721
.org 0x23ae8
	ands r1, r2	@ 00023ae8 1140
.org 0x23aea
	strb r1, [r4, #4]	@ 00023aea 2171
.org 0x23aec
	movs r1, #1	@ 00023aec 0121
.org 0x23aee
	orrs r3, r1	@ 00023aee 0b43
.org 0x23af0
	strh r3, [r5, #8]	@ 00023af0 2b81
.org 0x23af2
	movs r1, #7	@ 00023af2 0721
.org 0x23af4
	strb r1, [r7, #0]	@ 00023af4 3970
.org 0x23af6
	b.n 0x23bbc	@ 00023af6 61e0
.org 0x23af8
	.byte 0x10,0xe9,0x02,0x02	@ 00023af8 data
.org 0x23afc
	.byte 0xe0,0x32,0x00,0x03	@ 00023afc data
.org 0x23b00
	.byte 0xf8,0x2c,0x84,0x08	@ 00023b00 data
.org 0x23b04
	.byte 0xef,0xff,0x00,0x00	@ 00023b04 data
.org 0x23b08
	.byte 0xb0,0xe8,0x02,0x02	@ 00023b08 data
.org 0x23b0c
	movs r2, #190	@ 00023b0c be22
.org 0x23b0e
	lsls r2, r2, #1	@ 00023b0e 5200
.org 0x23b10
	adds r5, r6, r2	@ 00023b10 b518
.org 0x23b12
	ldrb r1, [r5, #0]	@ 00023b12 2978
.org 0x23b14
	cmp r1, #7	@ 00023b14 0729
.org 0x23b16
	bne.n 0x23b30	@ 00023b16 0bd1
.org 0x23b18
	ldr r2, [pc, #16]	@ 00023b18 044a
.org 0x23b1a
	ldrb r3, [r2, #0]	@ 00023b1a 1378
.org 0x23b1c
	movs r1, #127	@ 00023b1c 7f21
.org 0x23b1e
	ands r1, r3	@ 00023b1e 1940
.org 0x23b20
	movs r3, #0	@ 00023b20 0023
.org 0x23b22
	strb r1, [r2, #0]	@ 00023b22 1170
.org 0x23b24
	strb r3, [r2, #1]	@ 00023b24 5370
.org 0x23b26
	movs r1, #8	@ 00023b26 0821
.org 0x23b28
	b.n 0x23bba	@ 00023b28 47e0
.org 0x23b2a
	.byte 0x00	@ 00023b2a data
.org 0x23b2b
	.byte 0x00	@ 00023b2b data
.org 0x23b2c
	.byte 0xe0,0x32,0x00,0x03	@ 00023b2c data
.org 0x23b30
	cmp r1, #8	@ 00023b30 0829
.org 0x23b32
	bne.n 0x23b58	@ 00023b32 11d1
.org 0x23b34
	ldr r2, [r4, #84]	@ 00023b34 626d
.org 0x23b36
	ldr r1, [pc, #24]	@ 00023b36 0649
.org 0x23b38
	cmp r2, r1	@ 00023b38 8a42
.org 0x23b3a
	ble.n 0x23b58	@ 00023b3a 0ddd
.org 0x23b3c
	movs r0, #5	@ 00023b3c 0520
.org 0x23b3e
	bl 0x1f63c	@ 00023b3e fbf77dfd
