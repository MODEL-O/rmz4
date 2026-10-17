@ FUN_080c4dcc  entry 0x080c4dcc  size 206
.thumb
.org 0xc4dcc
FUN_080c4dcc:
	push {r4, r5, r6, r7, lr}	@ 000c4dcc f0b5
.org 0xc4dce
	adds r6, r0, #0	@ 000c4dce 061c
.org 0xc4dd0
	ldr r0, [r6, #40]	@ 000c4dd0 b06a
.org 0xc4dd2
	ldrb r4, [r0, #10]	@ 000c4dd2 847a
.org 0xc4dd4
	lsrs r4, r4, #4	@ 000c4dd4 2409
.org 0xc4dd6
	movs r2, #1	@ 000c4dd6 0122
.org 0xc4dd8
	ands r4, r2	@ 000c4dd8 1440
.org 0xc4dda
	ldrb r7, [r6, #17]	@ 000c4dda 777c
.org 0xc4ddc
	ldr r1, [pc, #52]	@ 000c4ddc 0d49
.org 0xc4dde
	ldrb r0, [r6, #9]	@ 000c4dde 707a
.org 0xc4de0
	lsls r0, r0, #2	@ 000c4de0 8000
.org 0xc4de2
	adds r0, r0, r1	@ 000c4de2 4018
.org 0xc4de4
	str r2, [r6, #12]	@ 000c4de4 f260
.org 0xc4de6
	ldr r0, [r0, #0]	@ 000c4de6 0068
.org 0xc4de8
	ldr r0, [r0, #4]	@ 000c4de8 4068
.org 0xc4dea
	str r0, [r6, #20]	@ 000c4dea 7061
.org 0xc4dec
	ldrb r1, [r6, #10]	@ 000c4dec b17a
.org 0xc4dee
	movs r0, #1	@ 000c4dee 0120
.org 0xc4df0
	movs r5, #0	@ 000c4df0 0025
.org 0xc4df2
	orrs r0, r1	@ 000c4df2 0843
.org 0xc4df4
	movs r1, #2	@ 000c4df4 0221
.org 0xc4df6
	orrs r0, r1	@ 000c4df6 0843
.org 0xc4df8
	strb r0, [r6, #10]	@ 000c4df8 b072
.org 0xc4dfa
	lsls r0, r7, #11	@ 000c4dfa f802
.org 0xc4dfc
	ldr r1, [pc, #24]	@ 000c4dfc 0649
.org 0xc4dfe
	adds r0, r0, r1	@ 000c4dfe 4018
.org 0xc4e00
	str r0, [r6, #96]	@ 000c4e00 3066
.org 0xc4e02
	adds r0, r6, #0	@ 000c4e02 301c
.org 0xc4e04
	bl 0x1cc9c	@ 000c4e04 57f74aff
.org 0xc4e08
	cmp r4, #0	@ 000c4e08 002c
.org 0xc4e0a
	beq.n 0xc4e1c	@ 000c4e0a 07d0
.org 0xc4e0c
	ldrb r0, [r6, #10]	@ 000c4e0c b07a
.org 0xc4e0e
	movs r1, #16	@ 000c4e0e 1021
.org 0xc4e10
	orrs r0, r1	@ 000c4e10 0843
.org 0xc4e12
	b.n 0xc4e22	@ 000c4e12 06e0
.org 0xc4e14
	.byte 0xf4,0x49,0x86,0x08	@ 000c4e14 data
.org 0xc4e18
	.byte 0x00,0xfc,0xff,0xff	@ 000c4e18 data
.org 0xc4e1c
	ldrb r1, [r6, #10]	@ 000c4e1c b17a
.org 0xc4e1e
	movs r0, #239	@ 000c4e1e ef20
.org 0xc4e20
	ands r0, r1	@ 000c4e20 0840
.org 0xc4e22
	strb r0, [r6, #10]	@ 000c4e22 b072
.org 0xc4e24
	adds r1, r4, #0	@ 000c4e24 211c
.org 0xc4e26
	adds r0, r6, #0	@ 000c4e26 301c
.org 0xc4e28
	adds r0, #76	@ 000c4e28 4c30
.org 0xc4e2a
	strb r1, [r0, #0]	@ 000c4e2a 0170
.org 0xc4e2c
	adds r2, r6, #0	@ 000c4e2c 321c
.org 0xc4e2e
	adds r2, #74	@ 000c4e2e 4a32
.org 0xc4e30
	lsls r1, r1, #4	@ 000c4e30 0901
.org 0xc4e32
	ldrb r3, [r2, #0]	@ 000c4e32 1378
.org 0xc4e34
	movs r0, #17	@ 000c4e34 1120
.org 0xc4e36
	negs r0, r0	@ 000c4e36 4042
.org 0xc4e38
	ands r0, r3	@ 000c4e38 1840
.org 0xc4e3a
	orrs r0, r1	@ 000c4e3a 0843
.org 0xc4e3c
	strb r0, [r2, #0]	@ 000c4e3c 1070
.org 0xc4e3e
	adds r3, r7, #0	@ 000c4e3e 3b1c
.org 0xc4e40
	adds r4, r2, #0	@ 000c4e40 141c
.org 0xc4e42
	cmp r3, #0	@ 000c4e42 002b
.org 0xc4e44
	beq.n 0xc4e4e	@ 000c4e44 03d0
.org 0xc4e46
	ldrb r0, [r6, #10]	@ 000c4e46 b07a
.org 0xc4e48
	movs r1, #32	@ 000c4e48 2021
.org 0xc4e4a
	orrs r0, r1	@ 000c4e4a 0843
.org 0xc4e4c
	b.n 0xc4e54	@ 000c4e4c 02e0
.org 0xc4e4e
	ldrb r1, [r6, #10]	@ 000c4e4e b17a
.org 0xc4e50
	movs r0, #223	@ 000c4e50 df20
.org 0xc4e52
	ands r0, r1	@ 000c4e52 0840
.org 0xc4e54
	strb r0, [r6, #10]	@ 000c4e54 b072
.org 0xc4e56
	movs r1, #1	@ 000c4e56 0121
.org 0xc4e58
	ands r1, r3	@ 000c4e58 1940
.org 0xc4e5a
	adds r0, r6, #0	@ 000c4e5a 301c
.org 0xc4e5c
	adds r0, #77	@ 000c4e5c 4d30
.org 0xc4e5e
	movs r5, #0	@ 000c4e5e 0025
.org 0xc4e60
	strb r1, [r0, #0]	@ 000c4e60 0170
.org 0xc4e62
	lsls r1, r1, #5	@ 000c4e62 4901
.org 0xc4e64
	ldrb r2, [r4, #0]	@ 000c4e64 2278
.org 0xc4e66
	movs r0, #33	@ 000c4e66 2120
.org 0xc4e68
	negs r0, r0	@ 000c4e68 4042
.org 0xc4e6a
	ands r0, r2	@ 000c4e6a 1040
.org 0xc4e6c
	orrs r0, r1	@ 000c4e6c 0843
.org 0xc4e6e
	strb r0, [r4, #0]	@ 000c4e6e 2070
.org 0xc4e70
	ldr r1, [pc, #48]	@ 000c4e70 0c49
.org 0xc4e72
	adds r0, r6, #0	@ 000c4e72 301c
.org 0xc4e74
	bl 0x1cf00	@ 000c4e74 58f744f8
.org 0xc4e78
	ldrb r1, [r6, #10]	@ 000c4e78 b17a
.org 0xc4e7a
	movs r0, #4	@ 000c4e7a 0420
.org 0xc4e7c
	orrs r0, r1	@ 000c4e7c 0843
.org 0xc4e7e
	strb r0, [r6, #10]	@ 000c4e7e b072
.org 0xc4e80
	adds r4, r6, #0	@ 000c4e80 341c
.org 0xc4e82
	adds r4, #116	@ 000c4e82 7434
.org 0xc4e84
	ldr r1, [pc, #32]	@ 000c4e84 0849
.org 0xc4e86
	adds r2, r6, #0	@ 000c4e86 321c
.org 0xc4e88
	adds r2, #84	@ 000c4e88 5432
.org 0xc4e8a
	adds r0, r4, #0	@ 000c4e8a 201c
.org 0xc4e8c
	movs r3, #64	@ 000c4e8c 4023
.org 0xc4e8e
	bl 0x5760	@ 000c4e8e 40f767fc
.org 0xc4e92
	str r6, [r4, #44]	@ 000c4e92 e662
.org 0xc4e94
	str r5, [r4, #36]	@ 000c4e94 6562
.org 0xc4e96
	adds r0, r6, #0	@ 000c4e96 301c
.org 0xc4e98
	bl 0xc4eac	@ 000c4e98 00f008f8
