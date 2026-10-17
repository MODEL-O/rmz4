@ FUN_080419a4  entry 0x080419a4  size 220
.thumb
.org 0x419a4
FUN_080419a4:
	push {r4, r5, r6, r7, lr}	@ 000419a4 f0b5
.org 0x419a6
	adds r5, r0, #0	@ 000419a6 051c
.org 0x419a8
	ldr r6, [r5, #40]	@ 000419a8 ae6a
.org 0x419aa
	ldr r7, [r5, #44]	@ 000419aa ef6a
.org 0x419ac
	bl 0x1cff0	@ 000419ac dbf720fb
.org 0x419b0
	ldrb r0, [r6, #10]	@ 000419b0 b07a
.org 0x419b2
	lsrs r2, r0, #4	@ 000419b2 0209
.org 0x419b4
	movs r0, #1	@ 000419b4 0120
.org 0x419b6
	ands r2, r0	@ 000419b6 0240
.org 0x419b8
	cmp r2, #0	@ 000419b8 002a
.org 0x419ba
	beq.n 0x419c4	@ 000419ba 03d0
.org 0x419bc
	ldrb r1, [r5, #10]	@ 000419bc a97a
.org 0x419be
	movs r0, #16	@ 000419be 1020
.org 0x419c0
	orrs r0, r1	@ 000419c0 0843
.org 0x419c2
	b.n 0x419ca	@ 000419c2 02e0
.org 0x419c4
	ldrb r1, [r5, #10]	@ 000419c4 a97a
.org 0x419c6
	movs r0, #239	@ 000419c6 ef20
.org 0x419c8
	ands r0, r1	@ 000419c8 0840
.org 0x419ca
	strb r0, [r5, #10]	@ 000419ca a872
.org 0x419cc
	adds r1, r2, #0	@ 000419cc 111c
.org 0x419ce
	adds r0, r5, #0	@ 000419ce 281c
.org 0x419d0
	adds r0, #76	@ 000419d0 4c30
.org 0x419d2
	strb r1, [r0, #0]	@ 000419d2 0170
.org 0x419d4
	adds r3, r5, #0	@ 000419d4 2b1c
.org 0x419d6
	adds r3, #74	@ 000419d6 4a33
.org 0x419d8
	lsls r1, r1, #4	@ 000419d8 0901
.org 0x419da
	ldrb r2, [r3, #0]	@ 000419da 1a78
.org 0x419dc
	movs r0, #17	@ 000419dc 1120
.org 0x419de
	negs r0, r0	@ 000419de 4042
.org 0x419e0
	ands r0, r2	@ 000419e0 1040
.org 0x419e2
	orrs r0, r1	@ 000419e2 0843
.org 0x419e4
	strb r0, [r3, #0]	@ 000419e4 1870
.org 0x419e6
	adds r0, r6, #0	@ 000419e6 301c
.org 0x419e8
	adds r0, #113	@ 000419e8 7130
.org 0x419ea
	ldrb r0, [r0, #0]	@ 000419ea 0078
.org 0x419ec
	lsls r0, r0, #24	@ 000419ec 0006
.org 0x419ee
	asrs r0, r0, #24	@ 000419ee 0016
.org 0x419f0
	movs r3, #0	@ 000419f0 0023
.org 0x419f2
	cmp r0, #3	@ 000419f2 0328
.org 0x419f4
	bne.n 0x419f8	@ 000419f4 00d1
.org 0x419f6
	movs r3, #1	@ 000419f6 0123
.org 0x419f8
	ldrb r1, [r5, #10]	@ 000419f8 a97a
.org 0x419fa
	movs r0, #16	@ 000419fa 1020
.org 0x419fc
	ands r0, r1	@ 000419fc 0840
.org 0x419fe
	cmp r0, #0	@ 000419fe 0028
.org 0x41a00
	beq.n 0x41a20	@ 00041a00 0ed0
.org 0x41a02
	ldr r2, [pc, #24]	@ 00041a02 064a
.org 0x41a04
	lsls r3, r3, #3	@ 00041a04 db00
.org 0x41a06
	movs r0, #168	@ 00041a06 a820
.org 0x41a08
	lsls r0, r0, #1	@ 00041a08 4000
.org 0x41a0a
	adds r4, r6, r0	@ 00041a0a 3418
.org 0x41a0c
	ldrb r0, [r4, #0]	@ 00041a0c 2078
.org 0x41a0e
	lsls r0, r0, #4	@ 00041a0e 0001
.org 0x41a10
	adds r0, r3, r0	@ 00041a10 1818
.org 0x41a12
	adds r0, r0, r2	@ 00041a12 8018
.org 0x41a14
	ldr r1, [r6, #84]	@ 00041a14 716d
.org 0x41a16
	ldr r0, [r0, #0]	@ 00041a16 0068
.org 0x41a18
	subs r1, r1, r0	@ 00041a18 091a
.org 0x41a1a
	b.n 0x41a38	@ 00041a1a 0de0
.org 0x41a1c
	.byte 0x4c,0x35,0x85,0x08	@ 00041a1c data
.org 0x41a20
	ldr r2, [pc, #96]	@ 00041a20 184a
.org 0x41a22
	lsls r3, r3, #3	@ 00041a22 db00
.org 0x41a24
	movs r0, #168	@ 00041a24 a820
.org 0x41a26
	lsls r0, r0, #1	@ 00041a26 4000
.org 0x41a28
	adds r4, r6, r0	@ 00041a28 3418
.org 0x41a2a
	ldrb r0, [r4, #0]	@ 00041a2a 2078
.org 0x41a2c
	lsls r0, r0, #4	@ 00041a2c 0001
.org 0x41a2e
	adds r0, r3, r0	@ 00041a2e 1818
.org 0x41a30
	adds r0, r0, r2	@ 00041a30 8018
.org 0x41a32
	ldr r1, [r6, #84]	@ 00041a32 716d
.org 0x41a34
	ldr r0, [r0, #0]	@ 00041a34 0068
.org 0x41a36
	adds r1, r1, r0	@ 00041a36 0918
.org 0x41a38
	str r1, [r5, #84]	@ 00041a38 6965
.org 0x41a3a
	ldrb r0, [r4, #0]	@ 00041a3a 2078
.org 0x41a3c
	lsls r0, r0, #4	@ 00041a3c 0001
.org 0x41a3e
	adds r0, r3, r0	@ 00041a3e 1818
.org 0x41a40
	adds r1, r2, #4	@ 00041a40 111d
.org 0x41a42
	adds r0, r0, r1	@ 00041a42 4018
.org 0x41a44
	ldr r1, [r6, #88]	@ 00041a44 b16d
.org 0x41a46
	ldr r0, [r0, #0]	@ 00041a46 0068
.org 0x41a48
	adds r1, r1, r0	@ 00041a48 0918
.org 0x41a4a
	str r1, [r5, #88]	@ 00041a4a a965
.org 0x41a4c
	ldr r1, [pc, #56]	@ 00041a4c 0e49
.org 0x41a4e
	ldrb r0, [r4, #0]	@ 00041a4e 2078
.org 0x41a50
	adds r0, r0, r1	@ 00041a50 4018
.org 0x41a52
	ldrb r1, [r0, #0]	@ 00041a52 0178
.org 0x41a54
	adds r0, r5, #0	@ 00041a54 281c
.org 0x41a56
	adds r0, #36	@ 00041a56 2430
.org 0x41a58
	strb r1, [r0, #0]	@ 00041a58 0170
.org 0x41a5a
	ldrb r0, [r7, #12]	@ 00041a5a 387b
.org 0x41a5c
	cmp r0, #1	@ 00041a5c 0128
.org 0x41a5e
	bls.n 0x41a7e	@ 00041a5e 0ed9
.org 0x41a60
	ldr r0, [pc, #40]	@ 00041a60 0a48
.org 0x41a62
	adds r2, r6, r0	@ 00041a62 3218
.org 0x41a64
	ldrb r0, [r2, #0]	@ 00041a64 1078
.org 0x41a66
	movs r1, #64	@ 00041a66 4021
.org 0x41a68
	orrs r0, r1	@ 00041a68 0843
.org 0x41a6a
	strb r0, [r2, #0]	@ 00041a6a 1070
.org 0x41a6c
	ldr r1, [pc, #32]	@ 00041a6c 0849
.org 0x41a6e
	ldrb r0, [r5, #9]	@ 00041a6e 687a
.org 0x41a70
	lsls r0, r0, #2	@ 00041a70 8000
.org 0x41a72
	adds r0, r0, r1	@ 00041a72 4018
.org 0x41a74
	movs r1, #2	@ 00041a74 0221
.org 0x41a76
	str r1, [r5, #12]	@ 00041a76 e960
.org 0x41a78
	ldr r0, [r0, #0]	@ 00041a78 0068
.org 0x41a7a
	ldr r0, [r0, #8]	@ 00041a7a 8068
.org 0x41a7c
	str r0, [r5, #20]	@ 00041a7c 6861
.org 0x41a7e
	pop {r4, r5, r6, r7}	@ 00041a7e f0bc
