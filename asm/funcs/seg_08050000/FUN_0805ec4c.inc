@ FUN_0805ec4c  entry 0x0805ec4c  size 498
.thumb
.org 0x5ec4c
FUN_0805ec4c:
	push {r4, r5, r6, r7, lr}	@ 0005ec4c f0b5
.org 0x5ec4e
	mov r7, sl	@ 0005ec4e 5746
.org 0x5ec50
	mov r6, r9	@ 0005ec50 4e46
.org 0x5ec52
	mov r5, r8	@ 0005ec52 4546
.org 0x5ec54
	push {r5, r6, r7}	@ 0005ec54 e0b4
.org 0x5ec56
	sub sp, #40	@ 0005ec56 8ab0
.org 0x5ec58
	adds r7, r0, #0	@ 0005ec58 071c
.org 0x5ec5a
	ldr r1, [pc, #48]	@ 0005ec5a 0c49
.org 0x5ec5c
	mov r0, sp	@ 0005ec5c 6846
.org 0x5ec5e
	movs r2, #6	@ 0005ec5e 0622
.org 0x5ec60
	bl 0x129258	@ 0005ec60 caf0fafa
.org 0x5ec64
	add r4, sp, #8	@ 0005ec64 02ac
.org 0x5ec66
	ldr r1, [pc, #40]	@ 0005ec66 0a49
.org 0x5ec68
	adds r0, r4, #0	@ 0005ec68 201c
.org 0x5ec6a
	movs r2, #16	@ 0005ec6a 1022
.org 0x5ec6c
	bl 0x129258	@ 0005ec6c caf0f4fa
.org 0x5ec70
	ldrb r6, [r7, #16]	@ 0005ec70 3e7c
.org 0x5ec72
	ldrb r0, [r7, #10]	@ 0005ec72 b87a
.org 0x5ec74
	lsrs r0, r0, #4	@ 0005ec74 0009
.org 0x5ec76
	mov r9, r0	@ 0005ec76 8146
.org 0x5ec78
	movs r5, #1	@ 0005ec78 0125
.org 0x5ec7a
	ands r0, r5	@ 0005ec7a 2840
.org 0x5ec7c
	mov r9, r0	@ 0005ec7c 8146
.org 0x5ec7e
	ldrb r0, [r7, #15]	@ 0005ec7e f87b
.org 0x5ec80
	mov r8, r4	@ 0005ec80 a046
.org 0x5ec82
	cmp r0, #0	@ 0005ec82 0028
.org 0x5ec84
	beq.n 0x5ec94	@ 0005ec84 06d0
.org 0x5ec86
	cmp r0, #1	@ 0005ec86 0128
.org 0x5ec88
	beq.n 0x5ece4	@ 0005ec88 2cd0
.org 0x5ec8a
	b.n 0x5ee5c	@ 0005ec8a e7e0
.org 0x5ec8c
	.byte 0xc2,0x97,0x12,0x08	@ 0005ec8c data
.org 0x5ec90
	.byte 0xc8,0x97,0x12,0x08	@ 0005ec90 data
.org 0x5ec94
	movs r0, #92	@ 0005ec94 5c20
.org 0x5ec96
	bl 0x2b10	@ 0005ec96 a3f73bff
.org 0x5ec9a
	movs r0, #83	@ 0005ec9a 5320
.org 0x5ec9c
	bl 0x2b10	@ 0005ec9c a3f738ff
.org 0x5eca0
	ldr r3, [pc, #344]	@ 0005eca0 564b
.org 0x5eca2
	ldrh r2, [r3, #8]	@ 0005eca2 1a89
.org 0x5eca4
	adds r0, r5, #0	@ 0005eca4 281c
.org 0x5eca6
	ands r0, r2	@ 0005eca6 1040
.org 0x5eca8
	cmp r0, #0	@ 0005eca8 0028
.org 0x5ecaa
	beq.n 0x5ecc0	@ 0005ecaa 09d0
.org 0x5ecac
	ldrb r1, [r3, #18]	@ 0005ecac 997c
.org 0x5ecae
	adds r0, r5, #0	@ 0005ecae 281c
.org 0x5ecb0
	ands r0, r1	@ 0005ecb0 0840
.org 0x5ecb2
	cmp r0, #0	@ 0005ecb2 0028
.org 0x5ecb4
	bne.n 0x5ecc0	@ 0005ecb4 04d1
.org 0x5ecb6
	ldr r0, [pc, #328]	@ 0005ecb6 5248
.org 0x5ecb8
	ands r0, r2	@ 0005ecb8 1040
.org 0x5ecba
	movs r1, #16	@ 0005ecba 1021
.org 0x5ecbc
	orrs r0, r1	@ 0005ecbc 0843
.org 0x5ecbe
	strh r0, [r3, #8]	@ 0005ecbe 1881
.org 0x5ecc0
	adds r1, r7, #0	@ 0005ecc0 391c
.org 0x5ecc2
	adds r1, #37	@ 0005ecc2 2531
.org 0x5ecc4
	movs r4, #0	@ 0005ecc4 0024
.org 0x5ecc6
	movs r0, #15	@ 0005ecc6 0f20
.org 0x5ecc8
	strb r0, [r1, #0]	@ 0005ecc8 0870
.org 0x5ecca
	lsls r0, r6, #1	@ 0005ecca 7000
.org 0x5eccc
	add r0, sp	@ 0005eccc 6844
.org 0x5ecce
	ldrb r1, [r0, #0]	@ 0005ecce 0178
.org 0x5ecd0
	adds r0, r7, #0	@ 0005ecd0 381c
.org 0x5ecd2
	bl 0x5ee6c	@ 0005ecd2 00f0cbf8
.org 0x5ecd6
	strb r4, [r7, #18]	@ 0005ecd6 bc74
.org 0x5ecd8
	movs r0, #128	@ 0005ecd8 8020
.org 0x5ecda
	lsls r0, r0, #1	@ 0005ecda 4000
.org 0x5ecdc
	str r0, [r7, #104]	@ 0005ecdc b866
.org 0x5ecde
	ldrb r0, [r7, #15]	@ 0005ecde f87b
.org 0x5ece0
	adds r0, #1	@ 0005ece0 0130
.org 0x5ece2
	strb r0, [r7, #15]	@ 0005ece2 f873
.org 0x5ece4
	adds r0, r7, #0	@ 0005ece4 381c
.org 0x5ece6
	bl 0x1cff0	@ 0005ece6 bef783f9
.org 0x5ecea
	adds r0, r7, #0	@ 0005ecea 381c
.org 0x5ecec
	adds r0, #116	@ 0005ecec 7430
.org 0x5ecee
	ldr r4, [pc, #276]	@ 0005ecee 454c
.org 0x5ecf0
	ldr r3, [pc, #276]	@ 0005ecf0 454b
.org 0x5ecf2
	adds r1, r7, #0	@ 0005ecf2 391c
.org 0x5ecf4
	adds r1, #184	@ 0005ecf4 b831
.org 0x5ecf6
	ldrb r2, [r1, #0]	@ 0005ecf6 0a78
.org 0x5ecf8
	lsls r1, r2, #1	@ 0005ecf8 5100
.org 0x5ecfa
	adds r1, r1, r3	@ 0005ecfa c918
.org 0x5ecfc
	ldrh r1, [r1, #0]	@ 0005ecfc 0988
.org 0x5ecfe
	lsls r1, r1, #2	@ 0005ecfe 8900
.org 0x5ed00
	adds r1, r1, r4	@ 0005ed00 0919
.org 0x5ed02
	adds r3, r7, #0	@ 0005ed02 3b1c
.org 0x5ed04
	adds r3, #113	@ 0005ed04 7133
.org 0x5ed06
	movs r4, #0	@ 0005ed06 0024
.org 0x5ed08
	ldrsb r4, [r3, r4]	@ 0005ed08 1c57
.org 0x5ed0a
	ldr r1, [r1, #0]	@ 0005ed0a 0968
.org 0x5ed0c
	lsls r3, r4, #2	@ 0005ed0c a300
.org 0x5ed0e
	adds r3, r3, r1	@ 0005ed0e 5b18
.org 0x5ed10
	ldr r1, [pc, #248]	@ 0005ed10 3e49
.org 0x5ed12
	lsls r2, r2, #2	@ 0005ed12 9200
.org 0x5ed14
	adds r2, r2, r1	@ 0005ed14 5218
.org 0x5ed16
	ldr r1, [r2, #0]	@ 0005ed16 1168
.org 0x5ed18
	adds r1, r1, r4	@ 0005ed18 0919
.org 0x5ed1a
	ldrb r1, [r1, #0]	@ 0005ed1a 0978
.org 0x5ed1c
	lsls r2, r1, #1	@ 0005ed1c 4a00
.org 0x5ed1e
	adds r2, r2, r1	@ 0005ed1e 5218
.org 0x5ed20
	lsls r2, r2, #3	@ 0005ed20 d200
.org 0x5ed22
	ldr r1, [r3, #0]	@ 0005ed22 1968
.org 0x5ed24
	adds r1, r1, r2	@ 0005ed24 8918
.org 0x5ed26
	bl 0x5784	@ 0005ed26 a6f72dfd
.org 0x5ed2a
	ldr r0, [r7, #104]	@ 0005ed2a b86e
.org 0x5ed2c
	cmp r0, #0	@ 0005ed2c 0028
.org 0x5ed2e
	beq.n 0x5ed34	@ 0005ed2e 01d0
.org 0x5ed30
	subs r0, #1	@ 0005ed30 0138
.org 0x5ed32
	str r0, [r7, #104]	@ 0005ed32 b866
.org 0x5ed34
	ldrb r0, [r7, #18]	@ 0005ed34 b87c
.org 0x5ed36
	adds r2, r0, #1	@ 0005ed36 421c
.org 0x5ed38
	movs r1, #0	@ 0005ed38 0021
.org 0x5ed3a
	mov sl, r1	@ 0005ed3a 8a46
.org 0x5ed3c
	strb r2, [r7, #18]	@ 0005ed3c ba74
.org 0x5ed3e
	movs r1, #255	@ 0005ed3e ff21
.org 0x5ed40
	adds r0, r2, #0	@ 0005ed40 101c
.org 0x5ed42
	ands r0, r1	@ 0005ed42 0840
.org 0x5ed44
	movs r1, #7	@ 0005ed44 0721
.org 0x5ed46
	ands r0, r1	@ 0005ed46 0840
.org 0x5ed48
	cmp r0, #0	@ 0005ed48 0028
.org 0x5ed4a
	bne.n 0x5edca	@ 0005ed4a 3ed1
.org 0x5ed4c
	lsls r1, r2, #24	@ 0005ed4c 1106
.org 0x5ed4e
	lsrs r1, r1, #27	@ 0005ed4e c90e
.org 0x5ed50
	movs r0, #3	@ 0005ed50 0320
.org 0x5ed52
	ands r1, r0	@ 0005ed52 0140
.org 0x5ed54
	lsls r1, r1, #2	@ 0005ed54 8900
.org 0x5ed56
	mov r2, r8	@ 0005ed56 4246
.org 0x5ed58
	adds r0, r2, r1	@ 0005ed58 5018
.org 0x5ed5a
	movs r3, #0	@ 0005ed5a 0023
.org 0x5ed5c
	ldrsh r2, [r0, r3]	@ 0005ed5c c25e
.org 0x5ed5e
	ldr r4, [pc, #176]	@ 0005ed5e 2c4c
.org 0x5ed60
	mov r8, r4	@ 0005ed60 a046
.org 0x5ed62
	ldr r0, [r4, #0]	@ 0005ed62 2068
.org 0x5ed64
	ldr r5, [pc, #172]	@ 0005ed64 2b4d
.org 0x5ed66
	muls r0, r5	@ 0005ed66 6843
.org 0x5ed68
	ldr r3, [pc, #172]	@ 0005ed68 2b4b
.org 0x5ed6a
	adds r0, r0, r3	@ 0005ed6a c018
.org 0x5ed6c
	lsls r0, r0, #1	@ 0005ed6c 4000
.org 0x5ed6e
	lsrs r6, r0, #1	@ 0005ed6e 4608
.org 0x5ed70
	mov ip, r6	@ 0005ed70 b446
.org 0x5ed72
	lsrs r0, r0, #17	@ 0005ed72 400c
.org 0x5ed74
	movs r4, #15	@ 0005ed74 0f24
.org 0x5ed76
	ands r0, r4	@ 0005ed76 2040
.org 0x5ed78
	subs r0, #7	@ 0005ed78 0738
.org 0x5ed7a
	lsls r0, r0, #8	@ 0005ed7a 0002
.org 0x5ed7c
	adds r0, r2, r0	@ 0005ed7c 1018
.org 0x5ed7e
	str r0, [sp, #32]	@ 0005ed7e 0890
.org 0x5ed80
	mov r2, r9	@ 0005ed80 4a46
.org 0x5ed82
	lsls r0, r2, #1	@ 0005ed82 5000
.org 0x5ed84
	subs r0, #1	@ 0005ed84 0138
.org 0x5ed86
	ldr r2, [sp, #32]	@ 0005ed86 089a
.org 0x5ed88
	adds r6, r2, #0	@ 0005ed88 161c
.org 0x5ed8a
	muls r6, r0	@ 0005ed8a 4643
.org 0x5ed8c
	str r6, [sp, #32]	@ 0005ed8c 0896
.org 0x5ed8e
	mov r0, sp	@ 0005ed8e 6846
.org 0x5ed90
	adds r0, #10	@ 0005ed90 0a30
.org 0x5ed92
	adds r0, r0, r1	@ 0005ed92 4018
.org 0x5ed94
	movs r6, #0	@ 0005ed94 0026
.org 0x5ed96
	ldrsh r2, [r0, r6]	@ 0005ed96 825f
.org 0x5ed98
	mov r0, ip	@ 0005ed98 6046
.org 0x5ed9a
	muls r0, r5	@ 0005ed9a 6843
.org 0x5ed9c
	adds r0, r0, r3	@ 0005ed9c c018
.org 0x5ed9e
	lsls r0, r0, #1	@ 0005ed9e 4000
.org 0x5eda0
	lsrs r1, r0, #1	@ 0005eda0 4108
.org 0x5eda2
	mov r3, r8	@ 0005eda2 4346
.org 0x5eda4
	str r1, [r3, #0]	@ 0005eda4 1960
.org 0x5eda6
	lsrs r0, r0, #17	@ 0005eda6 400c
.org 0x5eda8
	ands r0, r4	@ 0005eda8 2040
.org 0x5edaa
	subs r0, #7	@ 0005edaa 0738
.org 0x5edac
	lsls r0, r0, #8	@ 0005edac 0002
.org 0x5edae
	adds r0, r2, r0	@ 0005edae 1018
.org 0x5edb0
	str r0, [sp, #36]	@ 0005edb0 0990
.org 0x5edb2
	ldr r0, [r7, #84]	@ 0005edb2 786d
.org 0x5edb4
	ldr r4, [sp, #32]	@ 0005edb4 089c
.org 0x5edb6
	adds r0, r0, r4	@ 0005edb6 0019
.org 0x5edb8
	str r0, [sp, #24]	@ 0005edb8 0690
.org 0x5edba
	ldr r0, [r7, #88]	@ 0005edba b86d
.org 0x5edbc
	ldr r6, [sp, #36]	@ 0005edbc 099e
.org 0x5edbe
	adds r0, r0, r6	@ 0005edbe 8019
.org 0x5edc0
	add r1, sp, #24	@ 0005edc0 06a9
.org 0x5edc2
	str r0, [r1, #4]	@ 0005edc2 4860
.org 0x5edc4
	movs r0, #1	@ 0005edc4 0120
.org 0x5edc6
	bl 0xd0c88	@ 0005edc6 71f05fff
.org 0x5edca
	ldr r3, [r7, #104]	@ 0005edca bb6e
.org 0x5edcc
	cmp r3, #0	@ 0005edcc 002b
.org 0x5edce
	bne.n 0x5ee1c	@ 0005edce 25d1
.org 0x5edd0
	ldr r2, [pc, #40]	@ 0005edd0 0a4a
.org 0x5edd2
	ldrb r0, [r2, #18]	@ 0005edd2 907c
.org 0x5edd4
	movs r1, #2	@ 0005edd4 0221
.org 0x5edd6
	orrs r0, r1	@ 0005edd6 0843
.org 0x5edd8
	strb r0, [r2, #18]	@ 0005edd8 9074
.org 0x5edda
	adds r0, r7, #0	@ 0005edda 381c
.org 0x5eddc
	adds r0, #140	@ 0005eddc 8c30
.org 0x5edde
	str r3, [r0, #0]	@ 0005edde 0360
.org 0x5ede0
	adds r0, #4	@ 0005ede0 0430
.org 0x5ede2
	str r3, [r0, #0]	@ 0005ede2 0360
.org 0x5ede4
	adds r0, #4	@ 0005ede4 0430
.org 0x5ede6
	strb r3, [r0, #0]	@ 0005ede6 0370
.org 0x5ede8
	ldrb r1, [r7, #10]	@ 0005ede8 b97a
.org 0x5edea
	movs r0, #251	@ 0005edea fb20
.org 0x5edec
	ands r0, r1	@ 0005edec 0840
.org 0x5edee
	movs r1, #254	@ 0005edee fe21
.org 0x5edf0
	ands r0, r1	@ 0005edf0 0840
.org 0x5edf2
	strb r0, [r7, #10]	@ 0005edf2 b872
.org 0x5edf4
	ldrb r0, [r7, #15]	@ 0005edf4 f87b
.org 0x5edf6
	adds r0, #1	@ 0005edf6 0130
.org 0x5edf8
	strb r0, [r7, #15]	@ 0005edf8 f873
.org 0x5edfa
	b.n 0x5ee5c	@ 0005edfa 2fe0
.org 0x5edfc
	.byte 0x10,0xe9,0x02,0x02	@ 0005edfc data
.org 0x5ee00
	.byte 0xfe,0xff,0x00,0x00	@ 0005ee00 data
.org 0x5ee04
	.byte 0xa8,0xa7,0x85,0x08	@ 0005ee04 data
.org 0x5ee08
	.byte 0x10,0xa9,0x85,0x08	@ 0005ee08 data
.org 0x5ee0c
	.byte 0x44,0xa8,0x85,0x08	@ 0005ee0c data
.org 0x5ee10
	.byte 0x38,0xdc,0x02,0x02	@ 0005ee10 data
.org 0x5ee14
	.byte 0xfd,0x43,0x03,0x00	@ 0005ee14 data
.org 0x5ee18
	.byte 0xc3,0x9e,0x26,0x00	@ 0005ee18 data
.org 0x5ee1c
	cmp r3, #127	@ 0005ee1c 7f2b
.org 0x5ee1e
	bgt.n 0x5ee30	@ 0005ee1e 07dc
.org 0x5ee20
	movs r0, #3	@ 0005ee20 0320
.org 0x5ee22
	ands r3, r0	@ 0005ee22 0340
.org 0x5ee24
	cmp r3, #0	@ 0005ee24 002b
.org 0x5ee26
	bne.n 0x5ee54	@ 0005ee26 15d1
.org 0x5ee28
	ldrb r0, [r7, #10]	@ 0005ee28 b87a
.org 0x5ee2a
	movs r1, #1	@ 0005ee2a 0121
.org 0x5ee2c
	orrs r0, r1	@ 0005ee2c 0843
.org 0x5ee2e
	b.n 0x5ee5a	@ 0005ee2e 14e0
.org 0x5ee30
	cmp r3, #128	@ 0005ee30 802b
.org 0x5ee32
	bne.n 0x5ee3e	@ 0005ee32 04d1
.org 0x5ee34
	ldr r0, [pc, #24]	@ 0005ee34 0648
.org 0x5ee36
	ldrb r1, [r0, #9]	@ 0005ee36 417a
.org 0x5ee38
	movs r2, #32	@ 0005ee38 2022
.org 0x5ee3a
	orrs r1, r2	@ 0005ee3a 1143
.org 0x5ee3c
	strb r1, [r0, #9]	@ 0005ee3c 4172
