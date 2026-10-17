@ FUN_08083e54  entry 0x08083e54  size 316
.thumb
.org 0x83e54
FUN_08083e54:
	push {r4, r5, r6, r7, lr}	@ 00083e54 f0b5
.org 0x83e56
	sub sp, #8	@ 00083e56 82b0
.org 0x83e58
	adds r4, r0, #0	@ 00083e58 041c
.org 0x83e5a
	ldr r0, [r4, #84]	@ 00083e5a 606d
.org 0x83e5c
	str r0, [sp, #0]	@ 00083e5c 0090
.org 0x83e5e
	ldr r0, [r4, #88]	@ 00083e5e a06d
.org 0x83e60
	ldr r1, [pc, #60]	@ 00083e60 0f49
.org 0x83e62
	adds r0, r0, r1	@ 00083e62 4018
.org 0x83e64
	str r0, [sp, #4]	@ 00083e64 0190
.org 0x83e66
	movs r0, #2	@ 00083e66 0220
.org 0x83e68
	mov r1, sp	@ 00083e68 6946
.org 0x83e6a
	bl 0xd0c88	@ 00083e6a 4cf00dff
.org 0x83e6e
	ldr r0, [sp, #0]	@ 00083e6e 0098
.org 0x83e70
	ldr r1, [sp, #4]	@ 00083e70 0199
.org 0x83e72
	bl 0x7c7c	@ 00083e72 83f703ff
.org 0x83e76
	lsls r0, r0, #16	@ 00083e76 0004
.org 0x83e78
	cmp r0, #0	@ 00083e78 0028
.org 0x83e7a
	beq.n 0x83e7e	@ 00083e7a 00d0
.org 0x83e7c
	b.n 0x83f8c	@ 00083e7c 86e0
.org 0x83e7e
	ldrb r0, [r4, #18]	@ 00083e7e a07c
.org 0x83e80
	cmp r0, #0	@ 00083e80 0028
.org 0x83e82
	beq.n 0x83f2e	@ 00083e82 54d0
.org 0x83e84
	ldr r7, [pc, #28]	@ 00083e84 074f
.org 0x83e86
	adds r2, r4, #0	@ 00083e86 221c
.org 0x83e88
	adds r2, #180	@ 00083e88 b432
.org 0x83e8a
	ldrb r5, [r2, #8]	@ 00083e8a 157a
.org 0x83e8c
	ldrb r1, [r4, #10]	@ 00083e8c a17a
.org 0x83e8e
	movs r3, #16	@ 00083e8e 1023
.org 0x83e90
	adds r0, r3, #0	@ 00083e90 181c
.org 0x83e92
	ands r0, r1	@ 00083e92 0840
.org 0x83e94
	adds r6, r2, #0	@ 00083e94 161c
.org 0x83e96
	cmp r0, #0	@ 00083e96 0028
.org 0x83e98
	beq.n 0x83ea8	@ 00083e98 06d0
.org 0x83e9a
	orrs r3, r5	@ 00083e9a 2b43
.org 0x83e9c
	b.n 0x83eaa	@ 00083e9c 05e0
.org 0x83e9e
	.byte 0x00	@ 00083e9e data
.org 0x83e9f
	.byte 0x00	@ 00083e9f data
.org 0x83ea0
	.byte 0x00,0xee,0xff,0xff	@ 00083ea0 data
.org 0x83ea4
	.byte 0x1c,0xea,0x85,0x08	@ 00083ea4 data
.org 0x83ea8
	adds r3, r5, #0	@ 00083ea8 2b1c
.org 0x83eaa
	mov r0, sp	@ 00083eaa 6846
.org 0x83eac
	adds r1, r7, #0	@ 00083eac 391c
.org 0x83eae
	movs r2, #0	@ 00083eae 0022
.org 0x83eb0
	bl 0xd4c8c	@ 00083eb0 50f0ecfe
.org 0x83eb4
	mov r5, sp	@ 00083eb4 6d46
.org 0x83eb6
	ldr r7, [pc, #20]	@ 00083eb6 054f
.org 0x83eb8
	ldrb r2, [r6, #8]	@ 00083eb8 327a
.org 0x83eba
	ldrb r1, [r4, #10]	@ 00083eba a17a
.org 0x83ebc
	movs r3, #16	@ 00083ebc 1023
.org 0x83ebe
	adds r0, r3, #0	@ 00083ebe 181c
.org 0x83ec0
	ands r0, r1	@ 00083ec0 0840
.org 0x83ec2
	cmp r0, #0	@ 00083ec2 0028
.org 0x83ec4
	beq.n 0x83ed0	@ 00083ec4 04d0
.org 0x83ec6
	orrs r3, r2	@ 00083ec6 1343
.org 0x83ec8
	b.n 0x83ed2	@ 00083ec8 03e0
.org 0x83eca
	.byte 0x00	@ 00083eca data
.org 0x83ecb
	.byte 0x00	@ 00083ecb data
.org 0x83ecc
	.byte 0x1c,0xea,0x85,0x08	@ 00083ecc data
.org 0x83ed0
	adds r3, r2, #0	@ 00083ed0 131c
.org 0x83ed2
	adds r0, r5, #0	@ 00083ed2 281c
.org 0x83ed4
	adds r1, r7, #0	@ 00083ed4 391c
.org 0x83ed6
	movs r2, #0	@ 00083ed6 0022
.org 0x83ed8
	bl 0xd4c8c	@ 00083ed8 50f0d8fe
.org 0x83edc
	mov r5, sp	@ 00083edc 6d46
.org 0x83ede
	ldr r7, [pc, #20]	@ 00083ede 054f
.org 0x83ee0
	ldrb r2, [r6, #8]	@ 00083ee0 327a
.org 0x83ee2
	ldrb r1, [r4, #10]	@ 00083ee2 a17a
.org 0x83ee4
	movs r3, #16	@ 00083ee4 1023
.org 0x83ee6
	adds r0, r3, #0	@ 00083ee6 181c
.org 0x83ee8
	ands r0, r1	@ 00083ee8 0840
.org 0x83eea
	cmp r0, #0	@ 00083eea 0028
.org 0x83eec
	beq.n 0x83ef8	@ 00083eec 04d0
.org 0x83eee
	orrs r3, r2	@ 00083eee 1343
.org 0x83ef0
	b.n 0x83efa	@ 00083ef0 03e0
.org 0x83ef2
	.byte 0x00	@ 00083ef2 data
.org 0x83ef3
	.byte 0x00	@ 00083ef3 data
.org 0x83ef4
	.byte 0x38,0xea,0x85,0x08	@ 00083ef4 data
.org 0x83ef8
	adds r3, r2, #0	@ 00083ef8 131c
.org 0x83efa
	adds r0, r5, #0	@ 00083efa 281c
.org 0x83efc
	adds r1, r7, #0	@ 00083efc 391c
.org 0x83efe
	movs r2, #0	@ 00083efe 0022
.org 0x83f00
	bl 0xd4c8c	@ 00083f00 50f0c4fe
.org 0x83f04
	mov r5, sp	@ 00083f04 6d46
.org 0x83f06
	ldr r7, [pc, #20]	@ 00083f06 054f
.org 0x83f08
	ldrb r2, [r6, #8]	@ 00083f08 327a
.org 0x83f0a
	ldrb r1, [r4, #10]	@ 00083f0a a17a
.org 0x83f0c
	movs r3, #16	@ 00083f0c 1023
.org 0x83f0e
	adds r0, r3, #0	@ 00083f0e 181c
.org 0x83f10
	ands r0, r1	@ 00083f10 0840
.org 0x83f12
	cmp r0, #0	@ 00083f12 0028
.org 0x83f14
	beq.n 0x83f20	@ 00083f14 04d0
.org 0x83f16
	orrs r3, r2	@ 00083f16 1343
.org 0x83f18
	b.n 0x83f22	@ 00083f18 03e0
.org 0x83f1a
	.byte 0x00	@ 00083f1a data
.org 0x83f1b
	.byte 0x00	@ 00083f1b data
.org 0x83f1c
	.byte 0x38,0xea,0x85,0x08	@ 00083f1c data
.org 0x83f20
	adds r3, r2, #0	@ 00083f20 131c
.org 0x83f22
	adds r0, r5, #0	@ 00083f22 281c
.org 0x83f24
	adds r1, r7, #0	@ 00083f24 391c
.org 0x83f26
	movs r2, #0	@ 00083f26 0022
.org 0x83f28
	bl 0xd4c8c	@ 00083f28 50f0b0fe
.org 0x83f2c
	b.n 0x83f8c	@ 00083f2c 2ee0
.org 0x83f2e
	ldr r5, [pc, #124]	@ 00083f2e 1f4d
.org 0x83f30
	ldrb r0, [r4, #10]	@ 00083f30 a07a
.org 0x83f32
	movs r6, #16	@ 00083f32 1026
.org 0x83f34
	adds r3, r6, #0	@ 00083f34 331c
.org 0x83f36
	ands r3, r0	@ 00083f36 0340
.org 0x83f38
	lsls r3, r3, #24	@ 00083f38 1b06
.org 0x83f3a
	lsrs r3, r3, #24	@ 00083f3a 1b0e
.org 0x83f3c
	mov r0, sp	@ 00083f3c 6846
.org 0x83f3e
	adds r1, r5, #0	@ 00083f3e 291c
.org 0x83f40
	movs r2, #0	@ 00083f40 0022
.org 0x83f42
	bl 0xd4c8c	@ 00083f42 50f0a3fe
.org 0x83f46
	ldrb r1, [r4, #10]	@ 00083f46 a17a
.org 0x83f48
	adds r0, r6, #0	@ 00083f48 301c
.org 0x83f4a
	ands r0, r1	@ 00083f4a 0840
.org 0x83f4c
	movs r3, #1	@ 00083f4c 0123
.org 0x83f4e
	cmp r0, #0	@ 00083f4e 0028
.org 0x83f50
	beq.n 0x83f54	@ 00083f50 00d0
.org 0x83f52
	movs r3, #17	@ 00083f52 1123
.org 0x83f54
	mov r0, sp	@ 00083f54 6846
.org 0x83f56
	adds r1, r5, #0	@ 00083f56 291c
.org 0x83f58
	movs r2, #0	@ 00083f58 0022
.org 0x83f5a
	bl 0xd4c8c	@ 00083f5a 50f097fe
.org 0x83f5e
	adds r5, #28	@ 00083f5e 1c35
.org 0x83f60
	ldrb r0, [r4, #10]	@ 00083f60 a07a
.org 0x83f62
	adds r3, r6, #0	@ 00083f62 331c
.org 0x83f64
	ands r3, r0	@ 00083f64 0340
.org 0x83f66
	lsls r3, r3, #24	@ 00083f66 1b06
.org 0x83f68
	lsrs r3, r3, #24	@ 00083f68 1b0e
.org 0x83f6a
	mov r0, sp	@ 00083f6a 6846
.org 0x83f6c
	adds r1, r5, #0	@ 00083f6c 291c
.org 0x83f6e
	movs r2, #0	@ 00083f6e 0022
.org 0x83f70
	bl 0xd4c8c	@ 00083f70 50f08cfe
.org 0x83f74
	ldrb r1, [r4, #10]	@ 00083f74 a17a
.org 0x83f76
	adds r0, r6, #0	@ 00083f76 301c
.org 0x83f78
	ands r0, r1	@ 00083f78 0840
.org 0x83f7a
	movs r3, #1	@ 00083f7a 0123
.org 0x83f7c
	cmp r0, #0	@ 00083f7c 0028
.org 0x83f7e
	beq.n 0x83f82	@ 00083f7e 00d0
.org 0x83f80
	movs r3, #17	@ 00083f80 1123
.org 0x83f82
	mov r0, sp	@ 00083f82 6846
.org 0x83f84
	adds r1, r5, #0	@ 00083f84 291c
.org 0x83f86
	movs r2, #0	@ 00083f86 0022
.org 0x83f88
	bl 0xd4c8c	@ 00083f88 50f080fe
.org 0x83f8c
	movs r0, #42	@ 00083f8c 2a20
.org 0x83f8e
	bl 0x2b10	@ 00083f8e 7ef7bffd
