@ FUN_08092a6c  entry 0x08092a6c  size 242
.thumb
.org 0x92a6c
FUN_08092a6c:
	push {r4, r5, r6, lr}	@ 00092a6c 70b5
.org 0x92a6e
	adds r5, r0, #0	@ 00092a6e 051c
.org 0x92a70
	ldrb r0, [r5, #14]	@ 00092a70 a87b
.org 0x92a72
	cmp r0, #0	@ 00092a72 0028
.org 0x92a74
	beq.n 0x92a7c	@ 00092a74 02d0
.org 0x92a76
	cmp r0, #1	@ 00092a76 0128
.org 0x92a78
	beq.n 0x92b2a	@ 00092a78 57d0
.org 0x92a7a
	b.n 0x92b6a	@ 00092a7a 76e0
.org 0x92a7c
	adds r0, r5, #0	@ 00092a7c 281c
.org 0x92a7e
	adds r0, #116	@ 00092a7e 7430
.org 0x92a80
	ldr r1, [pc, #136]	@ 00092a80 2249
.org 0x92a82
	bl 0x5784	@ 00092a82 72f77ffe
.org 0x92a86
	ldr r2, [pc, #136]	@ 00092a86 224a
.org 0x92a88
	ldrb r1, [r5, #10]	@ 00092a88 a97a
.org 0x92a8a
	movs r0, #16	@ 00092a8a 1020
.org 0x92a8c
	ands r0, r1	@ 00092a8c 0840
.org 0x92a8e
	lsls r0, r0, #24	@ 00092a8e 0006
.org 0x92a90
	lsrs r0, r0, #24	@ 00092a90 000e
.org 0x92a92
	negs r0, r0	@ 00092a92 4042
.org 0x92a94
	asrs r0, r0, #31	@ 00092a94 c017
.org 0x92a96
	movs r1, #2	@ 00092a96 0221
.org 0x92a98
	ands r0, r1	@ 00092a98 0840
.org 0x92a9a
	adds r0, r0, r2	@ 00092a9a 8018
.org 0x92a9c
	ldrh r1, [r0, #0]	@ 00092a9c 0188
.org 0x92a9e
	adds r0, r5, #0	@ 00092a9e 281c
.org 0x92aa0
	bl 0x1cf00	@ 00092aa0 8af72efa
.org 0x92aa4
	adds r0, r5, #0	@ 00092aa4 281c
.org 0x92aa6
	bl 0x1cff0	@ 00092aa6 8af7a3fa
.org 0x92aaa
	ldr r0, [pc, #104]	@ 00092aaa 1a48
.org 0x92aac
	ldr r2, [r0, #0]	@ 00092aac 0268
.org 0x92aae
	ldr r1, [r5, #84]	@ 00092aae 696d
.org 0x92ab0
	ldr r0, [r2, #84]	@ 00092ab0 506d
.org 0x92ab2
	subs r1, r1, r0	@ 00092ab2 091a
.org 0x92ab4
	str r1, [r5, #92]	@ 00092ab4 e965
.org 0x92ab6
	ldr r0, [r5, #88]	@ 00092ab6 a86d
.org 0x92ab8
	ldr r3, [pc, #92]	@ 00092ab8 174b
.org 0x92aba
	adds r0, r0, r3	@ 00092aba c018
.org 0x92abc
	ldr r2, [r2, #88]	@ 00092abc 926d
.org 0x92abe
	subs r0, r0, r2	@ 00092abe 801a
.org 0x92ac0
	str r0, [r5, #96]	@ 00092ac0 2866
.org 0x92ac2
	asrs r1, r1, #8	@ 00092ac2 0912
.org 0x92ac4
	adds r6, r1, #0	@ 00092ac4 0e1c
.org 0x92ac6
	muls r6, r1	@ 00092ac6 4e43
.org 0x92ac8
	asrs r0, r0, #8	@ 00092ac8 0012
.org 0x92aca
	adds r1, r0, #0	@ 00092aca 011c
.org 0x92acc
	muls r1, r0	@ 00092acc 4143
.org 0x92ace
	adds r0, r1, #0	@ 00092ace 081c
.org 0x92ad0
	adds r6, r6, r0	@ 00092ad0 3618
.org 0x92ad2
	adds r0, r6, #0	@ 00092ad2 301c
.org 0x92ad4
	bl 0x128bf4	@ 00092ad4 96f08ef8
.org 0x92ad8
	lsls r0, r0, #16	@ 00092ad8 0004
.org 0x92ada
	lsrs r6, r0, #8	@ 00092ada 060a
.org 0x92adc
	cmp r6, #0	@ 00092adc 002e
.org 0x92ade
	beq.n 0x92b1c	@ 00092ade 1dd0
.org 0x92ae0
	ldr r0, [r5, #92]	@ 00092ae0 e86d
.org 0x92ae2
	lsls r0, r0, #8	@ 00092ae2 0002
.org 0x92ae4
	adds r1, r6, #0	@ 00092ae4 311c
.org 0x92ae6
	bl 0x128fb8	@ 00092ae6 96f067fa
.org 0x92aea
	adds r4, r0, #0	@ 00092aea 041c
.org 0x92aec
	str r4, [r5, #92]	@ 00092aec ec65
.org 0x92aee
	ldr r0, [r5, #96]	@ 00092aee 286e
.org 0x92af0
	lsls r0, r0, #8	@ 00092af0 0002
.org 0x92af2
	adds r1, r6, #0	@ 00092af2 311c
.org 0x92af4
	bl 0x128fb8	@ 00092af4 96f060fa
.org 0x92af8
	lsls r1, r4, #1	@ 00092af8 6100
.org 0x92afa
	adds r1, r1, r4	@ 00092afa 0919
.org 0x92afc
	lsls r1, r1, #1	@ 00092afc 4900
.org 0x92afe
	str r1, [r5, #92]	@ 00092afe e965
.org 0x92b00
	lsls r1, r0, #1	@ 00092b00 4100
.org 0x92b02
	adds r1, r1, r0	@ 00092b02 0918
.org 0x92b04
	lsls r1, r1, #1	@ 00092b04 4900
.org 0x92b06
	str r1, [r5, #96]	@ 00092b06 2966
.org 0x92b08
	b.n 0x92b24	@ 00092b08 0ce0
.org 0x92b0a
	.byte 0x00	@ 00092b0a data
.org 0x92b0b
	.byte 0x00	@ 00092b0b data
.org 0x92b0c
	.byte 0x88,0x04,0x86,0x08	@ 00092b0c data
.org 0x92b10
	.byte 0xca,0x04,0x86,0x08	@ 00092b10 data
.org 0x92b14
	.byte 0xf0,0xdb,0x02,0x02	@ 00092b14 data
.org 0x92b18
	.byte 0x00,0xe8,0xff,0xff	@ 00092b18 data
.org 0x92b1c
	movs r0, #192	@ 00092b1c c020
.org 0x92b1e
	lsls r0, r0, #3	@ 00092b1e c000
.org 0x92b20
	str r0, [r5, #92]	@ 00092b20 e865
.org 0x92b22
	str r6, [r5, #96]	@ 00092b22 2e66
.org 0x92b24
	ldrb r0, [r5, #14]	@ 00092b24 a87b
.org 0x92b26
	adds r0, #1	@ 00092b26 0130
.org 0x92b28
	strb r0, [r5, #14]	@ 00092b28 a873
.org 0x92b2a
	ldr r0, [r5, #84]	@ 00092b2a 686d
.org 0x92b2c
	ldr r1, [r5, #92]	@ 00092b2c e96d
.org 0x92b2e
	adds r0, r0, r1	@ 00092b2e 4018
.org 0x92b30
	str r0, [r5, #84]	@ 00092b30 6865
.org 0x92b32
	ldr r0, [r5, #96]	@ 00092b32 286e
.org 0x92b34
	adds r0, #64	@ 00092b34 4030
.org 0x92b36
	str r0, [r5, #96]	@ 00092b36 2866
.org 0x92b38
	movs r1, #224	@ 00092b38 e021
.org 0x92b3a
	lsls r1, r1, #3	@ 00092b3a c900
.org 0x92b3c
	cmp r0, r1	@ 00092b3c 8842
.org 0x92b3e
	ble.n 0x92b42	@ 00092b3e 00dd
.org 0x92b40
	str r1, [r5, #96]	@ 00092b40 2966
.org 0x92b42
	ldr r1, [r5, #88]	@ 00092b42 a96d
.org 0x92b44
	ldr r0, [r5, #96]	@ 00092b44 286e
.org 0x92b46
	adds r1, r1, r0	@ 00092b46 0918
.org 0x92b48
	str r1, [r5, #88]	@ 00092b48 a965
.org 0x92b4a
	ldr r0, [r5, #84]	@ 00092b4a 686d
.org 0x92b4c
	bl 0x7c7c	@ 00092b4c 75f796f8
.org 0x92b50
	lsls r0, r0, #16	@ 00092b50 0004
.org 0x92b52
	cmp r0, #0	@ 00092b52 0028
.org 0x92b54
	bne.n 0x92b64	@ 00092b54 06d1
.org 0x92b56
	adds r0, r5, #0	@ 00092b56 281c
.org 0x92b58
	adds r0, #140	@ 00092b58 8c30
.org 0x92b5a
	ldr r0, [r0, #0]	@ 00092b5a 0068
.org 0x92b5c
	movs r1, #4	@ 00092b5c 0421
