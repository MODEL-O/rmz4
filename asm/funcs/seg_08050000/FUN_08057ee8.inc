@ FUN_08057ee8  entry 0x08057ee8  size 196
.thumb
.org 0x57ee8
FUN_08057ee8:
	push {r4, lr}	@ 00057ee8 10b5
.org 0x57eea
	adds r4, r0, #0	@ 00057eea 041c
.org 0x57eec
	ldrb r0, [r4, #15]	@ 00057eec e07b
.org 0x57eee
	cmp r0, #0	@ 00057eee 0028
.org 0x57ef0
	bne.n 0x57f46	@ 00057ef0 29d1
.org 0x57ef2
	ldr r1, [pc, #28]	@ 00057ef2 0749
.org 0x57ef4
	adds r0, r4, #0	@ 00057ef4 201c
.org 0x57ef6
	bl 0x1cf00	@ 00057ef6 c5f703f8
.org 0x57efa
	adds r0, r4, #0	@ 00057efa 201c
.org 0x57efc
	adds r0, #204	@ 00057efc cc30
.org 0x57efe
	ldr r0, [r0, #0]	@ 00057efe 0068
.org 0x57f00
	movs r1, #240	@ 00057f00 f021
.org 0x57f02
	lsls r1, r1, #8	@ 00057f02 0902
.org 0x57f04
	adds r0, r0, r1	@ 00057f04 4018
.org 0x57f06
	ldr r1, [r4, #84]	@ 00057f06 616d
.org 0x57f08
	cmp r1, r0	@ 00057f08 8142
.org 0x57f0a
	bge.n 0x57f18	@ 00057f0a 05da
.org 0x57f0c
	ldr r0, [pc, #4]	@ 00057f0c 0148
.org 0x57f0e
	b.n 0x57f3e	@ 00057f0e 16e0
.org 0x57f10
	.byte 0x18,0xa0,0x00,0x00	@ 00057f10 data
.org 0x57f14
	.byte 0x00,0xfc,0xff,0xff	@ 00057f14 data
.org 0x57f18
	cmp r1, r0	@ 00057f18 8142
.org 0x57f1a
	ble.n 0x57f22	@ 00057f1a 02dd
.org 0x57f1c
	movs r0, #128	@ 00057f1c 8020
.org 0x57f1e
	lsls r0, r0, #3	@ 00057f1e c000
.org 0x57f20
	b.n 0x57f3e	@ 00057f20 0de0
.org 0x57f22
	ldr r2, [pc, #144]	@ 00057f22 244a
.org 0x57f24
	ldr r1, [r2, #0]	@ 00057f24 1168
.org 0x57f26
	ldr r0, [pc, #144]	@ 00057f26 2448
.org 0x57f28
	muls r0, r1	@ 00057f28 4843
.org 0x57f2a
	ldr r1, [pc, #144]	@ 00057f2a 2449
.org 0x57f2c
	adds r0, r0, r1	@ 00057f2c 4018
.org 0x57f2e
	lsls r0, r0, #1	@ 00057f2e 4000
.org 0x57f30
	lsrs r1, r0, #1	@ 00057f30 4108
.org 0x57f32
	str r1, [r2, #0]	@ 00057f32 1160
.org 0x57f34
	lsrs r0, r0, #17	@ 00057f34 400c
.org 0x57f36
	movs r1, #2	@ 00057f36 0221
.org 0x57f38
	ands r0, r1	@ 00057f38 0840
.org 0x57f3a
	subs r0, #1	@ 00057f3a 0138
.org 0x57f3c
	lsls r0, r0, #10	@ 00057f3c 8002
.org 0x57f3e
	str r0, [r4, #92]	@ 00057f3e e065
.org 0x57f40
	ldrb r0, [r4, #15]	@ 00057f40 e07b
.org 0x57f42
	adds r0, #1	@ 00057f42 0130
.org 0x57f44
	strb r0, [r4, #15]	@ 00057f44 e073
.org 0x57f46
	adds r0, r4, #0	@ 00057f46 201c
.org 0x57f48
	bl 0x1cff0	@ 00057f48 c5f752f8
.org 0x57f4c
	adds r0, r4, #0	@ 00057f4c 201c
.org 0x57f4e
	adds r0, #116	@ 00057f4e 7430
.org 0x57f50
	ldr r3, [pc, #108]	@ 00057f50 1b4b
.org 0x57f52
	ldrb r1, [r4, #30]	@ 00057f52 a17f
.org 0x57f54
	lsls r1, r1, #8	@ 00057f54 0902
.org 0x57f56
	adds r2, r4, #0	@ 00057f56 221c
.org 0x57f58
	adds r2, #112	@ 00057f58 7032
.org 0x57f5a
	ldrb r2, [r2, #0]	@ 00057f5a 1278
.org 0x57f5c
	orrs r1, r2	@ 00057f5c 1143
.org 0x57f5e
	ldr r2, [pc, #100]	@ 00057f5e 194a
.org 0x57f60
	adds r1, r1, r2	@ 00057f60 8918
.org 0x57f62
	lsls r1, r1, #2	@ 00057f62 8900
.org 0x57f64
	adds r1, r1, r3	@ 00057f64 c918
.org 0x57f66
	adds r2, r4, #0	@ 00057f66 221c
.org 0x57f68
	adds r2, #113	@ 00057f68 7132
.org 0x57f6a
	ldrb r2, [r2, #0]	@ 00057f6a 1278
.org 0x57f6c
	lsls r2, r2, #24	@ 00057f6c 1206
.org 0x57f6e
	asrs r2, r2, #24	@ 00057f6e 1216
.org 0x57f70
	ldr r1, [r1, #0]	@ 00057f70 0968
.org 0x57f72
	lsls r2, r2, #2	@ 00057f72 9200
.org 0x57f74
	adds r2, r2, r1	@ 00057f74 5218
.org 0x57f76
	ldr r1, [r2, #0]	@ 00057f76 1168
.org 0x57f78
	ldrb r2, [r1, #0]	@ 00057f78 0a78
.org 0x57f7a
	lsls r1, r2, #1	@ 00057f7a 5100
.org 0x57f7c
	adds r1, r1, r2	@ 00057f7c 8918
.org 0x57f7e
	lsls r1, r1, #3	@ 00057f7e c900
.org 0x57f80
	ldr r2, [pc, #68]	@ 00057f80 114a
.org 0x57f82
	adds r1, r1, r2	@ 00057f82 8918
.org 0x57f84
	bl 0x5784	@ 00057f84 adf7fefb
.org 0x57f88
	ldr r0, [r4, #84]	@ 00057f88 606d
.org 0x57f8a
	ldr r1, [r4, #92]	@ 00057f8a e16d
.org 0x57f8c
	adds r0, r0, r1	@ 00057f8c 4018
.org 0x57f8e
	str r0, [r4, #84]	@ 00057f8e 6065
.org 0x57f90
	adds r1, r4, #0	@ 00057f90 211c
.org 0x57f92
	adds r1, #204	@ 00057f92 cc31
.org 0x57f94
	ldr r1, [r1, #0]	@ 00057f94 0968
.org 0x57f96
	subs r0, r0, r1	@ 00057f96 401a
.org 0x57f98
	movs r1, #160	@ 00057f98 a021
.org 0x57f9a
	lsls r1, r1, #6	@ 00057f9a 8901
.org 0x57f9c
	adds r0, r0, r1	@ 00057f9c 4018
.org 0x57f9e
	movs r1, #140	@ 00057f9e 8c21
.org 0x57fa0
	lsls r1, r1, #10	@ 00057fa0 8902
.org 0x57fa2
	cmp r0, r1	@ 00057fa2 8842
.org 0x57fa4
	bls.n 0x57fae	@ 00057fa4 03d9
.org 0x57fa6
	movs r1, #0	@ 00057fa6 0021
.org 0x57fa8
	movs r0, #1	@ 00057fa8 0120
.org 0x57faa
	strb r0, [r4, #14]	@ 00057faa a073
