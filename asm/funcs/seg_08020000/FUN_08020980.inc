@ FUN_08020980  entry 0x08020980  size 1100
.thumb
.org 0x20980
FUN_08020980:
	push {r4, r5, r6, r7, lr}	@ 00020980 f0b5
.org 0x20982
	mov r7, r8	@ 00020982 4746
.org 0x20984
	push {r7}	@ 00020984 80b4
.org 0x20986
	adds r4, r0, #0	@ 00020986 041c
.org 0x20988
	ldr r5, [r4, #32]	@ 00020988 256a
.org 0x2098a
	movs r0, #190	@ 0002098a be20
.org 0x2098c
	lsls r0, r0, #1	@ 0002098c 4000
.org 0x2098e
	adds r6, r4, r0	@ 0002098e 2618
.org 0x20990
	ldrb r3, [r6, #0]	@ 00020990 3378
.org 0x20992
	cmp r3, #0	@ 00020992 002b
.org 0x20994
	beq.n 0x20998	@ 00020994 00d0
.org 0x20996
	b.n 0x20af0	@ 00020996 abe0
.org 0x20998
	ldr r5, [pc, #80]	@ 00020998 144d
.org 0x2099a
	ldrh r0, [r5, #8]	@ 0002099a 2889
.org 0x2099c
	movs r1, #1	@ 0002099c 0121
.org 0x2099e
	mov r8, r1	@ 0002099e 8846
.org 0x209a0
	movs r2, #0	@ 000209a0 0022
.org 0x209a2
	mov ip, r2	@ 000209a2 9446
.org 0x209a4
	mov r1, r8	@ 000209a4 4146
.org 0x209a6
	orrs r0, r1	@ 000209a6 0843
.org 0x209a8
	strh r0, [r5, #8]	@ 000209a8 2881
.org 0x209aa
	ldr r7, [pc, #68]	@ 000209aa 114f
.org 0x209ac
	ldrb r0, [r7, #4]	@ 000209ac 3879
.org 0x209ae
	movs r1, #8	@ 000209ae 0821
.org 0x209b0
	orrs r1, r0	@ 000209b0 0143
.org 0x209b2
	strb r1, [r7, #4]	@ 000209b2 3971
.org 0x209b4
	movs r2, #196	@ 000209b4 c422
.org 0x209b6
	lsls r2, r2, #1	@ 000209b6 5200
.org 0x209b8
	adds r0, r5, r2	@ 000209b8 a818
.org 0x209ba
	str r3, [r0, #0]	@ 000209ba 0360
.org 0x209bc
	subs r2, #11	@ 000209bc 0b3a
.org 0x209be
	adds r0, r4, r2	@ 000209be a018
.org 0x209c0
	mov r2, ip	@ 000209c0 6246
.org 0x209c2
	strb r2, [r0, #0]	@ 000209c2 0270
.org 0x209c4
	movs r0, #64	@ 000209c4 4020
.org 0x209c6
	ands r1, r0	@ 000209c6 0140
.org 0x209c8
	cmp r1, #0	@ 000209c8 0029
.org 0x209ca
	beq.n 0x209f8	@ 000209ca 15d0
.org 0x209cc
	adds r0, r5, #0	@ 000209cc 281c
.org 0x209ce
	adds r0, #16	@ 000209ce 1030
.org 0x209d0
	ldr r1, [pc, #32]	@ 000209d0 0849
.org 0x209d2
	ldr r1, [r1, #12]	@ 000209d2 c968
.org 0x209d4
	ldr r1, [r1, #64]	@ 000209d4 096c
.org 0x209d6
	bl 0x275f0	@ 000209d6 06f00bfe
.org 0x209da
	movs r0, #192	@ 000209da c020
.org 0x209dc
	lsls r0, r0, #1	@ 000209dc 4000
.org 0x209de
	adds r1, r4, r0	@ 000209de 2118
.org 0x209e0
	movs r0, #225	@ 000209e0 e120
.org 0x209e2
	lsls r0, r0, #3	@ 000209e2 c000
.org 0x209e4
	str r0, [r1, #0]	@ 000209e4 0860
.org 0x209e6
	movs r0, #20	@ 000209e6 1420
.org 0x209e8
	b.n 0x20ea4	@ 000209e8 5ce2
.org 0x209ea
	.byte 0x00	@ 000209ea data
.org 0x209eb
	.byte 0x00	@ 000209eb data
.org 0x209ec
	.byte 0x10,0xe9,0x02,0x02	@ 000209ec data
.org 0x209f0
	.byte 0xb0,0xe8,0x02,0x02	@ 000209f0 data
.org 0x209f4
	.byte 0xf8,0x2c,0x84,0x08	@ 000209f4 data
.org 0x209f8
	ldrb r4, [r5, #2]	@ 000209f8 ac78
.org 0x209fa
	cmp r4, #0	@ 000209fa 002c
.org 0x209fc
	bne.n 0x20a24	@ 000209fc 12d1
.org 0x209fe
	adds r0, r5, #0	@ 000209fe 281c
.org 0x20a00
	adds r0, #16	@ 00020a00 1030
.org 0x20a02
	ldr r1, [pc, #28]	@ 00020a02 0749
.org 0x20a04
	ldr r1, [r1, #12]	@ 00020a04 c968
.org 0x20a06
	ldr r1, [r1, #0]	@ 00020a06 0968
.org 0x20a08
	bl 0x275f0	@ 00020a08 06f0f2fd
.org 0x20a0c
	movs r0, #1	@ 00020a0c 0120
.org 0x20a0e
	bl 0x1f63c	@ 00020a0e fef715fe
.org 0x20a12
	ldrb r1, [r7, #9]	@ 00020a12 797a
.org 0x20a14
	movs r0, #223	@ 00020a14 df20
.org 0x20a16
	ands r0, r1	@ 00020a16 0840
.org 0x20a18
	strb r0, [r7, #9]	@ 00020a18 7872
.org 0x20a1a
	mov r1, r8	@ 00020a1a 4146
.org 0x20a1c
	strb r1, [r6, #0]	@ 00020a1c 3170
.org 0x20a1e
	b.n 0x20ea6	@ 00020a1e 42e2
.org 0x20a20
	.byte 0xf8,0x2c,0x84,0x08	@ 00020a20 data
.org 0x20a24
	cmp r4, #1	@ 00020a24 012c
.org 0x20a26
	bne.n 0x20a44	@ 00020a26 0dd1
.org 0x20a28
	adds r0, r5, #0	@ 00020a28 281c
.org 0x20a2a
	adds r0, #16	@ 00020a2a 1030
.org 0x20a2c
	ldr r1, [pc, #16]	@ 00020a2c 0449
.org 0x20a2e
	ldr r1, [r1, #12]	@ 00020a2e c968
.org 0x20a30
	ldr r1, [r1, #4]	@ 00020a30 4968
.org 0x20a32
	bl 0x275f0	@ 00020a32 06f0ddfd
.org 0x20a36
	movs r0, #2	@ 00020a36 0220
.org 0x20a38
	bl 0x1f63c	@ 00020a38 fef700fe
.org 0x20a3c
	movs r0, #2	@ 00020a3c 0220
.org 0x20a3e
	b.n 0x20ea4	@ 00020a3e 31e2
.org 0x20a40
	.byte 0xf8,0x2c,0x84,0x08	@ 00020a40 data
.org 0x20a44
	cmp r4, #2	@ 00020a44 022c
.org 0x20a46
	bne.n 0x20a60	@ 00020a46 0bd1
.org 0x20a48
	adds r0, r5, #0	@ 00020a48 281c
.org 0x20a4a
	adds r0, #16	@ 00020a4a 1030
.org 0x20a4c
	ldr r1, [pc, #12]	@ 00020a4c 0349
.org 0x20a4e
	ldr r1, [r1, #12]	@ 00020a4e c968
.org 0x20a50
	ldr r1, [r1, #8]	@ 00020a50 8968
.org 0x20a52
	bl 0x275f0	@ 00020a52 06f0cdfd
.org 0x20a56
	strb r4, [r6, #0]	@ 00020a56 3470
.org 0x20a58
	b.n 0x20ea6	@ 00020a58 25e2
.org 0x20a5a
	.byte 0x00	@ 00020a5a data
.org 0x20a5b
	.byte 0x00	@ 00020a5b data
.org 0x20a5c
	.byte 0xf8,0x2c,0x84,0x08	@ 00020a5c data
.org 0x20a60
	cmp r4, #3	@ 00020a60 032c
.org 0x20a62
	bne.n 0x20a80	@ 00020a62 0dd1
.org 0x20a64
	adds r0, r5, #0	@ 00020a64 281c
.org 0x20a66
	adds r0, #16	@ 00020a66 1030
.org 0x20a68
	ldr r1, [pc, #16]	@ 00020a68 0449
.org 0x20a6a
	ldr r1, [r1, #12]	@ 00020a6a c968
.org 0x20a6c
	ldr r1, [r1, #16]	@ 00020a6c 0969
.org 0x20a6e
	bl 0x275f0	@ 00020a6e 06f0bffd
.org 0x20a72
	movs r0, #4	@ 00020a72 0420
.org 0x20a74
	bl 0x1f63c	@ 00020a74 fef7e2fd
.org 0x20a78
	movs r0, #4	@ 00020a78 0420
.org 0x20a7a
	b.n 0x20ea4	@ 00020a7a 13e2
.org 0x20a7c
	.byte 0xf8,0x2c,0x84,0x08	@ 00020a7c data
.org 0x20a80
	cmp r4, #4	@ 00020a80 042c
.org 0x20a82
	bne.n 0x20a9c	@ 00020a82 0bd1
.org 0x20a84
	adds r0, r5, #0	@ 00020a84 281c
.org 0x20a86
	adds r0, #16	@ 00020a86 1030
.org 0x20a88
	ldr r1, [pc, #12]	@ 00020a88 0349
.org 0x20a8a
	ldr r1, [r1, #12]	@ 00020a8a c968
.org 0x20a8c
	ldr r1, [r1, #24]	@ 00020a8c 8969
.org 0x20a8e
	bl 0x275f0	@ 00020a8e 06f0affd
.org 0x20a92
	movs r0, #5	@ 00020a92 0520
.org 0x20a94
	b.n 0x20ea4	@ 00020a94 06e2
.org 0x20a96
	.byte 0x00	@ 00020a96 data
.org 0x20a97
	.byte 0x00	@ 00020a97 data
.org 0x20a98
	.byte 0xf8,0x2c,0x84,0x08	@ 00020a98 data
.org 0x20a9c
	cmp r4, #5	@ 00020a9c 052c
.org 0x20a9e
	bne.n 0x20ab8	@ 00020a9e 0bd1
.org 0x20aa0
	adds r0, r5, #0	@ 00020aa0 281c
.org 0x20aa2
	adds r0, #16	@ 00020aa2 1030
.org 0x20aa4
	ldr r1, [pc, #12]	@ 00020aa4 0349
.org 0x20aa6
	ldr r1, [r1, #12]	@ 00020aa6 c968
.org 0x20aa8
	ldr r1, [r1, #32]	@ 00020aa8 096a
.org 0x20aaa
	bl 0x275f0	@ 00020aaa 06f0a1fd
.org 0x20aae
	movs r0, #9	@ 00020aae 0920
.org 0x20ab0
	b.n 0x20ea4	@ 00020ab0 f8e1
.org 0x20ab2
	.byte 0x00	@ 00020ab2 data
.org 0x20ab3
	.byte 0x00	@ 00020ab3 data
.org 0x20ab4
	.byte 0xf8,0x2c,0x84,0x08	@ 00020ab4 data
.org 0x20ab8
	cmp r4, #6	@ 00020ab8 062c
.org 0x20aba
	bne.n 0x20ad4	@ 00020aba 0bd1
.org 0x20abc
	adds r0, r5, #0	@ 00020abc 281c
.org 0x20abe
	adds r0, #16	@ 00020abe 1030
.org 0x20ac0
	ldr r1, [pc, #12]	@ 00020ac0 0349
.org 0x20ac2
	ldr r1, [r1, #12]	@ 00020ac2 c968
.org 0x20ac4
	ldr r1, [r1, #40]	@ 00020ac4 896a
.org 0x20ac6
	bl 0x275f0	@ 00020ac6 06f093fd
.org 0x20aca
	movs r0, #11	@ 00020aca 0b20
.org 0x20acc
	b.n 0x20ea4	@ 00020acc eae1
.org 0x20ace
	.byte 0x00	@ 00020ace data
.org 0x20acf
	.byte 0x00	@ 00020acf data
.org 0x20ad0
	.byte 0xf8,0x2c,0x84,0x08	@ 00020ad0 data
.org 0x20ad4
	cmp r4, #7	@ 00020ad4 072c
.org 0x20ad6
	beq.n 0x20ada	@ 00020ad6 00d0
.org 0x20ad8
	b.n 0x20ea6	@ 00020ad8 e5e1
.org 0x20ada
	adds r0, r5, #0	@ 00020ada 281c
.org 0x20adc
	adds r0, #16	@ 00020adc 1030
.org 0x20ade
	ldr r1, [pc, #12]	@ 00020ade 0349
.org 0x20ae0
	ldr r1, [r1, #12]	@ 00020ae0 c968
.org 0x20ae2
	ldr r1, [r1, #48]	@ 00020ae2 096b
.org 0x20ae4
	bl 0x275f0	@ 00020ae4 06f084fd
.org 0x20ae8
	movs r0, #12	@ 00020ae8 0c20
.org 0x20aea
	b.n 0x20ea4	@ 00020aea dbe1
.org 0x20aec
	.byte 0xf8,0x2c,0x84,0x08	@ 00020aec data
.org 0x20af0
	cmp r3, #1	@ 00020af0 012b
.org 0x20af2
	bne.n 0x20afe	@ 00020af2 04d1
.org 0x20af4
	movs r0, #2	@ 00020af4 0220
.org 0x20af6
	bl 0x1f63c	@ 00020af6 fef7a1fd
.org 0x20afa
	movs r0, #2	@ 00020afa 0220
.org 0x20afc
	b.n 0x20ea4	@ 00020afc d2e1
.org 0x20afe
	cmp r3, #2	@ 00020afe 022b
.org 0x20b00
	bne.n 0x20b28	@ 00020b00 12d1
.org 0x20b02
	ldr r1, [r5, #84]	@ 00020b02 696d
.org 0x20b04
	ldr r0, [pc, #24]	@ 00020b04 0648
.org 0x20b06
	cmp r1, r0	@ 00020b06 8142
.org 0x20b08
	bgt.n 0x20b28	@ 00020b08 0edc
.org 0x20b0a
	ldr r1, [pc, #24]	@ 00020b0a 0649
.org 0x20b0c
	ldrb r2, [r1, #0]	@ 00020b0c 0a78
.org 0x20b0e
	movs r0, #128	@ 00020b0e 8020
.org 0x20b10
	orrs r0, r2	@ 00020b10 1043
.org 0x20b12
	strb r0, [r1, #0]	@ 00020b12 0870
.org 0x20b14
	ldrb r2, [r1, #1]	@ 00020b14 4a78
.org 0x20b16
	movs r0, #2	@ 00020b16 0220
.org 0x20b18
	orrs r0, r2	@ 00020b18 1043
.org 0x20b1a
	strb r0, [r1, #1]	@ 00020b1a 4870
.org 0x20b1c
	movs r0, #3	@ 00020b1c 0320
.org 0x20b1e
	b.n 0x20ea4	@ 00020b1e c1e1
.org 0x20b20
	.byte 0xff,0xcf,0x02,0x00	@ 00020b20 data
.org 0x20b24
	.byte 0xe0,0x32,0x00,0x03	@ 00020b24 data
.org 0x20b28
	movs r2, #190	@ 00020b28 be22
.org 0x20b2a
	lsls r2, r2, #1	@ 00020b2a 5200
.org 0x20b2c
	adds r6, r4, r2	@ 00020b2c a618
.org 0x20b2e
	ldrb r0, [r6, #0]	@ 00020b2e 3078
.org 0x20b30
	cmp r0, #3	@ 00020b30 0328
.org 0x20b32
	bne.n 0x20b78	@ 00020b32 21d1
.org 0x20b34
	ldr r1, [r5, #84]	@ 00020b34 696d
.org 0x20b36
	ldr r0, [pc, #44]	@ 00020b36 0b48
.org 0x20b38
	cmp r1, r0	@ 00020b38 8142
.org 0x20b3a
	bgt.n 0x20b78	@ 00020b3a 1ddc
.org 0x20b3c
	ldr r1, [pc, #40]	@ 00020b3c 0a49
.org 0x20b3e
	movs r0, #0	@ 00020b3e 0020
.org 0x20b40
	strb r0, [r1, #1]	@ 00020b40 4870
.org 0x20b42
	ldr r0, [pc, #40]	@ 00020b42 0a48
.org 0x20b44
	ldr r1, [pc, #40]	@ 00020b44 0a49
.org 0x20b46
	ldr r1, [r1, #12]	@ 00020b46 c968
.org 0x20b48
	ldr r1, [r1, #12]	@ 00020b48 c968
.org 0x20b4a
	bl 0x275f0	@ 00020b4a 06f051fd
.org 0x20b4e
	movs r0, #4	@ 00020b4e 0420
.org 0x20b50
	bl 0x1f63c	@ 00020b50 fef774fd
.org 0x20b54
	ldr r2, [pc, #28]	@ 00020b54 074a
.org 0x20b56
	ldrb r1, [r2, #4]	@ 00020b56 1179
.org 0x20b58
	movs r0, #8	@ 00020b58 0820
.org 0x20b5a
	orrs r0, r1	@ 00020b5a 0843
.org 0x20b5c
	strb r0, [r2, #4]	@ 00020b5c 1071
.org 0x20b5e
	movs r0, #5	@ 00020b5e 0520
.org 0x20b60
	b.n 0x20ea4	@ 00020b60 a0e1
.org 0x20b62
	.byte 0x00	@ 00020b62 data
.org 0x20b63
	.byte 0x00	@ 00020b63 data
.org 0x20b64
	.byte 0xff,0xcf,0x02,0x00	@ 00020b64 data
.org 0x20b68
	.byte 0xe0,0x32,0x00,0x03	@ 00020b68 data
.org 0x20b6c
	.byte 0x20,0xe9,0x02,0x02	@ 00020b6c data
.org 0x20b70
	.byte 0xf8,0x2c,0x84,0x08	@ 00020b70 data
.org 0x20b74
	.byte 0xb0,0xe8,0x02,0x02	@ 00020b74 data
.org 0x20b78
	movs r0, #190	@ 00020b78 be20
.org 0x20b7a
	lsls r0, r0, #1	@ 00020b7a 4000
.org 0x20b7c
	adds r6, r4, r0	@ 00020b7c 2618
.org 0x20b7e
	ldrb r0, [r6, #0]	@ 00020b7e 3078
.org 0x20b80
	cmp r0, #4	@ 00020b80 0428
.org 0x20b82
	bne.n 0x20bc8	@ 00020b82 21d1
.org 0x20b84
	ldr r1, [r5, #84]	@ 00020b84 696d
.org 0x20b86
	ldr r0, [pc, #44]	@ 00020b86 0b48
.org 0x20b88
	cmp r1, r0	@ 00020b88 8142
.org 0x20b8a
	bgt.n 0x20bc8	@ 00020b8a 1ddc
.org 0x20b8c
	ldr r1, [pc, #40]	@ 00020b8c 0a49
.org 0x20b8e
	movs r0, #0	@ 00020b8e 0020
.org 0x20b90
	strb r0, [r1, #1]	@ 00020b90 4870
.org 0x20b92
	ldr r0, [pc, #40]	@ 00020b92 0a48
.org 0x20b94
	ldr r1, [pc, #40]	@ 00020b94 0a49
.org 0x20b96
	ldr r1, [r1, #12]	@ 00020b96 c968
.org 0x20b98
	ldr r1, [r1, #20]	@ 00020b98 4969
.org 0x20b9a
	bl 0x275f0	@ 00020b9a 06f029fd
.org 0x20b9e
	movs r0, #4	@ 00020b9e 0420
.org 0x20ba0
	bl 0x1f63c	@ 00020ba0 fef74cfd
.org 0x20ba4
	ldr r2, [pc, #28]	@ 00020ba4 074a
.org 0x20ba6
	ldrb r1, [r2, #4]	@ 00020ba6 1179
.org 0x20ba8
	movs r0, #8	@ 00020ba8 0820
.org 0x20baa
	orrs r0, r1	@ 00020baa 0843
.org 0x20bac
	strb r0, [r2, #4]	@ 00020bac 1071
.org 0x20bae
	movs r0, #5	@ 00020bae 0520
.org 0x20bb0
	b.n 0x20ea4	@ 00020bb0 78e1
.org 0x20bb2
	.byte 0x00	@ 00020bb2 data
.org 0x20bb3
	.byte 0x00	@ 00020bb3 data
.org 0x20bb4
	.byte 0xff,0xcf,0x02,0x00	@ 00020bb4 data
.org 0x20bb8
	.byte 0xe0,0x32,0x00,0x03	@ 00020bb8 data
.org 0x20bbc
	.byte 0x20,0xe9,0x02,0x02	@ 00020bbc data
.org 0x20bc0
	.byte 0xf8,0x2c,0x84,0x08	@ 00020bc0 data
.org 0x20bc4
	.byte 0xb0,0xe8,0x02,0x02	@ 00020bc4 data
.org 0x20bc8
	movs r1, #190	@ 00020bc8 be21
.org 0x20bca
	lsls r1, r1, #1	@ 00020bca 4900
.org 0x20bcc
	adds r7, r4, r1	@ 00020bcc 6718
.org 0x20bce
	ldrb r0, [r7, #0]	@ 00020bce 3878
.org 0x20bd0
	cmp r0, #5	@ 00020bd0 0528
.org 0x20bd2
	bne.n 0x20bf0	@ 00020bd2 0dd1
.org 0x20bd4
	ldr r2, [pc, #20]	@ 00020bd4 054a
.org 0x20bd6
	ldrb r1, [r2, #0]	@ 00020bd6 1178
.org 0x20bd8
	movs r0, #127	@ 00020bd8 7f20
.org 0x20bda
	ands r0, r1	@ 00020bda 0840
.org 0x20bdc
	strb r0, [r2, #0]	@ 00020bdc 1070
.org 0x20bde
	movs r0, #3	@ 00020bde 0320
.org 0x20be0
	bl 0x1f63c	@ 00020be0 fef72cfd
.org 0x20be4
	movs r0, #6	@ 00020be4 0620
.org 0x20be6
	strb r0, [r7, #0]	@ 00020be6 3870
.org 0x20be8
	b.n 0x20ea6	@ 00020be8 5de1
.org 0x20bea
	.byte 0x00	@ 00020bea data
.org 0x20beb
	.byte 0x00	@ 00020beb data
.org 0x20bec
	.byte 0xe0,0x32,0x00,0x03	@ 00020bec data
.org 0x20bf0
	cmp r0, #6	@ 00020bf0 0628
.org 0x20bf2
	bne.n 0x20c58	@ 00020bf2 31d1
.org 0x20bf4
	ldr r6, [pc, #76]	@ 00020bf4 134e
.org 0x20bf6
	ldrh r1, [r6, #8]	@ 00020bf6 3189
.org 0x20bf8
	movs r0, #16	@ 00020bf8 1020
.org 0x20bfa
	ands r0, r1	@ 00020bfa 0840
.org 0x20bfc
	cmp r0, #0	@ 00020bfc 0028
.org 0x20bfe
	beq.n 0x20c58	@ 00020bfe 2bd0
.org 0x20c00
	ldr r1, [pc, #68]	@ 00020c00 1149
.org 0x20c02
	ldrb r2, [r1, #0]	@ 00020c02 0a78
.org 0x20c04
	movs r0, #128	@ 00020c04 8020
.org 0x20c06
	orrs r0, r2	@ 00020c06 1043
.org 0x20c08
	strb r0, [r1, #0]	@ 00020c08 0870
.org 0x20c0a
	ldrb r2, [r1, #1]	@ 00020c0a 4a78
.org 0x20c0c
	movs r0, #2	@ 00020c0c 0220
.org 0x20c0e
	orrs r0, r2	@ 00020c0e 1043
.org 0x20c10
	strb r0, [r1, #1]	@ 00020c10 4870
.org 0x20c12
	adds r0, r6, #0	@ 00020c12 301c
.org 0x20c14
	adds r0, #16	@ 00020c14 1030
.org 0x20c16
	ldr r1, [pc, #52]	@ 00020c16 0d49
.org 0x20c18
	ldr r1, [r1, #12]	@ 00020c18 c968
.org 0x20c1a
	ldr r1, [r1, #28]	@ 00020c1a c969
.org 0x20c1c
	bl 0x275f0	@ 00020c1c 06f0e8fc
.org 0x20c20
	ldrh r0, [r6, #8]	@ 00020c20 3089
.org 0x20c22
	ldr r2, [pc, #44]	@ 00020c22 0b4a
.org 0x20c24
	ands r2, r0	@ 00020c24 0240
.org 0x20c26
	ldrb r1, [r6, #18]	@ 00020c26 b17c
.org 0x20c28
	movs r0, #253	@ 00020c28 fd20
.org 0x20c2a
	ands r0, r1	@ 00020c2a 0840
.org 0x20c2c
	strb r0, [r6, #18]	@ 00020c2c b074
.org 0x20c2e
	ldr r3, [pc, #36]	@ 00020c2e 094b
.org 0x20c30
	ldrb r1, [r3, #4]	@ 00020c30 1979
.org 0x20c32
	movs r0, #247	@ 00020c32 f720
.org 0x20c34
	ands r0, r1	@ 00020c34 0840
.org 0x20c36
	strb r0, [r3, #4]	@ 00020c36 1871
.org 0x20c38
	movs r0, #1	@ 00020c38 0120
.org 0x20c3a
	orrs r2, r0	@ 00020c3a 0243
.org 0x20c3c
	strh r2, [r6, #8]	@ 00020c3c 3281
.org 0x20c3e
	movs r0, #7	@ 00020c3e 0720
.org 0x20c40
	strb r0, [r7, #0]	@ 00020c40 3870
.org 0x20c42
	b.n 0x20ea6	@ 00020c42 30e1
.org 0x20c44
	.byte 0x10,0xe9,0x02,0x02	@ 00020c44 data
.org 0x20c48
	.byte 0xe0,0x32,0x00,0x03	@ 00020c48 data
.org 0x20c4c
	.byte 0xf8,0x2c,0x84,0x08	@ 00020c4c data
.org 0x20c50
	.byte 0xef,0xff,0x00,0x00	@ 00020c50 data
.org 0x20c54
	.byte 0xb0,0xe8,0x02,0x02	@ 00020c54 data
.org 0x20c58
	movs r2, #190	@ 00020c58 be22
.org 0x20c5a
	lsls r2, r2, #1	@ 00020c5a 5200
.org 0x20c5c
	adds r6, r4, r2	@ 00020c5c a618
.org 0x20c5e
	ldrb r0, [r6, #0]	@ 00020c5e 3078
.org 0x20c60
	cmp r0, #7	@ 00020c60 0728
.org 0x20c62
	bne.n 0x20c7c	@ 00020c62 0bd1
.org 0x20c64
	ldr r1, [pc, #16]	@ 00020c64 0449
.org 0x20c66
	ldrb r2, [r1, #0]	@ 00020c66 0a78
.org 0x20c68
	movs r0, #127	@ 00020c68 7f20
.org 0x20c6a
	ands r0, r2	@ 00020c6a 1040
.org 0x20c6c
	movs r2, #0	@ 00020c6c 0022
.org 0x20c6e
	strb r0, [r1, #0]	@ 00020c6e 0870
.org 0x20c70
	strb r2, [r1, #1]	@ 00020c70 4a70
.org 0x20c72
	movs r0, #8	@ 00020c72 0820
.org 0x20c74
	b.n 0x20ea4	@ 00020c74 16e1
.org 0x20c76
	.byte 0x00	@ 00020c76 data
.org 0x20c77
	.byte 0x00	@ 00020c77 data
.org 0x20c78
	.byte 0xe0,0x32,0x00,0x03	@ 00020c78 data
.org 0x20c7c
	cmp r0, #8	@ 00020c7c 0828
.org 0x20c7e
	bne.n 0x20c98	@ 00020c7e 0bd1
.org 0x20c80
	movs r0, #5	@ 00020c80 0520
.org 0x20c82
	bl 0x1f63c	@ 00020c82 fef7dbfc
.org 0x20c86
	ldr r2, [pc, #12]	@ 00020c86 034a
.org 0x20c88
	ldrb r1, [r2, #4]	@ 00020c88 1179
.org 0x20c8a
	movs r0, #8	@ 00020c8a 0820
.org 0x20c8c
	orrs r0, r1	@ 00020c8c 0843
.org 0x20c8e
	strb r0, [r2, #4]	@ 00020c8e 1071
.org 0x20c90
	movs r0, #9	@ 00020c90 0920
.org 0x20c92
	b.n 0x20ea4	@ 00020c92 07e1
.org 0x20c94
	.byte 0xb0,0xe8,0x02,0x02	@ 00020c94 data
.org 0x20c98
	cmp r0, #9	@ 00020c98 0928
.org 0x20c9a
	bne.n 0x20d60	@ 00020c9a 61d1
.org 0x20c9c
	ldr r0, [pc, #56]	@ 00020c9c 0e48
.org 0x20c9e
	adds r6, r4, r0	@ 00020c9e 2618
.org 0x20ca0
	ldrb r0, [r6, #0]	@ 00020ca0 3078
.org 0x20ca2
	cmp r0, #0	@ 00020ca2 0028
.org 0x20ca4
	bne.n 0x20ce8	@ 00020ca4 20d1
.org 0x20ca6
	ldr r1, [r5, #84]	@ 00020ca6 696d
.org 0x20ca8
	ldr r0, [pc, #48]	@ 00020ca8 0c48
.org 0x20caa
	cmp r1, r0	@ 00020caa 8142
.org 0x20cac
	ble.n 0x20ce8	@ 00020cac 1cdd
.org 0x20cae
	ldr r2, [pc, #48]	@ 00020cae 0c4a
.org 0x20cb0
	ldrb r1, [r2, #1]	@ 00020cb0 5178
.org 0x20cb2
	movs r0, #2	@ 00020cb2 0220
.org 0x20cb4
	orrs r0, r1	@ 00020cb4 0843
.org 0x20cb6
	strb r0, [r2, #1]	@ 00020cb6 5070
.org 0x20cb8
	ldr r0, [pc, #40]	@ 00020cb8 0a48
.org 0x20cba
	movs r1, #180	@ 00020cba b421
.org 0x20cbc
	lsls r1, r1, #1	@ 00020cbc 4900
.org 0x20cbe
	adds r5, r0, r1	@ 00020cbe 4518
.org 0x20cc0
	ldr r0, [r5, #0]	@ 00020cc0 2868
.org 0x20cc2
	movs r4, #1	@ 00020cc2 0124
.org 0x20cc4
	negs r4, r4	@ 00020cc4 6442
.org 0x20cc6
	cmp r0, r4	@ 00020cc6 a042
.org 0x20cc8
	beq.n 0x20cd4	@ 00020cc8 04d0
.org 0x20cca
	lsls r0, r0, #16	@ 00020cca 0004
.org 0x20ccc
	lsrs r0, r0, #16	@ 00020ccc 000c
.org 0x20cce
	bl 0x2a98	@ 00020cce e1f7e3fe
.org 0x20cd2
	str r4, [r5, #0]	@ 00020cd2 2c60
.org 0x20cd4
	movs r0, #1	@ 00020cd4 0120
.org 0x20cd6
	b.n 0x20ea4	@ 00020cd6 e5e0
.org 0x20cd8
	.byte 0x7d,0x01,0x00,0x00	@ 00020cd8 data
.org 0x20cdc
	.byte 0xff,0xbf,0x11,0x00	@ 00020cdc data
.org 0x20ce0
	.byte 0xe0,0x32,0x00,0x03	@ 00020ce0 data
.org 0x20ce4
	.byte 0x10,0xe9,0x02,0x02	@ 00020ce4 data
.org 0x20ce8
	ldr r0, [pc, #20]	@ 00020ce8 0548
.org 0x20cea
	adds r2, r4, r0	@ 00020cea 2218
.org 0x20cec
	ldrb r0, [r2, #0]	@ 00020cec 1078
.org 0x20cee
	cmp r0, #1	@ 00020cee 0128
.org 0x20cf0
	bne.n 0x20d08	@ 00020cf0 0ad1
.org 0x20cf2
	ldr r0, [pc, #16]	@ 00020cf2 0448
.org 0x20cf4
	movs r1, #0	@ 00020cf4 0021
.org 0x20cf6
	strb r1, [r0, #1]	@ 00020cf6 4170
.org 0x20cf8
	movs r0, #2	@ 00020cf8 0220
.org 0x20cfa
	strb r0, [r2, #0]	@ 00020cfa 1070
.org 0x20cfc
	b.n 0x20ea6	@ 00020cfc d3e0
.org 0x20cfe
	.byte 0x00	@ 00020cfe data
.org 0x20cff
	.byte 0x00	@ 00020cff data
.org 0x20d00
	.byte 0x7d,0x01,0x00,0x00	@ 00020d00 data
.org 0x20d04
	.byte 0xe0,0x32,0x00,0x03	@ 00020d04 data
.org 0x20d08
	cmp r0, #2	@ 00020d08 0228
.org 0x20d0a
	beq.n 0x20d0e	@ 00020d0a 00d0
.org 0x20d0c
	b.n 0x20ea6	@ 00020d0c cbe0
.org 0x20d0e
	ldr r1, [r5, #84]	@ 00020d0e 696d
.org 0x20d10
	ldr r0, [pc, #64]	@ 00020d10 1048
.org 0x20d12
	cmp r1, r0	@ 00020d12 8142
.org 0x20d14
	bgt.n 0x20d18	@ 00020d14 00dc
.org 0x20d16
	b.n 0x20ea6	@ 00020d16 c6e0
.org 0x20d18
	ldr r0, [pc, #60]	@ 00020d18 0f48
.org 0x20d1a
	movs r1, #0	@ 00020d1a 0021
.org 0x20d1c
	strb r1, [r0, #1]	@ 00020d1c 4170
.org 0x20d1e
	ldr r0, [pc, #60]	@ 00020d1e 0f48
.org 0x20d20
	movs r1, #180	@ 00020d20 b421
.org 0x20d22
	lsls r1, r1, #1	@ 00020d22 4900
.org 0x20d24
	adds r5, r0, r1	@ 00020d24 4518
.org 0x20d26
	ldr r0, [r5, #0]	@ 00020d26 2868
.org 0x20d28
	cmp r0, #155	@ 00020d28 9b28
.org 0x20d2a
	beq.n 0x20d48	@ 00020d2a 0dd0
.org 0x20d2c
	movs r6, #1	@ 00020d2c 0126
.org 0x20d2e
	negs r6, r6	@ 00020d2e 7642
.org 0x20d30
	cmp r0, r6	@ 00020d30 b042
.org 0x20d32
	beq.n 0x20d3e	@ 00020d32 04d0
.org 0x20d34
	lsls r0, r0, #16	@ 00020d34 0004
.org 0x20d36
	lsrs r0, r0, #16	@ 00020d36 000c
.org 0x20d38
	bl 0x2a98	@ 00020d38 e1f7aefe
.org 0x20d3c
	str r6, [r5, #0]	@ 00020d3c 2e60
.org 0x20d3e
	movs r0, #155	@ 00020d3e 9b20
.org 0x20d40
	bl 0x2a88	@ 00020d40 e1f7a2fe
.org 0x20d44
	movs r0, #155	@ 00020d44 9b20
.org 0x20d46
	str r0, [r5, #0]	@ 00020d46 2860
.org 0x20d48
	movs r2, #190	@ 00020d48 be22
.org 0x20d4a
	lsls r2, r2, #1	@ 00020d4a 5200
.org 0x20d4c
	adds r1, r4, r2	@ 00020d4c a118
.org 0x20d4e
	movs r0, #10	@ 00020d4e 0a20
.org 0x20d50
	strb r0, [r1, #0]	@ 00020d50 0870
.org 0x20d52
	b.n 0x20ea6	@ 00020d52 a8e0
.org 0x20d54
	.byte 0xff,0xdf,0x11,0x00	@ 00020d54 data
.org 0x20d58
	.byte 0xe0,0x32,0x00,0x03	@ 00020d58 data
.org 0x20d5c
	.byte 0x10,0xe9,0x02,0x02	@ 00020d5c data
.org 0x20d60
	cmp r0, #10	@ 00020d60 0a28
.org 0x20d62
	bne.n 0x20d90	@ 00020d62 15d1
.org 0x20d64
	ldr r1, [r5, #84]	@ 00020d64 696d
.org 0x20d66
	ldr r0, [pc, #28]	@ 00020d66 0748
.org 0x20d68
	cmp r1, r0	@ 00020d68 8142
.org 0x20d6a
	ble.n 0x20d90	@ 00020d6a 11dd
.org 0x20d6c
	ldr r0, [pc, #24]	@ 00020d6c 0648
.org 0x20d6e
	ldr r1, [pc, #28]	@ 00020d6e 0749
.org 0x20d70
	ldr r1, [r1, #12]	@ 00020d70 c968
.org 0x20d72
	ldr r1, [r1, #36]	@ 00020d72 496a
.org 0x20d74
	bl 0x275f0	@ 00020d74 06f03cfc
.org 0x20d78
	movs r0, #7	@ 00020d78 0720
.org 0x20d7a
	bl 0x1f63c	@ 00020d7a fef75ffc
.org 0x20d7e
	movs r0, #12	@ 00020d7e 0c20
.org 0x20d80
	b.n 0x20ea4	@ 00020d80 90e0
.org 0x20d82
	.byte 0x00	@ 00020d82 data
.org 0x20d83
	.byte 0x00	@ 00020d83 data
.org 0x20d84
	.byte 0xff,0xbf,0x12,0x00	@ 00020d84 data
.org 0x20d88
	.byte 0x20,0xe9,0x02,0x02	@ 00020d88 data
.org 0x20d8c
	.byte 0xf8,0x2c,0x84,0x08	@ 00020d8c data
.org 0x20d90
	movs r0, #190	@ 00020d90 be20
.org 0x20d92
	lsls r0, r0, #1	@ 00020d92 4000
.org 0x20d94
	adds r6, r4, r0	@ 00020d94 2618
.org 0x20d96
	ldrb r0, [r6, #0]	@ 00020d96 3078
.org 0x20d98
	cmp r0, #11	@ 00020d98 0b28
.org 0x20d9a
	bne.n 0x20dc8	@ 00020d9a 15d1
.org 0x20d9c
	ldr r1, [r5, #84]	@ 00020d9c 696d
.org 0x20d9e
	ldr r0, [pc, #28]	@ 00020d9e 0748
.org 0x20da0
	cmp r1, r0	@ 00020da0 8142
.org 0x20da2
	ble.n 0x20dc8	@ 00020da2 11dd
.org 0x20da4
	ldr r0, [pc, #24]	@ 00020da4 0648
.org 0x20da6
	ldr r1, [pc, #28]	@ 00020da6 0749
.org 0x20da8
	ldr r1, [r1, #12]	@ 00020da8 c968
.org 0x20daa
	ldr r1, [r1, #44]	@ 00020daa c96a
.org 0x20dac
	bl 0x275f0	@ 00020dac 06f020fc
.org 0x20db0
	movs r0, #7	@ 00020db0 0720
.org 0x20db2
	bl 0x1f63c	@ 00020db2 fef743fc
.org 0x20db6
	movs r0, #12	@ 00020db6 0c20
.org 0x20db8
	b.n 0x20ea4	@ 00020db8 74e0
.org 0x20dba
	.byte 0x00	@ 00020dba data
.org 0x20dbb
	.byte 0x00	@ 00020dbb data
.org 0x20dbc
	.byte 0xff,0xbf,0x12,0x00	@ 00020dbc data
.org 0x20dc0
	.byte 0x20,0xe9,0x02,0x02	@ 00020dc0 data
.org 0x20dc4
	.byte 0xf8,0x2c,0x84,0x08	@ 00020dc4 data
.org 0x20dc8
	movs r1, #190	@ 00020dc8 be21
.org 0x20dca
	lsls r1, r1, #1	@ 00020dca 4900
