@ FUN_08099a58  entry 0x08099a58  size 244
.thumb
.org 0x99a58
FUN_08099a58:
	push {r4, r5, r6, r7, lr}	@ 00099a58 f0b5
.org 0x99a5a
	sub sp, #8	@ 00099a5a 82b0
.org 0x99a5c
	adds r4, r0, #0	@ 00099a5c 041c
.org 0x99a5e
	bl 0x1cff0	@ 00099a5e 83f7c7fa
.org 0x99a62
	ldr r0, [r4, #84]	@ 00099a62 606d
.org 0x99a64
	str r0, [sp, #0]	@ 00099a64 0090
.org 0x99a66
	ldr r0, [r4, #88]	@ 00099a66 a06d
.org 0x99a68
	ldr r1, [pc, #28]	@ 00099a68 0749
.org 0x99a6a
	adds r0, r0, r1	@ 00099a6a 4018
.org 0x99a6c
	str r0, [sp, #4]	@ 00099a6c 0190
.org 0x99a6e
	ldr r5, [pc, #28]	@ 00099a6e 074d
.org 0x99a70
	adds r0, r4, #0	@ 00099a70 201c
.org 0x99a72
	adds r0, #188	@ 00099a72 bc30
.org 0x99a74
	ldrb r2, [r0, #0]	@ 00099a74 0278
.org 0x99a76
	ldrb r1, [r4, #10]	@ 00099a76 a17a
.org 0x99a78
	movs r3, #16	@ 00099a78 1023
.org 0x99a7a
	adds r0, r3, #0	@ 00099a7a 181c
.org 0x99a7c
	ands r0, r1	@ 00099a7c 0840
.org 0x99a7e
	cmp r0, #0	@ 00099a7e 0028
.org 0x99a80
	beq.n 0x99a90	@ 00099a80 06d0
.org 0x99a82
	orrs r3, r2	@ 00099a82 1343
.org 0x99a84
	b.n 0x99a92	@ 00099a84 05e0
.org 0x99a86
	.byte 0x00	@ 00099a86 data
.org 0x99a87
	.byte 0x00	@ 00099a87 data
.org 0x99a88
	.byte 0x00,0xf0,0xff,0xff	@ 00099a88 data
.org 0x99a8c
	.byte 0xc4,0x0d,0x86,0x08	@ 00099a8c data
.org 0x99a90
	adds r3, r2, #0	@ 00099a90 131c
.org 0x99a92
	mov r0, sp	@ 00099a92 6846
.org 0x99a94
	adds r1, r5, #0	@ 00099a94 291c
.org 0x99a96
	movs r2, #0	@ 00099a96 0022
.org 0x99a98
	bl 0xd4c8c	@ 00099a98 3bf0f8f8
.org 0x99a9c
	mov r6, sp	@ 00099a9c 6e46
.org 0x99a9e
	ldr r0, [pc, #28]	@ 00099a9e 0748
.org 0x99aa0
	mov ip, r0	@ 00099aa0 8446
.org 0x99aa2
	adds r2, r4, #0	@ 00099aa2 221c
.org 0x99aa4
	adds r2, #188	@ 00099aa4 bc32
.org 0x99aa6
	ldrb r5, [r2, #0]	@ 00099aa6 1578
.org 0x99aa8
	ldrb r1, [r4, #10]	@ 00099aa8 a17a
.org 0x99aaa
	movs r3, #16	@ 00099aaa 1023
.org 0x99aac
	adds r0, r3, #0	@ 00099aac 181c
.org 0x99aae
	ands r0, r1	@ 00099aae 0840
.org 0x99ab0
	adds r7, r2, #0	@ 00099ab0 171c
.org 0x99ab2
	cmp r0, #0	@ 00099ab2 0028
.org 0x99ab4
	beq.n 0x99ac0	@ 00099ab4 04d0
.org 0x99ab6
	orrs r3, r5	@ 00099ab6 2b43
.org 0x99ab8
	b.n 0x99ac2	@ 00099ab8 03e0
.org 0x99aba
	.byte 0x00	@ 00099aba data
.org 0x99abb
	.byte 0x00	@ 00099abb data
.org 0x99abc
	.byte 0xe0,0x0d,0x86,0x08	@ 00099abc data
.org 0x99ac0
	adds r3, r5, #0	@ 00099ac0 2b1c
.org 0x99ac2
	adds r0, r6, #0	@ 00099ac2 301c
.org 0x99ac4
	mov r1, ip	@ 00099ac4 6146
.org 0x99ac6
	movs r2, #0	@ 00099ac6 0022
.org 0x99ac8
	bl 0xd4c8c	@ 00099ac8 3bf0e0f8
.org 0x99acc
	mov r5, sp	@ 00099acc 6d46
.org 0x99ace
	ldr r6, [pc, #20]	@ 00099ace 054e
.org 0x99ad0
	ldrb r2, [r7, #0]	@ 00099ad0 3a78
.org 0x99ad2
	ldrb r1, [r4, #10]	@ 00099ad2 a17a
.org 0x99ad4
	movs r3, #16	@ 00099ad4 1023
.org 0x99ad6
	adds r0, r3, #0	@ 00099ad6 181c
.org 0x99ad8
	ands r0, r1	@ 00099ad8 0840
.org 0x99ada
	cmp r0, #0	@ 00099ada 0028
.org 0x99adc
	beq.n 0x99ae8	@ 00099adc 04d0
.org 0x99ade
	orrs r3, r2	@ 00099ade 1343
.org 0x99ae0
	b.n 0x99aea	@ 00099ae0 03e0
.org 0x99ae2
	.byte 0x00	@ 00099ae2 data
.org 0x99ae3
	.byte 0x00	@ 00099ae3 data
.org 0x99ae4
	.byte 0xfc,0x0d,0x86,0x08	@ 00099ae4 data
.org 0x99ae8
	adds r3, r2, #0	@ 00099ae8 131c
.org 0x99aea
	adds r0, r5, #0	@ 00099aea 281c
.org 0x99aec
	adds r1, r6, #0	@ 00099aec 311c
.org 0x99aee
	movs r2, #0	@ 00099aee 0022
.org 0x99af0
	bl 0xd4c8c	@ 00099af0 3bf0ccf8
.org 0x99af4
	mov r5, sp	@ 00099af4 6d46
.org 0x99af6
	ldr r6, [pc, #20]	@ 00099af6 054e
.org 0x99af8
	ldrb r2, [r7, #0]	@ 00099af8 3a78
.org 0x99afa
	ldrb r1, [r4, #10]	@ 00099afa a17a
.org 0x99afc
	movs r3, #16	@ 00099afc 1023
.org 0x99afe
	adds r0, r3, #0	@ 00099afe 181c
.org 0x99b00
	ands r0, r1	@ 00099b00 0840
.org 0x99b02
	cmp r0, #0	@ 00099b02 0028
.org 0x99b04
	beq.n 0x99b10	@ 00099b04 04d0
.org 0x99b06
	orrs r3, r2	@ 00099b06 1343
.org 0x99b08
	b.n 0x99b12	@ 00099b08 03e0
.org 0x99b0a
	.byte 0x00	@ 00099b0a data
.org 0x99b0b
	.byte 0x00	@ 00099b0b data
.org 0x99b0c
	.byte 0x18,0x0e,0x86,0x08	@ 00099b0c data
.org 0x99b10
	adds r3, r2, #0	@ 00099b10 131c
.org 0x99b12
	adds r0, r5, #0	@ 00099b12 281c
.org 0x99b14
	adds r1, r6, #0	@ 00099b14 311c
.org 0x99b16
	movs r2, #0	@ 00099b16 0022
.org 0x99b18
	bl 0xd4c8c	@ 00099b18 3bf0b8f8
.org 0x99b1c
	movs r0, #1	@ 00099b1c 0120
.org 0x99b1e
	mov r1, sp	@ 00099b1e 6946
.org 0x99b20
	bl 0xd0c88	@ 00099b20 37f0b2f8
.org 0x99b24
	movs r0, #42	@ 00099b24 2a20
.org 0x99b26
	bl 0x2b10	@ 00099b26 68f7f3ff
.org 0x99b2a
	adds r5, r4, #0	@ 00099b2a 251c
.org 0x99b2c
	adds r5, #84	@ 00099b2c 5435
.org 0x99b2e
	movs r0, #3	@ 00099b2e 0320
.org 0x99b30
	movs r1, #44	@ 00099b30 2c21
.org 0x99b32
	adds r2, r5, #0	@ 00099b32 2a1c
.org 0x99b34
	bl 0x2ab88	@ 00099b34 91f728f8
.org 0x99b38
	ldr r2, [pc, #44]	@ 00099b38 0b4a
.org 0x99b3a
	ldrh r1, [r2, #12]	@ 00099b3a 9189
.org 0x99b3c
	ldr r0, [pc, #44]	@ 00099b3c 0b48
.org 0x99b3e
	cmp r1, r0	@ 00099b3e 8142
.org 0x99b40
	bhi.n 0x99b46	@ 00099b40 01d8
.org 0x99b42
	adds r0, r1, #1	@ 00099b42 481c
.org 0x99b44
	strh r0, [r2, #12]	@ 00099b44 9081
.org 0x99b46
	adds r0, r4, #0	@ 00099b46 201c
.org 0x99b48
	adds r1, r5, #0	@ 00099b48 291c
.org 0x99b4a
	bl 0x2abe0	@ 00099b4a 91f749f8
