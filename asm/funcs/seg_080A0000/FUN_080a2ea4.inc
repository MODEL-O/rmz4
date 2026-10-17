@ FUN_080a2ea4  entry 0x080a2ea4  size 210
.thumb
.org 0xa2ea4
FUN_080a2ea4:
	push {r4, r5, r6, r7, lr}	@ 000a2ea4 f0b5
.org 0xa2ea6
	mov r7, r8	@ 000a2ea6 4746
.org 0xa2ea8
	push {r7}	@ 000a2ea8 80b4
.org 0xa2eaa
	sub sp, #24	@ 000a2eaa 86b0
.org 0xa2eac
	adds r4, r0, #0	@ 000a2eac 041c
.org 0xa2eae
	ldr r1, [pc, #116]	@ 000a2eae 1d49
.org 0xa2eb0
	mov r0, sp	@ 000a2eb0 6846
.org 0xa2eb2
	movs r2, #24	@ 000a2eb2 1822
.org 0xa2eb4
	bl 0x129258	@ 000a2eb4 86f0d0f9
.org 0xa2eb8
	ldr r6, [r4, #40]	@ 000a2eb8 a66a
.org 0xa2eba
	ldrb r0, [r4, #10]	@ 000a2eba a07a
.org 0xa2ebc
	lsrs r5, r0, #4	@ 000a2ebc 0509
.org 0xa2ebe
	movs r0, #1	@ 000a2ebe 0120
.org 0xa2ec0
	mov r8, r0	@ 000a2ec0 8046
.org 0xa2ec2
	ands r5, r0	@ 000a2ec2 0540
.org 0xa2ec4
	ldrb r7, [r4, #17]	@ 000a2ec4 677c
.org 0xa2ec6
	ldrb r0, [r4, #15]	@ 000a2ec6 e07b
.org 0xa2ec8
	cmp r0, #0	@ 000a2ec8 0028
.org 0xa2eca
	bne.n 0xa2ee4	@ 000a2eca 0bd1
.org 0xa2ecc
	adds r0, r4, #0	@ 000a2ecc 201c
.org 0xa2ece
	adds r0, #116	@ 000a2ece 7430
.org 0xa2ed0
	ldr r1, [pc, #84]	@ 000a2ed0 1549
.org 0xa2ed2
	bl 0x5784	@ 000a2ed2 62f757fc
.org 0xa2ed6
	ldrb r1, [r4, #10]	@ 000a2ed6 a17a
.org 0xa2ed8
	movs r0, #254	@ 000a2ed8 fe20
.org 0xa2eda
	ands r0, r1	@ 000a2eda 0840
.org 0xa2edc
	strb r0, [r4, #10]	@ 000a2edc a072
.org 0xa2ede
	ldrb r0, [r4, #15]	@ 000a2ede e07b
.org 0xa2ee0
	adds r0, #1	@ 000a2ee0 0130
.org 0xa2ee2
	strb r0, [r4, #15]	@ 000a2ee2 e073
.org 0xa2ee4
	ldrb r0, [r6, #12]	@ 000a2ee4 307b
.org 0xa2ee6
	cmp r0, #2	@ 000a2ee6 0228
.org 0xa2ee8
	bls.n 0xa2f30	@ 000a2ee8 22d9
.org 0xa2eea
	ldrb r1, [r4, #10]	@ 000a2eea a17a
.org 0xa2eec
	movs r0, #254	@ 000a2eec fe20
.org 0xa2eee
	ands r0, r1	@ 000a2eee 0840
.org 0xa2ef0
	movs r2, #0	@ 000a2ef0 0022
.org 0xa2ef2
	movs r1, #253	@ 000a2ef2 fd21
.org 0xa2ef4
	ands r0, r1	@ 000a2ef4 0840
.org 0xa2ef6
	strb r0, [r4, #10]	@ 000a2ef6 a072
.org 0xa2ef8
	adds r0, r4, #0	@ 000a2ef8 201c
.org 0xa2efa
	adds r0, #140	@ 000a2efa 8c30
.org 0xa2efc
	str r2, [r0, #0]	@ 000a2efc 0260
.org 0xa2efe
	adds r0, #4	@ 000a2efe 0430
.org 0xa2f00
	str r2, [r0, #0]	@ 000a2f00 0260
.org 0xa2f02
	adds r0, #4	@ 000a2f02 0430
.org 0xa2f04
	strb r2, [r0, #0]	@ 000a2f04 0270
.org 0xa2f06
	ldrb r1, [r4, #10]	@ 000a2f06 a17a
.org 0xa2f08
	movs r0, #251	@ 000a2f08 fb20
.org 0xa2f0a
	ands r0, r1	@ 000a2f0a 0840
.org 0xa2f0c
	strb r0, [r4, #10]	@ 000a2f0c a072
.org 0xa2f0e
	ldr r1, [pc, #28]	@ 000a2f0e 0749
.org 0xa2f10
	ldrb r0, [r4, #9]	@ 000a2f10 607a
.org 0xa2f12
	lsls r0, r0, #2	@ 000a2f12 8000
.org 0xa2f14
	adds r0, r0, r1	@ 000a2f14 4018
.org 0xa2f16
	movs r1, #3	@ 000a2f16 0321
.org 0xa2f18
	str r1, [r4, #12]	@ 000a2f18 e160
.org 0xa2f1a
	ldr r0, [r0, #0]	@ 000a2f1a 0068
.org 0xa2f1c
	ldr r0, [r0, #12]	@ 000a2f1c c068
.org 0xa2f1e
	str r0, [r4, #20]	@ 000a2f1e 6061
.org 0xa2f20
	b.n 0xa2f7c	@ 000a2f20 2ce0
.org 0xa2f22
	.byte 0x00	@ 000a2f22 data
.org 0xa2f23
	.byte 0x00	@ 000a2f23 data
.org 0xa2f24
	.byte 0x2c,0x9d,0x12,0x08	@ 000a2f24 data
.org 0xa2f28
	.byte 0x9c,0x1d,0x86,0x08	@ 000a2f28 data
.org 0xa2f2c
	.byte 0x40,0xdb,0x85,0x08	@ 000a2f2c data
.org 0xa2f30
	cmp r0, #1	@ 000a2f30 0128
.org 0xa2f32
	bls.n 0xa2f74	@ 000a2f32 1fd9
.org 0xa2f34
	lsls r2, r7, #2	@ 000a2f34 ba00
.org 0xa2f36
	mov r1, sp	@ 000a2f36 6946
.org 0xa2f38
	adds r0, r1, r2	@ 000a2f38 8818
.org 0xa2f3a
	movs r3, #0	@ 000a2f3a 0023
.org 0xa2f3c
	ldrsh r1, [r0, r3]	@ 000a2f3c c15e
.org 0xa2f3e
	lsls r0, r5, #1	@ 000a2f3e 6800
.org 0xa2f40
	subs r0, #1	@ 000a2f40 0138
.org 0xa2f42
	muls r1, r0	@ 000a2f42 4143
.org 0xa2f44
	ldr r0, [r6, #84]	@ 000a2f44 706d
.org 0xa2f46
	adds r0, r0, r1	@ 000a2f46 4018
.org 0xa2f48
	str r0, [r4, #84]	@ 000a2f48 6065
.org 0xa2f4a
	mov r0, sp	@ 000a2f4a 6846
.org 0xa2f4c
	adds r0, #2	@ 000a2f4c 0230
.org 0xa2f4e
	adds r0, r0, r2	@ 000a2f4e 8018
.org 0xa2f50
	movs r2, #0	@ 000a2f50 0022
.org 0xa2f52
	ldrsh r1, [r0, r2]	@ 000a2f52 815e
.org 0xa2f54
	ldr r0, [r6, #88]	@ 000a2f54 b06d
.org 0xa2f56
	adds r0, r0, r1	@ 000a2f56 4018
.org 0xa2f58
	str r0, [r4, #88]	@ 000a2f58 a065
.org 0xa2f5a
	movs r0, #0	@ 000a2f5a 0020
.org 0xa2f5c
	mov r3, r8	@ 000a2f5c 4346
.org 0xa2f5e
	strb r3, [r4, #13]	@ 000a2f5e 6373
.org 0xa2f60
	strb r0, [r4, #14]	@ 000a2f60 a073
.org 0xa2f62
	strb r0, [r4, #15]	@ 000a2f62 e073
.org 0xa2f64
	ldr r0, [pc, #8]	@ 000a2f64 0248
.org 0xa2f66
	ldr r1, [r0, #4]	@ 000a2f66 4168
.org 0xa2f68
	adds r0, r4, #0	@ 000a2f68 201c
.org 0xa2f6a
	bl 0x128f80	@ 000a2f6a 86f009f8
.org 0xa2f6e
	b.n 0xa2f7c	@ 000a2f6e 05e0
.org 0xa2f70
	.byte 0x64,0x1d,0x86,0x08	@ 000a2f70 data
.org 0xa2f74
	ldr r0, [r6, #84]	@ 000a2f74 706d
