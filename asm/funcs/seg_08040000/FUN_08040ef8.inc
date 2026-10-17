@ FUN_08040ef8  entry 0x08040ef8  size 350
.thumb
.org 0x40ef8
FUN_08040ef8:
	push {r4, r5, r6, r7, lr}	@ 00040ef8 f0b5
.org 0x40efa
	adds r4, r0, #0	@ 00040efa 041c
.org 0x40efc
	ldr r5, [r4, #40]	@ 00040efc a56a
.org 0x40efe
	bl 0x1cff0	@ 00040efe dcf777f8
.org 0x40f02
	ldrb r0, [r5, #30]	@ 00040f02 a87f
.org 0x40f04
	lsls r0, r0, #8	@ 00040f04 0002
.org 0x40f06
	adds r1, r5, #0	@ 00040f06 291c
.org 0x40f08
	adds r1, #112	@ 00040f08 7031
.org 0x40f0a
	ldrb r1, [r1, #0]	@ 00040f0a 0978
.org 0x40f0c
	orrs r1, r0	@ 00040f0c 0143
.org 0x40f0e
	ldr r0, [pc, #24]	@ 00040f0e 0648
.org 0x40f10
	cmp r1, r0	@ 00040f10 8142
.org 0x40f12
	beq.n 0x40f78	@ 00040f12 31d0
.org 0x40f14
	cmp r1, r0	@ 00040f14 8142
.org 0x40f16
	bgt.n 0x40f40	@ 00040f16 13dc
.org 0x40f18
	subs r0, #254	@ 00040f18 fe38
.org 0x40f1a
	cmp r1, r0	@ 00040f1a 8142
.org 0x40f1c
	beq.n 0x40f6c	@ 00040f1c 26d0
.org 0x40f1e
	cmp r1, r0	@ 00040f1e 8142
.org 0x40f20
	bgt.n 0x40f2c	@ 00040f20 04dc
.org 0x40f22
	subs r0, #2	@ 00040f22 0238
.org 0x40f24
	b.n 0x40f34	@ 00040f24 06e0
.org 0x40f26
	.byte 0x00	@ 00040f26 data
.org 0x40f27
	.byte 0x00	@ 00040f27 data
.org 0x40f28
	.byte 0x01,0x28,0x00,0x00	@ 00040f28 data
.org 0x40f2c
	ldr r0, [pc, #12]	@ 00040f2c 0348
.org 0x40f2e
	cmp r1, r0	@ 00040f2e 8142
.org 0x40f30
	beq.n 0x40f6c	@ 00040f30 1cd0
.org 0x40f32
	adds r0, #2	@ 00040f32 0230
.org 0x40f34
	cmp r1, r0	@ 00040f34 8142
.org 0x40f36
	beq.n 0x40f6c	@ 00040f36 19d0
.org 0x40f38
	b.n 0x40f94	@ 00040f38 2ce0
.org 0x40f3a
	.byte 0x00	@ 00040f3a data
.org 0x40f3b
	.byte 0x00	@ 00040f3b data
.org 0x40f3c
	.byte 0x05,0x27,0x00,0x00	@ 00040f3c data
.org 0x40f40
	ldr r0, [pc, #16]	@ 00040f40 0448
.org 0x40f42
	cmp r1, r0	@ 00040f42 8142
.org 0x40f44
	beq.n 0x40f78	@ 00040f44 18d0
.org 0x40f46
	cmp r1, r0	@ 00040f46 8142
.org 0x40f48
	bgt.n 0x40f58	@ 00040f48 06dc
.org 0x40f4a
	subs r0, #2	@ 00040f4a 0238
.org 0x40f4c
	cmp r1, r0	@ 00040f4c 8142
.org 0x40f4e
	beq.n 0x40f78	@ 00040f4e 13d0
.org 0x40f50
	b.n 0x40f94	@ 00040f50 20e0
.org 0x40f52
	.byte 0x00	@ 00040f52 data
.org 0x40f53
	.byte 0x00	@ 00040f53 data
.org 0x40f54
	.byte 0x05,0x28,0x00,0x00	@ 00040f54 data
.org 0x40f58
	ldr r0, [pc, #12]	@ 00040f58 0348
.org 0x40f5a
	cmp r1, r0	@ 00040f5a 8142
.org 0x40f5c
	beq.n 0x40f78	@ 00040f5c 0cd0
.org 0x40f5e
	adds r0, #250	@ 00040f5e fa30
.org 0x40f60
	cmp r1, r0	@ 00040f60 8142
.org 0x40f62
	beq.n 0x40f84	@ 00040f62 0fd0
.org 0x40f64
	b.n 0x40f94	@ 00040f64 16e0
.org 0x40f66
	.byte 0x00	@ 00040f66 data
.org 0x40f67
	.byte 0x00	@ 00040f67 data
.org 0x40f68
	.byte 0x07,0x28,0x00,0x00	@ 00040f68 data
.org 0x40f6c
	movs r6, #152	@ 00040f6c 9826
.org 0x40f6e
	lsls r6, r6, #5	@ 00040f6e 7601
.org 0x40f70
	ldr r7, [pc, #0]	@ 00040f70 004f
.org 0x40f72
	b.n 0x40fd0	@ 00040f72 2de0
.org 0x40f74
	.byte 0x00,0xd8,0xff,0xff	@ 00040f74 data
.org 0x40f78
	movs r6, #208	@ 00040f78 d026
.org 0x40f7a
	lsls r6, r6, #4	@ 00040f7a 3601
.org 0x40f7c
	ldr r7, [pc, #0]	@ 00040f7c 004f
.org 0x40f7e
	b.n 0x40fd0	@ 00040f7e 27e0
.org 0x40f80
	.byte 0x00,0xd6,0xff,0xff	@ 00040f80 data
.org 0x40f84
	ldr r6, [pc, #4]	@ 00040f84 014e
.org 0x40f86
	ldr r7, [pc, #8]	@ 00040f86 024f
.org 0x40f88
	b.n 0x40fd0	@ 00040f88 22e0
.org 0x40f8a
	.byte 0x00	@ 00040f8a data
.org 0x40f8b
	.byte 0x00	@ 00040f8b data
.org 0x40f8c
	.byte 0x00,0xf4,0xff,0xff	@ 00040f8c data
.org 0x40f90
	.byte 0x00,0xfa,0xff,0xff	@ 00040f90 data
.org 0x40f94
	ldrb r1, [r4, #10]	@ 00040f94 a17a
.org 0x40f96
	movs r0, #254	@ 00040f96 fe20
.org 0x40f98
	ands r0, r1	@ 00040f98 0840
.org 0x40f9a
	movs r2, #0	@ 00040f9a 0022
.org 0x40f9c
	movs r1, #253	@ 00040f9c fd21
.org 0x40f9e
	ands r0, r1	@ 00040f9e 0840
.org 0x40fa0
	strb r0, [r4, #10]	@ 00040fa0 a072
.org 0x40fa2
	adds r0, r4, #0	@ 00040fa2 201c
.org 0x40fa4
	adds r0, #140	@ 00040fa4 8c30
.org 0x40fa6
	str r2, [r0, #0]	@ 00040fa6 0260
.org 0x40fa8
	adds r0, #4	@ 00040fa8 0430
.org 0x40faa
	str r2, [r0, #0]	@ 00040faa 0260
.org 0x40fac
	adds r0, #4	@ 00040fac 0430
.org 0x40fae
	strb r2, [r0, #0]	@ 00040fae 0270
.org 0x40fb0
	ldrb r1, [r4, #10]	@ 00040fb0 a17a
.org 0x40fb2
	movs r0, #251	@ 00040fb2 fb20
.org 0x40fb4
	ands r0, r1	@ 00040fb4 0840
.org 0x40fb6
	strb r0, [r4, #10]	@ 00040fb6 a072
.org 0x40fb8
	ldr r1, [pc, #16]	@ 00040fb8 0449
.org 0x40fba
	ldrb r0, [r4, #9]	@ 00040fba 607a
.org 0x40fbc
	lsls r0, r0, #2	@ 00040fbc 8000
.org 0x40fbe
	adds r0, r0, r1	@ 00040fbe 4018
.org 0x40fc0
	movs r1, #3	@ 00040fc0 0321
.org 0x40fc2
	str r1, [r4, #12]	@ 00040fc2 e160
.org 0x40fc4
	ldr r0, [r0, #0]	@ 00040fc4 0068
.org 0x40fc6
	ldr r0, [r0, #12]	@ 00040fc6 c068
.org 0x40fc8
	str r0, [r4, #20]	@ 00040fc8 6061
.org 0x40fca
	b.n 0x4108e	@ 00040fca 60e0
.org 0x40fcc
	.byte 0xf8,0x39,0x85,0x08	@ 00040fcc data
.org 0x40fd0
	ldrb r1, [r5, #30]	@ 00040fd0 a97f
.org 0x40fd2
	lsls r1, r1, #8	@ 00040fd2 0902
.org 0x40fd4
	adds r0, r5, #0	@ 00040fd4 281c
.org 0x40fd6
	adds r0, #112	@ 00040fd6 7030
.org 0x40fd8
	ldrb r0, [r0, #0]	@ 00040fd8 0078
.org 0x40fda
	orrs r0, r1	@ 00040fda 0843
.org 0x40fdc
	ldr r1, [pc, #32]	@ 00040fdc 0849
.org 0x40fde
	cmp r0, r1	@ 00040fde 8842
.org 0x40fe0
	bne.n 0x41004	@ 00040fe0 10d1
.org 0x40fe2
	adds r1, r4, #0	@ 00040fe2 211c
.org 0x40fe4
	adds r1, #36	@ 00040fe4 2431
.org 0x40fe6
	movs r0, #224	@ 00040fe6 e020
.org 0x40fe8
	strb r0, [r1, #0]	@ 00040fe8 0870
.org 0x40fea
	ldrb r0, [r5, #10]	@ 00040fea a87a
.org 0x40fec
	lsrs r0, r0, #4	@ 00040fec 0009
.org 0x40fee
	movs r2, #1	@ 00040fee 0122
.org 0x40ff0
	bics r2, r0	@ 00040ff0 8243
.org 0x40ff2
	cmp r2, #0	@ 00040ff2 002a
.org 0x40ff4
	beq.n 0x41050	@ 00040ff4 2cd0
.org 0x40ff6
	ldrb r0, [r4, #10]	@ 00040ff6 a07a
.org 0x40ff8
	movs r1, #16	@ 00040ff8 1021
.org 0x40ffa
	orrs r0, r1	@ 00040ffa 0843
.org 0x40ffc
	b.n 0x41056	@ 00040ffc 2be0
.org 0x40ffe
	.byte 0x00	@ 00040ffe data
.org 0x40fff
	.byte 0x00	@ 00040fff data
.org 0x41000
	.byte 0x01,0x29,0x00,0x00	@ 00041000 data
.org 0x41004
	adds r0, r4, #0	@ 00041004 201c
.org 0x41006
	adds r0, #188	@ 00041006 bc30
.org 0x41008
	ldrb r1, [r0, #0]	@ 00041008 0178
.org 0x4100a
	subs r0, #152	@ 0004100a 9838
.org 0x4100c
	strb r1, [r0, #0]	@ 0004100c 0170
.org 0x4100e
	ldr r1, [pc, #56]	@ 0004100e 0e49
.org 0x41010
	ldr r2, [pc, #56]	@ 00041010 0e4a
.org 0x41012
	adds r0, r5, r2	@ 00041012 a818
.org 0x41014
	ldrb r0, [r0, #0]	@ 00041014 0078
.org 0x41016
	lsls r0, r0, #2	@ 00041016 8000
.org 0x41018
	adds r0, r0, r1	@ 00041018 4018
.org 0x4101a
	adds r1, r5, #0	@ 0004101a 291c
.org 0x4101c
	adds r1, #180	@ 0004101c b431
.org 0x4101e
	ldrb r1, [r1, #15]	@ 0004101e c97b
.org 0x41020
	ldr r2, [r0, #0]	@ 00041020 0268
.org 0x41022
	lsls r0, r1, #1	@ 00041022 4800
.org 0x41024
	adds r0, r0, r1	@ 00041024 4018
.org 0x41026
	lsls r0, r0, #2	@ 00041026 8000
.org 0x41028
	adds r0, r0, r2	@ 00041028 8018
.org 0x4102a
	ldr r1, [r0, #4]	@ 0004102a 4168
.org 0x4102c
	adds r6, r6, r1	@ 0004102c 7618
.org 0x4102e
	ldr r0, [r0, #8]	@ 0004102e 8068
.org 0x41030
	adds r7, r7, r0	@ 00041030 3f18
.org 0x41032
	ldrb r0, [r5, #10]	@ 00041032 a87a
.org 0x41034
	lsrs r2, r0, #4	@ 00041034 0209
.org 0x41036
	movs r0, #1	@ 00041036 0120
.org 0x41038
	ands r2, r0	@ 00041038 0240
.org 0x4103a
	cmp r2, #0	@ 0004103a 002a
.org 0x4103c
	beq.n 0x41050	@ 0004103c 08d0
.org 0x4103e
	ldrb r0, [r4, #10]	@ 0004103e a07a
.org 0x41040
	movs r1, #16	@ 00041040 1021
.org 0x41042
	orrs r0, r1	@ 00041042 0843
.org 0x41044
	b.n 0x41056	@ 00041044 07e0
.org 0x41046
	.byte 0x00	@ 00041046 data
.org 0x41047
	.byte 0x00	@ 00041047 data
.org 0x41048
	.byte 0x9c,0x59,0x85,0x08	@ 00041048 data
.org 0x4104c
	.byte 0xc9,0x02,0x00,0x00	@ 0004104c data
.org 0x41050
	ldrb r1, [r4, #10]	@ 00041050 a17a
.org 0x41052
	movs r0, #239	@ 00041052 ef20
.org 0x41054
	ands r0, r1	@ 00041054 0840
