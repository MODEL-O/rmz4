@ FUN_08103ef4  entry 0x08103ef4  size 198
.thumb
.org 0x103ef4
FUN_08103ef4:
	push {r4, r5, lr}	@ 00103ef4 30b5
.org 0x103ef6
	adds r4, r0, #0	@ 00103ef6 041c
.org 0x103ef8
	ldrb r5, [r4, #14]	@ 00103ef8 a57b
.org 0x103efa
	cmp r5, #0	@ 00103efa 002d
.org 0x103efc
	bne.n 0x103f2c	@ 00103efc 16d1
.org 0x103efe
	ldr r1, [pc, #104]	@ 00103efe 1a49
.org 0x103f00
	bl 0x1cf00	@ 00103f00 18f7feff
.org 0x103f04
	ldr r1, [pc, #100]	@ 00103f04 1949
.org 0x103f06
	ldr r2, [pc, #104]	@ 00103f06 1a4a
.org 0x103f08
	adds r0, r1, r2	@ 00103f08 8818
.org 0x103f0a
	str r5, [r0, #0]	@ 00103f0a 0560
.org 0x103f0c
	adds r2, #4	@ 00103f0c 0432
.org 0x103f0e
	adds r0, r1, r2	@ 00103f0e 8818
.org 0x103f10
	str r5, [r0, #0]	@ 00103f10 0560
.org 0x103f12
	ldr r0, [pc, #96]	@ 00103f12 1848
.org 0x103f14
	adds r2, r1, r0	@ 00103f14 0a18
.org 0x103f16
	movs r0, #240	@ 00103f16 f020
.org 0x103f18
	lsls r0, r0, #14	@ 00103f18 8003
.org 0x103f1a
	str r0, [r2, #0]	@ 00103f1a 1060
.org 0x103f1c
	ldr r2, [pc, #88]	@ 00103f1c 164a
.org 0x103f1e
	adds r1, r1, r2	@ 00103f1e 8918
.org 0x103f20
	movs r0, #160	@ 00103f20 a020
.org 0x103f22
	lsls r0, r0, #14	@ 00103f22 8003
.org 0x103f24
	str r0, [r1, #0]	@ 00103f24 0860
.org 0x103f26
	ldrb r0, [r4, #14]	@ 00103f26 a07b
.org 0x103f28
	adds r0, #1	@ 00103f28 0130
.org 0x103f2a
	strb r0, [r4, #14]	@ 00103f2a a073
.org 0x103f2c
	adds r0, r4, #0	@ 00103f2c 201c
.org 0x103f2e
	adds r0, #140	@ 00103f2e 8c30
.org 0x103f30
	ldr r0, [r0, #0]	@ 00103f30 0068
.org 0x103f32
	movs r1, #4	@ 00103f32 0421
.org 0x103f34
	ands r0, r1	@ 00103f34 0840
.org 0x103f36
	cmp r0, #0	@ 00103f36 0028
.org 0x103f38
	beq.n 0x103fbc	@ 00103f38 40d0
.org 0x103f3a
	ldr r0, [pc, #64]	@ 00103f3a 1048
.org 0x103f3c
	ldr r0, [r0, #0]	@ 00103f3c 0068
.org 0x103f3e
	ldr r2, [r0, #12]	@ 00103f3e c268
.org 0x103f40
	ldr r0, [pc, #60]	@ 00103f40 0f48
.org 0x103f42
	ands r2, r0	@ 00103f42 0240
.org 0x103f44
	cmp r2, #0	@ 00103f44 002a
.org 0x103f46
	bne.n 0x103fbc	@ 00103f46 39d1
.org 0x103f48
	ldrb r0, [r4, #17]	@ 00103f48 607c
.org 0x103f4a
	adds r3, r0, #0	@ 00103f4a 031c
.org 0x103f4c
	cmp r3, #0	@ 00103f4c 002b
.org 0x103f4e
	beq.n 0x103f8c	@ 00103f4e 1dd0
.org 0x103f50
	ldr r0, [pc, #48]	@ 00103f50 0c48
.org 0x103f52
	ldrh r1, [r0, #4]	@ 00103f52 8188
.org 0x103f54
	movs r0, #64	@ 00103f54 4020
.org 0x103f56
	ands r0, r1	@ 00103f56 0840
.org 0x103f58
	cmp r0, #0	@ 00103f58 0028
.org 0x103f5a
	beq.n 0x103f8c	@ 00103f5a 17d0
.org 0x103f5c
	ldr r0, [pc, #40]	@ 00103f5c 0a48
.org 0x103f5e
	str r0, [r4, #96]	@ 00103f5e 2066
.org 0x103f60
	movs r0, #1	@ 00103f60 0120
.org 0x103f62
	strb r0, [r4, #13]	@ 00103f62 6073
.org 0x103f64
	strb r2, [r4, #14]	@ 00103f64 a273
.org 0x103f66
	b.n 0x103fae	@ 00103f66 22e0
.org 0x103f68
	.byte 0x01,0xde,0x00,0x00	@ 00103f68 data
.org 0x103f6c
	.byte 0xb0,0x0a,0x00,0x02	@ 00103f6c data
.org 0x103f70
	.byte 0x14,0xc0,0x02,0x00	@ 00103f70 data
.org 0x103f74
	.byte 0x1c,0xc0,0x02,0x00	@ 00103f74 data
.org 0x103f78
	.byte 0x20,0xc0,0x02,0x00	@ 00103f78 data
.org 0x103f7c
	.byte 0xf0,0xdb,0x02,0x02	@ 00103f7c data
.org 0x103f80
	.byte 0x00,0xff,0xff,0x00	@ 00103f80 data
.org 0x103f84
	.byte 0x10,0xe9,0x02,0x02	@ 00103f84 data
.org 0x103f88
	.byte 0x00,0xfe,0xff,0xff	@ 00103f88 data
.org 0x103f8c
	lsls r0, r3, #24	@ 00103f8c 1806
.org 0x103f8e
	lsrs r0, r0, #24	@ 00103f8e 000e
.org 0x103f90
	cmp r0, #3	@ 00103f90 0328
.org 0x103f92
	bhi.n 0x103fbc	@ 00103f92 13d8
.org 0x103f94
	ldr r0, [pc, #32]	@ 00103f94 0848
.org 0x103f96
	ldrh r1, [r0, #4]	@ 00103f96 8188
.org 0x103f98
	movs r0, #128	@ 00103f98 8020
.org 0x103f9a
	ands r0, r1	@ 00103f9a 0840
.org 0x103f9c
	cmp r0, #0	@ 00103f9c 0028
.org 0x103f9e
	beq.n 0x103fbc	@ 00103f9e 0dd0
.org 0x103fa0
	movs r0, #128	@ 00103fa0 8020
.org 0x103fa2
	lsls r0, r0, #2	@ 00103fa2 8000
.org 0x103fa4
	str r0, [r4, #96]	@ 00103fa4 2066
.org 0x103fa6
	movs r1, #0	@ 00103fa6 0021
.org 0x103fa8
	movs r0, #1	@ 00103fa8 0120
.org 0x103faa
	strb r0, [r4, #13]	@ 00103faa 6073
.org 0x103fac
	strb r1, [r4, #14]	@ 00103fac a173
.org 0x103fae
	adds r0, r4, #0	@ 00103fae 201c
.org 0x103fb0
	bl 0x103e54	@ 00103fb0 fff750ff
.org 0x103fb4
	b.n 0x103fde	@ 00103fb4 13e0
.org 0x103fb6
	.byte 0x00	@ 00103fb6 data
.org 0x103fb7
	.byte 0x00	@ 00103fb7 data
.org 0x103fb8
	.byte 0x10,0xe9,0x02,0x02	@ 00103fb8 data
