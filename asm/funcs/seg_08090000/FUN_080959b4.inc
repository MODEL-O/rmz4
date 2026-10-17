@ FUN_080959b4  entry 0x080959b4  size 268
.thumb
.org 0x959b4
FUN_080959b4:
	push {r4, r5, r6, r7, lr}	@ 000959b4 f0b5
.org 0x959b6
	mov r7, r8	@ 000959b6 4746
.org 0x959b8
	push {r7}	@ 000959b8 80b4
.org 0x959ba
	adds r4, r0, #0	@ 000959ba 041c
.org 0x959bc
	ldr r0, [r4, #40]	@ 000959bc a06a
.org 0x959be
	ldr r0, [r0, #40]	@ 000959be 806a
.org 0x959c0
	mov r8, r0	@ 000959c0 8046
.org 0x959c2
	ldrb r0, [r4, #10]	@ 000959c2 a07a
.org 0x959c4
	lsrs r5, r0, #4	@ 000959c4 0509
.org 0x959c6
	movs r7, #1	@ 000959c6 0127
.org 0x959c8
	ands r5, r7	@ 000959c8 3d40
.org 0x959ca
	ldrb r6, [r4, #15]	@ 000959ca e67b
.org 0x959cc
	cmp r6, #0	@ 000959cc 002e
.org 0x959ce
	bne.n 0x959ee	@ 000959ce 0ed1
.org 0x959d0
	movs r0, #187	@ 000959d0 bb20
.org 0x959d2
	bl 0x2b10	@ 000959d2 6df79df8
.org 0x959d6
	str r6, [r4, #92]	@ 000959d6 e665
.org 0x959d8
	movs r0, #32	@ 000959d8 2020
.org 0x959da
	str r0, [r4, #100]	@ 000959da 6066
.org 0x959dc
	movs r0, #154	@ 000959dc 9a20
.org 0x959de
	lsls r0, r0, #2	@ 000959de 8000
.org 0x959e0
	muls r0, r5	@ 000959e0 6843
.org 0x959e2
	adds r0, #12	@ 000959e2 0c30
.org 0x959e4
	strb r0, [r4, #18]	@ 000959e4 a074
.org 0x959e6
	strb r7, [r4, #19]	@ 000959e6 e774
.org 0x959e8
	ldrb r0, [r4, #15]	@ 000959e8 e07b
.org 0x959ea
	adds r0, #1	@ 000959ea 0130
.org 0x959ec
	strb r0, [r4, #15]	@ 000959ec e073
.org 0x959ee
	adds r0, r4, #0	@ 000959ee 201c
.org 0x959f0
	bl 0x1cff0	@ 000959f0 87f7fefa
.org 0x959f4
	ldrb r3, [r4, #18]	@ 000959f4 a37c
.org 0x959f6
	ldr r5, [pc, #200]	@ 000959f6 324d
.org 0x959f8
	adds r0, r3, #0	@ 000959f8 181c
.org 0x959fa
	adds r0, #64	@ 000959fa 4030
.org 0x959fc
	lsls r0, r0, #24	@ 000959fc 0006
.org 0x959fe
	lsrs r0, r0, #23	@ 000959fe c00d
.org 0x95a00
	adds r0, r0, r5	@ 00095a00 4019
.org 0x95a02
	movs r1, #0	@ 00095a02 0021
.org 0x95a04
	ldrsh r0, [r0, r1]	@ 00095a04 405e
.org 0x95a06
	ldr r2, [r4, #92]	@ 00095a06 e26d
.org 0x95a08
	adds r1, r2, #0	@ 00095a08 111c
.org 0x95a0a
	muls r1, r0	@ 00095a0a 4143
.org 0x95a0c
	cmp r1, #0	@ 00095a0c 0029
.org 0x95a0e
	bge.n 0x95a12	@ 00095a0e 00da
.org 0x95a10
	adds r1, #255	@ 00095a10 ff31
.org 0x95a12
	asrs r1, r1, #8	@ 00095a12 0912
.org 0x95a14
	ldr r0, [r4, #84]	@ 00095a14 606d
.org 0x95a16
	adds r0, r0, r1	@ 00095a16 4018
.org 0x95a18
	str r0, [r4, #84]	@ 00095a18 6065
.org 0x95a1a
	lsls r0, r3, #1	@ 00095a1a 5800
.org 0x95a1c
	adds r0, r0, r5	@ 00095a1c 4019
.org 0x95a1e
	movs r1, #0	@ 00095a1e 0021
.org 0x95a20
	ldrsh r0, [r0, r1]	@ 00095a20 405e
.org 0x95a22
	muls r0, r2	@ 00095a22 5043
.org 0x95a24
	cmp r0, #0	@ 00095a24 0028
.org 0x95a26
	bge.n 0x95a2a	@ 00095a26 00da
.org 0x95a28
	adds r0, #255	@ 00095a28 ff30
.org 0x95a2a
	asrs r0, r0, #8	@ 00095a2a 0012
.org 0x95a2c
	ldr r1, [r4, #88]	@ 00095a2c a16d
.org 0x95a2e
	adds r1, r1, r0	@ 00095a2e 0918
.org 0x95a30
	str r1, [r4, #88]	@ 00095a30 a165
.org 0x95a32
	ldr r0, [r4, #100]	@ 00095a32 606e
.org 0x95a34
	adds r0, r2, r0	@ 00095a34 1018
.org 0x95a36
	str r0, [r4, #92]	@ 00095a36 e065
.org 0x95a38
	movs r1, #224	@ 00095a38 e021
.org 0x95a3a
	lsls r1, r1, #2	@ 00095a3a 8900
.org 0x95a3c
	cmp r0, r1	@ 00095a3c 8842
.org 0x95a3e
	ble.n 0x95a42	@ 00095a3e 00dd
.org 0x95a40
	str r1, [r4, #92]	@ 00095a40 e165
.org 0x95a42
	ldrb r0, [r4, #19]	@ 00095a42 e07c
.org 0x95a44
	cmp r0, #0	@ 00095a44 0028
.org 0x95a46
	beq.n 0x95a68	@ 00095a46 0fd0
.org 0x95a48
	mov r0, r8	@ 00095a48 4046
.org 0x95a4a
	bl 0x5c3a8	@ 00095a4a c6f7adfc
.org 0x95a4e
	ldr r1, [r4, #84]	@ 00095a4e 616d
.org 0x95a50
	subs r0, r0, r1	@ 00095a50 401a
.org 0x95a52
	movs r1, #216	@ 00095a52 d821
.org 0x95a54
	lsls r1, r1, #8	@ 00095a54 0902
.org 0x95a56
	adds r0, r0, r1	@ 00095a56 4018
.org 0x95a58
	movs r1, #192	@ 00095a58 c021
.org 0x95a5a
	lsls r1, r1, #8	@ 00095a5a 0902
.org 0x95a5c
	cmp r0, r1	@ 00095a5c 8842
.org 0x95a5e
	bls.n 0x95a68	@ 00095a5e 03d9
.org 0x95a60
	movs r1, #0	@ 00095a60 0021
.org 0x95a62
	movs r0, #192	@ 00095a62 c020
.org 0x95a64
	strb r0, [r4, #18]	@ 00095a64 a074
.org 0x95a66
	strb r1, [r4, #19]	@ 00095a66 e174
.org 0x95a68
	adds r0, r4, #0	@ 00095a68 201c
.org 0x95a6a
	bl 0x95cd8	@ 00095a6a 00f035f9
.org 0x95a6e
	ldr r0, [pc, #84]	@ 00095a6e 1548
.org 0x95a70
	adds r1, r4, #0	@ 00095a70 211c
.org 0x95a72
	adds r1, #84	@ 00095a72 5431
.org 0x95a74
	bl 0x1fb14	@ 00095a74 8af74ef8
.org 0x95a78
	movs r1, #192	@ 00095a78 c021
.org 0x95a7a
	lsls r1, r1, #6	@ 00095a7a 8901
.org 0x95a7c
	cmp r0, r1	@ 00095a7c 8842
.org 0x95a7e
	bls.n 0x95ab6	@ 00095a7e 1ad9
.org 0x95a80
	ldrb r1, [r4, #10]	@ 00095a80 a17a
.org 0x95a82
	movs r0, #254	@ 00095a82 fe20
.org 0x95a84
	ands r0, r1	@ 00095a84 0840
.org 0x95a86
	movs r2, #0	@ 00095a86 0022
.org 0x95a88
	movs r1, #253	@ 00095a88 fd21
.org 0x95a8a
	ands r0, r1	@ 00095a8a 0840
.org 0x95a8c
	strb r0, [r4, #10]	@ 00095a8c a072
.org 0x95a8e
	adds r0, r4, #0	@ 00095a8e 201c
.org 0x95a90
	adds r0, #140	@ 00095a90 8c30
.org 0x95a92
	str r2, [r0, #0]	@ 00095a92 0260
.org 0x95a94
	adds r0, #4	@ 00095a94 0430
.org 0x95a96
	str r2, [r0, #0]	@ 00095a96 0260
.org 0x95a98
	adds r0, #4	@ 00095a98 0430
.org 0x95a9a
	strb r2, [r0, #0]	@ 00095a9a 0270
.org 0x95a9c
	ldrb r1, [r4, #10]	@ 00095a9c a17a
.org 0x95a9e
	movs r0, #251	@ 00095a9e fb20
.org 0x95aa0
	ands r0, r1	@ 00095aa0 0840
.org 0x95aa2
	strb r0, [r4, #10]	@ 00095aa2 a072
.org 0x95aa4
	ldr r1, [pc, #32]	@ 00095aa4 0849
.org 0x95aa6
	ldrb r0, [r4, #9]	@ 00095aa6 607a
.org 0x95aa8
	lsls r0, r0, #2	@ 00095aa8 8000
.org 0x95aaa
	adds r0, r0, r1	@ 00095aaa 4018
.org 0x95aac
	movs r1, #3	@ 00095aac 0321
.org 0x95aae
	str r1, [r4, #12]	@ 00095aae e160
.org 0x95ab0
	ldr r0, [r0, #0]	@ 00095ab0 0068
.org 0x95ab2
	ldr r0, [r0, #12]	@ 00095ab2 c068
.org 0x95ab4
	str r0, [r4, #20]	@ 00095ab4 6061
.org 0x95ab6
	pop {r3}	@ 00095ab6 08bc
.org 0x95ab8
	mov r8, r3	@ 00095ab8 9846
.org 0x95aba
	pop {r4, r5, r6, r7}	@ 00095aba f0bc
.org 0x95abc
	pop {r0}	@ 00095abc 01bc
.org 0x95abe
	bx r0	@ 00095abe 0047
