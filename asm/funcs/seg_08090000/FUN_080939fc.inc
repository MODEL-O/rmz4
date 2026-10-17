@ FUN_080939fc  entry 0x080939fc  size 274
.thumb
.org 0x939fc
FUN_080939fc:
	push {r4, r5, r6, r7, lr}	@ 000939fc f0b5
.org 0x939fe
	mov r7, r8	@ 000939fe 4746
.org 0x93a00
	push {r7}	@ 00093a00 80b4
.org 0x93a02
	adds r5, r0, #0	@ 00093a02 051c
.org 0x93a04
	ldrb r7, [r5, #16]	@ 00093a04 2f7c
.org 0x93a06
	ldrb r0, [r5, #17]	@ 00093a06 687c
.org 0x93a08
	mov r8, r0	@ 00093a08 8046
.org 0x93a0a
	ldrb r6, [r5, #19]	@ 00093a0a ee7c
.org 0x93a0c
	ldrb r0, [r5, #15]	@ 00093a0c e87b
.org 0x93a0e
	cmp r0, #0	@ 00093a0e 0028
.org 0x93a10
	bne.n 0x93a2a	@ 00093a10 0bd1
.org 0x93a12
	adds r0, r5, #0	@ 00093a12 281c
.org 0x93a14
	adds r0, #116	@ 00093a14 7430
.org 0x93a16
	ldr r1, [pc, #128]	@ 00093a16 2049
.org 0x93a18
	bl 0x5784	@ 00093a18 71f7b4fe
.org 0x93a1c
	ldr r1, [pc, #124]	@ 00093a1c 1f49
.org 0x93a1e
	adds r0, r5, #0	@ 00093a1e 281c
.org 0x93a20
	bl 0x1cf00	@ 00093a20 89f76efa
.org 0x93a24
	ldrb r0, [r5, #15]	@ 00093a24 e87b
.org 0x93a26
	adds r0, #1	@ 00093a26 0130
.org 0x93a28
	strb r0, [r5, #15]	@ 00093a28 e873
.org 0x93a2a
	adds r0, r5, #0	@ 00093a2a 281c
.org 0x93a2c
	adds r0, #140	@ 00093a2c 8c30
.org 0x93a2e
	ldr r0, [r0, #0]	@ 00093a2e 0068
.org 0x93a30
	movs r1, #1	@ 00093a30 0121
.org 0x93a32
	ands r0, r1	@ 00093a32 0840
.org 0x93a34
	cmp r0, #0	@ 00093a34 0028
.org 0x93a36
	beq.n 0x93a58	@ 00093a36 0fd0
.org 0x93a38
	movs r2, #0	@ 00093a38 0022
.org 0x93a3a
	ldr r0, [pc, #100]	@ 00093a3a 1948
.org 0x93a3c
	ldr r0, [r0, #0]	@ 00093a3c 0068
.org 0x93a3e
	ldr r1, [r5, #84]	@ 00093a3e 696d
.org 0x93a40
	ldr r0, [r0, #84]	@ 00093a40 406d
.org 0x93a42
	cmp r1, r0	@ 00093a42 8142
.org 0x93a44
	blt.n 0x93a48	@ 00093a44 00db
.org 0x93a46
	movs r2, #1	@ 00093a46 0122
.org 0x93a48
	adds r6, r2, #0	@ 00093a48 161c
.org 0x93a4a
	lsls r0, r6, #1	@ 00093a4a 7000
.org 0x93a4c
	subs r0, #1	@ 00093a4c 0138
.org 0x93a4e
	lsls r0, r0, #7	@ 00093a4e c001
.org 0x93a50
	str r0, [r5, #92]	@ 00093a50 e865
.org 0x93a52
	movs r0, #12	@ 00093a52 0c20
.org 0x93a54
	strb r0, [r5, #18]	@ 00093a54 a874
.org 0x93a56
	strb r6, [r5, #19]	@ 00093a56 ee74
.org 0x93a58
	adds r0, r5, #0	@ 00093a58 281c
.org 0x93a5a
	bl 0x1cff0	@ 00093a5a 89f7c9fa
.org 0x93a5e
	ldrb r0, [r5, #18]	@ 00093a5e a87c
.org 0x93a60
	cmp r0, #0	@ 00093a60 0028
.org 0x93a62
	beq.n 0x93a68	@ 00093a62 01d0
.org 0x93a64
	subs r0, #1	@ 00093a64 0138
.org 0x93a66
	strb r0, [r5, #18]	@ 00093a66 a874
.org 0x93a68
	adds r0, r5, #0	@ 00093a68 281c
.org 0x93a6a
	bl 0x94a38	@ 00093a6a 00f0e5ff
.org 0x93a6e
	ldr r0, [r5, #92]	@ 00093a6e e86d
.org 0x93a70
	lsls r1, r0, #1	@ 00093a70 4100
.org 0x93a72
	adds r1, r1, r0	@ 00093a72 0918
.org 0x93a74
	asrs r1, r1, #2	@ 00093a74 8910
.org 0x93a76
	str r1, [r5, #92]	@ 00093a76 e965
.org 0x93a78
	ldr r0, [r5, #84]	@ 00093a78 686d
.org 0x93a7a
	adds r4, r0, r1	@ 00093a7a 4418
.org 0x93a7c
	cmp r6, #0	@ 00093a7c 002e
.org 0x93a7e
	bne.n 0x93aa4	@ 00093a7e 11d1
.org 0x93a80
	adds r0, r5, #0	@ 00093a80 281c
.org 0x93a82
	adds r1, r4, #0	@ 00093a82 211c
.org 0x93a84
	bl 0x9482c	@ 00093a84 00f0d2fe
.org 0x93a88
	cmp r0, #0	@ 00093a88 0028
.org 0x93a8a
	beq.n 0x93aba	@ 00093a8a 16d0
.org 0x93a8c
	adds r0, r5, #0	@ 00093a8c 281c
.org 0x93a8e
	adds r1, r4, #0	@ 00093a8e 211c
.org 0x93a90
	bl 0x94b14	@ 00093a90 01f040f8
.org 0x93a94
	b.n 0x93abc	@ 00093a94 12e0
.org 0x93a96
	.byte 0x00	@ 00093a96 data
.org 0x93a97
	.byte 0x00	@ 00093a97 data
.org 0x93a98
	.byte 0x94,0x05,0x86,0x08	@ 00093a98 data
.org 0x93a9c
	.byte 0x0f,0x40,0x00,0x00	@ 00093a9c data
.org 0x93aa0
	.byte 0xf0,0xdb,0x02,0x02	@ 00093aa0 data
.org 0x93aa4
	adds r0, r5, #0	@ 00093aa4 281c
.org 0x93aa6
	adds r1, r4, #0	@ 00093aa6 211c
.org 0x93aa8
	bl 0x94934	@ 00093aa8 00f044ff
.org 0x93aac
	cmp r0, #0	@ 00093aac 0028
.org 0x93aae
	beq.n 0x93aba	@ 00093aae 04d0
.org 0x93ab0
	adds r0, r5, #0	@ 00093ab0 281c
.org 0x93ab2
	adds r1, r4, #0	@ 00093ab2 211c
.org 0x93ab4
	bl 0x94c64	@ 00093ab4 01f0d6f8
.org 0x93ab8
	b.n 0x93abc	@ 00093ab8 00e0
.org 0x93aba
	str r4, [r5, #84]	@ 00093aba 6c65
.org 0x93abc
	ldr r1, [r5, #84]	@ 00093abc 696d
.org 0x93abe
	ldr r2, [r5, #88]	@ 00093abe aa6d
.org 0x93ac0
	adds r0, r5, #0	@ 00093ac0 281c
.org 0x93ac2
	bl 0x947b4	@ 00093ac2 00f077fe
.org 0x93ac6
	cmp r0, #0	@ 00093ac6 0028
.org 0x93ac8
	beq.n 0x93ad0	@ 00093ac8 02d0
.org 0x93aca
	adds r0, r5, #0	@ 00093aca 281c
.org 0x93acc
	bl 0x94a38	@ 00093acc 00f0b4ff
.org 0x93ad0
	adds r0, r5, #0	@ 00093ad0 281c
.org 0x93ad2
	adds r0, #115	@ 00093ad2 7330
.org 0x93ad4
	ldrb r0, [r0, #0]	@ 00093ad4 0078
.org 0x93ad6
	cmp r0, #3	@ 00093ad6 0328
.org 0x93ad8
	bne.n 0x93b1c	@ 00093ad8 20d1
.org 0x93ada
	ldrb r6, [r5, #18]	@ 00093ada ae7c
.org 0x93adc
	cmp r6, #0	@ 00093adc 002e
.org 0x93ade
	bne.n 0x93b1c	@ 00093ade 1dd1
.org 0x93ae0
	cmp r7, #1	@ 00093ae0 012f
.org 0x93ae2
	bne.n 0x93b14	@ 00093ae2 17d1
.org 0x93ae4
	ldr r0, [pc, #36]	@ 00093ae4 0948
.org 0x93ae6
	ldr r1, [pc, #40]	@ 00093ae6 0a49
.org 0x93ae8
	adds r0, r0, r1	@ 00093ae8 4018
.org 0x93aea
	ldrb r4, [r0, #0]	@ 00093aea 0478
.org 0x93aec
	mov r0, r8	@ 00093aec 4046
.org 0x93aee
	movs r1, #3	@ 00093aee 0321
.org 0x93af0
	bl 0x129120	@ 00093af0 95f016fb
.org 0x93af4
	lsls r0, r0, #24	@ 00093af4 0006
.org 0x93af6
	lsrs r0, r0, #24	@ 00093af6 000e
.org 0x93af8
	asrs r4, r0	@ 00093af8 0441
.org 0x93afa
	ands r4, r7	@ 00093afa 3c40
.org 0x93afc
	cmp r4, #0	@ 00093afc 002c
.org 0x93afe
	beq.n 0x93b14	@ 00093afe 09d0
.org 0x93b00
	movs r0, #10	@ 00093b00 0a20
.org 0x93b02
	strb r0, [r5, #13]	@ 00093b02 6873
.org 0x93b04
	strb r6, [r5, #14]	@ 00093b04 ae73
.org 0x93b06
	strb r6, [r5, #15]	@ 00093b06 ee73
.org 0x93b08
	b.n 0x93b1c	@ 00093b08 08e0
.org 0x93b0a
	.byte 0x00	@ 00093b0a data
.org 0x93b0b
	.byte 0x00	@ 00093b0b data
.org 0x93b0c
	.byte 0xb0,0x0a,0x00,0x02	@ 00093b0c data
