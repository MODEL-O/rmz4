@ FUN_08053a98  entry 0x08053a98  size 448
.thumb
.org 0x53a98
FUN_08053a98:
	push {r4, r5, r6, r7, lr}	@ 00053a98 f0b5
.org 0x53a9a
	mov r7, sl	@ 00053a9a 5746
.org 0x53a9c
	mov r6, r9	@ 00053a9c 4e46
.org 0x53a9e
	mov r5, r8	@ 00053a9e 4546
.org 0x53aa0
	push {r5, r6, r7}	@ 00053aa0 e0b4
.org 0x53aa2
	adds r7, r0, #0	@ 00053aa2 071c
.org 0x53aa4
	movs r4, #0	@ 00053aa4 0024
.org 0x53aa6
	ldr r1, [pc, #432]	@ 00053aa6 6c49
.org 0x53aa8
	ldrb r0, [r7, #9]	@ 00053aa8 787a
.org 0x53aaa
	lsls r0, r0, #2	@ 00053aaa 8000
.org 0x53aac
	adds r0, r0, r1	@ 00053aac 4018
.org 0x53aae
	movs r1, #1	@ 00053aae 0121
.org 0x53ab0
	str r1, [r7, #12]	@ 00053ab0 f960
.org 0x53ab2
	ldr r0, [r0, #0]	@ 00053ab2 0068
.org 0x53ab4
	ldr r0, [r0, #4]	@ 00053ab4 4068
.org 0x53ab6
	str r0, [r7, #20]	@ 00053ab6 7861
.org 0x53ab8
	movs r6, #1	@ 00053ab8 0126
.org 0x53aba
	strb r1, [r7, #13]	@ 00053aba 7973
.org 0x53abc
	strb r4, [r7, #14]	@ 00053abc bc73
.org 0x53abe
	strb r4, [r7, #15]	@ 00053abe fc73
.org 0x53ac0
	ldrb r0, [r7, #10]	@ 00053ac0 b87a
.org 0x53ac2
	orrs r0, r6	@ 00053ac2 3043
.org 0x53ac4
	movs r5, #2	@ 00053ac4 0225
.org 0x53ac6
	orrs r0, r5	@ 00053ac6 2843
.org 0x53ac8
	strb r0, [r7, #10]	@ 00053ac8 b872
.org 0x53aca
	ldr r0, [r7, #84]	@ 00053aca 786d
.org 0x53acc
	ldr r1, [r7, #88]	@ 00053acc b96d
.org 0x53ace
	bl 0x8534	@ 00053ace b4f731fd
.org 0x53ad2
	adds r2, r7, #0	@ 00053ad2 3a1c
.org 0x53ad4
	adds r2, #188	@ 00053ad4 bc32
.org 0x53ad6
	ldr r3, [pc, #388]	@ 00053ad6 614b
.org 0x53ad8
	adds r1, r0, r3	@ 00053ad8 c118
.org 0x53ada
	str r1, [r2, #0]	@ 00053ada 1160
.org 0x53adc
	ldr r1, [pc, #384]	@ 00053adc 6049
.org 0x53ade
	adds r0, r0, r1	@ 00053ade 4018
.org 0x53ae0
	str r0, [r7, #88]	@ 00053ae0 b865
.org 0x53ae2
	adds r1, r7, #0	@ 00053ae2 391c
.org 0x53ae4
	adds r1, #192	@ 00053ae4 c031
.org 0x53ae6
	ldr r0, [r7, #84]	@ 00053ae6 786d
.org 0x53ae8
	str r0, [r1, #0]	@ 00053ae8 0860
.org 0x53aea
	adds r0, r7, #0	@ 00053aea 381c
.org 0x53aec
	adds r0, #181	@ 00053aec b530
.org 0x53aee
	strb r4, [r0, #0]	@ 00053aee 0470
.org 0x53af0
	adds r0, #2	@ 00053af0 0230
.org 0x53af2
	strb r4, [r0, #0]	@ 00053af2 0470
.org 0x53af4
	subs r1, #8	@ 00053af4 0839
.org 0x53af6
	ldr r0, [r7, #88]	@ 00053af6 b86d
.org 0x53af8
	ldr r2, [pc, #360]	@ 00053af8 5a4a
.org 0x53afa
	adds r0, r0, r2	@ 00053afa 8018
.org 0x53afc
	str r0, [r1, #0]	@ 00053afc 0860
.org 0x53afe
	subs r1, #2	@ 00053afe 0239
.org 0x53b00
	ldrb r0, [r1, #0]	@ 00053b00 0878
.org 0x53b02
	orrs r0, r6	@ 00053b02 3043
.org 0x53b04
	orrs r0, r5	@ 00053b04 2843
.org 0x53b06
	strb r0, [r1, #0]	@ 00053b06 0870
.org 0x53b08
	str r4, [r7, #44]	@ 00053b08 fc62
.org 0x53b0a
	movs r4, #220	@ 00053b0a dc24
.org 0x53b0c
	lsls r4, r4, #2	@ 00053b0c a400
.org 0x53b0e
	ldr r5, [pc, #344]	@ 00053b0e 564d
.org 0x53b10
	adds r0, r4, r5	@ 00053b10 6019
.org 0x53b12
	ldr r3, [pc, #344]	@ 00053b12 564b
.org 0x53b14
	mov sl, r3	@ 00053b14 9a46
.org 0x53b16
	mov r1, sl	@ 00053b16 5146
.org 0x53b18
	adds r1, #88	@ 00053b18 5831
.org 0x53b1a
	ldrh r1, [r1, #0]	@ 00053b1a 0988
.org 0x53b1c
	ldrh r2, [r0, #6]	@ 00053b1c c288
.org 0x53b1e
	lsrs r2, r2, #6	@ 00053b1e 9209
.org 0x53b20
	subs r1, r1, r2	@ 00053b20 891a
.org 0x53b22
	lsls r1, r1, #5	@ 00053b22 4901
.org 0x53b24
	movs r2, #128	@ 00053b24 8022
.org 0x53b26
	lsls r2, r2, #9	@ 00053b26 5202
.org 0x53b28
	adds r1, r1, r2	@ 00053b28 8918
.org 0x53b2a
	bl 0x1d30	@ 00053b2a aef701f9
.org 0x53b2e
	ldr r3, [pc, #320]	@ 00053b2e 504b
.org 0x53b30
	mov r9, r3	@ 00053b30 9946
.org 0x53b32
	add r4, r9	@ 00053b32 4c44
.org 0x53b34
	ldr r6, [pc, #316]	@ 00053b34 4f4e
.org 0x53b36
	adds r0, r6, #0	@ 00053b36 301c
.org 0x53b38
	adds r0, #88	@ 00053b38 5830
.org 0x53b3a
	ldrh r1, [r0, #0]	@ 00053b3a 0188
.org 0x53b3c
	ldrb r0, [r4, #7]	@ 00053b3c e079
.org 0x53b3e
	subs r1, r1, r0	@ 00053b3e 091a
.org 0x53b40
	lsls r1, r1, #5	@ 00053b40 4901
.org 0x53b42
	movs r0, #128	@ 00053b42 8020
.org 0x53b44
	lsls r0, r0, #2	@ 00053b44 8000
.org 0x53b46
	mov r8, r0	@ 00053b46 8046
.org 0x53b48
	add r1, r8	@ 00053b48 4144
.org 0x53b4a
	adds r0, r4, #0	@ 00053b4a 201c
.org 0x53b4c
	bl 0x2208	@ 00053b4c aef75cfb
.org 0x53b50
	movs r4, #225	@ 00053b50 e124
.org 0x53b52
	lsls r4, r4, #2	@ 00053b52 a400
.org 0x53b54
	adds r0, r4, r5	@ 00053b54 6019
.org 0x53b56
	mov r1, sl	@ 00053b56 5146
.org 0x53b58
	adds r1, #90	@ 00053b58 5a31
.org 0x53b5a
	ldrh r1, [r1, #0]	@ 00053b5a 0988
.org 0x53b5c
	ldrh r2, [r0, #6]	@ 00053b5c c288
.org 0x53b5e
	lsrs r2, r2, #6	@ 00053b5e 9209
.org 0x53b60
	subs r1, r1, r2	@ 00053b60 891a
.org 0x53b62
	lsls r1, r1, #5	@ 00053b62 4901
.org 0x53b64
	movs r2, #128	@ 00053b64 8022
.org 0x53b66
	lsls r2, r2, #9	@ 00053b66 5202
.org 0x53b68
	adds r1, r1, r2	@ 00053b68 8918
.org 0x53b6a
	bl 0x1d30	@ 00053b6a aef7e1f8
.org 0x53b6e
	add r4, r9	@ 00053b6e 4c44
.org 0x53b70
	adds r0, r6, #0	@ 00053b70 301c
.org 0x53b72
	adds r0, #90	@ 00053b72 5a30
.org 0x53b74
	ldrh r1, [r0, #0]	@ 00053b74 0188
.org 0x53b76
	ldrb r0, [r4, #7]	@ 00053b76 e079
.org 0x53b78
	subs r1, r1, r0	@ 00053b78 091a
.org 0x53b7a
	lsls r1, r1, #5	@ 00053b7a 4901
.org 0x53b7c
	add r1, r8	@ 00053b7c 4144
.org 0x53b7e
	adds r0, r4, #0	@ 00053b7e 201c
.org 0x53b80
	bl 0x2208	@ 00053b80 aef742fb
.org 0x53b84
	mov r1, sl	@ 00053b84 5146
.org 0x53b86
	adds r1, #162	@ 00053b86 a231
.org 0x53b88
	ldr r0, [pc, #236]	@ 00053b88 3b48
.org 0x53b8a
	strh r0, [r1, #0]	@ 00053b8a 0880
.org 0x53b8c
	adds r6, #162	@ 00053b8c a236
.org 0x53b8e
	movs r0, #6	@ 00053b8e 0620
.org 0x53b90
	strh r0, [r6, #0]	@ 00053b90 3080
.org 0x53b92
	ldr r4, [pc, #232]	@ 00053b92 3a4c
.org 0x53b94
	adds r5, r4, r5	@ 00053b94 6519
.org 0x53b96
	ldrh r1, [r1, #0]	@ 00053b96 0988
.org 0x53b98
	ldrh r0, [r5, #6]	@ 00053b98 e888
.org 0x53b9a
	lsrs r0, r0, #6	@ 00053b9a 8009
.org 0x53b9c
	subs r1, r1, r0	@ 00053b9c 091a
.org 0x53b9e
	lsls r1, r1, #5	@ 00053b9e 4901
.org 0x53ba0
	movs r3, #128	@ 00053ba0 8023
.org 0x53ba2
	lsls r3, r3, #9	@ 00053ba2 5b02
.org 0x53ba4
	adds r1, r1, r3	@ 00053ba4 c918
.org 0x53ba6
	adds r0, r5, #0	@ 00053ba6 281c
.org 0x53ba8
	bl 0x1d30	@ 00053ba8 aef7c2f8
.org 0x53bac
	add r4, r9	@ 00053bac 4c44
.org 0x53bae
	ldrh r1, [r6, #0]	@ 00053bae 3188
.org 0x53bb0
	ldrb r0, [r4, #7]	@ 00053bb0 e079
.org 0x53bb2
	subs r1, r1, r0	@ 00053bb2 091a
.org 0x53bb4
	lsls r1, r1, #5	@ 00053bb4 4901
.org 0x53bb6
	add r1, r8	@ 00053bb6 4144
.org 0x53bb8
	adds r0, r4, #0	@ 00053bb8 201c
.org 0x53bba
	bl 0x2208	@ 00053bba aef725fb
.org 0x53bbe
	adds r0, r7, #0	@ 00053bbe 381c
.org 0x53bc0
	bl 0x1cc9c	@ 00053bc0 c9f76cf8
.org 0x53bc4
	adds r2, r7, #0	@ 00053bc4 3a1c
.org 0x53bc6
	adds r2, #73	@ 00053bc6 4932
.org 0x53bc8
	ldrb r0, [r2, #0]	@ 00053bc8 1078
.org 0x53bca
	movs r1, #12	@ 00053bca 0c21
.org 0x53bcc
	orrs r0, r1	@ 00053bcc 0843
.org 0x53bce
	strb r0, [r2, #0]	@ 00053bce 1070
.org 0x53bd0
	adds r1, r7, #0	@ 00053bd0 391c
.org 0x53bd2
	adds r1, #37	@ 00053bd2 2531
.org 0x53bd4
	movs r0, #27	@ 00053bd4 1b20
.org 0x53bd6
	strb r0, [r1, #0]	@ 00053bd6 0870
.org 0x53bd8
	adds r0, r7, #0	@ 00053bd8 381c
.org 0x53bda
	adds r0, #76	@ 00053bda 4c30
.org 0x53bdc
	movs r1, #0	@ 00053bdc 0021
.org 0x53bde
	strb r1, [r0, #0]	@ 00053bde 0170
.org 0x53be0
	adds r2, #1	@ 00053be0 0132
.org 0x53be2
	ldrb r1, [r2, #0]	@ 00053be2 1178
.org 0x53be4
	movs r0, #17	@ 00053be4 1120
.org 0x53be6
	negs r0, r0	@ 00053be6 4042
.org 0x53be8
	ands r0, r1	@ 00053be8 0840
.org 0x53bea
	strb r0, [r2, #0]	@ 00053bea 1070
.org 0x53bec
	ldrb r1, [r7, #10]	@ 00053bec b97a
.org 0x53bee
	movs r0, #239	@ 00053bee ef20
.org 0x53bf0
	ands r0, r1	@ 00053bf0 0840
.org 0x53bf2
	strb r0, [r7, #10]	@ 00053bf2 b872
.org 0x53bf4
	ldr r1, [pc, #136]	@ 00053bf4 2249
.org 0x53bf6
	adds r0, r7, #0	@ 00053bf6 381c
.org 0x53bf8
	movs r2, #96	@ 00053bf8 6022
.org 0x53bfa
	bl 0x503cc	@ 00053bfa fcf7e7fb
.org 0x53bfe
	movs r0, #0	@ 00053bfe 0020
.org 0x53c00
	bl 0xd7f4	@ 00053c00 b9f7f8fd
.org 0x53c04
	adds r4, r7, #0	@ 00053c04 3c1c
.org 0x53c06
	adds r4, #84	@ 00053c06 5434
.org 0x53c08
	adds r0, r7, #0	@ 00053c08 381c
.org 0x53c0a
	adds r1, r4, #0	@ 00053c0a 211c
.org 0x53c0c
	movs r2, #0	@ 00053c0c 0022
.org 0x53c0e
	movs r3, #0	@ 00053c0e 0023
.org 0x53c10
	bl 0x8dba4	@ 00053c10 39f0c8ff
.org 0x53c14
	adds r1, r7, #0	@ 00053c14 391c
.org 0x53c16
	adds r1, #196	@ 00053c16 c431
.org 0x53c18
	str r0, [r1, #0]	@ 00053c18 0860
.org 0x53c1a
	adds r0, r7, #0	@ 00053c1a 381c
.org 0x53c1c
	adds r1, r4, #0	@ 00053c1c 211c
.org 0x53c1e
	movs r2, #0	@ 00053c1e 0022
.org 0x53c20
	movs r3, #1	@ 00053c20 0123
.org 0x53c22
	bl 0x8dba4	@ 00053c22 39f0bfff
.org 0x53c26
	adds r1, r7, #0	@ 00053c26 391c
.org 0x53c28
	adds r1, #200	@ 00053c28 c831
.org 0x53c2a
	str r0, [r1, #0]	@ 00053c2a 0860
.org 0x53c2c
	adds r0, r7, #0	@ 00053c2c 381c
.org 0x53c2e
	adds r1, r4, #0	@ 00053c2e 211c
.org 0x53c30
	movs r2, #0	@ 00053c30 0022
.org 0x53c32
	movs r3, #0	@ 00053c32 0023
.org 0x53c34
	bl 0xda650	@ 00053c34 86f00cfd
.org 0x53c38
	adds r0, r7, #0	@ 00053c38 381c
.org 0x53c3a
	adds r1, r4, #0	@ 00053c3a 211c
.org 0x53c3c
	movs r2, #0	@ 00053c3c 0022
.org 0x53c3e
	movs r3, #1	@ 00053c3e 0123
.org 0x53c40
	bl 0xda650	@ 00053c40 86f006fd
.org 0x53c44
	adds r0, r7, #0	@ 00053c44 381c
.org 0x53c46
	bl 0x53c84	@ 00053c46 00f01df8
.org 0x53c4a
	pop {r3, r4, r5}	@ 00053c4a 38bc
.org 0x53c4c
	mov r8, r3	@ 00053c4c 9846
.org 0x53c4e
	mov r9, r4	@ 00053c4e a146
.org 0x53c50
	mov sl, r5	@ 00053c50 aa46
.org 0x53c52
	pop {r4, r5, r6, r7}	@ 00053c52 f0bc
.org 0x53c54
	pop {r0}	@ 00053c54 01bc
.org 0x53c56
	bx r0	@ 00053c56 0047
