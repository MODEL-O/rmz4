@ FUN_080639a8  entry 0x080639a8  size 562
.thumb
.org 0x639a8
FUN_080639a8:
	push {r4, r5, r6, r7, lr}	@ 000639a8 f0b5
.org 0x639aa
	mov r7, r9	@ 000639aa 4f46
.org 0x639ac
	mov r6, r8	@ 000639ac 4646
.org 0x639ae
	push {r6, r7}	@ 000639ae c0b4
.org 0x639b0
	sub sp, #12	@ 000639b0 83b0
.org 0x639b2
	adds r6, r0, #0	@ 000639b2 061c
.org 0x639b4
	ldrb r0, [r6, #10]	@ 000639b4 b07a
.org 0x639b6
	lsrs r4, r0, #4	@ 000639b6 0409
.org 0x639b8
	movs r1, #1	@ 000639b8 0121
.org 0x639ba
	ands r4, r1	@ 000639ba 0c40
.org 0x639bc
	ldrb r3, [r6, #15]	@ 000639bc f37b
.org 0x639be
	cmp r3, #0	@ 000639be 002b
.org 0x639c0
	bne.n 0x63a0a	@ 000639c0 23d1
.org 0x639c2
	adds r0, r6, #0	@ 000639c2 301c
.org 0x639c4
	adds r0, #196	@ 000639c4 c430
.org 0x639c6
	ldr r0, [r0, #0]	@ 000639c6 0068
.org 0x639c8
	cmp r0, #0	@ 000639c8 0028
.org 0x639ca
	beq.n 0x639d0	@ 000639ca 01d0
.org 0x639cc
	adds r0, #180	@ 000639cc b430
.org 0x639ce
	strb r1, [r0, #0]	@ 000639ce 0170
.org 0x639d0
	lsls r0, r4, #1	@ 000639d0 6000
.org 0x639d2
	subs r2, r0, #1	@ 000639d2 421e
.org 0x639d4
	lsls r0, r2, #9	@ 000639d4 5002
.org 0x639d6
	str r0, [r6, #92]	@ 000639d6 f065
.org 0x639d8
	lsls r0, r2, #4	@ 000639d8 1001
.org 0x639da
	negs r0, r0	@ 000639da 4042
.org 0x639dc
	str r0, [r6, #100]	@ 000639dc 7066
.org 0x639de
	movs r2, #0	@ 000639de 0022
.org 0x639e0
	adds r0, r6, #0	@ 000639e0 301c
.org 0x639e2
	adds r0, #212	@ 000639e2 d430
.org 0x639e4
	ldr r0, [r0, #0]	@ 000639e4 0068
.org 0x639e6
	movs r1, #224	@ 000639e6 e021
.org 0x639e8
	lsls r1, r1, #7	@ 000639e8 c901
.org 0x639ea
	adds r0, r0, r1	@ 000639ea 4018
.org 0x639ec
	ldr r1, [r6, #88]	@ 000639ec b16d
.org 0x639ee
	cmp r1, r0	@ 000639ee 8142
.org 0x639f0
	bge.n 0x639f4	@ 000639f0 00da
.org 0x639f2
	movs r2, #1	@ 000639f2 0122
.org 0x639f4
	lsls r1, r2, #1	@ 000639f4 5100
.org 0x639f6
	subs r2, r1, #1	@ 000639f6 4a1e
.org 0x639f8
	str r3, [r6, #96]	@ 000639f8 3366
.org 0x639fa
	lsls r0, r2, #4	@ 000639fa 1001
.org 0x639fc
	str r0, [r6, #104]	@ 000639fc b066
.org 0x639fe
	strb r3, [r6, #18]	@ 000639fe b374
.org 0x63a00
	orrs r1, r4	@ 00063a00 2143
.org 0x63a02
	strb r1, [r6, #19]	@ 00063a02 f174
.org 0x63a04
	ldrb r0, [r6, #15]	@ 00063a04 f07b
.org 0x63a06
	adds r0, #1	@ 00063a06 0130
.org 0x63a08
	strb r0, [r6, #15]	@ 00063a08 f073
.org 0x63a0a
	ldrb r0, [r6, #19]	@ 00063a0a f07c
.org 0x63a0c
	movs r1, #1	@ 00063a0c 0121
.org 0x63a0e
	movs r5, #1	@ 00063a0e 0125
.org 0x63a10
	ands r5, r0	@ 00063a10 0540
.org 0x63a12
	lsrs r2, r0, #1	@ 00063a12 4208
.org 0x63a14
	ands r2, r1	@ 00063a14 0a40
.org 0x63a16
	cmp r5, #0	@ 00063a16 002d
.org 0x63a18
	beq.n 0x63a2a	@ 00063a18 07d0
.org 0x63a1a
	adds r0, r6, #0	@ 00063a1a 301c
.org 0x63a1c
	adds r0, #208	@ 00063a1c d030
.org 0x63a1e
	ldr r0, [r0, #0]	@ 00063a1e 0068
.org 0x63a20
	movs r3, #200	@ 00063a20 c823
.org 0x63a22
	lsls r3, r3, #8	@ 00063a22 1b02
.org 0x63a24
	adds r3, r3, r0	@ 00063a24 1b18
.org 0x63a26
	mov r8, r3	@ 00063a26 9846
.org 0x63a28
	b.n 0x63a38	@ 00063a28 06e0
.org 0x63a2a
	adds r0, r6, #0	@ 00063a2a 301c
.org 0x63a2c
	adds r0, #208	@ 00063a2c d030
.org 0x63a2e
	ldr r0, [r0, #0]	@ 00063a2e 0068
.org 0x63a30
	movs r1, #160	@ 00063a30 a021
.org 0x63a32
	lsls r1, r1, #6	@ 00063a32 8901
.org 0x63a34
	adds r1, r1, r0	@ 00063a34 0918
.org 0x63a36
	mov r8, r1	@ 00063a36 8846
.org 0x63a38
	adds r0, r6, #0	@ 00063a38 301c
.org 0x63a3a
	adds r0, #212	@ 00063a3a d430
.org 0x63a3c
	ldr r0, [r0, #0]	@ 00063a3c 0068
.org 0x63a3e
	movs r3, #224	@ 00063a3e e023
.org 0x63a40
	lsls r3, r3, #7	@ 00063a40 db01
.org 0x63a42
	adds r7, r0, r3	@ 00063a42 c718
.org 0x63a44
	ldr r3, [r6, #100]	@ 00063a44 736e
.org 0x63a46
	lsls r2, r2, #1	@ 00063a46 5200
.org 0x63a48
	mov r9, r2	@ 00063a48 9146
.org 0x63a4a
	cmp r3, #0	@ 00063a4a 002b
.org 0x63a4c
	beq.n 0x63a72	@ 00063a4c 11d0
.org 0x63a4e
	ldr r1, [r6, #84]	@ 00063a4e 716d
.org 0x63a50
	ldr r0, [r6, #92]	@ 00063a50 f06d
.org 0x63a52
	adds r1, r1, r0	@ 00063a52 0918
.org 0x63a54
	str r1, [r6, #84]	@ 00063a54 7165
.org 0x63a56
	adds r0, r0, r3	@ 00063a56 c018
.org 0x63a58
	str r0, [r6, #92]	@ 00063a58 f065
.org 0x63a5a
	mov r4, r8	@ 00063a5a 4446
.org 0x63a5c
	subs r1, r1, r4	@ 00063a5c 091b
.org 0x63a5e
	lsls r0, r5, #1	@ 00063a5e 6800
.org 0x63a60
	subs r0, #1	@ 00063a60 0138
.org 0x63a62
	muls r0, r1	@ 00063a62 4843
.org 0x63a64
	cmp r0, #0	@ 00063a64 0028
.org 0x63a66
	blt.n 0x63ada	@ 00063a66 38db
.org 0x63a68
	str r4, [r6, #84]	@ 00063a68 7465
.org 0x63a6a
	movs r0, #0	@ 00063a6a 0020
.org 0x63a6c
	str r0, [r6, #100]	@ 00063a6c 7066
.org 0x63a6e
	str r0, [r6, #92]	@ 00063a6e f065
.org 0x63a70
	b.n 0x63ada	@ 00063a70 33e0
.org 0x63a72
	ldrb r0, [r6, #18]	@ 00063a72 b07c
.org 0x63a74
	cmp r0, #0	@ 00063a74 0028
.org 0x63a76
	beq.n 0x63a7e	@ 00063a76 02d0
.org 0x63a78
	cmp r0, #1	@ 00063a78 0128
.org 0x63a7a
	beq.n 0x63ac2	@ 00063a7a 22d0
.org 0x63a7c
	b.n 0x63ada	@ 00063a7c 2de0
.org 0x63a7e
	adds r0, r6, #0	@ 00063a7e 301c
.org 0x63a80
	movs r1, #12	@ 00063a80 0c21
.org 0x63a82
	bl 0x65a94	@ 00063a82 02f007f8
.org 0x63a86
	adds r4, #1	@ 00063a86 0134
.org 0x63a88
	movs r0, #1	@ 00063a88 0120
.org 0x63a8a
	ands r4, r0	@ 00063a8a 0440
.org 0x63a8c
	movs r3, #1	@ 00063a8c 0123
.org 0x63a8e
	adds r1, r4, #0	@ 00063a8e 211c
.org 0x63a90
	ands r1, r3	@ 00063a90 1940
.org 0x63a92
	adds r0, r6, #0	@ 00063a92 301c
.org 0x63a94
	adds r0, #76	@ 00063a94 4c30
.org 0x63a96
	strb r1, [r0, #0]	@ 00063a96 0170
.org 0x63a98
	adds r5, r6, #0	@ 00063a98 351c
.org 0x63a9a
	adds r5, #74	@ 00063a9a 4a35
.org 0x63a9c
	lsls r1, r1, #4	@ 00063a9c 0901
.org 0x63a9e
	ldrb r2, [r5, #0]	@ 00063a9e 2a78
.org 0x63aa0
	movs r0, #17	@ 00063aa0 1120
.org 0x63aa2
	negs r0, r0	@ 00063aa2 4042
.org 0x63aa4
	ands r0, r2	@ 00063aa4 1040
.org 0x63aa6
	orrs r0, r1	@ 00063aa6 0843
.org 0x63aa8
	strb r0, [r5, #0]	@ 00063aa8 2870
.org 0x63aaa
	ands r4, r3	@ 00063aaa 1c40
.org 0x63aac
	cmp r4, #0	@ 00063aac 002c
.org 0x63aae
	beq.n 0x63ab8	@ 00063aae 03d0
.org 0x63ab0
	ldrb r0, [r6, #10]	@ 00063ab0 b07a
.org 0x63ab2
	movs r1, #16	@ 00063ab2 1021
.org 0x63ab4
	orrs r0, r1	@ 00063ab4 0843
.org 0x63ab6
	b.n 0x63abe	@ 00063ab6 02e0
.org 0x63ab8
	ldrb r1, [r6, #10]	@ 00063ab8 b17a
.org 0x63aba
	movs r0, #239	@ 00063aba ef20
.org 0x63abc
	ands r0, r1	@ 00063abc 0840
.org 0x63abe
	strb r0, [r6, #10]	@ 00063abe b072
.org 0x63ac0
	b.n 0x63ad4	@ 00063ac0 08e0
.org 0x63ac2
	adds r0, r6, #0	@ 00063ac2 301c
.org 0x63ac4
	adds r0, #115	@ 00063ac4 7330
.org 0x63ac6
	ldrb r0, [r0, #0]	@ 00063ac6 0078
.org 0x63ac8
	cmp r0, #3	@ 00063ac8 0328
.org 0x63aca
	bne.n 0x63ada	@ 00063aca 06d1
.org 0x63acc
	adds r0, r6, #0	@ 00063acc 301c
.org 0x63ace
	movs r1, #0	@ 00063ace 0021
.org 0x63ad0
	bl 0x65a94	@ 00063ad0 01f0e0ff
.org 0x63ad4
	ldrb r0, [r6, #18]	@ 00063ad4 b07c
.org 0x63ad6
	adds r0, #1	@ 00063ad6 0130
.org 0x63ad8
	strb r0, [r6, #18]	@ 00063ad8 b074
.org 0x63ada
	ldr r5, [r6, #96]	@ 00063ada 356e
.org 0x63adc
	negs r0, r5	@ 00063adc 6842
.org 0x63ade
	ldr r1, [r6, #104]	@ 00063ade b16e
.org 0x63ae0
	negs r4, r1	@ 00063ae0 4c42
.org 0x63ae2
	adds r1, r4, #0	@ 00063ae2 211c
.org 0x63ae4
	bl 0x128fb8	@ 00063ae4 c5f068fa
.org 0x63ae8
	adds r2, r0, #1	@ 00063ae8 421c
.org 0x63aea
	lsls r1, r5, #1	@ 00063aea 6900
.org 0x63aec
	muls r0, r4	@ 00063aec 6043
.org 0x63aee
	adds r1, r1, r0	@ 00063aee 0918
.org 0x63af0
	adds r0, r2, #0	@ 00063af0 101c
.org 0x63af2
	muls r0, r1	@ 00063af2 4843
.org 0x63af4
	asrs r0, r0, #1	@ 00063af4 4010
.org 0x63af6
	ldr r1, [r6, #88]	@ 00063af6 b16d
.org 0x63af8
	adds r2, r1, r0	@ 00063af8 0a18
.org 0x63afa
	subs r1, r2, r7	@ 00063afa d11b
.org 0x63afc
	mov r0, r9	@ 00063afc 4846
.org 0x63afe
	subs r0, #1	@ 00063afe 0138
.org 0x63b00
	muls r0, r1	@ 00063b00 4843
.org 0x63b02
	cmp r0, #0	@ 00063b02 0028
.org 0x63b04
	blt.n 0x63b08	@ 00063b04 00db
.org 0x63b06
	str r4, [r6, #104]	@ 00063b06 b466
.org 0x63b08
	ldr r0, [r6, #88]	@ 00063b08 b06d
.org 0x63b0a
	adds r0, r0, r5	@ 00063b0a 4019
.org 0x63b0c
	str r0, [r6, #88]	@ 00063b0c b065
.org 0x63b0e
	ldr r0, [r6, #104]	@ 00063b0e b06e
.org 0x63b10
	adds r0, r5, r0	@ 00063b10 2818
.org 0x63b12
	str r0, [r6, #96]	@ 00063b12 3066
.org 0x63b14
	cmp r0, #0	@ 00063b14 0028
.org 0x63b16
	bge.n 0x63b24	@ 00063b16 05da
.org 0x63b18
	ldr r1, [pc, #4]	@ 00063b18 0149
.org 0x63b1a
	cmp r0, r1	@ 00063b1a 8842
.org 0x63b1c
	bge.n 0x63b32	@ 00063b1c 09da
.org 0x63b1e
	b.n 0x63b30	@ 00063b1e 07e0
.org 0x63b20
	.byte 0x00,0xfe,0xff,0xff	@ 00063b20 data
.org 0x63b24
	cmp r0, #0	@ 00063b24 0028
.org 0x63b26
	ble.n 0x63b32	@ 00063b26 04dd
.org 0x63b28
	movs r1, #128	@ 00063b28 8021
.org 0x63b2a
	lsls r1, r1, #2	@ 00063b2a 8900
.org 0x63b2c
	cmp r0, r1	@ 00063b2c 8842
.org 0x63b2e
	ble.n 0x63b32	@ 00063b2e 00dd
.org 0x63b30
	str r1, [r6, #96]	@ 00063b30 3166
.org 0x63b32
	ldr r2, [r6, #88]	@ 00063b32 b26d
.org 0x63b34
	subs r0, r2, r7	@ 00063b34 d01b
.org 0x63b36
	mov r1, r9	@ 00063b36 4946
.org 0x63b38
	subs r1, #1	@ 00063b38 0139
.org 0x63b3a
	muls r0, r1	@ 00063b3a 4843
.org 0x63b3c
	cmp r0, #0	@ 00063b3c 0028
.org 0x63b3e
	blt.n 0x63b48	@ 00063b3e 03db
.org 0x63b40
	str r7, [r6, #88]	@ 00063b40 b765
.org 0x63b42
	movs r0, #0	@ 00063b42 0020
.org 0x63b44
	str r0, [r6, #104]	@ 00063b44 b066
.org 0x63b46
	str r0, [r6, #96]	@ 00063b46 3066
.org 0x63b48
	adds r0, r6, #0	@ 00063b48 301c
.org 0x63b4a
	bl 0x1cff0	@ 00063b4a b9f751fa
.org 0x63b4e
	adds r0, r6, #0	@ 00063b4e 301c
.org 0x63b50
	adds r0, #116	@ 00063b50 7430
.org 0x63b52
	ldr r4, [pc, #140]	@ 00063b52 234c
.org 0x63b54
	ldr r3, [pc, #140]	@ 00063b54 234b
.org 0x63b56
	adds r1, r6, #0	@ 00063b56 311c
.org 0x63b58
	adds r1, #180	@ 00063b58 b431
.org 0x63b5a
	ldrb r2, [r1, #0]	@ 00063b5a 0a78
.org 0x63b5c
	lsls r1, r2, #1	@ 00063b5c 5100
.org 0x63b5e
	adds r1, r1, r3	@ 00063b5e c918
.org 0x63b60
	ldrh r1, [r1, #0]	@ 00063b60 0988
.org 0x63b62
	lsls r1, r1, #2	@ 00063b62 8900
.org 0x63b64
	adds r1, r1, r4	@ 00063b64 0919
.org 0x63b66
	adds r3, r6, #0	@ 00063b66 331c
.org 0x63b68
	adds r3, #113	@ 00063b68 7133
.org 0x63b6a
	movs r5, #0	@ 00063b6a 0025
.org 0x63b6c
	ldrsb r5, [r3, r5]	@ 00063b6c 5d57
.org 0x63b6e
	ldr r1, [r1, #0]	@ 00063b6e 0968
.org 0x63b70
	lsls r3, r5, #2	@ 00063b70 ab00
.org 0x63b72
	adds r3, r3, r1	@ 00063b72 5b18
.org 0x63b74
	ldr r4, [pc, #112]	@ 00063b74 1c4c
.org 0x63b76
	adds r1, r6, #0	@ 00063b76 311c
.org 0x63b78
	adds r1, #181	@ 00063b78 b531
.org 0x63b7a
	ldrb r1, [r1, #0]	@ 00063b7a 0978
.org 0x63b7c
	lsls r1, r1, #2	@ 00063b7c 8900
.org 0x63b7e
	adds r1, r1, r4	@ 00063b7e 0919
.org 0x63b80
	ldr r1, [r1, #0]	@ 00063b80 0968
.org 0x63b82
	lsls r2, r2, #2	@ 00063b82 9200
.org 0x63b84
	adds r2, r2, r1	@ 00063b84 5218
.org 0x63b86
	ldr r1, [r2, #0]	@ 00063b86 1168
.org 0x63b88
	adds r1, r1, r5	@ 00063b88 4919
.org 0x63b8a
	ldrb r1, [r1, #0]	@ 00063b8a 0978
.org 0x63b8c
	lsls r2, r1, #1	@ 00063b8c 4a00
.org 0x63b8e
	adds r2, r2, r1	@ 00063b8e 5218
.org 0x63b90
	lsls r2, r2, #3	@ 00063b90 d200
.org 0x63b92
	ldr r1, [r3, #0]	@ 00063b92 1968
.org 0x63b94
	adds r1, r1, r2	@ 00063b94 8918
.org 0x63b96
	bl 0x5784	@ 00063b96 a1f7f5fd
.org 0x63b9a
	ldrb r0, [r6, #18]	@ 00063b9a b07c
.org 0x63b9c
	cmp r0, #2	@ 00063b9c 0228
.org 0x63b9e
	bne.n 0x63bd0	@ 00063b9e 17d1
.org 0x63ba0
	ldr r0, [r6, #84]	@ 00063ba0 706d
.org 0x63ba2
	cmp r0, r8	@ 00063ba2 4045
.org 0x63ba4
	bne.n 0x63bd0	@ 00063ba4 14d1
.org 0x63ba6
	ldr r0, [r6, #88]	@ 00063ba6 b06d
.org 0x63ba8
	cmp r0, r7	@ 00063ba8 b842
.org 0x63baa
	bne.n 0x63bd0	@ 00063baa 11d1
.org 0x63bac
	mov r1, sp	@ 00063bac 6946
.org 0x63bae
	ldr r0, [pc, #60]	@ 00063bae 0f48
.org 0x63bb0
	ldmia r0!, {r2, r3, r4}	@ 00063bb0 1cc8
.org 0x63bb2
	stmia r1!, {r2, r3, r4}	@ 00063bb2 1cc1
.org 0x63bb4
	adds r0, r6, #0	@ 00063bb4 301c
.org 0x63bb6
	bl 0x66160	@ 00063bb6 02f0d3fa
.org 0x63bba
	lsls r0, r0, #2	@ 00063bba 8000
.org 0x63bbc
	add r0, sp	@ 00063bbc 6844
.org 0x63bbe
	ldr r1, [r0, #0]	@ 00063bbe 0168
.org 0x63bc0
	adds r0, r6, #0	@ 00063bc0 301c
.org 0x63bc2
	adds r0, #224	@ 00063bc2 e030
.org 0x63bc4
	movs r2, #0	@ 00063bc4 0022
.org 0x63bc6
	strb r1, [r0, #0]	@ 00063bc6 0170
.org 0x63bc8
	movs r0, #13	@ 00063bc8 0d20
.org 0x63bca
	strb r0, [r6, #13]	@ 00063bca 7073
.org 0x63bcc
	strb r2, [r6, #14]	@ 00063bcc b273
.org 0x63bce
	strb r2, [r6, #15]	@ 00063bce f273
.org 0x63bd0
	add sp, #12	@ 00063bd0 03b0
.org 0x63bd2
	pop {r3, r4}	@ 00063bd2 18bc
.org 0x63bd4
	mov r8, r3	@ 00063bd4 9846
.org 0x63bd6
	mov r9, r4	@ 00063bd6 a146
.org 0x63bd8
	pop {r4, r5, r6, r7}	@ 00063bd8 f0bc
