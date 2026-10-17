@ FUN_0804ea24  entry 0x0804ea24  size 452
.thumb
.org 0x4ea24
FUN_0804ea24:
	push {r4, r5, r6, r7, lr}	@ 0004ea24 f0b5
.org 0x4ea26
	mov r7, r8	@ 0004ea26 4746
.org 0x4ea28
	push {r7}	@ 0004ea28 80b4
.org 0x4ea2a
	adds r5, r0, #0	@ 0004ea2a 051c
.org 0x4ea2c
	ldr r7, [r5, #40]	@ 0004ea2c af6a
.org 0x4ea2e
	bl 0x1cff0	@ 0004ea2e cef7dffa
.org 0x4ea32
	ldrb r6, [r5, #13]	@ 0004ea32 6e7b
.org 0x4ea34
	cmp r6, #0	@ 0004ea34 002e
.org 0x4ea36
	beq.n 0x4ea3a	@ 0004ea36 00d0
.org 0x4ea38
	b.n 0x4eb8a	@ 0004ea38 a7e0
.org 0x4ea3a
	ldrb r0, [r5, #18]	@ 0004ea3a a87c
.org 0x4ea3c
	subs r0, #1	@ 0004ea3c 0138
.org 0x4ea3e
	movs r1, #0	@ 0004ea3e 0021
.org 0x4ea40
	mov r8, r1	@ 0004ea40 8846
.org 0x4ea42
	strb r0, [r5, #18]	@ 0004ea42 a874
.org 0x4ea44
	lsls r0, r0, #24	@ 0004ea44 0006
.org 0x4ea46
	lsrs r0, r0, #24	@ 0004ea46 000e
.org 0x4ea48
	cmp r0, #255	@ 0004ea48 ff28
.org 0x4ea4a
	beq.n 0x4ea4e	@ 0004ea4a 00d0
.org 0x4ea4c
	b.n 0x4ebec	@ 0004ea4c cee0
.org 0x4ea4e
	adds r4, r5, #0	@ 0004ea4e 2c1c
.org 0x4ea50
	adds r4, #84	@ 0004ea50 5434
.org 0x4ea52
	adds r0, r7, #0	@ 0004ea52 381c
.org 0x4ea54
	adds r1, r4, #0	@ 0004ea54 211c
.org 0x4ea56
	bl 0x41318	@ 0004ea56 f2f75ffc
.org 0x4ea5a
	lsls r0, r0, #24	@ 0004ea5a 0006
.org 0x4ea5c
	lsrs r3, r0, #24	@ 0004ea5c 030e
.org 0x4ea5e
	mov ip, r4	@ 0004ea5e a446
.org 0x4ea60
	cmp r3, #0	@ 0004ea60 002b
.org 0x4ea62
	beq.n 0x4eaa0	@ 0004ea62 1dd0
.org 0x4ea64
	ldrb r1, [r5, #10]	@ 0004ea64 a97a
.org 0x4ea66
	movs r0, #254	@ 0004ea66 fe20
.org 0x4ea68
	ands r0, r1	@ 0004ea68 0840
.org 0x4ea6a
	movs r1, #253	@ 0004ea6a fd21
.org 0x4ea6c
	ands r0, r1	@ 0004ea6c 0840
.org 0x4ea6e
	strb r0, [r5, #10]	@ 0004ea6e a872
.org 0x4ea70
	adds r0, r5, #0	@ 0004ea70 281c
.org 0x4ea72
	adds r0, #140	@ 0004ea72 8c30
.org 0x4ea74
	str r6, [r0, #0]	@ 0004ea74 0660
.org 0x4ea76
	adds r0, #4	@ 0004ea76 0430
.org 0x4ea78
	str r6, [r0, #0]	@ 0004ea78 0660
.org 0x4ea7a
	adds r0, #4	@ 0004ea7a 0430
.org 0x4ea7c
	strb r6, [r0, #0]	@ 0004ea7c 0670
.org 0x4ea7e
	ldrb r1, [r5, #10]	@ 0004ea7e a97a
.org 0x4ea80
	movs r0, #251	@ 0004ea80 fb20
.org 0x4ea82
	ands r0, r1	@ 0004ea82 0840
.org 0x4ea84
	strb r0, [r5, #10]	@ 0004ea84 a872
.org 0x4ea86
	ldr r1, [pc, #20]	@ 0004ea86 0549
.org 0x4ea88
	ldrb r0, [r5, #9]	@ 0004ea88 687a
.org 0x4ea8a
	lsls r0, r0, #2	@ 0004ea8a 8000
.org 0x4ea8c
	adds r0, r0, r1	@ 0004ea8c 4018
.org 0x4ea8e
	movs r1, #3	@ 0004ea8e 0321
.org 0x4ea90
	str r1, [r5, #12]	@ 0004ea90 e960
.org 0x4ea92
	ldr r0, [r0, #0]	@ 0004ea92 0068
.org 0x4ea94
	ldr r0, [r0, #12]	@ 0004ea94 c068
.org 0x4ea96
	str r0, [r5, #20]	@ 0004ea96 6861
.org 0x4ea98
	b.n 0x4ebec	@ 0004ea98 a8e0
.org 0x4ea9a
	.byte 0x00	@ 0004ea9a data
.org 0x4ea9b
	.byte 0x00	@ 0004ea9b data
.org 0x4ea9c
	.byte 0xf8,0x39,0x85,0x08	@ 0004ea9c data
.org 0x4eaa0
	ldrb r2, [r5, #16]	@ 0004eaa0 2a7c
.org 0x4eaa2
	cmp r2, #0	@ 0004eaa2 002a
.org 0x4eaa4
	bne.n 0x4eb04	@ 0004eaa4 2ed1
.org 0x4eaa6
	ldr r1, [r5, #84]	@ 0004eaa6 696d
.org 0x4eaa8
	ldr r0, [r7, #84]	@ 0004eaa8 786d
.org 0x4eaaa
	cmp r1, r0	@ 0004eaaa 8142
.org 0x4eaac
	ble.n 0x4ead8	@ 0004eaac 14dd
.org 0x4eaae
	movs r0, #192	@ 0004eaae c020
.org 0x4eab0
	lsls r0, r0, #1	@ 0004eab0 4000
.org 0x4eab2
	str r0, [r5, #92]	@ 0004eab2 e865
.org 0x4eab4
	movs r2, #1	@ 0004eab4 0122
.org 0x4eab6
	ldrb r0, [r5, #10]	@ 0004eab6 a87a
.org 0x4eab8
	movs r1, #16	@ 0004eab8 1021
.org 0x4eaba
	orrs r0, r1	@ 0004eaba 0843
.org 0x4eabc
	strb r0, [r5, #10]	@ 0004eabc a872
.org 0x4eabe
	adds r0, r5, #0	@ 0004eabe 281c
.org 0x4eac0
	adds r0, #76	@ 0004eac0 4c30
.org 0x4eac2
	strb r2, [r0, #0]	@ 0004eac2 0270
.org 0x4eac4
	adds r3, r5, #0	@ 0004eac4 2b1c
.org 0x4eac6
	adds r3, #74	@ 0004eac6 4a33
.org 0x4eac8
	movs r2, #16	@ 0004eac8 1022
.org 0x4eaca
	ldrb r1, [r3, #0]	@ 0004eaca 1978
.org 0x4eacc
	movs r0, #17	@ 0004eacc 1120
.org 0x4eace
	negs r0, r0	@ 0004eace 4042
.org 0x4ead0
	ands r0, r1	@ 0004ead0 0840
.org 0x4ead2
	orrs r0, r2	@ 0004ead2 1043
.org 0x4ead4
	strb r0, [r3, #0]	@ 0004ead4 1870
.org 0x4ead6
	b.n 0x4eaf8	@ 0004ead6 0fe0
.org 0x4ead8
	ldr r0, [pc, #32]	@ 0004ead8 0848
.org 0x4eada
	str r0, [r5, #92]	@ 0004eada e865
.org 0x4eadc
	ldrb r1, [r5, #10]	@ 0004eadc a97a
.org 0x4eade
	movs r0, #239	@ 0004eade ef20
.org 0x4eae0
	ands r0, r1	@ 0004eae0 0840
.org 0x4eae2
	strb r0, [r5, #10]	@ 0004eae2 a872
.org 0x4eae4
	adds r0, r5, #0	@ 0004eae4 281c
.org 0x4eae6
	adds r0, #76	@ 0004eae6 4c30
.org 0x4eae8
	strb r2, [r0, #0]	@ 0004eae8 0270
.org 0x4eaea
	adds r2, r5, #0	@ 0004eaea 2a1c
.org 0x4eaec
	adds r2, #74	@ 0004eaec 4a32
.org 0x4eaee
	ldrb r1, [r2, #0]	@ 0004eaee 1178
.org 0x4eaf0
	movs r0, #17	@ 0004eaf0 1120
.org 0x4eaf2
	negs r0, r0	@ 0004eaf2 4042
.org 0x4eaf4
	ands r0, r1	@ 0004eaf4 0840
.org 0x4eaf6
	strb r0, [r2, #0]	@ 0004eaf6 1070
.org 0x4eaf8
	ldr r0, [pc, #4]	@ 0004eaf8 0148
.org 0x4eafa
	b.n 0x4eb52	@ 0004eafa 2ae0
.org 0x4eafc
	.byte 0x80,0xfe,0xff,0xff	@ 0004eafc data
.org 0x4eb00
	.byte 0x00,0xfc,0xff,0xff	@ 0004eb00 data
.org 0x4eb04
	ldr r1, [r5, #84]	@ 0004eb04 696d
.org 0x4eb06
	ldr r0, [r7, #84]	@ 0004eb06 786d
.org 0x4eb08
	cmp r1, r0	@ 0004eb08 8142
.org 0x4eb0a
	ble.n 0x4eb30	@ 0004eb0a 11dd
.org 0x4eb0c
	movs r2, #1	@ 0004eb0c 0122
.org 0x4eb0e
	ldrb r0, [r5, #10]	@ 0004eb0e a87a
.org 0x4eb10
	movs r1, #16	@ 0004eb10 1021
.org 0x4eb12
	orrs r0, r1	@ 0004eb12 0843
.org 0x4eb14
	strb r0, [r5, #10]	@ 0004eb14 a872
.org 0x4eb16
	adds r0, r5, #0	@ 0004eb16 281c
.org 0x4eb18
	adds r0, #76	@ 0004eb18 4c30
.org 0x4eb1a
	strb r2, [r0, #0]	@ 0004eb1a 0270
.org 0x4eb1c
	adds r3, r5, #0	@ 0004eb1c 2b1c
.org 0x4eb1e
	adds r3, #74	@ 0004eb1e 4a33
.org 0x4eb20
	movs r2, #16	@ 0004eb20 1022
.org 0x4eb22
	ldrb r1, [r3, #0]	@ 0004eb22 1978
.org 0x4eb24
	movs r0, #17	@ 0004eb24 1120
.org 0x4eb26
	negs r0, r0	@ 0004eb26 4042
.org 0x4eb28
	ands r0, r1	@ 0004eb28 0840
.org 0x4eb2a
	orrs r0, r2	@ 0004eb2a 1043
.org 0x4eb2c
	strb r0, [r3, #0]	@ 0004eb2c 1870
.org 0x4eb2e
	b.n 0x4eb4c	@ 0004eb2e 0de0
.org 0x4eb30
	ldrb r1, [r5, #10]	@ 0004eb30 a97a
.org 0x4eb32
	movs r0, #239	@ 0004eb32 ef20
.org 0x4eb34
	ands r0, r1	@ 0004eb34 0840
.org 0x4eb36
	strb r0, [r5, #10]	@ 0004eb36 a872
.org 0x4eb38
	adds r0, r5, #0	@ 0004eb38 281c
.org 0x4eb3a
	adds r0, #76	@ 0004eb3a 4c30
.org 0x4eb3c
	strb r3, [r0, #0]	@ 0004eb3c 0370
.org 0x4eb3e
	adds r2, r5, #0	@ 0004eb3e 2a1c
.org 0x4eb40
	adds r2, #74	@ 0004eb40 4a32
.org 0x4eb42
	ldrb r1, [r2, #0]	@ 0004eb42 1178
.org 0x4eb44
	movs r0, #17	@ 0004eb44 1120
.org 0x4eb46
	negs r0, r0	@ 0004eb46 4042
.org 0x4eb48
	ands r0, r1	@ 0004eb48 0840
.org 0x4eb4a
	strb r0, [r2, #0]	@ 0004eb4a 1070
.org 0x4eb4c
	movs r0, #0	@ 0004eb4c 0020
.org 0x4eb4e
	str r0, [r5, #92]	@ 0004eb4e e865
.org 0x4eb50
	ldr r0, [pc, #164]	@ 0004eb50 2948
.org 0x4eb52
	str r0, [r5, #96]	@ 0004eb52 2866
.org 0x4eb54
	ldrb r1, [r5, #10]	@ 0004eb54 a97a
.org 0x4eb56
	movs r0, #4	@ 0004eb56 0420
.org 0x4eb58
	orrs r0, r1	@ 0004eb58 0843
.org 0x4eb5a
	strb r0, [r5, #10]	@ 0004eb5a a872
.org 0x4eb5c
	adds r4, r5, #0	@ 0004eb5c 2c1c
.org 0x4eb5e
	adds r4, #116	@ 0004eb5e 7434
.org 0x4eb60
	ldr r1, [pc, #152]	@ 0004eb60 2649
.org 0x4eb62
	adds r0, r4, #0	@ 0004eb62 201c
.org 0x4eb64
	mov r2, ip	@ 0004eb64 6246
.org 0x4eb66
	movs r3, #8	@ 0004eb66 0823
.org 0x4eb68
	bl 0x5760	@ 0004eb68 b6f7fafd
.org 0x4eb6c
	str r5, [r4, #44]	@ 0004eb6c e562
.org 0x4eb6e
	ldr r0, [pc, #144]	@ 0004eb6e 2448
.org 0x4eb70
	str r0, [r4, #36]	@ 0004eb70 6062
.org 0x4eb72
	ldrb r1, [r5, #10]	@ 0004eb72 a97a
.org 0x4eb74
	movs r0, #1	@ 0004eb74 0120
.org 0x4eb76
	orrs r0, r1	@ 0004eb76 0843
.org 0x4eb78
	strb r0, [r5, #10]	@ 0004eb78 a872
.org 0x4eb7a
	adds r0, r7, #0	@ 0004eb7a 381c
.org 0x4eb7c
	bl 0x3aa4c	@ 0004eb7c ebf766ff
.org 0x4eb80
	adds r1, r5, #0	@ 0004eb80 291c
.org 0x4eb82
	adds r1, #189	@ 0004eb82 bd31
.org 0x4eb84
	movs r0, #1	@ 0004eb84 0120
.org 0x4eb86
	strb r0, [r1, #0]	@ 0004eb86 0870
.org 0x4eb88
	strb r0, [r5, #13]	@ 0004eb88 6873
.org 0x4eb8a
	ldr r0, [r5, #84]	@ 0004eb8a 686d
.org 0x4eb8c
	ldr r1, [r5, #92]	@ 0004eb8c e96d
.org 0x4eb8e
	adds r0, r0, r1	@ 0004eb8e 4018
.org 0x4eb90
	str r0, [r5, #84]	@ 0004eb90 6865
.org 0x4eb92
	ldr r0, [r5, #96]	@ 0004eb92 286e
.org 0x4eb94
	adds r0, #64	@ 0004eb94 4030
.org 0x4eb96
	str r0, [r5, #96]	@ 0004eb96 2866
.org 0x4eb98
	movs r1, #224	@ 0004eb98 e021
.org 0x4eb9a
	lsls r1, r1, #3	@ 0004eb9a c900
.org 0x4eb9c
	cmp r0, r1	@ 0004eb9c 8842
.org 0x4eb9e
	ble.n 0x4eba2	@ 0004eb9e 00dd
.org 0x4eba0
	str r1, [r5, #96]	@ 0004eba0 2966
.org 0x4eba2
	ldr r1, [r5, #88]	@ 0004eba2 a96d
.org 0x4eba4
	ldr r0, [r5, #96]	@ 0004eba4 286e
.org 0x4eba6
	adds r1, r1, r0	@ 0004eba6 0918
.org 0x4eba8
	str r1, [r5, #88]	@ 0004eba8 a965
.org 0x4ebaa
	ldr r0, [r5, #84]	@ 0004ebaa 686d
.org 0x4ebac
	bl 0x4ec94	@ 0004ebac 00f072f8
.org 0x4ebb0
	lsls r0, r0, #16	@ 0004ebb0 0004
.org 0x4ebb2
	cmp r0, #0	@ 0004ebb2 0028
.org 0x4ebb4
	bne.n 0x4ebc4	@ 0004ebb4 06d1
.org 0x4ebb6
	adds r0, r5, #0	@ 0004ebb6 281c
.org 0x4ebb8
	adds r0, #140	@ 0004ebb8 8c30
.org 0x4ebba
	ldr r0, [r0, #0]	@ 0004ebba 0068
.org 0x4ebbc
	ldr r1, [pc, #68]	@ 0004ebbc 1149
.org 0x4ebbe
	ands r0, r1	@ 0004ebbe 0840
.org 0x4ebc0
	cmp r0, #0	@ 0004ebc0 0028
.org 0x4ebc2
	beq.n 0x4ebec	@ 0004ebc2 13d0
.org 0x4ebc4
	adds r1, r5, #0	@ 0004ebc4 291c
.org 0x4ebc6
	adds r1, #84	@ 0004ebc6 5431
.org 0x4ebc8
	movs r0, #1	@ 0004ebc8 0120
.org 0x4ebca
	bl 0xd0c88	@ 0004ebca 82f05df8
.org 0x4ebce
	movs r0, #53	@ 0004ebce 3520
.org 0x4ebd0
	bl 0x2b10	@ 0004ebd0 b3f79eff
.org 0x4ebd4
	ldr r1, [pc, #48]	@ 0004ebd4 0c49
.org 0x4ebd6
	ldrb r0, [r5, #9]	@ 0004ebd6 687a
.org 0x4ebd8
	lsls r0, r0, #2	@ 0004ebd8 8000
.org 0x4ebda
	adds r0, r0, r1	@ 0004ebda 4018
.org 0x4ebdc
	movs r1, #2	@ 0004ebdc 0221
.org 0x4ebde
	str r1, [r5, #12]	@ 0004ebde e960
.org 0x4ebe0
	ldr r0, [r0, #0]	@ 0004ebe0 0068
.org 0x4ebe2
	ldr r0, [r0, #8]	@ 0004ebe2 8068
.org 0x4ebe4
	str r0, [r5, #20]	@ 0004ebe4 6861
.org 0x4ebe6
	adds r0, r5, #0	@ 0004ebe6 281c
