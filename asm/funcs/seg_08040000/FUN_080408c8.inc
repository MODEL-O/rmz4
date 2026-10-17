@ FUN_080408c8  entry 0x080408c8  size 432
.thumb
.org 0x408c8
FUN_080408c8:
	push {r4, r5, r6, lr}	@ 000408c8 70b5
.org 0x408ca
	adds r4, r0, #0	@ 000408ca 041c
.org 0x408cc
	ldr r5, [r4, #40]	@ 000408cc a56a
.org 0x408ce
	ldrb r0, [r5, #10]	@ 000408ce a87a
.org 0x408d0
	lsrs r2, r0, #4	@ 000408d0 0209
.org 0x408d2
	movs r0, #1	@ 000408d2 0120
.org 0x408d4
	ands r2, r0	@ 000408d4 0240
.org 0x408d6
	cmp r2, #0	@ 000408d6 002a
.org 0x408d8
	beq.n 0x408e2	@ 000408d8 03d0
.org 0x408da
	ldrb r1, [r4, #10]	@ 000408da a17a
.org 0x408dc
	movs r0, #16	@ 000408dc 1020
.org 0x408de
	orrs r0, r1	@ 000408de 0843
.org 0x408e0
	b.n 0x408e8	@ 000408e0 02e0
.org 0x408e2
	ldrb r1, [r4, #10]	@ 000408e2 a17a
.org 0x408e4
	movs r0, #239	@ 000408e4 ef20
.org 0x408e6
	ands r0, r1	@ 000408e6 0840
.org 0x408e8
	strb r0, [r4, #10]	@ 000408e8 a072
.org 0x408ea
	adds r1, r2, #0	@ 000408ea 111c
.org 0x408ec
	adds r0, r4, #0	@ 000408ec 201c
.org 0x408ee
	adds r0, #76	@ 000408ee 4c30
.org 0x408f0
	strb r1, [r0, #0]	@ 000408f0 0170
.org 0x408f2
	adds r3, r4, #0	@ 000408f2 231c
.org 0x408f4
	adds r3, #74	@ 000408f4 4a33
.org 0x408f6
	lsls r1, r1, #4	@ 000408f6 0901
.org 0x408f8
	ldrb r2, [r3, #0]	@ 000408f8 1a78
.org 0x408fa
	movs r0, #17	@ 000408fa 1120
.org 0x408fc
	negs r0, r0	@ 000408fc 4042
.org 0x408fe
	ands r0, r2	@ 000408fe 1040
.org 0x40900
	orrs r0, r1	@ 00040900 0843
.org 0x40902
	strb r0, [r3, #0]	@ 00040902 1870
.org 0x40904
	ldr r0, [r5, #84]	@ 00040904 686d
.org 0x40906
	str r0, [r4, #100]	@ 00040906 6066
.org 0x40908
	ldr r0, [r5, #88]	@ 00040908 a86d
.org 0x4090a
	str r0, [r4, #104]	@ 0004090a a066
.org 0x4090c
	ldrb r2, [r4, #13]	@ 0004090c 627b
.org 0x4090e
	cmp r2, #0	@ 0004090e 002a
.org 0x40910
	beq.n 0x40914	@ 00040910 00d0
.org 0x40912
	b.n 0x40a74	@ 00040912 afe0
.org 0x40914
	ldr r1, [pc, #64]	@ 00040914 1049
.org 0x40916
	adds r0, r5, r1	@ 00040916 6818
.org 0x40918
	ldrb r1, [r0, #0]	@ 00040918 0178
.org 0x4091a
	adds r6, r0, #0	@ 0004091a 061c
.org 0x4091c
	cmp r1, #255	@ 0004091c ff29
.org 0x4091e
	bne.n 0x40960	@ 0004091e 1fd1
.org 0x40920
	ldrb r1, [r4, #10]	@ 00040920 a17a
.org 0x40922
	movs r0, #254	@ 00040922 fe20
.org 0x40924
	ands r0, r1	@ 00040924 0840
.org 0x40926
	movs r1, #253	@ 00040926 fd21
.org 0x40928
	ands r0, r1	@ 00040928 0840
.org 0x4092a
	strb r0, [r4, #10]	@ 0004092a a072
.org 0x4092c
	adds r0, r4, #0	@ 0004092c 201c
.org 0x4092e
	adds r0, #140	@ 0004092e 8c30
.org 0x40930
	str r2, [r0, #0]	@ 00040930 0260
.org 0x40932
	adds r0, #4	@ 00040932 0430
.org 0x40934
	str r2, [r0, #0]	@ 00040934 0260
.org 0x40936
	adds r0, #4	@ 00040936 0430
.org 0x40938
	strb r2, [r0, #0]	@ 00040938 0270
.org 0x4093a
	ldrb r1, [r4, #10]	@ 0004093a a17a
.org 0x4093c
	movs r0, #251	@ 0004093c fb20
.org 0x4093e
	ands r0, r1	@ 0004093e 0840
.org 0x40940
	strb r0, [r4, #10]	@ 00040940 a072
.org 0x40942
	ldr r1, [pc, #24]	@ 00040942 0649
.org 0x40944
	ldrb r0, [r4, #9]	@ 00040944 607a
.org 0x40946
	lsls r0, r0, #2	@ 00040946 8000
.org 0x40948
	adds r0, r0, r1	@ 00040948 4018
.org 0x4094a
	movs r1, #3	@ 0004094a 0321
.org 0x4094c
	str r1, [r4, #12]	@ 0004094c e160
.org 0x4094e
	ldr r0, [r0, #0]	@ 0004094e 0068
.org 0x40950
	ldr r0, [r0, #12]	@ 00040950 c068
.org 0x40952
	str r0, [r4, #20]	@ 00040952 6061
.org 0x40954
	b.n 0x40a9c	@ 00040954 a2e0
.org 0x40956
	.byte 0x00	@ 00040956 data
.org 0x40957
	.byte 0x00	@ 00040957 data
.org 0x40958
	.byte 0x4f,0x01,0x00,0x00	@ 00040958 data
.org 0x4095c
	.byte 0xf8,0x39,0x85,0x08	@ 0004095c data
.org 0x40960
	adds r0, r5, #0	@ 00040960 281c
.org 0x40962
	adds r0, #250	@ 00040962 fa30
.org 0x40964
	ldrb r0, [r0, #0]	@ 00040964 0078
.org 0x40966
	cmp r0, #2	@ 00040966 0228
.org 0x40968
	beq.n 0x409f4	@ 00040968 44d0
.org 0x4096a
	adds r0, r4, #0	@ 0004096a 201c
.org 0x4096c
	bl 0x1cc9c	@ 0004096c dcf796f9
.org 0x40970
	adds r0, r4, #0	@ 00040970 201c
.org 0x40972
	bl 0x1ceec	@ 00040972 dcf7bbfa
.org 0x40976
	ldr r0, [pc, #40]	@ 00040976 0a48
.org 0x40978
	ldrh r0, [r0, #0]	@ 00040978 0088
.org 0x4097a
	strh r0, [r4, #32]	@ 0004097a 2084
.org 0x4097c
	ldr r0, [pc, #36]	@ 0004097c 0948
.org 0x4097e
	ldrb r0, [r0, #0]	@ 0004097e 0078
.org 0x40980
	adds r1, r4, #0	@ 00040980 211c
.org 0x40982
	adds r1, #34	@ 00040982 2231
.org 0x40984
	strb r0, [r1, #0]	@ 00040984 0870
.org 0x40986
	ldrb r0, [r4, #10]	@ 00040986 a07a
.org 0x40988
	movs r1, #1	@ 00040988 0121
.org 0x4098a
	orrs r0, r1	@ 0004098a 0843
.org 0x4098c
	strb r0, [r4, #10]	@ 0004098c a072
.org 0x4098e
	ldrb r0, [r4, #17]	@ 0004098e 607c
.org 0x40990
	cmp r0, #0	@ 00040990 0028
.org 0x40992
	beq.n 0x409ac	@ 00040992 0bd0
.org 0x40994
	ldr r1, [pc, #16]	@ 00040994 0449
.org 0x40996
	adds r0, r4, #0	@ 00040996 201c
.org 0x40998
	bl 0x1cf00	@ 00040998 dcf7b2fa
.org 0x4099c
	b.n 0x409b6	@ 0004099c 0be0
.org 0x4099e
	.byte 0x00	@ 0004099e data
.org 0x4099f
	.byte 0x00	@ 0004099f data
.org 0x409a0
	.byte 0xfc,0x36,0x85,0x08	@ 000409a0 data
.org 0x409a4
	.byte 0x04,0x37,0x85,0x08	@ 000409a4 data
.org 0x409a8
	.byte 0x01,0x7e,0x00,0x00	@ 000409a8 data
.org 0x409ac
	movs r1, #252	@ 000409ac fc21
.org 0x409ae
	lsls r1, r1, #7	@ 000409ae c901
.org 0x409b0
	adds r0, r4, #0	@ 000409b0 201c
.org 0x409b2
	bl 0x1cf00	@ 000409b2 dcf7a5fa
.org 0x409b6
	adds r0, r4, #0	@ 000409b6 201c
.org 0x409b8
	bl 0x1cff0	@ 000409b8 dcf71afb
.org 0x409bc
	adds r0, r4, #0	@ 000409bc 201c
.org 0x409be
	adds r0, #140	@ 000409be 8c30
.org 0x409c0
	movs r2, #0	@ 000409c0 0022
.org 0x409c2
	str r2, [r0, #0]	@ 000409c2 0260
.org 0x409c4
	adds r0, #4	@ 000409c4 0430
.org 0x409c6
	str r2, [r0, #0]	@ 000409c6 0260
.org 0x409c8
	adds r0, #4	@ 000409c8 0430
.org 0x409ca
	strb r2, [r0, #0]	@ 000409ca 0270
.org 0x409cc
	ldrb r1, [r4, #10]	@ 000409cc a17a
.org 0x409ce
	movs r0, #251	@ 000409ce fb20
.org 0x409d0
	ands r0, r1	@ 000409d0 0840
.org 0x409d2
	strb r0, [r4, #10]	@ 000409d2 a072
.org 0x409d4
	adds r0, r4, #0	@ 000409d4 201c
.org 0x409d6
	adds r0, #84	@ 000409d6 5430
.org 0x409d8
	str r0, [r4, #64]	@ 000409d8 2064
.org 0x409da
	subs r0, #47	@ 000409da 2f38
.org 0x409dc
	strb r2, [r0, #0]	@ 000409dc 0270
.org 0x409de
	adds r0, r4, #0	@ 000409de 201c
.org 0x409e0
	movs r1, #14	@ 000409e0 0e21
.org 0x409e2
	bl 0x1d3d0	@ 000409e2 dcf7f5fc
.org 0x409e6
	movs r0, #38	@ 000409e6 2620
.org 0x409e8
	bl 0x2b10	@ 000409e8 c2f792f8
.org 0x409ec
	ldrb r0, [r4, #13]	@ 000409ec 607b
.org 0x409ee
	adds r0, #1	@ 000409ee 0130
.org 0x409f0
	strb r0, [r4, #13]	@ 000409f0 6073
.org 0x409f2
	b.n 0x40a9c	@ 000409f2 53e0
.org 0x409f4
	ldrb r0, [r4, #14]	@ 000409f4 a07b
.org 0x409f6
	cmp r0, #0	@ 000409f6 0028
.org 0x409f8
	beq.n 0x40a26	@ 000409f8 15d0
.org 0x409fa
	ldr r1, [pc, #68]	@ 000409fa 1149
.org 0x409fc
	ldrb r0, [r6, #0]	@ 000409fc 3078
.org 0x409fe
	lsls r0, r0, #1	@ 000409fe 4000
.org 0x40a00
	adds r0, r0, r1	@ 00040a00 4018
.org 0x40a02
	ldrh r1, [r0, #0]	@ 00040a02 0188
.org 0x40a04
	adds r0, r4, #0	@ 00040a04 201c
.org 0x40a06
	adds r0, #113	@ 00040a06 7130
.org 0x40a08
	movs r2, #0	@ 00040a08 0022
.org 0x40a0a
	ldrsb r2, [r0, r2]	@ 00040a0a 8256
.org 0x40a0c
	lsls r2, r2, #16	@ 00040a0c 1204
.org 0x40a0e
	lsrs r2, r2, #16	@ 00040a0e 120c
.org 0x40a10
	adds r0, #1	@ 00040a10 0130
.org 0x40a12
	movs r3, #0	@ 00040a12 0023
.org 0x40a14
	ldrsb r3, [r0, r3]	@ 00040a14 c356
.org 0x40a16
	lsls r3, r3, #16	@ 00040a16 1b04
.org 0x40a18
	lsrs r3, r3, #16	@ 00040a18 1b0c
.org 0x40a1a
	adds r0, r4, #0	@ 00040a1a 201c
.org 0x40a1c
	bl 0x1cfc8	@ 00040a1c dcf7d4fa
.org 0x40a20
	adds r0, r4, #0	@ 00040a20 201c
.org 0x40a22
	bl 0x1cff0	@ 00040a22 dcf7e5fa
.org 0x40a26
	ldrb r1, [r4, #10]	@ 00040a26 a17a
.org 0x40a28
	movs r0, #16	@ 00040a28 1020
.org 0x40a2a
	ands r0, r1	@ 00040a2a 0840
.org 0x40a2c
	cmp r0, #0	@ 00040a2c 0028
.org 0x40a2e
	beq.n 0x40a48	@ 00040a2e 0bd0
.org 0x40a30
	ldr r1, [pc, #16]	@ 00040a30 0449
.org 0x40a32
	ldrb r0, [r6, #0]	@ 00040a32 3078
.org 0x40a34
	lsls r0, r0, #2	@ 00040a34 8000
.org 0x40a36
	adds r0, r0, r1	@ 00040a36 4018
.org 0x40a38
	ldr r1, [r5, #84]	@ 00040a38 696d
.org 0x40a3a
	ldr r0, [r0, #0]	@ 00040a3a 0068
.org 0x40a3c
	adds r1, r1, r0	@ 00040a3c 0918
.org 0x40a3e
	b.n 0x40a56	@ 00040a3e 0ae0
.org 0x40a40
	.byte 0x08,0x56,0x85,0x08	@ 00040a40 data
.org 0x40a44
	.byte 0x1c,0x56,0x85,0x08	@ 00040a44 data
.org 0x40a48
	ldr r1, [pc, #32]	@ 00040a48 0849
.org 0x40a4a
	ldrb r0, [r6, #0]	@ 00040a4a 3078
.org 0x40a4c
	lsls r0, r0, #2	@ 00040a4c 8000
.org 0x40a4e
	adds r0, r0, r1	@ 00040a4e 4018
.org 0x40a50
	ldr r1, [r5, #84]	@ 00040a50 696d
.org 0x40a52
	ldr r0, [r0, #0]	@ 00040a52 0068
.org 0x40a54
	subs r1, r1, r0	@ 00040a54 091a
.org 0x40a56
	str r1, [r4, #84]	@ 00040a56 6165
.org 0x40a58
	ldr r1, [pc, #20]	@ 00040a58 0549
.org 0x40a5a
	ldrb r0, [r6, #0]	@ 00040a5a 3078
.org 0x40a5c
	lsls r0, r0, #2	@ 00040a5c 8000
.org 0x40a5e
	adds r0, r0, r1	@ 00040a5e 4018
.org 0x40a60
	ldr r1, [r5, #88]	@ 00040a60 a96d
.org 0x40a62
	ldr r0, [r0, #0]	@ 00040a62 0068
.org 0x40a64
	adds r1, r1, r0	@ 00040a64 0918
.org 0x40a66
	str r1, [r4, #88]	@ 00040a66 a165
.org 0x40a68
	b.n 0x40a9c	@ 00040a68 18e0
.org 0x40a6a
	.byte 0x00	@ 00040a6a data
.org 0x40a6b
	.byte 0x00	@ 00040a6b data
.org 0x40a6c
	.byte 0x1c,0x56,0x85,0x08	@ 00040a6c data
.org 0x40a70
	.byte 0x40,0x56,0x85,0x08	@ 00040a70 data
.org 0x40a74
	adds r0, r4, #0	@ 00040a74 201c
.org 0x40a76
	bl 0x1cff0	@ 00040a76 dcf7bbfa
