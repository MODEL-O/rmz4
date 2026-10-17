@ FUN_08024d60  entry 0x08024d60  size 812
.thumb
.org 0x24d60
FUN_08024d60:
	push {r4, r5, r6, r7, lr}	@ 00024d60 f0b5
.org 0x24d62
	adds r4, r0, #0	@ 00024d62 041c
.org 0x24d64
	ldr r5, [r4, #32]	@ 00024d64 256a
.org 0x24d66
	movs r0, #190	@ 00024d66 be20
.org 0x24d68
	lsls r0, r0, #1	@ 00024d68 4000
.org 0x24d6a
	adds r6, r4, r0	@ 00024d6a 2618
.org 0x24d6c
	ldrb r0, [r6, #0]	@ 00024d6c 3078
.org 0x24d6e
	cmp r0, #0	@ 00024d6e 0028
.org 0x24d70
	bne.n 0x24e50	@ 00024d70 6ed1
.org 0x24d72
	ldr r5, [pc, #56]	@ 00024d72 0e4d
.org 0x24d74
	ldrh r0, [r5, #8]	@ 00024d74 2889
.org 0x24d76
	movs r7, #1	@ 00024d76 0127
.org 0x24d78
	movs r3, #0	@ 00024d78 0023
.org 0x24d7a
	orrs r0, r7	@ 00024d7a 3843
.org 0x24d7c
	strh r0, [r5, #8]	@ 00024d7c 2881
.org 0x24d7e
	ldr r2, [pc, #48]	@ 00024d7e 0c4a
.org 0x24d80
	ldrb r1, [r2, #4]	@ 00024d80 1179
.org 0x24d82
	movs r0, #8	@ 00024d82 0820
.org 0x24d84
	orrs r0, r1	@ 00024d84 0843
.org 0x24d86
	strb r0, [r2, #4]	@ 00024d86 1071
.org 0x24d88
	ldr r1, [pc, #40]	@ 00024d88 0a49
.org 0x24d8a
	adds r0, r4, r1	@ 00024d8a 6018
.org 0x24d8c
	strb r3, [r0, #0]	@ 00024d8c 0370
.org 0x24d8e
	ldrb r4, [r5, #2]	@ 00024d8e ac78
.org 0x24d90
	cmp r4, #0	@ 00024d90 002c
.org 0x24d92
	bne.n 0x24dbc	@ 00024d92 13d1
.org 0x24d94
	adds r0, r5, #0	@ 00024d94 281c
.org 0x24d96
	adds r0, #16	@ 00024d96 1030
.org 0x24d98
	ldr r1, [pc, #28]	@ 00024d98 0749
.org 0x24d9a
	ldr r1, [r1, #48]	@ 00024d9a 096b
.org 0x24d9c
	ldr r1, [r1, #0]	@ 00024d9c 0968
.org 0x24d9e
	bl 0x275f0	@ 00024d9e 02f027fc
.org 0x24da2
	movs r0, #1	@ 00024da2 0120
.org 0x24da4
	bl 0x1f63c	@ 00024da4 faf74afc
.org 0x24da8
	strb r7, [r6, #0]	@ 00024da8 3770
.org 0x24daa
	b.n 0x2512a	@ 00024daa bee1
.org 0x24dac
	.byte 0x10,0xe9,0x02,0x02	@ 00024dac data
.org 0x24db0
	.byte 0xb0,0xe8,0x02,0x02	@ 00024db0 data
.org 0x24db4
	.byte 0x7d,0x01,0x00,0x00	@ 00024db4 data
.org 0x24db8
	.byte 0xf8,0x2c,0x84,0x08	@ 00024db8 data
.org 0x24dbc
	cmp r4, #1	@ 00024dbc 012c
.org 0x24dbe
	bne.n 0x24dd4	@ 00024dbe 09d1
.org 0x24dc0
	adds r0, r5, #0	@ 00024dc0 281c
.org 0x24dc2
	adds r0, #16	@ 00024dc2 1030
.org 0x24dc4
	ldr r1, [pc, #8]	@ 00024dc4 0249
.org 0x24dc6
	ldr r1, [r1, #48]	@ 00024dc6 096b
.org 0x24dc8
	ldr r1, [r1, #4]	@ 00024dc8 4968
.org 0x24dca
	bl 0x275f0	@ 00024dca 02f011fc
.org 0x24dce
	b.n 0x24e54	@ 00024dce 41e0
.org 0x24dd0
	.byte 0xf8,0x2c,0x84,0x08	@ 00024dd0 data
.org 0x24dd4
	cmp r4, #2	@ 00024dd4 022c
.org 0x24dd6
	bne.n 0x24de8	@ 00024dd6 07d1
.org 0x24dd8
	adds r0, r5, #0	@ 00024dd8 281c
.org 0x24dda
	adds r0, #16	@ 00024dda 1030
.org 0x24ddc
	ldr r1, [pc, #4]	@ 00024ddc 0149
.org 0x24dde
	ldr r1, [r1, #48]	@ 00024dde 096b
.org 0x24de0
	ldr r1, [r1, #8]	@ 00024de0 8968
.org 0x24de2
	b.n 0x24df6	@ 00024de2 08e0
.org 0x24de4
	.byte 0xf8,0x2c,0x84,0x08	@ 00024de4 data
.org 0x24de8
	cmp r4, #3	@ 00024de8 032c
.org 0x24dea
	bne.n 0x24e04	@ 00024dea 0bd1
.org 0x24dec
	adds r0, r5, #0	@ 00024dec 281c
.org 0x24dee
	adds r0, #16	@ 00024dee 1030
.org 0x24df0
	ldr r1, [pc, #12]	@ 00024df0 0349
.org 0x24df2
	ldr r1, [r1, #48]	@ 00024df2 096b
.org 0x24df4
	ldr r1, [r1, #16]	@ 00024df4 0969
.org 0x24df6
	bl 0x275f0	@ 00024df6 02f0fbfb
.org 0x24dfa
	strb r4, [r6, #0]	@ 00024dfa 3470
.org 0x24dfc
	b.n 0x2512a	@ 00024dfc 95e1
.org 0x24dfe
	.byte 0x00	@ 00024dfe data
.org 0x24dff
	.byte 0x00	@ 00024dff data
.org 0x24e00
	.byte 0xf8,0x2c,0x84,0x08	@ 00024e00 data
.org 0x24e04
	cmp r4, #4	@ 00024e04 042c
.org 0x24e06
	bne.n 0x24e1c	@ 00024e06 09d1
.org 0x24e08
	adds r0, r5, #0	@ 00024e08 281c
.org 0x24e0a
	adds r0, #16	@ 00024e0a 1030
.org 0x24e0c
	ldr r1, [pc, #8]	@ 00024e0c 0249
.org 0x24e0e
	ldr r1, [r1, #48]	@ 00024e0e 096b
.org 0x24e10
	ldr r1, [r1, #24]	@ 00024e10 8969
.org 0x24e12
	bl 0x275f0	@ 00024e12 02f0edfb
.org 0x24e16
	b.n 0x24f7c	@ 00024e16 b1e0
.org 0x24e18
	.byte 0xf8,0x2c,0x84,0x08	@ 00024e18 data
.org 0x24e1c
	cmp r4, #5	@ 00024e1c 052c
.org 0x24e1e
	bne.n 0x24e34	@ 00024e1e 09d1
.org 0x24e20
	adds r0, r5, #0	@ 00024e20 281c
.org 0x24e22
	adds r0, #16	@ 00024e22 1030
.org 0x24e24
	ldr r1, [pc, #8]	@ 00024e24 0249
.org 0x24e26
	ldr r1, [r1, #48]	@ 00024e26 096b
.org 0x24e28
	ldr r1, [r1, #36]	@ 00024e28 496a
.org 0x24e2a
	bl 0x275f0	@ 00024e2a 02f0e1fb
.org 0x24e2e
	b.n 0x2508c	@ 00024e2e 2de1
.org 0x24e30
	.byte 0xf8,0x2c,0x84,0x08	@ 00024e30 data
.org 0x24e34
	cmp r4, #6	@ 00024e34 062c
.org 0x24e36
	beq.n 0x24e3a	@ 00024e36 00d0
.org 0x24e38
	b.n 0x2512a	@ 00024e38 77e1
.org 0x24e3a
	adds r0, r5, #0	@ 00024e3a 281c
.org 0x24e3c
	adds r0, #16	@ 00024e3c 1030
.org 0x24e3e
	ldr r1, [pc, #12]	@ 00024e3e 0349
.org 0x24e40
	ldr r1, [r1, #48]	@ 00024e40 096b
.org 0x24e42
	ldr r1, [r1, #40]	@ 00024e42 896a
.org 0x24e44
	bl 0x275f0	@ 00024e44 02f0d4fb
.org 0x24e48
	b.n 0x250ba	@ 00024e48 37e1
.org 0x24e4a
	.byte 0x00	@ 00024e4a data
.org 0x24e4b
	.byte 0x00	@ 00024e4b data
.org 0x24e4c
	.byte 0xf8,0x2c,0x84,0x08	@ 00024e4c data
.org 0x24e50
	cmp r0, #1	@ 00024e50 0128
.org 0x24e52
	bne.n 0x24e60	@ 00024e52 05d1
.org 0x24e54
	movs r0, #2	@ 00024e54 0220
.org 0x24e56
	bl 0x1f63c	@ 00024e56 faf7f1fb
.org 0x24e5a
	movs r0, #2	@ 00024e5a 0220
.org 0x24e5c
	strb r0, [r6, #0]	@ 00024e5c 3070
.org 0x24e5e
	b.n 0x2512a	@ 00024e5e 64e1
.org 0x24e60
	cmp r0, #2	@ 00024e60 0228
.org 0x24e62
	bne.n 0x24f24	@ 00024e62 5fd1
.org 0x24e64
	ldr r0, [pc, #60]	@ 00024e64 0f48
.org 0x24e66
	adds r6, r4, r0	@ 00024e66 2618
.org 0x24e68
	ldrb r0, [r6, #0]	@ 00024e68 3078
.org 0x24e6a
	cmp r0, #0	@ 00024e6a 0028
.org 0x24e6c
	bne.n 0x24eb4	@ 00024e6c 22d1
.org 0x24e6e
	ldr r1, [r5, #84]	@ 00024e6e 696d
.org 0x24e70
	ldr r0, [pc, #52]	@ 00024e70 0d48
.org 0x24e72
	cmp r1, r0	@ 00024e72 8142
.org 0x24e74
	ble.n 0x24eb4	@ 00024e74 1edd
.org 0x24e76
	ldr r2, [pc, #52]	@ 00024e76 0d4a
.org 0x24e78
	ldrb r1, [r2, #1]	@ 00024e78 5178
.org 0x24e7a
	movs r0, #2	@ 00024e7a 0220
.org 0x24e7c
	orrs r0, r1	@ 00024e7c 0843
.org 0x24e7e
	strb r0, [r2, #1]	@ 00024e7e 5070
.org 0x24e80
	ldr r0, [pc, #44]	@ 00024e80 0b48
.org 0x24e82
	movs r1, #180	@ 00024e82 b421
.org 0x24e84
	lsls r1, r1, #1	@ 00024e84 4900
.org 0x24e86
	adds r5, r0, r1	@ 00024e86 4518
.org 0x24e88
	ldr r0, [r5, #0]	@ 00024e88 2868
.org 0x24e8a
	movs r4, #1	@ 00024e8a 0124
.org 0x24e8c
	negs r4, r4	@ 00024e8c 6442
.org 0x24e8e
	cmp r0, r4	@ 00024e8e a042
.org 0x24e90
	beq.n 0x24e9c	@ 00024e90 04d0
.org 0x24e92
	lsls r0, r0, #16	@ 00024e92 0004
.org 0x24e94
	lsrs r0, r0, #16	@ 00024e94 000c
.org 0x24e96
	bl 0x2a98	@ 00024e96 ddf7fffd
.org 0x24e9a
	str r4, [r5, #0]	@ 00024e9a 2c60
.org 0x24e9c
	movs r0, #1	@ 00024e9c 0120
.org 0x24e9e
	strb r0, [r6, #0]	@ 00024e9e 3070
.org 0x24ea0
	b.n 0x2512a	@ 00024ea0 43e1
.org 0x24ea2
	.byte 0x00	@ 00024ea2 data
.org 0x24ea3
	.byte 0x00	@ 00024ea3 data
.org 0x24ea4
	.byte 0x7d,0x01,0x00,0x00	@ 00024ea4 data
.org 0x24ea8
	.byte 0xff,0x1f,0x0c,0x00	@ 00024ea8 data
.org 0x24eac
	.byte 0xe0,0x32,0x00,0x03	@ 00024eac data
.org 0x24eb0
	.byte 0x10,0xe9,0x02,0x02	@ 00024eb0 data
.org 0x24eb4
	ldr r0, [pc, #20]	@ 00024eb4 0548
.org 0x24eb6
	adds r2, r4, r0	@ 00024eb6 2218
.org 0x24eb8
	ldrb r0, [r2, #0]	@ 00024eb8 1078
.org 0x24eba
	cmp r0, #1	@ 00024eba 0128
.org 0x24ebc
	bne.n 0x24ed4	@ 00024ebc 0ad1
.org 0x24ebe
	ldr r0, [pc, #16]	@ 00024ebe 0448
.org 0x24ec0
	movs r1, #0	@ 00024ec0 0021
.org 0x24ec2
	strb r1, [r0, #1]	@ 00024ec2 4170
.org 0x24ec4
	movs r0, #2	@ 00024ec4 0220
.org 0x24ec6
	strb r0, [r2, #0]	@ 00024ec6 1070
.org 0x24ec8
	b.n 0x2512a	@ 00024ec8 2fe1
.org 0x24eca
	.byte 0x00	@ 00024eca data
.org 0x24ecb
	.byte 0x00	@ 00024ecb data
.org 0x24ecc
	.byte 0x7d,0x01,0x00,0x00	@ 00024ecc data
.org 0x24ed0
	.byte 0xe0,0x32,0x00,0x03	@ 00024ed0 data
.org 0x24ed4
	cmp r0, #2	@ 00024ed4 0228
.org 0x24ed6
	beq.n 0x24eda	@ 00024ed6 00d0
.org 0x24ed8
	b.n 0x2512a	@ 00024ed8 27e1
.org 0x24eda
	ldr r1, [r5, #84]	@ 00024eda 696d
.org 0x24edc
	ldr r0, [pc, #60]	@ 00024edc 0f48
.org 0x24ede
	cmp r1, r0	@ 00024ede 8142
.org 0x24ee0
	bgt.n 0x24ee4	@ 00024ee0 00dc
.org 0x24ee2
	b.n 0x2512a	@ 00024ee2 22e1
.org 0x24ee4
	ldr r0, [pc, #56]	@ 00024ee4 0e48
.org 0x24ee6
	movs r1, #180	@ 00024ee6 b421
.org 0x24ee8
	lsls r1, r1, #1	@ 00024ee8 4900
.org 0x24eea
	adds r5, r0, r1	@ 00024eea 4518
.org 0x24eec
	ldr r0, [r5, #0]	@ 00024eec 2868
.org 0x24eee
	cmp r0, #155	@ 00024eee 9b28
.org 0x24ef0
	beq.n 0x24f0e	@ 00024ef0 0dd0
.org 0x24ef2
	movs r6, #1	@ 00024ef2 0126
.org 0x24ef4
	negs r6, r6	@ 00024ef4 7642
.org 0x24ef6
	cmp r0, r6	@ 00024ef6 b042
.org 0x24ef8
	beq.n 0x24f04	@ 00024ef8 04d0
.org 0x24efa
	lsls r0, r0, #16	@ 00024efa 0004
.org 0x24efc
	lsrs r0, r0, #16	@ 00024efc 000c
.org 0x24efe
	bl 0x2a98	@ 00024efe ddf7cbfd
.org 0x24f02
	str r6, [r5, #0]	@ 00024f02 2e60
.org 0x24f04
	movs r0, #155	@ 00024f04 9b20
.org 0x24f06
	bl 0x2a88	@ 00024f06 ddf7bffd
.org 0x24f0a
	movs r0, #155	@ 00024f0a 9b20
.org 0x24f0c
	str r0, [r5, #0]	@ 00024f0c 2860
.org 0x24f0e
	movs r0, #190	@ 00024f0e be20
.org 0x24f10
	lsls r0, r0, #1	@ 00024f10 4000
.org 0x24f12
	adds r1, r4, r0	@ 00024f12 2118
.org 0x24f14
	movs r0, #3	@ 00024f14 0320
.org 0x24f16
	strb r0, [r1, #0]	@ 00024f16 0870
.org 0x24f18
	b.n 0x2512a	@ 00024f18 07e1
.org 0x24f1a
	.byte 0x00	@ 00024f1a data
.org 0x24f1b
	.byte 0x00	@ 00024f1b data
.org 0x24f1c
	.byte 0xff,0x3f,0x0c,0x00	@ 00024f1c data
.org 0x24f20
	.byte 0x10,0xe9,0x02,0x02	@ 00024f20 data
.org 0x24f24
	cmp r0, #3	@ 00024f24 0328
.org 0x24f26
	bne.n 0x24f44	@ 00024f26 0dd1
.org 0x24f28
	ldr r1, [r5, #84]	@ 00024f28 696d
.org 0x24f2a
	movs r0, #210	@ 00024f2a d220
.org 0x24f2c
	lsls r0, r0, #12	@ 00024f2c 0003
.org 0x24f2e
	cmp r1, r0	@ 00024f2e 8142
.org 0x24f30
	ble.n 0x24f44	@ 00024f30 08dd
.org 0x24f32
	ldr r0, [pc, #8]	@ 00024f32 0248
.org 0x24f34
	ldr r1, [pc, #8]	@ 00024f34 0249
.org 0x24f36
	ldr r1, [r1, #48]	@ 00024f36 096b
.org 0x24f38
	ldr r1, [r1, #12]	@ 00024f38 c968
.org 0x24f3a
	b.n 0x24f62	@ 00024f3a 12e0
.org 0x24f3c
	.byte 0x20,0xe9,0x02,0x02	@ 00024f3c data
.org 0x24f40
	.byte 0xf8,0x2c,0x84,0x08	@ 00024f40 data
.org 0x24f44
	movs r1, #190	@ 00024f44 be21
.org 0x24f46
	lsls r1, r1, #1	@ 00024f46 4900
.org 0x24f48
	adds r6, r4, r1	@ 00024f48 6618
.org 0x24f4a
	ldrb r0, [r6, #0]	@ 00024f4a 3078
.org 0x24f4c
	cmp r0, #4	@ 00024f4c 0428
.org 0x24f4e
	bne.n 0x24f94	@ 00024f4e 21d1
.org 0x24f50
	ldr r1, [r5, #84]	@ 00024f50 696d
.org 0x24f52
	movs r0, #210	@ 00024f52 d220
.org 0x24f54
	lsls r0, r0, #12	@ 00024f54 0003
.org 0x24f56
	cmp r1, r0	@ 00024f56 8142
.org 0x24f58
	ble.n 0x24f94	@ 00024f58 1cdd
.org 0x24f5a
	ldr r0, [pc, #40]	@ 00024f5a 0a48
.org 0x24f5c
	ldr r1, [pc, #40]	@ 00024f5c 0a49
.org 0x24f5e
	ldr r1, [r1, #48]	@ 00024f5e 096b
.org 0x24f60
	ldr r1, [r1, #20]	@ 00024f60 4969
.org 0x24f62
	bl 0x275f0	@ 00024f62 02f045fb
.org 0x24f66
	ldr r1, [pc, #36]	@ 00024f66 0949
.org 0x24f68
	movs r0, #0	@ 00024f68 0020
.org 0x24f6a
	strb r0, [r1, #1]	@ 00024f6a 4870
.org 0x24f6c
	movs r0, #4	@ 00024f6c 0420
.org 0x24f6e
	bl 0x1f63c	@ 00024f6e faf765fb
.org 0x24f72
	ldr r2, [pc, #28]	@ 00024f72 074a
.org 0x24f74
	ldrb r1, [r2, #4]	@ 00024f74 1179
.org 0x24f76
	movs r0, #8	@ 00024f76 0820
.org 0x24f78
	orrs r0, r1	@ 00024f78 0843
.org 0x24f7a
	strb r0, [r2, #4]	@ 00024f7a 1071
.org 0x24f7c
	movs r0, #5	@ 00024f7c 0520
.org 0x24f7e
	strb r0, [r6, #0]	@ 00024f7e 3070
.org 0x24f80
	b.n 0x2512a	@ 00024f80 d3e0
.org 0x24f82
	.byte 0x00	@ 00024f82 data
.org 0x24f83
	.byte 0x00	@ 00024f83 data
.org 0x24f84
	.byte 0x20,0xe9,0x02,0x02	@ 00024f84 data
.org 0x24f88
	.byte 0xf8,0x2c,0x84,0x08	@ 00024f88 data
.org 0x24f8c
	.byte 0xe0,0x32,0x00,0x03	@ 00024f8c data
.org 0x24f90
	.byte 0xb0,0xe8,0x02,0x02	@ 00024f90 data
.org 0x24f94
	movs r0, #190	@ 00024f94 be20
.org 0x24f96
	lsls r0, r0, #1	@ 00024f96 4000
.org 0x24f98
	adds r7, r4, r0	@ 00024f98 2718
.org 0x24f9a
	ldrb r0, [r7, #0]	@ 00024f9a 3878
.org 0x24f9c
	cmp r0, #5	@ 00024f9c 0528
.org 0x24f9e
	bne.n 0x24fac	@ 00024f9e 05d1
.org 0x24fa0
	movs r0, #3	@ 00024fa0 0320
.org 0x24fa2
	bl 0x1f63c	@ 00024fa2 faf74bfb
.org 0x24fa6
	movs r0, #6	@ 00024fa6 0620
.org 0x24fa8
	strb r0, [r7, #0]	@ 00024fa8 3870
.org 0x24faa
	b.n 0x2512a	@ 00024faa bee0
.org 0x24fac
	cmp r0, #6	@ 00024fac 0628
.org 0x24fae
	bne.n 0x25018	@ 00024fae 33d1
.org 0x24fb0
	ldr r6, [pc, #80]	@ 00024fb0 144e
.org 0x24fb2
	ldrh r1, [r6, #8]	@ 00024fb2 3189
.org 0x24fb4
	movs r0, #16	@ 00024fb4 1020
.org 0x24fb6
	ands r0, r1	@ 00024fb6 0840
.org 0x24fb8
	cmp r0, #0	@ 00024fb8 0028
.org 0x24fba
	beq.n 0x25018	@ 00024fba 2dd0
.org 0x24fbc
	ldr r2, [pc, #72]	@ 00024fbc 124a
.org 0x24fbe
	ldrb r1, [r2, #0]	@ 00024fbe 1178
.org 0x24fc0
	movs r0, #128	@ 00024fc0 8020
.org 0x24fc2
	orrs r0, r1	@ 00024fc2 0843
.org 0x24fc4
	strb r0, [r2, #0]	@ 00024fc4 1070
.org 0x24fc6
	ldrb r0, [r2, #1]	@ 00024fc6 5078
.org 0x24fc8
	movs r1, #2	@ 00024fc8 0221
.org 0x24fca
	orrs r0, r1	@ 00024fca 0843
.org 0x24fcc
	movs r1, #4	@ 00024fcc 0421
.org 0x24fce
	orrs r0, r1	@ 00024fce 0843
.org 0x24fd0
	strb r0, [r2, #1]	@ 00024fd0 5070
.org 0x24fd2
	adds r0, r6, #0	@ 00024fd2 301c
.org 0x24fd4
	adds r0, #16	@ 00024fd4 1030
.org 0x24fd6
	ldr r1, [pc, #52]	@ 00024fd6 0d49
.org 0x24fd8
	ldr r1, [r1, #48]	@ 00024fd8 096b
.org 0x24fda
	ldr r1, [r1, #28]	@ 00024fda c969
.org 0x24fdc
	bl 0x275f0	@ 00024fdc 02f008fb
.org 0x24fe0
	ldrh r0, [r6, #8]	@ 00024fe0 3089
.org 0x24fe2
	ldr r2, [pc, #44]	@ 00024fe2 0b4a
.org 0x24fe4
	ands r2, r0	@ 00024fe4 0240
.org 0x24fe6
	ldrb r1, [r6, #18]	@ 00024fe6 b17c
.org 0x24fe8
	movs r0, #253	@ 00024fe8 fd20
.org 0x24fea
	ands r0, r1	@ 00024fea 0840
.org 0x24fec
	strb r0, [r6, #18]	@ 00024fec b074
.org 0x24fee
	ldr r3, [pc, #36]	@ 00024fee 094b
.org 0x24ff0
	ldrb r1, [r3, #4]	@ 00024ff0 1979
.org 0x24ff2
	movs r0, #247	@ 00024ff2 f720
.org 0x24ff4
	ands r0, r1	@ 00024ff4 0840
.org 0x24ff6
	strb r0, [r3, #4]	@ 00024ff6 1871
.org 0x24ff8
	movs r0, #1	@ 00024ff8 0120
.org 0x24ffa
	orrs r2, r0	@ 00024ffa 0243
.org 0x24ffc
	strh r2, [r6, #8]	@ 00024ffc 3281
.org 0x24ffe
	movs r0, #7	@ 00024ffe 0720
.org 0x25000
	strb r0, [r7, #0]	@ 00025000 3870
.org 0x25002
	b.n 0x2512a	@ 00025002 92e0
.org 0x25004
	.byte 0x10,0xe9,0x02,0x02	@ 00025004 data
.org 0x25008
	.byte 0xe0,0x32,0x00,0x03	@ 00025008 data
.org 0x2500c
	.byte 0xf8,0x2c,0x84,0x08	@ 0002500c data
.org 0x25010
	.byte 0xef,0xff,0x00,0x00	@ 00025010 data
.org 0x25014
	.byte 0xb0,0xe8,0x02,0x02	@ 00025014 data
.org 0x25018
	movs r1, #190	@ 00025018 be21
.org 0x2501a
	lsls r1, r1, #1	@ 0002501a 4900
.org 0x2501c
	adds r3, r4, r1	@ 0002501c 6318
.org 0x2501e
	ldrb r0, [r3, #0]	@ 0002501e 1878
.org 0x25020
	cmp r0, #7	@ 00025020 0728
.org 0x25022
	bne.n 0x2503c	@ 00025022 0bd1
.org 0x25024
	ldr r1, [pc, #16]	@ 00025024 0449
.org 0x25026
	ldrb r2, [r1, #0]	@ 00025026 0a78
.org 0x25028
	movs r0, #127	@ 00025028 7f20
.org 0x2502a
	ands r0, r2	@ 0002502a 1040
.org 0x2502c
	movs r2, #0	@ 0002502c 0022
.org 0x2502e
	strb r0, [r1, #0]	@ 0002502e 0870
.org 0x25030
	strb r2, [r1, #1]	@ 00025030 4a70
.org 0x25032
	movs r0, #8	@ 00025032 0820
.org 0x25034
	strb r0, [r3, #0]	@ 00025034 1870
.org 0x25036
	b.n 0x2512a	@ 00025036 78e0
.org 0x25038
	.byte 0xe0,0x32,0x00,0x03	@ 00025038 data
.org 0x2503c
	cmp r0, #8	@ 0002503c 0828
.org 0x2503e
	bne.n 0x25060	@ 0002503e 0fd1
.org 0x25040
	ldr r1, [r5, #84]	@ 00025040 696d
.org 0x25042
	ldr r0, [pc, #20]	@ 00025042 0548
.org 0x25044
	cmp r1, r0	@ 00025044 8142
.org 0x25046
	ble.n 0x25060	@ 00025046 0bdd
.org 0x25048
	ldr r2, [pc, #16]	@ 00025048 044a
.org 0x2504a
	ldrb r1, [r2, #4]	@ 0002504a 1179
.org 0x2504c
	movs r0, #8	@ 0002504c 0820
.org 0x2504e
	orrs r0, r1	@ 0002504e 0843
.org 0x25050
	strb r0, [r2, #4]	@ 00025050 1071
.org 0x25052
	movs r0, #9	@ 00025052 0920
.org 0x25054
	strb r0, [r3, #0]	@ 00025054 1870
.org 0x25056
	b.n 0x2512a	@ 00025056 68e0
.org 0x25058
	.byte 0xff,0x0f,0x0e,0x00	@ 00025058 data
.org 0x2505c
	.byte 0xb0,0xe8,0x02,0x02	@ 0002505c data
.org 0x25060
	movs r0, #190	@ 00025060 be20
.org 0x25062
	lsls r0, r0, #1	@ 00025062 4000
.org 0x25064
	adds r6, r4, r0	@ 00025064 2618
.org 0x25066
	ldrb r0, [r6, #0]	@ 00025066 3078
.org 0x25068
	cmp r0, #9	@ 00025068 0928
.org 0x2506a
	bne.n 0x250a0	@ 0002506a 19d1
.org 0x2506c
	ldr r1, [r5, #84]	@ 0002506c 696d
.org 0x2506e
	ldr r0, [pc, #36]	@ 0002506e 0948
.org 0x25070
	cmp r1, r0	@ 00025070 8142
.org 0x25072
	ble.n 0x250a0	@ 00025072 15dd
.org 0x25074
	ldr r0, [pc, #32]	@ 00025074 0848
.org 0x25076
	ldr r1, [pc, #36]	@ 00025076 0949
.org 0x25078
	ldr r1, [r1, #48]	@ 00025078 096b
.org 0x2507a
	ldr r1, [r1, #32]	@ 0002507a 096a
.org 0x2507c
	bl 0x275f0	@ 0002507c 02f0b8fa
.org 0x25080
	movs r0, #95	@ 00025080 5f20
.org 0x25082
	bl 0x6984	@ 00025082 e1f77ffc
.org 0x25086
	movs r0, #5	@ 00025086 0520
.org 0x25088
	bl 0x1f63c	@ 00025088 faf7d8fa
