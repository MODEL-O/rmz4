@ FUN_080c4edc  entry 0x080c4edc  size 264
.thumb
.org 0xc4edc
FUN_080c4edc:
	push {r4, r5, r6, r7, lr}	@ 000c4edc f0b5
.org 0xc4ede
	mov r7, r9	@ 000c4ede 4f46
.org 0xc4ee0
	mov r6, r8	@ 000c4ee0 4646
.org 0xc4ee2
	push {r6, r7}	@ 000c4ee2 c0b4
.org 0xc4ee4
	adds r4, r0, #0	@ 000c4ee4 041c
.org 0xc4ee6
	ldr r6, [r4, #40]	@ 000c4ee6 a66a
.org 0xc4ee8
	ldrb r0, [r6, #10]	@ 000c4ee8 b07a
.org 0xc4eea
	lsrs r5, r0, #4	@ 000c4eea 0509
.org 0xc4eec
	movs r0, #1	@ 000c4eec 0120
.org 0xc4eee
	ands r5, r0	@ 000c4eee 0540
.org 0xc4ef0
	ldrb r7, [r4, #17]	@ 000c4ef0 677c
.org 0xc4ef2
	ldrb r2, [r4, #15]	@ 000c4ef2 e27b
.org 0xc4ef4
	cmp r2, #0	@ 000c4ef4 002a
.org 0xc4ef6
	bne.n 0xc4f0c	@ 000c4ef6 09d1
.org 0xc4ef8
	ldr r1, [pc, #32]	@ 000c4ef8 0849
.org 0xc4efa
	lsls r0, r7, #2	@ 000c4efa b800
.org 0xc4efc
	adds r0, r0, r1	@ 000c4efc 4018
.org 0xc4efe
	ldr r0, [r0, #0]	@ 000c4efe 0068
.org 0xc4f00
	ldrb r0, [r0, #0]	@ 000c4f00 0078
.org 0xc4f02
	strb r0, [r4, #18]	@ 000c4f02 a074
.org 0xc4f04
	movs r0, #3	@ 000c4f04 0320
.org 0xc4f06
	strb r0, [r4, #19]	@ 000c4f06 e074
.org 0xc4f08
	adds r0, r2, #1	@ 000c4f08 501c
.org 0xc4f0a
	strb r0, [r4, #15]	@ 000c4f0a e073
.org 0xc4f0c
	adds r2, r5, #0	@ 000c4f0c 2a1c
.org 0xc4f0e
	cmp r5, #0	@ 000c4f0e 002d
.org 0xc4f10
	beq.n 0xc4f20	@ 000c4f10 06d0
.org 0xc4f12
	ldrb r1, [r4, #10]	@ 000c4f12 a17a
.org 0xc4f14
	movs r0, #16	@ 000c4f14 1020
.org 0xc4f16
	orrs r0, r1	@ 000c4f16 0843
.org 0xc4f18
	b.n 0xc4f26	@ 000c4f18 05e0
.org 0xc4f1a
	.byte 0x00	@ 000c4f1a data
.org 0xc4f1b
	.byte 0x00	@ 000c4f1b data
.org 0xc4f1c
	.byte 0x38,0x58,0x86,0x08	@ 000c4f1c data
.org 0xc4f20
	ldrb r1, [r4, #10]	@ 000c4f20 a17a
.org 0xc4f22
	movs r0, #239	@ 000c4f22 ef20
.org 0xc4f24
	ands r0, r1	@ 000c4f24 0840
.org 0xc4f26
	strb r0, [r4, #10]	@ 000c4f26 a072
.org 0xc4f28
	adds r1, r2, #0	@ 000c4f28 111c
.org 0xc4f2a
	adds r0, r4, #0	@ 000c4f2a 201c
.org 0xc4f2c
	adds r0, #76	@ 000c4f2c 4c30
.org 0xc4f2e
	strb r1, [r0, #0]	@ 000c4f2e 0170
.org 0xc4f30
	adds r3, r4, #0	@ 000c4f30 231c
.org 0xc4f32
	adds r3, #74	@ 000c4f32 4a33
.org 0xc4f34
	lsls r1, r1, #4	@ 000c4f34 0901
.org 0xc4f36
	ldrb r2, [r3, #0]	@ 000c4f36 1a78
.org 0xc4f38
	movs r0, #17	@ 000c4f38 1120
.org 0xc4f3a
	negs r0, r0	@ 000c4f3a 4042
.org 0xc4f3c
	ands r0, r2	@ 000c4f3c 1040
.org 0xc4f3e
	orrs r0, r1	@ 000c4f3e 0843
.org 0xc4f40
	strb r0, [r3, #0]	@ 000c4f40 1870
.org 0xc4f42
	ldr r2, [r6, #84]	@ 000c4f42 726d
.org 0xc4f44
	ldrb r1, [r6, #10]	@ 000c4f44 b17a
.org 0xc4f46
	movs r0, #16	@ 000c4f46 1020
.org 0xc4f48
	ands r0, r1	@ 000c4f48 0840
.org 0xc4f4a
	cmp r0, #0	@ 000c4f4a 0028
.org 0xc4f4c
	beq.n 0xc4f56	@ 000c4f4c 03d0
.org 0xc4f4e
	movs r0, #240	@ 000c4f4e f020
.org 0xc4f50
	lsls r0, r0, #6	@ 000c4f50 8001
.org 0xc4f52
	adds r3, r2, r0	@ 000c4f52 1318
.org 0xc4f54
	b.n 0xc4f5a	@ 000c4f54 01e0
.org 0xc4f56
	ldr r1, [pc, #116]	@ 000c4f56 1d49
.org 0xc4f58
	adds r3, r2, r1	@ 000c4f58 5318
.org 0xc4f5a
	str r3, [r4, #84]	@ 000c4f5a 6365
.org 0xc4f5c
	ldr r0, [r6, #88]	@ 000c4f5c b06d
.org 0xc4f5e
	str r0, [r4, #88]	@ 000c4f5e a065
.org 0xc4f60
	ldrb r0, [r4, #18]	@ 000c4f60 a07c
.org 0xc4f62
	subs r0, #1	@ 000c4f62 0138
.org 0xc4f64
	strb r0, [r4, #18]	@ 000c4f64 a074
.org 0xc4f66
	movs r1, #255	@ 000c4f66 ff21
.org 0xc4f68
	mov r8, r1	@ 000c4f68 8846
.org 0xc4f6a
	lsls r0, r0, #24	@ 000c4f6a 0006
.org 0xc4f6c
	cmp r0, #0	@ 000c4f6c 0028
.org 0xc4f6e
	bne.n 0xc4fe6	@ 000c4f6e 3ad1
.org 0xc4f70
	ldrb r0, [r4, #19]	@ 000c4f70 e07c
.org 0xc4f72
	movs r1, #3	@ 000c4f72 0321
.org 0xc4f74
	mov r9, r1	@ 000c4f74 8946
.org 0xc4f76
	subs r2, r1, r0	@ 000c4f76 0a1a
.org 0xc4f78
	ldr r0, [pc, #84]	@ 000c4f78 1548
.org 0xc4f7a
	lsls r7, r7, #2	@ 000c4f7a bf00
.org 0xc4f7c
	adds r0, r7, r0	@ 000c4f7c 3818
.org 0xc4f7e
	ldr r1, [r0, #0]	@ 000c4f7e 0168
.org 0xc4f80
	lsls r0, r2, #2	@ 000c4f80 9000
.org 0xc4f82
	adds r0, r0, r1	@ 000c4f82 4018
.org 0xc4f84
	ldr r1, [r0, #0]	@ 000c4f84 0168
.org 0xc4f86
	movs r0, #240	@ 000c4f86 f020
.org 0xc4f88
	lsls r0, r0, #7	@ 000c4f88 c001
.org 0xc4f8a
	subs r2, r0, r1	@ 000c4f8a 421a
.org 0xc4f8c
	adds r0, r6, #0	@ 000c4f8c 301c
.org 0xc4f8e
	adds r0, #208	@ 000c4f8e d030
.org 0xc4f90
	ldr r1, [r0, #0]	@ 000c4f90 0168
.org 0xc4f92
	subs r1, r1, r3	@ 000c4f92 c91a
.org 0xc4f94
	lsls r0, r5, #1	@ 000c4f94 6800
.org 0xc4f96
	subs r0, #1	@ 000c4f96 0138
.org 0xc4f98
	muls r0, r1	@ 000c4f98 4843
.org 0xc4f9a
	adds r2, r2, r0	@ 000c4f9a 1218
.org 0xc4f9c
	adds r1, r4, #0	@ 000c4f9c 211c
.org 0xc4f9e
	adds r1, #84	@ 000c4f9e 5431
.org 0xc4fa0
	adds r0, r4, #0	@ 000c4fa0 201c
.org 0xc4fa2
	bl 0xc4c20	@ 000c4fa2 fff73dfe
.org 0xc4fa6
	cmp r0, #0	@ 000c4fa6 0028
.org 0xc4fa8
	beq.n 0xc4fb4	@ 000c4fa8 04d0
.org 0xc4faa
	adds r1, r4, #0	@ 000c4faa 211c
.org 0xc4fac
	adds r1, #180	@ 000c4fac b431
.org 0xc4fae
	ldrb r0, [r1, #0]	@ 000c4fae 0878
.org 0xc4fb0
	adds r0, #1	@ 000c4fb0 0130
.org 0xc4fb2
	strb r0, [r1, #0]	@ 000c4fb2 0870
.org 0xc4fb4
	ldrb r0, [r4, #19]	@ 000c4fb4 e07c
.org 0xc4fb6
	subs r0, #1	@ 000c4fb6 0138
.org 0xc4fb8
	strb r0, [r4, #19]	@ 000c4fb8 e074
.org 0xc4fba
	mov r1, r8	@ 000c4fba 4146
.org 0xc4fbc
	ands r1, r0	@ 000c4fbc 0140
.org 0xc4fbe
	cmp r1, #0	@ 000c4fbe 0029
.org 0xc4fc0
	bne.n 0xc4fd4	@ 000c4fc0 08d1
.org 0xc4fc2
	movs r0, #1	@ 000c4fc2 0120
.org 0xc4fc4
	strb r0, [r4, #13]	@ 000c4fc4 6073
.org 0xc4fc6
	strb r1, [r4, #14]	@ 000c4fc6 a173
.org 0xc4fc8
	strb r1, [r4, #15]	@ 000c4fc8 e173
.org 0xc4fca
	b.n 0xc4fe6	@ 000c4fca 0ce0
.org 0xc4fcc
	.byte 0x00,0xc4,0xff,0xff	@ 000c4fcc data
.org 0xc4fd0
	.byte 0x1c,0x58,0x86,0x08	@ 000c4fd0 data
.org 0xc4fd4
	ldrb r0, [r4, #19]	@ 000c4fd4 e07c
.org 0xc4fd6
	mov r1, r9	@ 000c4fd6 4946
.org 0xc4fd8
	subs r2, r1, r0	@ 000c4fd8 0a1a
.org 0xc4fda
	ldr r0, [pc, #24]	@ 000c4fda 0648
.org 0xc4fdc
	adds r0, r7, r0	@ 000c4fdc 3818
.org 0xc4fde
	ldr r0, [r0, #0]	@ 000c4fde 0068
.org 0xc4fe0
	adds r0, r0, r2	@ 000c4fe0 8018
.org 0xc4fe2
	ldrb r0, [r0, #0]	@ 000c4fe2 0078
