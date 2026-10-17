@ FUN_08022a28  entry 0x08022a28  size 534
.thumb
.org 0x22a28
FUN_08022a28:
	push {r4, r5, lr}	@ 00022a28 30b5
.org 0x22a2a
	adds r2, r0, #0	@ 00022a2a 021c
.org 0x22a2c
	ldr r3, [r2, #32]	@ 00022a2c 136a
.org 0x22a2e
	movs r0, #190	@ 00022a2e be20
.org 0x22a30
	lsls r0, r0, #1	@ 00022a30 4000
.org 0x22a32
	adds r5, r2, r0	@ 00022a32 1518
.org 0x22a34
	ldrb r0, [r5, #0]	@ 00022a34 2878
.org 0x22a36
	cmp r0, #0	@ 00022a36 0028
.org 0x22a38
	bne.n 0x22aec	@ 00022a38 58d1
.org 0x22a3a
	ldr r3, [pc, #48]	@ 00022a3a 0c4b
.org 0x22a3c
	ldrh r1, [r3, #8]	@ 00022a3c 1989
.org 0x22a3e
	movs r0, #1	@ 00022a3e 0120
.org 0x22a40
	orrs r0, r1	@ 00022a40 0843
.org 0x22a42
	strh r0, [r3, #8]	@ 00022a42 1881
.org 0x22a44
	ldr r2, [pc, #40]	@ 00022a44 0a4a
.org 0x22a46
	ldrb r1, [r2, #4]	@ 00022a46 1179
.org 0x22a48
	movs r0, #8	@ 00022a48 0820
.org 0x22a4a
	orrs r0, r1	@ 00022a4a 0843
.org 0x22a4c
	strb r0, [r2, #4]	@ 00022a4c 1071
.org 0x22a4e
	ldrb r4, [r3, #2]	@ 00022a4e 9c78
.org 0x22a50
	cmp r4, #0	@ 00022a50 002c
.org 0x22a52
	bne.n 0x22a78	@ 00022a52 11d1
.org 0x22a54
	adds r0, r3, #0	@ 00022a54 181c
.org 0x22a56
	adds r0, #16	@ 00022a56 1030
.org 0x22a58
	ldr r1, [pc, #24]	@ 00022a58 0649
.org 0x22a5a
	ldr r1, [r1, #24]	@ 00022a5a 8969
.org 0x22a5c
	ldr r1, [r1, #56]	@ 00022a5c 896b
.org 0x22a5e
	bl 0x275f0	@ 00022a5e 04f0c7fd
.org 0x22a62
	movs r0, #2	@ 00022a62 0220
.org 0x22a64
	bl 0x1f63c	@ 00022a64 fcf7eafd
.org 0x22a68
	movs r0, #2	@ 00022a68 0220
.org 0x22a6a
	b.n 0x22c96	@ 00022a6a 14e1
.org 0x22a6c
	.byte 0x10,0xe9,0x02,0x02	@ 00022a6c data
.org 0x22a70
	.byte 0xb0,0xe8,0x02,0x02	@ 00022a70 data
.org 0x22a74
	.byte 0xf8,0x2c,0x84,0x08	@ 00022a74 data
.org 0x22a78
	cmp r4, #2	@ 00022a78 022c
.org 0x22a7a
	bne.n 0x22a94	@ 00022a7a 0bd1
.org 0x22a7c
	adds r0, r3, #0	@ 00022a7c 181c
.org 0x22a7e
	adds r0, #16	@ 00022a7e 1030
.org 0x22a80
	ldr r1, [pc, #12]	@ 00022a80 0349
.org 0x22a82
	ldr r1, [r1, #24]	@ 00022a82 8969
.org 0x22a84
	ldr r1, [r1, #8]	@ 00022a84 8968
.org 0x22a86
	bl 0x275f0	@ 00022a86 04f0b3fd
.org 0x22a8a
	strb r4, [r5, #0]	@ 00022a8a 2c70
.org 0x22a8c
	b.n 0x22c98	@ 00022a8c 04e1
.org 0x22a8e
	.byte 0x00	@ 00022a8e data
.org 0x22a8f
	.byte 0x00	@ 00022a8f data
.org 0x22a90
	.byte 0xf8,0x2c,0x84,0x08	@ 00022a90 data
.org 0x22a94
	cmp r4, #3	@ 00022a94 032c
.org 0x22a96
	bne.n 0x22ab4	@ 00022a96 0dd1
.org 0x22a98
	adds r0, r3, #0	@ 00022a98 181c
.org 0x22a9a
	adds r0, #16	@ 00022a9a 1030
.org 0x22a9c
	ldr r1, [pc, #16]	@ 00022a9c 0449
.org 0x22a9e
	ldr r1, [r1, #24]	@ 00022a9e 8969
.org 0x22aa0
	ldr r1, [r1, #16]	@ 00022aa0 0969
.org 0x22aa2
	bl 0x275f0	@ 00022aa2 04f0a5fd
.org 0x22aa6
	movs r0, #4	@ 00022aa6 0420
.org 0x22aa8
	bl 0x1f63c	@ 00022aa8 fcf7c8fd
.org 0x22aac
	movs r0, #4	@ 00022aac 0420
.org 0x22aae
	b.n 0x22c96	@ 00022aae f2e0
.org 0x22ab0
	.byte 0xf8,0x2c,0x84,0x08	@ 00022ab0 data
.org 0x22ab4
	cmp r4, #4	@ 00022ab4 042c
.org 0x22ab6
	bne.n 0x22ad0	@ 00022ab6 0bd1
.org 0x22ab8
	adds r0, r3, #0	@ 00022ab8 181c
.org 0x22aba
	adds r0, #16	@ 00022aba 1030
.org 0x22abc
	ldr r1, [pc, #12]	@ 00022abc 0349
.org 0x22abe
	ldr r1, [r1, #24]	@ 00022abe 8969
.org 0x22ac0
	ldr r1, [r1, #24]	@ 00022ac0 8969
.org 0x22ac2
	bl 0x275f0	@ 00022ac2 04f095fd
.org 0x22ac6
	movs r0, #5	@ 00022ac6 0520
.org 0x22ac8
	b.n 0x22c96	@ 00022ac8 e5e0
.org 0x22aca
	.byte 0x00	@ 00022aca data
.org 0x22acb
	.byte 0x00	@ 00022acb data
.org 0x22acc
	.byte 0xf8,0x2c,0x84,0x08	@ 00022acc data
.org 0x22ad0
	cmp r4, #5	@ 00022ad0 052c
.org 0x22ad2
	beq.n 0x22ad6	@ 00022ad2 00d0
.org 0x22ad4
	b.n 0x22c98	@ 00022ad4 e0e0
.org 0x22ad6
	adds r0, r3, #0	@ 00022ad6 181c
.org 0x22ad8
	adds r0, #16	@ 00022ad8 1030
.org 0x22ada
	ldr r1, [pc, #12]	@ 00022ada 0349
.org 0x22adc
	ldr r1, [r1, #24]	@ 00022adc 8969
.org 0x22ade
	ldr r1, [r1, #32]	@ 00022ade 096a
.org 0x22ae0
	bl 0x275f0	@ 00022ae0 04f086fd
.org 0x22ae4
	movs r0, #9	@ 00022ae4 0920
.org 0x22ae6
	b.n 0x22c96	@ 00022ae6 d6e0
.org 0x22ae8
	.byte 0xf8,0x2c,0x84,0x08	@ 00022ae8 data
.org 0x22aec
	cmp r0, #2	@ 00022aec 0228
.org 0x22aee
	bne.n 0x22b0c	@ 00022aee 0dd1
.org 0x22af0
	ldr r1, [r3, #84]	@ 00022af0 596d
.org 0x22af2
	movs r0, #240	@ 00022af2 f020
.org 0x22af4
	lsls r0, r0, #12	@ 00022af4 0003
.org 0x22af6
	cmp r1, r0	@ 00022af6 8142
.org 0x22af8
	ble.n 0x22b0c	@ 00022af8 08dd
.org 0x22afa
	ldr r1, [r3, #88]	@ 00022afa 996d
.org 0x22afc
	ldr r0, [pc, #8]	@ 00022afc 0248
.org 0x22afe
	cmp r1, r0	@ 00022afe 8142
.org 0x22b00
	bgt.n 0x22b0c	@ 00022b00 04dc
.org 0x22b02
	movs r0, #3	@ 00022b02 0320
.org 0x22b04
	b.n 0x22c96	@ 00022b04 c7e0
.org 0x22b06
	.byte 0x00	@ 00022b06 data
.org 0x22b07
	.byte 0x00	@ 00022b07 data
.org 0x22b08
	.byte 0xff,0x5f,0x04,0x00	@ 00022b08 data
.org 0x22b0c
	movs r0, #190	@ 00022b0c be20
.org 0x22b0e
	lsls r0, r0, #1	@ 00022b0e 4000
.org 0x22b10
	adds r4, r2, r0	@ 00022b10 1418
.org 0x22b12
	ldrb r0, [r4, #0]	@ 00022b12 2078
.org 0x22b14
	cmp r0, #3	@ 00022b14 0328
.org 0x22b16
	bne.n 0x22b22	@ 00022b16 04d1
.org 0x22b18
	ldr r1, [r3, #84]	@ 00022b18 596d
.org 0x22b1a
	movs r0, #255	@ 00022b1a ff20
.org 0x22b1c
	lsls r0, r0, #12	@ 00022b1c 0003
.org 0x22b1e
	cmp r1, r0	@ 00022b1e 8142
.org 0x22b20
	bgt.n 0x22b38	@ 00022b20 0adc
.org 0x22b22
	movs r0, #190	@ 00022b22 be20
.org 0x22b24
	lsls r0, r0, #1	@ 00022b24 4000
.org 0x22b26
	adds r4, r2, r0	@ 00022b26 1418
.org 0x22b28
	ldrb r0, [r4, #0]	@ 00022b28 2078
.org 0x22b2a
	cmp r0, #4	@ 00022b2a 0428
.org 0x22b2c
	bne.n 0x22b68	@ 00022b2c 1cd1
.org 0x22b2e
	ldr r1, [r3, #84]	@ 00022b2e 596d
.org 0x22b30
	movs r0, #255	@ 00022b30 ff20
.org 0x22b32
	lsls r0, r0, #12	@ 00022b32 0003
.org 0x22b34
	cmp r1, r0	@ 00022b34 8142
.org 0x22b36
	ble.n 0x22b68	@ 00022b36 17dd
.org 0x22b38
	ldr r0, [pc, #32]	@ 00022b38 0848
.org 0x22b3a
	ldr r1, [pc, #36]	@ 00022b3a 0949
.org 0x22b3c
	ldr r1, [r1, #24]	@ 00022b3c 8969
.org 0x22b3e
	ldr r1, [r1, #20]	@ 00022b3e 4969
.org 0x22b40
	bl 0x275f0	@ 00022b40 04f056fd
.org 0x22b44
	movs r0, #4	@ 00022b44 0420
.org 0x22b46
	bl 0x1f63c	@ 00022b46 fcf779fd
.org 0x22b4a
	ldr r2, [pc, #24]	@ 00022b4a 064a
.org 0x22b4c
	ldrb r1, [r2, #4]	@ 00022b4c 1179
.org 0x22b4e
	movs r0, #8	@ 00022b4e 0820
.org 0x22b50
	orrs r0, r1	@ 00022b50 0843
.org 0x22b52
	strb r0, [r2, #4]	@ 00022b52 1071
.org 0x22b54
	movs r0, #5	@ 00022b54 0520
.org 0x22b56
	strb r0, [r4, #0]	@ 00022b56 2070
.org 0x22b58
	b.n 0x22c98	@ 00022b58 9ee0
.org 0x22b5a
	.byte 0x00	@ 00022b5a data
.org 0x22b5b
	.byte 0x00	@ 00022b5b data
.org 0x22b5c
	.byte 0x20,0xe9,0x02,0x02	@ 00022b5c data
.org 0x22b60
	.byte 0xf8,0x2c,0x84,0x08	@ 00022b60 data
.org 0x22b64
	.byte 0xb0,0xe8,0x02,0x02	@ 00022b64 data
.org 0x22b68
	movs r0, #190	@ 00022b68 be20
.org 0x22b6a
	lsls r0, r0, #1	@ 00022b6a 4000
.org 0x22b6c
	adds r5, r2, r0	@ 00022b6c 1518
.org 0x22b6e
	ldrb r0, [r5, #0]	@ 00022b6e 2878
.org 0x22b70
	cmp r0, #5	@ 00022b70 0528
.org 0x22b72
	bne.n 0x22b7e	@ 00022b72 04d1
.org 0x22b74
	movs r0, #3	@ 00022b74 0320
.org 0x22b76
	bl 0x1f63c	@ 00022b76 fcf761fd
.org 0x22b7a
	movs r0, #6	@ 00022b7a 0620
.org 0x22b7c
	b.n 0x22c96	@ 00022b7c 8be0
.org 0x22b7e
	cmp r0, #6	@ 00022b7e 0628
.org 0x22b80
	bne.n 0x22be4	@ 00022b80 30d1
.org 0x22b82
	ldr r4, [pc, #76]	@ 00022b82 134c
.org 0x22b84
	ldrh r1, [r4, #8]	@ 00022b84 2189
.org 0x22b86
	movs r0, #16	@ 00022b86 1020
.org 0x22b88
	ands r0, r1	@ 00022b88 0840
.org 0x22b8a
	cmp r0, #0	@ 00022b8a 0028
.org 0x22b8c
	beq.n 0x22be4	@ 00022b8c 2ad0
.org 0x22b8e
	ldr r1, [pc, #68]	@ 00022b8e 1149
.org 0x22b90
	ldrb r2, [r1, #0]	@ 00022b90 0a78
.org 0x22b92
	movs r0, #128	@ 00022b92 8020
.org 0x22b94
	orrs r0, r2	@ 00022b94 1043
.org 0x22b96
	strb r0, [r1, #0]	@ 00022b96 0870
.org 0x22b98
	ldrb r2, [r1, #1]	@ 00022b98 4a78
.org 0x22b9a
	movs r0, #2	@ 00022b9a 0220
.org 0x22b9c
	orrs r0, r2	@ 00022b9c 1043
.org 0x22b9e
	strb r0, [r1, #1]	@ 00022b9e 4870
.org 0x22ba0
	adds r0, r4, #0	@ 00022ba0 201c
.org 0x22ba2
	adds r0, #16	@ 00022ba2 1030
.org 0x22ba4
	ldr r1, [pc, #48]	@ 00022ba4 0c49
.org 0x22ba6
	ldr r1, [r1, #24]	@ 00022ba6 8969
.org 0x22ba8
	ldr r1, [r1, #28]	@ 00022ba8 c969
.org 0x22baa
	bl 0x275f0	@ 00022baa 04f021fd
.org 0x22bae
	ldrh r0, [r4, #8]	@ 00022bae 2089
.org 0x22bb0
	ldr r2, [pc, #40]	@ 00022bb0 0a4a
.org 0x22bb2
	ands r2, r0	@ 00022bb2 0240
.org 0x22bb4
	ldrb r1, [r4, #18]	@ 00022bb4 a17c
.org 0x22bb6
	movs r0, #253	@ 00022bb6 fd20
.org 0x22bb8
	ands r0, r1	@ 00022bb8 0840
.org 0x22bba
	strb r0, [r4, #18]	@ 00022bba a074
.org 0x22bbc
	ldr r3, [pc, #32]	@ 00022bbc 084b
.org 0x22bbe
	ldrb r1, [r3, #4]	@ 00022bbe 1979
.org 0x22bc0
	movs r0, #247	@ 00022bc0 f720
.org 0x22bc2
	ands r0, r1	@ 00022bc2 0840
.org 0x22bc4
	strb r0, [r3, #4]	@ 00022bc4 1871
.org 0x22bc6
	movs r0, #1	@ 00022bc6 0120
.org 0x22bc8
	orrs r2, r0	@ 00022bc8 0243
.org 0x22bca
	strh r2, [r4, #8]	@ 00022bca 2281
.org 0x22bcc
	movs r0, #7	@ 00022bcc 0720
.org 0x22bce
	b.n 0x22c96	@ 00022bce 62e0
.org 0x22bd0
	.byte 0x10,0xe9,0x02,0x02	@ 00022bd0 data
.org 0x22bd4
	.byte 0xe0,0x32,0x00,0x03	@ 00022bd4 data
.org 0x22bd8
	.byte 0xf8,0x2c,0x84,0x08	@ 00022bd8 data
.org 0x22bdc
	.byte 0xef,0xff,0x00,0x00	@ 00022bdc data
.org 0x22be0
	.byte 0xb0,0xe8,0x02,0x02	@ 00022be0 data
.org 0x22be4
	movs r0, #190	@ 00022be4 be20
.org 0x22be6
	lsls r0, r0, #1	@ 00022be6 4000
.org 0x22be8
	adds r4, r2, r0	@ 00022be8 1418
.org 0x22bea
	ldrb r0, [r4, #0]	@ 00022bea 2078
.org 0x22bec
	cmp r0, #7	@ 00022bec 0728
.org 0x22bee
	bne.n 0x22c08	@ 00022bee 0bd1
.org 0x22bf0
	ldr r1, [pc, #16]	@ 00022bf0 0449
.org 0x22bf2
	ldrb r2, [r1, #0]	@ 00022bf2 0a78
.org 0x22bf4
	movs r0, #127	@ 00022bf4 7f20
.org 0x22bf6
	ands r0, r2	@ 00022bf6 1040
.org 0x22bf8
	movs r2, #0	@ 00022bf8 0022
.org 0x22bfa
	strb r0, [r1, #0]	@ 00022bfa 0870
.org 0x22bfc
	strb r2, [r1, #1]	@ 00022bfc 4a70
.org 0x22bfe
	movs r0, #8	@ 00022bfe 0820
.org 0x22c00
	strb r0, [r4, #0]	@ 00022c00 2070
.org 0x22c02
	b.n 0x22c98	@ 00022c02 49e0
.org 0x22c04
	.byte 0xe0,0x32,0x00,0x03	@ 00022c04 data
.org 0x22c08
	cmp r0, #8	@ 00022c08 0828
.org 0x22c0a
	bne.n 0x22c34	@ 00022c0a 13d1
.org 0x22c0c
	ldr r1, [r3, #84]	@ 00022c0c 596d
.org 0x22c0e
	ldr r0, [pc, #28]	@ 00022c0e 0748
.org 0x22c10
	cmp r1, r0	@ 00022c10 8142
.org 0x22c12
	ble.n 0x22c34	@ 00022c12 0fdd
.org 0x22c14
	movs r0, #5	@ 00022c14 0520
.org 0x22c16
	bl 0x1f63c	@ 00022c16 fcf711fd
.org 0x22c1a
	ldr r2, [pc, #20]	@ 00022c1a 054a
.org 0x22c1c
	ldrb r1, [r2, #4]	@ 00022c1c 1179
.org 0x22c1e
	movs r0, #8	@ 00022c1e 0820
.org 0x22c20
	orrs r0, r1	@ 00022c20 0843
.org 0x22c22
	strb r0, [r2, #4]	@ 00022c22 1071
.org 0x22c24
	movs r0, #9	@ 00022c24 0920
.org 0x22c26
	strb r0, [r4, #0]	@ 00022c26 2070
.org 0x22c28
	b.n 0x22c98	@ 00022c28 36e0
.org 0x22c2a
	.byte 0x00	@ 00022c2a data
.org 0x22c2b
	.byte 0x00	@ 00022c2b data
.org 0x22c2c
	.byte 0xff,0xef,0x10,0x00	@ 00022c2c data
.org 0x22c30
	.byte 0xb0,0xe8,0x02,0x02	@ 00022c30 data
.org 0x22c34
	movs r0, #190	@ 00022c34 be20
.org 0x22c36
	lsls r0, r0, #1	@ 00022c36 4000
.org 0x22c38
	adds r5, r2, r0	@ 00022c38 1518
.org 0x22c3a
	ldrb r0, [r5, #0]	@ 00022c3a 2878
.org 0x22c3c
	cmp r0, #9	@ 00022c3c 0928
