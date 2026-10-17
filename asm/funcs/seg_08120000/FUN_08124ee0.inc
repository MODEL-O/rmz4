@ FUN_08124ee0  entry 0x08124ee0  size 366
.thumb
.org 0x124ee0
FUN_08124ee0:
	push {r4, r5, r6, r7, lr}	@ 00124ee0 f0b5
.org 0x124ee2
	sub sp, #8	@ 00124ee2 82b0
.org 0x124ee4
	adds r6, r0, #0	@ 00124ee4 061c
.org 0x124ee6
	ldr r1, [pc, #80]	@ 00124ee6 1449
.org 0x124ee8
	ldr r0, [pc, #80]	@ 00124ee8 1448
.org 0x124eea
	adds r4, r6, r0	@ 00124eea 3418
.org 0x124eec
	ldrb r0, [r4, #24]	@ 00124eec 207e
.org 0x124eee
	lsls r0, r0, #2	@ 00124eee 8000
.org 0x124ef0
	adds r0, r0, r1	@ 00124ef0 4018
.org 0x124ef2
	ldr r1, [r0, #0]	@ 00124ef2 0168
.org 0x124ef4
	adds r0, r6, #0	@ 00124ef4 301c
.org 0x124ef6
	bl 0x128f80	@ 00124ef6 04f043f8
.org 0x124efa
	adds r7, r0, #0	@ 00124efa 071c
.org 0x124efc
	ldr r0, [r4, #0]	@ 00124efc 2068
.org 0x124efe
	adds r0, #140	@ 00124efe 8c30
.org 0x124f00
	ldr r0, [r0, #0]	@ 00124f00 0068
.org 0x124f02
	movs r1, #1	@ 00124f02 0121
.org 0x124f04
	ands r0, r1	@ 00124f04 0840
.org 0x124f06
	cmp r0, #0	@ 00124f06 0028
.org 0x124f08
	beq.n 0x124f18	@ 00124f08 06d0
.org 0x124f0a
	ldr r0, [r4, #20]	@ 00124f0a 6069
.org 0x124f0c
	subs r0, #180	@ 00124f0c b438
.org 0x124f0e
	str r0, [r4, #20]	@ 00124f0e 6061
.org 0x124f10
	cmp r0, #0	@ 00124f10 0028
.org 0x124f12
	bge.n 0x124f18	@ 00124f12 01da
.org 0x124f14
	movs r0, #0	@ 00124f14 0020
.org 0x124f16
	str r0, [r4, #20]	@ 00124f16 6061
.org 0x124f18
	ldr r2, [pc, #32]	@ 00124f18 084a
.org 0x124f1a
	adds r3, r6, r2	@ 00124f1a b318
.org 0x124f1c
	ldr r0, [r3, #0]	@ 00124f1c 1868
.org 0x124f1e
	adds r0, #164	@ 00124f1e a430
.org 0x124f20
	movs r1, #16	@ 00124f20 1021
.org 0x124f22
	strh r1, [r0, #0]	@ 00124f22 0180
.org 0x124f24
	ldr r1, [r3, #12]	@ 00124f24 d968
.org 0x124f26
	ldr r2, [r3, #8]	@ 00124f26 9a68
.org 0x124f28
	cmp r1, r2	@ 00124f28 9142
.org 0x124f2a
	bge.n 0x124f4a	@ 00124f2a 0eda
.org 0x124f2c
	subs r0, r2, r1	@ 00124f2c 501a
.org 0x124f2e
	cmp r0, #9	@ 00124f2e 0928
.org 0x124f30
	bgt.n 0x124f40	@ 00124f30 06dc
.org 0x124f32
	adds r0, r1, #1	@ 00124f32 481c
.org 0x124f34
	str r0, [r3, #12]	@ 00124f34 d860
.org 0x124f36
	b.n 0x124f4a	@ 00124f36 08e0
.org 0x124f38
	.byte 0xf4,0x23,0x88,0x08	@ 00124f38 data
.org 0x124f3c
	.byte 0xcc,0x0d,0x00,0x00	@ 00124f3c data
.org 0x124f40
	adds r0, r1, #2	@ 00124f40 881c
.org 0x124f42
	str r0, [r3, #12]	@ 00124f42 d860
.org 0x124f44
	cmp r0, r2	@ 00124f44 9042
.org 0x124f46
	ble.n 0x124f4a	@ 00124f46 00dd
.org 0x124f48
	str r2, [r3, #12]	@ 00124f48 da60
.org 0x124f4a
	ldr r0, [pc, #184]	@ 00124f4a 2e48
.org 0x124f4c
	adds r5, r6, r0	@ 00124f4c 3518
.org 0x124f4e
	ldr r0, [r5, #16]	@ 00124f4e 2869
.org 0x124f50
	ldr r1, [r5, #8]	@ 00124f50 a968
.org 0x124f52
	cmp r0, r1	@ 00124f52 8842
.org 0x124f54
	bge.n 0x124f58	@ 00124f54 00da
.org 0x124f56
	str r1, [r5, #16]	@ 00124f56 2961
.org 0x124f58
	ldr r0, [pc, #172]	@ 00124f58 2b48
.org 0x124f5a
	movs r1, #1	@ 00124f5a 0121
.org 0x124f5c
	movs r2, #0	@ 00124f5c 0022
.org 0x124f5e
	bl 0x10da2c	@ 00124f5e e8f765fd
.org 0x124f62
	ldr r0, [r5, #12]	@ 00124f62 e868
.org 0x124f64
	movs r1, #11	@ 00124f64 0b21
.org 0x124f66
	movs r2, #0	@ 00124f66 0022
.org 0x124f68
	bl 0x10dae0	@ 00124f68 e8f7bafd
.org 0x124f6c
	ldr r0, [pc, #156]	@ 00124f6c 2748
.org 0x124f6e
	movs r1, #15	@ 00124f6e 0f21
.org 0x124f70
	movs r2, #0	@ 00124f70 0022
.org 0x124f72
	bl 0x10da2c	@ 00124f72 e8f75bfd
.org 0x124f76
	ldr r0, [r5, #16]	@ 00124f76 2869
.org 0x124f78
	movs r1, #28	@ 00124f78 1c21
.org 0x124f7a
	movs r2, #0	@ 00124f7a 0022
.org 0x124f7c
	bl 0x10dae0	@ 00124f7c e8f7b0fd
.org 0x124f80
	ldr r0, [pc, #140]	@ 00124f80 2348
.org 0x124f82
	movs r1, #9	@ 00124f82 0921
.org 0x124f84
	movs r2, #18	@ 00124f84 1222
.org 0x124f86
	bl 0x10da2c	@ 00124f86 e8f751fd
.org 0x124f8a
	ldr r0, [r5, #20]	@ 00124f8a 6869
.org 0x124f8c
	movs r1, #60	@ 00124f8c 3c21
.org 0x124f8e
	bl 0x128fb8	@ 00124f8e 04f013f8
.org 0x124f92
	movs r1, #15	@ 00124f92 0f21
.org 0x124f94
	movs r2, #18	@ 00124f94 1222
.org 0x124f96
	bl 0x10dae0	@ 00124f96 e8f7a3fd
.org 0x124f9a
	ldr r0, [pc, #120]	@ 00124f9a 1e48
.org 0x124f9c
	movs r1, #16	@ 00124f9c 1021
.org 0x124f9e
	movs r2, #18	@ 00124f9e 1222
.org 0x124fa0
	bl 0x10da2c	@ 00124fa0 e8f744fd
.org 0x124fa4
	ldr r0, [r5, #20]	@ 00124fa4 6869
.org 0x124fa6
	movs r1, #60	@ 00124fa6 3c21
.org 0x124fa8
	bl 0x129050	@ 00124fa8 04f052f8
.org 0x124fac
	movs r1, #166	@ 00124fac a621
.org 0x124fae
	muls r0, r1	@ 00124fae 4843
.org 0x124fb0
	movs r1, #100	@ 00124fb0 6421
.org 0x124fb2
	bl 0x128fb8	@ 00124fb2 04f001f8
.org 0x124fb6
	adds r4, r0, #0	@ 00124fb6 041c
.org 0x124fb8
	lsls r4, r4, #24	@ 00124fb8 2406
.org 0x124fba
	lsrs r4, r4, #24	@ 00124fba 240e
.org 0x124fbc
	adds r0, r4, #0	@ 00124fbc 201c
.org 0x124fbe
	movs r1, #18	@ 00124fbe 1221
.org 0x124fc0
	movs r2, #18	@ 00124fc0 1222
.org 0x124fc2
	bl 0x10dae0	@ 00124fc2 e8f78dfd
.org 0x124fc6
	cmp r4, #9	@ 00124fc6 092c
.org 0x124fc8
	bhi.n 0x124fd4	@ 00124fc8 04d8
.org 0x124fca
	movs r0, #0	@ 00124fca 0020
.org 0x124fcc
	movs r1, #17	@ 00124fcc 1121
.org 0x124fce
	movs r2, #18	@ 00124fce 1222
.org 0x124fd0
	bl 0x10dae0	@ 00124fd0 e8f786fd
.org 0x124fd4
	ldr r0, [r5, #48]	@ 00124fd4 286b
.org 0x124fd6
	cmp r0, #40	@ 00124fd6 2828
.org 0x124fd8
	bls.n 0x12503e	@ 00124fd8 31d9
.org 0x124fda
	ldr r2, [pc, #60]	@ 00124fda 0f4a
.org 0x124fdc
	adds r1, r6, r2	@ 00124fdc b118
.org 0x124fde
	ldr r0, [r1, #4]	@ 00124fde 4868
.org 0x124fe0
	ldr r2, [pc, #56]	@ 00124fe0 0e4a
.org 0x124fe2
	adds r0, r0, r2	@ 00124fe2 8018
.org 0x124fe4
	str r0, [sp, #4]	@ 00124fe4 0190
.org 0x124fe6
	ldr r0, [r5, #0]	@ 00124fe6 2868
.org 0x124fe8
	ldr r0, [r0, #84]	@ 00124fe8 406d
.org 0x124fea
	ldr r1, [r1, #0]	@ 00124fea 0968
.org 0x124fec
	cmp r0, r1	@ 00124fec 8842
.org 0x124fee
	ble.n 0x125024	@ 00124fee 19dd
.org 0x124ff0
	ldr r2, [pc, #44]	@ 00124ff0 0b4a
.org 0x124ff2
	adds r0, r1, r2	@ 00124ff2 8818
.org 0x124ff4
	str r0, [sp, #0]	@ 00124ff4 0090
.org 0x124ff6
	movs r1, #128	@ 00124ff6 8021
.org 0x124ff8
	lsls r1, r1, #1	@ 00124ff8 4900
.org 0x124ffa
	mov r0, sp	@ 00124ffa 6846
.org 0x124ffc
	adds r2, r6, #0	@ 00124ffc 321c
.org 0x124ffe
	bl 0xbd0bc	@ 00124ffe 98f75df8
.org 0x125002
	b.n 0x125036	@ 00125002 18e0
.org 0x125004
	.byte 0xcc,0x0d,0x00,0x00	@ 00125004 data
.org 0x125008
	.byte 0x24,0x97,0x13,0x08	@ 00125008 data
.org 0x12500c
	.byte 0x2c,0x97,0x13,0x08	@ 0012500c data
.org 0x125010
	.byte 0x38,0x97,0x13,0x08	@ 00125010 data
.org 0x125014
	.byte 0x40,0x97,0x13,0x08	@ 00125014 data
.org 0x125018
	.byte 0xc4,0x0d,0x00,0x00	@ 00125018 data
.org 0x12501c
	.byte 0x00,0xd0,0xff,0xff	@ 0012501c data
.org 0x125020
	.byte 0x00,0x74,0xff,0xff	@ 00125020 data
.org 0x125024
	movs r2, #140	@ 00125024 8c22
.org 0x125026
	lsls r2, r2, #8	@ 00125026 1202
.org 0x125028
	adds r0, r1, r2	@ 00125028 8818
.org 0x12502a
	str r0, [sp, #0]	@ 0012502a 0090
.org 0x12502c
	mov r0, sp	@ 0012502c 6846
.org 0x12502e
	movs r1, #0	@ 0012502e 0021
.org 0x125030
	adds r2, r6, #0	@ 00125030 321c
.org 0x125032
	bl 0xbd0bc	@ 00125032 98f743f8
.org 0x125036
	ldr r0, [pc, #40]	@ 00125036 0a48
.org 0x125038
	adds r1, r6, r0	@ 00125038 3118
.org 0x12503a
	movs r0, #0	@ 0012503a 0020
.org 0x12503c
	str r0, [r1, #48]	@ 0012503c 0863
.org 0x12503e
	ldr r2, [pc, #32]	@ 0012503e 084a
.org 0x125040
	adds r4, r6, r2	@ 00125040 b418
.org 0x125042
	ldr r1, [r4, #44]	@ 00125042 e16a
.org 0x125044
	cmp r1, #0	@ 00125044 0029
.org 0x125046
	bne.n 0x125068	@ 00125046 0fd1
.org 0x125048
	str r1, [r4, #40]	@ 00125048 a162
.org 0x12504a
	ldr r2, [r4, #20]	@ 0012504a 6269
.org 0x12504c
	movs r0, #150	@ 0012504c 9620
