@ FUN_0804fda8  entry 0x0804fda8  size 300
.thumb
.org 0x4fda8
FUN_0804fda8:
	push {r4, r5, r6, lr}	@ 0004fda8 70b5
.org 0x4fdaa
	adds r4, r0, #0	@ 0004fdaa 041c
.org 0x4fdac
	ldr r5, [r4, #40]	@ 0004fdac a56a
.org 0x4fdae
	ldrb r0, [r4, #18]	@ 0004fdae a07c
.org 0x4fdb0
	adds r1, r0, #1	@ 0004fdb0 411c
.org 0x4fdb2
	strb r1, [r4, #18]	@ 0004fdb2 a174
.org 0x4fdb4
	lsls r0, r0, #24	@ 0004fdb4 0006
.org 0x4fdb6
	lsrs r0, r0, #24	@ 0004fdb6 000e
.org 0x4fdb8
	cmp r0, #8	@ 0004fdb8 0828
.org 0x4fdba
	bhi.n 0x4fdca	@ 0004fdba 06d8
.org 0x4fdbc
	movs r1, #168	@ 0004fdbc a821
.org 0x4fdbe
	lsls r1, r1, #1	@ 0004fdbe 4900
.org 0x4fdc0
	adds r0, r5, r1	@ 0004fdc0 6818
.org 0x4fdc2
	ldrb r1, [r0, #0]	@ 0004fdc2 0178
.org 0x4fdc4
	adds r6, r0, #0	@ 0004fdc4 061c
.org 0x4fdc6
	cmp r1, #255	@ 0004fdc6 ff29
.org 0x4fdc8
	bne.n 0x4fe18	@ 0004fdc8 26d1
.org 0x4fdca
	ldr r0, [pc, #68]	@ 0004fdca 1148
.org 0x4fdcc
	adds r2, r5, r0	@ 0004fdcc 2a18
.org 0x4fdce
	ldrb r0, [r2, #0]	@ 0004fdce 1078
.org 0x4fdd0
	movs r1, #64	@ 0004fdd0 4021
.org 0x4fdd2
	orrs r0, r1	@ 0004fdd2 0843
.org 0x4fdd4
	strb r0, [r2, #0]	@ 0004fdd4 1070
.org 0x4fdd6
	ldrb r1, [r4, #10]	@ 0004fdd6 a17a
.org 0x4fdd8
	movs r0, #254	@ 0004fdd8 fe20
.org 0x4fdda
	ands r0, r1	@ 0004fdda 0840
.org 0x4fddc
	movs r2, #0	@ 0004fddc 0022
.org 0x4fdde
	movs r1, #253	@ 0004fdde fd21
.org 0x4fde0
	ands r0, r1	@ 0004fde0 0840
.org 0x4fde2
	strb r0, [r4, #10]	@ 0004fde2 a072
.org 0x4fde4
	adds r0, r4, #0	@ 0004fde4 201c
.org 0x4fde6
	adds r0, #140	@ 0004fde6 8c30
.org 0x4fde8
	str r2, [r0, #0]	@ 0004fde8 0260
.org 0x4fdea
	adds r0, #4	@ 0004fdea 0430
.org 0x4fdec
	str r2, [r0, #0]	@ 0004fdec 0260
.org 0x4fdee
	adds r0, #4	@ 0004fdee 0430
.org 0x4fdf0
	strb r2, [r0, #0]	@ 0004fdf0 0270
.org 0x4fdf2
	ldrb r1, [r4, #10]	@ 0004fdf2 a17a
.org 0x4fdf4
	movs r0, #251	@ 0004fdf4 fb20
.org 0x4fdf6
	ands r0, r1	@ 0004fdf6 0840
.org 0x4fdf8
	strb r0, [r4, #10]	@ 0004fdf8 a072
.org 0x4fdfa
	ldr r1, [pc, #24]	@ 0004fdfa 0649
.org 0x4fdfc
	ldrb r0, [r4, #9]	@ 0004fdfc 607a
.org 0x4fdfe
	lsls r0, r0, #2	@ 0004fdfe 8000
.org 0x4fe00
	adds r0, r0, r1	@ 0004fe00 4018
.org 0x4fe02
	movs r1, #3	@ 0004fe02 0321
.org 0x4fe04
	str r1, [r4, #12]	@ 0004fe04 e160
.org 0x4fe06
	ldr r0, [r0, #0]	@ 0004fe06 0068
.org 0x4fe08
	ldr r0, [r0, #12]	@ 0004fe08 c068
.org 0x4fe0a
	str r0, [r4, #20]	@ 0004fe0a 6061
.org 0x4fe0c
	b.n 0x4fee6	@ 0004fe0c 6be0
.org 0x4fe0e
	.byte 0x00	@ 0004fe0e data
.org 0x4fe0f
	.byte 0x00	@ 0004fe0f data
.org 0x4fe10
	.byte 0x53,0x01,0x00,0x00	@ 0004fe10 data
.org 0x4fe14
	.byte 0xf8,0x39,0x85,0x08	@ 0004fe14 data
.org 0x4fe18
	adds r0, r4, #0	@ 0004fe18 201c
.org 0x4fe1a
	adds r0, #140	@ 0004fe1a 8c30
.org 0x4fe1c
	ldr r0, [r0, #0]	@ 0004fe1c 0068
.org 0x4fe1e
	movs r1, #4	@ 0004fe1e 0421
.org 0x4fe20
	ands r0, r1	@ 0004fe20 0840
.org 0x4fe22
	cmp r0, #0	@ 0004fe22 0028
.org 0x4fe24
	beq.n 0x4fe50	@ 0004fe24 14d0
.org 0x4fe26
	ldr r1, [pc, #32]	@ 0004fe26 0849
.org 0x4fe28
	adds r2, r5, r1	@ 0004fe28 6a18
.org 0x4fe2a
	ldrb r0, [r2, #0]	@ 0004fe2a 1078
.org 0x4fe2c
	movs r1, #64	@ 0004fe2c 4021
.org 0x4fe2e
	orrs r0, r1	@ 0004fe2e 0843
.org 0x4fe30
	strb r0, [r2, #0]	@ 0004fe30 1070
.org 0x4fe32
	ldr r1, [pc, #24]	@ 0004fe32 0649
.org 0x4fe34
	ldrb r0, [r4, #9]	@ 0004fe34 607a
.org 0x4fe36
	lsls r0, r0, #2	@ 0004fe36 8000
.org 0x4fe38
	adds r0, r0, r1	@ 0004fe38 4018
.org 0x4fe3a
	movs r1, #2	@ 0004fe3a 0221
.org 0x4fe3c
	str r1, [r4, #12]	@ 0004fe3c e160
.org 0x4fe3e
	ldr r0, [r0, #0]	@ 0004fe3e 0068
.org 0x4fe40
	ldr r0, [r0, #8]	@ 0004fe40 8068
.org 0x4fe42
	str r0, [r4, #20]	@ 0004fe42 6061
.org 0x4fe44
	b.n 0x4fee6	@ 0004fe44 4fe0
.org 0x4fe46
	.byte 0x00	@ 0004fe46 data
.org 0x4fe47
	.byte 0x00	@ 0004fe47 data
.org 0x4fe48
	.byte 0x53,0x01,0x00,0x00	@ 0004fe48 data
.org 0x4fe4c
	.byte 0xf8,0x39,0x85,0x08	@ 0004fe4c data
.org 0x4fe50
	adds r0, r4, #0	@ 0004fe50 201c
.org 0x4fe52
	bl 0x1cff0	@ 0004fe52 cdf7cdf8
.org 0x4fe56
	ldrb r0, [r5, #10]	@ 0004fe56 a87a
.org 0x4fe58
	lsrs r2, r0, #4	@ 0004fe58 0209
.org 0x4fe5a
	movs r0, #1	@ 0004fe5a 0120
.org 0x4fe5c
	ands r2, r0	@ 0004fe5c 0240
.org 0x4fe5e
	cmp r2, #0	@ 0004fe5e 002a
.org 0x4fe60
	beq.n 0x4fe6a	@ 0004fe60 03d0
.org 0x4fe62
	ldrb r1, [r4, #10]	@ 0004fe62 a17a
.org 0x4fe64
	movs r0, #16	@ 0004fe64 1020
.org 0x4fe66
	orrs r0, r1	@ 0004fe66 0843
.org 0x4fe68
	b.n 0x4fe70	@ 0004fe68 02e0
.org 0x4fe6a
	ldrb r1, [r4, #10]	@ 0004fe6a a17a
.org 0x4fe6c
	movs r0, #239	@ 0004fe6c ef20
.org 0x4fe6e
	ands r0, r1	@ 0004fe6e 0840
.org 0x4fe70
	strb r0, [r4, #10]	@ 0004fe70 a072
.org 0x4fe72
	adds r1, r2, #0	@ 0004fe72 111c
.org 0x4fe74
	adds r0, r4, #0	@ 0004fe74 201c
.org 0x4fe76
	adds r0, #76	@ 0004fe76 4c30
.org 0x4fe78
	strb r1, [r0, #0]	@ 0004fe78 0170
.org 0x4fe7a
	adds r3, r4, #0	@ 0004fe7a 231c
.org 0x4fe7c
	adds r3, #74	@ 0004fe7c 4a33
.org 0x4fe7e
	lsls r1, r1, #4	@ 0004fe7e 0901
.org 0x4fe80
	ldrb r2, [r3, #0]	@ 0004fe80 1a78
.org 0x4fe82
	movs r0, #17	@ 0004fe82 1120
.org 0x4fe84
	negs r0, r0	@ 0004fe84 4042
.org 0x4fe86
	ands r0, r2	@ 0004fe86 1040
.org 0x4fe88
	orrs r0, r1	@ 0004fe88 0843
.org 0x4fe8a
	strb r0, [r3, #0]	@ 0004fe8a 1870
.org 0x4fe8c
	adds r0, r5, #0	@ 0004fe8c 281c
.org 0x4fe8e
	adds r0, #113	@ 0004fe8e 7130
.org 0x4fe90
	ldrb r0, [r0, #0]	@ 0004fe90 0078
.org 0x4fe92
	lsls r0, r0, #24	@ 0004fe92 0006
.org 0x4fe94
	asrs r0, r0, #24	@ 0004fe94 0016
.org 0x4fe96
	movs r3, #0	@ 0004fe96 0023
.org 0x4fe98
	cmp r0, #3	@ 0004fe98 0328
.org 0x4fe9a
	bne.n 0x4fe9e	@ 0004fe9a 00d1
.org 0x4fe9c
	movs r3, #1	@ 0004fe9c 0123
.org 0x4fe9e
	ldrb r1, [r4, #10]	@ 0004fe9e a17a
.org 0x4fea0
	movs r0, #16	@ 0004fea0 1020
.org 0x4fea2
	ands r0, r1	@ 0004fea2 0840
.org 0x4fea4
	cmp r0, #0	@ 0004fea4 0028
.org 0x4fea6
	beq.n 0x4fec0	@ 0004fea6 0bd0
.org 0x4fea8
	ldr r2, [pc, #16]	@ 0004fea8 044a
.org 0x4feaa
	lsls r3, r3, #3	@ 0004feaa db00
.org 0x4feac
	ldrb r0, [r6, #0]	@ 0004feac 3078
.org 0x4feae
	lsls r0, r0, #4	@ 0004feae 0001
.org 0x4feb0
	adds r0, r3, r0	@ 0004feb0 1818
.org 0x4feb2
	adds r0, r0, r2	@ 0004feb2 8018
.org 0x4feb4
	ldr r1, [r5, #84]	@ 0004feb4 696d
.org 0x4feb6
	ldr r0, [r0, #0]	@ 0004feb6 0068
.org 0x4feb8
	subs r1, r1, r0	@ 0004feb8 091a
.org 0x4feba
	b.n 0x4fed2	@ 0004feba 0ae0
.org 0x4febc
	.byte 0x4c,0x35,0x85,0x08	@ 0004febc data
.org 0x4fec0
	ldr r2, [pc, #40]	@ 0004fec0 0a4a
.org 0x4fec2
	lsls r3, r3, #3	@ 0004fec2 db00
.org 0x4fec4
	ldrb r0, [r6, #0]	@ 0004fec4 3078
.org 0x4fec6
	lsls r0, r0, #4	@ 0004fec6 0001
.org 0x4fec8
	adds r0, r3, r0	@ 0004fec8 1818
.org 0x4feca
	adds r0, r0, r2	@ 0004feca 8018
.org 0x4fecc
	ldr r1, [r5, #84]	@ 0004fecc 696d
.org 0x4fece
	ldr r0, [r0, #0]	@ 0004fece 0068
.org 0x4fed0
	adds r1, r1, r0	@ 0004fed0 0918
.org 0x4fed2
	str r1, [r4, #84]	@ 0004fed2 6165
