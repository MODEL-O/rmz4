@ FUN_08104ef8  entry 0x08104ef8  size 340
.thumb
.org 0x104ef8
FUN_08104ef8:
	push {r4, r5, r6, r7, lr}	@ 00104ef8 f0b5
.org 0x104efa
	adds r5, r0, #0	@ 00104efa 051c
.org 0x104efc
	movs r4, #0	@ 00104efc 0024
.org 0x104efe
	ldrb r0, [r5, #14]	@ 00104efe a87b
.org 0x104f00
	cmp r0, #0	@ 00104f00 0028
.org 0x104f02
	bne.n 0x104f40	@ 00104f02 1dd1
.org 0x104f04
	ldr r1, [pc, #120]	@ 00104f04 1e49
.org 0x104f06
	adds r0, r5, #0	@ 00104f06 281c
.org 0x104f08
	bl 0x1cf00	@ 00104f08 17f7faff
.org 0x104f0c
	adds r0, r5, #0	@ 00104f0c 281c
.org 0x104f0e
	adds r0, #140	@ 00104f0e 8c30
.org 0x104f10
	str r4, [r0, #0]	@ 00104f10 0460
.org 0x104f12
	adds r0, #4	@ 00104f12 0430
.org 0x104f14
	str r4, [r0, #0]	@ 00104f14 0460
.org 0x104f16
	adds r0, #4	@ 00104f16 0430
.org 0x104f18
	strb r4, [r0, #0]	@ 00104f18 0470
.org 0x104f1a
	ldrb r1, [r5, #10]	@ 00104f1a a97a
.org 0x104f1c
	movs r0, #251	@ 00104f1c fb20
.org 0x104f1e
	ands r0, r1	@ 00104f1e 0840
.org 0x104f20
	strb r0, [r5, #10]	@ 00104f20 a872
.org 0x104f22
	ldr r0, [r5, #40]	@ 00104f22 a86a
.org 0x104f24
	ldr r1, [pc, #92]	@ 00104f24 1749
.org 0x104f26
	adds r0, r0, r1	@ 00104f26 4018
.org 0x104f28
	ldr r0, [r0, #20]	@ 00104f28 4069
.org 0x104f2a
	cmp r0, #0	@ 00104f2a 0028
.org 0x104f2c
	beq.n 0x104f34	@ 00104f2c 02d0
.org 0x104f2e
	ldr r0, [pc, #88]	@ 00104f2e 1648
.org 0x104f30
	bl 0x2b10	@ 00104f30 fdf6eefd
.org 0x104f34
	ldr r0, [pc, #84]	@ 00104f34 1548
.org 0x104f36
	bl 0x2b10	@ 00104f36 fdf6ebfd
.org 0x104f3a
	ldrb r0, [r5, #14]	@ 00104f3a a87b
.org 0x104f3c
	adds r0, #1	@ 00104f3c 0130
.org 0x104f3e
	strb r0, [r5, #14]	@ 00104f3e a873
.org 0x104f40
	adds r0, r5, #0	@ 00104f40 281c
.org 0x104f42
	bl 0x105084	@ 00104f42 00f09ff8
.org 0x104f46
	adds r0, r5, #0	@ 00104f46 281c
.org 0x104f48
	adds r0, #115	@ 00104f48 7330
.org 0x104f4a
	ldrb r0, [r0, #0]	@ 00104f4a 0078
.org 0x104f4c
	cmp r0, #3	@ 00104f4c 0328
.org 0x104f4e
	beq.n 0x104f52	@ 00104f4e 00d0
.org 0x104f50
	b.n 0x105072	@ 00104f50 8fe0
.org 0x104f52
	adds r0, r5, #0	@ 00104f52 281c
.org 0x104f54
	adds r0, #180	@ 00104f54 b430
.org 0x104f56
	ldrb r0, [r0, #0]	@ 00104f56 0078
.org 0x104f58
	cmp r0, #0	@ 00104f58 0028
.org 0x104f5a
	beq.n 0x104f5e	@ 00104f5a 00d0
.org 0x104f5c
	b.n 0x105072	@ 00104f5c 89e0
.org 0x104f5e
	ldr r0, [r5, #40]	@ 00104f5e a86a
.org 0x104f60
	ldr r2, [pc, #32]	@ 00104f60 084a
.org 0x104f62
	adds r1, r0, r2	@ 00104f62 8118
.org 0x104f64
	ldr r1, [r1, #20]	@ 00104f64 4969
.org 0x104f66
	adds r6, r0, #0	@ 00104f66 061c
.org 0x104f68
	cmp r1, #0	@ 00104f68 0029
.org 0x104f6a
	bne.n 0x104f94	@ 00104f6a 13d1
.org 0x104f6c
	ldr r1, [pc, #32]	@ 00104f6c 0849
.org 0x104f6e
	ldrb r0, [r5, #9]	@ 00104f6e 687a
.org 0x104f70
	lsls r0, r0, #2	@ 00104f70 8000
.org 0x104f72
	adds r0, r0, r1	@ 00104f72 4018
.org 0x104f74
	movs r1, #4	@ 00104f74 0421
.org 0x104f76
	str r1, [r5, #12]	@ 00104f76 e960
.org 0x104f78
	ldr r0, [r0, #0]	@ 00104f78 0068
.org 0x104f7a
	ldr r0, [r0, #16]	@ 00104f7a 0069
.org 0x104f7c
	str r0, [r5, #20]	@ 00104f7c 6861
.org 0x104f7e
	b.n 0x105078	@ 00104f7e 7be0
.org 0x104f80
	.byte 0x01,0xbd,0x00,0x00	@ 00104f80 data
.org 0x104f84
	.byte 0xcc,0x0d,0x00,0x00	@ 00104f84 data
.org 0x104f88
	.byte 0xa3,0x01,0x00,0x00	@ 00104f88 data
.org 0x104f8c
	.byte 0x31,0x01,0x00,0x00	@ 00104f8c data
.org 0x104f90
	.byte 0xfc,0x92,0x86,0x08	@ 00104f90 data
.org 0x104f94
	adds r0, r5, #0	@ 00104f94 281c
.org 0x104f96
	adds r0, #184	@ 00104f96 b830
.org 0x104f98
	ldr r3, [r5, #88]	@ 00104f98 ab6d
.org 0x104f9a
	ldr r2, [r0, #0]	@ 00104f9a 0268
.org 0x104f9c
	subs r1, r3, r2	@ 00104f9c 991a
.org 0x104f9e
	adds r7, r0, #0	@ 00104f9e 071c
.org 0x104fa0
	cmp r1, #0	@ 00104fa0 0029
.org 0x104fa2
	blt.n 0x104fa8	@ 00104fa2 01db
.org 0x104fa4
	asrs r4, r1, #8	@ 00104fa4 0c12
.org 0x104fa6
	b.n 0x104fac	@ 00104fa6 01e0
.org 0x104fa8
	subs r0, r2, r3	@ 00104fa8 d01a
.org 0x104faa
	asrs r4, r0, #8	@ 00104faa 0412
.org 0x104fac
	cmp r4, #15	@ 00104fac 0f2c
.org 0x104fae
	bhi.n 0x104fc0	@ 00104fae 07d8
.org 0x104fb0
	ldr r0, [pc, #8]	@ 00104fb0 0248
.org 0x104fb2
	adds r1, r6, r0	@ 00104fb2 3118
.org 0x104fb4
	ldr r0, [r1, #8]	@ 00104fb4 8868
.org 0x104fb6
	adds r0, #3	@ 00104fb6 0330
.org 0x104fb8
	b.n 0x104fdc	@ 00104fb8 10e0
.org 0x104fba
	.byte 0x00	@ 00104fba data
.org 0x104fbb
	.byte 0x00	@ 00104fbb data
.org 0x104fbc
	.byte 0xcc,0x0d,0x00,0x00	@ 00104fbc data
.org 0x104fc0
	cmp r4, #31	@ 00104fc0 1f2c
.org 0x104fc2
	bhi.n 0x104fd4	@ 00104fc2 07d8
.org 0x104fc4
	ldr r2, [pc, #8]	@ 00104fc4 024a
.org 0x104fc6
	adds r1, r6, r2	@ 00104fc6 b118
.org 0x104fc8
	ldr r0, [r1, #8]	@ 00104fc8 8868
.org 0x104fca
	adds r0, #2	@ 00104fca 0230
.org 0x104fcc
	b.n 0x104fdc	@ 00104fcc 06e0
.org 0x104fce
	.byte 0x00	@ 00104fce data
.org 0x104fcf
	.byte 0x00	@ 00104fcf data
.org 0x104fd0
	.byte 0xcc,0x0d,0x00,0x00	@ 00104fd0 data
.org 0x104fd4
	ldr r0, [pc, #44]	@ 00104fd4 0b48
.org 0x104fd6
	adds r1, r6, r0	@ 00104fd6 3118
.org 0x104fd8
	ldr r0, [r1, #8]	@ 00104fd8 8868
.org 0x104fda
	adds r0, #1	@ 00104fda 0130
.org 0x104fdc
	str r0, [r1, #8]	@ 00104fdc 8860
.org 0x104fde
	ldr r2, [pc, #36]	@ 00104fde 094a
.org 0x104fe0
	adds r1, r6, r2	@ 00104fe0 b118
.org 0x104fe2
	ldr r0, [r1, #48]	@ 00104fe2 086b
.org 0x104fe4
	adds r0, #1	@ 00104fe4 0130
.org 0x104fe6
	str r0, [r1, #48]	@ 00104fe6 0863
.org 0x104fe8
	ldr r6, [r5, #44]	@ 00104fe8 ee6a
.org 0x104fea
	cmp r6, #0	@ 00104fea 002e
.org 0x104fec
	bne.n 0x105054	@ 00104fec 32d1
.org 0x104fee
	ldrb r0, [r5, #17]	@ 00104fee 687c
.org 0x104ff0
	cmp r0, #0	@ 00104ff0 0028
.org 0x104ff2
	bne.n 0x10500c	@ 00104ff2 0bd1
.org 0x104ff4
	ldrb r1, [r5, #10]	@ 00104ff4 a97a
.org 0x104ff6
	movs r0, #4	@ 00104ff6 0420
.org 0x104ff8
	orrs r0, r1	@ 00104ff8 0843
.org 0x104ffa
	strb r0, [r5, #10]	@ 00104ffa a872
.org 0x104ffc
	adds r4, r5, #0	@ 00104ffc 2c1c
.org 0x104ffe
	adds r4, #116	@ 00104ffe 7434
.org 0x105000
	ldr r1, [pc, #4]	@ 00105000 0149
.org 0x105002
	b.n 0x10501a	@ 00105002 0ae0
.org 0x105004
	.byte 0xcc,0x0d,0x00,0x00	@ 00105004 data
.org 0x105008
	.byte 0x58,0xc1,0x86,0x08	@ 00105008 data
.org 0x10500c
	ldrb r1, [r5, #10]	@ 0010500c a97a
.org 0x10500e
	movs r0, #4	@ 0010500e 0420
.org 0x105010
	orrs r0, r1	@ 00105010 0843
.org 0x105012
	strb r0, [r5, #10]	@ 00105012 a872
.org 0x105014
	adds r4, r5, #0	@ 00105014 2c1c
.org 0x105016
	adds r4, #116	@ 00105016 7434
.org 0x105018
	ldr r1, [pc, #48]	@ 00105018 0c49
.org 0x10501a
	adds r2, r5, #0	@ 0010501a 2a1c
.org 0x10501c
	adds r2, #84	@ 0010501c 5432
.org 0x10501e
	adds r0, r4, #0	@ 0010501e 201c
.org 0x105020
	movs r3, #1	@ 00105020 0123
.org 0x105022
	bl 0x5760	@ 00105022 00f79dfb
.org 0x105026
	str r5, [r4, #44]	@ 00105026 e562
.org 0x105028
	str r6, [r4, #36]	@ 00105028 6662
.org 0x10502a
	ldr r0, [r7, #0]	@ 0010502a 3868
.org 0x10502c
	str r0, [r5, #88]	@ 0010502c a865
.org 0x10502e
	movs r1, #189	@ 0010502e bd21
.org 0x105030
	lsls r1, r1, #8	@ 00105030 0902
.org 0x105032
	adds r0, r5, #0	@ 00105032 281c
.org 0x105034
	bl 0x1cf00	@ 00105034 17f764ff
.org 0x105038
	ldr r1, [pc, #20]	@ 00105038 0549
.org 0x10503a
	ldrb r0, [r5, #9]	@ 0010503a 687a
.org 0x10503c
	lsls r0, r0, #2	@ 0010503c 8000
.org 0x10503e
	adds r0, r0, r1	@ 0010503e 4018
.org 0x105040
	movs r1, #1	@ 00105040 0121
.org 0x105042
	str r1, [r5, #12]	@ 00105042 e960
.org 0x105044
	ldr r0, [r0, #0]	@ 00105044 0068
.org 0x105046
	ldr r0, [r0, #4]	@ 00105046 4068
.org 0x105048
	b.n 0x105070	@ 00105048 12e0
.org 0x10504a
	.byte 0x00	@ 0010504a data
.org 0x10504b
	.byte 0x00	@ 0010504b data
