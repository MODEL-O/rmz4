@ FUN_08102074  entry 0x08102074  size 140
.thumb
.org 0x102074
FUN_08102074:
	push {r4, r5, r6, r7, lr}	@ 00102074 f0b5
.org 0x102076
	adds r6, r0, #0	@ 00102076 061c
.org 0x102078
	adds r7, r1, #0	@ 00102078 0f1c
.org 0x10207a
	ldr r5, [r6, #8]	@ 0010207a b568
.org 0x10207c
	ldr r4, [r5, #40]	@ 0010207c ac6a
.org 0x10207e
	adds r0, r5, #0	@ 0010207e 281c
.org 0x102080
	bl 0x1cc9c	@ 00102080 1af70cfe
.org 0x102084
	adds r0, r5, #0	@ 00102084 281c
.org 0x102086
	adds r0, #192	@ 00102086 c030
.org 0x102088
	ldrh r1, [r0, #0]	@ 00102088 0188
.org 0x10208a
	adds r0, r5, #0	@ 0010208a 281c
.org 0x10208c
	bl 0x1cf00	@ 0010208c 1af738ff
.org 0x102090
	adds r2, r5, #0	@ 00102090 2a1c
.org 0x102092
	adds r2, #73	@ 00102092 4932
.org 0x102094
	ldrb r1, [r2, #0]	@ 00102094 1178
.org 0x102096
	movs r0, #13	@ 00102096 0d20
.org 0x102098
	negs r0, r0	@ 00102098 4042
.org 0x10209a
	ands r0, r1	@ 0010209a 0840
.org 0x10209c
	strb r0, [r2, #0]	@ 0010209c 1070
.org 0x10209e
	adds r0, r5, #0	@ 0010209e 281c
.org 0x1020a0
	bl 0x1cff0	@ 001020a0 1af7a6ff
.org 0x1020a4
	ldr r0, [r4, #84]	@ 001020a4 606d
.org 0x1020a6
	movs r1, #240	@ 001020a6 f021
.org 0x1020a8
	lsls r1, r1, #7	@ 001020a8 c901
.org 0x1020aa
	adds r0, r0, r1	@ 001020aa 4018
.org 0x1020ac
	ldr r1, [r7, #0]	@ 001020ac 3968
.org 0x1020ae
	adds r2, r1, r0	@ 001020ae 0a18
.org 0x1020b0
	str r2, [r5, #84]	@ 001020b0 6a65
.org 0x1020b2
	ldr r1, [r4, #88]	@ 001020b2 a16d
.org 0x1020b4
	ldr r0, [pc, #16]	@ 001020b4 0448
.org 0x1020b6
	adds r1, r1, r0	@ 001020b6 0918
.org 0x1020b8
	ldr r0, [r7, #4]	@ 001020b8 7868
.org 0x1020ba
	adds r0, r0, r1	@ 001020ba 4018
.org 0x1020bc
	str r0, [r5, #88]	@ 001020bc a865
.org 0x1020be
	ldrb r0, [r5, #17]	@ 001020be 687c
.org 0x1020c0
	cmp r0, #0	@ 001020c0 0028
.org 0x1020c2
	bne.n 0x1020d0	@ 001020c2 05d1
.org 0x1020c4
	ldr r1, [pc, #4]	@ 001020c4 0149
.org 0x1020c6
	b.n 0x1020de	@ 001020c6 0ae0
.org 0x1020c8
	.byte 0x00,0xb0,0xff,0xff	@ 001020c8 data
.org 0x1020cc
	.byte 0x00,0xf0,0xff,0xff	@ 001020cc data
.org 0x1020d0
	cmp r0, #1	@ 001020d0 0128
.org 0x1020d2
	bne.n 0x1020dc	@ 001020d2 03d1
.org 0x1020d4
	ldr r1, [pc, #0]	@ 001020d4 0049
.org 0x1020d6
	b.n 0x1020de	@ 001020d6 02e0
.org 0x1020d8
	.byte 0x00,0xe0,0xff,0xff	@ 001020d8 data
.org 0x1020dc
	ldr r1, [pc, #44]	@ 001020dc 0b49
.org 0x1020de
	adds r0, r2, r1	@ 001020de 5018
.org 0x1020e0
	str r0, [r5, #84]	@ 001020e0 6865
.org 0x1020e2
	adds r0, r5, #0	@ 001020e2 281c
.org 0x1020e4
	adds r0, #84	@ 001020e4 5430
.org 0x1020e6
	str r0, [r5, #64]	@ 001020e6 2864
.org 0x1020e8
	ldr r2, [r6, #4]	@ 001020e8 7268
.org 0x1020ea
	adds r0, r6, #0	@ 001020ea 301c
.org 0x1020ec
	adds r1, r7, #0	@ 001020ec 391c
.org 0x1020ee
	bl 0x128f84	@ 001020ee 26f049ff
.org 0x1020f2
	adds r0, r5, #0	@ 001020f2 281c
.org 0x1020f4
	adds r0, #52	@ 001020f4 3430
.org 0x1020f6
	ldr r1, [pc, #24]	@ 001020f6 0649
.org 0x1020f8
	bl 0x2c94	@ 001020f8 00f7ccfd
.org 0x1020fc
	str r5, [r5, #60]	@ 001020fc ed63
.org 0x1020fe
	ldrb r1, [r5, #10]	@ 001020fe a97a
