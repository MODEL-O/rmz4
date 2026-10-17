@ FUN_08049f40  entry 0x08049f40  size 614
.thumb
.org 0x49f40
FUN_08049f40:
	push {r4, r5, r6, r7, lr}	@ 00049f40 f0b5
.org 0x49f42
	mov r7, r8	@ 00049f42 4746
.org 0x49f44
	push {r7}	@ 00049f44 80b4
.org 0x49f46
	sub sp, #8	@ 00049f46 82b0
.org 0x49f48
	adds r5, r0, #0	@ 00049f48 051c
.org 0x49f4a
	ldr r7, [r5, #40]	@ 00049f4a af6a
.org 0x49f4c
	bl 0x1cff0	@ 00049f4c d3f750f8
.org 0x49f50
	ldrb r6, [r5, #13]	@ 00049f50 6e7b
.org 0x49f52
	cmp r6, #0	@ 00049f52 002e
.org 0x49f54
	beq.n 0x49f58	@ 00049f54 00d0
.org 0x49f56
	b.n 0x4a0a0	@ 00049f56 a3e0
.org 0x49f58
	ldrb r0, [r5, #18]	@ 00049f58 a87c
.org 0x49f5a
	subs r0, #1	@ 00049f5a 0138
.org 0x49f5c
	movs r1, #0	@ 00049f5c 0021
.org 0x49f5e
	mov r8, r1	@ 00049f5e 8846
.org 0x49f60
	strb r0, [r5, #18]	@ 00049f60 a874
.org 0x49f62
	lsls r0, r0, #24	@ 00049f62 0006
.org 0x49f64
	lsrs r0, r0, #24	@ 00049f64 000e
.org 0x49f66
	cmp r0, #255	@ 00049f66 ff28
.org 0x49f68
	beq.n 0x49f6c	@ 00049f68 00d0
.org 0x49f6a
	b.n 0x4a1ca	@ 00049f6a 2ee1
.org 0x49f6c
	adds r4, r5, #0	@ 00049f6c 2c1c
.org 0x49f6e
	adds r4, #84	@ 00049f6e 5434
.org 0x49f70
	adds r0, r7, #0	@ 00049f70 381c
.org 0x49f72
	adds r1, r4, #0	@ 00049f72 211c
.org 0x49f74
	bl 0x41318	@ 00049f74 f7f7d0f9
.org 0x49f78
	lsls r0, r0, #24	@ 00049f78 0006
.org 0x49f7a
	lsrs r2, r0, #24	@ 00049f7a 020e
.org 0x49f7c
	mov ip, r4	@ 00049f7c a446
.org 0x49f7e
	cmp r2, #0	@ 00049f7e 002a
.org 0x49f80
	beq.n 0x49fbc	@ 00049f80 1cd0
.org 0x49f82
	ldrb r1, [r5, #10]	@ 00049f82 a97a
.org 0x49f84
	movs r0, #254	@ 00049f84 fe20
.org 0x49f86
	ands r0, r1	@ 00049f86 0840
.org 0x49f88
	movs r1, #253	@ 00049f88 fd21
.org 0x49f8a
	ands r0, r1	@ 00049f8a 0840
.org 0x49f8c
	strb r0, [r5, #10]	@ 00049f8c a872
.org 0x49f8e
	adds r0, r5, #0	@ 00049f8e 281c
.org 0x49f90
	adds r0, #140	@ 00049f90 8c30
.org 0x49f92
	str r6, [r0, #0]	@ 00049f92 0660
.org 0x49f94
	adds r0, #4	@ 00049f94 0430
.org 0x49f96
	str r6, [r0, #0]	@ 00049f96 0660
.org 0x49f98
	adds r0, #4	@ 00049f98 0430
.org 0x49f9a
	strb r6, [r0, #0]	@ 00049f9a 0670
.org 0x49f9c
	ldrb r1, [r5, #10]	@ 00049f9c a97a
.org 0x49f9e
	movs r0, #251	@ 00049f9e fb20
.org 0x49fa0
	ands r0, r1	@ 00049fa0 0840
.org 0x49fa2
	strb r0, [r5, #10]	@ 00049fa2 a872
.org 0x49fa4
	ldr r1, [pc, #16]	@ 00049fa4 0449
.org 0x49fa6
	ldrb r0, [r5, #9]	@ 00049fa6 687a
.org 0x49fa8
	lsls r0, r0, #2	@ 00049fa8 8000
.org 0x49faa
	adds r0, r0, r1	@ 00049faa 4018
.org 0x49fac
	movs r1, #3	@ 00049fac 0321
.org 0x49fae
	str r1, [r5, #12]	@ 00049fae e960
.org 0x49fb0
	ldr r0, [r0, #0]	@ 00049fb0 0068
.org 0x49fb2
	ldr r0, [r0, #12]	@ 00049fb2 c068
.org 0x49fb4
	str r0, [r5, #20]	@ 00049fb4 6861
.org 0x49fb6
	b.n 0x4a1ca	@ 00049fb6 08e1
.org 0x49fb8
	.byte 0xf8,0x39,0x85,0x08	@ 00049fb8 data
.org 0x49fbc
	ldrb r0, [r5, #16]	@ 00049fbc 287c
.org 0x49fbe
	cmp r0, #0	@ 00049fbe 0028
.org 0x49fc0
	bne.n 0x4a01c	@ 00049fc0 2cd1
.org 0x49fc2
	ldr r1, [r5, #84]	@ 00049fc2 696d
.org 0x49fc4
	ldr r0, [r7, #84]	@ 00049fc4 786d
.org 0x49fc6
	cmp r1, r0	@ 00049fc6 8142
.org 0x49fc8
	ble.n 0x49ff4	@ 00049fc8 14dd
.org 0x49fca
	movs r0, #128	@ 00049fca 8020
.org 0x49fcc
	lsls r0, r0, #3	@ 00049fcc c000
.org 0x49fce
	str r0, [r5, #92]	@ 00049fce e865
.org 0x49fd0
	movs r2, #1	@ 00049fd0 0122
.org 0x49fd2
	ldrb r0, [r5, #10]	@ 00049fd2 a87a
.org 0x49fd4
	movs r1, #16	@ 00049fd4 1021
.org 0x49fd6
	orrs r0, r1	@ 00049fd6 0843
.org 0x49fd8
	strb r0, [r5, #10]	@ 00049fd8 a872
.org 0x49fda
	adds r0, r5, #0	@ 00049fda 281c
.org 0x49fdc
	adds r0, #76	@ 00049fdc 4c30
.org 0x49fde
	strb r2, [r0, #0]	@ 00049fde 0270
.org 0x49fe0
	adds r3, r5, #0	@ 00049fe0 2b1c
.org 0x49fe2
	adds r3, #74	@ 00049fe2 4a33
.org 0x49fe4
	movs r2, #16	@ 00049fe4 1022
.org 0x49fe6
	ldrb r1, [r3, #0]	@ 00049fe6 1978
.org 0x49fe8
	movs r0, #17	@ 00049fe8 1120
.org 0x49fea
	negs r0, r0	@ 00049fea 4042
.org 0x49fec
	ands r0, r1	@ 00049fec 0840
.org 0x49fee
	orrs r0, r2	@ 00049fee 1043
.org 0x49ff0
	strb r0, [r3, #0]	@ 00049ff0 1870
.org 0x49ff2
	b.n 0x4a014	@ 00049ff2 0fe0
.org 0x49ff4
	ldr r0, [pc, #32]	@ 00049ff4 0848
.org 0x49ff6
	str r0, [r5, #92]	@ 00049ff6 e865
.org 0x49ff8
	ldrb r1, [r5, #10]	@ 00049ff8 a97a
.org 0x49ffa
	movs r0, #239	@ 00049ffa ef20
.org 0x49ffc
	ands r0, r1	@ 00049ffc 0840
.org 0x49ffe
	strb r0, [r5, #10]	@ 00049ffe a872
.org 0x4a000
	adds r0, r5, #0	@ 0004a000 281c
.org 0x4a002
	adds r0, #76	@ 0004a002 4c30
.org 0x4a004
	strb r2, [r0, #0]	@ 0004a004 0270
.org 0x4a006
	adds r2, r5, #0	@ 0004a006 2a1c
.org 0x4a008
	adds r2, #74	@ 0004a008 4a32
.org 0x4a00a
	ldrb r1, [r2, #0]	@ 0004a00a 1178
.org 0x4a00c
	movs r0, #17	@ 0004a00c 1120
.org 0x4a00e
	negs r0, r0	@ 0004a00e 4042
.org 0x4a010
	ands r0, r1	@ 0004a010 0840
.org 0x4a012
	strb r0, [r2, #0]	@ 0004a012 1070
.org 0x4a014
	movs r0, #0	@ 0004a014 0020
.org 0x4a016
	b.n 0x4a068	@ 0004a016 27e0
.org 0x4a018
	.byte 0x00,0xfc,0xff,0xff	@ 0004a018 data
.org 0x4a01c
	str r2, [r5, #92]	@ 0004a01c ea65
.org 0x4a01e
	ldr r1, [r5, #84]	@ 0004a01e 696d
.org 0x4a020
	ldr r0, [r7, #84]	@ 0004a020 786d
.org 0x4a022
	cmp r1, r0	@ 0004a022 8142
.org 0x4a024
	ble.n 0x4a04a	@ 0004a024 11dd
.org 0x4a026
	movs r2, #1	@ 0004a026 0122
.org 0x4a028
	ldrb r0, [r5, #10]	@ 0004a028 a87a
.org 0x4a02a
	movs r1, #16	@ 0004a02a 1021
.org 0x4a02c
	orrs r0, r1	@ 0004a02c 0843
.org 0x4a02e
	strb r0, [r5, #10]	@ 0004a02e a872
.org 0x4a030
	adds r0, r5, #0	@ 0004a030 281c
.org 0x4a032
	adds r0, #76	@ 0004a032 4c30
.org 0x4a034
	strb r2, [r0, #0]	@ 0004a034 0270
.org 0x4a036
	adds r3, r5, #0	@ 0004a036 2b1c
.org 0x4a038
	adds r3, #74	@ 0004a038 4a33
.org 0x4a03a
	movs r2, #16	@ 0004a03a 1022
.org 0x4a03c
	ldrb r1, [r3, #0]	@ 0004a03c 1978
.org 0x4a03e
	movs r0, #17	@ 0004a03e 1120
.org 0x4a040
	negs r0, r0	@ 0004a040 4042
.org 0x4a042
	ands r0, r1	@ 0004a042 0840
.org 0x4a044
	orrs r0, r2	@ 0004a044 1043
.org 0x4a046
	strb r0, [r3, #0]	@ 0004a046 1870
.org 0x4a048
	b.n 0x4a066	@ 0004a048 0de0
.org 0x4a04a
	ldrb r1, [r5, #10]	@ 0004a04a a97a
.org 0x4a04c
	movs r0, #239	@ 0004a04c ef20
.org 0x4a04e
	ands r0, r1	@ 0004a04e 0840
.org 0x4a050
	strb r0, [r5, #10]	@ 0004a050 a872
.org 0x4a052
	adds r0, r5, #0	@ 0004a052 281c
.org 0x4a054
	adds r0, #76	@ 0004a054 4c30
.org 0x4a056
	strb r2, [r0, #0]	@ 0004a056 0270
.org 0x4a058
	adds r2, r5, #0	@ 0004a058 2a1c
.org 0x4a05a
	adds r2, #74	@ 0004a05a 4a32
.org 0x4a05c
	ldrb r1, [r2, #0]	@ 0004a05c 1178
.org 0x4a05e
	movs r0, #17	@ 0004a05e 1120
.org 0x4a060
	negs r0, r0	@ 0004a060 4042
.org 0x4a062
	ands r0, r1	@ 0004a062 0840
.org 0x4a064
	strb r0, [r2, #0]	@ 0004a064 1070
.org 0x4a066
	ldr r0, [pc, #168]	@ 0004a066 2a48
.org 0x4a068
	str r0, [r5, #96]	@ 0004a068 2866
.org 0x4a06a
	ldrb r1, [r5, #10]	@ 0004a06a a97a
.org 0x4a06c
	movs r0, #4	@ 0004a06c 0420
.org 0x4a06e
	orrs r0, r1	@ 0004a06e 0843
.org 0x4a070
	strb r0, [r5, #10]	@ 0004a070 a872
.org 0x4a072
	adds r4, r5, #0	@ 0004a072 2c1c
.org 0x4a074
	adds r4, #116	@ 0004a074 7434
.org 0x4a076
	ldr r1, [pc, #156]	@ 0004a076 2749
.org 0x4a078
	adds r0, r4, #0	@ 0004a078 201c
.org 0x4a07a
	mov r2, ip	@ 0004a07a 6246
.org 0x4a07c
	movs r3, #8	@ 0004a07c 0823
.org 0x4a07e
	bl 0x5760	@ 0004a07e bbf76ffb
.org 0x4a082
	str r5, [r4, #44]	@ 0004a082 e562
.org 0x4a084
	ldr r0, [pc, #144]	@ 0004a084 2448
.org 0x4a086
	str r0, [r4, #36]	@ 0004a086 6062
.org 0x4a088
	ldrb r1, [r5, #10]	@ 0004a088 a97a
.org 0x4a08a
	movs r0, #1	@ 0004a08a 0120
.org 0x4a08c
	orrs r0, r1	@ 0004a08c 0843
.org 0x4a08e
	strb r0, [r5, #10]	@ 0004a08e a872
.org 0x4a090
	adds r0, r7, #0	@ 0004a090 381c
.org 0x4a092
	bl 0x3aa4c	@ 0004a092 f0f7dbfc
.org 0x4a096
	adds r1, r5, #0	@ 0004a096 291c
.org 0x4a098
	adds r1, #189	@ 0004a098 bd31
.org 0x4a09a
	movs r0, #1	@ 0004a09a 0120
.org 0x4a09c
	strb r0, [r1, #0]	@ 0004a09c 0870
.org 0x4a09e
	strb r0, [r5, #13]	@ 0004a09e 6873
.org 0x4a0a0
	ldrb r2, [r5, #14]	@ 0004a0a0 aa7b
.org 0x4a0a2
	cmp r2, #0	@ 0004a0a2 002a
.org 0x4a0a4
	bne.n 0x4a124	@ 0004a0a4 3ed1
.org 0x4a0a6
	ldr r0, [r5, #84]	@ 0004a0a6 686d
.org 0x4a0a8
	ldr r1, [r5, #92]	@ 0004a0a8 e96d
.org 0x4a0aa
	adds r0, r0, r1	@ 0004a0aa 4018
.org 0x4a0ac
	str r0, [r5, #84]	@ 0004a0ac 6865
.org 0x4a0ae
	ldrb r0, [r5, #16]	@ 0004a0ae 287c
.org 0x4a0b0
	cmp r0, #0	@ 0004a0b0 0028
.org 0x4a0b2
	beq.n 0x4a0ca	@ 0004a0b2 0ad0
.org 0x4a0b4
	ldr r0, [r5, #88]	@ 0004a0b4 a86d
.org 0x4a0b6
	ldr r1, [r5, #96]	@ 0004a0b6 296e
.org 0x4a0b8
	adds r0, r0, r1	@ 0004a0b8 4018
.org 0x4a0ba
	str r0, [r5, #88]	@ 0004a0ba a865
.org 0x4a0bc
	adds r1, #64	@ 0004a0bc 4031
.org 0x4a0be
	str r1, [r5, #96]	@ 0004a0be 2966
.org 0x4a0c0
	movs r0, #224	@ 0004a0c0 e020
.org 0x4a0c2
	lsls r0, r0, #3	@ 0004a0c2 c000
.org 0x4a0c4
	cmp r1, r0	@ 0004a0c4 8142
.org 0x4a0c6
	ble.n 0x4a0ca	@ 0004a0c6 00dd
.org 0x4a0c8
	str r0, [r5, #96]	@ 0004a0c8 2866
.org 0x4a0ca
	ldrb r0, [r5, #19]	@ 0004a0ca e87c
.org 0x4a0cc
	subs r0, #1	@ 0004a0cc 0138
.org 0x4a0ce
	strb r0, [r5, #19]	@ 0004a0ce e874
.org 0x4a0d0
	lsls r0, r0, #24	@ 0004a0d0 0006
.org 0x4a0d2
	lsrs r0, r0, #24	@ 0004a0d2 000e
.org 0x4a0d4
	cmp r0, #255	@ 0004a0d4 ff28
.org 0x4a0d6
	beq.n 0x4a0f4	@ 0004a0d6 0dd0
.org 0x4a0d8
	adds r0, r5, #0	@ 0004a0d8 281c
.org 0x4a0da
	adds r0, #140	@ 0004a0da 8c30
.org 0x4a0dc
	ldr r0, [r0, #0]	@ 0004a0dc 0068
.org 0x4a0de
	ldr r1, [pc, #60]	@ 0004a0de 0f49
.org 0x4a0e0
	ands r0, r1	@ 0004a0e0 0840
.org 0x4a0e2
	cmp r0, #0	@ 0004a0e2 0028
.org 0x4a0e4
	bne.n 0x4a0f4	@ 0004a0e4 06d1
.org 0x4a0e6
	ldr r0, [r5, #84]	@ 0004a0e6 686d
.org 0x4a0e8
	ldr r1, [r5, #88]	@ 0004a0e8 a96d
.org 0x4a0ea
	bl 0x4a264	@ 0004a0ea 00f0bbf8
.org 0x4a0ee
	lsls r0, r0, #16	@ 0004a0ee 0004
.org 0x4a0f0
	cmp r0, #0	@ 0004a0f0 0028
.org 0x4a0f2
	beq.n 0x4a1ca	@ 0004a0f2 6ad0
.org 0x4a0f4
	ldr r1, [pc, #40]	@ 0004a0f4 0a49
.org 0x4a0f6
	adds r0, r5, #0	@ 0004a0f6 281c
.org 0x4a0f8
	bl 0x1cf00	@ 0004a0f8 d2f702ff
.org 0x4a0fc
	adds r0, r5, #0	@ 0004a0fc 281c
.org 0x4a0fe
	bl 0x1cff0	@ 0004a0fe d2f777ff
.org 0x4a102
	movs r0, #60	@ 0004a102 3c20
.org 0x4a104
	strb r0, [r5, #18]	@ 0004a104 a874
.org 0x4a106
	movs r0, #108	@ 0004a106 6c20
.org 0x4a108
	bl 0x2b10	@ 0004a108 b8f702fd
.org 0x4a10c
	b.n 0x4a196	@ 0004a10c 43e0
.org 0x4a10e
	.byte 0x00	@ 0004a10e data
.org 0x4a10f
	.byte 0x00	@ 0004a10f data
.org 0x4a110
	.byte 0x00,0xfa,0xff,0xff	@ 0004a110 data
.org 0x4a114
	.byte 0xac,0x72,0x85,0x08	@ 0004a114 data
.org 0x4a118
	.byte 0x39,0xa2,0x04,0x08	@ 0004a118 data
.org 0x4a11c
	.byte 0x04,0x10,0x00,0x00	@ 0004a11c data
.org 0x4a120
	.byte 0x10,0x83,0x00,0x00	@ 0004a120 data
.org 0x4a124
	cmp r2, #1	@ 0004a124 012a
.org 0x4a126
	bne.n 0x4a1a8	@ 0004a126 3fd1
.org 0x4a128
	ldrb r0, [r5, #18]	@ 0004a128 a87c
.org 0x4a12a
	cmp r0, #60	@ 0004a12a 3c28
.org 0x4a12c
	bne.n 0x4a140	@ 0004a12c 08d1
.org 0x4a12e
	adds r0, r5, #0	@ 0004a12e 281c
.org 0x4a130
	adds r0, #116	@ 0004a130 7430
.org 0x4a132
	ldr r1, [pc, #8]	@ 0004a132 0249
.org 0x4a134
	movs r3, #1	@ 0004a134 0123
.org 0x4a136
	negs r3, r3	@ 0004a136 5b42
.org 0x4a138
	str r3, [sp, #0]	@ 0004a138 0093
.org 0x4a13a
	b.n 0x4a152	@ 0004a13a 0ae0
.org 0x4a13c
	.byte 0xdc,0x72,0x85,0x08	@ 0004a13c data
.org 0x4a140
	cmp r0, #40	@ 0004a140 2828
.org 0x4a142
	bne.n 0x4a160	@ 0004a142 0dd1
.org 0x4a144
	adds r0, r5, #0	@ 0004a144 281c
.org 0x4a146
	adds r0, #116	@ 0004a146 7430
.org 0x4a148
	ldr r1, [pc, #16]	@ 0004a148 0449
.org 0x4a14a
	movs r3, #1	@ 0004a14a 0123
.org 0x4a14c
	negs r3, r3	@ 0004a14c 5b42
.org 0x4a14e
	str r3, [sp, #0]	@ 0004a14e 0093
.org 0x4a150
	movs r2, #2	@ 0004a150 0222
.org 0x4a152
	str r2, [sp, #4]	@ 0004a152 0192
.org 0x4a154
	adds r2, r3, #0	@ 0004a154 1a1c
.org 0x4a156
	bl 0x5794	@ 0004a156 bbf71dfb
.org 0x4a15a
	b.n 0x4a17a	@ 0004a15a 0ee0
.org 0x4a15c
	.byte 0xdc,0x72,0x85,0x08	@ 0004a15c data
.org 0x4a160
	cmp r0, #20	@ 0004a160 1428
.org 0x4a162
	bne.n 0x4a17a	@ 0004a162 0ad1
.org 0x4a164
	adds r0, r5, #0	@ 0004a164 281c
.org 0x4a166
	adds r0, #116	@ 0004a166 7430
.org 0x4a168
	ldr r1, [pc, #52]	@ 0004a168 0d49
.org 0x4a16a
	movs r3, #1	@ 0004a16a 0123
.org 0x4a16c
	negs r3, r3	@ 0004a16c 5b42
.org 0x4a16e
	str r3, [sp, #0]	@ 0004a16e 0093
.org 0x4a170
	movs r2, #3	@ 0004a170 0322
.org 0x4a172
	str r2, [sp, #4]	@ 0004a172 0192
.org 0x4a174
	adds r2, r3, #0	@ 0004a174 1a1c
.org 0x4a176
	bl 0x5794	@ 0004a176 bbf70dfb
.org 0x4a17a
	ldrb r0, [r5, #18]	@ 0004a17a a87c
.org 0x4a17c
	subs r0, #1	@ 0004a17c 0138
.org 0x4a17e
	strb r0, [r5, #18]	@ 0004a17e a874
.org 0x4a180
	lsls r0, r0, #24	@ 0004a180 0006
.org 0x4a182
	lsrs r0, r0, #24	@ 0004a182 000e
.org 0x4a184
	cmp r0, #255	@ 0004a184 ff28
.org 0x4a186
	bne.n 0x4a1ca	@ 0004a186 20d1
.org 0x4a188
	ldr r1, [pc, #24]	@ 0004a188 0649
.org 0x4a18a
	adds r0, r5, #0	@ 0004a18a 281c
.org 0x4a18c
	bl 0x1cf00	@ 0004a18c d2f7b8fe
.org 0x4a190
	adds r0, r5, #0	@ 0004a190 281c
.org 0x4a192
	bl 0x1cff0	@ 0004a192 d2f72dff
.org 0x4a196
	ldrb r0, [r5, #14]	@ 0004a196 a87b
.org 0x4a198
	adds r0, #1	@ 0004a198 0130
.org 0x4a19a
	strb r0, [r5, #14]	@ 0004a19a a873
.org 0x4a19c
	b.n 0x4a1ca	@ 0004a19c 15e0
.org 0x4a19e
	.byte 0x00	@ 0004a19e data
.org 0x4a19f
	.byte 0x00	@ 0004a19f data
.org 0x4a1a0
	.byte 0xdc,0x72,0x85,0x08	@ 0004a1a0 data
.org 0x4a1a4
	.byte 0x11,0x83,0x00,0x00	@ 0004a1a4 data
