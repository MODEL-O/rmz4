@ FUN_080f1c44  entry 0x080f1c44  size 138
.thumb
.org 0xf1c44
FUN_080f1c44:
	push {r4, lr}	@ 000f1c44 10b5
.org 0xf1c46
	adds r4, r0, #0	@ 000f1c46 041c
.org 0xf1c48
	ldrb r0, [r4, #17]	@ 000f1c48 607c
.org 0xf1c4a
	cmp r0, #1	@ 000f1c4a 0128
.org 0xf1c4c
	beq.n 0xf1c9a	@ 000f1c4c 25d0
.org 0xf1c4e
	cmp r0, #1	@ 000f1c4e 0128
.org 0xf1c50
	bgt.n 0xf1c58	@ 000f1c50 02dc
.org 0xf1c52
	cmp r0, #0	@ 000f1c52 0028
.org 0xf1c54
	beq.n 0xf1c5e	@ 000f1c54 03d0
.org 0xf1c56
	b.n 0xf1cda	@ 000f1c56 40e0
.org 0xf1c58
	cmp r0, #2	@ 000f1c58 0228
.org 0xf1c5a
	beq.n 0xf1cc4	@ 000f1c5a 33d0
.org 0xf1c5c
	b.n 0xf1cda	@ 000f1c5c 3de0
.org 0xf1c5e
	ldr r0, [pc, #84]	@ 000f1c5e 1548
.org 0xf1c60
	movs r2, #167	@ 000f1c60 a722
.org 0xf1c62
	lsls r2, r2, #1	@ 000f1c62 5200
.org 0xf1c64
	adds r0, r0, r2	@ 000f1c64 8018
.org 0xf1c66
	ldr r1, [pc, #80]	@ 000f1c66 1449
.org 0xf1c68
	strh r1, [r0, #0]	@ 000f1c68 0180
.org 0xf1c6a
	ldr r0, [pc, #80]	@ 000f1c6a 1448
.org 0xf1c6c
	adds r0, r0, r2	@ 000f1c6c 8018
.org 0xf1c6e
	movs r1, #6	@ 000f1c6e 0621
.org 0xf1c70
	strh r1, [r0, #0]	@ 000f1c70 0180
.org 0xf1c72
	ldr r1, [pc, #76]	@ 000f1c72 1349
.org 0xf1c74
	adds r0, r4, #0	@ 000f1c74 201c
.org 0xf1c76
	bl 0x1cf00	@ 000f1c76 2bf743f9
.org 0xf1c7a
	adds r2, r4, #0	@ 000f1c7a 221c
.org 0xf1c7c
	adds r2, #73	@ 000f1c7c 4932
.org 0xf1c7e
	ldrb r1, [r2, #0]	@ 000f1c7e 1178
.org 0xf1c80
	movs r0, #13	@ 000f1c80 0d20
.org 0xf1c82
	negs r0, r0	@ 000f1c82 4042
.org 0xf1c84
	ands r0, r1	@ 000f1c84 0840
.org 0xf1c86
	movs r1, #4	@ 000f1c86 0421
.org 0xf1c88
	orrs r0, r1	@ 000f1c88 0843
.org 0xf1c8a
	strb r0, [r2, #0]	@ 000f1c8a 1070
.org 0xf1c8c
	adds r1, r4, #0	@ 000f1c8c 211c
.org 0xf1c8e
	adds r1, #37	@ 000f1c8e 2531
.org 0xf1c90
	movs r0, #29	@ 000f1c90 1d20
.org 0xf1c92
	strb r0, [r1, #0]	@ 000f1c92 0870
.org 0xf1c94
	ldrb r0, [r4, #17]	@ 000f1c94 607c
.org 0xf1c96
	adds r0, #1	@ 000f1c96 0130
.org 0xf1c98
	strb r0, [r4, #17]	@ 000f1c98 6074
.org 0xf1c9a
	adds r0, r4, #0	@ 000f1c9a 201c
.org 0xf1c9c
	bl 0x1cff0	@ 000f1c9c 2bf7a8f9
.org 0xf1ca0
	ldr r0, [r4, #24]	@ 000f1ca0 a069
.org 0xf1ca2
	ldrb r1, [r0, #9]	@ 000f1ca2 417a
.org 0xf1ca4
	movs r0, #1	@ 000f1ca4 0120
.org 0xf1ca6
	ands r0, r1	@ 000f1ca6 0840
.org 0xf1ca8
	cmp r0, #0	@ 000f1ca8 0028
.org 0xf1caa
	beq.n 0xf1cda	@ 000f1caa 16d0
.org 0xf1cac
	movs r0, #30	@ 000f1cac 1e20
.org 0xf1cae
	strb r0, [r4, #18]	@ 000f1cae a074
.org 0xf1cb0
	b.n 0xf1cd4	@ 000f1cb0 10e0
.org 0xf1cb2
	.byte 0x00	@ 000f1cb2 data
.org 0xf1cb3
	.byte 0x00	@ 000f1cb3 data
.org 0xf1cb4
	.byte 0x40,0xe2,0x02,0x02	@ 000f1cb4 data
.org 0xf1cb8
	.byte 0xee,0x02,0x00,0x00	@ 000f1cb8 data
.org 0xf1cbc
	.byte 0x40,0xdc,0x02,0x02	@ 000f1cbc data
.org 0xf1cc0
	.byte 0x01,0xa7,0x00,0x00	@ 000f1cc0 data
.org 0xf1cc4
	ldr r1, [pc, #24]	@ 000f1cc4 0649
.org 0xf1cc6
	adds r0, r4, #0	@ 000f1cc6 201c
.org 0xf1cc8
	movs r2, #1	@ 000f1cc8 0122
.org 0xf1cca
	bl 0xed7f8	@ 000f1cca fbf795fd
