@ FUN_08098ee0  entry 0x08098ee0  size 186
.thumb
.org 0x98ee0
FUN_08098ee0:
	push {r4, r5, lr}	@ 00098ee0 30b5
.org 0x98ee2
	adds r4, r0, #0	@ 00098ee2 041c
.org 0x98ee4
	adds r0, #140	@ 00098ee4 8c30
.org 0x98ee6
	ldr r2, [r0, #0]	@ 00098ee6 0268
.org 0x98ee8
	movs r0, #128	@ 00098ee8 8020
.org 0x98eea
	lsls r0, r0, #2	@ 00098eea 8000
.org 0x98eec
	ands r0, r2	@ 00098eec 1040
.org 0x98eee
	cmp r0, #0	@ 00098eee 0028
.org 0x98ef0
	beq.n 0x98f10	@ 00098ef0 0ed0
.org 0x98ef2
	ldr r1, [pc, #24]	@ 00098ef2 0649
.org 0x98ef4
	ldrb r0, [r4, #9]	@ 00098ef4 607a
.org 0x98ef6
	lsls r0, r0, #2	@ 00098ef6 8000
.org 0x98ef8
	adds r0, r0, r1	@ 00098ef8 4018
.org 0x98efa
	movs r1, #2	@ 00098efa 0221
.org 0x98efc
	str r1, [r4, #12]	@ 00098efc e160
.org 0x98efe
	ldr r0, [r0, #0]	@ 00098efe 0068
.org 0x98f00
	ldr r0, [r0, #8]	@ 00098f00 8068
.org 0x98f02
	str r0, [r4, #20]	@ 00098f02 6061
.org 0x98f04
	adds r0, r4, #0	@ 00098f04 201c
.org 0x98f06
	bl 0x98fb0	@ 00098f06 00f053f8
.org 0x98f0a
	b.n 0x98fa2	@ 00098f0a 4ae0
.org 0x98f0c
	.byte 0x40,0xdb,0x85,0x08	@ 00098f0c data
.org 0x98f10
	adds r0, r4, #0	@ 00098f10 201c
.org 0x98f12
	adds r0, #192	@ 00098f12 c030
.org 0x98f14
	ldr r1, [r0, #0]	@ 00098f14 0168
.org 0x98f16
	adds r5, r0, #0	@ 00098f16 051c
.org 0x98f18
	cmp r1, #0	@ 00098f18 0029
.org 0x98f1a
	bne.n 0x98f44	@ 00098f1a 13d1
.org 0x98f1c
	movs r0, #1	@ 00098f1c 0120
.org 0x98f1e
	ands r2, r0	@ 00098f1e 0240
.org 0x98f20
	cmp r2, #0	@ 00098f20 002a
.org 0x98f22
	beq.n 0x98f3e	@ 00098f22 0cd0
.org 0x98f24
	ldr r2, [pc, #84]	@ 00098f24 154a
.org 0x98f26
	movs r0, #0	@ 00098f26 0020
.org 0x98f28
	adds r1, r4, #0	@ 00098f28 211c
.org 0x98f2a
	bl 0x2adac	@ 00098f2a 91f73fff
.org 0x98f2e
	str r0, [r5, #0]	@ 00098f2e 2860
.org 0x98f30
	cmp r0, #0	@ 00098f30 0028
.org 0x98f32
	beq.n 0x98f92	@ 00098f32 2ed0
.org 0x98f34
	adds r0, r4, #0	@ 00098f34 201c
.org 0x98f36
	adds r0, #116	@ 00098f36 7430
.org 0x98f38
	ldr r1, [pc, #68]	@ 00098f38 1149
.org 0x98f3a
	bl 0x5784	@ 00098f3a 6cf723fc
.org 0x98f3e
	ldr r0, [r5, #0]	@ 00098f3e 2868
.org 0x98f40
	cmp r0, #0	@ 00098f40 0028
.org 0x98f42
	beq.n 0x98f92	@ 00098f42 26d0
.org 0x98f44
	ldr r0, [r5, #0]	@ 00098f44 2868
.org 0x98f46
	bl 0x2b3e4	@ 00098f46 92f74dfa
.org 0x98f4a
	cmp r0, #0	@ 00098f4a 0028
.org 0x98f4c
	bne.n 0x98f84	@ 00098f4c 1ad1
.org 0x98f4e
	ldrb r0, [r4, #30]	@ 00098f4e a07f
.org 0x98f50
	lsls r0, r0, #8	@ 00098f50 0002
.org 0x98f52
	adds r1, r4, #0	@ 00098f52 211c
.org 0x98f54
	adds r1, #112	@ 00098f54 7031
.org 0x98f56
	ldrb r1, [r1, #0]	@ 00098f56 0978
.org 0x98f58
	orrs r1, r0	@ 00098f58 0143
.org 0x98f5a
	adds r0, r4, #0	@ 00098f5a 201c
.org 0x98f5c
	adds r0, #113	@ 00098f5c 7130
.org 0x98f5e
	movs r2, #0	@ 00098f5e 0022
.org 0x98f60
	ldrsb r2, [r0, r2]	@ 00098f60 8256
.org 0x98f62
	lsls r2, r2, #16	@ 00098f62 1204
.org 0x98f64
	lsrs r2, r2, #16	@ 00098f64 120c
.org 0x98f66
	adds r3, r1, #1	@ 00098f66 4b1c
.org 0x98f68
	lsls r3, r3, #16	@ 00098f68 1b04
.org 0x98f6a
	lsrs r3, r3, #16	@ 00098f6a 1b0c
.org 0x98f6c
	adds r0, r4, #0	@ 00098f6c 201c
.org 0x98f6e
	bl 0x1cfc8	@ 00098f6e 84f72bf8
.org 0x98f72
	adds r0, r4, #0	@ 00098f72 201c
.org 0x98f74
	bl 0x1cff0	@ 00098f74 84f73cf8
.org 0x98f78
	b.n 0x98fa2	@ 00098f78 13e0
.org 0x98f7a
	.byte 0x00	@ 00098f7a data
.org 0x98f7b
	.byte 0x00	@ 00098f7b data
.org 0x98f7c
	.byte 0x2c,0x0d,0x86,0x08	@ 00098f7c data
.org 0x98f80
	.byte 0xc0,0x0c,0x86,0x08	@ 00098f80 data
.org 0x98f84
	adds r0, r4, #0	@ 00098f84 201c
.org 0x98f86
	adds r0, #116	@ 00098f86 7430
.org 0x98f88
	ldr r1, [pc, #28]	@ 00098f88 0749
.org 0x98f8a
	bl 0x5784	@ 00098f8a 6cf7fbfb
.org 0x98f8e
	movs r0, #0	@ 00098f8e 0020
.org 0x98f90
	str r0, [r5, #0]	@ 00098f90 2860
.org 0x98f92
	ldr r0, [pc, #24]	@ 00098f92 0648
.org 0x98f94
	ldrb r1, [r4, #13]	@ 00098f94 617b
.org 0x98f96
	lsls r1, r1, #2	@ 00098f96 8900
.org 0x98f98
	adds r1, r1, r0	@ 00098f98 0918
