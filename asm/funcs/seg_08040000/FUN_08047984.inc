@ FUN_08047984  entry 0x08047984  size 426
.thumb
.org 0x47984
FUN_08047984:
	push {r4, r5, r6, lr}	@ 00047984 70b5
.org 0x47986
	sub sp, #8	@ 00047986 82b0
.org 0x47988
	adds r5, r0, #0	@ 00047988 051c
.org 0x4798a
	ldr r6, [r5, #40]	@ 0004798a ae6a
.org 0x4798c
	movs r1, #168	@ 0004798c a821
.org 0x4798e
	lsls r1, r1, #1	@ 0004798e 4900
.org 0x47990
	adds r0, r6, r1	@ 00047990 7018
.org 0x47992
	ldrb r0, [r0, #0]	@ 00047992 0078
.org 0x47994
	cmp r0, #255	@ 00047994 ff28
.org 0x47996
	bne.n 0x479e4	@ 00047996 25d1
.org 0x47998
	ldr r0, [pc, #64]	@ 00047998 1048
.org 0x4799a
	adds r2, r6, r0	@ 0004799a 3218
.org 0x4799c
	ldrb r0, [r2, #0]	@ 0004799c 1078
.org 0x4799e
	movs r1, #64	@ 0004799e 4021
.org 0x479a0
	orrs r0, r1	@ 000479a0 0843
.org 0x479a2
	strb r0, [r2, #0]	@ 000479a2 1070
.org 0x479a4
	ldrb r1, [r5, #10]	@ 000479a4 a97a
.org 0x479a6
	movs r0, #254	@ 000479a6 fe20
.org 0x479a8
	ands r0, r1	@ 000479a8 0840
.org 0x479aa
	movs r2, #0	@ 000479aa 0022
.org 0x479ac
	movs r1, #253	@ 000479ac fd21
.org 0x479ae
	ands r0, r1	@ 000479ae 0840
.org 0x479b0
	strb r0, [r5, #10]	@ 000479b0 a872
.org 0x479b2
	adds r0, r5, #0	@ 000479b2 281c
.org 0x479b4
	adds r0, #140	@ 000479b4 8c30
.org 0x479b6
	str r2, [r0, #0]	@ 000479b6 0260
.org 0x479b8
	adds r0, #4	@ 000479b8 0430
.org 0x479ba
	str r2, [r0, #0]	@ 000479ba 0260
.org 0x479bc
	adds r0, #4	@ 000479bc 0430
.org 0x479be
	strb r2, [r0, #0]	@ 000479be 0270
.org 0x479c0
	ldrb r1, [r5, #10]	@ 000479c0 a97a
.org 0x479c2
	movs r0, #251	@ 000479c2 fb20
.org 0x479c4
	ands r0, r1	@ 000479c4 0840
.org 0x479c6
	strb r0, [r5, #10]	@ 000479c6 a872
.org 0x479c8
	ldr r1, [pc, #20]	@ 000479c8 0549
.org 0x479ca
	ldrb r0, [r5, #9]	@ 000479ca 687a
.org 0x479cc
	lsls r0, r0, #2	@ 000479cc 8000
.org 0x479ce
	adds r0, r0, r1	@ 000479ce 4018
.org 0x479d0
	movs r1, #3	@ 000479d0 0321
.org 0x479d2
	str r1, [r5, #12]	@ 000479d2 e960
.org 0x479d4
	ldr r0, [r0, #0]	@ 000479d4 0068
.org 0x479d6
	ldr r0, [r0, #12]	@ 000479d6 c068
.org 0x479d8
	b.n 0x47b42	@ 000479d8 b3e0
.org 0x479da
	.byte 0x00	@ 000479da data
.org 0x479db
	.byte 0x00	@ 000479db data
.org 0x479dc
	.byte 0x53,0x01,0x00,0x00	@ 000479dc data
.org 0x479e0
	.byte 0xf8,0x39,0x85,0x08	@ 000479e0 data
.org 0x479e4
	adds r0, r5, #0	@ 000479e4 281c
.org 0x479e6
	bl 0x1cff0	@ 000479e6 d5f703fb
.org 0x479ea
	ldrb r0, [r6, #10]	@ 000479ea b07a
.org 0x479ec
	lsrs r2, r0, #4	@ 000479ec 0209
.org 0x479ee
	movs r0, #1	@ 000479ee 0120
.org 0x479f0
	ands r2, r0	@ 000479f0 0240
.org 0x479f2
	cmp r2, #0	@ 000479f2 002a
.org 0x479f4
	beq.n 0x479fe	@ 000479f4 03d0
.org 0x479f6
	ldrb r1, [r5, #10]	@ 000479f6 a97a
.org 0x479f8
	movs r0, #16	@ 000479f8 1020
.org 0x479fa
	orrs r0, r1	@ 000479fa 0843
.org 0x479fc
	b.n 0x47a04	@ 000479fc 02e0
.org 0x479fe
	ldrb r1, [r5, #10]	@ 000479fe a97a
.org 0x47a00
	movs r0, #239	@ 00047a00 ef20
.org 0x47a02
	ands r0, r1	@ 00047a02 0840
.org 0x47a04
	strb r0, [r5, #10]	@ 00047a04 a872
.org 0x47a06
	adds r1, r2, #0	@ 00047a06 111c
.org 0x47a08
	adds r0, r5, #0	@ 00047a08 281c
.org 0x47a0a
	adds r0, #76	@ 00047a0a 4c30
.org 0x47a0c
	strb r1, [r0, #0]	@ 00047a0c 0170
.org 0x47a0e
	adds r3, r5, #0	@ 00047a0e 2b1c
.org 0x47a10
	adds r3, #74	@ 00047a10 4a33
.org 0x47a12
	lsls r1, r1, #4	@ 00047a12 0901
.org 0x47a14
	ldrb r2, [r3, #0]	@ 00047a14 1a78
.org 0x47a16
	movs r0, #17	@ 00047a16 1120
.org 0x47a18
	negs r0, r0	@ 00047a18 4042
.org 0x47a1a
	ands r0, r2	@ 00047a1a 1040
.org 0x47a1c
	orrs r0, r1	@ 00047a1c 0843
.org 0x47a1e
	strb r0, [r3, #0]	@ 00047a1e 1870
.org 0x47a20
	adds r0, r6, #0	@ 00047a20 301c
.org 0x47a22
	adds r0, #113	@ 00047a22 7130
.org 0x47a24
	ldrb r0, [r0, #0]	@ 00047a24 0078
.org 0x47a26
	lsls r0, r0, #24	@ 00047a26 0006
.org 0x47a28
	asrs r0, r0, #24	@ 00047a28 0016
.org 0x47a2a
	movs r4, #0	@ 00047a2a 0024
.org 0x47a2c
	cmp r0, #3	@ 00047a2c 0328
.org 0x47a2e
	bne.n 0x47a32	@ 00047a2e 00d1
.org 0x47a30
	movs r4, #1	@ 00047a30 0124
.org 0x47a32
	ldrb r1, [r5, #10]	@ 00047a32 a97a
.org 0x47a34
	movs r0, #16	@ 00047a34 1020
.org 0x47a36
	ands r0, r1	@ 00047a36 0840
.org 0x47a38
	cmp r0, #0	@ 00047a38 0028
.org 0x47a3a
	beq.n 0x47a5c	@ 00047a3a 0fd0
.org 0x47a3c
	ldr r3, [pc, #24]	@ 00047a3c 064b
.org 0x47a3e
	lsls r4, r4, #3	@ 00047a3e e400
.org 0x47a40
	movs r1, #168	@ 00047a40 a821
.org 0x47a42
	lsls r1, r1, #1	@ 00047a42 4900
.org 0x47a44
	adds r2, r6, r1	@ 00047a44 7218
.org 0x47a46
	ldrb r0, [r2, #0]	@ 00047a46 1078
.org 0x47a48
	lsls r0, r0, #4	@ 00047a48 0001
.org 0x47a4a
	adds r0, r4, r0	@ 00047a4a 2018
.org 0x47a4c
	adds r0, r0, r3	@ 00047a4c c018
.org 0x47a4e
	ldr r1, [r6, #84]	@ 00047a4e 716d
.org 0x47a50
	ldr r0, [r0, #0]	@ 00047a50 0068
.org 0x47a52
	subs r1, r1, r0	@ 00047a52 091a
.org 0x47a54
	b.n 0x47a74	@ 00047a54 0ee0
.org 0x47a56
	.byte 0x00	@ 00047a56 data
.org 0x47a57
	.byte 0x00	@ 00047a57 data
.org 0x47a58
	.byte 0x4c,0x35,0x85,0x08	@ 00047a58 data
.org 0x47a5c
	ldr r3, [pc, #100]	@ 00047a5c 194b
.org 0x47a5e
	lsls r4, r4, #3	@ 00047a5e e400
.org 0x47a60
	movs r0, #168	@ 00047a60 a820
.org 0x47a62
	lsls r0, r0, #1	@ 00047a62 4000
.org 0x47a64
	adds r2, r6, r0	@ 00047a64 3218
.org 0x47a66
	ldrb r0, [r2, #0]	@ 00047a66 1078
.org 0x47a68
	lsls r0, r0, #4	@ 00047a68 0001
.org 0x47a6a
	adds r0, r4, r0	@ 00047a6a 2018
.org 0x47a6c
	adds r0, r0, r3	@ 00047a6c c018
.org 0x47a6e
	ldr r1, [r6, #84]	@ 00047a6e 716d
.org 0x47a70
	ldr r0, [r0, #0]	@ 00047a70 0068
.org 0x47a72
	adds r1, r1, r0	@ 00047a72 0918
.org 0x47a74
	str r1, [r5, #84]	@ 00047a74 6965
.org 0x47a76
	ldrb r0, [r2, #0]	@ 00047a76 1078
.org 0x47a78
	lsls r0, r0, #4	@ 00047a78 0001
.org 0x47a7a
	adds r0, r4, r0	@ 00047a7a 2018
.org 0x47a7c
	adds r1, r3, #4	@ 00047a7c 191d
.org 0x47a7e
	adds r0, r0, r1	@ 00047a7e 4018
.org 0x47a80
	ldr r1, [r6, #88]	@ 00047a80 b16d
.org 0x47a82
	ldr r0, [r0, #0]	@ 00047a82 0068
.org 0x47a84
	adds r1, r1, r0	@ 00047a84 0918
.org 0x47a86
	str r1, [r5, #88]	@ 00047a86 a965
.org 0x47a88
	ldr r1, [pc, #60]	@ 00047a88 0f49
.org 0x47a8a
	ldrb r0, [r2, #0]	@ 00047a8a 1078
.org 0x47a8c
	adds r0, r0, r1	@ 00047a8c 4018
.org 0x47a8e
	ldrb r3, [r0, #0]	@ 00047a8e 0378
.org 0x47a90
	adds r0, r5, #0	@ 00047a90 281c
.org 0x47a92
	adds r0, #36	@ 00047a92 2430
.org 0x47a94
	strb r3, [r0, #0]	@ 00047a94 0370
.org 0x47a96
	ldrb r0, [r5, #13]	@ 00047a96 687b
.org 0x47a98
	cmp r0, #0	@ 00047a98 0028
.org 0x47a9a
	bne.n 0x47b18	@ 00047a9a 3dd1
.org 0x47a9c
	ldrb r1, [r5, #10]	@ 00047a9c a97a
.org 0x47a9e
	movs r0, #16	@ 00047a9e 1020
.org 0x47aa0
	ands r0, r1	@ 00047aa0 0840
.org 0x47aa2
	cmp r0, #0	@ 00047aa2 0028
.org 0x47aa4
	beq.n 0x47ad0	@ 00047aa4 14d0
.org 0x47aa6
	ldr r2, [pc, #36]	@ 00047aa6 094a
.org 0x47aa8
	adds r0, r3, #0	@ 00047aa8 181c
.org 0x47aaa
	adds r0, #64	@ 00047aaa 4030
.org 0x47aac
	lsls r0, r0, #24	@ 00047aac 0006
.org 0x47aae
	lsrs r0, r0, #23	@ 00047aae c00d
.org 0x47ab0
	adds r0, r0, r2	@ 00047ab0 8018
.org 0x47ab2
	movs r1, #0	@ 00047ab2 0021
.org 0x47ab4
	ldrsh r0, [r0, r1]	@ 00047ab4 405e
.org 0x47ab6
	lsls r1, r0, #3	@ 00047ab6 c100
.org 0x47ab8
	subs r1, r1, r0	@ 00047ab8 091a
.org 0x47aba
	lsls r1, r1, #1	@ 00047aba 4900
.org 0x47abc
	ldr r0, [r5, #84]	@ 00047abc 686d
.org 0x47abe
	adds r0, r0, r1	@ 00047abe 4018
.org 0x47ac0
	b.n 0x47aea	@ 00047ac0 13e0
.org 0x47ac2
	.byte 0x00	@ 00047ac2 data
.org 0x47ac3
	.byte 0x00	@ 00047ac3 data
.org 0x47ac4
	.byte 0x4c,0x35,0x85,0x08	@ 00047ac4 data
.org 0x47ac8
	.byte 0xec,0x35,0x85,0x08	@ 00047ac8 data
.org 0x47acc
	.byte 0x0c,0x93,0x12,0x08	@ 00047acc data
.org 0x47ad0
	ldr r2, [pc, #120]	@ 00047ad0 1e4a
.org 0x47ad2
	adds r0, r3, #0	@ 00047ad2 181c
.org 0x47ad4
	adds r0, #64	@ 00047ad4 4030
.org 0x47ad6
	lsls r0, r0, #24	@ 00047ad6 0006
.org 0x47ad8
	lsrs r0, r0, #23	@ 00047ad8 c00d
.org 0x47ada
	adds r0, r0, r2	@ 00047ada 8018
.org 0x47adc
	movs r1, #0	@ 00047adc 0021
.org 0x47ade
	ldrsh r0, [r0, r1]	@ 00047ade 405e
.org 0x47ae0
	lsls r1, r0, #3	@ 00047ae0 c100
.org 0x47ae2
	subs r1, r1, r0	@ 00047ae2 091a
.org 0x47ae4
	lsls r1, r1, #1	@ 00047ae4 4900
.org 0x47ae6
	ldr r0, [r5, #84]	@ 00047ae6 686d
.org 0x47ae8
	subs r0, r0, r1	@ 00047ae8 401a
.org 0x47aea
	str r0, [sp, #0]	@ 00047aea 0090
.org 0x47aec
	lsls r0, r3, #1	@ 00047aec 5800
.org 0x47aee
	adds r0, r0, r2	@ 00047aee 8018
.org 0x47af0
	movs r1, #0	@ 00047af0 0021
.org 0x47af2
	ldrsh r0, [r0, r1]	@ 00047af2 405e
.org 0x47af4
	lsls r1, r0, #3	@ 00047af4 c100
.org 0x47af6
	subs r1, r1, r0	@ 00047af6 091a
.org 0x47af8
	lsls r1, r1, #1	@ 00047af8 4900
.org 0x47afa
	ldr r0, [r5, #88]	@ 00047afa a86d
.org 0x47afc
	subs r0, r0, r1	@ 00047afc 401a
.org 0x47afe
	str r0, [sp, #4]	@ 00047afe 0190
.org 0x47b00
	adds r0, r6, #0	@ 00047b00 301c
.org 0x47b02
	adds r1, r5, #0	@ 00047b02 291c
.org 0x47b04
	mov r2, sp	@ 00047b04 6a46
.org 0x47b06
	movs r3, #0	@ 00047b06 0023
.org 0x47b08
	bl 0x4777c	@ 00047b08 fff738fe
.org 0x47b0c
	movs r0, #60	@ 00047b0c 3c20
.org 0x47b0e
	bl 0x2b10	@ 00047b0e baf7ffff
.org 0x47b12
	ldrb r0, [r5, #13]	@ 00047b12 687b
.org 0x47b14
	adds r0, #1	@ 00047b14 0130
.org 0x47b16
	strb r0, [r5, #13]	@ 00047b16 6873
.org 0x47b18
	ldrb r0, [r5, #18]	@ 00047b18 a87c
.org 0x47b1a
	adds r1, r0, #1	@ 00047b1a 411c
.org 0x47b1c
	strb r1, [r5, #18]	@ 00047b1c a974
.org 0x47b1e
	lsls r0, r0, #24	@ 00047b1e 0006
.org 0x47b20
	lsrs r0, r0, #24	@ 00047b20 000e
.org 0x47b22
	cmp r0, #16	@ 00047b22 1028
.org 0x47b24
	bls.n 0x47b44	@ 00047b24 0ed9
.org 0x47b26
	ldr r0, [pc, #40]	@ 00047b26 0a48
.org 0x47b28
	adds r2, r6, r0	@ 00047b28 3218
.org 0x47b2a
	ldrb r0, [r2, #0]	@ 00047b2a 1078
.org 0x47b2c
	movs r1, #64	@ 00047b2c 4021
