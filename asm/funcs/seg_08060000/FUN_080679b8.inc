@ FUN_080679b8  entry 0x080679b8  size 194
.thumb
.org 0x679b8
FUN_080679b8:
	push {r4, r5, lr}	@ 000679b8 30b5
.org 0x679ba
	sub sp, #4	@ 000679ba 81b0
.org 0x679bc
	adds r4, r0, #0	@ 000679bc 041c
.org 0x679be
	ldrb r0, [r4, #14]	@ 000679be a07b
.org 0x679c0
	cmp r0, #0	@ 000679c0 0028
.org 0x679c2
	bne.n 0x679fc	@ 000679c2 1bd1
.org 0x679c4
	adds r0, r4, #0	@ 000679c4 201c
.org 0x679c6
	adds r0, #221	@ 000679c6 dd30
.org 0x679c8
	ldrb r0, [r0, #0]	@ 000679c8 0078
.org 0x679ca
	cmp r0, #0	@ 000679ca 0028
.org 0x679cc
	beq.n 0x679dc	@ 000679cc 06d0
.org 0x679ce
	ldr r1, [pc, #8]	@ 000679ce 0249
.org 0x679d0
	adds r0, r4, #0	@ 000679d0 201c
.org 0x679d2
	bl 0x1cf00	@ 000679d2 b5f795fa
.org 0x679d6
	b.n 0x679e4	@ 000679d6 05e0
.org 0x679d8
	.byte 0x1c,0xa9,0x00,0x00	@ 000679d8 data
.org 0x679dc
	ldr r1, [pc, #24]	@ 000679dc 0649
.org 0x679de
	adds r0, r4, #0	@ 000679de 201c
.org 0x679e0
	bl 0x1cf00	@ 000679e0 b5f78efa
.org 0x679e4
	adds r1, r4, #0	@ 000679e4 211c
.org 0x679e6
	adds r1, #37	@ 000679e6 2531
.org 0x679e8
	movs r0, #24	@ 000679e8 1820
.org 0x679ea
	strb r0, [r1, #0]	@ 000679ea 0870
.org 0x679ec
	movs r0, #101	@ 000679ec 6520
.org 0x679ee
	bl 0x2b10	@ 000679ee 9bf78ff8
.org 0x679f2
	movs r0, #64	@ 000679f2 4020
.org 0x679f4
	strb r0, [r4, #18]	@ 000679f4 a074
.org 0x679f6
	b.n 0x67a5e	@ 000679f6 32e0
.org 0x679f8
	.byte 0x14,0xa9,0x00,0x00	@ 000679f8 data
.org 0x679fc
	cmp r0, #1	@ 000679fc 0128
.org 0x679fe
	bne.n 0x67a64	@ 000679fe 31d1
.org 0x67a00
	adds r0, r4, #0	@ 00067a00 201c
.org 0x67a02
	adds r0, #113	@ 00067a02 7130
.org 0x67a04
	ldrb r0, [r0, #0]	@ 00067a04 0078
.org 0x67a06
	lsls r0, r0, #24	@ 00067a06 0006
.org 0x67a08
	asrs r0, r0, #24	@ 00067a08 0016
.org 0x67a0a
	cmp r0, #2	@ 00067a0a 0228
.org 0x67a0c
	ble.n 0x67a64	@ 00067a0c 2add
.org 0x67a0e
	adds r5, r4, #0	@ 00067a0e 251c
.org 0x67a10
	adds r5, #180	@ 00067a10 b435
.org 0x67a12
	adds r0, r4, #0	@ 00067a12 201c
.org 0x67a14
	adds r0, #221	@ 00067a14 dd30
.org 0x67a16
	ldrb r0, [r0, #0]	@ 00067a16 0078
.org 0x67a18
	cmp r0, #0	@ 00067a18 0028
.org 0x67a1a
	bne.n 0x67a5e	@ 00067a1a 20d1
.org 0x67a1c
	ldrb r1, [r4, #10]	@ 00067a1c a17a
.org 0x67a1e
	movs r0, #16	@ 00067a1e 1020
.org 0x67a20
	ands r0, r1	@ 00067a20 0840
.org 0x67a22
	cmp r0, #0	@ 00067a22 0028
.org 0x67a24
	beq.n 0x67a44	@ 00067a24 0ed0
.org 0x67a26
	ldr r1, [r4, #84]	@ 00067a26 616d
.org 0x67a28
	movs r0, #160	@ 00067a28 a020
.org 0x67a2a
	lsls r0, r0, #6	@ 00067a2a 8001
.org 0x67a2c
	adds r1, r1, r0	@ 00067a2c 0918
.org 0x67a2e
	ldr r2, [r4, #88]	@ 00067a2e a26d
.org 0x67a30
	ldr r0, [pc, #12]	@ 00067a30 0348
.org 0x67a32
	adds r2, r2, r0	@ 00067a32 1218
.org 0x67a34
	movs r0, #56	@ 00067a34 3820
.org 0x67a36
	str r0, [sp, #0]	@ 00067a36 0090
.org 0x67a38
	adds r0, r4, #0	@ 00067a38 201c
.org 0x67a3a
	movs r3, #1	@ 00067a3a 0123
.org 0x67a3c
	b.n 0x67a58	@ 00067a3c 0ce0
.org 0x67a3e
	.byte 0x00	@ 00067a3e data
.org 0x67a3f
	.byte 0x00	@ 00067a3f data
.org 0x67a40
	.byte 0x00,0xcb,0xff,0xff	@ 00067a40 data
.org 0x67a44
	ldr r1, [r4, #84]	@ 00067a44 616d
.org 0x67a46
	ldr r0, [pc, #64]	@ 00067a46 1048
.org 0x67a48
	adds r1, r1, r0	@ 00067a48 0918
.org 0x67a4a
	ldr r2, [r4, #88]	@ 00067a4a a26d
.org 0x67a4c
	ldr r0, [pc, #60]	@ 00067a4c 0f48
.org 0x67a4e
	adds r2, r2, r0	@ 00067a4e 1218
.org 0x67a50
	movs r0, #56	@ 00067a50 3820
.org 0x67a52
	str r0, [sp, #0]	@ 00067a52 0090
.org 0x67a54
	adds r0, r4, #0	@ 00067a54 201c
.org 0x67a56
	movs r3, #2	@ 00067a56 0223
.org 0x67a58
	bl 0xdebc8	@ 00067a58 77f0b6f8
.org 0x67a5c
	str r0, [r5, #20]	@ 00067a5c 6861
.org 0x67a5e
	ldrb r0, [r4, #14]	@ 00067a5e a07b
.org 0x67a60
	adds r0, #1	@ 00067a60 0130
.org 0x67a62
	strb r0, [r4, #14]	@ 00067a62 a073
.org 0x67a64
	adds r0, r4, #0	@ 00067a64 201c
.org 0x67a66
	bl 0x1cff0	@ 00067a66 b5f7c3fa
.org 0x67a6a
	ldrb r0, [r4, #18]	@ 00067a6a a07c
.org 0x67a6c
	subs r0, #1	@ 00067a6c 0138
.org 0x67a6e
	strb r0, [r4, #18]	@ 00067a6e a074
.org 0x67a70
	lsls r0, r0, #24	@ 00067a70 0006
.org 0x67a72
	lsrs r0, r0, #24	@ 00067a72 000e
.org 0x67a74
	cmp r0, #255	@ 00067a74 ff28
.org 0x67a76
	bne.n 0x67a80	@ 00067a76 03d1
.org 0x67a78
	movs r0, #19	@ 00067a78 1320
