@ FUN_08050e48  entry 0x08050e48  size 490
.thumb
.org 0x50e48
FUN_08050e48:
	push {r4, r5, r6, r7, lr}	@ 00050e48 f0b5
.org 0x50e4a
	adds r5, r0, #0	@ 00050e4a 051c
.org 0x50e4c
	ldr r2, [pc, #76]	@ 00050e4c 134a
.org 0x50e4e
	ldr r1, [r2, #0]	@ 00050e4e 1168
.org 0x50e50
	ldr r0, [pc, #76]	@ 00050e50 1348
.org 0x50e52
	muls r0, r1	@ 00050e52 4843
.org 0x50e54
	ldr r1, [pc, #76]	@ 00050e54 1349
.org 0x50e56
	adds r0, r0, r1	@ 00050e56 4018
.org 0x50e58
	lsls r0, r0, #1	@ 00050e58 4000
.org 0x50e5a
	lsrs r1, r0, #1	@ 00050e5a 4108
.org 0x50e5c
	str r1, [r2, #0]	@ 00050e5c 1160
.org 0x50e5e
	lsrs r4, r0, #17	@ 00050e5e 440c
.org 0x50e60
	movs r0, #31	@ 00050e60 1f20
.org 0x50e62
	ands r4, r0	@ 00050e62 0440
.org 0x50e64
	adds r0, r5, #0	@ 00050e64 281c
.org 0x50e66
	bl 0x1cff0	@ 00050e66 ccf7c3f8
.org 0x50e6a
	ldr r0, [pc, #60]	@ 00050e6a 0f48
.org 0x50e6c
	ldrh r1, [r0, #8]	@ 00050e6c 0189
.org 0x50e6e
	movs r0, #8	@ 00050e6e 0820
.org 0x50e70
	ands r0, r1	@ 00050e70 0840
.org 0x50e72
	cmp r0, #0	@ 00050e72 0028
.org 0x50e74
	beq.n 0x50e78	@ 00050e74 00d0
.org 0x50e76
	b.n 0x51084	@ 00050e76 05e1
.org 0x50e78
	adds r0, r5, #0	@ 00050e78 281c
.org 0x50e7a
	adds r0, #164	@ 00050e7a a430
.org 0x50e7c
	movs r2, #0	@ 00050e7c 0022
.org 0x50e7e
	ldrsh r1, [r0, r2]	@ 00050e7e 815e
.org 0x50e80
	adds r7, r0, #0	@ 00050e80 071c
.org 0x50e82
	cmp r1, #32	@ 00050e82 2029
.org 0x50e84
	ble.n 0x50f04	@ 00050e84 3edd
.org 0x50e86
	ldr r0, [pc, #36]	@ 00050e86 0948
.org 0x50e88
	ldr r1, [r0, #0]	@ 00050e88 0168
.org 0x50e8a
	ldr r2, [r5, #84]	@ 00050e8a 6a6d
.org 0x50e8c
	ldr r3, [r1, #84]	@ 00050e8c 4b6d
.org 0x50e8e
	subs r1, r2, r3	@ 00050e8e d11a
.org 0x50e90
	adds r6, r0, #0	@ 00050e90 061c
.org 0x50e92
	cmp r1, #0	@ 00050e92 0029
.org 0x50e94
	blt.n 0x50eb0	@ 00050e94 0cdb
.org 0x50e96
	cmp r1, #63	@ 00050e96 3f29
.org 0x50e98
	ble.n 0x50eb6	@ 00050e98 0ddd
.org 0x50e9a
	b.n 0x50eca	@ 00050e9a 16e0
.org 0x50e9c
	.byte 0x38,0xdc,0x02,0x02	@ 00050e9c data
.org 0x50ea0
	.byte 0xfd,0x43,0x03,0x00	@ 00050ea0 data
.org 0x50ea4
	.byte 0xc3,0x9e,0x26,0x00	@ 00050ea4 data
.org 0x50ea8
	.byte 0x10,0xe9,0x02,0x02	@ 00050ea8 data
.org 0x50eac
	.byte 0xf0,0xdb,0x02,0x02	@ 00050eac data
.org 0x50eb0
	subs r0, r3, r2	@ 00050eb0 981a
.org 0x50eb2
	cmp r0, #63	@ 00050eb2 3f28
.org 0x50eb4
	bgt.n 0x50eca	@ 00050eb4 09dc
.org 0x50eb6
	movs r1, #2	@ 00050eb6 0221
.org 0x50eb8
	cmp r4, #10	@ 00050eb8 0a2c
.org 0x50eba
	bhi.n 0x50ebe	@ 00050eba 00d8
.org 0x50ebc
	b.n 0x5104a	@ 00050ebc c5e0
.org 0x50ebe
	movs r1, #3	@ 00050ebe 0321
.org 0x50ec0
	cmp r4, #21	@ 00050ec0 152c
.org 0x50ec2
	bls.n 0x50ec6	@ 00050ec2 00d9
.org 0x50ec4
	b.n 0x5104a	@ 00050ec4 c1e0
.org 0x50ec6
	movs r1, #0	@ 00050ec6 0021
.org 0x50ec8
	b.n 0x5104a	@ 00050ec8 bfe0
.org 0x50eca
	ldr r0, [r6, #0]	@ 00050eca 3068
.org 0x50ecc
	ldr r0, [r0, #84]	@ 00050ecc 406d
.org 0x50ece
	subs r1, r2, r0	@ 00050ece 111a
.org 0x50ed0
	cmp r1, #0	@ 00050ed0 0029
.org 0x50ed2
	blt.n 0x50eda	@ 00050ed2 02db
.org 0x50ed4
	cmp r1, #127	@ 00050ed4 7f29
.org 0x50ed6
	ble.n 0x50ee0	@ 00050ed6 03dd
.org 0x50ed8
	b.n 0x50ef2	@ 00050ed8 0be0
.org 0x50eda
	subs r0, r0, r2	@ 00050eda 801a
.org 0x50edc
	cmp r0, #127	@ 00050edc 7f28
.org 0x50ede
	bgt.n 0x50ef2	@ 00050ede 08dc
.org 0x50ee0
	movs r1, #2	@ 00050ee0 0221
.org 0x50ee2
	cmp r4, #11	@ 00050ee2 0b2c
.org 0x50ee4
	bhi.n 0x50ee8	@ 00050ee4 00d8
.org 0x50ee6
	b.n 0x5104a	@ 00050ee6 b0e0
.org 0x50ee8
	movs r1, #3	@ 00050ee8 0321
.org 0x50eea
	cmp r4, #23	@ 00050eea 172c
.org 0x50eec
	bls.n 0x50ef0	@ 00050eec 00d9
.org 0x50eee
	b.n 0x5104a	@ 00050eee ace0
.org 0x50ef0
	b.n 0x50ec6	@ 00050ef0 e9e7
.org 0x50ef2
	movs r1, #2	@ 00050ef2 0221
.org 0x50ef4
	cmp r4, #11	@ 00050ef4 0b2c
.org 0x50ef6
	bhi.n 0x50efa	@ 00050ef6 00d8
.org 0x50ef8
	b.n 0x5104a	@ 00050ef8 a7e0
.org 0x50efa
	movs r1, #3	@ 00050efa 0321
.org 0x50efc
	cmp r4, #19	@ 00050efc 132c
.org 0x50efe
	bls.n 0x50f02	@ 00050efe 00d9
.org 0x50f00
	b.n 0x5104a	@ 00050f00 a3e0
.org 0x50f02
	b.n 0x50ec6	@ 00050f02 e0e7
.org 0x50f04
	ldr r0, [pc, #20]	@ 00050f04 0548
.org 0x50f06
	ldr r1, [r0, #0]	@ 00050f06 0168
.org 0x50f08
	ldr r2, [r5, #84]	@ 00050f08 6a6d
.org 0x50f0a
	ldr r3, [r1, #84]	@ 00050f0a 4b6d
.org 0x50f0c
	subs r1, r2, r3	@ 00050f0c d11a
.org 0x50f0e
	adds r6, r0, #0	@ 00050f0e 061c
.org 0x50f10
	cmp r1, #0	@ 00050f10 0029
.org 0x50f12
	blt.n 0x50f20	@ 00050f12 05db
.org 0x50f14
	cmp r1, #63	@ 00050f14 3f29
.org 0x50f16
	ble.n 0x50f26	@ 00050f16 06dd
.org 0x50f18
	b.n 0x50f64	@ 00050f18 24e0
.org 0x50f1a
	.byte 0x00	@ 00050f1a data
.org 0x50f1b
	.byte 0x00	@ 00050f1b data
.org 0x50f1c
	.byte 0xf0,0xdb,0x02,0x02	@ 00050f1c data
.org 0x50f20
	subs r0, r3, r2	@ 00050f20 981a
.org 0x50f22
	cmp r0, #63	@ 00050f22 3f28
.org 0x50f24
	bgt.n 0x50f64	@ 00050f24 1edc
.org 0x50f26
	cmp r4, #7	@ 00050f26 072c
.org 0x50f28
	bls.n 0x50fb4	@ 00050f28 44d9
.org 0x50f2a
	cmp r4, #17	@ 00050f2a 112c
.org 0x50f2c
	bls.n 0x50f30	@ 00050f2c 00d9
.org 0x50f2e
	b.n 0x51048	@ 00050f2e 8be0
.org 0x50f30
	ldr r0, [pc, #36]	@ 00050f30 0948
.org 0x50f32
	ldr r1, [pc, #40]	@ 00050f32 0a49
.org 0x50f34
	adds r0, r0, r1	@ 00050f34 4018
.org 0x50f36
	ldrb r1, [r0, #0]	@ 00050f36 0178
.org 0x50f38
	movs r0, #16	@ 00050f38 1020
.org 0x50f3a
	ands r0, r1	@ 00050f3a 0840
.org 0x50f3c
	cmp r0, #0	@ 00050f3c 0028
.org 0x50f3e
	beq.n 0x50ec6	@ 00050f3e c2d0
.org 0x50f40
	ldr r0, [pc, #28]	@ 00050f40 0748
.org 0x50f42
	ldrb r1, [r0, #4]	@ 00050f42 0179
.org 0x50f44
	movs r0, #4	@ 00050f44 0420
.org 0x50f46
	ands r0, r1	@ 00050f46 0840
.org 0x50f48
	cmp r0, #0	@ 00050f48 0028
.org 0x50f4a
	bne.n 0x50ec6	@ 00050f4a bcd1
.org 0x50f4c
	movs r2, #0	@ 00050f4c 0022
.org 0x50f4e
	ldrsh r0, [r7, r2]	@ 00050f4e b85e
.org 0x50f50
	cmp r0, #16	@ 00050f50 1028
.org 0x50f52
	bgt.n 0x50fe4	@ 00050f52 47dc
.org 0x50f54
	b.n 0x5101c	@ 00050f54 62e0
.org 0x50f56
	.byte 0x00	@ 00050f56 data
.org 0x50f57
	.byte 0x00	@ 00050f57 data
.org 0x50f58
	.byte 0xb0,0x0a,0x00,0x02	@ 00050f58 data
.org 0x50f5c
	.byte 0x10,0xc0,0x02,0x00	@ 00050f5c data
.org 0x50f60
	.byte 0xb0,0xe8,0x02,0x02	@ 00050f60 data
.org 0x50f64
	ldr r0, [r6, #0]	@ 00050f64 3068
.org 0x50f66
	ldr r0, [r0, #84]	@ 00050f66 406d
.org 0x50f68
	subs r1, r2, r0	@ 00050f68 111a
.org 0x50f6a
	cmp r1, #0	@ 00050f6a 0029
.org 0x50f6c
	blt.n 0x50f74	@ 00050f6c 02db
.org 0x50f6e
	cmp r1, #127	@ 00050f6e 7f29
.org 0x50f70
	ble.n 0x50f7a	@ 00050f70 03dd
.org 0x50f72
	b.n 0x50fb0	@ 00050f72 1de0
.org 0x50f74
	subs r0, r0, r2	@ 00050f74 801a
.org 0x50f76
	cmp r0, #127	@ 00050f76 7f28
.org 0x50f78
	bgt.n 0x50fb0	@ 00050f78 1adc
.org 0x50f7a
	cmp r4, #11	@ 00050f7a 0b2c
.org 0x50f7c
	bls.n 0x50fb4	@ 00050f7c 1ad9
.org 0x50f7e
	cmp r4, #21	@ 00050f7e 152c
.org 0x50f80
	bhi.n 0x51048	@ 00050f80 62d8
.org 0x50f82
	ldr r0, [pc, #32]	@ 00050f82 0848
.org 0x50f84
	ldr r2, [pc, #32]	@ 00050f84 084a
.org 0x50f86
	adds r0, r0, r2	@ 00050f86 8018
.org 0x50f88
	ldrb r1, [r0, #0]	@ 00050f88 0178
.org 0x50f8a
	movs r0, #16	@ 00050f8a 1020
.org 0x50f8c
	ands r0, r1	@ 00050f8c 0840
.org 0x50f8e
	cmp r0, #0	@ 00050f8e 0028
.org 0x50f90
	beq.n 0x50ec6	@ 00050f90 99d0
.org 0x50f92
	ldr r0, [pc, #24]	@ 00050f92 0648
.org 0x50f94
	ldrb r1, [r0, #4]	@ 00050f94 0179
.org 0x50f96
	movs r0, #4	@ 00050f96 0420
.org 0x50f98
	ands r0, r1	@ 00050f98 0840
.org 0x50f9a
	cmp r0, #0	@ 00050f9a 0028
.org 0x50f9c
	bne.n 0x50ec6	@ 00050f9c 93d1
.org 0x50f9e
	movs r1, #0	@ 00050f9e 0021
.org 0x50fa0
	ldrsh r0, [r7, r1]	@ 00050fa0 785e
.org 0x50fa2
	b.n 0x50f50	@ 00050fa2 d5e7
.org 0x50fa4
	.byte 0xb0,0x0a,0x00,0x02	@ 00050fa4 data
.org 0x50fa8
	.byte 0x10,0xc0,0x02,0x00	@ 00050fa8 data
.org 0x50fac
	.byte 0xb0,0xe8,0x02,0x02	@ 00050fac data
.org 0x50fb0
	cmp r4, #10	@ 00050fb0 0a2c
.org 0x50fb2
	bhi.n 0x50fb8	@ 00050fb2 01d8
.org 0x50fb4
	movs r1, #2	@ 00050fb4 0221
.org 0x50fb6
	b.n 0x5104a	@ 00050fb6 48e0
.org 0x50fb8
	cmp r4, #21	@ 00050fb8 152c
.org 0x50fba
	bhi.n 0x51048	@ 00050fba 45d8
.org 0x50fbc
	ldr r0, [pc, #68]	@ 00050fbc 1148
.org 0x50fbe
	ldr r2, [pc, #72]	@ 00050fbe 124a
.org 0x50fc0
	adds r0, r0, r2	@ 00050fc0 8018
.org 0x50fc2
	ldrb r1, [r0, #0]	@ 00050fc2 0178
.org 0x50fc4
	movs r0, #16	@ 00050fc4 1020
.org 0x50fc6
	ands r0, r1	@ 00050fc6 0840
.org 0x50fc8
	cmp r0, #0	@ 00050fc8 0028
.org 0x50fca
	bne.n 0x50fce	@ 00050fca 00d1
.org 0x50fcc
	b.n 0x50ec6	@ 00050fcc 7be7
.org 0x50fce
	ldr r0, [pc, #60]	@ 00050fce 0f48
.org 0x50fd0
	ldrb r1, [r0, #4]	@ 00050fd0 0179
.org 0x50fd2
	movs r0, #4	@ 00050fd2 0420
.org 0x50fd4
	ands r0, r1	@ 00050fd4 0840
.org 0x50fd6
	cmp r0, #0	@ 00050fd6 0028
.org 0x50fd8
	beq.n 0x50fdc	@ 00050fd8 00d0
.org 0x50fda
	b.n 0x50ec6	@ 00050fda 74e7
.org 0x50fdc
	movs r1, #0	@ 00050fdc 0021
.org 0x50fde
	ldrsh r0, [r7, r1]	@ 00050fde 785e
.org 0x50fe0
	cmp r0, #16	@ 00050fe0 1028
.org 0x50fe2
	ble.n 0x5101c	@ 00050fe2 1bdd
.org 0x50fe4
	ldr r2, [pc, #40]	@ 00050fe4 0a4a
.org 0x50fe6
	ldr r1, [r2, #0]	@ 00050fe6 1168
.org 0x50fe8
	ldr r0, [pc, #40]	@ 00050fe8 0a48
.org 0x50fea
	muls r0, r1	@ 00050fea 4843
.org 0x50fec
	ldr r1, [pc, #40]	@ 00050fec 0a49
.org 0x50fee
	adds r0, r0, r1	@ 00050fee 4018
.org 0x50ff0
	lsls r0, r0, #1	@ 00050ff0 4000
.org 0x50ff2
	lsrs r1, r0, #1	@ 00050ff2 4108
.org 0x50ff4
	str r1, [r2, #0]	@ 00050ff4 1160
.org 0x50ff6
	lsrs r0, r0, #17	@ 00050ff6 400c
.org 0x50ff8
	movs r1, #31	@ 00050ff8 1f21
.org 0x50ffa
	ands r0, r1	@ 00050ffa 0840
.org 0x50ffc
	movs r1, #1	@ 00050ffc 0121
.org 0x50ffe
	cmp r0, #19	@ 00050ffe 1328
.org 0x51000
	bhi.n 0x5104a	@ 00051000 23d8
.org 0x51002
	b.n 0x50ec6	@ 00051002 60e7
.org 0x51004
	.byte 0xb0,0x0a,0x00,0x02	@ 00051004 data
.org 0x51008
	.byte 0x10,0xc0,0x02,0x00	@ 00051008 data
.org 0x5100c
	.byte 0xb0,0xe8,0x02,0x02	@ 0005100c data
.org 0x51010
	.byte 0x38,0xdc,0x02,0x02	@ 00051010 data
.org 0x51014
	.byte 0xfd,0x43,0x03,0x00	@ 00051014 data
.org 0x51018
	.byte 0xc3,0x9e,0x26,0x00	@ 00051018 data
.org 0x5101c
	ldr r2, [pc, #28]	@ 0005101c 074a
.org 0x5101e
	ldr r1, [r2, #0]	@ 0005101e 1168
.org 0x51020
	ldr r0, [pc, #28]	@ 00051020 0748
.org 0x51022
	muls r0, r1	@ 00051022 4843
.org 0x51024
	ldr r1, [pc, #28]	@ 00051024 0749
.org 0x51026
	adds r0, r0, r1	@ 00051026 4018
.org 0x51028
	lsls r0, r0, #1	@ 00051028 4000
.org 0x5102a
	lsrs r1, r0, #1	@ 0005102a 4108
.org 0x5102c
	str r1, [r2, #0]	@ 0005102c 1160
.org 0x5102e
	lsrs r0, r0, #17	@ 0005102e 400c
.org 0x51030
	movs r1, #31	@ 00051030 1f21
