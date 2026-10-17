@ FUN_08050a04  entry 0x08050a04  size 436
.thumb
.org 0x50a04
FUN_08050a04:
	push {r4, r5, r6, lr}	@ 00050a04 70b5
.org 0x50a06
	sub sp, #16	@ 00050a06 84b0
.org 0x50a08
	adds r5, r0, #0	@ 00050a08 051c
.org 0x50a0a
	ldrb r0, [r5, #14]	@ 00050a0a a87b
.org 0x50a0c
	cmp r0, #0	@ 00050a0c 0028
.org 0x50a0e
	beq.n 0x50a12	@ 00050a0e 00d0
.org 0x50a10
	b.n 0x50b10	@ 00050a10 7ee0
.org 0x50a12
	adds r0, r5, #0	@ 00050a12 281c
.org 0x50a14
	adds r0, #140	@ 00050a14 8c30
.org 0x50a16
	ldr r1, [r0, #0]	@ 00050a16 0168
.org 0x50a18
	movs r2, #128	@ 00050a18 8022
.org 0x50a1a
	lsls r2, r2, #9	@ 00050a1a 5202
.org 0x50a1c
	ands r1, r2	@ 00050a1c 1140
.org 0x50a1e
	adds r6, r0, #0	@ 00050a1e 061c
.org 0x50a20
	cmp r1, #0	@ 00050a20 0029
.org 0x50a22
	beq.n 0x50a9a	@ 00050a22 3ad0
.org 0x50a24
	ldr r0, [r5, #84]	@ 00050a24 686d
.org 0x50a26
	str r0, [sp, #0]	@ 00050a26 0090
.org 0x50a28
	ldrb r1, [r5, #10]	@ 00050a28 a97a
.org 0x50a2a
	movs r0, #32	@ 00050a2a 2020
.org 0x50a2c
	ands r0, r1	@ 00050a2c 0840
.org 0x50a2e
	cmp r0, #0	@ 00050a2e 0028
.org 0x50a30
	beq.n 0x50a3a	@ 00050a30 03d0
.org 0x50a32
	ldr r0, [r5, #88]	@ 00050a32 a86d
.org 0x50a34
	movs r1, #208	@ 00050a34 d021
.org 0x50a36
	lsls r1, r1, #5	@ 00050a36 4901
.org 0x50a38
	b.n 0x50a3e	@ 00050a38 01e0
.org 0x50a3a
	ldr r0, [r5, #88]	@ 00050a3a a86d
.org 0x50a3c
	ldr r1, [pc, #48]	@ 00050a3c 0c49
.org 0x50a3e
	adds r0, r0, r1	@ 00050a3e 4018
.org 0x50a40
	str r0, [sp, #4]	@ 00050a40 0190
.org 0x50a42
	movs r2, #128	@ 00050a42 8022
.org 0x50a44
	lsls r2, r2, #2	@ 00050a44 9200
.org 0x50a46
	adds r0, r5, #0	@ 00050a46 281c
.org 0x50a48
	adds r0, #212	@ 00050a48 d430
.org 0x50a4a
	ldrb r3, [r0, #0]	@ 00050a4a 0378
.org 0x50a4c
	movs r0, #0	@ 00050a4c 0020
.org 0x50a4e
	mov r1, sp	@ 00050a4e 6946
.org 0x50a50
	bl 0xd0dc4	@ 00050a50 80f0b8f9
.org 0x50a54
	ldr r1, [pc, #28]	@ 00050a54 0749
.org 0x50a56
	adds r0, r5, #0	@ 00050a56 281c
.org 0x50a58
	bl 0x1cf00	@ 00050a58 ccf752fa
.org 0x50a5c
	ldrb r1, [r5, #10]	@ 00050a5c a97a
.org 0x50a5e
	movs r0, #16	@ 00050a5e 1020
.org 0x50a60
	ands r0, r1	@ 00050a60 0840
.org 0x50a62
	cmp r0, #0	@ 00050a62 0028
.org 0x50a64
	beq.n 0x50a78	@ 00050a64 08d0
.org 0x50a66
	movs r0, #32	@ 00050a66 2020
.org 0x50a68
	str r0, [r5, #92]	@ 00050a68 e865
.org 0x50a6a
	subs r0, #33	@ 00050a6a 2138
.org 0x50a6c
	b.n 0x50a80	@ 00050a6c 08e0
.org 0x50a6e
	.byte 0x00	@ 00050a6e data
.org 0x50a6f
	.byte 0x00	@ 00050a6f data
.org 0x50a70
	.byte 0x00,0xe6,0xff,0xff	@ 00050a70 data
.org 0x50a74
	.byte 0x16,0xa1,0x00,0x00	@ 00050a74 data
.org 0x50a78
	movs r0, #32	@ 00050a78 2020
.org 0x50a7a
	negs r0, r0	@ 00050a7a 4042
.org 0x50a7c
	str r0, [r5, #92]	@ 00050a7c e865
.org 0x50a7e
	movs r0, #1	@ 00050a7e 0120
.org 0x50a80
	str r0, [r5, #100]	@ 00050a80 6866
.org 0x50a82
	movs r4, #0	@ 00050a82 0024
.org 0x50a84
	movs r0, #32	@ 00050a84 2020
.org 0x50a86
	strb r0, [r5, #18]	@ 00050a86 a874
.org 0x50a88
	adds r0, r5, #0	@ 00050a88 281c
.org 0x50a8a
	bl 0x90ebc	@ 00050a8a 40f017fa
.org 0x50a8e
	movs r0, #47	@ 00050a8e 2f20
.org 0x50a90
	bl 0x2b10	@ 00050a90 b2f73ef8
.org 0x50a94
	strb r4, [r5, #13]	@ 00050a94 6c73
.org 0x50a96
	strb r4, [r5, #15]	@ 00050a96 ec73
.org 0x50a98
	b.n 0x50aac	@ 00050a98 08e0
.org 0x50a9a
	ldr r1, [pc, #40]	@ 00050a9a 0a49
.org 0x50a9c
	adds r0, r5, #0	@ 00050a9c 281c
.org 0x50a9e
	bl 0x1cf00	@ 00050a9e ccf72ffa
.org 0x50aa2
	movs r0, #1	@ 00050aa2 0120
.org 0x50aa4
	strb r0, [r5, #13]	@ 00050aa4 6873
.org 0x50aa6
	strb r0, [r5, #15]	@ 00050aa6 e873
.org 0x50aa8
	movs r0, #16	@ 00050aa8 1020
.org 0x50aaa
	strb r0, [r5, #18]	@ 00050aaa a874
.org 0x50aac
	movs r0, #228	@ 00050aac e420
.org 0x50aae
	bl 0x2b5c	@ 00050aae b2f755f8
.org 0x50ab2
	ldr r0, [pc, #20]	@ 00050ab2 0548
.org 0x50ab4
	ldrh r0, [r0, #0]	@ 00050ab4 0088
.org 0x50ab6
	cmp r0, #6	@ 00050ab6 0628
.org 0x50ab8
	bne.n 0x50acc	@ 00050ab8 08d1
.org 0x50aba
	movs r0, #242	@ 00050aba f220
.org 0x50abc
	bl 0x2b10	@ 00050abc b2f728f8
.org 0x50ac0
	b.n 0x50ad2	@ 00050ac0 07e0
.org 0x50ac2
	.byte 0x00	@ 00050ac2 data
.org 0x50ac3
	.byte 0x00	@ 00050ac3 data
.org 0x50ac4
	.byte 0x14,0xa1,0x00,0x00	@ 00050ac4 data
.org 0x50ac8
	.byte 0x10,0xe9,0x02,0x02	@ 00050ac8 data
.org 0x50acc
	movs r0, #243	@ 00050acc f320
.org 0x50ace
	bl 0x2b10	@ 00050ace b2f71ff8
.org 0x50ad2
	movs r1, #0	@ 00050ad2 0021
.org 0x50ad4
	str r1, [r6, #0]	@ 00050ad4 3160
.org 0x50ad6
	adds r0, r5, #0	@ 00050ad6 281c
.org 0x50ad8
	adds r0, #144	@ 00050ad8 9030
.org 0x50ada
	str r1, [r0, #0]	@ 00050ada 0160
.org 0x50adc
	adds r0, #4	@ 00050adc 0430
.org 0x50ade
	strb r1, [r0, #0]	@ 00050ade 0170
.org 0x50ae0
	ldrb r1, [r5, #10]	@ 00050ae0 a97a
.org 0x50ae2
	movs r0, #251	@ 00050ae2 fb20
.org 0x50ae4
	ands r0, r1	@ 00050ae4 0840
.org 0x50ae6
	strb r0, [r5, #10]	@ 00050ae6 a872
.org 0x50ae8
	ldr r3, [pc, #88]	@ 00050ae8 164b
.org 0x50aea
	ldrh r2, [r3, #8]	@ 00050aea 1a89
.org 0x50aec
	movs r4, #1	@ 00050aec 0124
.org 0x50aee
	adds r0, r4, #0	@ 00050aee 201c
.org 0x50af0
	ands r0, r2	@ 00050af0 1040
.org 0x50af2
	cmp r0, #0	@ 00050af2 0028
.org 0x50af4
	beq.n 0x50b0a	@ 00050af4 09d0
.org 0x50af6
	ldrb r1, [r3, #18]	@ 00050af6 997c
.org 0x50af8
	adds r0, r4, #0	@ 00050af8 201c
.org 0x50afa
	ands r0, r1	@ 00050afa 0840
.org 0x50afc
	cmp r0, #0	@ 00050afc 0028
.org 0x50afe
	bne.n 0x50b0a	@ 00050afe 04d1
.org 0x50b00
	ldr r0, [pc, #68]	@ 00050b00 1148
.org 0x50b02
	ands r0, r2	@ 00050b02 1040
.org 0x50b04
	movs r1, #16	@ 00050b04 1021
.org 0x50b06
	orrs r0, r1	@ 00050b06 0843
.org 0x50b08
	strh r0, [r3, #8]	@ 00050b08 1881
.org 0x50b0a
	ldrb r0, [r5, #14]	@ 00050b0a a87b
.org 0x50b0c
	adds r0, #1	@ 00050b0c 0130
.org 0x50b0e
	strb r0, [r5, #14]	@ 00050b0e a873
.org 0x50b10
	adds r0, r5, #0	@ 00050b10 281c
.org 0x50b12
	bl 0x1cff0	@ 00050b12 ccf76dfa
.org 0x50b16
	ldrb r0, [r5, #13]	@ 00050b16 687b
.org 0x50b18
	cmp r0, #0	@ 00050b18 0028
.org 0x50b1a
	bne.n 0x50b4c	@ 00050b1a 17d1
.org 0x50b1c
	ldr r0, [r5, #84]	@ 00050b1c 686d
.org 0x50b1e
	ldr r1, [r5, #92]	@ 00050b1e e96d
.org 0x50b20
	adds r0, r0, r1	@ 00050b20 4018
.org 0x50b22
	str r0, [r5, #84]	@ 00050b22 6865
.org 0x50b24
	ldr r0, [r5, #100]	@ 00050b24 686e
.org 0x50b26
	adds r1, r1, r0	@ 00050b26 0918
.org 0x50b28
	str r1, [r5, #92]	@ 00050b28 e965
.org 0x50b2a
	ldrb r0, [r5, #18]	@ 00050b2a a87c
.org 0x50b2c
	subs r0, #1	@ 00050b2c 0138
.org 0x50b2e
	strb r0, [r5, #18]	@ 00050b2e a874
.org 0x50b30
	lsls r0, r0, #24	@ 00050b30 0006
.org 0x50b32
	lsrs r0, r0, #24	@ 00050b32 000e
.org 0x50b34
	cmp r0, #255	@ 00050b34 ff28
.org 0x50b36
	bne.n 0x50bd6	@ 00050b36 4ed1
.org 0x50b38
	movs r0, #16	@ 00050b38 1020
.org 0x50b3a
	strb r0, [r5, #18]	@ 00050b3a a874
.org 0x50b3c
	movs r0, #1	@ 00050b3c 0120
.org 0x50b3e
	strb r0, [r5, #13]	@ 00050b3e 6873
.org 0x50b40
	b.n 0x50bd6	@ 00050b40 49e0
.org 0x50b42
	.byte 0x00	@ 00050b42 data
.org 0x50b43
	.byte 0x00	@ 00050b43 data
.org 0x50b44
	.byte 0x10,0xe9,0x02,0x02	@ 00050b44 data
.org 0x50b48
	.byte 0xfe,0xff,0x00,0x00	@ 00050b48 data
.org 0x50b4c
	cmp r0, #1	@ 00050b4c 0128
.org 0x50b4e
	bne.n 0x50ba8	@ 00050b4e 2bd1
.org 0x50b50
	ldr r0, [r5, #24]	@ 00050b50 a869
.org 0x50b52
	ldrb r1, [r0, #9]	@ 00050b52 417a
.org 0x50b54
	movs r0, #128	@ 00050b54 8020
.org 0x50b56
	ands r0, r1	@ 00050b56 0840
.org 0x50b58
	cmp r0, #0	@ 00050b58 0028
.org 0x50b5a
	beq.n 0x50bd6	@ 00050b5a 3cd0
.org 0x50b5c
	ldrb r0, [r5, #15]	@ 00050b5c e87b
.org 0x50b5e
	cmp r0, #0	@ 00050b5e 0028
.org 0x50b60
	beq.n 0x50b78	@ 00050b60 0ad0
.org 0x50b62
	movs r0, #160	@ 00050b62 a020
.org 0x50b64
	lsls r0, r0, #4	@ 00050b64 0001
.org 0x50b66
	str r0, [sp, #8]	@ 00050b66 0290
.org 0x50b68
	ldrb r1, [r5, #10]	@ 00050b68 a97a
.org 0x50b6a
	movs r0, #32	@ 00050b6a 2020
.org 0x50b6c
	ands r0, r1	@ 00050b6c 0840
.org 0x50b6e
	cmp r0, #0	@ 00050b6e 0028
.org 0x50b70
	beq.n 0x50b8e	@ 00050b70 0dd0
.org 0x50b72
	movs r1, #240	@ 00050b72 f021
.org 0x50b74
	lsls r1, r1, #5	@ 00050b74 4901
.org 0x50b76
	b.n 0x50b90	@ 00050b76 0be0
.org 0x50b78
	movs r0, #224	@ 00050b78 e020
.org 0x50b7a
	lsls r0, r0, #4	@ 00050b7a 0001
.org 0x50b7c
	str r0, [sp, #8]	@ 00050b7c 0290
.org 0x50b7e
	ldrb r1, [r5, #10]	@ 00050b7e a97a
.org 0x50b80
	movs r0, #32	@ 00050b80 2020
.org 0x50b82
	ands r0, r1	@ 00050b82 0840
.org 0x50b84
	cmp r0, #0	@ 00050b84 0028
.org 0x50b86
	beq.n 0x50b8e	@ 00050b86 02d0
.org 0x50b88
	movs r1, #240	@ 00050b88 f021
.org 0x50b8a
	lsls r1, r1, #5	@ 00050b8a 4901
.org 0x50b8c
	b.n 0x50b90	@ 00050b8c 00e0
.org 0x50b8e
	ldr r1, [pc, #20]	@ 00050b8e 0549
.org 0x50b90
	add r0, sp, #8	@ 00050b90 02a8
.org 0x50b92
	str r1, [r0, #4]	@ 00050b92 4160
.org 0x50b94
	adds r1, r0, #0	@ 00050b94 011c
.org 0x50b96
	adds r0, r5, #0	@ 00050b96 281c
.org 0x50b98
	bl 0xd296c	@ 00050b98 81f0e8fe
.org 0x50b9c
	str r0, [r5, #44]	@ 00050b9c e862
.org 0x50b9e
	movs r0, #2	@ 00050b9e 0220
.org 0x50ba0
	strb r0, [r5, #13]	@ 00050ba0 6873
.org 0x50ba2
	b.n 0x50bd6	@ 00050ba2 18e0
.org 0x50ba4
	.byte 0x00,0xe2,0xff,0xff	@ 00050ba4 data
.org 0x50ba8
	cmp r0, #2	@ 00050ba8 0228
.org 0x50baa
	bne.n 0x50bc8	@ 00050baa 0dd1
.org 0x50bac
	ldr r0, [r5, #44]	@ 00050bac e86a
.org 0x50bae
	ldrb r0, [r0, #12]	@ 00050bae 007b
.org 0x50bb0
	cmp r0, #1	@ 00050bb0 0128
.org 0x50bb2
	bls.n 0x50bd6	@ 00050bb2 10d9
.org 0x50bb4
	ldr r2, [pc, #12]	@ 00050bb4 034a
.org 0x50bb6
	ldrb r1, [r2, #18]	@ 00050bb6 917c
