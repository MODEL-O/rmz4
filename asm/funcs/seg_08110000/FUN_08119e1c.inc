@ FUN_08119e1c  entry 0x08119e1c  size 656
.thumb
.org 0x119e1c
FUN_08119e1c:
	push {r4, r5, r6, r7, lr}	@ 00119e1c f0b5
.org 0x119e1e
	mov r7, r8	@ 00119e1e 4746
.org 0x119e20
	push {r7}	@ 00119e20 80b4
.org 0x119e22
	adds r6, r0, #0	@ 00119e22 061c
.org 0x119e24
	movs r0, #221	@ 00119e24 dd20
.org 0x119e26
	lsls r0, r0, #4	@ 00119e26 0001
.org 0x119e28
	adds r7, r6, r0	@ 00119e28 3718
.org 0x119e2a
	ldrb r0, [r7, #0]	@ 00119e2a 3878
.org 0x119e2c
	adds r0, #20	@ 00119e2c 1430
.org 0x119e2e
	mov r8, r0	@ 00119e2e 8046
.org 0x119e30
	ldr r1, [pc, #48]	@ 00119e30 0c49
.org 0x119e32
	adds r4, r6, r1	@ 00119e32 7418
.org 0x119e34
	ldr r2, [pc, #48]	@ 00119e34 0c4a
.org 0x119e36
	adds r5, r6, r2	@ 00119e36 b518
.org 0x119e38
	ldrb r0, [r5, #0]	@ 00119e38 2878
.org 0x119e3a
	cmp r0, #0	@ 00119e3a 0028
.org 0x119e3c
	bne.n 0x119e4c	@ 00119e3c 06d1
.org 0x119e3e
	mov r0, r8	@ 00119e3e 4046
.org 0x119e40
	movs r1, #0	@ 00119e40 0021
.org 0x119e42
	bl 0x249c	@ 00119e42 e8f62bfb
.org 0x119e46
	ldrb r0, [r5, #0]	@ 00119e46 2878
.org 0x119e48
	adds r0, #1	@ 00119e48 0130
.org 0x119e4a
	strb r0, [r5, #0]	@ 00119e4a 2870
.org 0x119e4c
	mov r0, r8	@ 00119e4c 4046
.org 0x119e4e
	bl 0x25d8	@ 00119e4e e8f6c3fb
.org 0x119e52
	ldrb r0, [r7, #0]	@ 00119e52 3878
.org 0x119e54
	cmp r0, #1	@ 00119e54 0128
.org 0x119e56
	beq.n 0x119ec0	@ 00119e56 33d0
.org 0x119e58
	cmp r0, #1	@ 00119e58 0128
.org 0x119e5a
	bgt.n 0x119e6c	@ 00119e5a 07dc
.org 0x119e5c
	cmp r0, #0	@ 00119e5c 0028
.org 0x119e5e
	beq.n 0x119e76	@ 00119e5e 0ad0
.org 0x119e60
	b.n 0x119f9c	@ 00119e60 9ce0
.org 0x119e62
	.byte 0x00	@ 00119e62 data
.org 0x119e63
	.byte 0x00	@ 00119e63 data
.org 0x119e64
	.byte 0xcc,0x0d,0x00,0x00	@ 00119e64 data
.org 0x119e68
	.byte 0xf7,0x0d,0x00,0x00	@ 00119e68 data
.org 0x119e6c
	cmp r0, #2	@ 00119e6c 0228
.org 0x119e6e
	beq.n 0x119f0c	@ 00119e6e 4dd0
.org 0x119e70
	cmp r0, #3	@ 00119e70 0328
.org 0x119e72
	beq.n 0x119f58	@ 00119e72 71d0
.org 0x119e74
	b.n 0x119f9c	@ 00119e74 92e0
.org 0x119e76
	ldrh r1, [r4, #48]	@ 00119e76 218e
.org 0x119e78
	movs r3, #48	@ 00119e78 3023
.org 0x119e7a
	ldrsh r0, [r4, r3]	@ 00119e7a e05e
.org 0x119e7c
	cmp r0, #0	@ 00119e7c 0028
.org 0x119e7e
	bge.n 0x119e88	@ 00119e7e 03da
.org 0x119e80
	movs r2, #128	@ 00119e80 8022
.org 0x119e82
	lsls r2, r2, #1	@ 00119e82 5200
.org 0x119e84
	adds r0, r1, r2	@ 00119e84 8818
.org 0x119e86
	strh r0, [r4, #48]	@ 00119e86 2086
.org 0x119e88
	ldrh r1, [r4, #50]	@ 00119e88 618e
.org 0x119e8a
	movs r3, #50	@ 00119e8a 3223
.org 0x119e8c
	ldrsh r0, [r4, r3]	@ 00119e8c e05e
.org 0x119e8e
	ldr r2, [pc, #40]	@ 00119e8e 0a4a
.org 0x119e90
	cmp r0, r2	@ 00119e90 9042
.org 0x119e92
	ble.n 0x119e9a	@ 00119e92 02dd
.org 0x119e94
	ldr r3, [pc, #36]	@ 00119e94 094b
.org 0x119e96
	adds r0, r1, r3	@ 00119e96 c818
.org 0x119e98
	strh r0, [r4, #50]	@ 00119e98 6086
.org 0x119e9a
	ldrh r1, [r4, #52]	@ 00119e9a a18e
.org 0x119e9c
	movs r3, #52	@ 00119e9c 3423
.org 0x119e9e
	ldrsh r0, [r4, r3]	@ 00119e9e e05e
.org 0x119ea0
	cmp r0, r2	@ 00119ea0 9042
.org 0x119ea2
	ble.n 0x119eaa	@ 00119ea2 02dd
.org 0x119ea4
	ldr r3, [pc, #20]	@ 00119ea4 054b
.org 0x119ea6
	adds r0, r1, r3	@ 00119ea6 c818
.org 0x119ea8
	strh r0, [r4, #52]	@ 00119ea8 a086
.org 0x119eaa
	ldrh r1, [r4, #54]	@ 00119eaa e18e
.org 0x119eac
	movs r3, #54	@ 00119eac 3623
.org 0x119eae
	ldrsh r0, [r4, r3]	@ 00119eae e05e
.org 0x119eb0
	cmp r0, r2	@ 00119eb0 9042
.org 0x119eb2
	ble.n 0x119f9c	@ 00119eb2 73dd
.org 0x119eb4
	ldr r2, [pc, #4]	@ 00119eb4 014a
.org 0x119eb6
	b.n 0x119f98	@ 00119eb6 6fe0
.org 0x119eb8
	.byte 0x00,0xf8,0xff,0xff	@ 00119eb8 data
.org 0x119ebc
	.byte 0x00,0xff,0xff,0xff	@ 00119ebc data
.org 0x119ec0
	ldrh r1, [r4, #48]	@ 00119ec0 218e
.org 0x119ec2
	movs r3, #48	@ 00119ec2 3023
.org 0x119ec4
	ldrsh r0, [r4, r3]	@ 00119ec4 e05e
.org 0x119ec6
	ldr r2, [pc, #60]	@ 00119ec6 0f4a
.org 0x119ec8
	cmp r0, r2	@ 00119ec8 9042
.org 0x119eca
	ble.n 0x119ed2	@ 00119eca 02dd
.org 0x119ecc
	ldr r3, [pc, #56]	@ 00119ecc 0e4b
.org 0x119ece
	adds r0, r1, r3	@ 00119ece c818
.org 0x119ed0
	strh r0, [r4, #48]	@ 00119ed0 2086
.org 0x119ed2
	ldrh r1, [r4, #50]	@ 00119ed2 618e
.org 0x119ed4
	movs r3, #50	@ 00119ed4 3223
.org 0x119ed6
	ldrsh r0, [r4, r3]	@ 00119ed6 e05e
.org 0x119ed8
	cmp r0, #0	@ 00119ed8 0028
.org 0x119eda
	bge.n 0x119ee4	@ 00119eda 03da
.org 0x119edc
	movs r3, #128	@ 00119edc 8023
.org 0x119ede
	lsls r3, r3, #1	@ 00119ede 5b00
.org 0x119ee0
	adds r0, r1, r3	@ 00119ee0 c818
.org 0x119ee2
	strh r0, [r4, #50]	@ 00119ee2 6086
.org 0x119ee4
	ldrh r1, [r4, #52]	@ 00119ee4 a18e
.org 0x119ee6
	movs r3, #52	@ 00119ee6 3423
.org 0x119ee8
	ldrsh r0, [r4, r3]	@ 00119ee8 e05e
.org 0x119eea
	cmp r0, r2	@ 00119eea 9042
.org 0x119eec
	ble.n 0x119ef4	@ 00119eec 02dd
.org 0x119eee
	ldr r3, [pc, #24]	@ 00119eee 064b
.org 0x119ef0
	adds r0, r1, r3	@ 00119ef0 c818
.org 0x119ef2
	strh r0, [r4, #52]	@ 00119ef2 a086
.org 0x119ef4
	ldrh r1, [r4, #54]	@ 00119ef4 e18e
.org 0x119ef6
	movs r3, #54	@ 00119ef6 3623
.org 0x119ef8
	ldrsh r0, [r4, r3]	@ 00119ef8 e05e
.org 0x119efa
	cmp r0, r2	@ 00119efa 9042
.org 0x119efc
	ble.n 0x119f9c	@ 00119efc 4edd
.org 0x119efe
	ldr r2, [pc, #8]	@ 00119efe 024a
.org 0x119f00
	b.n 0x119f98	@ 00119f00 4ae0
.org 0x119f02
	.byte 0x00	@ 00119f02 data
.org 0x119f03
	.byte 0x00	@ 00119f03 data
.org 0x119f04
	.byte 0x00,0xf8,0xff,0xff	@ 00119f04 data
.org 0x119f08
	.byte 0x00,0xff,0xff,0xff	@ 00119f08 data
.org 0x119f0c
	ldrh r1, [r4, #48]	@ 00119f0c 218e
.org 0x119f0e
	movs r3, #48	@ 00119f0e 3023
.org 0x119f10
	ldrsh r0, [r4, r3]	@ 00119f10 e05e
.org 0x119f12
	ldr r2, [pc, #60]	@ 00119f12 0f4a
.org 0x119f14
	cmp r0, r2	@ 00119f14 9042
.org 0x119f16
	ble.n 0x119f1e	@ 00119f16 02dd
.org 0x119f18
	ldr r3, [pc, #56]	@ 00119f18 0e4b
.org 0x119f1a
	adds r0, r1, r3	@ 00119f1a c818
.org 0x119f1c
	strh r0, [r4, #48]	@ 00119f1c 2086
.org 0x119f1e
	ldrh r1, [r4, #50]	@ 00119f1e 618e
.org 0x119f20
	movs r3, #50	@ 00119f20 3223
.org 0x119f22
	ldrsh r0, [r4, r3]	@ 00119f22 e05e
.org 0x119f24
	cmp r0, r2	@ 00119f24 9042
.org 0x119f26
	ble.n 0x119f2e	@ 00119f26 02dd
.org 0x119f28
	ldr r3, [pc, #40]	@ 00119f28 0a4b
.org 0x119f2a
	adds r0, r1, r3	@ 00119f2a c818
.org 0x119f2c
	strh r0, [r4, #50]	@ 00119f2c 6086
.org 0x119f2e
	ldrh r1, [r4, #52]	@ 00119f2e a18e
.org 0x119f30
	movs r3, #52	@ 00119f30 3423
.org 0x119f32
	ldrsh r0, [r4, r3]	@ 00119f32 e05e
.org 0x119f34
	cmp r0, #0	@ 00119f34 0028
.org 0x119f36
	bge.n 0x119f40	@ 00119f36 03da
.org 0x119f38
	movs r3, #128	@ 00119f38 8023
.org 0x119f3a
	lsls r3, r3, #1	@ 00119f3a 5b00
.org 0x119f3c
	adds r0, r1, r3	@ 00119f3c c818
.org 0x119f3e
	strh r0, [r4, #52]	@ 00119f3e a086
.org 0x119f40
	ldrh r1, [r4, #54]	@ 00119f40 e18e
.org 0x119f42
	movs r3, #54	@ 00119f42 3623
.org 0x119f44
	ldrsh r0, [r4, r3]	@ 00119f44 e05e
.org 0x119f46
	cmp r0, r2	@ 00119f46 9042
.org 0x119f48
	ble.n 0x119f9c	@ 00119f48 28dd
.org 0x119f4a
	ldr r2, [pc, #8]	@ 00119f4a 024a
.org 0x119f4c
	b.n 0x119f98	@ 00119f4c 24e0
.org 0x119f4e
	.byte 0x00	@ 00119f4e data
.org 0x119f4f
	.byte 0x00	@ 00119f4f data
.org 0x119f50
	.byte 0x00,0xf8,0xff,0xff	@ 00119f50 data
.org 0x119f54
	.byte 0x00,0xff,0xff,0xff	@ 00119f54 data
.org 0x119f58
	ldrh r1, [r4, #48]	@ 00119f58 218e
.org 0x119f5a
	movs r3, #48	@ 00119f5a 3023
.org 0x119f5c
	ldrsh r0, [r4, r3]	@ 00119f5c e05e
.org 0x119f5e
	ldr r2, [pc, #212]	@ 00119f5e 354a
.org 0x119f60
	cmp r0, r2	@ 00119f60 9042
.org 0x119f62
	ble.n 0x119f6a	@ 00119f62 02dd
.org 0x119f64
	ldr r3, [pc, #208]	@ 00119f64 344b
.org 0x119f66
	adds r0, r1, r3	@ 00119f66 c818
.org 0x119f68
	strh r0, [r4, #48]	@ 00119f68 2086
.org 0x119f6a
	ldrh r1, [r4, #50]	@ 00119f6a 618e
.org 0x119f6c
	movs r3, #50	@ 00119f6c 3223
.org 0x119f6e
	ldrsh r0, [r4, r3]	@ 00119f6e e05e
.org 0x119f70
	cmp r0, r2	@ 00119f70 9042
.org 0x119f72
	ble.n 0x119f7a	@ 00119f72 02dd
.org 0x119f74
	ldr r3, [pc, #192]	@ 00119f74 304b
.org 0x119f76
	adds r0, r1, r3	@ 00119f76 c818
.org 0x119f78
	strh r0, [r4, #50]	@ 00119f78 6086
.org 0x119f7a
	ldrh r1, [r4, #52]	@ 00119f7a a18e
.org 0x119f7c
	movs r3, #52	@ 00119f7c 3423
.org 0x119f7e
	ldrsh r0, [r4, r3]	@ 00119f7e e05e
.org 0x119f80
	cmp r0, r2	@ 00119f80 9042
.org 0x119f82
	ble.n 0x119f8a	@ 00119f82 02dd
.org 0x119f84
	ldr r2, [pc, #176]	@ 00119f84 2c4a
.org 0x119f86
	adds r0, r1, r2	@ 00119f86 8818
.org 0x119f88
	strh r0, [r4, #52]	@ 00119f88 a086
.org 0x119f8a
	ldrh r1, [r4, #54]	@ 00119f8a e18e
.org 0x119f8c
	movs r3, #54	@ 00119f8c 3623
.org 0x119f8e
	ldrsh r0, [r4, r3]	@ 00119f8e e05e
.org 0x119f90
	cmp r0, #0	@ 00119f90 0028
.org 0x119f92
	bge.n 0x119f9c	@ 00119f92 03da
.org 0x119f94
	movs r2, #128	@ 00119f94 8022
.org 0x119f96
	lsls r2, r2, #1	@ 00119f96 5200
.org 0x119f98
	adds r0, r1, r2	@ 00119f98 8818
.org 0x119f9a
	strh r0, [r4, #54]	@ 00119f9a e086
.org 0x119f9c
	ldr r0, [pc, #156]	@ 00119f9c 2748
.org 0x119f9e
	movs r1, #8	@ 00119f9e 0821
.org 0x119fa0
	strh r1, [r0, #4]	@ 00119fa0 8180
.org 0x119fa2
	movs r1, #128	@ 00119fa2 8021
.org 0x119fa4
	strh r1, [r0, #8]	@ 00119fa4 0181
.org 0x119fa6
	movs r5, #160	@ 00119fa6 a025
.org 0x119fa8
	lsls r5, r5, #1	@ 00119fa8 6d00
.org 0x119faa
	adds r0, r5, #0	@ 00119faa 281c
.org 0x119fac
	bl 0xa70	@ 00119fac e6f660fd
.org 0x119fb0
	adds r4, r0, #0	@ 00119fb0 041c
.org 0x119fb2
	cmp r4, #0	@ 00119fb2 002c
.org 0x119fb4
	beq.n 0x11a000	@ 00119fb4 24d0
.org 0x119fb6
	movs r0, #0	@ 00119fb6 0020
.org 0x119fb8
	adds r1, r4, #0	@ 00119fb8 211c
.org 0x119fba
	adds r2, r5, #0	@ 00119fba 2a1c
.org 0x119fbc
	bl 0xab4	@ 00119fbc e6f67afd
.org 0x119fc0
	movs r2, #0	@ 00119fc0 0022
.org 0x119fc2
	ldr r0, [pc, #124]	@ 00119fc2 1f48
.org 0x119fc4
	adds r3, r6, r0	@ 00119fc4 3318
.org 0x119fc6
	lsls r1, r2, #1	@ 00119fc6 5100
.org 0x119fc8
	adds r1, r1, r4	@ 00119fc8 0919
.org 0x119fca
	lsrs r0, r2, #5	@ 00119fca 5009
.org 0x119fcc
	lsls r0, r0, #1	@ 00119fcc 4000
.org 0x119fce
	adds r0, r3, r0	@ 00119fce 1818
.org 0x119fd0
	ldrh r0, [r0, #0]	@ 00119fd0 0088
.org 0x119fd2
	lsls r0, r0, #16	@ 00119fd2 0004
.org 0x119fd4
	asrs r0, r0, #24	@ 00119fd4 0016
.org 0x119fd6
	strh r0, [r1, #0]	@ 00119fd6 0880
.org 0x119fd8
	adds r0, r2, #1	@ 00119fd8 501c
.org 0x119fda
	lsls r0, r0, #24	@ 00119fda 0006
.org 0x119fdc
	lsrs r2, r0, #24	@ 00119fdc 020e
.org 0x119fde
	cmp r2, #95	@ 00119fde 5f2a
.org 0x119fe0
	bls.n 0x119fc6	@ 00119fe0 f1d9
.org 0x119fe2
	ldr r2, [pc, #96]	@ 00119fe2 184a
.org 0x119fe4
	movs r1, #200	@ 00119fe4 c821
.org 0x119fe6
	lsls r1, r1, #1	@ 00119fe6 4900
.org 0x119fe8
	adds r0, r2, r1	@ 00119fe8 5018
.org 0x119fea
	str r4, [r0, #0]	@ 00119fea 0460
.org 0x119fec
	movs r3, #202	@ 00119fec ca23
.org 0x119fee
	lsls r3, r3, #1	@ 00119fee 5b00
.org 0x119ff0
	adds r1, r2, r3	@ 00119ff0 d118
.org 0x119ff2
	ldr r0, [pc, #84]	@ 00119ff2 1548
.org 0x119ff4
	str r0, [r1, #0]	@ 00119ff4 0860
.org 0x119ff6
	movs r0, #204	@ 00119ff6 cc20
.org 0x119ff8
	lsls r0, r0, #1	@ 00119ff8 4000
.org 0x119ffa
	adds r1, r2, r0	@ 00119ffa 1118
.org 0x119ffc
	ldr r0, [pc, #76]	@ 00119ffc 1348
.org 0x119ffe
	str r0, [r1, #0]	@ 00119ffe 0860
.org 0x11a000
	adds r0, r6, #0	@ 0011a000 301c
.org 0x11a002
	bl 0x118248	@ 0011a002 fef721f9
.org 0x11a006
	lsls r0, r0, #24	@ 0011a006 0006
.org 0x11a008
	lsrs r5, r0, #24	@ 0011a008 050e
.org 0x11a00a
	cmp r5, #0	@ 0011a00a 002d
.org 0x11a00c
	bne.n 0x11a0f4	@ 0011a00c 72d1
.org 0x11a00e
	ldr r1, [pc, #64]	@ 0011a00e 1049
.org 0x11a010
	ldrh r0, [r1, #4]	@ 0011a010 8888
.org 0x11a012
	movs r4, #1	@ 0011a012 0124
.org 0x11a014
	ands r4, r0	@ 0011a014 0440
.org 0x11a016
	cmp r4, #0	@ 0011a016 002c
.org 0x11a018
	beq.n 0x11a058	@ 0011a018 1ed0
.org 0x11a01a
	movs r0, #2	@ 0011a01a 0220
.org 0x11a01c
	bl 0x2b10	@ 0011a01c e8f678fd
.org 0x11a020
	adds r0, r6, #0	@ 0011a020 301c
.org 0x11a022
	bl 0x11ad3c	@ 0011a022 00f08bfe
.org 0x11a026
	movs r0, #1	@ 0011a026 0120
.org 0x11a028
	strb r0, [r6, #3]	@ 0011a028 f070
.org 0x11a02a
	ldr r1, [pc, #40]	@ 0011a02a 0a49
.org 0x11a02c
	adds r0, r6, r1	@ 0011a02c 7018
.org 0x11a02e
	strb r5, [r0, #0]	@ 0011a02e 0570
.org 0x11a030
	b.n 0x11a0f4	@ 0011a030 60e0
.org 0x11a032
	.byte 0x00	@ 0011a032 data
.org 0x11a033
	.byte 0x00	@ 0011a033 data
.org 0x11a034
	.byte 0x00,0xf8,0xff,0xff	@ 0011a034 data
.org 0x11a038
	.byte 0x00,0xff,0xff,0xff	@ 0011a038 data
.org 0x11a03c
	.byte 0x50,0x0a,0x00,0x02	@ 0011a03c data
.org 0x11a040
	.byte 0xfc,0x0d,0x00,0x00	@ 0011a040 data
.org 0x11a044
	.byte 0x90,0x15,0x00,0x03	@ 0011a044 data
.org 0x11a048
	.byte 0x10,0x00,0x00,0x04	@ 0011a048 data
.org 0x11a04c
	.byte 0x01,0x00,0x60,0xa2	@ 0011a04c data
.org 0x11a050
	.byte 0x60,0x07,0x00,0x02	@ 0011a050 data
.org 0x11a054
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a054 data
.org 0x11a058
	ldrh r1, [r1, #6]	@ 0011a058 c988
.org 0x11a05a
	movs r0, #64	@ 0011a05a 4020
.org 0x11a05c
	ands r0, r1	@ 0011a05c 0840
.org 0x11a05e
	lsls r0, r0, #16	@ 0011a05e 0004
.org 0x11a060
	lsrs r5, r0, #16	@ 0011a060 050c
.org 0x11a062
	cmp r5, #0	@ 0011a062 002d
.org 0x11a064
	beq.n 0x11a094	@ 0011a064 16d0
.org 0x11a066
	movs r0, #1	@ 0011a066 0120
.org 0x11a068
	bl 0x2b10	@ 0011a068 e8f652fd
.org 0x11a06c
	movs r2, #221	@ 0011a06c dd22
.org 0x11a06e
	lsls r2, r2, #4	@ 0011a06e 1201
.org 0x11a070
	adds r3, r6, r2	@ 0011a070 b318
.org 0x11a072
	ldrb r1, [r3, #0]	@ 0011a072 1978
.org 0x11a074
	adds r2, r1, #3	@ 0011a074 ca1c
.org 0x11a076
	adds r0, r2, #0	@ 0011a076 101c
.org 0x11a078
	asrs r0, r0, #2	@ 0011a078 8010
.org 0x11a07a
	lsls r0, r0, #2	@ 0011a07a 8000
.org 0x11a07c
	subs r0, r2, r0	@ 0011a07c 101a
.org 0x11a07e
	strb r0, [r3, #0]	@ 0011a07e 1870
.org 0x11a080
	ldr r3, [pc, #12]	@ 0011a080 034b
.org 0x11a082
	adds r0, r6, r3	@ 0011a082 f018
.org 0x11a084
	strb r4, [r0, #0]	@ 0011a084 0470
.org 0x11a086
	mov r0, r8	@ 0011a086 4046
.org 0x11a088
	bl 0x2624	@ 0011a088 e8f6ccfa
.org 0x11a08c
	b.n 0x11a0c2	@ 0011a08c 19e0
.org 0x11a08e
	.byte 0x00	@ 0011a08e data
.org 0x11a08f
	.byte 0x00	@ 0011a08f data
.org 0x11a090
	.byte 0xf7,0x0d,0x00,0x00	@ 0011a090 data
.org 0x11a094
	movs r0, #128	@ 0011a094 8020
.org 0x11a096
	ands r0, r1	@ 0011a096 0840
.org 0x11a098
	cmp r0, #0	@ 0011a098 0028
.org 0x11a09a
	beq.n 0x11a0c2	@ 0011a09a 12d0
.org 0x11a09c
	movs r0, #1	@ 0011a09c 0120
.org 0x11a09e
	bl 0x2b10	@ 0011a09e e8f637fd
.org 0x11a0a2
	movs r0, #221	@ 0011a0a2 dd20
.org 0x11a0a4
	lsls r0, r0, #4	@ 0011a0a4 0001
.org 0x11a0a6
	adds r3, r6, r0	@ 0011a0a6 3318
.org 0x11a0a8
	ldrb r1, [r3, #0]	@ 0011a0a8 1978
.org 0x11a0aa
	adds r2, r1, #1	@ 0011a0aa 4a1c
