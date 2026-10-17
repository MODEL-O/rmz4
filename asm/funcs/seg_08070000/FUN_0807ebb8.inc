@ FUN_0807ebb8  entry 0x0807ebb8  size 448
.thumb
.org 0x7ebb8
FUN_0807ebb8:
	push {r4, r5, r6, r7, lr}	@ 0007ebb8 f0b5
.org 0x7ebba
	mov r7, sl	@ 0007ebba 5746
.org 0x7ebbc
	mov r6, r9	@ 0007ebbc 4e46
.org 0x7ebbe
	mov r5, r8	@ 0007ebbe 4546
.org 0x7ebc0
	push {r5, r6, r7}	@ 0007ebc0 e0b4
.org 0x7ebc2
	adds r7, r0, #0	@ 0007ebc2 071c
.org 0x7ebc4
	movs r5, #250	@ 0007ebc4 fa25
.org 0x7ebc6
	lsls r5, r5, #4	@ 0007ebc6 2d01
.org 0x7ebc8
	ldr r0, [pc, #428]	@ 0007ebc8 6b48
.org 0x7ebca
	mov r8, r0	@ 0007ebca 8046
.org 0x7ebcc
	adds r0, r5, r0	@ 0007ebcc 2818
.org 0x7ebce
	ldr r1, [pc, #428]	@ 0007ebce 6b49
.org 0x7ebd0
	mov r9, r1	@ 0007ebd0 8946
.org 0x7ebd2
	movs r4, #200	@ 0007ebd2 c824
.org 0x7ebd4
	lsls r4, r4, #1	@ 0007ebd4 6400
.org 0x7ebd6
	adds r1, r1, r4	@ 0007ebd6 0919
.org 0x7ebd8
	ldrh r1, [r1, #0]	@ 0007ebd8 0988
.org 0x7ebda
	ldrh r2, [r0, #6]	@ 0007ebda c288
.org 0x7ebdc
	lsrs r2, r2, #6	@ 0007ebdc 9209
.org 0x7ebde
	subs r1, r1, r2	@ 0007ebde 891a
.org 0x7ebe0
	lsls r1, r1, #5	@ 0007ebe0 4901
.org 0x7ebe2
	movs r2, #128	@ 0007ebe2 8022
.org 0x7ebe4
	lsls r2, r2, #9	@ 0007ebe4 5202
.org 0x7ebe6
	adds r1, r1, r2	@ 0007ebe6 8918
.org 0x7ebe8
	bl 0x1d30	@ 0007ebe8 83f7a2f8
.org 0x7ebec
	ldr r0, [pc, #400]	@ 0007ebec 6448
.org 0x7ebee
	adds r5, r5, r0	@ 0007ebee 2d18
.org 0x7ebf0
	ldr r6, [pc, #400]	@ 0007ebf0 644e
.org 0x7ebf2
	adds r4, r6, r4	@ 0007ebf2 3419
.org 0x7ebf4
	ldrh r1, [r4, #0]	@ 0007ebf4 2188
.org 0x7ebf6
	ldrb r0, [r5, #7]	@ 0007ebf6 e879
.org 0x7ebf8
	subs r1, r1, r0	@ 0007ebf8 091a
.org 0x7ebfa
	lsls r1, r1, #5	@ 0007ebfa 4901
.org 0x7ebfc
	movs r2, #128	@ 0007ebfc 8022
.org 0x7ebfe
	lsls r2, r2, #2	@ 0007ebfe 9200
.org 0x7ec00
	mov sl, r2	@ 0007ec00 9246
.org 0x7ec02
	add r1, sl	@ 0007ec02 5144
.org 0x7ec04
	adds r0, r5, #0	@ 0007ec04 281c
.org 0x7ec06
	bl 0x2208	@ 0007ec06 83f7fffa
.org 0x7ec0a
	ldr r5, [pc, #380]	@ 0007ec0a 5f4d
.org 0x7ec0c
	mov r1, r8	@ 0007ec0c 4146
.org 0x7ec0e
	adds r0, r5, r1	@ 0007ec0e 6818
.org 0x7ec10
	movs r4, #201	@ 0007ec10 c924
.org 0x7ec12
	lsls r4, r4, #1	@ 0007ec12 6400
.org 0x7ec14
	mov r2, r9	@ 0007ec14 4a46
.org 0x7ec16
	adds r1, r2, r4	@ 0007ec16 1119
.org 0x7ec18
	ldrh r1, [r1, #0]	@ 0007ec18 0988
.org 0x7ec1a
	ldrh r2, [r0, #6]	@ 0007ec1a c288
.org 0x7ec1c
	lsrs r2, r2, #6	@ 0007ec1c 9209
.org 0x7ec1e
	subs r1, r1, r2	@ 0007ec1e 891a
.org 0x7ec20
	lsls r1, r1, #5	@ 0007ec20 4901
.org 0x7ec22
	movs r2, #128	@ 0007ec22 8022
.org 0x7ec24
	lsls r2, r2, #9	@ 0007ec24 5202
.org 0x7ec26
	adds r1, r1, r2	@ 0007ec26 8918
.org 0x7ec28
	bl 0x1d30	@ 0007ec28 83f782f8
.org 0x7ec2c
	ldr r0, [pc, #336]	@ 0007ec2c 5448
.org 0x7ec2e
	adds r5, r5, r0	@ 0007ec2e 2d18
.org 0x7ec30
	adds r4, r6, r4	@ 0007ec30 3419
.org 0x7ec32
	ldrh r1, [r4, #0]	@ 0007ec32 2188
.org 0x7ec34
	ldrb r0, [r5, #7]	@ 0007ec34 e879
.org 0x7ec36
	subs r1, r1, r0	@ 0007ec36 091a
.org 0x7ec38
	lsls r1, r1, #5	@ 0007ec38 4901
.org 0x7ec3a
	add r1, sl	@ 0007ec3a 5144
.org 0x7ec3c
	adds r0, r5, #0	@ 0007ec3c 281c
.org 0x7ec3e
	bl 0x2208	@ 0007ec3e 83f7e3fa
.org 0x7ec42
	movs r4, #240	@ 0007ec42 f024
.org 0x7ec44
	lsls r4, r4, #4	@ 0007ec44 2401
.org 0x7ec46
	add r8, r4	@ 0007ec46 a044
.org 0x7ec48
	movs r5, #192	@ 0007ec48 c025
.org 0x7ec4a
	lsls r5, r5, #1	@ 0007ec4a 6d00
.org 0x7ec4c
	add r9, r5	@ 0007ec4c a944
.org 0x7ec4e
	mov r2, r9	@ 0007ec4e 4a46
.org 0x7ec50
	ldrh r1, [r2, #0]	@ 0007ec50 1188
.org 0x7ec52
	mov r2, r8	@ 0007ec52 4246
.org 0x7ec54
	ldrh r0, [r2, #6]	@ 0007ec54 d088
.org 0x7ec56
	lsrs r0, r0, #6	@ 0007ec56 8009
.org 0x7ec58
	subs r1, r1, r0	@ 0007ec58 091a
.org 0x7ec5a
	lsls r1, r1, #5	@ 0007ec5a 4901
.org 0x7ec5c
	movs r0, #128	@ 0007ec5c 8020
.org 0x7ec5e
	lsls r0, r0, #9	@ 0007ec5e 4002
.org 0x7ec60
	adds r1, r1, r0	@ 0007ec60 0918
.org 0x7ec62
	mov r0, r8	@ 0007ec62 4046
.org 0x7ec64
	bl 0x1d30	@ 0007ec64 83f764f8
.org 0x7ec68
	ldr r1, [pc, #276]	@ 0007ec68 4549
.org 0x7ec6a
	adds r4, r4, r1	@ 0007ec6a 6418
.org 0x7ec6c
	adds r6, r6, r5	@ 0007ec6c 7619
.org 0x7ec6e
	ldrh r1, [r6, #0]	@ 0007ec6e 3188
.org 0x7ec70
	ldrb r0, [r4, #7]	@ 0007ec70 e079
.org 0x7ec72
	subs r1, r1, r0	@ 0007ec72 091a
.org 0x7ec74
	lsls r1, r1, #5	@ 0007ec74 4901
.org 0x7ec76
	add r1, sl	@ 0007ec76 5144
.org 0x7ec78
	adds r0, r4, #0	@ 0007ec78 201c
.org 0x7ec7a
	bl 0x2208	@ 0007ec7a 83f7c5fa
.org 0x7ec7e
	adds r0, r7, #0	@ 0007ec7e 381c
.org 0x7ec80
	bl 0x1cc9c	@ 0007ec80 9ef70cf8
.org 0x7ec84
	ldrb r1, [r7, #10]	@ 0007ec84 b97a
.org 0x7ec86
	movs r0, #1	@ 0007ec86 0120
.org 0x7ec88
	movs r6, #0	@ 0007ec88 0026
.org 0x7ec8a
	orrs r0, r1	@ 0007ec8a 0843
.org 0x7ec8c
	movs r1, #2	@ 0007ec8c 0221
.org 0x7ec8e
	orrs r0, r1	@ 0007ec8e 0843
.org 0x7ec90
	strb r0, [r7, #10]	@ 0007ec90 b872
.org 0x7ec92
	movs r1, #200	@ 0007ec92 c821
.org 0x7ec94
	lsls r1, r1, #8	@ 0007ec94 0902
.org 0x7ec96
	adds r0, r7, #0	@ 0007ec96 381c
.org 0x7ec98
	bl 0x1cf00	@ 0007ec98 9ef732f9
.org 0x7ec9c
	adds r0, r7, #0	@ 0007ec9c 381c
.org 0x7ec9e
	bl 0x1cff0	@ 0007ec9e 9ef7a7f9
.org 0x7eca2
	adds r0, r7, #0	@ 0007eca2 381c
.org 0x7eca4
	adds r0, #76	@ 0007eca4 4c30
.org 0x7eca6
	strb r6, [r0, #0]	@ 0007eca6 0670
.org 0x7eca8
	adds r2, r7, #0	@ 0007eca8 3a1c
.org 0x7ecaa
	adds r2, #74	@ 0007ecaa 4a32
.org 0x7ecac
	ldrb r1, [r2, #0]	@ 0007ecac 1178
.org 0x7ecae
	movs r0, #17	@ 0007ecae 1120
.org 0x7ecb0
	negs r0, r0	@ 0007ecb0 4042
.org 0x7ecb2
	ands r0, r1	@ 0007ecb2 0840
.org 0x7ecb4
	strb r0, [r2, #0]	@ 0007ecb4 1070
.org 0x7ecb6
	ldrb r1, [r7, #10]	@ 0007ecb6 b97a
.org 0x7ecb8
	movs r0, #239	@ 0007ecb8 ef20
.org 0x7ecba
	ands r0, r1	@ 0007ecba 0840
.org 0x7ecbc
	strb r0, [r7, #10]	@ 0007ecbc b872
.org 0x7ecbe
	ldr r1, [pc, #204]	@ 0007ecbe 3349
.org 0x7ecc0
	adds r0, r7, #0	@ 0007ecc0 381c
.org 0x7ecc2
	movs r2, #96	@ 0007ecc2 6022
.org 0x7ecc4
	bl 0x503cc	@ 0007ecc4 d1f782fb
.org 0x7ecc8
	ldr r1, [pc, #196]	@ 0007ecc8 3149
.org 0x7ecca
	adds r0, r7, #0	@ 0007ecca 381c
.org 0x7eccc
	adds r0, #116	@ 0007eccc 7430
.org 0x7ecce
	str r1, [r0, #36]	@ 0007ecce 4162
.org 0x7ecd0
	ldr r0, [r7, #84]	@ 0007ecd0 786d
.org 0x7ecd2
	ldr r1, [r7, #88]	@ 0007ecd2 b96d
.org 0x7ecd4
	bl 0x8988	@ 0007ecd4 89f758fe
.org 0x7ecd8
	adds r5, r0, #0	@ 0007ecd8 051c
.org 0x7ecda
	ldr r0, [r7, #84]	@ 0007ecda 786d
.org 0x7ecdc
	ldr r1, [r7, #88]	@ 0007ecdc b96d
.org 0x7ecde
	bl 0x8868	@ 0007ecde 89f7c3fd
.org 0x7ece2
	adds r4, r0, #0	@ 0007ece2 041c
.org 0x7ece4
	ldr r0, [r7, #84]	@ 0007ece4 786d
.org 0x7ece6
	ldr r1, [r7, #88]	@ 0007ece6 b96d
.org 0x7ece8
	bl 0x8988	@ 0007ece8 89f74efe
.org 0x7ecec
	subs r4, r4, r0	@ 0007ecec 241a
.org 0x7ecee
	asrs r4, r4, #1	@ 0007ecee 6410
.org 0x7ecf0
	adds r5, r5, r4	@ 0007ecf0 2d19
.org 0x7ecf2
	str r5, [r7, #84]	@ 0007ecf2 7d65
.org 0x7ecf4
	ldr r1, [r7, #88]	@ 0007ecf4 b96d
.org 0x7ecf6
	adds r0, r5, #0	@ 0007ecf6 281c
.org 0x7ecf8
	bl 0x8748	@ 0007ecf8 89f726fd
.org 0x7ecfc
	str r0, [r7, #88]	@ 0007ecfc b865
.org 0x7ecfe
	adds r1, r7, #0	@ 0007ecfe 391c
.org 0x7ed00
	adds r1, #180	@ 0007ed00 b431
.org 0x7ed02
	ldr r0, [r7, #84]	@ 0007ed02 786d
.org 0x7ed04
	str r0, [r1, #0]	@ 0007ed04 0860
.org 0x7ed06
	ldr r0, [r7, #88]	@ 0007ed06 b86d
.org 0x7ed08
	str r0, [r1, #4]	@ 0007ed08 4860
.org 0x7ed0a
	movs r0, #255	@ 0007ed0a ff20
.org 0x7ed0c
	strb r0, [r1, #31]	@ 0007ed0c c877
.org 0x7ed0e
	adds r0, r7, #0	@ 0007ed0e 381c
.org 0x7ed10
	adds r0, #212	@ 0007ed10 d430
.org 0x7ed12
	strb r6, [r0, #0]	@ 0007ed12 0670
.org 0x7ed14
	adds r1, #33	@ 0007ed14 2131
.org 0x7ed16
	movs r0, #255	@ 0007ed16 ff20
.org 0x7ed18
	strb r0, [r1, #0]	@ 0007ed18 0870
.org 0x7ed1a
	adds r0, r7, #0	@ 0007ed1a 381c
.org 0x7ed1c
	adds r0, #214	@ 0007ed1c d630
.org 0x7ed1e
	strb r6, [r0, #0]	@ 0007ed1e 0670
.org 0x7ed20
	adds r0, #1	@ 0007ed20 0130
.org 0x7ed22
	strb r6, [r0, #0]	@ 0007ed22 0670
.org 0x7ed24
	movs r4, #0	@ 0007ed24 0024
.org 0x7ed26
	adds r5, r7, #0	@ 0007ed26 3d1c
.org 0x7ed28
	adds r5, #216	@ 0007ed28 d835
.org 0x7ed2a
	adds r0, r5, r4	@ 0007ed2a 2819
.org 0x7ed2c
	strb r6, [r0, #0]	@ 0007ed2c 0670
.org 0x7ed2e
	lsls r1, r4, #24	@ 0007ed2e 2106
.org 0x7ed30
	lsrs r1, r1, #24	@ 0007ed30 090e
.org 0x7ed32
	adds r0, r7, #0	@ 0007ed32 381c
.org 0x7ed34
	movs r2, #0	@ 0007ed34 0022
.org 0x7ed36
	bl 0x101424	@ 0007ed36 82f075fb
.org 0x7ed3a
	adds r4, #1	@ 0007ed3a 0134
.org 0x7ed3c
	cmp r4, #4	@ 0007ed3c 042c
.org 0x7ed3e
	ble.n 0x7ed2a	@ 0007ed3e f4dd
.org 0x7ed40
	adds r0, r7, #0	@ 0007ed40 381c
.org 0x7ed42
	adds r0, #180	@ 0007ed42 b430
.org 0x7ed44
	movs r2, #0	@ 0007ed44 0022
.org 0x7ed46
	str r2, [r0, #8]	@ 0007ed46 8260
.org 0x7ed48
	str r2, [r0, #12]	@ 0007ed48 c260
.org 0x7ed4a
	str r2, [r0, #16]	@ 0007ed4a 0261
.org 0x7ed4c
	str r2, [r0, #20]	@ 0007ed4c 4261
.org 0x7ed4e
	str r2, [r0, #24]	@ 0007ed4e 8261
.org 0x7ed50
	ldr r1, [pc, #64]	@ 0007ed50 1049
.org 0x7ed52
	ldrb r0, [r7, #9]	@ 0007ed52 787a
.org 0x7ed54
	lsls r0, r0, #2	@ 0007ed54 8000
.org 0x7ed56
	adds r0, r0, r1	@ 0007ed56 4018
.org 0x7ed58
	movs r1, #1	@ 0007ed58 0121
.org 0x7ed5a
	str r1, [r7, #12]	@ 0007ed5a f960
.org 0x7ed5c
	ldr r0, [r0, #0]	@ 0007ed5c 0068
.org 0x7ed5e
	ldr r0, [r0, #4]	@ 0007ed5e 4068
.org 0x7ed60
	str r0, [r7, #20]	@ 0007ed60 7861
.org 0x7ed62
	strb r2, [r7, #13]	@ 0007ed62 7a73
.org 0x7ed64
	adds r0, r7, #0	@ 0007ed64 381c
.org 0x7ed66
	bl 0x7ed98	@ 0007ed66 00f017f8
.org 0x7ed6a
	pop {r3, r4, r5}	@ 0007ed6a 38bc
.org 0x7ed6c
	mov r8, r3	@ 0007ed6c 9846
.org 0x7ed6e
	mov r9, r4	@ 0007ed6e a146
.org 0x7ed70
	mov sl, r5	@ 0007ed70 aa46
.org 0x7ed72
	pop {r4, r5, r6, r7}	@ 0007ed72 f0bc
.org 0x7ed74
	pop {r0}	@ 0007ed74 01bc
.org 0x7ed76
	bx r0	@ 0007ed76 0047
