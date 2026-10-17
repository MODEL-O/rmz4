@ FUN_08074eec  entry 0x08074eec  size 256
.thumb
.org 0x74eec
FUN_08074eec:
	push {r4, r5, lr}	@ 00074eec 30b5
.org 0x74eee
	adds r4, r0, #0	@ 00074eee 041c
.org 0x74ef0
	adds r0, #140	@ 00074ef0 8c30
.org 0x74ef2
	ldr r0, [r0, #0]	@ 00074ef2 0068
.org 0x74ef4
	movs r1, #128	@ 00074ef4 8021
.org 0x74ef6
	lsls r1, r1, #2	@ 00074ef6 8900
.org 0x74ef8
	ands r0, r1	@ 00074ef8 0840
.org 0x74efa
	cmp r0, #0	@ 00074efa 0028
.org 0x74efc
	bne.n 0x74f0a	@ 00074efc 05d1
.org 0x74efe
	adds r0, r4, #0	@ 00074efe 201c
.org 0x74f00
	adds r0, #164	@ 00074f00 a430
.org 0x74f02
	movs r1, #0	@ 00074f02 0021
.org 0x74f04
	ldrsh r0, [r0, r1]	@ 00074f04 405e
.org 0x74f06
	cmp r0, #0	@ 00074f06 0028
.org 0x74f08
	bne.n 0x74f64	@ 00074f08 2cd1
.org 0x74f0a
	ldr r0, [pc, #44]	@ 00074f0a 0b48
.org 0x74f0c
	ldrh r1, [r0, #8]	@ 00074f0c 0189
.org 0x74f0e
	movs r0, #8	@ 00074f0e 0820
.org 0x74f10
	ands r0, r1	@ 00074f10 0840
.org 0x74f12
	lsls r0, r0, #16	@ 00074f12 0004
.org 0x74f14
	lsrs r2, r0, #16	@ 00074f14 020c
.org 0x74f16
	cmp r2, #0	@ 00074f16 002a
.org 0x74f18
	bne.n 0x74f64	@ 00074f18 24d1
.org 0x74f1a
	ldrb r0, [r4, #30]	@ 00074f1a a07f
.org 0x74f1c
	lsls r0, r0, #8	@ 00074f1c 0002
.org 0x74f1e
	adds r1, r4, #0	@ 00074f1e 211c
.org 0x74f20
	adds r1, #112	@ 00074f20 7031
.org 0x74f22
	ldrb r1, [r1, #0]	@ 00074f22 0978
.org 0x74f24
	orrs r0, r1	@ 00074f24 0843
.org 0x74f26
	ldr r1, [pc, #20]	@ 00074f26 0549
.org 0x74f28
	adds r0, r0, r1	@ 00074f28 4018
.org 0x74f2a
	cmp r0, #1	@ 00074f2a 0128
.org 0x74f2c
	bhi.n 0x74f40	@ 00074f2c 08d8
.org 0x74f2e
	adds r1, r4, #0	@ 00074f2e 211c
.org 0x74f30
	adds r1, #223	@ 00074f30 df31
.org 0x74f32
	movs r0, #1	@ 00074f32 0120
.org 0x74f34
	strb r0, [r1, #0]	@ 00074f34 0870
.org 0x74f36
	b.n 0x74f46	@ 00074f36 06e0
.org 0x74f38
	.byte 0x10,0xe9,0x02,0x02	@ 00074f38 data
.org 0x74f3c
	.byte 0xf1,0x50,0xff,0xff	@ 00074f3c data
.org 0x74f40
	adds r0, r4, #0	@ 00074f40 201c
.org 0x74f42
	adds r0, #223	@ 00074f42 df30
.org 0x74f44
	strb r2, [r0, #0]	@ 00074f44 0270
.org 0x74f46
	ldr r1, [pc, #24]	@ 00074f46 0649
.org 0x74f48
	ldrb r0, [r4, #9]	@ 00074f48 607a
.org 0x74f4a
	lsls r0, r0, #2	@ 00074f4a 8000
.org 0x74f4c
	adds r0, r0, r1	@ 00074f4c 4018
.org 0x74f4e
	movs r1, #2	@ 00074f4e 0221
.org 0x74f50
	str r1, [r4, #12]	@ 00074f50 e160
.org 0x74f52
	ldr r0, [r0, #0]	@ 00074f52 0068
.org 0x74f54
	ldr r0, [r0, #8]	@ 00074f54 8068
.org 0x74f56
	str r0, [r4, #20]	@ 00074f56 6061
.org 0x74f58
	adds r0, r4, #0	@ 00074f58 201c
.org 0x74f5a
	bl 0x75008	@ 00074f5a 00f055f8
.org 0x74f5e
	b.n 0x74ff2	@ 00074f5e 48e0
.org 0x74f60
	.byte 0x70,0x7d,0x85,0x08	@ 00074f60 data
.org 0x74f64
	ldr r2, [r4, #44]	@ 00074f64 e26a
.org 0x74f66
	adds r5, r2, #0	@ 00074f66 151c
.org 0x74f68
	cmp r2, #0	@ 00074f68 002a
.org 0x74f6a
	bne.n 0x74f9e	@ 00074f6a 18d1
.org 0x74f6c
	adds r0, r4, #0	@ 00074f6c 201c
.org 0x74f6e
	adds r0, #140	@ 00074f6e 8c30
.org 0x74f70
	ldr r0, [r0, #0]	@ 00074f70 0068
.org 0x74f72
	movs r1, #1	@ 00074f72 0121
.org 0x74f74
	ands r0, r1	@ 00074f74 0840
.org 0x74f76
	cmp r0, #0	@ 00074f76 0028
.org 0x74f78
	beq.n 0x74f86	@ 00074f78 05d0
.org 0x74f7a
	ldr r2, [pc, #124]	@ 00074f7a 1f4a
.org 0x74f7c
	movs r0, #25	@ 00074f7c 1920
.org 0x74f7e
	adds r1, r4, #0	@ 00074f7e 211c
.org 0x74f80
	bl 0x2adac	@ 00074f80 b5f714ff
.org 0x74f84
	str r0, [r4, #44]	@ 00074f84 e062
.org 0x74f86
	ldr r2, [r4, #44]	@ 00074f86 e26a
.org 0x74f88
	cmp r2, #0	@ 00074f88 002a
.org 0x74f8a
	beq.n 0x74fac	@ 00074f8a 0fd0
.org 0x74f8c
	ldr r0, [pc, #108]	@ 00074f8c 1b48
.org 0x74f8e
	ldrb r1, [r4, #13]	@ 00074f8e 617b
.org 0x74f90
	adds r1, r1, r0	@ 00074f90 0918
.org 0x74f92
	ldrb r0, [r1, #0]	@ 00074f92 0878
.org 0x74f94
	cmp r0, #0	@ 00074f94 0028
.org 0x74f96
	beq.n 0x74f9e	@ 00074f96 02d0
.org 0x74f98
	movs r0, #25	@ 00074f98 1920
.org 0x74f9a
	strb r0, [r4, #13]	@ 00074f9a 6073
.org 0x74f9c
	strb r5, [r4, #14]	@ 00074f9c a573
.org 0x74f9e
	adds r0, r2, #0	@ 00074f9e 101c
.org 0x74fa0
	bl 0x2b3e4	@ 00074fa0 b6f720fa
.org 0x74fa4
	cmp r0, #0	@ 00074fa4 0028
.org 0x74fa6
	beq.n 0x74fac	@ 00074fa6 01d0
.org 0x74fa8
	movs r0, #0	@ 00074fa8 0020
.org 0x74faa
	str r0, [r4, #44]	@ 00074faa e062
.org 0x74fac
	adds r5, r4, #0	@ 00074fac 251c
.org 0x74fae
	adds r5, #180	@ 00074fae b435
.org 0x74fb0
	adds r1, r4, #0	@ 00074fb0 211c
.org 0x74fb2
	adds r1, #217	@ 00074fb2 d931
.org 0x74fb4
	movs r0, #0	@ 00074fb4 0020
.org 0x74fb6
	strb r0, [r1, #0]	@ 00074fb6 0870
.org 0x74fb8
	adds r0, r4, #0	@ 00074fb8 201c
.org 0x74fba
	bl 0x751f0	@ 00074fba 00f019f9
.org 0x74fbe
	ldr r1, [pc, #64]	@ 00074fbe 1049
.org 0x74fc0
	ldrb r0, [r4, #13]	@ 00074fc0 607b
.org 0x74fc2
	lsls r0, r0, #2	@ 00074fc2 8000
.org 0x74fc4
	adds r0, r0, r1	@ 00074fc4 4018
.org 0x74fc6
	ldr r1, [r0, #0]	@ 00074fc6 0168
.org 0x74fc8
	adds r0, r4, #0	@ 00074fc8 201c
.org 0x74fca
	bl 0x128f80	@ 00074fca b3f0d9ff
.org 0x74fce
	ldrb r0, [r4, #13]	@ 00074fce 607b
.org 0x74fd0
	cmp r0, #1	@ 00074fd0 0128
.org 0x74fd2
	bls.n 0x74ff2	@ 00074fd2 0ed9
.org 0x74fd4
	ldr r0, [r5, #16]	@ 00074fd4 2869
.org 0x74fd6
	movs r2, #128	@ 00074fd6 8022
.org 0x74fd8
	lsls r2, r2, #5	@ 00074fd8 5201
.org 0x74fda
	adds r1, r0, r2	@ 00074fda 8118
.org 0x74fdc
	ldr r0, [r4, #84]	@ 00074fdc 606d
.org 0x74fde
	cmp r0, r1	@ 00074fde 8842
.org 0x74fe0
	bge.n 0x74fe4	@ 00074fe0 00da
.org 0x74fe2
	str r1, [r4, #84]	@ 00074fe2 6165
.org 0x74fe4
	ldr r0, [r5, #20]	@ 00074fe4 6869
.org 0x74fe6
	ldr r2, [pc, #28]	@ 00074fe6 074a
.org 0x74fe8
	adds r1, r0, r2	@ 00074fe8 8118
.org 0x74fea
	ldr r0, [r4, #84]	@ 00074fea 606d
