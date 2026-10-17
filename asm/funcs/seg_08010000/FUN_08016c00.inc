@ FUN_08016c00  entry 0x08016c00  size 926
.thumb
.org 0x16c00
FUN_08016c00:
	push {r4, lr}	@ 00016c00 10b5
.org 0x16c02
	ldr r4, [pc, #136]	@ 00016c02 224c
.org 0x16c04
	ldr r0, [pc, #136]	@ 00016c04 2248
.org 0x16c06
	adds r1, r4, r0	@ 00016c06 2118
.org 0x16c08
	ldrb r0, [r1, #0]	@ 00016c08 0878
.org 0x16c0a
	adds r0, #1	@ 00016c0a 0130
.org 0x16c0c
	strb r0, [r1, #0]	@ 00016c0c 0870
.org 0x16c0e
	lsls r0, r0, #24	@ 00016c0e 0006
.org 0x16c10
	lsrs r0, r0, #24	@ 00016c10 000e
.org 0x16c12
	cmp r0, #38	@ 00016c12 2628
.org 0x16c14
	bne.n 0x16c1a	@ 00016c14 01d1
.org 0x16c16
	movs r0, #0	@ 00016c16 0020
.org 0x16c18
	strb r0, [r1, #0]	@ 00016c18 0870
.org 0x16c1a
	ldr r1, [pc, #120]	@ 00016c1a 1e49
.org 0x16c1c
	adds r3, r4, r1	@ 00016c1c 6318
.org 0x16c1e
	ldrh r0, [r3, #0]	@ 00016c1e 1888
.org 0x16c20
	subs r0, #1	@ 00016c20 0138
.org 0x16c22
	strh r0, [r3, #0]	@ 00016c22 1880
.org 0x16c24
	lsls r0, r0, #16	@ 00016c24 0004
.org 0x16c26
	cmp r0, #0	@ 00016c26 0028
.org 0x16c28
	bne.n 0x16c46	@ 00016c28 0dd1
.org 0x16c2a
	ldr r1, [pc, #108]	@ 00016c2a 1b49
.org 0x16c2c
	ldr r2, [pc, #108]	@ 00016c2c 1b4a
.org 0x16c2e
	adds r1, r1, r2	@ 00016c2e 8918
.org 0x16c30
	ldr r2, [r1, #0]	@ 00016c30 0a68
.org 0x16c32
	ldr r0, [pc, #108]	@ 00016c32 1b48
.org 0x16c34
	muls r0, r2	@ 00016c34 5043
.org 0x16c36
	ldr r2, [pc, #108]	@ 00016c36 1b4a
.org 0x16c38
	adds r0, r0, r2	@ 00016c38 8018
.org 0x16c3a
	str r0, [r1, #0]	@ 00016c3a 0860
.org 0x16c3c
	lsrs r0, r0, #16	@ 00016c3c 000c
.org 0x16c3e
	movs r1, #127	@ 00016c3e 7f21
.org 0x16c40
	ands r0, r1	@ 00016c40 0840
.org 0x16c42
	adds r0, #152	@ 00016c42 9830
.org 0x16c44
	strh r0, [r3, #0]	@ 00016c44 1880
.org 0x16c46
	ldr r1, [pc, #96]	@ 00016c46 1849
.org 0x16c48
	adds r0, r4, r1	@ 00016c48 6018
.org 0x16c4a
	ldrh r1, [r0, #0]	@ 00016c4a 0188
.org 0x16c4c
	lsrs r0, r1, #8	@ 00016c4c 080a
.org 0x16c4e
	cmp r0, #11	@ 00016c4e 0b28
.org 0x16c50
	bne.n 0x16cb0	@ 00016c50 2ed1
.org 0x16c52
	movs r0, #255	@ 00016c52 ff20
.org 0x16c54
	ands r0, r1	@ 00016c54 0840
.org 0x16c56
	cmp r0, #1	@ 00016c56 0128
.org 0x16c58
	bne.n 0x16cb0	@ 00016c58 2ad1
.org 0x16c5a
	ldr r1, [pc, #80]	@ 00016c5a 1449
.org 0x16c5c
	adds r2, r4, r1	@ 00016c5c 6218
.org 0x16c5e
	ldrb r1, [r2, #0]	@ 00016c5e 1178
.org 0x16c60
	ands r0, r1	@ 00016c60 0840
.org 0x16c62
	cmp r0, #0	@ 00016c62 0028
.org 0x16c64
	bne.n 0x16c7c	@ 00016c64 0ad1
.org 0x16c66
	movs r0, #1	@ 00016c66 0120
.org 0x16c68
	orrs r0, r1	@ 00016c68 0843
.org 0x16c6a
	strb r0, [r2, #0]	@ 00016c6a 1070
.org 0x16c6c
	movs r0, #42	@ 00016c6c 2a20
.org 0x16c6e
	movs r1, #0	@ 00016c6e 0021
.org 0x16c70
	bl 0x249c	@ 00016c70 ebf714fc
.org 0x16c74
	movs r0, #43	@ 00016c74 2b20
.org 0x16c76
	movs r1, #0	@ 00016c76 0021
.org 0x16c78
	bl 0x249c	@ 00016c78 ebf710fc
.org 0x16c7c
	movs r0, #42	@ 00016c7c 2a20
.org 0x16c7e
	bl 0x25d8	@ 00016c7e ebf7abfc
.org 0x16c82
	movs r0, #43	@ 00016c82 2b20
.org 0x16c84
	bl 0x25d8	@ 00016c84 ebf7a8fc
.org 0x16c88
	b.n 0x16cd2	@ 00016c88 23e0
.org 0x16c8a
	.byte 0x00	@ 00016c8a data
.org 0x16c8b
	.byte 0x00	@ 00016c8b data
.org 0x16c8c
	.byte 0xb0,0x0a,0x00,0x02	@ 00016c8c data
.org 0x16c90
	.byte 0x29,0xd0,0x02,0x00	@ 00016c90 data
.org 0x16c94
	.byte 0x2a,0xd0,0x02,0x00	@ 00016c94 data
.org 0x16c98
	.byte 0x10,0xf6,0x02,0x02	@ 00016c98 data
.org 0x16c9c
	.byte 0x6c,0x62,0x00,0x00	@ 00016c9c data
.org 0x16ca0
	.byte 0x6d,0x4e,0xc6,0x41	@ 00016ca0 data
.org 0x16ca4
	.byte 0x39,0x30,0x00,0x00	@ 00016ca4 data
.org 0x16ca8
	.byte 0xd6,0x07,0x00,0x00	@ 00016ca8 data
.org 0x16cac
	.byte 0x28,0xd0,0x02,0x00	@ 00016cac data
.org 0x16cb0
	ldr r0, [pc, #88]	@ 00016cb0 1648
.org 0x16cb2
	ldr r1, [pc, #92]	@ 00016cb2 1749
.org 0x16cb4
	adds r2, r0, r1	@ 00016cb4 4218
.org 0x16cb6
	ldrb r1, [r2, #0]	@ 00016cb6 1178
.org 0x16cb8
	movs r0, #1	@ 00016cb8 0120
.org 0x16cba
	ands r0, r1	@ 00016cba 0840
.org 0x16cbc
	cmp r0, #0	@ 00016cbc 0028
.org 0x16cbe
	beq.n 0x16cd2	@ 00016cbe 08d0
.org 0x16cc0
	movs r0, #1	@ 00016cc0 0120
.org 0x16cc2
	eors r0, r1	@ 00016cc2 4840
.org 0x16cc4
	strb r0, [r2, #0]	@ 00016cc4 1070
.org 0x16cc6
	movs r0, #42	@ 00016cc6 2a20
.org 0x16cc8
	bl 0x2624	@ 00016cc8 ebf7acfc
.org 0x16ccc
	movs r0, #43	@ 00016ccc 2b20
.org 0x16cce
	bl 0x2624	@ 00016cce ebf7a9fc
.org 0x16cd2
	ldr r2, [pc, #56]	@ 00016cd2 0e4a
.org 0x16cd4
	ldr r1, [pc, #60]	@ 00016cd4 0f49
.org 0x16cd6
	adds r0, r2, r1	@ 00016cd6 5018
.org 0x16cd8
	ldrh r1, [r0, #0]	@ 00016cd8 0188
.org 0x16cda
	lsrs r0, r1, #8	@ 00016cda 080a
.org 0x16cdc
	cmp r0, #11	@ 00016cdc 0b28
.org 0x16cde
	bne.n 0x16d18	@ 00016cde 1bd1
.org 0x16ce0
	movs r0, #255	@ 00016ce0 ff20
.org 0x16ce2
	ands r0, r1	@ 00016ce2 0840
.org 0x16ce4
	cmp r0, #4	@ 00016ce4 0428
.org 0x16ce6
	bne.n 0x16d18	@ 00016ce6 17d1
.org 0x16ce8
	ldr r0, [pc, #36]	@ 00016ce8 0948
.org 0x16cea
	adds r2, r2, r0	@ 00016cea 1218
.org 0x16cec
	ldrb r1, [r2, #0]	@ 00016cec 1178
.org 0x16cee
	movs r0, #2	@ 00016cee 0220
.org 0x16cf0
	ands r0, r1	@ 00016cf0 0840
.org 0x16cf2
	cmp r0, #0	@ 00016cf2 0028
.org 0x16cf4
	bne.n 0x16d04	@ 00016cf4 06d1
.org 0x16cf6
	movs r0, #2	@ 00016cf6 0220
.org 0x16cf8
	orrs r0, r1	@ 00016cf8 0843
.org 0x16cfa
	strb r0, [r2, #0]	@ 00016cfa 1070
.org 0x16cfc
	movs r0, #44	@ 00016cfc 2c20
.org 0x16cfe
	movs r1, #0	@ 00016cfe 0021
.org 0x16d00
	bl 0x249c	@ 00016d00 ebf7ccfb
.org 0x16d04
	movs r0, #44	@ 00016d04 2c20
.org 0x16d06
	bl 0x25d8	@ 00016d06 ebf767fc
.org 0x16d0a
	b.n 0x16d34	@ 00016d0a 13e0
.org 0x16d0c
	.byte 0xb0,0x0a,0x00,0x02	@ 00016d0c data
.org 0x16d10
	.byte 0x28,0xd0,0x02,0x00	@ 00016d10 data
.org 0x16d14
	.byte 0xd4,0x07,0x00,0x00	@ 00016d14 data
.org 0x16d18
	ldr r0, [pc, #84]	@ 00016d18 1548
.org 0x16d1a
	ldr r1, [pc, #88]	@ 00016d1a 1649
.org 0x16d1c
	adds r2, r0, r1	@ 00016d1c 4218
.org 0x16d1e
	ldrb r1, [r2, #0]	@ 00016d1e 1178
.org 0x16d20
	movs r0, #2	@ 00016d20 0220
.org 0x16d22
	ands r0, r1	@ 00016d22 0840
.org 0x16d24
	cmp r0, #0	@ 00016d24 0028
.org 0x16d26
	beq.n 0x16d34	@ 00016d26 05d0
.org 0x16d28
	movs r0, #2	@ 00016d28 0220
.org 0x16d2a
	eors r0, r1	@ 00016d2a 4840
.org 0x16d2c
	strb r0, [r2, #0]	@ 00016d2c 1070
.org 0x16d2e
	movs r0, #44	@ 00016d2e 2c20
.org 0x16d30
	bl 0x2624	@ 00016d30 ebf778fc
.org 0x16d34
	ldr r2, [pc, #56]	@ 00016d34 0e4a
.org 0x16d36
	ldr r1, [pc, #64]	@ 00016d36 1049
.org 0x16d38
	adds r0, r2, r1	@ 00016d38 5018
.org 0x16d3a
	ldrh r1, [r0, #0]	@ 00016d3a 0188
.org 0x16d3c
	lsrs r0, r1, #8	@ 00016d3c 080a
.org 0x16d3e
	cmp r0, #11	@ 00016d3e 0b28
.org 0x16d40
	bne.n 0x16d7c	@ 00016d40 1cd1
.org 0x16d42
	movs r0, #255	@ 00016d42 ff20
.org 0x16d44
	ands r0, r1	@ 00016d44 0840
.org 0x16d46
	cmp r0, #5	@ 00016d46 0528
.org 0x16d48
	bne.n 0x16d7c	@ 00016d48 18d1
.org 0x16d4a
	ldr r0, [pc, #40]	@ 00016d4a 0a48
.org 0x16d4c
	adds r2, r2, r0	@ 00016d4c 1218
.org 0x16d4e
	ldrb r1, [r2, #0]	@ 00016d4e 1178
.org 0x16d50
	movs r0, #4	@ 00016d50 0420
.org 0x16d52
	ands r0, r1	@ 00016d52 0840
.org 0x16d54
	cmp r0, #0	@ 00016d54 0028
.org 0x16d56
	bne.n 0x16d66	@ 00016d56 06d1
.org 0x16d58
	movs r0, #4	@ 00016d58 0420
.org 0x16d5a
	orrs r0, r1	@ 00016d5a 0843
.org 0x16d5c
	strb r0, [r2, #0]	@ 00016d5c 1070
.org 0x16d5e
	movs r0, #45	@ 00016d5e 2d20
.org 0x16d60
	movs r1, #0	@ 00016d60 0021
.org 0x16d62
	bl 0x249c	@ 00016d62 ebf79bfb
.org 0x16d66
	movs r0, #45	@ 00016d66 2d20
.org 0x16d68
	bl 0x25d8	@ 00016d68 ebf736fc
.org 0x16d6c
	b.n 0x16d98	@ 00016d6c 14e0
.org 0x16d6e
	.byte 0x00	@ 00016d6e data
.org 0x16d6f
	.byte 0x00	@ 00016d6f data
.org 0x16d70
	.byte 0xb0,0x0a,0x00,0x02	@ 00016d70 data
.org 0x16d74
	.byte 0x28,0xd0,0x02,0x00	@ 00016d74 data
.org 0x16d78
	.byte 0xd4,0x07,0x00,0x00	@ 00016d78 data
.org 0x16d7c
	ldr r0, [pc, #124]	@ 00016d7c 1f48
.org 0x16d7e
	ldr r1, [pc, #128]	@ 00016d7e 2049
.org 0x16d80
	adds r2, r0, r1	@ 00016d80 4218
.org 0x16d82
	ldrb r1, [r2, #0]	@ 00016d82 1178
.org 0x16d84
	movs r0, #4	@ 00016d84 0420
.org 0x16d86
	ands r0, r1	@ 00016d86 0840
.org 0x16d88
	cmp r0, #0	@ 00016d88 0028
.org 0x16d8a
	beq.n 0x16d98	@ 00016d8a 05d0
.org 0x16d8c
	movs r0, #4	@ 00016d8c 0420
.org 0x16d8e
	eors r0, r1	@ 00016d8e 4840
.org 0x16d90
	strb r0, [r2, #0]	@ 00016d90 1070
.org 0x16d92
	movs r0, #45	@ 00016d92 2d20
.org 0x16d94
	bl 0x2624	@ 00016d94 ebf746fc
.org 0x16d98
	ldr r2, [pc, #96]	@ 00016d98 184a
.org 0x16d9a
	ldr r1, [pc, #104]	@ 00016d9a 1a49
.org 0x16d9c
	adds r0, r2, r1	@ 00016d9c 5018
.org 0x16d9e
	ldrh r1, [r0, #0]	@ 00016d9e 0188
.org 0x16da0
	lsrs r0, r1, #8	@ 00016da0 080a
.org 0x16da2
	cmp r0, #11	@ 00016da2 0b28
.org 0x16da4
	bne.n 0x16e08	@ 00016da4 30d1
.org 0x16da6
	movs r0, #255	@ 00016da6 ff20
.org 0x16da8
	ands r0, r1	@ 00016da8 0840
.org 0x16daa
	cmp r0, #8	@ 00016daa 0828
.org 0x16dac
	bne.n 0x16e08	@ 00016dac 2cd1
.org 0x16dae
	ldr r1, [pc, #80]	@ 00016dae 1449
.org 0x16db0
	adds r2, r2, r1	@ 00016db0 5218
.org 0x16db2
	ldrb r1, [r2, #0]	@ 00016db2 1178
.org 0x16db4
	ands r0, r1	@ 00016db4 0840
.org 0x16db6
	cmp r0, #0	@ 00016db6 0028
.org 0x16db8
	bne.n 0x16de0	@ 00016db8 12d1
.org 0x16dba
	movs r0, #8	@ 00016dba 0820
.org 0x16dbc
	orrs r0, r1	@ 00016dbc 0843
.org 0x16dbe
	strb r0, [r2, #0]	@ 00016dbe 1070
.org 0x16dc0
	movs r0, #68	@ 00016dc0 4420
.org 0x16dc2
	movs r1, #0	@ 00016dc2 0021
.org 0x16dc4
	bl 0x249c	@ 00016dc4 ebf76afb
.org 0x16dc8
	movs r0, #69	@ 00016dc8 4520
.org 0x16dca
	movs r1, #0	@ 00016dca 0021
.org 0x16dcc
	bl 0x249c	@ 00016dcc ebf766fb
.org 0x16dd0
	movs r0, #70	@ 00016dd0 4620
.org 0x16dd2
	movs r1, #0	@ 00016dd2 0021
.org 0x16dd4
	bl 0x249c	@ 00016dd4 ebf762fb
.org 0x16dd8
	movs r0, #71	@ 00016dd8 4720
.org 0x16dda
	movs r1, #0	@ 00016dda 0021
.org 0x16ddc
	bl 0x249c	@ 00016ddc ebf75efb
.org 0x16de0
	movs r0, #68	@ 00016de0 4420
.org 0x16de2
	bl 0x25d8	@ 00016de2 ebf7f9fb
.org 0x16de6
	movs r0, #69	@ 00016de6 4520
.org 0x16de8
	bl 0x25d8	@ 00016de8 ebf7f6fb
.org 0x16dec
	movs r0, #70	@ 00016dec 4620
.org 0x16dee
	bl 0x25d8	@ 00016dee ebf7f3fb
.org 0x16df2
	movs r0, #71	@ 00016df2 4720
.org 0x16df4
	bl 0x25d8	@ 00016df4 ebf7f0fb
.org 0x16df8
	b.n 0x16e36	@ 00016df8 1de0
.org 0x16dfa
	.byte 0x00	@ 00016dfa data
.org 0x16dfb
	.byte 0x00	@ 00016dfb data
.org 0x16dfc
	.byte 0xb0,0x0a,0x00,0x02	@ 00016dfc data
.org 0x16e00
	.byte 0x28,0xd0,0x02,0x00	@ 00016e00 data
.org 0x16e04
	.byte 0xd4,0x07,0x00,0x00	@ 00016e04 data
.org 0x16e08
	ldr r0, [pc, #128]	@ 00016e08 2048
.org 0x16e0a
	ldr r1, [pc, #132]	@ 00016e0a 2149
.org 0x16e0c
	adds r2, r0, r1	@ 00016e0c 4218
.org 0x16e0e
	ldrb r1, [r2, #0]	@ 00016e0e 1178
.org 0x16e10
	movs r0, #8	@ 00016e10 0820
.org 0x16e12
	ands r0, r1	@ 00016e12 0840
.org 0x16e14
	cmp r0, #0	@ 00016e14 0028
.org 0x16e16
	beq.n 0x16e36	@ 00016e16 0ed0
.org 0x16e18
	movs r0, #8	@ 00016e18 0820
.org 0x16e1a
	eors r0, r1	@ 00016e1a 4840
.org 0x16e1c
	strb r0, [r2, #0]	@ 00016e1c 1070
.org 0x16e1e
	movs r0, #68	@ 00016e1e 4420
.org 0x16e20
	bl 0x2624	@ 00016e20 ebf700fc
.org 0x16e24
	movs r0, #69	@ 00016e24 4520
.org 0x16e26
	bl 0x2624	@ 00016e26 ebf7fdfb
.org 0x16e2a
	movs r0, #70	@ 00016e2a 4620
.org 0x16e2c
	bl 0x2624	@ 00016e2c ebf7fafb
.org 0x16e30
	movs r0, #71	@ 00016e30 4720
.org 0x16e32
	bl 0x2624	@ 00016e32 ebf7f7fb
.org 0x16e36
	ldr r2, [pc, #84]	@ 00016e36 154a
.org 0x16e38
	ldr r1, [pc, #88]	@ 00016e38 1649
.org 0x16e3a
	adds r0, r2, r1	@ 00016e3a 5018
.org 0x16e3c
	ldrh r1, [r0, #0]	@ 00016e3c 0188
.org 0x16e3e
	lsrs r0, r1, #8	@ 00016e3e 080a
.org 0x16e40
	cmp r0, #11	@ 00016e40 0b28
.org 0x16e42
	bne.n 0x16e98	@ 00016e42 29d1
.org 0x16e44
	movs r0, #255	@ 00016e44 ff20
.org 0x16e46
	ands r0, r1	@ 00016e46 0840
.org 0x16e48
	cmp r0, #10	@ 00016e48 0a28
.org 0x16e4a
	bne.n 0x16e98	@ 00016e4a 25d1
.org 0x16e4c
	ldr r0, [pc, #64]	@ 00016e4c 1048
.org 0x16e4e
	adds r2, r2, r0	@ 00016e4e 1218
.org 0x16e50
	ldrb r1, [r2, #0]	@ 00016e50 1178
.org 0x16e52
	movs r0, #16	@ 00016e52 1020
.org 0x16e54
	ands r0, r1	@ 00016e54 0840
.org 0x16e56
	cmp r0, #0	@ 00016e56 0028
.org 0x16e58
	bne.n 0x16e78	@ 00016e58 0ed1
.org 0x16e5a
	movs r0, #16	@ 00016e5a 1020
.org 0x16e5c
	orrs r0, r1	@ 00016e5c 0843
.org 0x16e5e
	strb r0, [r2, #0]	@ 00016e5e 1070
.org 0x16e60
	movs r0, #81	@ 00016e60 5120
.org 0x16e62
	movs r1, #0	@ 00016e62 0021
.org 0x16e64
	bl 0x249c	@ 00016e64 ebf71afb
.org 0x16e68
	movs r0, #82	@ 00016e68 5220
.org 0x16e6a
	movs r1, #0	@ 00016e6a 0021
.org 0x16e6c
	bl 0x249c	@ 00016e6c ebf716fb
.org 0x16e70
	movs r0, #83	@ 00016e70 5320
.org 0x16e72
	movs r1, #0	@ 00016e72 0021
.org 0x16e74
	bl 0x249c	@ 00016e74 ebf712fb
.org 0x16e78
	movs r0, #81	@ 00016e78 5120
.org 0x16e7a
	bl 0x25d8	@ 00016e7a ebf7adfb
.org 0x16e7e
	movs r0, #82	@ 00016e7e 5220
.org 0x16e80
	bl 0x25d8	@ 00016e80 ebf7aafb
.org 0x16e84
	movs r0, #83	@ 00016e84 5320
.org 0x16e86
	bl 0x25d8	@ 00016e86 ebf7a7fb
.org 0x16e8a
	b.n 0x16ec0	@ 00016e8a 19e0
.org 0x16e8c
	.byte 0xb0,0x0a,0x00,0x02	@ 00016e8c data
.org 0x16e90
	.byte 0x28,0xd0,0x02,0x00	@ 00016e90 data
.org 0x16e94
	.byte 0xd4,0x07,0x00,0x00	@ 00016e94 data
.org 0x16e98
	ldr r0, [pc, #108]	@ 00016e98 1b48
.org 0x16e9a
	ldr r1, [pc, #112]	@ 00016e9a 1c49
.org 0x16e9c
	adds r2, r0, r1	@ 00016e9c 4218
.org 0x16e9e
	ldrb r1, [r2, #0]	@ 00016e9e 1178
.org 0x16ea0
	movs r0, #16	@ 00016ea0 1020
.org 0x16ea2
	ands r0, r1	@ 00016ea2 0840
.org 0x16ea4
	cmp r0, #0	@ 00016ea4 0028
.org 0x16ea6
	beq.n 0x16ec0	@ 00016ea6 0bd0
.org 0x16ea8
	movs r0, #16	@ 00016ea8 1020
.org 0x16eaa
	eors r0, r1	@ 00016eaa 4840
.org 0x16eac
	strb r0, [r2, #0]	@ 00016eac 1070
.org 0x16eae
	movs r0, #81	@ 00016eae 5120
.org 0x16eb0
	bl 0x2624	@ 00016eb0 ebf7b8fb
.org 0x16eb4
	movs r0, #82	@ 00016eb4 5220
.org 0x16eb6
	bl 0x2624	@ 00016eb6 ebf7b5fb
.org 0x16eba
	movs r0, #83	@ 00016eba 5320
.org 0x16ebc
	bl 0x2624	@ 00016ebc ebf7b2fb
.org 0x16ec0
	ldr r2, [pc, #68]	@ 00016ec0 114a
.org 0x16ec2
	ldr r1, [pc, #76]	@ 00016ec2 1349
.org 0x16ec4
	adds r0, r2, r1	@ 00016ec4 5018
.org 0x16ec6
	ldrb r1, [r0, #0]	@ 00016ec6 0178
.org 0x16ec8
	movs r0, #1	@ 00016ec8 0120
.org 0x16eca
	ands r0, r1	@ 00016eca 0840
.org 0x16ecc
	cmp r0, #0	@ 00016ecc 0028
.org 0x16ece
	beq.n 0x16f18	@ 00016ece 23d0
.org 0x16ed0
	ldr r1, [pc, #64]	@ 00016ed0 1049
.org 0x16ed2
	adds r0, r2, r1	@ 00016ed2 5018
.org 0x16ed4
	ldrh r1, [r0, #0]	@ 00016ed4 0188
.org 0x16ed6
	lsrs r0, r1, #8	@ 00016ed6 080a
.org 0x16ed8
	cmp r0, #11	@ 00016ed8 0b28
.org 0x16eda
	bne.n 0x16f18	@ 00016eda 1dd1
.org 0x16edc
	movs r0, #255	@ 00016edc ff20
.org 0x16ede
	ands r0, r1	@ 00016ede 0840
.org 0x16ee0
	cmp r0, #12	@ 00016ee0 0c28
.org 0x16ee2
	bne.n 0x16f18	@ 00016ee2 19d1
.org 0x16ee4
	ldr r0, [pc, #36]	@ 00016ee4 0948
.org 0x16ee6
	adds r2, r2, r0	@ 00016ee6 1218
.org 0x16ee8
	ldrb r1, [r2, #0]	@ 00016ee8 1178
.org 0x16eea
	movs r0, #32	@ 00016eea 2020
.org 0x16eec
	ands r0, r1	@ 00016eec 0840
.org 0x16eee
	cmp r0, #0	@ 00016eee 0028
.org 0x16ef0
	bne.n 0x16f00	@ 00016ef0 06d1
.org 0x16ef2
	movs r0, #32	@ 00016ef2 2020
.org 0x16ef4
	orrs r0, r1	@ 00016ef4 0843
.org 0x16ef6
	strb r0, [r2, #0]	@ 00016ef6 1070
.org 0x16ef8
	movs r0, #203	@ 00016ef8 cb20
.org 0x16efa
	movs r1, #0	@ 00016efa 0021
.org 0x16efc
	bl 0x249c	@ 00016efc ebf7cefa
.org 0x16f00
	movs r0, #203	@ 00016f00 cb20
.org 0x16f02
	bl 0x25d8	@ 00016f02 ebf769fb
.org 0x16f06
	b.n 0x16f34	@ 00016f06 15e0
.org 0x16f08
	.byte 0xb0,0x0a,0x00,0x02	@ 00016f08 data
.org 0x16f0c
	.byte 0x28,0xd0,0x02,0x00	@ 00016f0c data
.org 0x16f10
	.byte 0x26,0xd0,0x02,0x00	@ 00016f10 data
.org 0x16f14
	.byte 0xd4,0x07,0x00,0x00	@ 00016f14 data
.org 0x16f18
	ldr r0, [pc, #100]	@ 00016f18 1948
.org 0x16f1a
	ldr r1, [pc, #104]	@ 00016f1a 1a49
.org 0x16f1c
	adds r2, r0, r1	@ 00016f1c 4218
.org 0x16f1e
	ldrb r1, [r2, #0]	@ 00016f1e 1178
.org 0x16f20
	movs r0, #32	@ 00016f20 2020
.org 0x16f22
	ands r0, r1	@ 00016f22 0840
.org 0x16f24
	cmp r0, #0	@ 00016f24 0028
.org 0x16f26
	beq.n 0x16f34	@ 00016f26 05d0
.org 0x16f28
	movs r0, #32	@ 00016f28 2020
.org 0x16f2a
	eors r0, r1	@ 00016f2a 4840
.org 0x16f2c
	strb r0, [r2, #0]	@ 00016f2c 1070
.org 0x16f2e
	movs r0, #203	@ 00016f2e cb20
.org 0x16f30
	bl 0x2624	@ 00016f30 ebf778fb
.org 0x16f34
	ldr r2, [pc, #72]	@ 00016f34 124a
.org 0x16f36
	ldr r1, [pc, #80]	@ 00016f36 1449
.org 0x16f38
	adds r0, r2, r1	@ 00016f38 5018
.org 0x16f3a
	ldrb r1, [r0, #0]	@ 00016f3a 0178
.org 0x16f3c
	movs r0, #2	@ 00016f3c 0220
.org 0x16f3e
	ands r0, r1	@ 00016f3e 0840
.org 0x16f40
	cmp r0, #0	@ 00016f40 0028
.org 0x16f42
	beq.n 0x16f90	@ 00016f42 25d0
.org 0x16f44
	ldr r1, [pc, #68]	@ 00016f44 1149
.org 0x16f46
	adds r0, r2, r1	@ 00016f46 5018
.org 0x16f48
	ldrh r1, [r0, #0]	@ 00016f48 0188
.org 0x16f4a
	lsrs r0, r1, #8	@ 00016f4a 080a
.org 0x16f4c
	cmp r0, #11	@ 00016f4c 0b28
.org 0x16f4e
	bne.n 0x16f90	@ 00016f4e 1fd1
.org 0x16f50
	movs r0, #255	@ 00016f50 ff20
.org 0x16f52
	ands r0, r1	@ 00016f52 0840
.org 0x16f54
	cmp r0, #12	@ 00016f54 0c28
.org 0x16f56
	beq.n 0x16f5c	@ 00016f56 01d0
.org 0x16f58
	cmp r0, #13	@ 00016f58 0d28
.org 0x16f5a
	bne.n 0x16f90	@ 00016f5a 19d1
.org 0x16f5c
	ldr r0, [pc, #36]	@ 00016f5c 0948
.org 0x16f5e
	adds r2, r2, r0	@ 00016f5e 1218
.org 0x16f60
	ldrb r1, [r2, #0]	@ 00016f60 1178
.org 0x16f62
	movs r0, #64	@ 00016f62 4020
.org 0x16f64
	ands r0, r1	@ 00016f64 0840
.org 0x16f66
	cmp r0, #0	@ 00016f66 0028
.org 0x16f68
	bne.n 0x16f78	@ 00016f68 06d1
.org 0x16f6a
	movs r0, #64	@ 00016f6a 4020
.org 0x16f6c
	orrs r0, r1	@ 00016f6c 0843
.org 0x16f6e
	strb r0, [r2, #0]	@ 00016f6e 1070
.org 0x16f70
	movs r0, #204	@ 00016f70 cc20
.org 0x16f72
	movs r1, #0	@ 00016f72 0021
.org 0x16f74
	bl 0x249c	@ 00016f74 ebf792fa
.org 0x16f78
	movs r0, #204	@ 00016f78 cc20
.org 0x16f7a
	bl 0x25d8	@ 00016f7a ebf72dfb
.org 0x16f7e
	b.n 0x16fac	@ 00016f7e 15e0
.org 0x16f80
	.byte 0xb0,0x0a,0x00,0x02	@ 00016f80 data
.org 0x16f84
	.byte 0x28,0xd0,0x02,0x00	@ 00016f84 data
.org 0x16f88
	.byte 0x26,0xd0,0x02,0x00	@ 00016f88 data
.org 0x16f8c
	.byte 0xd4,0x07,0x00,0x00	@ 00016f8c data
.org 0x16f90
	ldr r0, [pc, #100]	@ 00016f90 1948
.org 0x16f92
	ldr r1, [pc, #104]	@ 00016f92 1a49
.org 0x16f94
	adds r2, r0, r1	@ 00016f94 4218
.org 0x16f96
	ldrb r1, [r2, #0]	@ 00016f96 1178
.org 0x16f98
	movs r0, #64	@ 00016f98 4020
.org 0x16f9a
	ands r0, r1	@ 00016f9a 0840
.org 0x16f9c
	cmp r0, #0	@ 00016f9c 0028
