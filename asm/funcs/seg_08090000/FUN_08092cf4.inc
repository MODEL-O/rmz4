@ FUN_08092cf4  entry 0x08092cf4  size 238
.thumb
.org 0x92cf4
FUN_08092cf4:
	push {r4, r5, r6, r7, lr}	@ 00092cf4 f0b5
.org 0x92cf6
	adds r5, r0, #0	@ 00092cf6 051c
.org 0x92cf8
	ldrb r7, [r5, #17]	@ 00092cf8 6f7c
.org 0x92cfa
	movs r6, #0	@ 00092cfa 0026
.org 0x92cfc
	ldr r0, [pc, #80]	@ 00092cfc 1448
.org 0x92cfe
	ldr r0, [r0, #0]	@ 00092cfe 0068
.org 0x92d00
	ldr r3, [r5, #84]	@ 00092d00 6b6d
.org 0x92d02
	ldr r0, [r0, #84]	@ 00092d02 406d
.org 0x92d04
	cmp r3, r0	@ 00092d04 8342
.org 0x92d06
	bge.n 0x92d0a	@ 00092d06 00da
.org 0x92d08
	movs r6, #1	@ 00092d08 0126
.org 0x92d0a
	ldr r1, [pc, #72]	@ 00092d0a 1249
.org 0x92d0c
	ldrb r0, [r5, #9]	@ 00092d0c 687a
.org 0x92d0e
	lsls r0, r0, #2	@ 00092d0e 8000
.org 0x92d10
	adds r0, r0, r1	@ 00092d10 4018
.org 0x92d12
	movs r1, #1	@ 00092d12 0121
.org 0x92d14
	str r1, [r5, #12]	@ 00092d14 e960
.org 0x92d16
	ldr r0, [r0, #0]	@ 00092d16 0068
.org 0x92d18
	ldr r0, [r0, #4]	@ 00092d18 4068
.org 0x92d1a
	str r0, [r5, #20]	@ 00092d1a 6861
.org 0x92d1c
	ldrb r1, [r5, #10]	@ 00092d1c a97a
.org 0x92d1e
	movs r0, #1	@ 00092d1e 0120
.org 0x92d20
	movs r4, #0	@ 00092d20 0024
.org 0x92d22
	movs r2, #0	@ 00092d22 0022
.org 0x92d24
	orrs r0, r1	@ 00092d24 0843
.org 0x92d26
	movs r1, #2	@ 00092d26 0221
.org 0x92d28
	orrs r0, r1	@ 00092d28 0843
.org 0x92d2a
	strb r0, [r5, #10]	@ 00092d2a a872
.org 0x92d2c
	str r2, [r5, #44]	@ 00092d2c ea62
.org 0x92d2e
	adds r0, r5, #0	@ 00092d2e 281c
.org 0x92d30
	adds r0, #180	@ 00092d30 b430
.org 0x92d32
	str r3, [r0, #0]	@ 00092d32 0360
.org 0x92d34
	adds r0, #5	@ 00092d34 0530
.org 0x92d36
	strb r2, [r0, #0]	@ 00092d36 0270
.org 0x92d38
	adds r0, #1	@ 00092d38 0130
.org 0x92d3a
	strb r2, [r0, #0]	@ 00092d3a 0270
.org 0x92d3c
	adds r0, r5, #0	@ 00092d3c 281c
.org 0x92d3e
	bl 0x1cc9c	@ 00092d3e 89f7adff
.org 0x92d42
	adds r2, r6, #0	@ 00092d42 321c
.org 0x92d44
	cmp r2, #0	@ 00092d44 002a
.org 0x92d46
	beq.n 0x92d58	@ 00092d46 07d0
.org 0x92d48
	ldrb r0, [r5, #10]	@ 00092d48 a87a
.org 0x92d4a
	movs r1, #16	@ 00092d4a 1021
.org 0x92d4c
	orrs r0, r1	@ 00092d4c 0843
.org 0x92d4e
	b.n 0x92d5e	@ 00092d4e 06e0
.org 0x92d50
	.byte 0xf0,0xdb,0x02,0x02	@ 00092d50 data
.org 0x92d54
	.byte 0x40,0xdb,0x85,0x08	@ 00092d54 data
.org 0x92d58
	ldrb r1, [r5, #10]	@ 00092d58 a97a
.org 0x92d5a
	movs r0, #239	@ 00092d5a ef20
.org 0x92d5c
	ands r0, r1	@ 00092d5c 0840
.org 0x92d5e
	strb r0, [r5, #10]	@ 00092d5e a872
.org 0x92d60
	adds r1, r2, #0	@ 00092d60 111c
.org 0x92d62
	adds r0, r5, #0	@ 00092d62 281c
.org 0x92d64
	adds r0, #76	@ 00092d64 4c30
.org 0x92d66
	movs r6, #0	@ 00092d66 0026
.org 0x92d68
	strb r1, [r0, #0]	@ 00092d68 0170
.org 0x92d6a
	adds r3, r5, #0	@ 00092d6a 2b1c
.org 0x92d6c
	adds r3, #74	@ 00092d6c 4a33
.org 0x92d6e
	lsls r1, r1, #4	@ 00092d6e 0901
.org 0x92d70
	ldrb r2, [r3, #0]	@ 00092d70 1a78
.org 0x92d72
	movs r0, #17	@ 00092d72 1120
.org 0x92d74
	negs r0, r0	@ 00092d74 4042
.org 0x92d76
	ands r0, r2	@ 00092d76 1040
.org 0x92d78
	orrs r0, r1	@ 00092d78 0843
.org 0x92d7a
	strb r0, [r3, #0]	@ 00092d7a 1870
.org 0x92d7c
	ldrb r1, [r5, #10]	@ 00092d7c a97a
.org 0x92d7e
	movs r0, #4	@ 00092d7e 0420
.org 0x92d80
	orrs r0, r1	@ 00092d80 0843
.org 0x92d82
	strb r0, [r5, #10]	@ 00092d82 a872
.org 0x92d84
	adds r4, r5, #0	@ 00092d84 2c1c
.org 0x92d86
	adds r4, #116	@ 00092d86 7434
.org 0x92d88
	ldr r1, [pc, #28]	@ 00092d88 0749
.org 0x92d8a
	adds r2, r5, #0	@ 00092d8a 2a1c
.org 0x92d8c
	adds r2, #84	@ 00092d8c 5432
.org 0x92d8e
	adds r0, r4, #0	@ 00092d8e 201c
.org 0x92d90
	movs r3, #10	@ 00092d90 0a23
.org 0x92d92
	bl 0x5760	@ 00092d92 72f7e5fc
.org 0x92d96
	str r5, [r4, #44]	@ 00092d96 e562
.org 0x92d98
	ldr r0, [pc, #16]	@ 00092d98 0448
.org 0x92d9a
	str r0, [r4, #36]	@ 00092d9a 6062
.org 0x92d9c
	cmp r7, #0	@ 00092d9c 002f
.org 0x92d9e
	beq.n 0x92db0	@ 00092d9e 07d0
.org 0x92da0
	cmp r7, #1	@ 00092da0 012f
.org 0x92da2
	beq.n 0x92dd2	@ 00092da2 16d0
.org 0x92da4
	b.n 0x92de8	@ 00092da4 20e0
.org 0x92da6
	.byte 0x00	@ 00092da6 data
.org 0x92da7
	.byte 0x00	@ 00092da7 data
.org 0x92da8
	.byte 0x94,0x05,0x86,0x08	@ 00092da8 data
.org 0x92dac
	.byte 0x95,0x46,0x09,0x08	@ 00092dac data
.org 0x92db0
	strb r6, [r5, #13]	@ 00092db0 6e73
.org 0x92db2
	strb r6, [r5, #14]	@ 00092db2 ae73
.org 0x92db4
	strb r6, [r5, #15]	@ 00092db4 ee73
.org 0x92db6
	movs r1, #128	@ 00092db6 8021
.org 0x92db8
	lsls r1, r1, #7	@ 00092db8 c901
.org 0x92dba
	adds r0, r5, #0	@ 00092dba 281c
.org 0x92dbc
	bl 0x1cf00	@ 00092dbc 8af7a0f8
.org 0x92dc0
	adds r0, r5, #0	@ 00092dc0 281c
.org 0x92dc2
	bl 0x1cff0	@ 00092dc2 8af715f9
.org 0x92dc6
	ldr r0, [r5, #84]	@ 00092dc6 686d
.org 0x92dc8
	ldr r1, [r5, #88]	@ 00092dc8 a96d
.org 0x92dca
	bl 0x8534	@ 00092dca 75f7b3fb
.org 0x92dce
	str r0, [r5, #88]	@ 00092dce a865
.org 0x92dd0
	b.n 0x92de8	@ 00092dd0 0ae0
.org 0x92dd2
	movs r0, #9	@ 00092dd2 0920
.org 0x92dd4
	strb r0, [r5, #13]	@ 00092dd4 6873
.org 0x92dd6
	strb r6, [r5, #14]	@ 00092dd6 ae73
.org 0x92dd8
	strb r6, [r5, #15]	@ 00092dd8 ee73
.org 0x92dda
	ldr r1, [pc, #24]	@ 00092dda 0649
.org 0x92ddc
	adds r0, r5, #0	@ 00092ddc 281c
.org 0x92dde
	bl 0x1cf00	@ 00092dde 8af78ff8
