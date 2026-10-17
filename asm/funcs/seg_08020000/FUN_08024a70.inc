@ FUN_08024a70  entry 0x08024a70  size 538
.thumb
.org 0x24a70
FUN_08024a70:
	push {r4, r5, r6, r7, lr}	@ 00024a70 f0b5
.org 0x24a72
	adds r2, r0, #0	@ 00024a72 021c
.org 0x24a74
	ldr r3, [r2, #32]	@ 00024a74 136a
.org 0x24a76
	movs r0, #190	@ 00024a76 be20
.org 0x24a78
	lsls r0, r0, #1	@ 00024a78 4000
.org 0x24a7a
	adds r5, r2, r0	@ 00024a7a 1518
.org 0x24a7c
	ldrb r0, [r5, #0]	@ 00024a7c 2878
.org 0x24a7e
	cmp r0, #0	@ 00024a7e 0028
.org 0x24a80
	bne.n 0x24b58	@ 00024a80 6ad1
.org 0x24a82
	ldr r2, [pc, #68]	@ 00024a82 114a
.org 0x24a84
	ldrh r0, [r2, #8]	@ 00024a84 1089
.org 0x24a86
	movs r7, #1	@ 00024a86 0127
.org 0x24a88
	adds r3, r7, #0	@ 00024a88 3b1c
.org 0x24a8a
	orrs r3, r0	@ 00024a8a 0343
.org 0x24a8c
	strh r3, [r2, #8]	@ 00024a8c 1381
.org 0x24a8e
	ldr r6, [pc, #60]	@ 00024a8e 0f4e
.org 0x24a90
	ldrb r1, [r6, #4]	@ 00024a90 3179
.org 0x24a92
	movs r0, #8	@ 00024a92 0820
.org 0x24a94
	orrs r0, r1	@ 00024a94 0843
.org 0x24a96
	strb r0, [r6, #4]	@ 00024a96 3071
.org 0x24a98
	ldrb r4, [r2, #2]	@ 00024a98 9478
.org 0x24a9a
	cmp r4, #0	@ 00024a9a 002c
.org 0x24a9c
	bne.n 0x24ad4	@ 00024a9c 1ad1
.org 0x24a9e
	adds r0, r2, #0	@ 00024a9e 101c
.org 0x24aa0
	adds r0, #16	@ 00024aa0 1030
.org 0x24aa2
	ldr r1, [pc, #44]	@ 00024aa2 0b49
.org 0x24aa4
	ldr r1, [r1, #44]	@ 00024aa4 c96a
.org 0x24aa6
	ldr r1, [r1, #0]	@ 00024aa6 0968
.org 0x24aa8
	bl 0x275f0	@ 00024aa8 02f0a2fd
.org 0x24aac
	movs r0, #1	@ 00024aac 0120
.org 0x24aae
	bl 0x1f63c	@ 00024aae faf7c5fd
.org 0x24ab2
	movs r1, #254	@ 00024ab2 fe21
.org 0x24ab4
	movs r2, #253	@ 00024ab4 fd22
.org 0x24ab6
	movs r0, #0	@ 00024ab6 0020
.org 0x24ab8
	strb r0, [r6, #11]	@ 00024ab8 f072
.org 0x24aba
	strb r0, [r6, #12]	@ 00024aba 3073
.org 0x24abc
	ldrb r0, [r6, #13]	@ 00024abc 707b
.org 0x24abe
	ands r1, r0	@ 00024abe 0140
.org 0x24ac0
	ands r1, r2	@ 00024ac0 1140
.org 0x24ac2
	strb r1, [r6, #13]	@ 00024ac2 7173
.org 0x24ac4
	strb r7, [r5, #0]	@ 00024ac4 2f70
.org 0x24ac6
	b.n 0x24cc6	@ 00024ac6 fee0
.org 0x24ac8
	.byte 0x10,0xe9,0x02,0x02	@ 00024ac8 data
.org 0x24acc
	.byte 0xb0,0xe8,0x02,0x02	@ 00024acc data
.org 0x24ad0
	.byte 0xf8,0x2c,0x84,0x08	@ 00024ad0 data
.org 0x24ad4
	cmp r4, #1	@ 00024ad4 012c
.org 0x24ad6
	bne.n 0x24af4	@ 00024ad6 0dd1
.org 0x24ad8
	adds r0, r2, #0	@ 00024ad8 101c
.org 0x24ada
	adds r0, #16	@ 00024ada 1030
.org 0x24adc
	ldr r1, [pc, #16]	@ 00024adc 0449
.org 0x24ade
	ldr r1, [r1, #44]	@ 00024ade c96a
.org 0x24ae0
	ldr r1, [r1, #4]	@ 00024ae0 4968
.org 0x24ae2
	bl 0x275f0	@ 00024ae2 02f085fd
.org 0x24ae6
	movs r0, #2	@ 00024ae6 0220
.org 0x24ae8
	bl 0x1f63c	@ 00024ae8 faf7a8fd
.org 0x24aec
	movs r0, #2	@ 00024aec 0220
.org 0x24aee
	b.n 0x24cc4	@ 00024aee e9e0
.org 0x24af0
	.byte 0xf8,0x2c,0x84,0x08	@ 00024af0 data
.org 0x24af4
	cmp r4, #2	@ 00024af4 022c
.org 0x24af6
	bne.n 0x24b08	@ 00024af6 07d1
.org 0x24af8
	adds r0, r2, #0	@ 00024af8 101c
.org 0x24afa
	adds r0, #16	@ 00024afa 1030
.org 0x24afc
	ldr r1, [pc, #4]	@ 00024afc 0149
.org 0x24afe
	ldr r1, [r1, #44]	@ 00024afe c96a
.org 0x24b00
	ldr r1, [r1, #8]	@ 00024b00 8968
.org 0x24b02
	b.n 0x24b16	@ 00024b02 08e0
.org 0x24b04
	.byte 0xf8,0x2c,0x84,0x08	@ 00024b04 data
.org 0x24b08
	cmp r4, #3	@ 00024b08 032c
.org 0x24b0a
	bne.n 0x24b24	@ 00024b0a 0bd1
.org 0x24b0c
	adds r0, r2, #0	@ 00024b0c 101c
.org 0x24b0e
	adds r0, #16	@ 00024b0e 1030
.org 0x24b10
	ldr r1, [pc, #12]	@ 00024b10 0349
.org 0x24b12
	ldr r1, [r1, #44]	@ 00024b12 c96a
.org 0x24b14
	ldr r1, [r1, #16]	@ 00024b14 0969
.org 0x24b16
	bl 0x275f0	@ 00024b16 02f06bfd
.org 0x24b1a
	strb r4, [r5, #0]	@ 00024b1a 2c70
.org 0x24b1c
	b.n 0x24cc6	@ 00024b1c d3e0
.org 0x24b1e
	.byte 0x00	@ 00024b1e data
.org 0x24b1f
	.byte 0x00	@ 00024b1f data
.org 0x24b20
	.byte 0xf8,0x2c,0x84,0x08	@ 00024b20 data
.org 0x24b24
	cmp r4, #4	@ 00024b24 042c
.org 0x24b26
	bne.n 0x24b44	@ 00024b26 0dd1
.org 0x24b28
	adds r0, r2, #0	@ 00024b28 101c
.org 0x24b2a
	adds r0, #16	@ 00024b2a 1030
.org 0x24b2c
	ldr r1, [pc, #16]	@ 00024b2c 0449
.org 0x24b2e
	ldr r1, [r1, #44]	@ 00024b2e c96a
.org 0x24b30
	ldr r1, [r1, #24]	@ 00024b30 8969
.org 0x24b32
	bl 0x275f0	@ 00024b32 02f05dfd
.org 0x24b36
	movs r0, #3	@ 00024b36 0320
.org 0x24b38
	bl 0x1f63c	@ 00024b38 faf780fd
.org 0x24b3c
	movs r0, #7	@ 00024b3c 0720
.org 0x24b3e
	b.n 0x24cc4	@ 00024b3e c1e0
.org 0x24b40
	.byte 0xf8,0x2c,0x84,0x08	@ 00024b40 data
.org 0x24b44
	cmp r4, #5	@ 00024b44 052c
.org 0x24b46
	beq.n 0x24b4a	@ 00024b46 00d0
.org 0x24b48
	b.n 0x24cc6	@ 00024b48 bde0
.org 0x24b4a
	ldr r0, [pc, #8]	@ 00024b4a 0248
.org 0x24b4c
	ands r3, r0	@ 00024b4c 0340
.org 0x24b4e
	strh r3, [r2, #8]	@ 00024b4e 1381
.org 0x24b50
	b.n 0x24cc2	@ 00024b50 b7e0
.org 0x24b52
	.byte 0x00	@ 00024b52 data
.org 0x24b53
	.byte 0x00	@ 00024b53 data
.org 0x24b54
	.byte 0xfe,0xff,0x00,0x00	@ 00024b54 data
.org 0x24b58
	cmp r0, #1	@ 00024b58 0128
.org 0x24b5a
	bne.n 0x24b66	@ 00024b5a 04d1
.org 0x24b5c
	movs r0, #2	@ 00024b5c 0220
.org 0x24b5e
	bl 0x1f63c	@ 00024b5e faf76dfd
.org 0x24b62
	movs r0, #2	@ 00024b62 0220
.org 0x24b64
	b.n 0x24cc4	@ 00024b64 aee0
.org 0x24b66
	cmp r0, #2	@ 00024b66 0228
.org 0x24b68
	bne.n 0x24b98	@ 00024b68 16d1
.org 0x24b6a
	ldr r1, [r3, #84]	@ 00024b6a 596d
.org 0x24b6c
	ldr r0, [pc, #32]	@ 00024b6c 0848
.org 0x24b6e
	cmp r1, r0	@ 00024b6e 8142
.org 0x24b70
	ble.n 0x24b98	@ 00024b70 12dd
.org 0x24b72
	ldr r1, [pc, #32]	@ 00024b72 0849
.org 0x24b74
	ldrb r2, [r1, #1]	@ 00024b74 4a78
.org 0x24b76
	movs r0, #2	@ 00024b76 0220
.org 0x24b78
	orrs r0, r2	@ 00024b78 1043
.org 0x24b7a
	strb r0, [r1, #1]	@ 00024b7a 4870
.org 0x24b7c
	ldrb r2, [r1, #0]	@ 00024b7c 0a78
.org 0x24b7e
	movs r0, #128	@ 00024b7e 8020
.org 0x24b80
	orrs r0, r2	@ 00024b80 1043
.org 0x24b82
	strb r0, [r1, #0]	@ 00024b82 0870
.org 0x24b84
	movs r0, #4	@ 00024b84 0420
.org 0x24b86
	bl 0x1f63c	@ 00024b86 faf759fd
.org 0x24b8a
	movs r0, #4	@ 00024b8a 0420
.org 0x24b8c
	b.n 0x24cc4	@ 00024b8c 9ae0
.org 0x24b8e
	.byte 0x00	@ 00024b8e data
.org 0x24b8f
	.byte 0x00	@ 00024b8f data
.org 0x24b90
	.byte 0xff,0xbf,0x1f,0x00	@ 00024b90 data
.org 0x24b94
	.byte 0xe0,0x32,0x00,0x03	@ 00024b94 data
.org 0x24b98
	.byte 0xbe,0x21	@ 00024b98 (raw)
.org 0x24b9a
	lsls r1, r1, #1	@ 00024b9a 4900
.org 0x24b9c
	adds r4, r2, r1	@ 00024b9c 5418
.org 0x24b9e
	ldrb r0, [r4, #0]	@ 00024b9e 2078
.org 0x24ba0
	cmp r0, #3	@ 00024ba0 0328
.org 0x24ba2
	bne.n 0x24bd4	@ 00024ba2 17d1
.org 0x24ba4
	ldr r1, [r3, #84]	@ 00024ba4 596d
.org 0x24ba6
	ldr r0, [pc, #36]	@ 00024ba6 0948
.org 0x24ba8
	cmp r1, r0	@ 00024ba8 8142
.org 0x24baa
	ble.n 0x24bd4	@ 00024baa 13dd
.org 0x24bac
	ldr r1, [pc, #32]	@ 00024bac 0849
.org 0x24bae
	ldrb r2, [r1, #1]	@ 00024bae 4a78
.org 0x24bb0
	movs r0, #2	@ 00024bb0 0220
.org 0x24bb2
	orrs r0, r2	@ 00024bb2 1043
.org 0x24bb4
	strb r0, [r1, #1]	@ 00024bb4 4870
.org 0x24bb6
	ldrb r2, [r1, #0]	@ 00024bb6 0a78
.org 0x24bb8
	movs r0, #128	@ 00024bb8 8020
.org 0x24bba
	orrs r0, r2	@ 00024bba 1043
.org 0x24bbc
	strb r0, [r1, #0]	@ 00024bbc 0870
.org 0x24bbe
	movs r0, #4	@ 00024bbe 0420
.org 0x24bc0
	bl 0x1f63c	@ 00024bc0 faf73cfd
.org 0x24bc4
	movs r0, #5	@ 00024bc4 0520
.org 0x24bc6
	strb r0, [r4, #0]	@ 00024bc6 2070
.org 0x24bc8
	b.n 0x24cc6	@ 00024bc8 7de0
.org 0x24bca
	.byte 0x00	@ 00024bca data
.org 0x24bcb
	.byte 0x00	@ 00024bcb data
.org 0x24bcc
	.byte 0xff,0xdf,0x1f,0x00	@ 00024bcc data
.org 0x24bd0
	.byte 0xe0,0x32,0x00,0x03	@ 00024bd0 data
.org 0x24bd4
	movs r0, #190	@ 00024bd4 be20
.org 0x24bd6
	lsls r0, r0, #1	@ 00024bd6 4000
.org 0x24bd8
	adds r5, r2, r0	@ 00024bd8 1518
.org 0x24bda
	ldrb r0, [r5, #0]	@ 00024bda 2878
.org 0x24bdc
	cmp r0, #4	@ 00024bdc 0428
.org 0x24bde
	bne.n 0x24c04	@ 00024bde 11d1
.org 0x24be0
	ldr r1, [pc, #20]	@ 00024be0 0549
.org 0x24be2
	movs r0, #0	@ 00024be2 0020
.org 0x24be4
	strb r0, [r1, #1]	@ 00024be4 4870
.org 0x24be6
	ldr r0, [pc, #20]	@ 00024be6 0548
.org 0x24be8
	ldr r1, [pc, #20]	@ 00024be8 0549
.org 0x24bea
	ldr r1, [r1, #44]	@ 00024bea c96a
.org 0x24bec
	ldr r1, [r1, #12]	@ 00024bec c968
.org 0x24bee
	bl 0x275f0	@ 00024bee 02f0fffc
.org 0x24bf2
	movs r0, #6	@ 00024bf2 0620
.org 0x24bf4
	b.n 0x24cc4	@ 00024bf4 66e0
.org 0x24bf6
	.byte 0x00	@ 00024bf6 data
.org 0x24bf7
	.byte 0x00	@ 00024bf7 data
.org 0x24bf8
	.byte 0xe0,0x32,0x00,0x03	@ 00024bf8 data
.org 0x24bfc
	.byte 0x20,0xe9,0x02,0x02	@ 00024bfc data
.org 0x24c00
	.byte 0xf8,0x2c,0x84,0x08	@ 00024c00 data
.org 0x24c04
	cmp r0, #5	@ 00024c04 0528
.org 0x24c06
	bne.n 0x24c2c	@ 00024c06 11d1
.org 0x24c08
	ldr r1, [pc, #20]	@ 00024c08 0549
.org 0x24c0a
	movs r0, #0	@ 00024c0a 0020
.org 0x24c0c
	strb r0, [r1, #1]	@ 00024c0c 4870
.org 0x24c0e
	ldr r0, [pc, #20]	@ 00024c0e 0548
.org 0x24c10
	ldr r1, [pc, #20]	@ 00024c10 0549
.org 0x24c12
	ldr r1, [r1, #44]	@ 00024c12 c96a
.org 0x24c14
	ldr r1, [r1, #20]	@ 00024c14 4969
.org 0x24c16
	bl 0x275f0	@ 00024c16 02f0ebfc
.org 0x24c1a
	movs r0, #6	@ 00024c1a 0620
.org 0x24c1c
	b.n 0x24cc4	@ 00024c1c 52e0
.org 0x24c1e
	.byte 0x00	@ 00024c1e data
.org 0x24c1f
	.byte 0x00	@ 00024c1f data
.org 0x24c20
	.byte 0xe0,0x32,0x00,0x03	@ 00024c20 data
.org 0x24c24
	.byte 0x20,0xe9,0x02,0x02	@ 00024c24 data
.org 0x24c28
	.byte 0xf8,0x2c,0x84,0x08	@ 00024c28 data
.org 0x24c2c
	cmp r0, #6	@ 00024c2c 0628
.org 0x24c2e
	bne.n 0x24c3a	@ 00024c2e 04d1
.org 0x24c30
	movs r0, #3	@ 00024c30 0320
.org 0x24c32
	bl 0x1f63c	@ 00024c32 faf703fd
.org 0x24c36
	movs r0, #7	@ 00024c36 0720
.org 0x24c38
	b.n 0x24cc4	@ 00024c38 44e0
.org 0x24c3a
	cmp r0, #7	@ 00024c3a 0728
.org 0x24c3c
	bne.n 0x24c94	@ 00024c3c 2ad1
.org 0x24c3e
	ldr r4, [pc, #68]	@ 00024c3e 114c
.org 0x24c40
	ldrh r1, [r4, #8]	@ 00024c40 2189
.org 0x24c42
	movs r0, #16	@ 00024c42 1020
.org 0x24c44
	ands r0, r1	@ 00024c44 0840
.org 0x24c46
	cmp r0, #0	@ 00024c46 0028
.org 0x24c48
	beq.n 0x24c94	@ 00024c48 24d0
.org 0x24c4a
	ldr r1, [pc, #60]	@ 00024c4a 0f49
.org 0x24c4c
	ldrb r2, [r1, #0]	@ 00024c4c 0a78
.org 0x24c4e
	movs r0, #128	@ 00024c4e 8020
.org 0x24c50
	orrs r0, r2	@ 00024c50 1043
.org 0x24c52
	strb r0, [r1, #0]	@ 00024c52 0870
.org 0x24c54
	ldrb r2, [r1, #1]	@ 00024c54 4a78
.org 0x24c56
	movs r0, #2	@ 00024c56 0220
.org 0x24c58
	orrs r0, r2	@ 00024c58 1043
.org 0x24c5a
	strb r0, [r1, #1]	@ 00024c5a 4870
.org 0x24c5c
	adds r0, r4, #0	@ 00024c5c 201c
.org 0x24c5e
	adds r0, #16	@ 00024c5e 1030
.org 0x24c60
	ldr r1, [pc, #40]	@ 00024c60 0a49
.org 0x24c62
	ldr r1, [r1, #44]	@ 00024c62 c96a
.org 0x24c64
	ldr r1, [r1, #28]	@ 00024c64 c969
.org 0x24c66
	bl 0x275f0	@ 00024c66 02f0c3fc
.org 0x24c6a
	ldrh r0, [r4, #8]	@ 00024c6a 2089
.org 0x24c6c
	ldr r1, [pc, #32]	@ 00024c6c 0849
.org 0x24c6e
	ands r1, r0	@ 00024c6e 0140
.org 0x24c70
	ldrb r2, [r4, #18]	@ 00024c70 a27c
.org 0x24c72
	movs r0, #253	@ 00024c72 fd20
.org 0x24c74
	ands r0, r2	@ 00024c74 1040
.org 0x24c76
	strb r0, [r4, #18]	@ 00024c76 a074
.org 0x24c78
	movs r0, #1	@ 00024c78 0120
.org 0x24c7a
	orrs r1, r0	@ 00024c7a 0143
.org 0x24c7c
	strh r1, [r4, #8]	@ 00024c7c 2181
.org 0x24c7e
	movs r0, #8	@ 00024c7e 0820
.org 0x24c80
	b.n 0x24cc4	@ 00024c80 20e0
.org 0x24c82
	.byte 0x00	@ 00024c82 data
.org 0x24c83
	.byte 0x00	@ 00024c83 data
.org 0x24c84
	.byte 0x10,0xe9,0x02,0x02	@ 00024c84 data
.org 0x24c88
	.byte 0xe0,0x32,0x00,0x03	@ 00024c88 data
