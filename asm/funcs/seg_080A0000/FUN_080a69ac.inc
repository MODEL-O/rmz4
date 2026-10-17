@ FUN_080a69ac  entry 0x080a69ac  size 232
.thumb
.org 0xa69ac
FUN_080a69ac:
	push {r4, r5, r6, r7, lr}	@ 000a69ac f0b5
.org 0xa69ae
	adds r7, r0, #0	@ 000a69ae 071c
.org 0xa69b0
	ldrb r0, [r7, #16]	@ 000a69b0 387c
.org 0xa69b2
	cmp r0, #1	@ 000a69b2 0128
.org 0xa69b4
	bne.n 0xa69be	@ 000a69b4 03d1
.org 0xa69b6
	adds r0, r7, #0	@ 000a69b6 381c
.org 0xa69b8
	bl 0xa6aa8	@ 000a69b8 00f076f8
.org 0xa69bc
	b.n 0xa6a94	@ 000a69bc 6ae0
.org 0xa69be
	adds r0, r7, #0	@ 000a69be 381c
.org 0xa69c0
	bl 0x1cc9c	@ 000a69c0 76f76cf9
.org 0xa69c4
	ldrb r1, [r7, #10]	@ 000a69c4 b97a
.org 0xa69c6
	movs r0, #1	@ 000a69c6 0120
.org 0xa69c8
	movs r4, #0	@ 000a69c8 0024
.org 0xa69ca
	orrs r0, r1	@ 000a69ca 0843
.org 0xa69cc
	movs r1, #2	@ 000a69cc 0221
.org 0xa69ce
	orrs r0, r1	@ 000a69ce 0843
.org 0xa69d0
	strb r0, [r7, #10]	@ 000a69d0 b872
.org 0xa69d2
	movs r1, #139	@ 000a69d2 8b21
.org 0xa69d4
	lsls r1, r1, #8	@ 000a69d4 0902
.org 0xa69d6
	adds r0, r7, #0	@ 000a69d6 381c
.org 0xa69d8
	bl 0x1cf00	@ 000a69d8 76f792fa
.org 0xa69dc
	adds r0, r7, #0	@ 000a69dc 381c
.org 0xa69de
	bl 0x1cff0	@ 000a69de 76f707fb
.org 0xa69e2
	movs r2, #0	@ 000a69e2 0022
.org 0xa69e4
	ldr r0, [pc, #24]	@ 000a69e4 0648
.org 0xa69e6
	ldr r0, [r0, #0]	@ 000a69e6 0068
.org 0xa69e8
	ldr r1, [r7, #84]	@ 000a69e8 796d
.org 0xa69ea
	ldr r0, [r0, #84]	@ 000a69ea 406d
.org 0xa69ec
	cmp r1, r0	@ 000a69ec 8142
.org 0xa69ee
	bge.n 0xa69f2	@ 000a69ee 00da
.org 0xa69f0
	movs r2, #1	@ 000a69f0 0122
.org 0xa69f2
	cmp r2, #0	@ 000a69f2 002a
.org 0xa69f4
	beq.n 0xa6a04	@ 000a69f4 06d0
.org 0xa69f6
	ldrb r0, [r7, #10]	@ 000a69f6 b87a
.org 0xa69f8
	movs r1, #16	@ 000a69f8 1021
.org 0xa69fa
	orrs r0, r1	@ 000a69fa 0843
.org 0xa69fc
	b.n 0xa6a0a	@ 000a69fc 05e0
.org 0xa69fe
	.byte 0x00	@ 000a69fe data
.org 0xa69ff
	.byte 0x00	@ 000a69ff data
.org 0xa6a00
	.byte 0xf0,0xdb,0x02,0x02	@ 000a6a00 data
.org 0xa6a04
	ldrb r1, [r7, #10]	@ 000a6a04 b97a
.org 0xa6a06
	movs r0, #239	@ 000a6a06 ef20
.org 0xa6a08
	ands r0, r1	@ 000a6a08 0840
.org 0xa6a0a
	strb r0, [r7, #10]	@ 000a6a0a b872
.org 0xa6a0c
	movs r6, #1	@ 000a6a0c 0126
.org 0xa6a0e
	adds r1, r6, #0	@ 000a6a0e 311c
.org 0xa6a10
	ands r1, r2	@ 000a6a10 1140
.org 0xa6a12
	adds r0, r7, #0	@ 000a6a12 381c
.org 0xa6a14
	adds r0, #76	@ 000a6a14 4c30
.org 0xa6a16
	movs r5, #0	@ 000a6a16 0025
.org 0xa6a18
	strb r1, [r0, #0]	@ 000a6a18 0170
.org 0xa6a1a
	adds r3, r7, #0	@ 000a6a1a 3b1c
.org 0xa6a1c
	adds r3, #74	@ 000a6a1c 4a33
.org 0xa6a1e
	lsls r1, r1, #4	@ 000a6a1e 0901
.org 0xa6a20
	ldrb r2, [r3, #0]	@ 000a6a20 1a78
.org 0xa6a22
	movs r0, #17	@ 000a6a22 1120
.org 0xa6a24
	negs r0, r0	@ 000a6a24 4042
.org 0xa6a26
	ands r0, r2	@ 000a6a26 1040
.org 0xa6a28
	orrs r0, r1	@ 000a6a28 0843
.org 0xa6a2a
	strb r0, [r3, #0]	@ 000a6a2a 1870
.org 0xa6a2c
	ldrb r1, [r7, #10]	@ 000a6a2c b97a
.org 0xa6a2e
	movs r0, #4	@ 000a6a2e 0420
.org 0xa6a30
	orrs r0, r1	@ 000a6a30 0843
.org 0xa6a32
	strb r0, [r7, #10]	@ 000a6a32 b872
.org 0xa6a34
	adds r4, r7, #0	@ 000a6a34 3c1c
.org 0xa6a36
	adds r4, #116	@ 000a6a36 7434
.org 0xa6a38
	ldr r1, [pc, #96]	@ 000a6a38 1849
.org 0xa6a3a
	adds r2, r7, #0	@ 000a6a3a 3a1c
.org 0xa6a3c
	adds r2, #84	@ 000a6a3c 5432
.org 0xa6a3e
	adds r0, r4, #0	@ 000a6a3e 201c
.org 0xa6a40
	movs r3, #8	@ 000a6a40 0823
.org 0xa6a42
	bl 0x5760	@ 000a6a42 5ef78dfe
.org 0xa6a46
	str r7, [r4, #44]	@ 000a6a46 e762
.org 0xa6a48
	ldr r0, [pc, #84]	@ 000a6a48 1548
.org 0xa6a4a
	str r0, [r4, #36]	@ 000a6a4a 6062
.org 0xa6a4c
	ldr r0, [r7, #84]	@ 000a6a4c 786d
.org 0xa6a4e
	ldr r1, [r7, #88]	@ 000a6a4e b96d
.org 0xa6a50
	bl 0x8534	@ 000a6a50 61f770fd
.org 0xa6a54
	str r0, [r7, #88]	@ 000a6a54 b865
.org 0xa6a56
	adds r1, r7, #0	@ 000a6a56 391c
.org 0xa6a58
	adds r1, #180	@ 000a6a58 b431
.org 0xa6a5a
	ldr r0, [r7, #84]	@ 000a6a5a 786d
.org 0xa6a5c
	str r0, [r1, #0]	@ 000a6a5c 0860
.org 0xa6a5e
	adds r0, r7, #0	@ 000a6a5e 381c
.org 0xa6a60
	adds r0, #190	@ 000a6a60 be30
.org 0xa6a62
	strb r5, [r0, #0]	@ 000a6a62 0570
.org 0xa6a64
	adds r0, #1	@ 000a6a64 0130
.org 0xa6a66
	strb r5, [r0, #0]	@ 000a6a66 0570
.org 0xa6a68
	adds r1, #9	@ 000a6a68 0931
.org 0xa6a6a
	movs r0, #112	@ 000a6a6a 7020
.org 0xa6a6c
	strb r0, [r1, #0]	@ 000a6a6c 0870
.org 0xa6a6e
	adds r0, r7, #0	@ 000a6a6e 381c
.org 0xa6a70
	adds r0, #184	@ 000a6a70 b830
.org 0xa6a72
	strb r5, [r0, #0]	@ 000a6a72 0570
.org 0xa6a74
	adds r0, #8	@ 000a6a74 0830
.org 0xa6a76
	str r5, [r0, #0]	@ 000a6a76 0560
.org 0xa6a78
	adds r0, r7, #0	@ 000a6a78 381c
.org 0xa6a7a
	bl 0xa6954	@ 000a6a7a fff76bff
.org 0xa6a7e
	ldr r1, [pc, #36]	@ 000a6a7e 0949
.org 0xa6a80
	ldrb r0, [r7, #9]	@ 000a6a80 787a
.org 0xa6a82
	lsls r0, r0, #2	@ 000a6a82 8000
.org 0xa6a84
	adds r0, r0, r1	@ 000a6a84 4018
.org 0xa6a86
	str r6, [r7, #12]	@ 000a6a86 fe60
.org 0xa6a88
	ldr r0, [r0, #0]	@ 000a6a88 0068
.org 0xa6a8a
	ldr r0, [r0, #4]	@ 000a6a8a 4068
.org 0xa6a8c
	str r0, [r7, #20]	@ 000a6a8c 7861
.org 0xa6a8e
	adds r0, r7, #0	@ 000a6a8e 381c
.org 0xa6a90
	bl 0xa6b28	@ 000a6a90 00f04af8
