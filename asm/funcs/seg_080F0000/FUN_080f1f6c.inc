@ FUN_080f1f6c  entry 0x080f1f6c  size 130
.thumb
.org 0xf1f6c
FUN_080f1f6c:
	push {r4, lr}	@ 000f1f6c 10b5
.org 0xf1f6e
	adds r4, r0, #0	@ 000f1f6e 041c
.org 0xf1f70
	ldrb r0, [r4, #17]	@ 000f1f70 607c
.org 0xf1f72
	cmp r0, #1	@ 000f1f72 0128
.org 0xf1f74
	beq.n 0xf1fb8	@ 000f1f74 20d0
.org 0xf1f76
	cmp r0, #1	@ 000f1f76 0128
.org 0xf1f78
	bgt.n 0xf1f80	@ 000f1f78 02dc
.org 0xf1f7a
	cmp r0, #0	@ 000f1f7a 0028
.org 0xf1f7c
	beq.n 0xf1f86	@ 000f1f7c 03d0
.org 0xf1f7e
	b.n 0xf1ff8	@ 000f1f7e 3be0
.org 0xf1f80
	cmp r0, #2	@ 000f1f80 0228
.org 0xf1f82
	beq.n 0xf1fe0	@ 000f1f82 2dd0
.org 0xf1f84
	b.n 0xf1ff8	@ 000f1f84 38e0
.org 0xf1f86
	ldr r0, [pc, #72]	@ 000f1f86 1248
.org 0xf1f88
	movs r2, #169	@ 000f1f88 a922
.org 0xf1f8a
	lsls r2, r2, #1	@ 000f1f8a 5200
.org 0xf1f8c
	adds r0, r0, r2	@ 000f1f8c 8018
.org 0xf1f8e
	ldr r1, [pc, #68]	@ 000f1f8e 1149
.org 0xf1f90
	strh r1, [r0, #0]	@ 000f1f90 0180
.org 0xf1f92
	ldr r0, [pc, #68]	@ 000f1f92 1148
.org 0xf1f94
	adds r0, r0, r2	@ 000f1f94 8018
.org 0xf1f96
	movs r1, #4	@ 000f1f96 0421
.org 0xf1f98
	strh r1, [r0, #0]	@ 000f1f98 0180
.org 0xf1f9a
	movs r1, #169	@ 000f1f9a a921
.org 0xf1f9c
	lsls r1, r1, #8	@ 000f1f9c 0902
.org 0xf1f9e
	adds r0, r4, #0	@ 000f1f9e 201c
.org 0xf1fa0
	bl 0x1cf00	@ 000f1fa0 2af7aeff
.org 0xf1fa4
	ldr r0, [r4, #84]	@ 000f1fa4 606d
.org 0xf1fa6
	ldr r1, [r4, #88]	@ 000f1fa6 a16d
.org 0xf1fa8
	bl 0x8534	@ 000f1fa8 16f7c4fa
.org 0xf1fac
	ldr r1, [pc, #44]	@ 000f1fac 0b49
.org 0xf1fae
	adds r0, r0, r1	@ 000f1fae 4018
.org 0xf1fb0
	str r0, [r4, #88]	@ 000f1fb0 a065
.org 0xf1fb2
	ldrb r0, [r4, #17]	@ 000f1fb2 607c
.org 0xf1fb4
	adds r0, #1	@ 000f1fb4 0130
.org 0xf1fb6
	strb r0, [r4, #17]	@ 000f1fb6 6074
.org 0xf1fb8
	adds r0, r4, #0	@ 000f1fb8 201c
.org 0xf1fba
	bl 0x1cff0	@ 000f1fba 2bf719f8
.org 0xf1fbe
	ldr r0, [r4, #24]	@ 000f1fbe a069
.org 0xf1fc0
	ldrb r1, [r0, #9]	@ 000f1fc0 417a
.org 0xf1fc2
	movs r0, #1	@ 000f1fc2 0120
.org 0xf1fc4
	ands r0, r1	@ 000f1fc4 0840
.org 0xf1fc6
	cmp r0, #0	@ 000f1fc6 0028
.org 0xf1fc8
	beq.n 0xf1ff8	@ 000f1fc8 16d0
.org 0xf1fca
	movs r0, #30	@ 000f1fca 1e20
.org 0xf1fcc
	strb r0, [r4, #18]	@ 000f1fcc a074
.org 0xf1fce
	b.n 0xf1ff2	@ 000f1fce 10e0
.org 0xf1fd0
	.byte 0x40,0xe2,0x02,0x02	@ 000f1fd0 data
.org 0xf1fd4
	.byte 0xc3,0x02,0x00,0x00	@ 000f1fd4 data
.org 0xf1fd8
	.byte 0x40,0xdc,0x02,0x02	@ 000f1fd8 data
.org 0xf1fdc
	.byte 0x00,0xe0,0xff,0xff	@ 000f1fdc data
.org 0xf1fe0
	movs r1, #169	@ 000f1fe0 a921
.org 0xf1fe2
	lsls r1, r1, #8	@ 000f1fe2 0902
.org 0xf1fe4
	adds r0, r4, #0	@ 000f1fe4 201c
.org 0xf1fe6
	movs r2, #1	@ 000f1fe6 0122
.org 0xf1fe8
	bl 0xed7f8	@ 000f1fe8 fbf706fc
.org 0xf1fec
	lsls r0, r0, #16	@ 000f1fec 0004
