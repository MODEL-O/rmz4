@ FUN_080459c0  entry 0x080459c0  size 238
.thumb
.org 0x459c0
FUN_080459c0:
	push {r4, r5, r6, r7, lr}	@ 000459c0 f0b5
.org 0x459c2
	adds r4, r0, #0	@ 000459c2 041c
.org 0x459c4
	ldr r5, [r4, #40]	@ 000459c4 a56a
.org 0x459c6
	ldr r1, [pc, #100]	@ 000459c6 1949
.org 0x459c8
	ldrb r0, [r4, #9]	@ 000459c8 607a
.org 0x459ca
	lsls r0, r0, #2	@ 000459ca 8000
.org 0x459cc
	adds r0, r0, r1	@ 000459cc 4018
.org 0x459ce
	movs r6, #1	@ 000459ce 0126
.org 0x459d0
	str r6, [r4, #12]	@ 000459d0 e660
.org 0x459d2
	ldr r0, [r0, #0]	@ 000459d2 0068
.org 0x459d4
	ldr r0, [r0, #4]	@ 000459d4 4068
.org 0x459d6
	str r0, [r4, #20]	@ 000459d6 6061
.org 0x459d8
	adds r0, r4, #0	@ 000459d8 201c
.org 0x459da
	bl 0x1cc9c	@ 000459da d7f75ff9
.org 0x459de
	adds r0, r4, #0	@ 000459de 201c
.org 0x459e0
	bl 0x1ceec	@ 000459e0 d7f784fa
.org 0x459e4
	ldrb r0, [r4, #10]	@ 000459e4 a07a
.org 0x459e6
	movs r3, #1	@ 000459e6 0123
.org 0x459e8
	movs r7, #0	@ 000459e8 0027
.org 0x459ea
	orrs r0, r3	@ 000459ea 1843
.org 0x459ec
	movs r1, #2	@ 000459ec 0221
.org 0x459ee
	orrs r0, r1	@ 000459ee 0843
.org 0x459f0
	strb r0, [r4, #10]	@ 000459f0 a072
.org 0x459f2
	ldrb r0, [r4, #17]	@ 000459f2 607c
.org 0x459f4
	cmp r0, #2	@ 000459f4 0228
.org 0x459f6
	bne.n 0x45a34	@ 000459f6 1dd1
.org 0x459f8
	ldr r1, [pc, #52]	@ 000459f8 0d49
.org 0x459fa
	adds r0, r5, #0	@ 000459fa 281c
.org 0x459fc
	adds r0, #113	@ 000459fc 7130
.org 0x459fe
	ldrb r2, [r0, #0]	@ 000459fe 0278
.org 0x45a00
	eors r2, r3	@ 00045a00 5a40
.org 0x45a02
	lsls r2, r2, #24	@ 00045a02 1206
.org 0x45a04
	asrs r2, r2, #8	@ 00045a04 1212
.org 0x45a06
	lsrs r2, r2, #16	@ 00045a06 120c
.org 0x45a08
	adds r0, #1	@ 00045a08 0130
.org 0x45a0a
	movs r3, #0	@ 00045a0a 0023
.org 0x45a0c
	ldrsb r3, [r0, r3]	@ 00045a0c c356
.org 0x45a0e
	lsls r3, r3, #16	@ 00045a0e 1b04
.org 0x45a10
	lsrs r3, r3, #16	@ 00045a10 1b0c
.org 0x45a12
	adds r0, r4, #0	@ 00045a12 201c
.org 0x45a14
	bl 0x1cfc8	@ 00045a14 d7f7d8fa
.org 0x45a18
	ldrb r0, [r5, #10]	@ 00045a18 a87a
.org 0x45a1a
	lsrs r0, r0, #4	@ 00045a1a 0009
.org 0x45a1c
	adds r2, r6, #0	@ 00045a1c 321c
.org 0x45a1e
	bics r2, r0	@ 00045a1e 8243
.org 0x45a20
	cmp r2, #0	@ 00045a20 002a
.org 0x45a22
	beq.n 0x45a6c	@ 00045a22 23d0
.org 0x45a24
	ldrb r0, [r4, #10]	@ 00045a24 a07a
.org 0x45a26
	movs r1, #16	@ 00045a26 1021
.org 0x45a28
	orrs r0, r1	@ 00045a28 0843
.org 0x45a2a
	b.n 0x45a72	@ 00045a2a 22e0
.org 0x45a2c
	.byte 0xf8,0x39,0x85,0x08	@ 00045a2c data
.org 0x45a30
	.byte 0x06,0x84,0x00,0x00	@ 00045a30 data
.org 0x45a34
	ldr r1, [pc, #48]	@ 00045a34 0c49
.org 0x45a36
	adds r0, r5, #0	@ 00045a36 281c
.org 0x45a38
	adds r0, #113	@ 00045a38 7130
.org 0x45a3a
	ldrb r2, [r0, #0]	@ 00045a3a 0278
.org 0x45a3c
	eors r2, r3	@ 00045a3c 5a40
.org 0x45a3e
	lsls r2, r2, #24	@ 00045a3e 1206
.org 0x45a40
	asrs r2, r2, #8	@ 00045a40 1212
.org 0x45a42
	lsrs r2, r2, #16	@ 00045a42 120c
.org 0x45a44
	adds r0, #1	@ 00045a44 0130
.org 0x45a46
	movs r3, #0	@ 00045a46 0023
.org 0x45a48
	ldrsb r3, [r0, r3]	@ 00045a48 c356
.org 0x45a4a
	lsls r3, r3, #16	@ 00045a4a 1b04
.org 0x45a4c
	lsrs r3, r3, #16	@ 00045a4c 1b0c
.org 0x45a4e
	adds r0, r4, #0	@ 00045a4e 201c
.org 0x45a50
	bl 0x1cfc8	@ 00045a50 d7f7bafa
.org 0x45a54
	ldrb r0, [r5, #10]	@ 00045a54 a87a
.org 0x45a56
	lsrs r2, r0, #4	@ 00045a56 0209
.org 0x45a58
	ands r2, r6	@ 00045a58 3240
.org 0x45a5a
	cmp r2, #0	@ 00045a5a 002a
.org 0x45a5c
	beq.n 0x45a6c	@ 00045a5c 06d0
.org 0x45a5e
	ldrb r0, [r4, #10]	@ 00045a5e a07a
.org 0x45a60
	movs r1, #16	@ 00045a60 1021
.org 0x45a62
	orrs r0, r1	@ 00045a62 0843
.org 0x45a64
	b.n 0x45a72	@ 00045a64 05e0
.org 0x45a66
	.byte 0x00	@ 00045a66 data
.org 0x45a67
	.byte 0x00	@ 00045a67 data
.org 0x45a68
	.byte 0x08,0x84,0x00,0x00	@ 00045a68 data
.org 0x45a6c
	ldrb r1, [r4, #10]	@ 00045a6c a17a
.org 0x45a6e
	movs r0, #239	@ 00045a6e ef20
.org 0x45a70
	ands r0, r1	@ 00045a70 0840
.org 0x45a72
	strb r0, [r4, #10]	@ 00045a72 a072
.org 0x45a74
	adds r1, r2, #0	@ 00045a74 111c
.org 0x45a76
	adds r0, r4, #0	@ 00045a76 201c
.org 0x45a78
	adds r0, #76	@ 00045a78 4c30
.org 0x45a7a
	strb r1, [r0, #0]	@ 00045a7a 0170
.org 0x45a7c
	adds r3, r4, #0	@ 00045a7c 231c
.org 0x45a7e
	adds r3, #74	@ 00045a7e 4a33
.org 0x45a80
	lsls r1, r1, #4	@ 00045a80 0901
.org 0x45a82
	ldrb r2, [r3, #0]	@ 00045a82 1a78
.org 0x45a84
	movs r0, #17	@ 00045a84 1120
.org 0x45a86
	negs r0, r0	@ 00045a86 4042
.org 0x45a88
	ands r0, r2	@ 00045a88 1040
.org 0x45a8a
	orrs r0, r1	@ 00045a8a 0843
.org 0x45a8c
	strb r0, [r3, #0]	@ 00045a8c 1870
.org 0x45a8e
	adds r2, r4, #0	@ 00045a8e 221c
.org 0x45a90
	adds r2, #188	@ 00045a90 bc32
.org 0x45a92
	adds r0, r5, #0	@ 00045a92 281c
.org 0x45a94
	adds r0, #180	@ 00045a94 b430
.org 0x45a96
	ldr r0, [r0, #0]	@ 00045a96 0068
.org 0x45a98
	ldr r1, [r4, #92]	@ 00045a98 e16d
.org 0x45a9a
	subs r0, r0, r1	@ 00045a9a 401a
.org 0x45a9c
	str r0, [r2, #0]	@ 00045a9c 1060
.org 0x45a9e
	adds r1, r4, #0	@ 00045a9e 211c
.org 0x45aa0
	adds r1, #192	@ 00045aa0 c031
.org 0x45aa2
	adds r0, r5, #0	@ 00045aa2 281c
.org 0x45aa4
	adds r0, #184	@ 00045aa4 b830
.org 0x45aa6
	ldr r0, [r0, #0]	@ 00045aa6 0068
.org 0x45aa8
	str r0, [r1, #0]	@ 00045aa8 0860
.org 0x45aaa
	adds r0, r4, #0	@ 00045aaa 201c
.org 0x45aac
	bl 0x1cff0	@ 00045aac d7f7a0fa
