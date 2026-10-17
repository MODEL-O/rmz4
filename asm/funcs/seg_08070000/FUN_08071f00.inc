@ FUN_08071f00  entry 0x08071f00  size 212
.thumb
.org 0x71f00
FUN_08071f00:
	push {r4, r5, r6, lr}	@ 00071f00 70b5
.org 0x71f02
	adds r6, r0, #0	@ 00071f02 061c
.org 0x71f04
	ldrb r0, [r6, #15]	@ 00071f04 f07b
.org 0x71f06
	cmp r0, #0	@ 00071f06 0028
.org 0x71f08
	bne.n 0x71f20	@ 00071f08 0ad1
.org 0x71f0a
	adds r0, r6, #0	@ 00071f0a 301c
.org 0x71f0c
	movs r1, #5	@ 00071f0c 0521
.org 0x71f0e
	bl 0x736c4	@ 00071f0e 01f0d9fb
.org 0x71f12
	ldr r0, [pc, #136]	@ 00071f12 2248
.org 0x71f14
	str r0, [r6, #96]	@ 00071f14 3066
.org 0x71f16
	movs r0, #48	@ 00071f16 3020
.org 0x71f18
	str r0, [r6, #104]	@ 00071f18 b066
.org 0x71f1a
	ldrb r0, [r6, #15]	@ 00071f1a f07b
.org 0x71f1c
	adds r0, #1	@ 00071f1c 0130
.org 0x71f1e
	strb r0, [r6, #15]	@ 00071f1e f073
.org 0x71f20
	adds r0, r6, #0	@ 00071f20 301c
.org 0x71f22
	bl 0x1cff0	@ 00071f22 abf765f8
.org 0x71f26
	adds r0, r6, #0	@ 00071f26 301c
.org 0x71f28
	adds r0, #116	@ 00071f28 7430
.org 0x71f2a
	ldr r4, [pc, #116]	@ 00071f2a 1d4c
.org 0x71f2c
	ldr r3, [pc, #116]	@ 00071f2c 1d4b
.org 0x71f2e
	adds r1, r6, #0	@ 00071f2e 311c
.org 0x71f30
	adds r1, #184	@ 00071f30 b831
.org 0x71f32
	ldrb r2, [r1, #0]	@ 00071f32 0a78
.org 0x71f34
	lsls r1, r2, #1	@ 00071f34 5100
.org 0x71f36
	adds r1, r1, r3	@ 00071f36 c918
.org 0x71f38
	ldrh r1, [r1, #0]	@ 00071f38 0988
.org 0x71f3a
	lsls r1, r1, #2	@ 00071f3a 8900
.org 0x71f3c
	adds r1, r1, r4	@ 00071f3c 0919
.org 0x71f3e
	adds r3, r6, #0	@ 00071f3e 331c
.org 0x71f40
	adds r3, #113	@ 00071f40 7133
.org 0x71f42
	movs r5, #0	@ 00071f42 0025
.org 0x71f44
	ldrsb r5, [r3, r5]	@ 00071f44 5d57
.org 0x71f46
	ldr r1, [r1, #0]	@ 00071f46 0968
.org 0x71f48
	lsls r3, r5, #2	@ 00071f48 ab00
.org 0x71f4a
	adds r3, r3, r1	@ 00071f4a 5b18
.org 0x71f4c
	ldr r4, [pc, #88]	@ 00071f4c 164c
.org 0x71f4e
	adds r1, r6, #0	@ 00071f4e 311c
.org 0x71f50
	adds r1, #185	@ 00071f50 b931
.org 0x71f52
	ldrb r1, [r1, #0]	@ 00071f52 0978
.org 0x71f54
	lsls r1, r1, #2	@ 00071f54 8900
.org 0x71f56
	adds r1, r1, r4	@ 00071f56 0919
.org 0x71f58
	ldr r1, [r1, #0]	@ 00071f58 0968
.org 0x71f5a
	lsls r2, r2, #2	@ 00071f5a 9200
.org 0x71f5c
	adds r2, r2, r1	@ 00071f5c 5218
.org 0x71f5e
	ldr r1, [r2, #0]	@ 00071f5e 1168
.org 0x71f60
	adds r1, r1, r5	@ 00071f60 4919
.org 0x71f62
	ldrb r1, [r1, #0]	@ 00071f62 0978
.org 0x71f64
	lsls r2, r1, #1	@ 00071f64 4a00
.org 0x71f66
	adds r2, r2, r1	@ 00071f66 5218
.org 0x71f68
	lsls r2, r2, #3	@ 00071f68 d200
.org 0x71f6a
	ldr r1, [r3, #0]	@ 00071f6a 1968
.org 0x71f6c
	adds r1, r1, r2	@ 00071f6c 8918
.org 0x71f6e
	bl 0x5784	@ 00071f6e 93f709fc
.org 0x71f72
	adds r0, r6, #0	@ 00071f72 301c
.org 0x71f74
	adds r0, #115	@ 00071f74 7330
.org 0x71f76
	ldrb r0, [r0, #0]	@ 00071f76 0078
.org 0x71f78
	cmp r0, #3	@ 00071f78 0328
.org 0x71f7a
	bne.n 0x71fc0	@ 00071f7a 21d1
.org 0x71f7c
	ldr r0, [r6, #88]	@ 00071f7c b06d
.org 0x71f7e
	ldr r1, [r6, #96]	@ 00071f7e 316e
.org 0x71f80
	adds r0, r0, r1	@ 00071f80 4018
.org 0x71f82
	str r0, [r6, #88]	@ 00071f82 b065
.org 0x71f84
	adds r0, r6, #0	@ 00071f84 301c
.org 0x71f86
	bl 0x737e8	@ 00071f86 01f02ffc
.org 0x71f8a
	cmp r0, #0	@ 00071f8a 0028
.org 0x71f8c
	beq.n 0x71fac	@ 00071f8c 0ed0
.org 0x71f8e
	adds r0, r6, #0	@ 00071f8e 301c
.org 0x71f90
	bl 0x739cc	@ 00071f90 01f01cfd
.org 0x71f94
	movs r0, #0	@ 00071f94 0020
.org 0x71f96
	str r0, [r6, #96]	@ 00071f96 3066
.org 0x71f98
	b.n 0x71fc6	@ 00071f98 15e0
.org 0x71f9a
	.byte 0x00	@ 00071f9a data
.org 0x71f9b
	.byte 0x00	@ 00071f9b data
.org 0x71f9c
	.byte 0xb8,0xfb,0xff,0xff	@ 00071f9c data
.org 0x71fa0
	.byte 0x08,0xcb,0x85,0x08	@ 00071fa0 data
.org 0x71fa4
	.byte 0x04,0xcc,0x85,0x08	@ 00071fa4 data
.org 0x71fa8
	.byte 0xfc,0xcb,0x85,0x08	@ 00071fa8 data
.org 0x71fac
	ldr r0, [r6, #96]	@ 00071fac 306e
.org 0x71fae
	ldr r1, [r6, #104]	@ 00071fae b16e
.org 0x71fb0
	adds r0, r0, r1	@ 00071fb0 4018
.org 0x71fb2
	str r0, [r6, #96]	@ 00071fb2 3066
.org 0x71fb4
	movs r1, #224	@ 00071fb4 e021
.org 0x71fb6
	lsls r1, r1, #3	@ 00071fb6 c900
.org 0x71fb8
	cmp r0, r1	@ 00071fb8 8842
.org 0x71fba
	ble.n 0x71fc6	@ 00071fba 04dd
.org 0x71fbc
	str r1, [r6, #96]	@ 00071fbc 3166
.org 0x71fbe
	b.n 0x71fc6	@ 00071fbe 02e0
.org 0x71fc0
	adds r0, r6, #0	@ 00071fc0 301c
.org 0x71fc2
	bl 0x73a68	@ 00071fc2 01f051fd
.org 0x71fc6
	ldr r0, [r6, #96]	@ 00071fc6 306e
.org 0x71fc8
	negs r0, r0	@ 00071fc8 4042
.org 0x71fca
	ldr r1, [r6, #104]	@ 00071fca b16e
.org 0x71fcc
	bl 0x128fb8	@ 00071fcc b6f0f4ff
.org 0x71fd0
	adds r0, #1	@ 00071fd0 0130
.org 0x71fd2
	cmp r0, #16	@ 00071fd2 1028
