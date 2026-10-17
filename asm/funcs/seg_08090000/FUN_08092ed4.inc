@ FUN_08092ed4  entry 0x08092ed4  size 286
.thumb
.org 0x92ed4
FUN_08092ed4:
	push {r4, r5, r6, r7, lr}	@ 00092ed4 f0b5
.org 0x92ed6
	adds r5, r0, #0	@ 00092ed6 051c
.org 0x92ed8
	ldrb r3, [r5, #17]	@ 00092ed8 6b7c
.org 0x92eda
	movs r7, #0	@ 00092eda 0027
.org 0x92edc
	ldr r0, [pc, #100]	@ 00092edc 1948
.org 0x92ede
	ldr r0, [r0, #0]	@ 00092ede 0068
.org 0x92ee0
	ldr r4, [r5, #84]	@ 00092ee0 6c6d
.org 0x92ee2
	ldr r0, [r0, #84]	@ 00092ee2 406d
.org 0x92ee4
	cmp r4, r0	@ 00092ee4 8442
.org 0x92ee6
	bge.n 0x92eea	@ 00092ee6 00da
.org 0x92ee8
	movs r7, #1	@ 00092ee8 0127
.org 0x92eea
	ldr r2, [pc, #92]	@ 00092eea 174a
.org 0x92eec
	ldr r1, [pc, #92]	@ 00092eec 1749
.org 0x92eee
	lsls r0, r3, #2	@ 00092eee 9800
.org 0x92ef0
	adds r0, r0, r1	@ 00092ef0 4018
.org 0x92ef2
	ldr r1, [r0, #0]	@ 00092ef2 0168
.org 0x92ef4
	asrs r0, r1, #3	@ 00092ef4 c810
.org 0x92ef6
	adds r2, #4	@ 00092ef6 0432
.org 0x92ef8
	adds r0, r0, r2	@ 00092ef8 8018
.org 0x92efa
	ldrb r2, [r0, #0]	@ 00092efa 0278
.org 0x92efc
	movs r0, #7	@ 00092efc 0720
.org 0x92efe
	ands r1, r0	@ 00092efe 0140
.org 0x92f00
	asrs r2, r1	@ 00092f00 0a41
.org 0x92f02
	movs r3, #1	@ 00092f02 0123
.org 0x92f04
	ands r2, r3	@ 00092f04 1a40
.org 0x92f06
	cmp r2, #0	@ 00092f06 002a
.org 0x92f08
	beq.n 0x92f54	@ 00092f08 24d0
.org 0x92f0a
	ldrb r1, [r5, #10]	@ 00092f0a a97a
.org 0x92f0c
	movs r0, #254	@ 00092f0c fe20
.org 0x92f0e
	ands r0, r1	@ 00092f0e 0840
.org 0x92f10
	movs r2, #0	@ 00092f10 0022
.org 0x92f12
	movs r1, #253	@ 00092f12 fd21
.org 0x92f14
	ands r0, r1	@ 00092f14 0840
.org 0x92f16
	strb r0, [r5, #10]	@ 00092f16 a872
.org 0x92f18
	adds r0, r5, #0	@ 00092f18 281c
.org 0x92f1a
	adds r0, #140	@ 00092f1a 8c30
.org 0x92f1c
	str r2, [r0, #0]	@ 00092f1c 0260
.org 0x92f1e
	adds r0, #4	@ 00092f1e 0430
.org 0x92f20
	str r2, [r0, #0]	@ 00092f20 0260
.org 0x92f22
	adds r0, #4	@ 00092f22 0430
.org 0x92f24
	strb r2, [r0, #0]	@ 00092f24 0270
.org 0x92f26
	ldrb r1, [r5, #10]	@ 00092f26 a97a
.org 0x92f28
	movs r0, #251	@ 00092f28 fb20
.org 0x92f2a
	ands r0, r1	@ 00092f2a 0840
.org 0x92f2c
	strb r0, [r5, #10]	@ 00092f2c a872
.org 0x92f2e
	ldr r1, [pc, #32]	@ 00092f2e 0849
.org 0x92f30
	ldrb r0, [r5, #9]	@ 00092f30 687a
.org 0x92f32
	lsls r0, r0, #2	@ 00092f32 8000
.org 0x92f34
	adds r0, r0, r1	@ 00092f34 4018
.org 0x92f36
	movs r1, #3	@ 00092f36 0321
.org 0x92f38
	str r1, [r5, #12]	@ 00092f38 e960
.org 0x92f3a
	ldr r0, [r0, #0]	@ 00092f3a 0068
.org 0x92f3c
	ldr r0, [r0, #12]	@ 00092f3c c068
.org 0x92f3e
	str r0, [r5, #20]	@ 00092f3e 6861
.org 0x92f40
	b.n 0x93004	@ 00092f40 60e0
.org 0x92f42
	.byte 0x00	@ 00092f42 data
.org 0x92f43
	.byte 0x00	@ 00092f43 data
.org 0x92f44
	.byte 0xf0,0xdb,0x02,0x02	@ 00092f44 data
.org 0x92f48
	.byte 0xb0,0xe8,0x02,0x02	@ 00092f48 data
.org 0x92f4c
	.byte 0x50,0x06,0x86,0x08	@ 00092f4c data
.org 0x92f50
	.byte 0x40,0xdb,0x85,0x08	@ 00092f50 data
.org 0x92f54
	ldr r1, [pc, #80]	@ 00092f54 1449
.org 0x92f56
	ldrb r0, [r5, #9]	@ 00092f56 687a
.org 0x92f58
	lsls r0, r0, #2	@ 00092f58 8000
.org 0x92f5a
	adds r0, r0, r1	@ 00092f5a 4018
.org 0x92f5c
	str r3, [r5, #12]	@ 00092f5c eb60
.org 0x92f5e
	ldr r0, [r0, #0]	@ 00092f5e 0068
.org 0x92f60
	ldr r0, [r0, #4]	@ 00092f60 4068
.org 0x92f62
	str r0, [r5, #20]	@ 00092f62 6861
.org 0x92f64
	strb r2, [r5, #13]	@ 00092f64 6a73
.org 0x92f66
	strb r2, [r5, #14]	@ 00092f66 aa73
.org 0x92f68
	strb r2, [r5, #15]	@ 00092f68 ea73
.org 0x92f6a
	ldrb r0, [r5, #10]	@ 00092f6a a87a
.org 0x92f6c
	movs r1, #1	@ 00092f6c 0121
.org 0x92f6e
	movs r6, #0	@ 00092f6e 0026
.org 0x92f70
	orrs r0, r1	@ 00092f70 0843
.org 0x92f72
	movs r1, #2	@ 00092f72 0221
.org 0x92f74
	orrs r0, r1	@ 00092f74 0843
.org 0x92f76
	strb r0, [r5, #10]	@ 00092f76 a872
.org 0x92f78
	str r2, [r5, #44]	@ 00092f78 ea62
.org 0x92f7a
	adds r0, r5, #0	@ 00092f7a 281c
.org 0x92f7c
	adds r0, #180	@ 00092f7c b430
.org 0x92f7e
	str r4, [r0, #0]	@ 00092f7e 0460
.org 0x92f80
	adds r0, #5	@ 00092f80 0530
.org 0x92f82
	strb r2, [r0, #0]	@ 00092f82 0270
.org 0x92f84
	adds r0, #1	@ 00092f84 0130
.org 0x92f86
	strb r2, [r0, #0]	@ 00092f86 0270
.org 0x92f88
	ldr r0, [r5, #84]	@ 00092f88 686d
.org 0x92f8a
	ldr r1, [r5, #88]	@ 00092f8a a96d
.org 0x92f8c
	bl 0x8534	@ 00092f8c 75f7d2fa
.org 0x92f90
	str r0, [r5, #88]	@ 00092f90 a865
.org 0x92f92
	adds r0, r5, #0	@ 00092f92 281c
.org 0x92f94
	bl 0x1cc9c	@ 00092f94 89f782fe
.org 0x92f98
	adds r2, r7, #0	@ 00092f98 3a1c
.org 0x92f9a
	cmp r2, #0	@ 00092f9a 002a
.org 0x92f9c
	beq.n 0x92fac	@ 00092f9c 06d0
.org 0x92f9e
	ldrb r0, [r5, #10]	@ 00092f9e a87a
.org 0x92fa0
	movs r1, #16	@ 00092fa0 1021
.org 0x92fa2
	orrs r0, r1	@ 00092fa2 0843
.org 0x92fa4
	b.n 0x92fb2	@ 00092fa4 05e0
.org 0x92fa6
	.byte 0x00	@ 00092fa6 data
.org 0x92fa7
	.byte 0x00	@ 00092fa7 data
.org 0x92fa8
	.byte 0x40,0xdb,0x85,0x08	@ 00092fa8 data
.org 0x92fac
	ldrb r1, [r5, #10]	@ 00092fac a97a
.org 0x92fae
	movs r0, #239	@ 00092fae ef20
.org 0x92fb0
	ands r0, r1	@ 00092fb0 0840
.org 0x92fb2
	strb r0, [r5, #10]	@ 00092fb2 a872
.org 0x92fb4
	adds r1, r2, #0	@ 00092fb4 111c
.org 0x92fb6
	adds r0, r5, #0	@ 00092fb6 281c
.org 0x92fb8
	adds r0, #76	@ 00092fb8 4c30
.org 0x92fba
	strb r1, [r0, #0]	@ 00092fba 0170
.org 0x92fbc
	adds r3, r5, #0	@ 00092fbc 2b1c
.org 0x92fbe
	adds r3, #74	@ 00092fbe 4a33
.org 0x92fc0
	lsls r1, r1, #4	@ 00092fc0 0901
.org 0x92fc2
	ldrb r2, [r3, #0]	@ 00092fc2 1a78
.org 0x92fc4
	movs r0, #17	@ 00092fc4 1120
.org 0x92fc6
	negs r0, r0	@ 00092fc6 4042
.org 0x92fc8
	ands r0, r2	@ 00092fc8 1040
.org 0x92fca
	orrs r0, r1	@ 00092fca 0843
.org 0x92fcc
	strb r0, [r3, #0]	@ 00092fcc 1870
.org 0x92fce
	movs r1, #128	@ 00092fce 8021
.org 0x92fd0
	lsls r1, r1, #7	@ 00092fd0 c901
.org 0x92fd2
	adds r0, r5, #0	@ 00092fd2 281c
.org 0x92fd4
	bl 0x1cf00	@ 00092fd4 89f794ff
.org 0x92fd8
	adds r0, r5, #0	@ 00092fd8 281c
.org 0x92fda
	bl 0x1cff0	@ 00092fda 8af709f8
.org 0x92fde
	ldrb r1, [r5, #10]	@ 00092fde a97a
.org 0x92fe0
	movs r0, #4	@ 00092fe0 0420
.org 0x92fe2
	orrs r0, r1	@ 00092fe2 0843
.org 0x92fe4
	strb r0, [r5, #10]	@ 00092fe4 a872
.org 0x92fe6
	adds r4, r5, #0	@ 00092fe6 2c1c
.org 0x92fe8
	adds r4, #116	@ 00092fe8 7434
.org 0x92fea
	ldr r1, [pc, #32]	@ 00092fea 0849
.org 0x92fec
	adds r2, r5, #0	@ 00092fec 2a1c
.org 0x92fee
	adds r2, #84	@ 00092fee 5432
.org 0x92ff0
	adds r0, r4, #0	@ 00092ff0 201c
