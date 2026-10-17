@ FUN_080b09c4  entry 0x080b09c4  size 254
.thumb
.org 0xb09c4
FUN_080b09c4:
	push {r4, lr}	@ 000b09c4 10b5
.org 0xb09c6
	adds r4, r0, #0	@ 000b09c6 041c
.org 0xb09c8
	ldrb r2, [r4, #14]	@ 000b09c8 a27b
.org 0xb09ca
	cmp r2, #0	@ 000b09ca 002a
.org 0xb09cc
	bne.n 0xb09ee	@ 000b09cc 0fd1
.org 0xb09ce
	adds r1, r4, #0	@ 000b09ce 211c
.org 0xb09d0
	adds r1, #184	@ 000b09d0 b831
.org 0xb09d2
	ldr r0, [r4, #84]	@ 000b09d2 606d
.org 0xb09d4
	ldr r3, [pc, #80]	@ 000b09d4 144b
.org 0xb09d6
	adds r0, r0, r3	@ 000b09d6 c018
.org 0xb09d8
	str r0, [r1, #0]	@ 000b09d8 0860
.org 0xb09da
	adds r1, #4	@ 000b09da 0431
.org 0xb09dc
	ldr r0, [r4, #88]	@ 000b09dc a06d
.org 0xb09de
	str r0, [r1, #0]	@ 000b09de 0860
.org 0xb09e0
	strb r2, [r4, #19]	@ 000b09e0 e274
.org 0xb09e2
	adds r0, r4, #0	@ 000b09e2 201c
.org 0xb09e4
	adds r0, #180	@ 000b09e4 b430
.org 0xb09e6
	strb r2, [r0, #0]	@ 000b09e6 0270
.org 0xb09e8
	ldrb r0, [r4, #14]	@ 000b09e8 a07b
.org 0xb09ea
	adds r0, #1	@ 000b09ea 0130
.org 0xb09ec
	strb r0, [r4, #14]	@ 000b09ec a073
.org 0xb09ee
	ldrb r0, [r4, #19]	@ 000b09ee e07c
.org 0xb09f0
	cmp r0, #0	@ 000b09f0 0028
.org 0xb09f2
	bne.n 0xb09fa	@ 000b09f2 02d1
.org 0xb09f4
	adds r0, r4, #0	@ 000b09f4 201c
.org 0xb09f6
	bl 0xb0c3c	@ 000b09f6 00f021f9
.org 0xb09fa
	ldrb r1, [r4, #19]	@ 000b09fa e17c
.org 0xb09fc
	subs r0, r1, #5	@ 000b09fc 481f
.org 0xb09fe
	strb r0, [r4, #19]	@ 000b09fe e074
.org 0xb0a00
	adds r0, r4, #0	@ 000b0a00 201c
.org 0xb0a02
	adds r0, #180	@ 000b0a02 b430
.org 0xb0a04
	ldrb r0, [r0, #0]	@ 000b0a04 0078
.org 0xb0a06
	cmp r0, #1	@ 000b0a06 0128
.org 0xb0a08
	bne.n 0xb0a30	@ 000b0a08 12d1
.org 0xb0a0a
	adds r3, r4, #0	@ 000b0a0a 231c
.org 0xb0a0c
	adds r3, #184	@ 000b0a0c b833
.org 0xb0a0e
	ldr r2, [pc, #28]	@ 000b0a0e 074a
.org 0xb0a10
	adds r0, r1, #0	@ 000b0a10 081c
.org 0xb0a12
	adds r0, #59	@ 000b0a12 3b30
.org 0xb0a14
	lsls r0, r0, #24	@ 000b0a14 0006
.org 0xb0a16
	lsrs r0, r0, #23	@ 000b0a16 c00d
.org 0xb0a18
	adds r0, r0, r2	@ 000b0a18 8018
.org 0xb0a1a
	movs r1, #0	@ 000b0a1a 0021
.org 0xb0a1c
	ldrsh r0, [r0, r1]	@ 000b0a1c 405e
.org 0xb0a1e
	lsls r1, r0, #2	@ 000b0a1e 8100
.org 0xb0a20
	adds r1, r1, r0	@ 000b0a20 0918
.org 0xb0a22
	ldr r0, [r3, #0]	@ 000b0a22 1868
.org 0xb0a24
	subs r0, r0, r1	@ 000b0a24 401a
.org 0xb0a26
	b.n 0xb0a4c	@ 000b0a26 11e0
.org 0xb0a28
	.byte 0x00,0xfb,0xff,0xff	@ 000b0a28 data
.org 0xb0a2c
	.byte 0x0c,0x93,0x12,0x08	@ 000b0a2c data
.org 0xb0a30
	adds r3, r4, #0	@ 000b0a30 231c
.org 0xb0a32
	adds r3, #184	@ 000b0a32 b833
.org 0xb0a34
	ldr r2, [pc, #148]	@ 000b0a34 254a
.org 0xb0a36
	adds r0, r1, #0	@ 000b0a36 081c
.org 0xb0a38
	adds r0, #59	@ 000b0a38 3b30
.org 0xb0a3a
	lsls r0, r0, #24	@ 000b0a3a 0006
.org 0xb0a3c
	lsrs r0, r0, #23	@ 000b0a3c c00d
.org 0xb0a3e
	adds r0, r0, r2	@ 000b0a3e 8018
.org 0xb0a40
	movs r1, #0	@ 000b0a40 0021
.org 0xb0a42
	ldrsh r0, [r0, r1]	@ 000b0a42 405e
.org 0xb0a44
	lsls r1, r0, #2	@ 000b0a44 8100
.org 0xb0a46
	adds r1, r1, r0	@ 000b0a46 0918
.org 0xb0a48
	ldr r0, [r3, #0]	@ 000b0a48 1868
.org 0xb0a4a
	adds r0, r0, r1	@ 000b0a4a 4018
.org 0xb0a4c
	str r0, [r4, #84]	@ 000b0a4c 6065
.org 0xb0a4e
	adds r1, r2, #0	@ 000b0a4e 111c
.org 0xb0a50
	adds r2, r4, #0	@ 000b0a50 221c
.org 0xb0a52
	adds r2, #188	@ 000b0a52 bc32
.org 0xb0a54
	ldrb r0, [r4, #19]	@ 000b0a54 e07c
.org 0xb0a56
	lsls r0, r0, #1	@ 000b0a56 4000
.org 0xb0a58
	adds r0, r0, r1	@ 000b0a58 4018
.org 0xb0a5a
	movs r3, #0	@ 000b0a5a 0023
.org 0xb0a5c
	ldrsh r0, [r0, r3]	@ 000b0a5c c05e
.org 0xb0a5e
	lsls r1, r0, #2	@ 000b0a5e 8100
.org 0xb0a60
	adds r1, r1, r0	@ 000b0a60 0918
.org 0xb0a62
	ldr r0, [r2, #0]	@ 000b0a62 1068
.org 0xb0a64
	adds r0, r0, r1	@ 000b0a64 4018
.org 0xb0a66
	str r0, [r4, #88]	@ 000b0a66 a065
.org 0xb0a68
	adds r0, r4, #0	@ 000b0a68 201c
.org 0xb0a6a
	bl 0xb0ccc	@ 000b0a6a 00f02ff9
.org 0xb0a6e
	ldr r0, [r4, #40]	@ 000b0a6e a06a
.org 0xb0a70
	ldrb r0, [r0, #12]	@ 000b0a70 007b
.org 0xb0a72
	cmp r0, #1	@ 000b0a72 0128
.org 0xb0a74
	bls.n 0xb0a7e	@ 000b0a74 03d9
.org 0xb0a76
	movs r1, #0	@ 000b0a76 0021
.org 0xb0a78
	movs r0, #2	@ 000b0a78 0220
.org 0xb0a7a
	strb r0, [r4, #13]	@ 000b0a7a 6073
.org 0xb0a7c
	strb r1, [r4, #14]	@ 000b0a7c a173
.org 0xb0a7e
	ldr r0, [r4, #40]	@ 000b0a7e a06a
.org 0xb0a80
	adds r0, #183	@ 000b0a80 b730
.org 0xb0a82
	ldrb r2, [r0, #0]	@ 000b0a82 0278
.org 0xb0a84
	ldrb r0, [r4, #17]	@ 000b0a84 607c
.org 0xb0a86
	asrs r2, r0	@ 000b0a86 0241
.org 0xb0a88
	movs r0, #1	@ 000b0a88 0120
.org 0xb0a8a
	ands r2, r0	@ 000b0a8a 0240
.org 0xb0a8c
	cmp r2, #0	@ 000b0a8c 002a
.org 0xb0a8e
	bne.n 0xb0ac4	@ 000b0a8e 19d1
.org 0xb0a90
	ldrb r1, [r4, #10]	@ 000b0a90 a17a
.org 0xb0a92
	movs r0, #254	@ 000b0a92 fe20
.org 0xb0a94
	ands r0, r1	@ 000b0a94 0840
.org 0xb0a96
	movs r1, #253	@ 000b0a96 fd21
.org 0xb0a98
	ands r0, r1	@ 000b0a98 0840
.org 0xb0a9a
	strb r0, [r4, #10]	@ 000b0a9a a072
.org 0xb0a9c
	adds r0, r4, #0	@ 000b0a9c 201c
.org 0xb0a9e
	adds r0, #140	@ 000b0a9e 8c30
.org 0xb0aa0
	str r2, [r0, #0]	@ 000b0aa0 0260
.org 0xb0aa2
	adds r0, #4	@ 000b0aa2 0430
.org 0xb0aa4
	str r2, [r0, #0]	@ 000b0aa4 0260
.org 0xb0aa6
	adds r0, #4	@ 000b0aa6 0430
.org 0xb0aa8
	strb r2, [r0, #0]	@ 000b0aa8 0270
.org 0xb0aaa
	ldrb r1, [r4, #10]	@ 000b0aaa a17a
.org 0xb0aac
	movs r0, #251	@ 000b0aac fb20
.org 0xb0aae
	ands r0, r1	@ 000b0aae 0840
.org 0xb0ab0
	strb r0, [r4, #10]	@ 000b0ab0 a072
.org 0xb0ab2
	ldr r1, [pc, #28]	@ 000b0ab2 0749
.org 0xb0ab4
	ldrb r0, [r4, #9]	@ 000b0ab4 607a
.org 0xb0ab6
	lsls r0, r0, #2	@ 000b0ab6 8000
.org 0xb0ab8
	adds r0, r0, r1	@ 000b0ab8 4018
.org 0xb0aba
	movs r1, #3	@ 000b0aba 0321
.org 0xb0abc
	str r1, [r4, #12]	@ 000b0abc e160
.org 0xb0abe
	ldr r0, [r0, #0]	@ 000b0abe 0068
.org 0xb0ac0
	ldr r0, [r0, #12]	@ 000b0ac0 c068
