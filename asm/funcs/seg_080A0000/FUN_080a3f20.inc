@ FUN_080a3f20  entry 0x080a3f20  size 230
.thumb
.org 0xa3f20
FUN_080a3f20:
	push {r4, lr}	@ 000a3f20 10b5
.org 0xa3f22
	adds r4, r0, #0	@ 000a3f22 041c
.org 0xa3f24
	ldrb r0, [r4, #14]	@ 000a3f24 a07b
.org 0xa3f26
	adds r1, r0, #0	@ 000a3f26 011c
.org 0xa3f28
	cmp r1, #0	@ 000a3f28 0029
.org 0xa3f2a
	bne.n 0xa3f32	@ 000a3f2a 02d1
.org 0xa3f2c
	strb r1, [r4, #19]	@ 000a3f2c e174
.org 0xa3f2e
	adds r0, #1	@ 000a3f2e 0130
.org 0xa3f30
	strb r0, [r4, #14]	@ 000a3f30 a073
.org 0xa3f32
	ldrb r0, [r4, #18]	@ 000a3f32 a07c
.org 0xa3f34
	cmp r0, #0	@ 000a3f34 0028
.org 0xa3f36
	bne.n 0xa3fa4	@ 000a3f36 35d1
.org 0xa3f38
	ldr r0, [r4, #88]	@ 000a3f38 a06d
.org 0xa3f3a
	ldr r1, [r4, #96]	@ 000a3f3a 216e
.org 0xa3f3c
	adds r2, r0, r1	@ 000a3f3c 4218
.org 0xa3f3e
	str r2, [r4, #88]	@ 000a3f3e a265
.org 0xa3f40
	cmp r1, #0	@ 000a3f40 0029
.org 0xa3f42
	ble.n 0xa3f74	@ 000a3f42 17dd
.org 0xa3f44
	ldr r0, [r4, #84]	@ 000a3f44 606d
.org 0xa3f46
	movs r3, #208	@ 000a3f46 d023
.org 0xa3f48
	lsls r3, r3, #4	@ 000a3f48 1b01
.org 0xa3f4a
	adds r1, r2, r3	@ 000a3f4a d118
.org 0xa3f4c
	bl 0x7c7c	@ 000a3f4c 63f796fe
.org 0xa3f50
	lsls r0, r0, #16	@ 000a3f50 0004
.org 0xa3f52
	cmp r0, #0	@ 000a3f52 0028
.org 0xa3f54
	beq.n 0xa4004	@ 000a3f54 56d0
.org 0xa3f56
	ldr r0, [r4, #84]	@ 000a3f56 606d
.org 0xa3f58
	ldr r1, [r4, #88]	@ 000a3f58 a16d
.org 0xa3f5a
	bl 0x8534	@ 000a3f5a 64f7ebfa
.org 0xa3f5e
	ldr r1, [pc, #16]	@ 000a3f5e 0449
.org 0xa3f60
	adds r0, r0, r1	@ 000a3f60 4018
.org 0xa3f62
	str r0, [r4, #88]	@ 000a3f62 a065
.org 0xa3f64
	ldr r0, [r4, #96]	@ 000a3f64 206e
.org 0xa3f66
	negs r0, r0	@ 000a3f66 4042
.org 0xa3f68
	str r0, [r4, #96]	@ 000a3f68 2066
.org 0xa3f6a
	movs r0, #1	@ 000a3f6a 0120
.org 0xa3f6c
	b.n 0xa3ffc	@ 000a3f6c 46e0
.org 0xa3f6e
	.byte 0x00	@ 000a3f6e data
.org 0xa3f6f
	.byte 0x00	@ 000a3f6f data
.org 0xa3f70
	.byte 0x00,0xf3,0xff,0xff	@ 000a3f70 data
.org 0xa3f74
	ldr r0, [r4, #84]	@ 000a3f74 606d
.org 0xa3f76
	ldr r3, [pc, #40]	@ 000a3f76 0a4b
.org 0xa3f78
	adds r1, r2, r3	@ 000a3f78 d118
.org 0xa3f7a
	bl 0x7c7c	@ 000a3f7a 63f77ffe
.org 0xa3f7e
	lsls r0, r0, #16	@ 000a3f7e 0004
.org 0xa3f80
	cmp r0, #0	@ 000a3f80 0028
.org 0xa3f82
	beq.n 0xa4004	@ 000a3f82 3fd0
.org 0xa3f84
	ldr r0, [r4, #84]	@ 000a3f84 606d
.org 0xa3f86
	ldr r1, [r4, #88]	@ 000a3f86 a16d
.org 0xa3f88
	bl 0x8748	@ 000a3f88 64f7defb
.org 0xa3f8c
	movs r1, #208	@ 000a3f8c d021
.org 0xa3f8e
	lsls r1, r1, #4	@ 000a3f8e 0901
.org 0xa3f90
	adds r0, r0, r1	@ 000a3f90 4018
.org 0xa3f92
	str r0, [r4, #88]	@ 000a3f92 a065
.org 0xa3f94
	ldr r0, [r4, #96]	@ 000a3f94 206e
.org 0xa3f96
	negs r0, r0	@ 000a3f96 4042
.org 0xa3f98
	str r0, [r4, #96]	@ 000a3f98 2066
.org 0xa3f9a
	movs r0, #1	@ 000a3f9a 0120
.org 0xa3f9c
	b.n 0xa3ffc	@ 000a3f9c 2ee0
.org 0xa3f9e
	.byte 0x00	@ 000a3f9e data
.org 0xa3f9f
	.byte 0x00	@ 000a3f9f data
.org 0xa3fa0
	.byte 0x00,0xf3,0xff,0xff	@ 000a3fa0 data
.org 0xa3fa4
	ldr r0, [r4, #84]	@ 000a3fa4 606d
.org 0xa3fa6
	ldr r1, [r4, #92]	@ 000a3fa6 e16d
.org 0xa3fa8
	adds r0, r0, r1	@ 000a3fa8 4018
.org 0xa3faa
	str r0, [r4, #84]	@ 000a3faa 6065
.org 0xa3fac
	cmp r1, #0	@ 000a3fac 0029
.org 0xa3fae
	ble.n 0xa3fd4	@ 000a3fae 11dd
.org 0xa3fb0
	movs r3, #208	@ 000a3fb0 d023
.org 0xa3fb2
	lsls r3, r3, #4	@ 000a3fb2 1b01
.org 0xa3fb4
	adds r0, r0, r3	@ 000a3fb4 c018
.org 0xa3fb6
	ldr r1, [r4, #88]	@ 000a3fb6 a16d
.org 0xa3fb8
	bl 0x7c7c	@ 000a3fb8 63f760fe
.org 0xa3fbc
	lsls r0, r0, #16	@ 000a3fbc 0004
.org 0xa3fbe
	cmp r0, #0	@ 000a3fbe 0028
.org 0xa3fc0
	beq.n 0xa4004	@ 000a3fc0 20d0
.org 0xa3fc2
	ldr r0, [r4, #84]	@ 000a3fc2 606d
.org 0xa3fc4
	ldr r1, [r4, #88]	@ 000a3fc4 a16d
.org 0xa3fc6
	bl 0x8868	@ 000a3fc6 64f74ffc
.org 0xa3fca
	ldr r1, [pc, #4]	@ 000a3fca 0149
.org 0xa3fcc
	b.n 0xa3ff0	@ 000a3fcc 10e0
.org 0xa3fce
	.byte 0x00	@ 000a3fce data
.org 0xa3fcf
	.byte 0x00	@ 000a3fcf data
.org 0xa3fd0
	.byte 0x00,0xf3,0xff,0xff	@ 000a3fd0 data
.org 0xa3fd4
	ldr r3, [pc, #64]	@ 000a3fd4 104b
.org 0xa3fd6
	adds r0, r0, r3	@ 000a3fd6 c018
.org 0xa3fd8
	ldr r1, [r4, #88]	@ 000a3fd8 a16d
.org 0xa3fda
	bl 0x7c7c	@ 000a3fda 63f74ffe
.org 0xa3fde
	lsls r0, r0, #16	@ 000a3fde 0004
.org 0xa3fe0
	cmp r0, #0	@ 000a3fe0 0028
.org 0xa3fe2
	beq.n 0xa4004	@ 000a3fe2 0fd0
.org 0xa3fe4
	ldr r0, [r4, #84]	@ 000a3fe4 606d
.org 0xa3fe6
	ldr r1, [r4, #88]	@ 000a3fe6 a16d
.org 0xa3fe8
	bl 0x8988	@ 000a3fe8 64f7cefc
.org 0xa3fec
	movs r1, #208	@ 000a3fec d021
.org 0xa3fee
	lsls r1, r1, #4	@ 000a3fee 0901
.org 0xa3ff0
	adds r0, r0, r1	@ 000a3ff0 4018
.org 0xa3ff2
	str r0, [r4, #84]	@ 000a3ff2 6065
.org 0xa3ff4
	ldr r0, [r4, #92]	@ 000a3ff4 e06d
.org 0xa3ff6
	negs r0, r0	@ 000a3ff6 4042
.org 0xa3ff8
	str r0, [r4, #92]	@ 000a3ff8 e065
.org 0xa3ffa
	movs r0, #0	@ 000a3ffa 0020
.org 0xa3ffc
	strb r0, [r4, #18]	@ 000a3ffc a074
.org 0xa3ffe
	ldrb r0, [r4, #19]	@ 000a3ffe e07c
.org 0xa4000
	adds r0, #1	@ 000a4000 0130
.org 0xa4002
	strb r0, [r4, #19]	@ 000a4002 e074
.org 0xa4004
	ldrb r0, [r4, #19]	@ 000a4004 e07c
