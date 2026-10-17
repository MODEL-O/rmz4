@ FUN_080669ec  entry 0x080669ec  size 457
.thumb
.org 0x669ec
FUN_080669ec:
	push {r4, r5, r6, lr}	@ 000669ec 70b5
.org 0x669ee
	sub sp, #16	@ 000669ee 84b0
.org 0x669f0
	adds r5, r0, #0	@ 000669f0 051c
.org 0x669f2
	ldrb r0, [r5, #14]	@ 000669f2 a87b
.org 0x669f4
	cmp r0, #0	@ 000669f4 0028
.org 0x669f6
	beq.n 0x669fa	@ 000669f6 00d0
.org 0x669f8
	b.n 0x66b96	@ 000669f8 cde0
.org 0x669fa
	adds r1, r5, #0	@ 000669fa 291c
.org 0x669fc
	adds r1, #140	@ 000669fc 8c31
.org 0x669fe
	ldr r4, [r1, #0]	@ 000669fe 0c68
.org 0x66a00
	movs r0, #128	@ 00066a00 8020
.org 0x66a02
	lsls r0, r0, #9	@ 00066a02 4002
.org 0x66a04
	ands r4, r0	@ 00066a04 0440
.org 0x66a06
	adds r6, r1, #0	@ 00066a06 0e1c
.org 0x66a08
	cmp r4, #0	@ 00066a08 002c
.org 0x66a0a
	beq.n 0x66b00	@ 00066a0a 79d0
.org 0x66a0c
	ldr r0, [r5, #84]	@ 00066a0c 686d
.org 0x66a0e
	str r0, [sp, #0]	@ 00066a0e 0090
.org 0x66a10
	ldrb r0, [r5, #30]	@ 00066a10 a87f
.org 0x66a12
	lsls r0, r0, #8	@ 00066a12 0002
.org 0x66a14
	subs r1, #28	@ 00066a14 1c39
.org 0x66a16
	ldrb r1, [r1, #0]	@ 00066a16 0978
.org 0x66a18
	orrs r0, r1	@ 00066a18 0843
.org 0x66a1a
	ldr r1, [pc, #56]	@ 00066a1a 0e49
.org 0x66a1c
	cmp r0, r1	@ 00066a1c 8842
.org 0x66a1e
	bgt.n 0x66a74	@ 00066a1e 29dc
.org 0x66a20
	ldr r0, [r5, #88]	@ 00066a20 a86d
.org 0x66a22
	ldr r1, [pc, #52]	@ 00066a22 0d49
.org 0x66a24
	adds r0, r0, r1	@ 00066a24 4018
.org 0x66a26
	str r0, [sp, #4]	@ 00066a26 0190
.org 0x66a28
	ldr r1, [pc, #48]	@ 00066a28 0c49
.org 0x66a2a
	adds r0, r5, #0	@ 00066a2a 281c
.org 0x66a2c
	bl 0x1cf00	@ 00066a2c b6f768fa
.org 0x66a30
	adds r1, r5, #0	@ 00066a30 291c
.org 0x66a32
	adds r1, #84	@ 00066a32 5431
.org 0x66a34
	adds r0, r5, #0	@ 00066a34 281c
.org 0x66a36
	movs r2, #2	@ 00066a36 0222
.org 0x66a38
	movs r3, #0	@ 00066a38 0023
.org 0x66a3a
	bl 0x9cd78	@ 00066a3a 36f09df9
.org 0x66a3e
	str r0, [r5, #44]	@ 00066a3e e862
.org 0x66a40
	ldrb r1, [r5, #10]	@ 00066a40 a97a
.org 0x66a42
	movs r0, #16	@ 00066a42 1020
.org 0x66a44
	ands r0, r1	@ 00066a44 0840
.org 0x66a46
	cmp r0, #0	@ 00066a46 0028
.org 0x66a48
	beq.n 0x66a60	@ 00066a48 0ad0
.org 0x66a4a
	movs r0, #32	@ 00066a4a 2020
.org 0x66a4c
	str r0, [r5, #92]	@ 00066a4c e865
.org 0x66a4e
	subs r0, #33	@ 00066a4e 2138
.org 0x66a50
	b.n 0x66a68	@ 00066a50 0ae0
.org 0x66a52
	.byte 0x00	@ 00066a52 data
.org 0x66a53
	.byte 0x00	@ 00066a53 data
.org 0x66a54
	.byte 0x22,0xa9,0x00,0x00	@ 00066a54 data
.org 0x66a58
	.byte 0x00,0xe4,0xff,0xff	@ 00066a58 data
.org 0x66a5c
	.byte 0x1a,0xa9,0x00,0x00	@ 00066a5c data
.org 0x66a60
	movs r0, #32	@ 00066a60 2020
.org 0x66a62
	negs r0, r0	@ 00066a62 4042
.org 0x66a64
	str r0, [r5, #92]	@ 00066a64 e865
.org 0x66a66
	movs r0, #1	@ 00066a66 0120
.org 0x66a68
	str r0, [r5, #100]	@ 00066a68 6866
.org 0x66a6a
	movs r0, #0	@ 00066a6a 0020
.org 0x66a6c
	strb r0, [r5, #15]	@ 00066a6c e873
.org 0x66a6e
	adds r4, r5, #0	@ 00066a6e 2c1c
.org 0x66a70
	adds r4, #216	@ 00066a70 d834
.org 0x66a72
	b.n 0x66adc	@ 00066a72 33e0
.org 0x66a74
	adds r4, r5, #0	@ 00066a74 2c1c
.org 0x66a76
	adds r4, #216	@ 00066a76 d834
.org 0x66a78
	ldrb r0, [r4, #0]	@ 00066a78 2078
.org 0x66a7a
	movs r2, #1	@ 00066a7a 0122
.org 0x66a7c
	eors r0, r2	@ 00066a7c 5040
.org 0x66a7e
	ands r0, r2	@ 00066a7e 1040
.org 0x66a80
	adds r1, r5, #0	@ 00066a80 291c
.org 0x66a82
	adds r1, #76	@ 00066a82 4c31
.org 0x66a84
	strb r0, [r1, #0]	@ 00066a84 0870
.org 0x66a86
	ldrb r1, [r4, #0]	@ 00066a86 2178
.org 0x66a88
	eors r1, r2	@ 00066a88 5140
.org 0x66a8a
	movs r0, #74	@ 00066a8a 4a20
.org 0x66a8c
	adds r0, r0, r5	@ 00066a8c 4019
.org 0x66a8e
	mov ip, r0	@ 00066a8e 8446
.org 0x66a90
	ands r1, r2	@ 00066a90 1140
.org 0x66a92
	lsls r3, r1, #4	@ 00066a92 0b01
.org 0x66a94
	ldrb r2, [r0, #0]	@ 00066a94 0278
.org 0x66a96
	movs r0, #17	@ 00066a96 1120
.org 0x66a98
	negs r0, r0	@ 00066a98 4042
.org 0x66a9a
	ands r0, r2	@ 00066a9a 1040
.org 0x66a9c
	orrs r0, r3	@ 00066a9c 1843
.org 0x66a9e
	mov r2, ip	@ 00066a9e 6246
.org 0x66aa0
	strb r0, [r2, #0]	@ 00066aa0 1070
.org 0x66aa2
	cmp r1, #0	@ 00066aa2 0029
.org 0x66aa4
	beq.n 0x66aae	@ 00066aa4 03d0
.org 0x66aa6
	ldrb r0, [r5, #10]	@ 00066aa6 a87a
.org 0x66aa8
	movs r1, #16	@ 00066aa8 1021
.org 0x66aaa
	orrs r0, r1	@ 00066aaa 0843
.org 0x66aac
	b.n 0x66ab4	@ 00066aac 02e0
.org 0x66aae
	ldrb r1, [r5, #10]	@ 00066aae a97a
.org 0x66ab0
	movs r0, #239	@ 00066ab0 ef20
.org 0x66ab2
	ands r0, r1	@ 00066ab2 0840
.org 0x66ab4
	strb r0, [r5, #10]	@ 00066ab4 a872
.org 0x66ab6
	ldr r0, [r5, #88]	@ 00066ab6 a86d
.org 0x66ab8
	str r0, [sp, #4]	@ 00066ab8 0190
.org 0x66aba
	ldr r1, [pc, #64]	@ 00066aba 1049
.org 0x66abc
	adds r0, r5, #0	@ 00066abc 281c
.org 0x66abe
	bl 0x1cf00	@ 00066abe b6f71ffa
.org 0x66ac2
	adds r1, r5, #0	@ 00066ac2 291c
.org 0x66ac4
	adds r1, #84	@ 00066ac4 5431
.org 0x66ac6
	adds r0, r5, #0	@ 00066ac6 281c
.org 0x66ac8
	movs r2, #2	@ 00066ac8 0222
.org 0x66aca
	movs r3, #1	@ 00066aca 0123
.org 0x66acc
	bl 0x9cd78	@ 00066acc 36f054f9
.org 0x66ad0
	str r0, [r5, #44]	@ 00066ad0 e862
.org 0x66ad2
	movs r0, #0	@ 00066ad2 0020
.org 0x66ad4
	str r0, [r5, #92]	@ 00066ad4 e865
.org 0x66ad6
	str r0, [r5, #100]	@ 00066ad6 6866
.org 0x66ad8
	movs r0, #1	@ 00066ad8 0120
.org 0x66ada
	strb r0, [r5, #15]	@ 00066ada e873
.org 0x66adc
	movs r2, #128	@ 00066adc 8022
.org 0x66ade
	lsls r2, r2, #2	@ 00066ade 9200
.org 0x66ae0
	ldrb r3, [r4, #0]	@ 00066ae0 2378
.org 0x66ae2
	movs r0, #0	@ 00066ae2 0020
.org 0x66ae4
	mov r1, sp	@ 00066ae4 6946
.org 0x66ae6
	bl 0xd0dc4	@ 00066ae6 6af06df9
.org 0x66aea
	movs r4, #0	@ 00066aea 0024
.org 0x66aec
	movs r0, #32	@ 00066aec 2020
.org 0x66aee
	strb r0, [r5, #18]	@ 00066aee a874
.org 0x66af0
	movs r0, #47	@ 00066af0 2f20
.org 0x66af2
	bl 0x2b10	@ 00066af2 9cf70df8
.org 0x66af6
	strb r4, [r5, #13]	@ 00066af6 6c73
.org 0x66af8
	b.n 0x66b30	@ 00066af8 1ae0
.org 0x66afa
	.byte 0x00	@ 00066afa data
.org 0x66afb
	.byte 0x00	@ 00066afb data
.org 0x66afc
	.byte 0x24,0xa9,0x00,0x00	@ 00066afc data
.org 0x66b00
	ldrb r0, [r5, #30]	@ 00066b00 a87f
.org 0x66b02
	lsls r0, r0, #8	@ 00066b02 0002
.org 0x66b04
	adds r1, r5, #0	@ 00066b04 291c
.org 0x66b06
	adds r1, #112	@ 00066b06 7031
.org 0x66b08
	ldrb r1, [r1, #0]	@ 00066b08 0978
.org 0x66b0a
	orrs r0, r1	@ 00066b0a 0843
.org 0x66b0c
	ldr r1, [pc, #16]	@ 00066b0c 0449
.org 0x66b0e
	cmp r0, r1	@ 00066b0e 8842
.org 0x66b10
	bgt.n 0x66b24	@ 00066b10 08dc
.org 0x66b12
	subs r1, #10	@ 00066b12 0a39
.org 0x66b14
	adds r0, r5, #0	@ 00066b14 281c
.org 0x66b16
	bl 0x1cf00	@ 00066b16 b6f7f3f9
.org 0x66b1a
	strb r4, [r5, #15]	@ 00066b1a ec73
.org 0x66b1c
	b.n 0x66b28	@ 00066b1c 04e0
.org 0x66b1e
	.byte 0x00	@ 00066b1e data
.org 0x66b1f
	.byte 0x00	@ 00066b1f data
.org 0x66b20
	.byte 0x22,0xa9,0x00,0x00	@ 00066b20 data
.org 0x66b24
	movs r0, #1	@ 00066b24 0120
.org 0x66b26
	strb r0, [r5, #15]	@ 00066b26 e873
.org 0x66b28
	movs r0, #1	@ 00066b28 0120
.org 0x66b2a
	strb r0, [r5, #13]	@ 00066b2a 6873
.org 0x66b2c
	movs r0, #64	@ 00066b2c 4020
.org 0x66b2e
	strb r0, [r5, #18]	@ 00066b2e a874
.org 0x66b30
	ldr r0, [pc, #12]	@ 00066b30 0348
.org 0x66b32
	ldrh r0, [r0, #0]	@ 00066b32 0088
.org 0x66b34
	cmp r0, #9	@ 00066b34 0928
.org 0x66b36
	bne.n 0x66b44	@ 00066b36 05d1
.org 0x66b38
	movs r0, #105	@ 00066b38 6920
.org 0x66b3a
	bl 0x2b10	@ 00066b3a 9bf7e9ff
.org 0x66b3e
	b.n 0x66b4a	@ 00066b3e 04e0
.org 0x66b40
	.byte 0x10,0xe9,0x02,0x02	@ 00066b40 data
.org 0x66b44
	movs r0, #106	@ 00066b44 6a20
.org 0x66b46
	bl 0x2b10	@ 00066b46 9bf7e3ff
.org 0x66b4a
	movs r0, #97	@ 00066b4a 6120
.org 0x66b4c
	bl 0x2b5c	@ 00066b4c 9cf706f8
.org 0x66b50
	ldr r0, [pc, #116]	@ 00066b50 1d48
.org 0x66b52
	ldr r0, [r0, #0]	@ 00066b52 0068
.org 0x66b54
	adds r0, #180	@ 00066b54 b430
.org 0x66b56
	movs r1, #0	@ 00066b56 0021
.org 0x66b58
	str r1, [r0, #56]	@ 00066b58 8163
.org 0x66b5a
	str r1, [r6, #0]	@ 00066b5a 3160
.org 0x66b5c
	adds r0, r5, #0	@ 00066b5c 281c
.org 0x66b5e
	adds r0, #144	@ 00066b5e 9030
.org 0x66b60
	str r1, [r0, #0]	@ 00066b60 0160
.org 0x66b62
	adds r0, #4	@ 00066b62 0430
.org 0x66b64
	strb r1, [r0, #0]	@ 00066b64 0170
.org 0x66b66
	ldrb r1, [r5, #10]	@ 00066b66 a97a
.org 0x66b68
	movs r0, #251	@ 00066b68 fb20
.org 0x66b6a
	ands r0, r1	@ 00066b6a 0840
.org 0x66b6c
	strb r0, [r5, #10]	@ 00066b6c a872
.org 0x66b6e
	ldr r3, [pc, #92]	@ 00066b6e 174b
.org 0x66b70
	ldrh r2, [r3, #8]	@ 00066b70 1a89
.org 0x66b72
	movs r4, #1	@ 00066b72 0124
.org 0x66b74
	adds r0, r4, #0	@ 00066b74 201c
.org 0x66b76
	ands r0, r2	@ 00066b76 1040
.org 0x66b78
	cmp r0, #0	@ 00066b78 0028
.org 0x66b7a
	beq.n 0x66b90	@ 00066b7a 09d0
.org 0x66b7c
	ldrb r1, [r3, #18]	@ 00066b7c 997c
.org 0x66b7e
	adds r0, r4, #0	@ 00066b7e 201c
.org 0x66b80
	ands r0, r1	@ 00066b80 0840
.org 0x66b82
	cmp r0, #0	@ 00066b82 0028
.org 0x66b84
	bne.n 0x66b90	@ 00066b84 04d1
.org 0x66b86
	ldr r0, [pc, #72]	@ 00066b86 1248
.org 0x66b88
	ands r0, r2	@ 00066b88 1040
.org 0x66b8a
	movs r1, #16	@ 00066b8a 1021
.org 0x66b8c
	orrs r0, r1	@ 00066b8c 0843
.org 0x66b8e
	strh r0, [r3, #8]	@ 00066b8e 1881
.org 0x66b90
	ldrb r0, [r5, #14]	@ 00066b90 a87b
.org 0x66b92
	adds r0, #1	@ 00066b92 0130
.org 0x66b94
	strb r0, [r5, #14]	@ 00066b94 a873
.org 0x66b96
	adds r0, r5, #0	@ 00066b96 281c
.org 0x66b98
	bl 0x1cff0	@ 00066b98 b6f72afa
.org 0x66b9c
	ldrb r0, [r5, #13]	@ 00066b9c 687b
.org 0x66b9e
	cmp r0, #0	@ 00066b9e 0028
.org 0x66ba0
	bne.n 0x66bd4	@ 00066ba0 18d1
.org 0x66ba2
	ldr r0, [r5, #84]	@ 00066ba2 686d
.org 0x66ba4
	ldr r1, [r5, #92]	@ 00066ba4 e96d
.org 0x66ba6
	adds r0, r0, r1	@ 00066ba6 4018
.org 0x66ba8
	str r0, [r5, #84]	@ 00066ba8 6865
.org 0x66baa
	ldr r0, [r5, #100]	@ 00066baa 686e
.org 0x66bac
	adds r1, r1, r0	@ 00066bac 0918
.org 0x66bae
	str r1, [r5, #92]	@ 00066bae e965
.org 0x66bb0
	ldrb r0, [r5, #18]	@ 00066bb0 a87c
.org 0x66bb2
	subs r0, #1	@ 00066bb2 0138
.org 0x66bb4
	strb r0, [r5, #18]	@ 00066bb4 a874
