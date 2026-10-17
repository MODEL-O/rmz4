@ FUN_08079e14  entry 0x08079e14  size 298
.thumb
.org 0x79e14
FUN_08079e14:
	push {r4, r5, r6, lr}	@ 00079e14 70b5
.org 0x79e16
	adds r5, r0, #0	@ 00079e16 051c
.org 0x79e18
	adds r6, r5, #0	@ 00079e18 2e1c
.org 0x79e1a
	adds r6, #180	@ 00079e1a b436
.org 0x79e1c
	ldr r1, [r5, #84]	@ 00079e1c 696d
.org 0x79e1e
	ldr r0, [r6, #0]	@ 00079e1e 3068
.org 0x79e20
	cmp r1, r0	@ 00079e20 8142
.org 0x79e22
	ble.n 0x79e2a	@ 00079e22 02dd
.org 0x79e24
	adds r0, r1, #0	@ 00079e24 081c
.org 0x79e26
	subs r0, #128	@ 00079e26 8038
.org 0x79e28
	str r0, [r5, #84]	@ 00079e28 6865
.org 0x79e2a
	ldrb r1, [r5, #14]	@ 00079e2a a97b
.org 0x79e2c
	cmp r1, #0	@ 00079e2c 0029
.org 0x79e2e
	beq.n 0x79e78	@ 00079e2e 23d0
.org 0x79e30
	cmp r1, #1	@ 00079e30 0129
.org 0x79e32
	bne.n 0x79f06	@ 00079e32 68d1
.org 0x79e34
	ldr r0, [r5, #24]	@ 00079e34 a869
.org 0x79e36
	ldrb r0, [r0, #9]	@ 00079e36 407a
.org 0x79e38
	ands r1, r0	@ 00079e38 0140
.org 0x79e3a
	cmp r1, #0	@ 00079e3a 0029
.org 0x79e3c
	bne.n 0x79e40	@ 00079e3c 00d1
.org 0x79e3e
	b.n 0x79f42	@ 00079e3e 80e0
.org 0x79e40
	ldr r1, [pc, #44]	@ 00079e40 0b49
.org 0x79e42
	adds r0, r5, #0	@ 00079e42 281c
.org 0x79e44
	bl 0x1cf00	@ 00079e44 a3f75cf8
.org 0x79e48
	adds r0, r5, #0	@ 00079e48 281c
.org 0x79e4a
	bl 0x1cff0	@ 00079e4a a3f7d1f8
.org 0x79e4e
	adds r0, r5, #0	@ 00079e4e 281c
.org 0x79e50
	movs r1, #0	@ 00079e50 0021
.org 0x79e52
	movs r2, #0	@ 00079e52 0022
.org 0x79e54
	bl 0xcd938	@ 00079e54 53f070fd
.org 0x79e58
	movs r0, #202	@ 00079e58 ca20
.org 0x79e5a
	lsls r0, r0, #1	@ 00079e5a 4000
.org 0x79e5c
	bl 0x2b10	@ 00079e5c 88f758fe
.org 0x79e60
	ldr r0, [pc, #16]	@ 00079e60 0448
.org 0x79e62
	bl 0x2b10	@ 00079e62 88f755fe
.org 0x79e66
	ldrb r0, [r5, #14]	@ 00079e66 a87b
.org 0x79e68
	adds r0, #1	@ 00079e68 0130
.org 0x79e6a
	strb r0, [r5, #14]	@ 00079e6a a873
.org 0x79e6c
	b.n 0x79f42	@ 00079e6c 69e0
.org 0x79e6e
	.byte 0x00	@ 00079e6e data
.org 0x79e6f
	.byte 0x00	@ 00079e6f data
.org 0x79e70
	.byte 0x07,0xb1,0x00,0x00	@ 00079e70 data
.org 0x79e74
	.byte 0x4f,0x01,0x00,0x00	@ 00079e74 data
.org 0x79e78
	movs r0, #0	@ 00079e78 0020
.org 0x79e7a
	bl 0x1c560	@ 00079e7a a2f771fb
.org 0x79e7e
	adds r0, r5, #0	@ 00079e7e 281c
.org 0x79e80
	bl 0x1cc9c	@ 00079e80 a2f70cff
.org 0x79e84
	adds r0, r5, #0	@ 00079e84 281c
.org 0x79e86
	bl 0x1ceec	@ 00079e86 a3f731f8
.org 0x79e8a
	ldr r1, [pc, #188]	@ 00079e8a 2f49
.org 0x79e8c
	adds r0, r5, #0	@ 00079e8c 281c
.org 0x79e8e
	bl 0x1cf00	@ 00079e8e a3f737f8
.org 0x79e92
	ldr r0, [pc, #184]	@ 00079e92 2e48
.org 0x79e94
	ldr r1, [pc, #184]	@ 00079e94 2e49
.org 0x79e96
	movs r4, #216	@ 00079e96 d824
.org 0x79e98
	lsls r4, r4, #1	@ 00079e98 6400
.org 0x79e9a
	adds r1, r1, r4	@ 00079e9a 0919
.org 0x79e9c
	ldrh r1, [r1, #0]	@ 00079e9c 0988
.org 0x79e9e
	ldrh r2, [r0, #6]	@ 00079e9e c288
.org 0x79ea0
	lsrs r2, r2, #6	@ 00079ea0 9209
.org 0x79ea2
	subs r1, r1, r2	@ 00079ea2 891a
.org 0x79ea4
	lsls r1, r1, #5	@ 00079ea4 4901
.org 0x79ea6
	movs r2, #128	@ 00079ea6 8022
.org 0x79ea8
	lsls r2, r2, #9	@ 00079ea8 5202
.org 0x79eaa
	adds r1, r1, r2	@ 00079eaa 8918
.org 0x79eac
	bl 0x1d30	@ 00079eac 87f740ff
.org 0x79eb0
	ldr r0, [pc, #160]	@ 00079eb0 2848
.org 0x79eb2
	ldr r1, [pc, #164]	@ 00079eb2 2949
.org 0x79eb4
	adds r1, r1, r4	@ 00079eb4 0919
.org 0x79eb6
	ldrh r1, [r1, #0]	@ 00079eb6 0988
.org 0x79eb8
	ldrb r2, [r0, #7]	@ 00079eb8 c279
.org 0x79eba
	subs r1, r1, r2	@ 00079eba 891a
.org 0x79ebc
	lsls r1, r1, #5	@ 00079ebc 4901
.org 0x79ebe
	movs r2, #128	@ 00079ebe 8022
.org 0x79ec0
	lsls r2, r2, #2	@ 00079ec0 9200
.org 0x79ec2
	adds r1, r1, r2	@ 00079ec2 8918
.org 0x79ec4
	bl 0x2208	@ 00079ec4 88f7a0f9
.org 0x79ec8
	adds r0, r5, #0	@ 00079ec8 281c
.org 0x79eca
	movs r1, #0	@ 00079eca 0021
.org 0x79ecc
	movs r2, #0	@ 00079ecc 0022
.org 0x79ece
	bl 0xb7ce8	@ 00079ece 3df00bff
.org 0x79ed2
	str r0, [r6, #28]	@ 00079ed2 f061
.org 0x79ed4
	adds r0, r5, #0	@ 00079ed4 281c
.org 0x79ed6
	movs r1, #0	@ 00079ed6 0021
.org 0x79ed8
	movs r2, #0	@ 00079ed8 0022
.org 0x79eda
	bl 0xb84a8	@ 00079eda 3ef0e5fa
.org 0x79ede
	adds r0, r5, #0	@ 00079ede 281c
.org 0x79ee0
	movs r1, #1	@ 00079ee0 0121
.org 0x79ee2
	movs r2, #0	@ 00079ee2 0022
.org 0x79ee4
	bl 0xb84a8	@ 00079ee4 3ef0e0fa
.org 0x79ee8
	adds r0, r5, #0	@ 00079ee8 281c
.org 0x79eea
	movs r1, #0	@ 00079eea 0021
.org 0x79eec
	movs r2, #0	@ 00079eec 0022
.org 0x79eee
	bl 0xfe6b8	@ 00079eee 84f0e3fb
.org 0x79ef2
	ldr r0, [r6, #0]	@ 00079ef2 3068
.org 0x79ef4
	movs r1, #128	@ 00079ef4 8021
.org 0x79ef6
	lsls r1, r1, #5	@ 00079ef6 4901
.org 0x79ef8
	adds r0, r0, r1	@ 00079ef8 4018
.org 0x79efa
	str r0, [r5, #84]	@ 00079efa 6865
.org 0x79efc
	ldr r0, [r6, #4]	@ 00079efc 7068
.org 0x79efe
	str r0, [r5, #88]	@ 00079efe a865
.org 0x79f00
	ldrb r0, [r5, #14]	@ 00079f00 a87b
.org 0x79f02
	adds r0, #1	@ 00079f02 0130
.org 0x79f04
	strb r0, [r5, #14]	@ 00079f04 a873
.org 0x79f06
	ldrb r0, [r5, #30]	@ 00079f06 a87f
.org 0x79f08
	lsls r0, r0, #8	@ 00079f08 0002
.org 0x79f0a
	adds r1, r5, #0	@ 00079f0a 291c
.org 0x79f0c
	adds r1, #112	@ 00079f0c 7031
.org 0x79f0e
	ldrb r1, [r1, #0]	@ 00079f0e 0978
.org 0x79f10
	orrs r0, r1	@ 00079f10 0843
.org 0x79f12
	ldr r1, [pc, #72]	@ 00079f12 1249
.org 0x79f14
	cmp r0, r1	@ 00079f14 8842
.org 0x79f16
	bne.n 0x79f2a	@ 00079f16 08d1
.org 0x79f18
	adds r0, r5, #0	@ 00079f18 281c
.org 0x79f1a
	adds r0, #115	@ 00079f1a 7330
.org 0x79f1c
	ldrb r0, [r0, #0]	@ 00079f1c 0078
.org 0x79f1e
	cmp r0, #3	@ 00079f1e 0328
.org 0x79f20
	bne.n 0x79f2a	@ 00079f20 03d1
.org 0x79f22
	subs r1, #6	@ 00079f22 0639
.org 0x79f24
	adds r0, r5, #0	@ 00079f24 281c
.org 0x79f26
	bl 0x1cf00	@ 00079f26 a2f7ebff
.org 0x79f2a
	adds r0, r5, #0	@ 00079f2a 281c
.org 0x79f2c
	bl 0x1cff0	@ 00079f2c a3f760f8
.org 0x79f30
	ldr r0, [pc, #44]	@ 00079f30 0b48
.org 0x79f32
	ldrb r0, [r0, #18]	@ 00079f32 807c
.org 0x79f34
	movs r1, #1	@ 00079f34 0121
.org 0x79f36
	ands r1, r0	@ 00079f36 0140
.org 0x79f38
	cmp r1, #0	@ 00079f38 0029
.org 0x79f3a
	bne.n 0x79f42	@ 00079f3a 02d1
.org 0x79f3c
	movs r0, #2	@ 00079f3c 0220
