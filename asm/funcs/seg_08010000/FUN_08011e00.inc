@ FUN_08011e00  entry 0x08011e00  size 368
.thumb
.org 0x11e00
FUN_08011e00:
	push {lr}	@ 00011e00 00b5
.org 0x11e02
	ldr r2, [pc, #56]	@ 00011e02 0e4a
.org 0x11e04
	ldr r1, [pc, #56]	@ 00011e04 0e49
.org 0x11e06
	adds r0, r2, r1	@ 00011e06 5018
.org 0x11e08
	ldrh r1, [r0, #0]	@ 00011e08 0188
.org 0x11e0a
	lsrs r0, r1, #8	@ 00011e0a 080a
.org 0x11e0c
	cmp r0, #6	@ 00011e0c 0628
.org 0x11e0e
	bne.n 0x11e48	@ 00011e0e 1bd1
.org 0x11e10
	movs r0, #255	@ 00011e10 ff20
.org 0x11e12
	ands r0, r1	@ 00011e12 0840
.org 0x11e14
	cmp r0, #1	@ 00011e14 0128
.org 0x11e16
	bne.n 0x11e48	@ 00011e16 17d1
.org 0x11e18
	ldr r1, [pc, #40]	@ 00011e18 0a49
.org 0x11e1a
	adds r2, r2, r1	@ 00011e1a 5218
.org 0x11e1c
	ldrb r1, [r2, #0]	@ 00011e1c 1178
.org 0x11e1e
	ands r0, r1	@ 00011e1e 0840
.org 0x11e20
	cmp r0, #0	@ 00011e20 0028
.org 0x11e22
	bne.n 0x11e32	@ 00011e22 06d1
.org 0x11e24
	movs r0, #1	@ 00011e24 0120
.org 0x11e26
	orrs r0, r1	@ 00011e26 0843
.org 0x11e28
	strb r0, [r2, #0]	@ 00011e28 1070
.org 0x11e2a
	movs r0, #94	@ 00011e2a 5e20
.org 0x11e2c
	movs r1, #0	@ 00011e2c 0021
.org 0x11e2e
	bl 0x249c	@ 00011e2e f0f735fb
.org 0x11e32
	movs r0, #94	@ 00011e32 5e20
.org 0x11e34
	bl 0x25d8	@ 00011e34 f0f7d0fb
.org 0x11e38
	b.n 0x11e64	@ 00011e38 14e0
.org 0x11e3a
	.byte 0x00	@ 00011e3a data
.org 0x11e3b
	.byte 0x00	@ 00011e3b data
.org 0x11e3c
	.byte 0xb0,0x0a,0x00,0x02	@ 00011e3c data
.org 0x11e40
	.byte 0xd6,0x07,0x00,0x00	@ 00011e40 data
.org 0x11e44
	.byte 0x28,0xd0,0x02,0x00	@ 00011e44 data
.org 0x11e48
	ldr r0, [pc, #80]	@ 00011e48 1448
.org 0x11e4a
	ldr r1, [pc, #84]	@ 00011e4a 1549
.org 0x11e4c
	adds r2, r0, r1	@ 00011e4c 4218
.org 0x11e4e
	ldrb r1, [r2, #0]	@ 00011e4e 1178
.org 0x11e50
	movs r0, #1	@ 00011e50 0120
.org 0x11e52
	ands r0, r1	@ 00011e52 0840
.org 0x11e54
	cmp r0, #0	@ 00011e54 0028
.org 0x11e56
	beq.n 0x11e64	@ 00011e56 05d0
.org 0x11e58
	movs r0, #1	@ 00011e58 0120
.org 0x11e5a
	eors r0, r1	@ 00011e5a 4840
.org 0x11e5c
	strb r0, [r2, #0]	@ 00011e5c 1070
.org 0x11e5e
	movs r0, #94	@ 00011e5e 5e20
.org 0x11e60
	bl 0x2624	@ 00011e60 f0f7e0fb
.org 0x11e64
	ldr r2, [pc, #52]	@ 00011e64 0d4a
.org 0x11e66
	ldr r1, [pc, #60]	@ 00011e66 0f49
.org 0x11e68
	adds r0, r2, r1	@ 00011e68 5018
.org 0x11e6a
	ldrh r1, [r0, #0]	@ 00011e6a 0188
.org 0x11e6c
	lsrs r0, r1, #8	@ 00011e6c 080a
.org 0x11e6e
	cmp r0, #6	@ 00011e6e 0628
.org 0x11e70
	bne.n 0x11ea8	@ 00011e70 1ad1
.org 0x11e72
	movs r0, #255	@ 00011e72 ff20
.org 0x11e74
	ands r0, r1	@ 00011e74 0840
.org 0x11e76
	cmp r0, #2	@ 00011e76 0228
.org 0x11e78
	bne.n 0x11ea8	@ 00011e78 16d1
.org 0x11e7a
	ldr r1, [pc, #36]	@ 00011e7a 0949
.org 0x11e7c
	adds r2, r2, r1	@ 00011e7c 5218
.org 0x11e7e
	ldrb r1, [r2, #0]	@ 00011e7e 1178
.org 0x11e80
	ands r0, r1	@ 00011e80 0840
.org 0x11e82
	cmp r0, #0	@ 00011e82 0028
.org 0x11e84
	bne.n 0x11e94	@ 00011e84 06d1
.org 0x11e86
	movs r0, #2	@ 00011e86 0220
.org 0x11e88
	orrs r0, r1	@ 00011e88 0843
.org 0x11e8a
	strb r0, [r2, #0]	@ 00011e8a 1070
.org 0x11e8c
	movs r0, #95	@ 00011e8c 5f20
.org 0x11e8e
	movs r1, #0	@ 00011e8e 0021
.org 0x11e90
	bl 0x249c	@ 00011e90 f0f704fb
.org 0x11e94
	movs r0, #95	@ 00011e94 5f20
.org 0x11e96
	bl 0x25d8	@ 00011e96 f0f79ffb
.org 0x11e9a
	b.n 0x11ec4	@ 00011e9a 13e0
.org 0x11e9c
	.byte 0xb0,0x0a,0x00,0x02	@ 00011e9c data
.org 0x11ea0
	.byte 0x28,0xd0,0x02,0x00	@ 00011ea0 data
.org 0x11ea4
	.byte 0xd4,0x07,0x00,0x00	@ 00011ea4 data
.org 0x11ea8
	ldr r0, [pc, #120]	@ 00011ea8 1e48
.org 0x11eaa
	ldr r1, [pc, #124]	@ 00011eaa 1f49
.org 0x11eac
	adds r2, r0, r1	@ 00011eac 4218
.org 0x11eae
	ldrb r1, [r2, #0]	@ 00011eae 1178
.org 0x11eb0
	movs r0, #2	@ 00011eb0 0220
.org 0x11eb2
	ands r0, r1	@ 00011eb2 0840
.org 0x11eb4
	cmp r0, #0	@ 00011eb4 0028
.org 0x11eb6
	beq.n 0x11ec4	@ 00011eb6 05d0
.org 0x11eb8
	movs r0, #2	@ 00011eb8 0220
.org 0x11eba
	eors r0, r1	@ 00011eba 4840
.org 0x11ebc
	strb r0, [r2, #0]	@ 00011ebc 1070
.org 0x11ebe
	movs r0, #95	@ 00011ebe 5f20
.org 0x11ec0
	bl 0x2624	@ 00011ec0 f0f7b0fb
.org 0x11ec4
	ldr r2, [pc, #92]	@ 00011ec4 174a
.org 0x11ec6
	ldr r1, [pc, #100]	@ 00011ec6 1949
.org 0x11ec8
	adds r0, r2, r1	@ 00011ec8 5018
.org 0x11eca
	ldrh r1, [r0, #0]	@ 00011eca 0188
.org 0x11ecc
	lsrs r0, r1, #8	@ 00011ecc 080a
.org 0x11ece
	cmp r0, #6	@ 00011ece 0628
.org 0x11ed0
	bne.n 0x11f34	@ 00011ed0 30d1
.org 0x11ed2
	movs r3, #255	@ 00011ed2 ff23
.org 0x11ed4
	adds r0, r3, #0	@ 00011ed4 181c
.org 0x11ed6
	ands r0, r1	@ 00011ed6 0840
.org 0x11ed8
	cmp r0, #2	@ 00011ed8 0228
.org 0x11eda
	bne.n 0x11f34	@ 00011eda 2bd1
.org 0x11edc
	ldr r1, [pc, #80]	@ 00011edc 1449
.org 0x11ede
	adds r0, r2, r1	@ 00011ede 5018
.org 0x11ee0
	ldrh r1, [r0, #0]	@ 00011ee0 0188
.org 0x11ee2
	lsrs r0, r1, #8	@ 00011ee2 080a
.org 0x11ee4
	cmp r0, #6	@ 00011ee4 0628
.org 0x11ee6
	bne.n 0x11ef0	@ 00011ee6 03d1
.org 0x11ee8
	adds r0, r3, #0	@ 00011ee8 181c
.org 0x11eea
	ands r0, r1	@ 00011eea 0840
.org 0x11eec
	cmp r0, #6	@ 00011eec 0628
.org 0x11eee
	beq.n 0x11f34	@ 00011eee 21d0
.org 0x11ef0
	ldr r0, [pc, #52]	@ 00011ef0 0d48
.org 0x11ef2
	adds r2, r2, r0	@ 00011ef2 1218
.org 0x11ef4
	ldrb r1, [r2, #0]	@ 00011ef4 1178
.org 0x11ef6
	movs r0, #4	@ 00011ef6 0420
.org 0x11ef8
	ands r0, r1	@ 00011ef8 0840
.org 0x11efa
	cmp r0, #0	@ 00011efa 0028
.org 0x11efc
	bne.n 0x11f16	@ 00011efc 0bd1
.org 0x11efe
	movs r0, #4	@ 00011efe 0420
.org 0x11f00
	orrs r0, r1	@ 00011f00 0843
.org 0x11f02
	strb r0, [r2, #0]	@ 00011f02 1070
.org 0x11f04
	movs r0, #113	@ 00011f04 7120
.org 0x11f06
	movs r1, #0	@ 00011f06 0021
.org 0x11f08
	bl 0x249c	@ 00011f08 f0f7c8fa
.org 0x11f0c
	movs r1, #176	@ 00011f0c b021
.org 0x11f0e
	lsls r1, r1, #2	@ 00011f0e 8900
.org 0x11f10
	movs r0, #134	@ 00011f10 8620
.org 0x11f12
	bl 0x249c	@ 00011f12 f0f7c3fa
.org 0x11f16
	movs r0, #113	@ 00011f16 7120
.org 0x11f18
	bl 0x25d8	@ 00011f18 f0f75efb
.org 0x11f1c
	movs r0, #134	@ 00011f1c 8620
.org 0x11f1e
	bl 0x25d8	@ 00011f1e f0f75bfb
.org 0x11f22
	b.n 0x11f56	@ 00011f22 18e0
.org 0x11f24
	.byte 0xb0,0x0a,0x00,0x02	@ 00011f24 data
.org 0x11f28
	.byte 0x28,0xd0,0x02,0x00	@ 00011f28 data
.org 0x11f2c
	.byte 0xd4,0x07,0x00,0x00	@ 00011f2c data
.org 0x11f30
	.byte 0xd6,0x07,0x00,0x00	@ 00011f30 data
.org 0x11f34
	ldr r0, [pc, #100]	@ 00011f34 1948
.org 0x11f36
	ldr r1, [pc, #104]	@ 00011f36 1a49
.org 0x11f38
	adds r2, r0, r1	@ 00011f38 4218
.org 0x11f3a
	ldrb r1, [r2, #0]	@ 00011f3a 1178
.org 0x11f3c
	movs r0, #4	@ 00011f3c 0420
.org 0x11f3e
	ands r0, r1	@ 00011f3e 0840
.org 0x11f40
	cmp r0, #0	@ 00011f40 0028
.org 0x11f42
	beq.n 0x11f56	@ 00011f42 08d0
.org 0x11f44
	movs r0, #4	@ 00011f44 0420
.org 0x11f46
	eors r0, r1	@ 00011f46 4840
.org 0x11f48
	strb r0, [r2, #0]	@ 00011f48 1070
.org 0x11f4a
	movs r0, #113	@ 00011f4a 7120
.org 0x11f4c
	bl 0x2624	@ 00011f4c f0f76afb
.org 0x11f50
	movs r0, #134	@ 00011f50 8620
.org 0x11f52
	bl 0x2624	@ 00011f52 f0f767fb
.org 0x11f56
	ldr r2, [pc, #68]	@ 00011f56 114a
.org 0x11f58
	ldr r1, [pc, #72]	@ 00011f58 1249
.org 0x11f5a
	adds r0, r2, r1	@ 00011f5a 5018
.org 0x11f5c
	ldrh r1, [r0, #0]	@ 00011f5c 0188
.org 0x11f5e
	lsrs r0, r1, #8	@ 00011f5e 080a
.org 0x11f60
	cmp r0, #6	@ 00011f60 0628
.org 0x11f62
	bne.n 0x11f96	@ 00011f62 18d1
.org 0x11f64
	movs r0, #255	@ 00011f64 ff20
.org 0x11f66
	ands r0, r1	@ 00011f66 0840
.org 0x11f68
	cmp r0, #1	@ 00011f68 0128
.org 0x11f6a
	bne.n 0x11f96	@ 00011f6a 14d1
.org 0x11f6c
	ldr r0, [pc, #56]	@ 00011f6c 0e48
.org 0x11f6e
	adds r1, r2, r0	@ 00011f6e 1118
