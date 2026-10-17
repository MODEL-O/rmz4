@ FUN_080a9eec  entry 0x080a9eec  size 198
.thumb
.org 0xa9eec
FUN_080a9eec:
	push {r4, lr}	@ 000a9eec 10b5
.org 0xa9eee
	adds r4, r0, #0	@ 000a9eee 041c
.org 0xa9ef0
	ldrb r0, [r4, #14]	@ 000a9ef0 a07b
.org 0xa9ef2
	cmp r0, #0	@ 000a9ef2 0028
.org 0xa9ef4
	bne.n 0xa9f16	@ 000a9ef4 0fd1
.org 0xa9ef6
	adds r0, r4, #0	@ 000a9ef6 201c
.org 0xa9ef8
	adds r0, #188	@ 000a9ef8 bc30
.org 0xa9efa
	ldr r2, [pc, #184]	@ 000a9efa 2e4a
.org 0xa9efc
	adds r1, r2, #0	@ 000a9efc 111c
.org 0xa9efe
	ldrb r0, [r0, #0]	@ 000a9efe 0078
.org 0xa9f00
	adds r1, r1, r0	@ 000a9f00 0918
.org 0xa9f02
	lsls r1, r1, #16	@ 000a9f02 0904
.org 0xa9f04
	lsrs r1, r1, #16	@ 000a9f04 090c
.org 0xa9f06
	adds r0, r4, #0	@ 000a9f06 201c
.org 0xa9f08
	bl 0x1cf00	@ 000a9f08 72f7faff
.org 0xa9f0c
	movs r0, #30	@ 000a9f0c 1e20
.org 0xa9f0e
	strb r0, [r4, #18]	@ 000a9f0e a074
.org 0xa9f10
	ldrb r0, [r4, #14]	@ 000a9f10 a07b
.org 0xa9f12
	adds r0, #1	@ 000a9f12 0130
.org 0xa9f14
	strb r0, [r4, #14]	@ 000a9f14 a073
.org 0xa9f16
	ldr r0, [r4, #112]	@ 000a9f16 206f
.org 0xa9f18
	ldr r1, [pc, #156]	@ 000a9f18 2749
.org 0xa9f1a
	ands r0, r1	@ 000a9f1a 0840
.org 0xa9f1c
	ldr r1, [pc, #156]	@ 000a9f1c 2749
.org 0xa9f1e
	cmp r0, r1	@ 000a9f1e 8842
.org 0xa9f20
	bne.n 0xa9f32	@ 000a9f20 07d1
.org 0xa9f22
	adds r0, r4, #0	@ 000a9f22 201c
.org 0xa9f24
	adds r0, #84	@ 000a9f24 5430
.org 0xa9f26
	movs r1, #0	@ 000a9f26 0021
.org 0xa9f28
	bl 0xccf4c	@ 000a9f28 23f010f8
.org 0xa9f2c
	ldr r0, [pc, #144]	@ 000a9f2c 2448
.org 0xa9f2e
	bl 0x2b10	@ 000a9f2e 58f7effd
.org 0xa9f32
	adds r0, r4, #0	@ 000a9f32 201c
.org 0xa9f34
	adds r0, #181	@ 000a9f34 b530
.org 0xa9f36
	ldrb r0, [r0, #0]	@ 000a9f36 0078
.org 0xa9f38
	cmp r0, #2	@ 000a9f38 0228
.org 0xa9f3a
	bne.n 0xa9f62	@ 000a9f3a 12d1
.org 0xa9f3c
	ldrb r0, [r4, #18]	@ 000a9f3c a07c
.org 0xa9f3e
	movs r1, #1	@ 000a9f3e 0121
.org 0xa9f40
	ands r0, r1	@ 000a9f40 0840
.org 0xa9f42
	cmp r0, #0	@ 000a9f42 0028
.org 0xa9f44
	bne.n 0xa9f62	@ 000a9f44 0dd1
.org 0xa9f46
	adds r2, r4, #0	@ 000a9f46 221c
.org 0xa9f48
	adds r2, #184	@ 000a9f48 b832
.org 0xa9f4a
	ldr r0, [r4, #84]	@ 000a9f4a 606d
.org 0xa9f4c
	ldr r1, [r2, #0]	@ 000a9f4c 1168
.org 0xa9f4e
	adds r0, r0, r1	@ 000a9f4e 4018
.org 0xa9f50
	str r0, [r4, #84]	@ 000a9f50 6065
.org 0xa9f52
	ldr r0, [r2, #0]	@ 000a9f52 1068
.org 0xa9f54
	lsls r0, r0, #8	@ 000a9f54 0002
.org 0xa9f56
	negs r0, r0	@ 000a9f56 4042
.org 0xa9f58
	cmp r0, #0	@ 000a9f58 0028
.org 0xa9f5a
	bge.n 0xa9f5e	@ 000a9f5a 00da
.org 0xa9f5c
	adds r0, #255	@ 000a9f5c ff30
.org 0xa9f5e
	asrs r0, r0, #8	@ 000a9f5e 0012
.org 0xa9f60
	str r0, [r2, #0]	@ 000a9f60 1060
.org 0xa9f62
	adds r0, r4, #0	@ 000a9f62 201c
.org 0xa9f64
	adds r0, #115	@ 000a9f64 7330
.org 0xa9f66
	ldrb r0, [r0, #0]	@ 000a9f66 0078
.org 0xa9f68
	cmp r0, #3	@ 000a9f68 0328
.org 0xa9f6a
	bne.n 0xa9f82	@ 000a9f6a 0ad1
.org 0xa9f6c
	adds r0, r4, #0	@ 000a9f6c 201c
.org 0xa9f6e
	adds r0, #188	@ 000a9f6e bc30
.org 0xa9f70
	ldr r2, [pc, #80]	@ 000a9f70 144a
.org 0xa9f72
	adds r1, r2, #0	@ 000a9f72 111c
.org 0xa9f74
	ldrb r0, [r0, #0]	@ 000a9f74 0078
.org 0xa9f76
	adds r1, r1, r0	@ 000a9f76 0918
.org 0xa9f78
	lsls r1, r1, #16	@ 000a9f78 0904
.org 0xa9f7a
	lsrs r1, r1, #16	@ 000a9f7a 090c
.org 0xa9f7c
	adds r0, r4, #0	@ 000a9f7c 201c
.org 0xa9f7e
	bl 0x1cf00	@ 000a9f7e 72f7bfff
.org 0xa9f82
	adds r0, r4, #0	@ 000a9f82 201c
.org 0xa9f84
	bl 0xa9cac	@ 000a9f84 fff792fe
.org 0xa9f88
	lsls r0, r0, #24	@ 000a9f88 0006
.org 0xa9f8a
	cmp r0, #0	@ 000a9f8a 0028
.org 0xa9f8c
	beq.n 0xa9fac	@ 000a9f8c 0ed0
.org 0xa9f8e
	adds r0, r4, #0	@ 000a9f8e 201c
.org 0xa9f90
	adds r0, #188	@ 000a9f90 bc30
.org 0xa9f92
	ldr r2, [pc, #48]	@ 000a9f92 0c4a
.org 0xa9f94
	adds r1, r2, #0	@ 000a9f94 111c
.org 0xa9f96
	ldrb r0, [r0, #0]	@ 000a9f96 0078
.org 0xa9f98
	adds r1, r1, r0	@ 000a9f98 0918
.org 0xa9f9a
	lsls r1, r1, #16	@ 000a9f9a 0904
.org 0xa9f9c
	lsrs r1, r1, #16	@ 000a9f9c 090c
.org 0xa9f9e
	adds r0, r4, #0	@ 000a9f9e 201c
.org 0xa9fa0
	bl 0x1cf00	@ 000a9fa0 72f7aeff
.org 0xa9fa4
	movs r1, #0	@ 000a9fa4 0021
.org 0xa9fa6
	movs r0, #2	@ 000a9fa6 0220
.org 0xa9fa8
	strb r0, [r4, #13]	@ 000a9fa8 6073
.org 0xa9faa
	strb r1, [r4, #14]	@ 000a9faa a173
.org 0xa9fac
	pop {r4}	@ 000a9fac 10bc
.org 0xa9fae
	pop {r0}	@ 000a9fae 01bc
.org 0xa9fb0
	bx r0	@ 000a9fb0 0047
