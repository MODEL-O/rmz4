@ FUN_08100a24  entry 0x08100a24  size 358
.thumb
.org 0x100a24
FUN_08100a24:
	push {r4, r5, r6, lr}	@ 00100a24 70b5
.org 0x100a26
	adds r6, r0, #0	@ 00100a26 061c
.org 0x100a28
	ldr r2, [pc, #56]	@ 00100a28 0e4a
.org 0x100a2a
	adds r0, r2, #0	@ 00100a2a 101c
.org 0x100a2c
	adds r0, #254	@ 00100a2c fe30
.org 0x100a2e
	movs r4, #248	@ 00100a2e f824
.org 0x100a30
	lsls r4, r4, #2	@ 00100a30 a400
.org 0x100a32
	strh r4, [r0, #0]	@ 00100a32 0480
.org 0x100a34
	ldr r0, [pc, #48]	@ 00100a34 0c48
.org 0x100a36
	adds r1, r0, #0	@ 00100a36 011c
.org 0x100a38
	adds r1, #254	@ 00100a38 fe31
.org 0x100a3a
	movs r3, #10	@ 00100a3a 0a23
.org 0x100a3c
	strh r3, [r1, #0]	@ 00100a3c 0b80
.org 0x100a3e
	movs r5, #128	@ 00100a3e 8025
.org 0x100a40
	lsls r1, r5, #1	@ 00100a40 6900
.org 0x100a42
	adds r2, r2, r1	@ 00100a42 5218
.org 0x100a44
	strh r4, [r2, #0]	@ 00100a44 1480
.org 0x100a46
	adds r0, r0, r1	@ 00100a46 4018
.org 0x100a48
	strh r3, [r0, #0]	@ 00100a48 0380
.org 0x100a4a
	ldr r0, [pc, #32]	@ 00100a4a 0848
.org 0x100a4c
	ldrb r1, [r0, #20]	@ 00100a4c 017d
.org 0x100a4e
	adds r0, r5, #0	@ 00100a4e 281c
.org 0x100a50
	ands r0, r1	@ 00100a50 0840
.org 0x100a52
	cmp r0, #0	@ 00100a52 0028
.org 0x100a54
	bne.n 0x100a70	@ 00100a54 0cd1
.org 0x100a56
	adds r1, r6, #0	@ 00100a56 311c
.org 0x100a58
	adds r1, #184	@ 00100a58 b831
.org 0x100a5a
	movs r0, #127	@ 00100a5a 7f20
.org 0x100a5c
	strb r0, [r1, #0]	@ 00100a5c 0870
.org 0x100a5e
	adds r4, r1, #0	@ 00100a5e 0c1c
.org 0x100a60
	b.n 0x100a78	@ 00100a60 0ae0
.org 0x100a62
	.byte 0x00	@ 00100a62 data
.org 0x100a63
	.byte 0x00	@ 00100a63 data
.org 0x100a64
	.byte 0x40,0xe0,0x02,0x02	@ 00100a64 data
.org 0x100a68
	.byte 0x40,0xde,0x02,0x02	@ 00100a68 data
.org 0x100a6c
	.byte 0xb0,0xe8,0x02,0x02	@ 00100a6c data
.org 0x100a70
	adds r0, r6, #0	@ 00100a70 301c
.org 0x100a72
	adds r0, #184	@ 00100a72 b830
.org 0x100a74
	strb r5, [r0, #0]	@ 00100a74 0570
.org 0x100a76
	adds r4, r0, #0	@ 00100a76 041c
.org 0x100a78
	ldrb r5, [r6, #17]	@ 00100a78 757c
.org 0x100a7a
	cmp r5, #0	@ 00100a7a 002d
.org 0x100a7c
	bne.n 0x100b44	@ 00100a7c 62d1
.org 0x100a7e
	ldr r0, [pc, #164]	@ 00100a7e 2948
.org 0x100a80
	ldr r0, [r0, #0]	@ 00100a80 0068
.org 0x100a82
	bl 0x5500	@ 00100a82 04f73dfd
.org 0x100a86
	adds r2, r0, #0	@ 00100a86 021c
.org 0x100a88
	cmp r2, #0	@ 00100a88 002a
.org 0x100a8a
	bne.n 0x100a8e	@ 00100a8a 00d1
.org 0x100a8c
	b.n 0x100bb4	@ 00100a8c 92e0
.org 0x100a8e
	ldr r0, [r6, #84]	@ 00100a8e 706d
.org 0x100a90
	ldr r1, [pc, #148]	@ 00100a90 2549
.org 0x100a92
	adds r0, r0, r1	@ 00100a92 4018
.org 0x100a94
	str r0, [r6, #84]	@ 00100a94 7065
.org 0x100a96
	ldr r0, [r6, #88]	@ 00100a96 b06d
.org 0x100a98
	movs r1, #144	@ 00100a98 9021
.org 0x100a9a
	lsls r1, r1, #4	@ 00100a9a 0901
.org 0x100a9c
	adds r0, r0, r1	@ 00100a9c 4018
.org 0x100a9e
	str r0, [r6, #88]	@ 00100a9e b065
.org 0x100aa0
	adds r1, r2, #0	@ 00100aa0 111c
.org 0x100aa2
	adds r1, #37	@ 00100aa2 2531
.org 0x100aa4
	movs r0, #30	@ 00100aa4 1e20
.org 0x100aa6
	strb r0, [r1, #0]	@ 00100aa6 0870
.org 0x100aa8
	ldr r0, [pc, #128]	@ 00100aa8 2048
.org 0x100aaa
	movs r1, #60	@ 00100aaa 3c21
.org 0x100aac
	strb r1, [r2, #9]	@ 00100aac 5172
.org 0x100aae
	adds r0, #240	@ 00100aae f030
.org 0x100ab0
	ldr r0, [r0, #0]	@ 00100ab0 0068
.org 0x100ab2
	ldr r0, [r0, #0]	@ 00100ab2 0068
.org 0x100ab4
	str r0, [r2, #20]	@ 00100ab4 5061
.org 0x100ab6
	movs r0, #0	@ 00100ab6 0020
.org 0x100ab8
	strh r5, [r2, #32]	@ 00100ab8 1584
.org 0x100aba
	adds r1, r2, #0	@ 00100aba 111c
.org 0x100abc
	adds r1, #34	@ 00100abc 2231
.org 0x100abe
	strb r0, [r1, #0]	@ 00100abe 0870
.org 0x100ac0
	ldrb r1, [r2, #11]	@ 00100ac0 d17a
.org 0x100ac2
	movs r0, #16	@ 00100ac2 1020
.org 0x100ac4
	orrs r0, r1	@ 00100ac4 0843
.org 0x100ac6
	strb r0, [r2, #11]	@ 00100ac6 d072
.org 0x100ac8
	ldrb r0, [r2, #28]	@ 00100ac8 107f
.org 0x100aca
	strb r0, [r2, #29]	@ 00100aca 5077
.org 0x100acc
	movs r0, #1	@ 00100acc 0120
.org 0x100ace
	strb r0, [r2, #17]	@ 00100ace 5074
.org 0x100ad0
	str r6, [r2, #40]	@ 00100ad0 9662
.org 0x100ad2
	ldr r0, [r6, #84]	@ 00100ad2 706d
.org 0x100ad4
	str r0, [r2, #84]	@ 00100ad4 5065
.org 0x100ad6
	ldr r0, [r6, #88]	@ 00100ad6 b06d
.org 0x100ad8
	ldr r1, [pc, #84]	@ 00100ad8 1549
.org 0x100ada
	adds r0, r0, r1	@ 00100ada 4018
.org 0x100adc
	str r0, [r2, #88]	@ 00100adc 9065
.org 0x100ade
	ldrb r4, [r4, #0]	@ 00100ade 2478
.org 0x100ae0
	lsls r5, r4, #2	@ 00100ae0 a500
.org 0x100ae2
	adds r5, r5, r4	@ 00100ae2 2d19
.org 0x100ae4
	lsls r5, r5, #2	@ 00100ae4 ad00
.org 0x100ae6
	ldr r0, [pc, #76]	@ 00100ae6 1348
.org 0x100ae8
	adds r0, r5, r0	@ 00100ae8 2818
.org 0x100aea
	ldr r1, [pc, #76]	@ 00100aea 1349
.org 0x100aec
	lsls r4, r4, #1	@ 00100aec 6400
.org 0x100aee
	adds r1, r4, r1	@ 00100aee 6118
.org 0x100af0
	ldrh r1, [r1, #0]	@ 00100af0 0988
.org 0x100af2
	ldrh r2, [r0, #6]	@ 00100af2 c288
.org 0x100af4
	lsrs r2, r2, #6	@ 00100af4 9209
.org 0x100af6
	subs r1, r1, r2	@ 00100af6 891a
.org 0x100af8
	lsls r1, r1, #5	@ 00100af8 4901
.org 0x100afa
	movs r2, #128	@ 00100afa 8022
.org 0x100afc
	lsls r2, r2, #9	@ 00100afc 5202
.org 0x100afe
	adds r1, r1, r2	@ 00100afe 8918
.org 0x100b00
	bl 0x1d30	@ 00100b00 01f716f9
.org 0x100b04
	ldr r0, [pc, #52]	@ 00100b04 0d48
.org 0x100b06
	adds r5, r5, r0	@ 00100b06 2d18
.org 0x100b08
	ldr r0, [pc, #52]	@ 00100b08 0d48
.org 0x100b0a
	adds r4, r4, r0	@ 00100b0a 2418
.org 0x100b0c
	ldrh r1, [r4, #0]	@ 00100b0c 2188
.org 0x100b0e
	ldrb r0, [r5, #7]	@ 00100b0e e879
.org 0x100b10
	subs r1, r1, r0	@ 00100b10 091a
.org 0x100b12
	lsls r1, r1, #5	@ 00100b12 4901
.org 0x100b14
	movs r2, #128	@ 00100b14 8022
.org 0x100b16
	lsls r2, r2, #2	@ 00100b16 9200
.org 0x100b18
	adds r1, r1, r2	@ 00100b18 8918
.org 0x100b1a
	adds r0, r5, #0	@ 00100b1a 281c
.org 0x100b1c
	bl 0x2208	@ 00100b1c 01f774fb
.org 0x100b20
	b.n 0x100b76	@ 00100b20 29e0
.org 0x100b22
	.byte 0x00	@ 00100b22 data
.org 0x100b23
	.byte 0x00	@ 00100b23 data
.org 0x100b24
	.byte 0xa0,0xed,0x02,0x02	@ 00100b24 data
.org 0x100b28
	.byte 0x00,0xf9,0xff,0xff	@ 00100b28 data
.org 0x100b2c
	.byte 0xfc,0x92,0x86,0x08	@ 00100b2c data
.org 0x100b30
	.byte 0x00,0xff,0xff,0xff	@ 00100b30 data
.org 0x100b34
	.byte 0x00,0x40,0xc4,0x08	@ 00100b34 data
.org 0x100b38
	.byte 0x40,0xe0,0x02,0x02	@ 00100b38 data
.org 0x100b3c
	.byte 0x0c,0x40,0xc4,0x08	@ 00100b3c data
.org 0x100b40
	.byte 0x40,0xde,0x02,0x02	@ 00100b40 data
.org 0x100b44
	ldrb r1, [r4, #0]	@ 00100b44 2178
.org 0x100b46
	lsls r1, r1, #8	@ 00100b46 0902
.org 0x100b48
	adds r0, r6, #0	@ 00100b48 301c
.org 0x100b4a
	bl 0x1cf00	@ 00100b4a 1cf7d9f9
.org 0x100b4e
	adds r0, r6, #0	@ 00100b4e 301c
.org 0x100b50
	bl 0x1cff0	@ 00100b50 1cf74efa
.org 0x100b54
	movs r2, #1	@ 00100b54 0122
.org 0x100b56
	ldrb r1, [r6, #10]	@ 00100b56 b17a
.org 0x100b58
	movs r0, #32	@ 00100b58 2020
.org 0x100b5a
	orrs r0, r1	@ 00100b5a 0843
.org 0x100b5c
	strb r0, [r6, #10]	@ 00100b5c b072
.org 0x100b5e
	adds r0, r6, #0	@ 00100b5e 301c
.org 0x100b60
	adds r0, #77	@ 00100b60 4d30
.org 0x100b62
	strb r2, [r0, #0]	@ 00100b62 0270
.org 0x100b64
	adds r3, r6, #0	@ 00100b64 331c
.org 0x100b66
	adds r3, #74	@ 00100b66 4a33
.org 0x100b68
	movs r2, #32	@ 00100b68 2022
.org 0x100b6a
	ldrb r1, [r3, #0]	@ 00100b6a 1978
.org 0x100b6c
	movs r0, #33	@ 00100b6c 2120
.org 0x100b6e
	negs r0, r0	@ 00100b6e 4042
.org 0x100b70
	ands r0, r1	@ 00100b70 0840
.org 0x100b72
	orrs r0, r2	@ 00100b72 1043
.org 0x100b74
	strb r0, [r3, #0]	@ 00100b74 1870
.org 0x100b76
	adds r2, r6, #0	@ 00100b76 321c
.org 0x100b78
	adds r2, #73	@ 00100b78 4932
.org 0x100b7a
	ldrb r1, [r2, #0]	@ 00100b7a 1178
.org 0x100b7c
	movs r0, #13	@ 00100b7c 0d20
.org 0x100b7e
	negs r0, r0	@ 00100b7e 4042
.org 0x100b80
	ands r0, r1	@ 00100b80 0840
.org 0x100b82
	movs r1, #4	@ 00100b82 0421
.org 0x100b84
	orrs r0, r1	@ 00100b84 0843
.org 0x100b86
	strb r0, [r2, #0]	@ 00100b86 1070
.org 0x100b88
	ldrb r1, [r6, #10]	@ 00100b88 b17a
