@ FUN_081039e4  entry 0x081039e4  size 222
.thumb
.org 0x1039e4
FUN_081039e4:
	push {r4, r5, r6, r7, lr}	@ 001039e4 f0b5
.org 0x1039e6
	mov r7, sl	@ 001039e6 5746
.org 0x1039e8
	mov r6, r9	@ 001039e8 4e46
.org 0x1039ea
	mov r5, r8	@ 001039ea 4546
.org 0x1039ec
	push {r5, r6, r7}	@ 001039ec e0b4
.org 0x1039ee
	mov r9, r0	@ 001039ee 8146
.org 0x1039f0
	ldr r2, [r0, #12]	@ 001039f0 c268
.org 0x1039f2
	ldr r3, [r2, #4]	@ 001039f2 5368
.org 0x1039f4
	ldr r4, [r2, #8]	@ 001039f4 9468
.org 0x1039f6
	adds r6, r3, #0	@ 001039f6 1e1c
.org 0x1039f8
	adds r6, #16	@ 001039f8 1036
.org 0x1039fa
	ldrb r0, [r3, #1]	@ 001039fa 5878
.org 0x1039fc
	cmp r0, #0	@ 001039fc 0028
.org 0x1039fe
	bne.n 0x103a06	@ 001039fe 02d1
.org 0x103a00
	ldr r7, [r1, #0]	@ 00103a00 0f68
.org 0x103a02
	ldr r5, [r1, #4]	@ 00103a02 4d68
.org 0x103a04
	b.n 0x103a2c	@ 00103a04 12e0
.org 0x103a06
	ldr r0, [r2, #44]	@ 00103a06 d06a
.org 0x103a08
	ldrb r1, [r0, #10]	@ 00103a08 817a
.org 0x103a0a
	movs r0, #16	@ 00103a0a 1020
.org 0x103a0c
	ands r0, r1	@ 00103a0c 0840
.org 0x103a0e
	cmp r0, #0	@ 00103a0e 0028
.org 0x103a10
	bne.n 0x103a1c	@ 00103a10 04d1
.org 0x103a12
	movs r0, #16	@ 00103a12 1020
.org 0x103a14
	ldrsh r1, [r3, r0]	@ 00103a14 195e
.org 0x103a16
	ldr r0, [r4, #0]	@ 00103a16 2068
.org 0x103a18
	adds r7, r0, r1	@ 00103a18 4718
.org 0x103a1a
	b.n 0x103a24	@ 00103a1a 03e0
.org 0x103a1c
	movs r0, #16	@ 00103a1c 1020
.org 0x103a1e
	ldrsh r1, [r3, r0]	@ 00103a1e 195e
.org 0x103a20
	ldr r0, [r4, #0]	@ 00103a20 2068
.org 0x103a22
	subs r7, r0, r1	@ 00103a22 471a
.org 0x103a24
	movs r0, #2	@ 00103a24 0220
.org 0x103a26
	ldrsh r1, [r6, r0]	@ 00103a26 315e
.org 0x103a28
	ldr r0, [r4, #4]	@ 00103a28 6068
.org 0x103a2a
	adds r5, r0, r1	@ 00103a2a 4518
.org 0x103a2c
	ldrh r0, [r6, #4]	@ 00103a2c b088
.org 0x103a2e
	lsrs r0, r0, #1	@ 00103a2e 4008
.org 0x103a30
	mov sl, r0	@ 00103a30 8246
.org 0x103a32
	ldrh r0, [r6, #6]	@ 00103a32 f088
.org 0x103a34
	lsrs r0, r0, #1	@ 00103a34 4008
.org 0x103a36
	mov r8, r0	@ 00103a36 8046
.org 0x103a38
	adds r0, r7, #0	@ 00103a38 381c
.org 0x103a3a
	adds r1, r5, #0	@ 00103a3a 291c
.org 0x103a3c
	bl 0x1a728	@ 00103a3c 16f774fe
.org 0x103a40
	lsls r0, r0, #16	@ 00103a40 0004
.org 0x103a42
	cmp r0, #0	@ 00103a42 0028
.org 0x103a44
	beq.n 0x103a4a	@ 00103a44 01d0
.org 0x103a46
	adds r0, r7, #0	@ 00103a46 381c
.org 0x103a48
	b.n 0x103a9e	@ 00103a48 29e0
.org 0x103a4a
	mov r1, sl	@ 00103a4a 5146
.org 0x103a4c
	adds r4, r7, r1	@ 00103a4c 7c18
.org 0x103a4e
	mov r0, r8	@ 00103a4e 4046
.org 0x103a50
	adds r6, r5, r0	@ 00103a50 2e18
.org 0x103a52
	adds r0, r4, #0	@ 00103a52 201c
.org 0x103a54
	adds r1, r6, #0	@ 00103a54 311c
.org 0x103a56
	bl 0x1a728	@ 00103a56 16f767fe
.org 0x103a5a
	lsls r0, r0, #16	@ 00103a5a 0004
.org 0x103a5c
	cmp r0, #0	@ 00103a5c 0028
.org 0x103a5e
	bne.n 0x103a84	@ 00103a5e 11d1
.org 0x103a60
	mov r1, r8	@ 00103a60 4146
.org 0x103a62
	subs r5, r5, r1	@ 00103a62 6d1a
.org 0x103a64
	adds r0, r4, #0	@ 00103a64 201c
.org 0x103a66
	adds r1, r5, #0	@ 00103a66 291c
.org 0x103a68
	bl 0x1a728	@ 00103a68 16f75efe
.org 0x103a6c
	lsls r0, r0, #16	@ 00103a6c 0004
.org 0x103a6e
	cmp r0, #0	@ 00103a6e 0028
.org 0x103a70
	bne.n 0x103a9c	@ 00103a70 14d1
.org 0x103a72
	mov r0, sl	@ 00103a72 5046
.org 0x103a74
	subs r4, r7, r0	@ 00103a74 3c1a
.org 0x103a76
	adds r0, r4, #0	@ 00103a76 201c
.org 0x103a78
	adds r1, r6, #0	@ 00103a78 311c
.org 0x103a7a
	bl 0x1a728	@ 00103a7a 16f755fe
.org 0x103a7e
	lsls r0, r0, #16	@ 00103a7e 0004
.org 0x103a80
	cmp r0, #0	@ 00103a80 0028
.org 0x103a82
	beq.n 0x103a8e	@ 00103a82 04d0
.org 0x103a84
	adds r0, r4, #0	@ 00103a84 201c
.org 0x103a86
	adds r1, r6, #0	@ 00103a86 311c
.org 0x103a88
	bl 0x1a788	@ 00103a88 16f77efe
.org 0x103a8c
	b.n 0x103ab4	@ 00103a8c 12e0
.org 0x103a8e
	adds r0, r4, #0	@ 00103a8e 201c
.org 0x103a90
	adds r1, r5, #0	@ 00103a90 291c
.org 0x103a92
	bl 0x1a728	@ 00103a92 16f749fe
.org 0x103a96
	lsls r0, r0, #16	@ 00103a96 0004
.org 0x103a98
	cmp r0, #0	@ 00103a98 0028
.org 0x103a9a
	beq.n 0x103aa6	@ 00103a9a 04d0
.org 0x103a9c
	adds r0, r4, #0	@ 00103a9c 201c
.org 0x103a9e
	adds r1, r5, #0	@ 00103a9e 291c
.org 0x103aa0
	bl 0x1a788	@ 00103aa0 16f772fe
.org 0x103aa4
	b.n 0x103ab4	@ 00103aa4 06e0
.org 0x103aa6
	mov r1, r9	@ 00103aa6 4946
.org 0x103aa8
	ldr r0, [r1, #24]	@ 00103aa8 8869
.org 0x103aaa
	movs r1, #2	@ 00103aaa 0221
.org 0x103aac
	negs r1, r1	@ 00103aac 4942
.org 0x103aae
	ands r0, r1	@ 00103aae 0840
.org 0x103ab0
	mov r1, r9	@ 00103ab0 4946
.org 0x103ab2
	str r0, [r1, #24]	@ 00103ab2 8861
.org 0x103ab4
	pop {r3, r4, r5}	@ 00103ab4 38bc
.org 0x103ab6
	mov r8, r3	@ 00103ab6 9846
.org 0x103ab8
	mov r9, r4	@ 00103ab8 a146
.org 0x103aba
	mov sl, r5	@ 00103aba aa46
.org 0x103abc
	pop {r4, r5, r6, r7}	@ 00103abc f0bc
.org 0x103abe
	pop {r0}	@ 00103abe 01bc
.org 0x103ac0
	bx r0	@ 00103ac0 0047
