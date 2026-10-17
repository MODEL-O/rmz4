@ FUN_0805ea34  entry 0x0805ea34  size 488
.thumb
.org 0x5ea34
FUN_0805ea34:
	push {r4, r5, r6, r7, lr}	@ 0005ea34 f0b5
.org 0x5ea36
	mov r7, sl	@ 0005ea36 5746
.org 0x5ea38
	mov r6, r9	@ 0005ea38 4e46
.org 0x5ea3a
	mov r5, r8	@ 0005ea3a 4546
.org 0x5ea3c
	push {r5, r6, r7}	@ 0005ea3c e0b4
.org 0x5ea3e
	sub sp, #44	@ 0005ea3e 8bb0
.org 0x5ea40
	adds r7, r0, #0	@ 0005ea40 071c
.org 0x5ea42
	ldr r1, [pc, #380]	@ 0005ea42 5f49
.org 0x5ea44
	mov r0, sp	@ 0005ea44 6846
.org 0x5ea46
	movs r2, #6	@ 0005ea46 0622
.org 0x5ea48
	bl 0x129258	@ 0005ea48 caf006fc
.org 0x5ea4c
	add r4, sp, #8	@ 0005ea4c 02ac
.org 0x5ea4e
	ldr r1, [pc, #372]	@ 0005ea4e 5d49
.org 0x5ea50
	adds r0, r4, #0	@ 0005ea50 201c
.org 0x5ea52
	movs r2, #16	@ 0005ea52 1022
.org 0x5ea54
	bl 0x129258	@ 0005ea54 caf000fc
.org 0x5ea58
	ldrb r6, [r7, #16]	@ 0005ea58 3e7c
.org 0x5ea5a
	ldrb r0, [r7, #10]	@ 0005ea5a b87a
.org 0x5ea5c
	lsrs r0, r0, #4	@ 0005ea5c 0009
.org 0x5ea5e
	mov r9, r0	@ 0005ea5e 8146
.org 0x5ea60
	movs r5, #1	@ 0005ea60 0125
.org 0x5ea62
	ands r0, r5	@ 0005ea62 2840
.org 0x5ea64
	mov r9, r0	@ 0005ea64 8146
.org 0x5ea66
	ldrb r0, [r7, #15]	@ 0005ea66 f87b
.org 0x5ea68
	mov r8, r4	@ 0005ea68 a046
.org 0x5ea6a
	cmp r0, #0	@ 0005ea6a 0028
.org 0x5ea6c
	bne.n 0x5eac0	@ 0005ea6c 28d1
.org 0x5ea6e
	movs r0, #92	@ 0005ea6e 5c20
.org 0x5ea70
	bl 0x2b10	@ 0005ea70 a4f74ef8
.org 0x5ea74
	movs r0, #83	@ 0005ea74 5320
.org 0x5ea76
	bl 0x2b10	@ 0005ea76 a4f74bf8
.org 0x5ea7a
	ldr r3, [pc, #332]	@ 0005ea7a 534b
.org 0x5ea7c
	ldrh r2, [r3, #8]	@ 0005ea7c 1a89
.org 0x5ea7e
	adds r0, r5, #0	@ 0005ea7e 281c
.org 0x5ea80
	ands r0, r2	@ 0005ea80 1040
.org 0x5ea82
	cmp r0, #0	@ 0005ea82 0028
.org 0x5ea84
	beq.n 0x5ea9a	@ 0005ea84 09d0
.org 0x5ea86
	ldrb r1, [r3, #18]	@ 0005ea86 997c
.org 0x5ea88
	adds r0, r5, #0	@ 0005ea88 281c
.org 0x5ea8a
	ands r0, r1	@ 0005ea8a 0840
.org 0x5ea8c
	cmp r0, #0	@ 0005ea8c 0028
.org 0x5ea8e
	bne.n 0x5ea9a	@ 0005ea8e 04d1
.org 0x5ea90
	ldr r0, [pc, #312]	@ 0005ea90 4e48
.org 0x5ea92
	ands r0, r2	@ 0005ea92 1040
.org 0x5ea94
	movs r1, #16	@ 0005ea94 1021
.org 0x5ea96
	orrs r0, r1	@ 0005ea96 0843
.org 0x5ea98
	strh r0, [r3, #8]	@ 0005ea98 1881
.org 0x5ea9a
	adds r1, r7, #0	@ 0005ea9a 391c
.org 0x5ea9c
	adds r1, #37	@ 0005ea9c 2531
.org 0x5ea9e
	movs r4, #0	@ 0005ea9e 0024
.org 0x5eaa0
	movs r0, #15	@ 0005eaa0 0f20
.org 0x5eaa2
	strb r0, [r1, #0]	@ 0005eaa2 0870
.org 0x5eaa4
	lsls r0, r6, #1	@ 0005eaa4 7000
.org 0x5eaa6
	add r0, sp	@ 0005eaa6 6844
.org 0x5eaa8
	ldrb r1, [r0, #0]	@ 0005eaa8 0178
.org 0x5eaaa
	adds r0, r7, #0	@ 0005eaaa 381c
.org 0x5eaac
	bl 0x5ee6c	@ 0005eaac 00f0def9
.org 0x5eab0
	movs r0, #128	@ 0005eab0 8020
.org 0x5eab2
	lsls r0, r0, #1	@ 0005eab2 4000
.org 0x5eab4
	str r0, [r7, #96]	@ 0005eab4 3866
.org 0x5eab6
	str r4, [r7, #104]	@ 0005eab6 bc66
.org 0x5eab8
	strb r4, [r7, #18]	@ 0005eab8 bc74
.org 0x5eaba
	ldrb r0, [r7, #15]	@ 0005eaba f87b
.org 0x5eabc
	adds r0, #1	@ 0005eabc 0130
.org 0x5eabe
	strb r0, [r7, #15]	@ 0005eabe f873
.org 0x5eac0
	adds r0, r7, #0	@ 0005eac0 381c
.org 0x5eac2
	bl 0x1cff0	@ 0005eac2 bef795fa
.org 0x5eac6
	adds r0, r7, #0	@ 0005eac6 381c
.org 0x5eac8
	adds r0, #116	@ 0005eac8 7430
.org 0x5eaca
	ldr r4, [pc, #260]	@ 0005eaca 414c
.org 0x5eacc
	ldr r3, [pc, #260]	@ 0005eacc 414b
.org 0x5eace
	adds r1, r7, #0	@ 0005eace 391c
.org 0x5ead0
	adds r1, #184	@ 0005ead0 b831
.org 0x5ead2
	ldrb r2, [r1, #0]	@ 0005ead2 0a78
.org 0x5ead4
	lsls r1, r2, #1	@ 0005ead4 5100
.org 0x5ead6
	adds r1, r1, r3	@ 0005ead6 c918
.org 0x5ead8
	ldrh r1, [r1, #0]	@ 0005ead8 0988
.org 0x5eada
	lsls r1, r1, #2	@ 0005eada 8900
.org 0x5eadc
	adds r1, r1, r4	@ 0005eadc 0919
.org 0x5eade
	adds r3, r7, #0	@ 0005eade 3b1c
.org 0x5eae0
	adds r3, #113	@ 0005eae0 7133
.org 0x5eae2
	movs r4, #0	@ 0005eae2 0024
.org 0x5eae4
	ldrsb r4, [r3, r4]	@ 0005eae4 1c57
.org 0x5eae6
	ldr r1, [r1, #0]	@ 0005eae6 0968
.org 0x5eae8
	lsls r3, r4, #2	@ 0005eae8 a300
.org 0x5eaea
	adds r3, r3, r1	@ 0005eaea 5b18
.org 0x5eaec
	ldr r1, [pc, #232]	@ 0005eaec 3a49
.org 0x5eaee
	lsls r2, r2, #2	@ 0005eaee 9200
.org 0x5eaf0
	adds r2, r2, r1	@ 0005eaf0 5218
.org 0x5eaf2
	ldr r1, [r2, #0]	@ 0005eaf2 1168
.org 0x5eaf4
	adds r1, r1, r4	@ 0005eaf4 0919
.org 0x5eaf6
	ldrb r1, [r1, #0]	@ 0005eaf6 0978
.org 0x5eaf8
	lsls r2, r1, #1	@ 0005eaf8 4a00
.org 0x5eafa
	adds r2, r2, r1	@ 0005eafa 5218
.org 0x5eafc
	lsls r2, r2, #3	@ 0005eafc d200
.org 0x5eafe
	ldr r1, [r3, #0]	@ 0005eafe 1968
.org 0x5eb00
	adds r1, r1, r2	@ 0005eb00 8918
.org 0x5eb02
	bl 0x5784	@ 0005eb02 a6f73ffe
.org 0x5eb06
	ldr r1, [r7, #88]	@ 0005eb06 b96d
.org 0x5eb08
	ldr r0, [r7, #96]	@ 0005eb08 386e
.org 0x5eb0a
	adds r1, r1, r0	@ 0005eb0a 0918
.org 0x5eb0c
	mov ip, r1	@ 0005eb0c 8c46
.org 0x5eb0e
	str r1, [r7, #88]	@ 0005eb0e b965
.org 0x5eb10
	ldrb r0, [r7, #18]	@ 0005eb10 b87c
.org 0x5eb12
	adds r2, r0, #1	@ 0005eb12 421c
.org 0x5eb14
	movs r1, #0	@ 0005eb14 0021
.org 0x5eb16
	mov sl, r1	@ 0005eb16 8a46
.org 0x5eb18
	strb r2, [r7, #18]	@ 0005eb18 ba74
.org 0x5eb1a
	movs r1, #255	@ 0005eb1a ff21
.org 0x5eb1c
	adds r0, r2, #0	@ 0005eb1c 101c
.org 0x5eb1e
	ands r0, r1	@ 0005eb1e 0840
.org 0x5eb20
	movs r1, #7	@ 0005eb20 0721
.org 0x5eb22
	ands r0, r1	@ 0005eb22 0840
.org 0x5eb24
	cmp r0, #0	@ 0005eb24 0028
.org 0x5eb26
	bne.n 0x5eba6	@ 0005eb26 3ed1
.org 0x5eb28
	lsls r1, r2, #24	@ 0005eb28 1106
.org 0x5eb2a
	lsrs r1, r1, #27	@ 0005eb2a c90e
.org 0x5eb2c
	movs r0, #3	@ 0005eb2c 0320
.org 0x5eb2e
	ands r1, r0	@ 0005eb2e 0140
.org 0x5eb30
	lsls r1, r1, #2	@ 0005eb30 8900
.org 0x5eb32
	mov r2, r8	@ 0005eb32 4246
.org 0x5eb34
	adds r0, r2, r1	@ 0005eb34 5018
.org 0x5eb36
	movs r3, #0	@ 0005eb36 0023
.org 0x5eb38
	ldrsh r2, [r0, r3]	@ 0005eb38 c25e
.org 0x5eb3a
	ldr r4, [pc, #160]	@ 0005eb3a 284c
.org 0x5eb3c
	mov r8, r4	@ 0005eb3c a046
.org 0x5eb3e
	ldr r0, [r4, #0]	@ 0005eb3e 2068
.org 0x5eb40
	ldr r5, [pc, #156]	@ 0005eb40 274d
.org 0x5eb42
	muls r0, r5	@ 0005eb42 6843
.org 0x5eb44
	ldr r3, [pc, #156]	@ 0005eb44 274b
.org 0x5eb46
	adds r0, r0, r3	@ 0005eb46 c018
.org 0x5eb48
	lsls r0, r0, #1	@ 0005eb48 4000
.org 0x5eb4a
	lsrs r6, r0, #1	@ 0005eb4a 4608
.org 0x5eb4c
	str r6, [sp, #40]	@ 0005eb4c 0a96
.org 0x5eb4e
	lsrs r0, r0, #17	@ 0005eb4e 400c
.org 0x5eb50
	movs r4, #15	@ 0005eb50 0f24
.org 0x5eb52
	ands r0, r4	@ 0005eb52 2040
.org 0x5eb54
	subs r0, #7	@ 0005eb54 0738
.org 0x5eb56
	lsls r0, r0, #8	@ 0005eb56 0002
.org 0x5eb58
	adds r0, r2, r0	@ 0005eb58 1018
.org 0x5eb5a
	str r0, [sp, #32]	@ 0005eb5a 0890
.org 0x5eb5c
	mov r2, r9	@ 0005eb5c 4a46
.org 0x5eb5e
	lsls r0, r2, #1	@ 0005eb5e 5000
.org 0x5eb60
	subs r0, #1	@ 0005eb60 0138
.org 0x5eb62
	ldr r2, [sp, #32]	@ 0005eb62 089a
.org 0x5eb64
	adds r6, r2, #0	@ 0005eb64 161c
.org 0x5eb66
	muls r6, r0	@ 0005eb66 4643
.org 0x5eb68
	str r6, [sp, #32]	@ 0005eb68 0896
.org 0x5eb6a
	mov r0, sp	@ 0005eb6a 6846
.org 0x5eb6c
	adds r0, #10	@ 0005eb6c 0a30
.org 0x5eb6e
	adds r0, r0, r1	@ 0005eb6e 4018
.org 0x5eb70
	movs r6, #0	@ 0005eb70 0026
.org 0x5eb72
	ldrsh r2, [r0, r6]	@ 0005eb72 825f
.org 0x5eb74
	ldr r1, [sp, #40]	@ 0005eb74 0a99
.org 0x5eb76
	adds r0, r1, #0	@ 0005eb76 081c
.org 0x5eb78
	muls r0, r5	@ 0005eb78 6843
.org 0x5eb7a
	adds r0, r0, r3	@ 0005eb7a c018
.org 0x5eb7c
	lsls r0, r0, #1	@ 0005eb7c 4000
.org 0x5eb7e
	lsrs r1, r0, #1	@ 0005eb7e 4108
.org 0x5eb80
	mov r3, r8	@ 0005eb80 4346
.org 0x5eb82
	str r1, [r3, #0]	@ 0005eb82 1960
.org 0x5eb84
	lsrs r0, r0, #17	@ 0005eb84 400c
.org 0x5eb86
	ands r0, r4	@ 0005eb86 2040
.org 0x5eb88
	subs r0, #7	@ 0005eb88 0738
.org 0x5eb8a
	lsls r0, r0, #8	@ 0005eb8a 0002
.org 0x5eb8c
	adds r0, r2, r0	@ 0005eb8c 1018
.org 0x5eb8e
	str r0, [sp, #36]	@ 0005eb8e 0990
.org 0x5eb90
	ldr r0, [r7, #84]	@ 0005eb90 786d
.org 0x5eb92
	ldr r4, [sp, #32]	@ 0005eb92 089c
.org 0x5eb94
	adds r0, r0, r4	@ 0005eb94 0019
.org 0x5eb96
	str r0, [sp, #24]	@ 0005eb96 0690
.org 0x5eb98
	ldr r0, [sp, #36]	@ 0005eb98 0998
.org 0x5eb9a
	add r0, ip	@ 0005eb9a 6044
.org 0x5eb9c
	add r1, sp, #24	@ 0005eb9c 06a9
.org 0x5eb9e
	str r0, [r1, #4]	@ 0005eb9e 4860
.org 0x5eba0
	movs r0, #1	@ 0005eba0 0120
.org 0x5eba2
	bl 0xd0c88	@ 0005eba2 72f071f8
.org 0x5eba6
	ldr r0, [r7, #104]	@ 0005eba6 b86e
.org 0x5eba8
	adds r1, r0, #1	@ 0005eba8 411c
.org 0x5ebaa
	str r1, [r7, #104]	@ 0005ebaa b966
.org 0x5ebac
	cmp r1, #127	@ 0005ebac 7f29
.org 0x5ebae
	ble.n 0x5ebe8	@ 0005ebae 1bdd
.org 0x5ebb0
	movs r0, #3	@ 0005ebb0 0320
.org 0x5ebb2
	ands r1, r0	@ 0005ebb2 0140
.org 0x5ebb4
	cmp r1, #0	@ 0005ebb4 0029
.org 0x5ebb6
	bne.n 0x5ebf8	@ 0005ebb6 1fd1
.org 0x5ebb8
	ldrb r0, [r7, #10]	@ 0005ebb8 b87a
.org 0x5ebba
	movs r1, #1	@ 0005ebba 0121
.org 0x5ebbc
	orrs r0, r1	@ 0005ebbc 0843
.org 0x5ebbe
	b.n 0x5ebfe	@ 0005ebbe 1ee0
.org 0x5ebc0
	.byte 0xc2,0x97,0x12,0x08	@ 0005ebc0 data
.org 0x5ebc4
	.byte 0xc8,0x97,0x12,0x08	@ 0005ebc4 data
.org 0x5ebc8
	.byte 0x10,0xe9,0x02,0x02	@ 0005ebc8 data
.org 0x5ebcc
	.byte 0xfe,0xff,0x00,0x00	@ 0005ebcc data
.org 0x5ebd0
	.byte 0xa8,0xa7,0x85,0x08	@ 0005ebd0 data
.org 0x5ebd4
	.byte 0x10,0xa9,0x85,0x08	@ 0005ebd4 data
.org 0x5ebd8
	.byte 0x44,0xa8,0x85,0x08	@ 0005ebd8 data
.org 0x5ebdc
	.byte 0x38,0xdc,0x02,0x02	@ 0005ebdc data
.org 0x5ebe0
	.byte 0xfd,0x43,0x03,0x00	@ 0005ebe0 data
.org 0x5ebe4
	.byte 0xc3,0x9e,0x26,0x00	@ 0005ebe4 data
.org 0x5ebe8
	movs r0, #1	@ 0005ebe8 0120
.org 0x5ebea
	ands r1, r0	@ 0005ebea 0140
.org 0x5ebec
	cmp r1, #0	@ 0005ebec 0029
.org 0x5ebee
	bne.n 0x5ebf8	@ 0005ebee 03d1
.org 0x5ebf0
	ldrb r0, [r7, #10]	@ 0005ebf0 b87a
.org 0x5ebf2
	movs r1, #1	@ 0005ebf2 0121
.org 0x5ebf4
	orrs r0, r1	@ 0005ebf4 0843
.org 0x5ebf6
	b.n 0x5ebfe	@ 0005ebf6 02e0
.org 0x5ebf8
	ldrb r1, [r7, #10]	@ 0005ebf8 b97a
.org 0x5ebfa
	movs r0, #254	@ 0005ebfa fe20
.org 0x5ebfc
	ands r0, r1	@ 0005ebfc 0840
.org 0x5ebfe
	strb r0, [r7, #10]	@ 0005ebfe b872
.org 0x5ec00
	ldr r3, [pc, #64]	@ 0005ec00 104b
.org 0x5ec02
	ldr r0, [r3, #60]	@ 0005ec02 d86b
.org 0x5ec04
	ldr r6, [pc, #64]	@ 0005ec04 104e
.org 0x5ec06
	adds r0, r0, r6	@ 0005ec06 8019
.org 0x5ec08
	ldr r1, [r7, #88]	@ 0005ec08 b96d
.org 0x5ec0a
	cmp r1, r0	@ 0005ec0a 8142
.org 0x5ec0c
	ble.n 0x5ec34	@ 0005ec0c 12dd
.org 0x5ec0e
	subs r3, #232	@ 0005ec0e e83b
.org 0x5ec10
	ldrb r2, [r3, #18]	@ 0005ec10 9a7c
.org 0x5ec12
	movs r0, #2	@ 0005ec12 0220
.org 0x5ec14
	movs r1, #0	@ 0005ec14 0021
.org 0x5ec16
	orrs r0, r2	@ 0005ec16 1043
.org 0x5ec18
	strb r0, [r3, #18]	@ 0005ec18 9874
.org 0x5ec1a
	adds r0, r7, #0	@ 0005ec1a 381c
