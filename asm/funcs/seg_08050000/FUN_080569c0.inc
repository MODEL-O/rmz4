@ FUN_080569c0  entry 0x080569c0  size 540
.thumb
.org 0x569c0
FUN_080569c0:
	push {r4, r5, r6, r7, lr}	@ 000569c0 f0b5
.org 0x569c2
	mov r7, r9	@ 000569c2 4f46
.org 0x569c4
	mov r6, r8	@ 000569c4 4646
.org 0x569c6
	push {r6, r7}	@ 000569c6 c0b4
.org 0x569c8
	sub sp, #96	@ 000569c8 98b0
.org 0x569ca
	adds r4, r0, #0	@ 000569ca 041c
.org 0x569cc
	mov r1, sp	@ 000569cc 6946
.org 0x569ce
	ldr r0, [pc, #508]	@ 000569ce 7f48
.org 0x569d0
	ldmia r0!, {r2, r3, r5}	@ 000569d0 2cc8
.org 0x569d2
	stmia r1!, {r2, r3, r5}	@ 000569d2 2cc1
.org 0x569d4
	ldmia r0!, {r2, r3, r6}	@ 000569d4 4cc8
.org 0x569d6
	stmia r1!, {r2, r3, r6}	@ 000569d6 4cc1
.org 0x569d8
	ldmia r0!, {r2, r5, r6}	@ 000569d8 64c8
.org 0x569da
	stmia r1!, {r2, r5, r6}	@ 000569da 64c1
.org 0x569dc
	ldr r0, [r0, #0]	@ 000569dc 0068
.org 0x569de
	str r0, [r1, #0]	@ 000569de 0860
.org 0x569e0
	add r2, sp, #40	@ 000569e0 0aaa
.org 0x569e2
	adds r1, r2, #0	@ 000569e2 111c
.org 0x569e4
	ldr r0, [pc, #488]	@ 000569e4 7a48
.org 0x569e6
	ldmia r0!, {r3, r5, r6}	@ 000569e6 68c8
.org 0x569e8
	stmia r1!, {r3, r5, r6}	@ 000569e8 68c1
.org 0x569ea
	ldmia r0!, {r3, r5, r6}	@ 000569ea 68c8
.org 0x569ec
	stmia r1!, {r3, r5, r6}	@ 000569ec 68c1
.org 0x569ee
	ldmia r0!, {r3, r5, r6}	@ 000569ee 68c8
.org 0x569f0
	stmia r1!, {r3, r5, r6}	@ 000569f0 68c1
.org 0x569f2
	ldr r0, [r0, #0]	@ 000569f2 0068
.org 0x569f4
	str r0, [r1, #0]	@ 000569f4 0860
.org 0x569f6
	mov r0, sp	@ 000569f6 6846
.org 0x569f8
	str r0, [sp, #80]	@ 000569f8 1490
.org 0x569fa
	add r1, sp, #80	@ 000569fa 14a9
.org 0x569fc
	mov r8, r1	@ 000569fc 8846
.org 0x569fe
	str r2, [r1, #4]	@ 000569fe 4a60
.org 0x56a00
	ldr r0, [pc, #464]	@ 00056a00 7448
.org 0x56a02
	ldr r1, [r0, #4]	@ 00056a02 4168
.org 0x56a04
	ldr r0, [r0, #0]	@ 00056a04 0068
.org 0x56a06
	str r0, [sp, #88]	@ 00056a06 1690
.org 0x56a08
	str r1, [sp, #92]	@ 00056a08 1791
.org 0x56a0a
	ldrb r0, [r4, #10]	@ 00056a0a a07a
.org 0x56a0c
	lsrs r5, r0, #4	@ 00056a0c 0509
.org 0x56a0e
	movs r2, #1	@ 00056a0e 0122
.org 0x56a10
	mov r9, r2	@ 00056a10 9146
.org 0x56a12
	ands r5, r2	@ 00056a12 1540
.org 0x56a14
	ldrb r7, [r4, #15]	@ 00056a14 e77b
.org 0x56a16
	cmp r7, #0	@ 00056a16 002f
.org 0x56a18
	bne.n 0x56a5c	@ 00056a18 20d1
.org 0x56a1a
	adds r0, r4, #0	@ 00056a1a 201c
.org 0x56a1c
	bl 0x5977c	@ 00056a1c 02f0aefe
.org 0x56a20
	adds r6, r0, #0	@ 00056a20 061c
.org 0x56a22
	ldr r0, [r4, #84]	@ 00056a22 606d
.org 0x56a24
	str r0, [r4, #96]	@ 00056a24 2066
.org 0x56a26
	movs r0, #128	@ 00056a26 8020
.org 0x56a28
	lsls r0, r0, #2	@ 00056a28 8000
.org 0x56a2a
	str r0, [r4, #92]	@ 00056a2a e065
.org 0x56a2c
	movs r0, #32	@ 00056a2c 2020
.org 0x56a2e
	str r0, [r4, #100]	@ 00056a2e 6066
.org 0x56a30
	ldr r1, [pc, #420]	@ 00056a30 6949
.org 0x56a32
	lsls r0, r6, #1	@ 00056a32 7000
.org 0x56a34
	adds r0, r0, r1	@ 00056a34 4018
.org 0x56a36
	ldrh r0, [r0, #0]	@ 00056a36 0088
.org 0x56a38
	str r0, [r4, #104]	@ 00056a38 a066
.org 0x56a3a
	ldr r2, [pc, #416]	@ 00056a3a 684a
.org 0x56a3c
	ldr r1, [r2, #0]	@ 00056a3c 1168
.org 0x56a3e
	ldr r0, [pc, #416]	@ 00056a3e 6848
.org 0x56a40
	muls r0, r1	@ 00056a40 4843
.org 0x56a42
	ldr r3, [pc, #416]	@ 00056a42 684b
.org 0x56a44
	adds r0, r0, r3	@ 00056a44 c018
.org 0x56a46
	lsls r0, r0, #1	@ 00056a46 4000
.org 0x56a48
	lsrs r1, r0, #1	@ 00056a48 4108
.org 0x56a4a
	str r1, [r2, #0]	@ 00056a4a 1160
.org 0x56a4c
	lsrs r0, r0, #17	@ 00056a4c 400c
.org 0x56a4e
	movs r1, #1	@ 00056a4e 0121
.org 0x56a50
	ands r0, r1	@ 00056a50 0840
.org 0x56a52
	strb r0, [r4, #18]	@ 00056a52 a074
.org 0x56a54
	strb r7, [r4, #19]	@ 00056a54 e774
.org 0x56a56
	ldrb r0, [r4, #15]	@ 00056a56 e07b
.org 0x56a58
	adds r0, #1	@ 00056a58 0130
.org 0x56a5a
	strb r0, [r4, #15]	@ 00056a5a e073
.org 0x56a5c
	ldrb r0, [r4, #19]	@ 00056a5c e07c
.org 0x56a5e
	adds r7, r4, #0	@ 00056a5e 271c
.org 0x56a60
	adds r7, #196	@ 00056a60 c437
.org 0x56a62
	cmp r0, #0	@ 00056a62 0028
.org 0x56a64
	bne.n 0x56ac6	@ 00056a64 2fd1
.org 0x56a66
	movs r0, #248	@ 00056a66 f820
.org 0x56a68
	bl 0x2b10	@ 00056a68 acf752f8
.org 0x56a6c
	ldrb r0, [r4, #18]	@ 00056a6c a07c
.org 0x56a6e
	lsls r0, r0, #2	@ 00056a6e 8000
.org 0x56a70
	add r0, r8	@ 00056a70 4044
.org 0x56a72
	ldrb r1, [r4, #15]	@ 00056a72 e17b
.org 0x56a74
	ldr r0, [r0, #0]	@ 00056a74 0068
.org 0x56a76
	lsls r1, r1, #3	@ 00056a76 c900
.org 0x56a78
	adds r1, r1, r0	@ 00056a78 0918
.org 0x56a7a
	adds r0, r1, #0	@ 00056a7a 081c
.org 0x56a7c
	subs r0, #8	@ 00056a7c 0838
.org 0x56a7e
	ldr r1, [r1, #0]	@ 00056a7e 0968
.org 0x56a80
	ldr r0, [r0, #0]	@ 00056a80 0068
.org 0x56a82
	subs r6, r1, r0	@ 00056a82 0e1a
.org 0x56a84
	asrs r0, r6, #31	@ 00056a84 f017
.org 0x56a86
	mov r1, r9	@ 00056a86 4946
.org 0x56a88
	ands r0, r1	@ 00056a88 0840
.org 0x56a8a
	lsls r0, r0, #2	@ 00056a8a 8000
.org 0x56a8c
	add r1, sp, #88	@ 00056a8c 16a9
.org 0x56a8e
	adds r0, r0, r1	@ 00056a8e 4018
.org 0x56a90
	ldrh r1, [r0, #0]	@ 00056a90 0188
.org 0x56a92
	adds r0, r4, #0	@ 00056a92 201c
.org 0x56a94
	bl 0x1cf00	@ 00056a94 c6f734fa
.org 0x56a98
	lsls r0, r5, #1	@ 00056a98 6800
.org 0x56a9a
	subs r0, #1	@ 00056a9a 0138
.org 0x56a9c
	muls r6, r0	@ 00056a9c 4643
.org 0x56a9e
	ldrb r0, [r4, #18]	@ 00056a9e a07c
.org 0x56aa0
	lsls r0, r0, #2	@ 00056aa0 8000
.org 0x56aa2
	add r0, r8	@ 00056aa2 4044
.org 0x56aa4
	ldrb r1, [r4, #15]	@ 00056aa4 e17b
.org 0x56aa6
	ldr r0, [r0, #0]	@ 00056aa6 0068
.org 0x56aa8
	lsls r1, r1, #3	@ 00056aa8 c900
.org 0x56aaa
	adds r1, r1, r0	@ 00056aaa 0918
.org 0x56aac
	adds r0, r1, #0	@ 00056aac 081c
.org 0x56aae
	subs r0, #8	@ 00056aae 0838
.org 0x56ab0
	ldr r1, [r1, #4]	@ 00056ab0 4968
.org 0x56ab2
	ldr r0, [r0, #4]	@ 00056ab2 4068
.org 0x56ab4
	subs r5, r1, r0	@ 00056ab4 0d1a
.org 0x56ab6
	adds r0, r6, #0	@ 00056ab6 301c
.org 0x56ab8
	adds r1, r5, #0	@ 00056ab8 291c
.org 0x56aba
	bl 0x10d338	@ 00056aba b6f03dfc
.org 0x56abe
	str r0, [r7, #0]	@ 00056abe 3860
.org 0x56ac0
	ldrb r0, [r4, #19]	@ 00056ac0 e07c
.org 0x56ac2
	adds r0, #1	@ 00056ac2 0130
.org 0x56ac4
	strb r0, [r4, #19]	@ 00056ac4 e074
.org 0x56ac6
	adds r0, r4, #0	@ 00056ac6 201c
.org 0x56ac8
	bl 0x1cff0	@ 00056ac8 c6f792fa
.org 0x56acc
	adds r0, r4, #0	@ 00056acc 201c
.org 0x56ace
	adds r0, #116	@ 00056ace 7430
.org 0x56ad0
	ldr r3, [pc, #276]	@ 00056ad0 454b
.org 0x56ad2
	ldrb r1, [r4, #30]	@ 00056ad2 a17f
.org 0x56ad4
	lsls r1, r1, #8	@ 00056ad4 0902
.org 0x56ad6
	adds r2, r4, #0	@ 00056ad6 221c
.org 0x56ad8
	adds r2, #112	@ 00056ad8 7032
.org 0x56ada
	ldrb r2, [r2, #0]	@ 00056ada 1278
.org 0x56adc
	orrs r1, r2	@ 00056adc 1143
.org 0x56ade
	ldr r2, [pc, #268]	@ 00056ade 434a
.org 0x56ae0
	adds r1, r1, r2	@ 00056ae0 8918
.org 0x56ae2
	lsls r1, r1, #2	@ 00056ae2 8900
.org 0x56ae4
	adds r1, r1, r3	@ 00056ae4 c918
.org 0x56ae6
	adds r2, r4, #0	@ 00056ae6 221c
.org 0x56ae8
	adds r2, #113	@ 00056ae8 7132
.org 0x56aea
	ldrb r2, [r2, #0]	@ 00056aea 1278
.org 0x56aec
	lsls r2, r2, #24	@ 00056aec 1206
.org 0x56aee
	asrs r2, r2, #24	@ 00056aee 1216
.org 0x56af0
	ldr r1, [r1, #0]	@ 00056af0 0968
.org 0x56af2
	lsls r2, r2, #2	@ 00056af2 9200
.org 0x56af4
	adds r2, r2, r1	@ 00056af4 5218
.org 0x56af6
	ldr r1, [r2, #0]	@ 00056af6 1168
.org 0x56af8
	ldrb r2, [r1, #0]	@ 00056af8 0a78
.org 0x56afa
	lsls r1, r2, #1	@ 00056afa 5100
.org 0x56afc
	adds r1, r1, r2	@ 00056afc 8918
.org 0x56afe
	lsls r1, r1, #3	@ 00056afe c900
.org 0x56b00
	ldr r2, [pc, #236]	@ 00056b00 3b4a
.org 0x56b02
	adds r1, r1, r2	@ 00056b02 8918
.org 0x56b04
	bl 0x5784	@ 00056b04 aef73efe
.org 0x56b08
	ldr r0, [r4, #92]	@ 00056b08 e06d
.org 0x56b0a
	ldr r1, [r4, #100]	@ 00056b0a 616e
.org 0x56b0c
	adds r0, r0, r1	@ 00056b0c 4018
.org 0x56b0e
	str r0, [r4, #92]	@ 00056b0e e065
.org 0x56b10
	ldr r1, [r4, #104]	@ 00056b10 a16e
.org 0x56b12
	cmp r0, r1	@ 00056b12 8842
.org 0x56b14
	ble.n 0x56b18	@ 00056b14 00dd
.org 0x56b16
	str r1, [r4, #92]	@ 00056b16 e165
.org 0x56b18
	ldrb r3, [r7, #0]	@ 00056b18 3b78
.org 0x56b1a
	ldr r6, [r4, #84]	@ 00056b1a 666d
.org 0x56b1c
	ldr r7, [pc, #212]	@ 00056b1c 354f
.org 0x56b1e
	adds r0, r3, #0	@ 00056b1e 181c
.org 0x56b20
	adds r0, #64	@ 00056b20 4030
.org 0x56b22
	lsls r0, r0, #24	@ 00056b22 0006
.org 0x56b24
	lsrs r0, r0, #23	@ 00056b24 c00d
.org 0x56b26
	adds r0, r0, r7	@ 00056b26 c019
.org 0x56b28
	movs r5, #0	@ 00056b28 0025
.org 0x56b2a
	ldrsh r0, [r0, r5]	@ 00056b2a 405f
.org 0x56b2c
	ldr r2, [r4, #92]	@ 00056b2c e26d
.org 0x56b2e
	muls r0, r2	@ 00056b2e 5043
.org 0x56b30
	cmp r0, #0	@ 00056b30 0028
.org 0x56b32
	bge.n 0x56b36	@ 00056b32 00da
.org 0x56b34
	adds r0, #255	@ 00056b34 ff30
.org 0x56b36
	asrs r0, r0, #8	@ 00056b36 0012
.org 0x56b38
	adds r6, r6, r0	@ 00056b38 3618
.org 0x56b3a
	str r6, [r4, #84]	@ 00056b3a 6665
.org 0x56b3c
	adds r1, r4, #0	@ 00056b3c 211c
.org 0x56b3e
	adds r1, #188	@ 00056b3e bc31
.org 0x56b40
	ldr r5, [r1, #0]	@ 00056b40 0d68
.org 0x56b42
	lsls r0, r3, #1	@ 00056b42 5800
.org 0x56b44
	adds r0, r0, r7	@ 00056b44 c019
.org 0x56b46
	movs r3, #0	@ 00056b46 0023
.org 0x56b48
	ldrsh r0, [r0, r3]	@ 00056b48 c05e
.org 0x56b4a
	muls r0, r2	@ 00056b4a 5043
.org 0x56b4c
	cmp r0, #0	@ 00056b4c 0028
.org 0x56b4e
	bge.n 0x56b52	@ 00056b4e 00da
.org 0x56b50
	adds r0, #255	@ 00056b50 ff30
.org 0x56b52
	asrs r0, r0, #8	@ 00056b52 0012
.org 0x56b54
	adds r5, r5, r0	@ 00056b54 2d18
.org 0x56b56
	str r5, [r1, #0]	@ 00056b56 0d60
.org 0x56b58
	adds r0, r4, #0	@ 00056b58 201c
.org 0x56b5a
	adds r0, #181	@ 00056b5a b530
.org 0x56b5c
	ldrb r0, [r0, #0]	@ 00056b5c 0078
.org 0x56b5e
	lsls r0, r0, #1	@ 00056b5e 4000
.org 0x56b60
	adds r0, r0, r7	@ 00056b60 c019
.org 0x56b62
	movs r1, #0	@ 00056b62 0021
.org 0x56b64
	ldrsh r0, [r0, r1]	@ 00056b64 405e
.org 0x56b66
	lsls r0, r0, #1	@ 00056b66 4000
.org 0x56b68
	adds r0, r5, r0	@ 00056b68 2818
.org 0x56b6a
	str r0, [r4, #88]	@ 00056b6a a065
.org 0x56b6c
	ldrb r0, [r4, #18]	@ 00056b6c a07c
.org 0x56b6e
	lsls r0, r0, #2	@ 00056b6e 8000
.org 0x56b70
	add r0, r8	@ 00056b70 4044
.org 0x56b72
	ldrb r7, [r4, #15]	@ 00056b72 e77b
.org 0x56b74
	ldr r1, [r0, #0]	@ 00056b74 0168
.org 0x56b76
	lsls r0, r7, #3	@ 00056b76 f800
.org 0x56b78
	adds r0, r0, r1	@ 00056b78 4018
.org 0x56b7a
	adds r3, r0, #0	@ 00056b7a 031c
.org 0x56b7c
	subs r3, #8	@ 00056b7c 083b
.org 0x56b7e
	ldr r2, [r0, #0]	@ 00056b7e 0268
.org 0x56b80
	ldr r1, [r3, #0]	@ 00056b80 1968
.org 0x56b82
	subs r2, r2, r1	@ 00056b82 521a
.org 0x56b84
	ldr r1, [r0, #4]	@ 00056b84 4168
.org 0x56b86
	ldr r0, [r3, #4]	@ 00056b86 5868
.org 0x56b88
	subs r3, r1, r0	@ 00056b88 0b1a
.org 0x56b8a
	cmp r2, #0	@ 00056b8a 002a
.org 0x56b8c
	beq.n 0x56b9e	@ 00056b8c 07d0
.org 0x56b8e
	ldr r0, [r4, #96]	@ 00056b8e 206e
.org 0x56b90
	subs r0, r6, r0	@ 00056b90 301a
.org 0x56b92
	subs r0, #1	@ 00056b92 0138
.org 0x56b94
	adds r0, r0, r2	@ 00056b94 8018
.org 0x56b96
	subs r1, r2, #1	@ 00056b96 511e
.org 0x56b98
	lsls r1, r1, #1	@ 00056b98 4900
.org 0x56b9a
	cmp r0, r1	@ 00056b9a 8842
.org 0x56b9c
	bls.n 0x56bfa	@ 00056b9c 2dd9
.org 0x56b9e
	cmp r3, #0	@ 00056b9e 002b
.org 0x56ba0
	beq.n 0x56bb6	@ 00056ba0 09d0
.org 0x56ba2
	adds r0, r4, #0	@ 00056ba2 201c
.org 0x56ba4
	adds r0, #184	@ 00056ba4 b830
.org 0x56ba6
	ldr r0, [r0, #0]	@ 00056ba6 0068
.org 0x56ba8
	subs r0, r5, r0	@ 00056ba8 281a
.org 0x56baa
	subs r0, #1	@ 00056baa 0138
.org 0x56bac
	adds r0, r0, r3	@ 00056bac c018
.org 0x56bae
	subs r1, r3, #1	@ 00056bae 591e
.org 0x56bb0
	lsls r1, r1, #1	@ 00056bb0 4900
.org 0x56bb2
	cmp r0, r1	@ 00056bb2 8842
.org 0x56bb4
	bls.n 0x56bfa	@ 00056bb4 21d9
.org 0x56bb6
	adds r0, r7, #1	@ 00056bb6 781c
.org 0x56bb8
	movs r1, #0	@ 00056bb8 0021
.org 0x56bba
	strb r0, [r4, #15]	@ 00056bba e073
.org 0x56bbc
	lsls r0, r0, #24	@ 00056bbc 0006
.org 0x56bbe
	lsrs r0, r0, #24	@ 00056bbe 000e
.org 0x56bc0
	cmp r0, #4	@ 00056bc0 0428
.org 0x56bc2
	bls.n 0x56bf8	@ 00056bc2 19d9
.org 0x56bc4
	movs r0, #4	@ 00056bc4 0420
.org 0x56bc6
	strb r0, [r4, #14]	@ 00056bc6 a073
.org 0x56bc8
	strb r1, [r4, #15]	@ 00056bc8 e173
.org 0x56bca
	b.n 0x56bfa	@ 00056bca 16e0
.org 0x56bcc
	.byte 0xe8,0x95,0x12,0x08	@ 00056bcc data
.org 0x56bd0
	.byte 0x10,0x96,0x12,0x08	@ 00056bd0 data
.org 0x56bd4
	.byte 0x38,0x96,0x12,0x08	@ 00056bd4 data
.org 0x56bd8
	.byte 0xbe,0x87,0x85,0x08	@ 00056bd8 data
