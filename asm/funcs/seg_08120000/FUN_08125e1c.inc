@ FUN_08125e1c  entry 0x08125e1c  size 288
.thumb
.org 0x125e1c
FUN_08125e1c:
	push {r4, r5, r6, lr}	@ 00125e1c 70b5
.org 0x125e1e
	adds r5, r0, #0	@ 00125e1e 051c
.org 0x125e20
	ldr r0, [pc, #80]	@ 00125e20 1448
.org 0x125e22
	adds r2, r5, r0	@ 00125e22 2a18
.org 0x125e24
	ldr r0, [r2, #0]	@ 00125e24 1068
.org 0x125e26
	adds r0, #140	@ 00125e26 8c30
.org 0x125e28
	ldr r0, [r0, #0]	@ 00125e28 0068
.org 0x125e2a
	movs r1, #1	@ 00125e2a 0121
.org 0x125e2c
	ands r0, r1	@ 00125e2c 0840
.org 0x125e2e
	cmp r0, #0	@ 00125e2e 0028
.org 0x125e30
	beq.n 0x125e40	@ 00125e30 06d0
.org 0x125e32
	ldr r0, [r2, #20]	@ 00125e32 5069
.org 0x125e34
	subs r0, #180	@ 00125e34 b438
.org 0x125e36
	str r0, [r2, #20]	@ 00125e36 5061
.org 0x125e38
	cmp r0, #0	@ 00125e38 0028
.org 0x125e3a
	bge.n 0x125e40	@ 00125e3a 01da
.org 0x125e3c
	movs r0, #0	@ 00125e3c 0020
.org 0x125e3e
	str r0, [r2, #20]	@ 00125e3e 5061
.org 0x125e40
	ldr r1, [pc, #52]	@ 00125e40 0d49
.org 0x125e42
	ldr r0, [pc, #48]	@ 00125e42 0c48
.org 0x125e44
	adds r4, r5, r0	@ 00125e44 2c18
.org 0x125e46
	ldrb r0, [r4, #24]	@ 00125e46 207e
.org 0x125e48
	lsls r0, r0, #2	@ 00125e48 8000
.org 0x125e4a
	adds r0, r0, r1	@ 00125e4a 4018
.org 0x125e4c
	ldr r1, [r0, #0]	@ 00125e4c 0168
.org 0x125e4e
	adds r0, r5, #0	@ 00125e4e 281c
.org 0x125e50
	bl 0x128f80	@ 00125e50 03f096f8
.org 0x125e54
	adds r6, r0, #0	@ 00125e54 061c
.org 0x125e56
	ldr r0, [r4, #0]	@ 00125e56 2068
.org 0x125e58
	adds r0, #164	@ 00125e58 a430
.org 0x125e5a
	movs r1, #16	@ 00125e5a 1021
.org 0x125e5c
	strh r1, [r0, #0]	@ 00125e5c 0180
.org 0x125e5e
	ldr r1, [r4, #12]	@ 00125e5e e168
.org 0x125e60
	ldr r2, [r4, #8]	@ 00125e60 a268
.org 0x125e62
	cmp r1, r2	@ 00125e62 9142
.org 0x125e64
	bge.n 0x125e86	@ 00125e64 0fda
.org 0x125e66
	subs r0, r2, r1	@ 00125e66 501a
.org 0x125e68
	cmp r0, #9	@ 00125e68 0928
.org 0x125e6a
	bgt.n 0x125e7c	@ 00125e6a 07dc
.org 0x125e6c
	adds r0, r1, #1	@ 00125e6c 481c
.org 0x125e6e
	str r0, [r4, #12]	@ 00125e6e e060
.org 0x125e70
	b.n 0x125e86	@ 00125e70 09e0
.org 0x125e72
	.byte 0x00	@ 00125e72 data
.org 0x125e73
	.byte 0x00	@ 00125e73 data
.org 0x125e74
	.byte 0xcc,0x0d,0x00,0x00	@ 00125e74 data
.org 0x125e78
	.byte 0x0c,0x24,0x88,0x08	@ 00125e78 data
.org 0x125e7c
	adds r0, r1, #2	@ 00125e7c 881c
.org 0x125e7e
	str r0, [r4, #12]	@ 00125e7e e060
.org 0x125e80
	cmp r0, r2	@ 00125e80 9042
.org 0x125e82
	ble.n 0x125e86	@ 00125e82 00dd
.org 0x125e84
	str r2, [r4, #12]	@ 00125e84 e260
.org 0x125e86
	ldr r0, [pc, #180]	@ 00125e86 2d48
.org 0x125e88
	adds r5, r5, r0	@ 00125e88 2d18
.org 0x125e8a
	ldr r0, [r5, #16]	@ 00125e8a 2869
.org 0x125e8c
	ldr r1, [r5, #8]	@ 00125e8c a968
.org 0x125e8e
	cmp r0, r1	@ 00125e8e 8842
.org 0x125e90
	bge.n 0x125e94	@ 00125e90 00da
.org 0x125e92
	str r1, [r5, #16]	@ 00125e92 2961
.org 0x125e94
	ldr r0, [pc, #168]	@ 00125e94 2a48
.org 0x125e96
	movs r1, #1	@ 00125e96 0121
.org 0x125e98
	movs r2, #0	@ 00125e98 0022
.org 0x125e9a
	bl 0x10da2c	@ 00125e9a e7f7c7fd
.org 0x125e9e
	ldr r0, [r5, #12]	@ 00125e9e e868
.org 0x125ea0
	movs r1, #11	@ 00125ea0 0b21
.org 0x125ea2
	movs r2, #0	@ 00125ea2 0022
.org 0x125ea4
	bl 0x10dae0	@ 00125ea4 e7f71cfe
.org 0x125ea8
	ldr r0, [pc, #152]	@ 00125ea8 2648
.org 0x125eaa
	movs r1, #15	@ 00125eaa 0f21
.org 0x125eac
	movs r2, #0	@ 00125eac 0022
.org 0x125eae
	bl 0x10da2c	@ 00125eae e7f7bdfd
.org 0x125eb2
	ldr r0, [r5, #16]	@ 00125eb2 2869
.org 0x125eb4
	movs r1, #28	@ 00125eb4 1c21
.org 0x125eb6
	movs r2, #0	@ 00125eb6 0022
.org 0x125eb8
	bl 0x10dae0	@ 00125eb8 e7f712fe
.org 0x125ebc
	ldr r0, [pc, #136]	@ 00125ebc 2248
.org 0x125ebe
	movs r1, #9	@ 00125ebe 0921
.org 0x125ec0
	movs r2, #18	@ 00125ec0 1222
.org 0x125ec2
	bl 0x10da2c	@ 00125ec2 e7f7b3fd
.org 0x125ec6
	ldr r0, [r5, #20]	@ 00125ec6 6869
.org 0x125ec8
	movs r1, #60	@ 00125ec8 3c21
.org 0x125eca
	bl 0x128fb8	@ 00125eca 03f075f8
.org 0x125ece
	movs r1, #15	@ 00125ece 0f21
.org 0x125ed0
	movs r2, #18	@ 00125ed0 1222
.org 0x125ed2
	bl 0x10dae0	@ 00125ed2 e7f705fe
.org 0x125ed6
	ldr r0, [pc, #116]	@ 00125ed6 1d48
.org 0x125ed8
	movs r1, #16	@ 00125ed8 1021
.org 0x125eda
	movs r2, #18	@ 00125eda 1222
.org 0x125edc
	bl 0x10da2c	@ 00125edc e7f7a6fd
.org 0x125ee0
	ldr r0, [r5, #20]	@ 00125ee0 6869
.org 0x125ee2
	movs r1, #60	@ 00125ee2 3c21
.org 0x125ee4
	bl 0x129050	@ 00125ee4 03f0b4f8
.org 0x125ee8
	movs r1, #166	@ 00125ee8 a621
.org 0x125eea
	muls r0, r1	@ 00125eea 4843
.org 0x125eec
	movs r1, #100	@ 00125eec 6421
.org 0x125eee
	bl 0x128fb8	@ 00125eee 03f063f8
.org 0x125ef2
	adds r4, r0, #0	@ 00125ef2 041c
.org 0x125ef4
	lsls r4, r4, #24	@ 00125ef4 2406
.org 0x125ef6
	lsrs r4, r4, #24	@ 00125ef6 240e
.org 0x125ef8
	adds r0, r4, #0	@ 00125ef8 201c
.org 0x125efa
	movs r1, #18	@ 00125efa 1221
.org 0x125efc
	movs r2, #18	@ 00125efc 1222
.org 0x125efe
	bl 0x10dae0	@ 00125efe e7f7effd
.org 0x125f02
	cmp r4, #9	@ 00125f02 092c
.org 0x125f04
	bhi.n 0x125f10	@ 00125f04 04d8
.org 0x125f06
	movs r0, #0	@ 00125f06 0020
.org 0x125f08
	movs r1, #17	@ 00125f08 1121
.org 0x125f0a
	movs r2, #18	@ 00125f0a 1222
.org 0x125f0c
	bl 0x10dae0	@ 00125f0c e7f7e8fd
.org 0x125f10
	ldr r0, [r5, #44]	@ 00125f10 e86a
.org 0x125f12
	cmp r0, #1	@ 00125f12 0128
.org 0x125f14
	bne.n 0x125f56	@ 00125f14 1fd1
.org 0x125f16
	ldr r0, [r5, #48]	@ 00125f16 286b
.org 0x125f18
	cmp r0, #0	@ 00125f18 0028
.org 0x125f1a
	beq.n 0x125f54	@ 00125f1a 1bd0
.org 0x125f1c
	ldr r0, [pc, #48]	@ 00125f1c 0c48
.org 0x125f1e
	movs r1, #16	@ 00125f1e 1021
.org 0x125f20
	movs r2, #8	@ 00125f20 0822
.org 0x125f22
	bl 0x10da2c	@ 00125f22 e7f783fd
.org 0x125f26
	ldr r1, [r5, #40]	@ 00125f26 a96a
.org 0x125f28
	movs r0, #5	@ 00125f28 0520
.org 0x125f2a
	subs r0, r0, r1	@ 00125f2a 401a
.org 0x125f2c
	movs r1, #17	@ 00125f2c 1121
.org 0x125f2e
	movs r2, #8	@ 00125f2e 0822
.org 0x125f30
	bl 0x10dae0	@ 00125f30 e7f7d6fd
.org 0x125f34
	ldr r0, [r5, #48]	@ 00125f34 286b
.org 0x125f36
	subs r0, #1	@ 00125f36 0138
.org 0x125f38
	str r0, [r5, #48]	@ 00125f38 2863
.org 0x125f3a
	b.n 0x125f56	@ 00125f3a 0ce0
