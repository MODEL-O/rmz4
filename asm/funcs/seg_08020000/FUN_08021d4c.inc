@ FUN_08021d4c  entry 0x08021d4c  size 1066
.thumb
.org 0x21d4c
FUN_08021d4c:
	push {r4, r5, r6, r7, lr}	@ 00021d4c f0b5
.org 0x21d4e
	mov r7, r8	@ 00021d4e 4746
.org 0x21d50
	push {r7}	@ 00021d50 80b4
.org 0x21d52
	adds r4, r0, #0	@ 00021d52 041c
.org 0x21d54
	ldr r3, [r4, #32]	@ 00021d54 236a
.org 0x21d56
	movs r0, #190	@ 00021d56 be20
.org 0x21d58
	lsls r0, r0, #1	@ 00021d58 4000
.org 0x21d5a
	adds r5, r4, r0	@ 00021d5a 2518
.org 0x21d5c
	ldrb r0, [r5, #0]	@ 00021d5c 2878
.org 0x21d5e
	cmp r0, #0	@ 00021d5e 0028
.org 0x21d60
	beq.n 0x21d64	@ 00021d60 00d0
.org 0x21d62
	b.n 0x21ec8	@ 00021d62 b1e0
.org 0x21d64
	ldr r3, [pc, #68]	@ 00021d64 114b
.org 0x21d66
	ldrh r0, [r3, #8]	@ 00021d66 1889
.org 0x21d68
	movs r1, #1	@ 00021d68 0121
.org 0x21d6a
	mov r8, r1	@ 00021d6a 8846
.org 0x21d6c
	movs r2, #0	@ 00021d6c 0022
.org 0x21d6e
	mov r7, r8	@ 00021d6e 4746
.org 0x21d70
	orrs r0, r7	@ 00021d70 3843
.org 0x21d72
	strh r0, [r3, #8]	@ 00021d72 1881
.org 0x21d74
	ldr r6, [pc, #56]	@ 00021d74 0e4e
.org 0x21d76
	ldrb r1, [r6, #4]	@ 00021d76 3179
.org 0x21d78
	movs r0, #8	@ 00021d78 0820
.org 0x21d7a
	orrs r0, r1	@ 00021d7a 0843
.org 0x21d7c
	strb r0, [r6, #4]	@ 00021d7c 3071
.org 0x21d7e
	ldr r7, [pc, #52]	@ 00021d7e 0d4f
.org 0x21d80
	adds r1, r4, r7	@ 00021d80 e119
.org 0x21d82
	strb r2, [r1, #0]	@ 00021d82 0a70
.org 0x21d84
	movs r1, #64	@ 00021d84 4021
.org 0x21d86
	ands r0, r1	@ 00021d86 0840
.org 0x21d88
	cmp r0, #0	@ 00021d88 0028
.org 0x21d8a
	beq.n 0x21dbc	@ 00021d8a 17d0
.org 0x21d8c
	adds r0, r3, #0	@ 00021d8c 181c
.org 0x21d8e
	adds r0, #16	@ 00021d8e 1030
.org 0x21d90
	ldr r1, [pc, #36]	@ 00021d90 0949
.org 0x21d92
	ldr r1, [r1, #20]	@ 00021d92 4969
.org 0x21d94
	ldr r1, [r1, #64]	@ 00021d94 096c
.org 0x21d96
	bl 0x275f0	@ 00021d96 05f02bfc
.org 0x21d9a
	movs r0, #192	@ 00021d9a c020
.org 0x21d9c
	lsls r0, r0, #1	@ 00021d9c 4000
.org 0x21d9e
	adds r1, r4, r0	@ 00021d9e 2118
.org 0x21da0
	movs r0, #225	@ 00021da0 e120
.org 0x21da2
	lsls r0, r0, #3	@ 00021da2 c000
.org 0x21da4
	str r0, [r1, #0]	@ 00021da4 0860
.org 0x21da6
	movs r0, #20	@ 00021da6 1420
.org 0x21da8
	strb r0, [r5, #0]	@ 00021da8 2870
.org 0x21daa
	b.n 0x22232	@ 00021daa 42e2
.org 0x21dac
	.byte 0x10,0xe9,0x02,0x02	@ 00021dac data
.org 0x21db0
	.byte 0xb0,0xe8,0x02,0x02	@ 00021db0 data
.org 0x21db4
	.byte 0x7d,0x01,0x00,0x00	@ 00021db4 data
.org 0x21db8
	.byte 0xf8,0x2c,0x84,0x08	@ 00021db8 data
.org 0x21dbc
	ldrb r4, [r3, #2]	@ 00021dbc 9c78
.org 0x21dbe
	cmp r4, #0	@ 00021dbe 002c
.org 0x21dc0
	bne.n 0x21e00	@ 00021dc0 1ed1
.org 0x21dc2
	adds r0, r3, #0	@ 00021dc2 181c
.org 0x21dc4
	adds r0, #16	@ 00021dc4 1030
.org 0x21dc6
	ldr r1, [pc, #52]	@ 00021dc6 0d49
.org 0x21dc8
	ldr r1, [r1, #20]	@ 00021dc8 4969
.org 0x21dca
	ldr r1, [r1, #0]	@ 00021dca 0968
.org 0x21dcc
	bl 0x275f0	@ 00021dcc 05f010fc
.org 0x21dd0
	movs r0, #1	@ 00021dd0 0120
.org 0x21dd2
	bl 0x1f63c	@ 00021dd2 fdf733fc
.org 0x21dd6
	ldrb r1, [r6, #9]	@ 00021dd6 717a
.org 0x21dd8
	movs r0, #191	@ 00021dd8 bf20
.org 0x21dda
	ands r0, r1	@ 00021dda 0840
.org 0x21ddc
	movs r1, #127	@ 00021ddc 7f21
.org 0x21dde
	ands r0, r1	@ 00021dde 0840
.org 0x21de0
	strb r0, [r6, #9]	@ 00021de0 7072
.org 0x21de2
	ldrb r1, [r6, #10]	@ 00021de2 b17a
.org 0x21de4
	movs r0, #254	@ 00021de4 fe20
.org 0x21de6
	ands r0, r1	@ 00021de6 0840
.org 0x21de8
	movs r1, #253	@ 00021de8 fd21
.org 0x21dea
	ands r0, r1	@ 00021dea 0840
.org 0x21dec
	movs r1, #251	@ 00021dec fb21
.org 0x21dee
	ands r0, r1	@ 00021dee 0840
.org 0x21df0
	movs r1, #247	@ 00021df0 f721
.org 0x21df2
	ands r0, r1	@ 00021df2 0840
.org 0x21df4
	strb r0, [r6, #10]	@ 00021df4 b072
.org 0x21df6
	mov r1, r8	@ 00021df6 4146
.org 0x21df8
	strb r1, [r5, #0]	@ 00021df8 2970
.org 0x21dfa
	b.n 0x22232	@ 00021dfa 1ae2
.org 0x21dfc
	.byte 0xf8,0x2c,0x84,0x08	@ 00021dfc data
.org 0x21e00
	cmp r4, #1	@ 00021e00 012c
.org 0x21e02
	bne.n 0x21e18	@ 00021e02 09d1
.org 0x21e04
	adds r0, r3, #0	@ 00021e04 181c
.org 0x21e06
	adds r0, #16	@ 00021e06 1030
.org 0x21e08
	ldr r1, [pc, #8]	@ 00021e08 0249
.org 0x21e0a
	ldr r1, [r1, #20]	@ 00021e0a 4969
.org 0x21e0c
	ldr r1, [r1, #4]	@ 00021e0c 4968
.org 0x21e0e
	bl 0x275f0	@ 00021e0e 05f0effb
.org 0x21e12
	b.n 0x21ecc	@ 00021e12 5be0
.org 0x21e14
	.byte 0xf8,0x2c,0x84,0x08	@ 00021e14 data
.org 0x21e18
	cmp r4, #2	@ 00021e18 022c
.org 0x21e1a
	bne.n 0x21e34	@ 00021e1a 0bd1
.org 0x21e1c
	adds r0, r3, #0	@ 00021e1c 181c
.org 0x21e1e
	adds r0, #16	@ 00021e1e 1030
.org 0x21e20
	ldr r1, [pc, #12]	@ 00021e20 0349
.org 0x21e22
	ldr r1, [r1, #20]	@ 00021e22 4969
.org 0x21e24
	ldr r1, [r1, #8]	@ 00021e24 8968
.org 0x21e26
	bl 0x275f0	@ 00021e26 05f0e3fb
.org 0x21e2a
	strb r4, [r5, #0]	@ 00021e2a 2c70
.org 0x21e2c
	b.n 0x22232	@ 00021e2c 01e2
.org 0x21e2e
	.byte 0x00	@ 00021e2e data
.org 0x21e2f
	.byte 0x00	@ 00021e2f data
.org 0x21e30
	.byte 0xf8,0x2c,0x84,0x08	@ 00021e30 data
.org 0x21e34
	cmp r4, #3	@ 00021e34 032c
.org 0x21e36
	bne.n 0x21e58	@ 00021e36 0fd1
.org 0x21e38
	adds r0, r3, #0	@ 00021e38 181c
.org 0x21e3a
	adds r0, #16	@ 00021e3a 1030
.org 0x21e3c
	ldr r1, [pc, #20]	@ 00021e3c 0549
.org 0x21e3e
	ldr r1, [r1, #20]	@ 00021e3e 4969
.org 0x21e40
	ldr r1, [r1, #16]	@ 00021e40 0969
.org 0x21e42
	bl 0x275f0	@ 00021e42 05f0d5fb
.org 0x21e46
	movs r0, #4	@ 00021e46 0420
.org 0x21e48
	bl 0x1f63c	@ 00021e48 fdf7f8fb
.org 0x21e4c
	movs r0, #4	@ 00021e4c 0420
.org 0x21e4e
	strb r0, [r5, #0]	@ 00021e4e 2870
.org 0x21e50
	b.n 0x22232	@ 00021e50 efe1
.org 0x21e52
	.byte 0x00	@ 00021e52 data
.org 0x21e53
	.byte 0x00	@ 00021e53 data
.org 0x21e54
	.byte 0xf8,0x2c,0x84,0x08	@ 00021e54 data
.org 0x21e58
	cmp r4, #4	@ 00021e58 042c
.org 0x21e5a
	bne.n 0x21e70	@ 00021e5a 09d1
.org 0x21e5c
	adds r0, r3, #0	@ 00021e5c 181c
.org 0x21e5e
	adds r0, #16	@ 00021e5e 1030
.org 0x21e60
	ldr r1, [pc, #8]	@ 00021e60 0249
.org 0x21e62
	ldr r1, [r1, #20]	@ 00021e62 4969
.org 0x21e64
	ldr r1, [r1, #24]	@ 00021e64 8969
.org 0x21e66
	bl 0x275f0	@ 00021e66 05f0c3fb
.org 0x21e6a
	b.n 0x21f4a	@ 00021e6a 6ee0
.org 0x21e6c
	.byte 0xf8,0x2c,0x84,0x08	@ 00021e6c data
.org 0x21e70
	cmp r4, #5	@ 00021e70 052c
.org 0x21e72
	bne.n 0x21e88	@ 00021e72 09d1
.org 0x21e74
	adds r0, r3, #0	@ 00021e74 181c
.org 0x21e76
	adds r0, #16	@ 00021e76 1030
.org 0x21e78
	ldr r1, [pc, #8]	@ 00021e78 0249
.org 0x21e7a
	ldr r1, [r1, #20]	@ 00021e7a 4969
.org 0x21e7c
	ldr r1, [r1, #32]	@ 00021e7c 096a
.org 0x21e7e
	bl 0x275f0	@ 00021e7e 05f0b7fb
.org 0x21e82
	b.n 0x22018	@ 00021e82 c9e0
.org 0x21e84
	.byte 0xf8,0x2c,0x84,0x08	@ 00021e84 data
.org 0x21e88
	cmp r4, #6	@ 00021e88 062c
.org 0x21e8a
	bne.n 0x21eac	@ 00021e8a 0fd1
.org 0x21e8c
	ldrb r1, [r6, #10]	@ 00021e8c b17a
.org 0x21e8e
	movs r0, #247	@ 00021e8e f720
.org 0x21e90
	ands r0, r1	@ 00021e90 0840
.org 0x21e92
	strb r0, [r6, #10]	@ 00021e92 b072
.org 0x21e94
	adds r0, r3, #0	@ 00021e94 181c
.org 0x21e96
	adds r0, #16	@ 00021e96 1030
.org 0x21e98
	ldr r1, [pc, #12]	@ 00021e98 0349
.org 0x21e9a
	ldr r1, [r1, #20]	@ 00021e9a 4969
.org 0x21e9c
	ldr r1, [r1, #40]	@ 00021e9c 896a
.org 0x21e9e
	bl 0x275f0	@ 00021e9e 05f0a7fb
.org 0x21ea2
	movs r0, #11	@ 00021ea2 0b20
.org 0x21ea4
	strb r0, [r5, #0]	@ 00021ea4 2870
.org 0x21ea6
	b.n 0x22232	@ 00021ea6 c4e1
.org 0x21ea8
	.byte 0xf8,0x2c,0x84,0x08	@ 00021ea8 data
.org 0x21eac
	cmp r4, #7	@ 00021eac 072c
.org 0x21eae
	beq.n 0x21eb2	@ 00021eae 00d0
.org 0x21eb0
	b.n 0x22232	@ 00021eb0 bfe1
.org 0x21eb2
	adds r0, r3, #0	@ 00021eb2 181c
.org 0x21eb4
	adds r0, #16	@ 00021eb4 1030
.org 0x21eb6
	ldr r1, [pc, #12]	@ 00021eb6 0349
.org 0x21eb8
	ldr r1, [r1, #20]	@ 00021eb8 4969
.org 0x21eba
	ldr r1, [r1, #48]	@ 00021eba 096b
.org 0x21ebc
	bl 0x275f0	@ 00021ebc 05f098fb
.org 0x21ec0
	b.n 0x22142	@ 00021ec0 3fe1
.org 0x21ec2
	.byte 0x00	@ 00021ec2 data
.org 0x21ec3
	.byte 0x00	@ 00021ec3 data
.org 0x21ec4
	.byte 0xf8,0x2c,0x84,0x08	@ 00021ec4 data
.org 0x21ec8
	cmp r0, #1	@ 00021ec8 0128
.org 0x21eca
	bne.n 0x21ed8	@ 00021eca 05d1
.org 0x21ecc
	movs r0, #2	@ 00021ecc 0220
.org 0x21ece
	bl 0x1f63c	@ 00021ece fdf7b5fb
.org 0x21ed2
	movs r0, #2	@ 00021ed2 0220
.org 0x21ed4
	strb r0, [r5, #0]	@ 00021ed4 2870
.org 0x21ed6
	b.n 0x22232	@ 00021ed6 ace1
.org 0x21ed8
	cmp r0, #2	@ 00021ed8 0228
.org 0x21eda
	bne.n 0x21ef0	@ 00021eda 09d1
.org 0x21edc
	ldr r1, [r3, #84]	@ 00021edc 596d
.org 0x21ede
	ldr r0, [pc, #12]	@ 00021ede 0348
.org 0x21ee0
	cmp r1, r0	@ 00021ee0 8142
.org 0x21ee2
	ble.n 0x21ef0	@ 00021ee2 05dd
.org 0x21ee4
	movs r0, #3	@ 00021ee4 0320
.org 0x21ee6
	strb r0, [r5, #0]	@ 00021ee6 2870
.org 0x21ee8
	b.n 0x22232	@ 00021ee8 a3e1
.org 0x21eea
	.byte 0x00	@ 00021eea data
.org 0x21eeb
	.byte 0x00	@ 00021eeb data
.org 0x21eec
	.byte 0x00,0x70,0x17,0x00	@ 00021eec data
.org 0x21ef0
	movs r7, #190	@ 00021ef0 be27
.org 0x21ef2
	lsls r7, r7, #1	@ 00021ef2 7f00
.org 0x21ef4
	adds r5, r4, r7	@ 00021ef4 e519
.org 0x21ef6
	ldrb r0, [r5, #0]	@ 00021ef6 2878
.org 0x21ef8
	cmp r0, #3	@ 00021ef8 0328
.org 0x21efa
	bne.n 0x21f18	@ 00021efa 0dd1
.org 0x21efc
	ldr r1, [r3, #84]	@ 00021efc 596d
.org 0x21efe
	movs r0, #195	@ 00021efe c320
.org 0x21f00
	lsls r0, r0, #13	@ 00021f00 4003
.org 0x21f02
	cmp r1, r0	@ 00021f02 8142
.org 0x21f04
	ble.n 0x21f18	@ 00021f04 08dd
.org 0x21f06
	ldr r0, [pc, #8]	@ 00021f06 0248
.org 0x21f08
	ldr r1, [pc, #8]	@ 00021f08 0249
.org 0x21f0a
	ldr r1, [r1, #20]	@ 00021f0a 4969
.org 0x21f0c
	ldr r1, [r1, #12]	@ 00021f0c c968
.org 0x21f0e
	b.n 0x21f36	@ 00021f0e 12e0
.org 0x21f10
	.byte 0x20,0xe9,0x02,0x02	@ 00021f10 data
.org 0x21f14
	.byte 0xf8,0x2c,0x84,0x08	@ 00021f14 data
.org 0x21f18
	movs r0, #190	@ 00021f18 be20
.org 0x21f1a
	lsls r0, r0, #1	@ 00021f1a 4000
.org 0x21f1c
	adds r5, r4, r0	@ 00021f1c 2518
.org 0x21f1e
	ldrb r0, [r5, #0]	@ 00021f1e 2878
.org 0x21f20
	cmp r0, #4	@ 00021f20 0428
.org 0x21f22
	bne.n 0x21f5c	@ 00021f22 1bd1
.org 0x21f24
	ldr r1, [r3, #84]	@ 00021f24 596d
.org 0x21f26
	movs r0, #195	@ 00021f26 c320
.org 0x21f28
	lsls r0, r0, #13	@ 00021f28 4003
.org 0x21f2a
	cmp r1, r0	@ 00021f2a 8142
.org 0x21f2c
	ble.n 0x21f5c	@ 00021f2c 16dd
.org 0x21f2e
	ldr r0, [pc, #32]	@ 00021f2e 0848
.org 0x21f30
	ldr r1, [pc, #32]	@ 00021f30 0849
.org 0x21f32
	ldr r1, [r1, #20]	@ 00021f32 4969
.org 0x21f34
	ldr r1, [r1, #20]	@ 00021f34 4969
.org 0x21f36
	bl 0x275f0	@ 00021f36 05f05bfb
.org 0x21f3a
	movs r0, #4	@ 00021f3a 0420
.org 0x21f3c
	bl 0x1f63c	@ 00021f3c fdf77efb
.org 0x21f40
	ldr r2, [pc, #20]	@ 00021f40 054a
.org 0x21f42
	ldrb r1, [r2, #4]	@ 00021f42 1179
.org 0x21f44
	movs r0, #8	@ 00021f44 0820
.org 0x21f46
	orrs r0, r1	@ 00021f46 0843
.org 0x21f48
	strb r0, [r2, #4]	@ 00021f48 1071
.org 0x21f4a
	movs r0, #5	@ 00021f4a 0520
.org 0x21f4c
	strb r0, [r5, #0]	@ 00021f4c 2870
.org 0x21f4e
	b.n 0x22232	@ 00021f4e 70e1
.org 0x21f50
	.byte 0x20,0xe9,0x02,0x02	@ 00021f50 data
.org 0x21f54
	.byte 0xf8,0x2c,0x84,0x08	@ 00021f54 data
.org 0x21f58
	.byte 0xb0,0xe8,0x02,0x02	@ 00021f58 data
.org 0x21f5c
	movs r1, #190	@ 00021f5c be21
.org 0x21f5e
	lsls r1, r1, #1	@ 00021f5e 4900
.org 0x21f60
	adds r6, r4, r1	@ 00021f60 6618
.org 0x21f62
	ldrb r0, [r6, #0]	@ 00021f62 3078
.org 0x21f64
	cmp r0, #5	@ 00021f64 0528
.org 0x21f66
	bne.n 0x21f72	@ 00021f66 04d1
.org 0x21f68
	movs r0, #3	@ 00021f68 0320
.org 0x21f6a
	bl 0x1f63c	@ 00021f6a fdf767fb
.org 0x21f6e
	movs r0, #6	@ 00021f6e 0620
.org 0x21f70
	b.n 0x22230	@ 00021f70 5ee1
.org 0x21f72
	cmp r0, #6	@ 00021f72 0628
.org 0x21f74
	bne.n 0x21fd8	@ 00021f74 30d1
.org 0x21f76
	ldr r5, [pc, #76]	@ 00021f76 134d
.org 0x21f78
	ldrh r1, [r5, #8]	@ 00021f78 2989
.org 0x21f7a
	movs r0, #16	@ 00021f7a 1020
.org 0x21f7c
	ands r0, r1	@ 00021f7c 0840
.org 0x21f7e
	cmp r0, #0	@ 00021f7e 0028
.org 0x21f80
	beq.n 0x21fd8	@ 00021f80 2ad0
.org 0x21f82
	ldr r1, [pc, #68]	@ 00021f82 1149
.org 0x21f84
	ldrb r2, [r1, #0]	@ 00021f84 0a78
.org 0x21f86
	movs r0, #128	@ 00021f86 8020
.org 0x21f88
	orrs r0, r2	@ 00021f88 1043
.org 0x21f8a
	strb r0, [r1, #0]	@ 00021f8a 0870
.org 0x21f8c
	ldrb r2, [r1, #1]	@ 00021f8c 4a78
.org 0x21f8e
	movs r0, #2	@ 00021f8e 0220
.org 0x21f90
	orrs r0, r2	@ 00021f90 1043
.org 0x21f92
	strb r0, [r1, #1]	@ 00021f92 4870
.org 0x21f94
	adds r0, r5, #0	@ 00021f94 281c
.org 0x21f96
	adds r0, #16	@ 00021f96 1030
.org 0x21f98
	ldr r1, [pc, #48]	@ 00021f98 0c49
.org 0x21f9a
	ldr r1, [r1, #20]	@ 00021f9a 4969
.org 0x21f9c
	ldr r1, [r1, #28]	@ 00021f9c c969
.org 0x21f9e
	bl 0x275f0	@ 00021f9e 05f027fb
.org 0x21fa2
	ldrh r0, [r5, #8]	@ 00021fa2 2889
.org 0x21fa4
	ldr r2, [pc, #40]	@ 00021fa4 0a4a
.org 0x21fa6
	ands r2, r0	@ 00021fa6 0240
.org 0x21fa8
	ldrb r1, [r5, #18]	@ 00021fa8 a97c
.org 0x21faa
	movs r0, #253	@ 00021faa fd20
.org 0x21fac
	ands r0, r1	@ 00021fac 0840
.org 0x21fae
	strb r0, [r5, #18]	@ 00021fae a874
.org 0x21fb0
	ldr r3, [pc, #32]	@ 00021fb0 084b
.org 0x21fb2
	ldrb r1, [r3, #4]	@ 00021fb2 1979
.org 0x21fb4
	movs r0, #247	@ 00021fb4 f720
.org 0x21fb6
	ands r0, r1	@ 00021fb6 0840
.org 0x21fb8
	strb r0, [r3, #4]	@ 00021fb8 1871
.org 0x21fba
	movs r0, #1	@ 00021fba 0120
.org 0x21fbc
	orrs r2, r0	@ 00021fbc 0243
.org 0x21fbe
	strh r2, [r5, #8]	@ 00021fbe 2a81
.org 0x21fc0
	movs r0, #7	@ 00021fc0 0720
.org 0x21fc2
	b.n 0x22230	@ 00021fc2 35e1
.org 0x21fc4
	.byte 0x10,0xe9,0x02,0x02	@ 00021fc4 data
.org 0x21fc8
	.byte 0xe0,0x32,0x00,0x03	@ 00021fc8 data
.org 0x21fcc
	.byte 0xf8,0x2c,0x84,0x08	@ 00021fcc data
.org 0x21fd0
	.byte 0xef,0xff,0x00,0x00	@ 00021fd0 data
.org 0x21fd4
	.byte 0xb0,0xe8,0x02,0x02	@ 00021fd4 data
.org 0x21fd8
	movs r7, #190	@ 00021fd8 be27
.org 0x21fda
	lsls r7, r7, #1	@ 00021fda 7f00
.org 0x21fdc
	adds r5, r4, r7	@ 00021fdc e519
.org 0x21fde
	ldrb r0, [r5, #0]	@ 00021fde 2878
.org 0x21fe0
	cmp r0, #7	@ 00021fe0 0728
.org 0x21fe2
	bne.n 0x21ffc	@ 00021fe2 0bd1
.org 0x21fe4
	ldr r1, [pc, #16]	@ 00021fe4 0449
.org 0x21fe6
	ldrb r2, [r1, #0]	@ 00021fe6 0a78
.org 0x21fe8
	movs r0, #127	@ 00021fe8 7f20
.org 0x21fea
	ands r0, r2	@ 00021fea 1040
.org 0x21fec
	movs r2, #0	@ 00021fec 0022
.org 0x21fee
	strb r0, [r1, #0]	@ 00021fee 0870
.org 0x21ff0
	strb r2, [r1, #1]	@ 00021ff0 4a70
.org 0x21ff2
	movs r0, #8	@ 00021ff2 0820
.org 0x21ff4
	strb r0, [r5, #0]	@ 00021ff4 2870
.org 0x21ff6
	b.n 0x22232	@ 00021ff6 1ce1
.org 0x21ff8
	.byte 0xe0,0x32,0x00,0x03	@ 00021ff8 data
.org 0x21ffc
	cmp r0, #8	@ 00021ffc 0828
.org 0x21ffe
	bne.n 0x22028	@ 00021ffe 13d1
.org 0x22000
	ldr r1, [r3, #84]	@ 00022000 596d
.org 0x22002
	ldr r0, [pc, #28]	@ 00022002 0748
.org 0x22004
	cmp r1, r0	@ 00022004 8142
.org 0x22006
	ble.n 0x22028	@ 00022006 0fdd
.org 0x22008
	movs r0, #5	@ 00022008 0520
.org 0x2200a
	bl 0x1f63c	@ 0002200a fdf717fb
.org 0x2200e
	ldr r2, [pc, #20]	@ 0002200e 054a
.org 0x22010
	ldrb r1, [r2, #4]	@ 00022010 1179
.org 0x22012
	movs r0, #8	@ 00022012 0820
.org 0x22014
	orrs r0, r1	@ 00022014 0843
.org 0x22016
	strb r0, [r2, #4]	@ 00022016 1071
.org 0x22018
	movs r0, #9	@ 00022018 0920
.org 0x2201a
	strb r0, [r5, #0]	@ 0002201a 2870
.org 0x2201c
	b.n 0x22232	@ 0002201c 09e1
.org 0x2201e
	.byte 0x00	@ 0002201e data
.org 0x2201f
	.byte 0x00	@ 0002201f data
.org 0x22020
	.byte 0xff,0x4f,0x1a,0x00	@ 00022020 data
.org 0x22024
	.byte 0xb0,0xe8,0x02,0x02	@ 00022024 data
.org 0x22028
	movs r0, #190	@ 00022028 be20
.org 0x2202a
	lsls r0, r0, #1	@ 0002202a 4000
.org 0x2202c
	adds r5, r4, r0	@ 0002202c 2518
.org 0x2202e
	ldrb r0, [r5, #0]	@ 0002202e 2878
.org 0x22030
	cmp r0, #9	@ 00022030 0928
.org 0x22032
	bne.n 0x220f8	@ 00022032 61d1
.org 0x22034
	ldr r1, [pc, #56]	@ 00022034 0e49
.org 0x22036
	adds r6, r4, r1	@ 00022036 6618
.org 0x22038
	ldrb r0, [r6, #0]	@ 00022038 3078
.org 0x2203a
	cmp r0, #0	@ 0002203a 0028
.org 0x2203c
	bne.n 0x22080	@ 0002203c 20d1
.org 0x2203e
	ldr r1, [r3, #84]	@ 0002203e 596d
.org 0x22040
	ldr r0, [pc, #48]	@ 00022040 0c48
.org 0x22042
	cmp r1, r0	@ 00022042 8142
.org 0x22044
	ble.n 0x22080	@ 00022044 1cdd
.org 0x22046
	ldr r2, [pc, #48]	@ 00022046 0c4a
.org 0x22048
	ldrb r1, [r2, #1]	@ 00022048 5178
.org 0x2204a
	movs r0, #2	@ 0002204a 0220
.org 0x2204c
	orrs r0, r1	@ 0002204c 0843
.org 0x2204e
	strb r0, [r2, #1]	@ 0002204e 5070
.org 0x22050
	ldr r0, [pc, #40]	@ 00022050 0a48
.org 0x22052
	movs r7, #180	@ 00022052 b427
.org 0x22054
	lsls r7, r7, #1	@ 00022054 7f00
.org 0x22056
	adds r5, r0, r7	@ 00022056 c519
.org 0x22058
	ldr r0, [r5, #0]	@ 00022058 2868
.org 0x2205a
	movs r4, #1	@ 0002205a 0124
.org 0x2205c
	negs r4, r4	@ 0002205c 6442
.org 0x2205e
	cmp r0, r4	@ 0002205e a042
.org 0x22060
	beq.n 0x2206c	@ 00022060 04d0
.org 0x22062
	lsls r0, r0, #16	@ 00022062 0004
.org 0x22064
	lsrs r0, r0, #16	@ 00022064 000c
.org 0x22066
	bl 0x2a98	@ 00022066 e0f717fd
.org 0x2206a
	str r4, [r5, #0]	@ 0002206a 2c60
.org 0x2206c
	movs r0, #1	@ 0002206c 0120
.org 0x2206e
	b.n 0x22230	@ 0002206e dfe0
.org 0x22070
	.byte 0x7d,0x01,0x00,0x00	@ 00022070 data
.org 0x22074
	.byte 0xff,0x1f,0x2a,0x00	@ 00022074 data
.org 0x22078
	.byte 0xe0,0x32,0x00,0x03	@ 00022078 data
.org 0x2207c
	.byte 0x10,0xe9,0x02,0x02	@ 0002207c data
.org 0x22080
	ldr r0, [pc, #20]	@ 00022080 0548
.org 0x22082
	adds r2, r4, r0	@ 00022082 2218
.org 0x22084
	ldrb r0, [r2, #0]	@ 00022084 1078
.org 0x22086
	cmp r0, #1	@ 00022086 0128
.org 0x22088
	bne.n 0x220a0	@ 00022088 0ad1
.org 0x2208a
	ldr r0, [pc, #16]	@ 0002208a 0448
.org 0x2208c
	movs r1, #0	@ 0002208c 0021
.org 0x2208e
	strb r1, [r0, #1]	@ 0002208e 4170
.org 0x22090
	movs r0, #2	@ 00022090 0220
.org 0x22092
	strb r0, [r2, #0]	@ 00022092 1070
.org 0x22094
	b.n 0x22232	@ 00022094 cde0
.org 0x22096
	.byte 0x00	@ 00022096 data
.org 0x22097
	.byte 0x00	@ 00022097 data
.org 0x22098
	.byte 0x7d,0x01,0x00,0x00	@ 00022098 data
.org 0x2209c
	.byte 0xe0,0x32,0x00,0x03	@ 0002209c data
.org 0x220a0
	cmp r0, #2	@ 000220a0 0228
.org 0x220a2
	beq.n 0x220a6	@ 000220a2 00d0
.org 0x220a4
	b.n 0x22232	@ 000220a4 c5e0
.org 0x220a6
	ldr r1, [r3, #84]	@ 000220a6 596d
.org 0x220a8
	ldr r0, [pc, #64]	@ 000220a8 1048
.org 0x220aa
	cmp r1, r0	@ 000220aa 8142
.org 0x220ac
	bgt.n 0x220b0	@ 000220ac 00dc
.org 0x220ae
	b.n 0x22232	@ 000220ae c0e0
.org 0x220b0
	ldr r0, [pc, #60]	@ 000220b0 0f48
.org 0x220b2
	movs r1, #0	@ 000220b2 0021
.org 0x220b4
	strb r1, [r0, #1]	@ 000220b4 4170
.org 0x220b6
	ldr r0, [pc, #60]	@ 000220b6 0f48
.org 0x220b8
	movs r1, #180	@ 000220b8 b421
.org 0x220ba
	lsls r1, r1, #1	@ 000220ba 4900
.org 0x220bc
	adds r5, r0, r1	@ 000220bc 4518
.org 0x220be
	ldr r0, [r5, #0]	@ 000220be 2868
.org 0x220c0
	cmp r0, #155	@ 000220c0 9b28
.org 0x220c2
	beq.n 0x220e0	@ 000220c2 0dd0
.org 0x220c4
	movs r6, #1	@ 000220c4 0126
.org 0x220c6
	negs r6, r6	@ 000220c6 7642
.org 0x220c8
	cmp r0, r6	@ 000220c8 b042
.org 0x220ca
	beq.n 0x220d6	@ 000220ca 04d0
.org 0x220cc
	lsls r0, r0, #16	@ 000220cc 0004
.org 0x220ce
	lsrs r0, r0, #16	@ 000220ce 000c
.org 0x220d0
	bl 0x2a98	@ 000220d0 e0f7e2fc
.org 0x220d4
	str r6, [r5, #0]	@ 000220d4 2e60
.org 0x220d6
	movs r0, #155	@ 000220d6 9b20
.org 0x220d8
	bl 0x2a88	@ 000220d8 e0f7d6fc
.org 0x220dc
	movs r0, #155	@ 000220dc 9b20
.org 0x220de
	str r0, [r5, #0]	@ 000220de 2860
.org 0x220e0
	movs r7, #190	@ 000220e0 be27
.org 0x220e2
	lsls r7, r7, #1	@ 000220e2 7f00
.org 0x220e4
	adds r1, r4, r7	@ 000220e4 e119
.org 0x220e6
	movs r0, #10	@ 000220e6 0a20
.org 0x220e8
	strb r0, [r1, #0]	@ 000220e8 0870
.org 0x220ea
	b.n 0x22232	@ 000220ea a2e0
.org 0x220ec
	.byte 0xff,0x3f,0x2a,0x00	@ 000220ec data
.org 0x220f0
	.byte 0xe0,0x32,0x00,0x03	@ 000220f0 data
.org 0x220f4
	.byte 0x10,0xe9,0x02,0x02	@ 000220f4 data
.org 0x220f8
	cmp r0, #10	@ 000220f8 0a28
.org 0x220fa
	bne.n 0x2211c	@ 000220fa 0fd1
.org 0x220fc
	ldr r1, [r3, #84]	@ 000220fc 596d
.org 0x220fe
	ldr r0, [pc, #16]	@ 000220fe 0448
.org 0x22100
	cmp r1, r0	@ 00022100 8142
.org 0x22102
	ble.n 0x2211c	@ 00022102 0bdd
.org 0x22104
	ldr r0, [pc, #12]	@ 00022104 0348
.org 0x22106
	ldr r1, [pc, #16]	@ 00022106 0449
.org 0x22108
	ldr r1, [r1, #20]	@ 00022108 4969
.org 0x2210a
	ldr r1, [r1, #36]	@ 0002210a 496a
.org 0x2210c
	b.n 0x22138	@ 0002210c 14e0
.org 0x2210e
	.byte 0x00	@ 0002210e data
.org 0x2210f
	.byte 0x00	@ 0002210f data
.org 0x22110
	.byte 0xff,0x1f,0x2b,0x00	@ 00022110 data
.org 0x22114
	.byte 0x20,0xe9,0x02,0x02	@ 00022114 data
.org 0x22118
	.byte 0xf8,0x2c,0x84,0x08	@ 00022118 data
.org 0x2211c
	movs r0, #190	@ 0002211c be20
.org 0x2211e
	lsls r0, r0, #1	@ 0002211e 4000
.org 0x22120
	adds r5, r4, r0	@ 00022120 2518
.org 0x22122
	ldrb r0, [r5, #0]	@ 00022122 2878
.org 0x22124
	cmp r0, #11	@ 00022124 0b28
.org 0x22126
	bne.n 0x22154	@ 00022126 15d1
.org 0x22128
	ldr r1, [r3, #84]	@ 00022128 596d
.org 0x2212a
	ldr r0, [pc, #28]	@ 0002212a 0748
.org 0x2212c
	cmp r1, r0	@ 0002212c 8142
.org 0x2212e
	ble.n 0x22154	@ 0002212e 11dd
.org 0x22130
	ldr r0, [pc, #24]	@ 00022130 0648
.org 0x22132
	ldr r1, [pc, #28]	@ 00022132 0749
.org 0x22134
	ldr r1, [r1, #20]	@ 00022134 4969
.org 0x22136
	ldr r1, [r1, #44]	@ 00022136 c96a
.org 0x22138
	bl 0x275f0	@ 00022138 05f05afa
.org 0x2213c
	movs r0, #7	@ 0002213c 0720
.org 0x2213e
	bl 0x1f63c	@ 0002213e fdf77dfa
.org 0x22142
	movs r0, #12	@ 00022142 0c20
.org 0x22144
	strb r0, [r5, #0]	@ 00022144 2870
.org 0x22146
	b.n 0x22232	@ 00022146 74e0
.org 0x22148
	.byte 0xff,0x1f,0x2b,0x00	@ 00022148 data
.org 0x2214c
	.byte 0x20,0xe9,0x02,0x02	@ 0002214c data
.org 0x22150
	.byte 0xf8,0x2c,0x84,0x08	@ 00022150 data
.org 0x22154
	movs r1, #190	@ 00022154 be21
.org 0x22156
	lsls r1, r1, #1	@ 00022156 4900
.org 0x22158
	adds r6, r4, r1	@ 00022158 6618
.org 0x2215a
	ldrb r0, [r6, #0]	@ 0002215a 3078
.org 0x2215c
	cmp r0, #12	@ 0002215c 0c28
.org 0x2215e
	bne.n 0x2216a	@ 0002215e 04d1
.org 0x22160
	movs r0, #6	@ 00022160 0620
.org 0x22162
	bl 0x1f63c	@ 00022162 fdf76bfa
.org 0x22166
	movs r0, #13	@ 00022166 0d20
.org 0x22168
	b.n 0x22230	@ 00022168 62e0
.org 0x2216a
	cmp r0, #13	@ 0002216a 0d28
.org 0x2216c
	bne.n 0x221c4	@ 0002216c 2ad1
.org 0x2216e
	ldr r5, [pc, #68]	@ 0002216e 114d
.org 0x22170
	ldrh r1, [r5, #8]	@ 00022170 2989
.org 0x22172
	movs r0, #16	@ 00022172 1020
.org 0x22174
	ands r0, r1	@ 00022174 0840
