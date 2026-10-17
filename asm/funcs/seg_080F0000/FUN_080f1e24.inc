@ FUN_080f1e24  entry 0x080f1e24  size 138
.thumb
.org 0xf1e24
FUN_080f1e24:
	push {r4, lr}	@ 000f1e24 10b5
.org 0xf1e26
	adds r4, r0, #0	@ 000f1e26 041c
.org 0xf1e28
	ldrb r0, [r4, #17]	@ 000f1e28 607c
.org 0xf1e2a
	cmp r0, #1	@ 000f1e2a 0128
.org 0xf1e2c
	beq.n 0xf1e7a	@ 000f1e2c 25d0
.org 0xf1e2e
	cmp r0, #1	@ 000f1e2e 0128
.org 0xf1e30
	bgt.n 0xf1e38	@ 000f1e30 02dc
.org 0xf1e32
	cmp r0, #0	@ 000f1e32 0028
.org 0xf1e34
	beq.n 0xf1e3e	@ 000f1e34 03d0
.org 0xf1e36
	b.n 0xf1eba	@ 000f1e36 40e0
.org 0xf1e38
	cmp r0, #2	@ 000f1e38 0228
.org 0xf1e3a
	beq.n 0xf1ea4	@ 000f1e3a 33d0
.org 0xf1e3c
	b.n 0xf1eba	@ 000f1e3c 3de0
.org 0xf1e3e
	ldr r0, [pc, #84]	@ 000f1e3e 1548
.org 0xf1e40
	movs r2, #163	@ 000f1e40 a322
.org 0xf1e42
	lsls r2, r2, #1	@ 000f1e42 5200
.org 0xf1e44
	adds r0, r0, r2	@ 000f1e44 8018
.org 0xf1e46
	ldr r1, [pc, #80]	@ 000f1e46 1449
.org 0xf1e48
	strh r1, [r0, #0]	@ 000f1e48 0180
.org 0xf1e4a
	ldr r0, [pc, #80]	@ 000f1e4a 1448
.org 0xf1e4c
	adds r0, r0, r2	@ 000f1e4c 8018
.org 0xf1e4e
	movs r1, #8	@ 000f1e4e 0821
.org 0xf1e50
	strh r1, [r0, #0]	@ 000f1e50 0180
.org 0xf1e52
	ldr r1, [pc, #76]	@ 000f1e52 1349
.org 0xf1e54
	adds r0, r4, #0	@ 000f1e54 201c
.org 0xf1e56
	bl 0x1cf00	@ 000f1e56 2bf753f8
.org 0xf1e5a
	adds r2, r4, #0	@ 000f1e5a 221c
.org 0xf1e5c
	adds r2, #73	@ 000f1e5c 4932
.org 0xf1e5e
	ldrb r1, [r2, #0]	@ 000f1e5e 1178
.org 0xf1e60
	movs r0, #13	@ 000f1e60 0d20
.org 0xf1e62
	negs r0, r0	@ 000f1e62 4042
.org 0xf1e64
	ands r0, r1	@ 000f1e64 0840
.org 0xf1e66
	movs r1, #4	@ 000f1e66 0421
.org 0xf1e68
	orrs r0, r1	@ 000f1e68 0843
.org 0xf1e6a
	strb r0, [r2, #0]	@ 000f1e6a 1070
.org 0xf1e6c
	adds r1, r4, #0	@ 000f1e6c 211c
.org 0xf1e6e
	adds r1, #37	@ 000f1e6e 2531
.org 0xf1e70
	movs r0, #29	@ 000f1e70 1d20
.org 0xf1e72
	strb r0, [r1, #0]	@ 000f1e72 0870
.org 0xf1e74
	ldrb r0, [r4, #17]	@ 000f1e74 607c
.org 0xf1e76
	adds r0, #1	@ 000f1e76 0130
.org 0xf1e78
	strb r0, [r4, #17]	@ 000f1e78 6074
.org 0xf1e7a
	adds r0, r4, #0	@ 000f1e7a 201c
.org 0xf1e7c
	bl 0x1cff0	@ 000f1e7c 2bf7b8f8
.org 0xf1e80
	ldr r0, [r4, #24]	@ 000f1e80 a069
.org 0xf1e82
	ldrb r1, [r0, #9]	@ 000f1e82 417a
.org 0xf1e84
	movs r0, #1	@ 000f1e84 0120
.org 0xf1e86
	ands r0, r1	@ 000f1e86 0840
.org 0xf1e88
	cmp r0, #0	@ 000f1e88 0028
.org 0xf1e8a
	beq.n 0xf1eba	@ 000f1e8a 16d0
.org 0xf1e8c
	movs r0, #30	@ 000f1e8c 1e20
.org 0xf1e8e
	strb r0, [r4, #18]	@ 000f1e8e a074
.org 0xf1e90
	b.n 0xf1eb4	@ 000f1e90 10e0
.org 0xf1e92
	.byte 0x00	@ 000f1e92 data
.org 0xf1e93
	.byte 0x00	@ 000f1e93 data
.org 0xf1e94
	.byte 0x40,0xe2,0x02,0x02	@ 000f1e94 data
.org 0xf1e98
	.byte 0xa7,0x03,0x00,0x00	@ 000f1e98 data
.org 0xf1e9c
	.byte 0x40,0xdc,0x02,0x02	@ 000f1e9c data
.org 0xf1ea0
	.byte 0x10,0xa3,0x00,0x00	@ 000f1ea0 data
.org 0xf1ea4
	ldr r1, [pc, #24]	@ 000f1ea4 0649
.org 0xf1ea6
	adds r0, r4, #0	@ 000f1ea6 201c
.org 0xf1ea8
	movs r2, #1	@ 000f1ea8 0122
.org 0xf1eaa
	bl 0xed7f8	@ 000f1eaa fbf7a5fc
