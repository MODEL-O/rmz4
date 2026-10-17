@ FUN_08114938  entry 0x08114938  size 268
.thumb
.org 0x114938
FUN_08114938:
	push {r4, r5, r6, r7, lr}	@ 00114938 f0b5
.org 0x11493a
	mov r7, r8	@ 0011493a 4746
.org 0x11493c
	push {r7}	@ 0011493c 80b4
.org 0x11493e
	adds r6, r0, #0	@ 0011493e 061c
.org 0x114940
	ldr r0, [pc, #160]	@ 00114940 2848
.org 0x114942
	adds r1, r6, r0	@ 00114942 3118
.org 0x114944
	movs r2, #0	@ 00114944 0022
.org 0x114946
	mov r8, r2	@ 00114946 9046
.org 0x114948
	movs r0, #0	@ 00114948 0020
.org 0x11494a
	strh r0, [r1, #2]	@ 0011494a 4880
.org 0x11494c
	ldr r7, [pc, #152]	@ 0011494c 264f
.org 0x11494e
	ldr r3, [pc, #156]	@ 0011494e 274b
.org 0x114950
	adds r2, r7, r3	@ 00114950 fa18
.org 0x114952
	ldr r0, [pc, #156]	@ 00114952 2748
.org 0x114954
	adds r1, r7, r0	@ 00114954 3918
.org 0x114956
	ldr r0, [pc, #156]	@ 00114956 2748
.org 0x114958
	str r0, [r1, #0]	@ 00114958 0860
.org 0x11495a
	str r0, [r2, #0]	@ 0011495a 1060
.org 0x11495c
	ldr r1, [pc, #152]	@ 0011495c 2649
.org 0x11495e
	adds r5, r6, r1	@ 0011495e 7518
.org 0x114960
	adds r0, r5, #0	@ 00114960 281c
.org 0x114962
	bl 0x1e8d8	@ 00114962 09f7b9ff
.org 0x114966
	movs r2, #198	@ 00114966 c622
.org 0x114968
	lsls r2, r2, #7	@ 00114968 d201
.org 0x11496a
	adds r0, r6, r2	@ 0011496a b018
.org 0x11496c
	bl 0x1e944	@ 0011496c 09f7eaff
.org 0x114970
	ldr r3, [pc, #136]	@ 00114970 224b
.org 0x114972
	adds r0, r6, r3	@ 00114972 f018
.org 0x114974
	bl 0x108e04	@ 00114974 f4f746fa
.org 0x114978
	ldr r1, [pc, #132]	@ 00114978 2149
.org 0x11497a
	adds r0, r6, r1	@ 0011497a 7018
.org 0x11497c
	bl 0x108f48	@ 0011497c f4f7e4fa
.org 0x114980
	ldr r2, [pc, #128]	@ 00114980 204a
.org 0x114982
	adds r4, r6, r2	@ 00114982 b418
.org 0x114984
	adds r0, r4, #0	@ 00114984 201c
.org 0x114986
	bl 0x38034	@ 00114986 23f755fb
.org 0x11498a
	ldr r2, [pc, #124]	@ 0011498a 1f4a
.org 0x11498c
	ldrb r1, [r2, #4]	@ 0011498c 1179
.org 0x11498e
	movs r0, #64	@ 0011498e 4020
.org 0x114990
	orrs r1, r0	@ 00114990 0143
.org 0x114992
	strb r1, [r2, #4]	@ 00114992 1171
.org 0x114994
	ldrb r1, [r5, #0]	@ 00114994 2978
.org 0x114996
	orrs r0, r1	@ 00114996 0843
.org 0x114998
	strb r0, [r5, #0]	@ 00114998 2870
.org 0x11499a
	movs r2, #1	@ 0011499a 0122
.org 0x11499c
	movs r0, #1	@ 0011499c 0120
.org 0x11499e
	strh r0, [r4, #32]	@ 0011499e 2084
.org 0x1149a0
	movs r0, #128	@ 001149a0 8020
.org 0x1149a2
	lsls r0, r0, #2	@ 001149a2 8000
.org 0x1149a4
	strh r0, [r4, #34]	@ 001149a4 6084
.org 0x1149a6
	movs r1, #2	@ 001149a6 0221
.org 0x1149a8
	movs r0, #2	@ 001149a8 0220
.org 0x1149aa
	strh r0, [r4, #36]	@ 001149aa a084
.org 0x1149ac
	adds r0, #254	@ 001149ac fe30
.org 0x1149ae
	strh r0, [r4, #38]	@ 001149ae e084
.org 0x1149b0
	ldr r3, [pc, #88]	@ 001149b0 164b
.org 0x1149b2
	adds r0, r6, r3	@ 001149b2 f018
.org 0x1149b4
	mov r3, r8	@ 001149b4 4346
.org 0x1149b6
	strb r3, [r0, #0]	@ 001149b6 0370
.org 0x1149b8
	ldr r3, [pc, #84]	@ 001149b8 154b
.org 0x1149ba
	adds r0, r6, r3	@ 001149ba f018
.org 0x1149bc
	strb r2, [r0, #0]	@ 001149bc 0270
.org 0x1149be
	adds r3, #1	@ 001149be 0133
.org 0x1149c0
	adds r0, r6, r3	@ 001149c0 f018
.org 0x1149c2
	mov r3, r8	@ 001149c2 4346
.org 0x1149c4
	strb r3, [r0, #0]	@ 001149c4 0370
.org 0x1149c6
	ldr r3, [pc, #76]	@ 001149c6 134b
.org 0x1149c8
	adds r0, r6, r3	@ 001149c8 f018
.org 0x1149ca
	ldrh r3, [r0, #0]	@ 001149ca 0388
.org 0x1149cc
	cmp r3, #3	@ 001149cc 032b
.org 0x1149ce
	bne.n 0x114a20	@ 001149ce 27d1
.org 0x1149d0
	ldr r2, [pc, #48]	@ 001149d0 0c4a
.org 0x1149d2
	adds r0, r7, r2	@ 001149d2 b818
.org 0x1149d4
	strb r1, [r0, #12]	@ 001149d4 0173
.org 0x1149d6
	mov r1, r8	@ 001149d6 4146
.org 0x1149d8
	strb r1, [r0, #13]	@ 001149d8 4173
.org 0x1149da
	ldr r0, [pc, #60]	@ 001149da 0f48
.org 0x1149dc
	ldr r2, [pc, #60]	@ 001149dc 0f4a
.org 0x1149de
	adds r0, r0, r2	@ 001149de 8018
.org 0x1149e0
	strb r3, [r0, #0]	@ 001149e0 0370
.org 0x1149e2
	b.n 0x114a7c	@ 001149e2 4be0
.org 0x1149e4
	.byte 0x5c,0x62,0x00,0x00	@ 001149e4 data
.org 0x1149e8
	.byte 0x10,0xf6,0x02,0x02	@ 001149e8 data
.org 0x1149ec
	.byte 0xa8,0x63,0x00,0x00	@ 001149ec data
.org 0x1149f0
	.byte 0xac,0x63,0x00,0x00	@ 001149f0 data
.org 0x1149f4
	.byte 0x00,0x66,0x03,0x02	@ 001149f4 data
.org 0x1149f8
	.byte 0x70,0x62,0x00,0x00	@ 001149f8 data
.org 0x1149fc
	.byte 0xb8,0x62,0x00,0x00	@ 001149fc data
.org 0x114a00
	.byte 0xf0,0x62,0x00,0x00	@ 00114a00 data
.org 0x114a04
	.byte 0x48,0x63,0x00,0x00	@ 00114a04 data
.org 0x114a08
	.byte 0xb0,0xe8,0x02,0x02	@ 00114a08 data
.org 0x114a0c
	.byte 0x72,0x63,0x00,0x00	@ 00114a0c data
.org 0x114a10
	.byte 0x73,0x63,0x00,0x00	@ 00114a10 data
.org 0x114a14
	.byte 0x60,0x62,0x00,0x00	@ 00114a14 data
.org 0x114a18
	.byte 0xb0,0x0a,0x00,0x02	@ 00114a18 data
.org 0x114a1c
	.byte 0x10,0xc0,0x02,0x00	@ 00114a1c data
.org 0x114a20
	cmp r3, #4	@ 00114a20 042b
.org 0x114a22
	bne.n 0x114a44	@ 00114a22 0fd1
.org 0x114a24
	ldr r3, [pc, #16]	@ 00114a24 044b
.org 0x114a26
	adds r0, r7, r3	@ 00114a26 f818
.org 0x114a28
	mov r1, r8	@ 00114a28 4146
.org 0x114a2a
	strb r1, [r0, #12]	@ 00114a2a 0173
.org 0x114a2c
	strb r2, [r0, #13]	@ 00114a2c 4273
.org 0x114a2e
	ldr r0, [pc, #12]	@ 00114a2e 0348
.org 0x114a30
	ldr r2, [pc, #12]	@ 00114a30 034a
.org 0x114a32
	adds r0, r0, r2	@ 00114a32 8018
.org 0x114a34
	movs r1, #18	@ 00114a34 1221
.org 0x114a36
	b.n 0x114a7a	@ 00114a36 20e0
.org 0x114a38
	.byte 0x48,0x63,0x00,0x00	@ 00114a38 data
.org 0x114a3c
	.byte 0xb0,0x0a,0x00,0x02	@ 00114a3c data
.org 0x114a40
	.byte 0x10,0xc0,0x02,0x00	@ 00114a40 data
