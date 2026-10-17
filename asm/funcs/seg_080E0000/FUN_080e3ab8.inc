@ FUN_080e3ab8  entry 0x080e3ab8  size 348
.thumb
.org 0xe3ab8
FUN_080e3ab8:
	push {r4, r5, r6, r7, lr}	@ 000e3ab8 f0b5
.org 0xe3aba
	mov r7, r8	@ 000e3aba 4746
.org 0xe3abc
	push {r7}	@ 000e3abc 80b4
.org 0xe3abe
	sub sp, #8	@ 000e3abe 82b0
.org 0xe3ac0
	adds r5, r0, #0	@ 000e3ac0 051c
.org 0xe3ac2
	adds r0, #117	@ 000e3ac2 7530
.org 0xe3ac4
	ldrb r2, [r0, #0]	@ 000e3ac4 0278
.org 0xe3ac6
	cmp r2, #0	@ 000e3ac6 002a
.org 0xe3ac8
	beq.n 0xe3ad2	@ 000e3ac8 03d0
.org 0xe3aca
	ldrb r1, [r5, #10]	@ 000e3aca a97a
.org 0xe3acc
	movs r0, #16	@ 000e3acc 1020
.org 0xe3ace
	orrs r0, r1	@ 000e3ace 0843
.org 0xe3ad0
	b.n 0xe3ad8	@ 000e3ad0 02e0
.org 0xe3ad2
	ldrb r1, [r5, #10]	@ 000e3ad2 a97a
.org 0xe3ad4
	movs r0, #239	@ 000e3ad4 ef20
.org 0xe3ad6
	ands r0, r1	@ 000e3ad6 0840
.org 0xe3ad8
	strb r0, [r5, #10]	@ 000e3ad8 a872
.org 0xe3ada
	movs r6, #1	@ 000e3ada 0126
.org 0xe3adc
	adds r1, r6, #0	@ 000e3adc 311c
.org 0xe3ade
	ands r1, r2	@ 000e3ade 1140
.org 0xe3ae0
	adds r0, r5, #0	@ 000e3ae0 281c
.org 0xe3ae2
	adds r0, #76	@ 000e3ae2 4c30
.org 0xe3ae4
	strb r1, [r0, #0]	@ 000e3ae4 0170
.org 0xe3ae6
	adds r3, r5, #0	@ 000e3ae6 2b1c
.org 0xe3ae8
	adds r3, #74	@ 000e3ae8 4a33
.org 0xe3aea
	lsls r1, r1, #4	@ 000e3aea 0901
.org 0xe3aec
	ldrb r2, [r3, #0]	@ 000e3aec 1a78
.org 0xe3aee
	movs r0, #17	@ 000e3aee 1120
.org 0xe3af0
	negs r0, r0	@ 000e3af0 4042
.org 0xe3af2
	ands r0, r2	@ 000e3af2 1040
.org 0xe3af4
	orrs r0, r1	@ 000e3af4 0843
.org 0xe3af6
	strb r0, [r3, #0]	@ 000e3af6 1870
.org 0xe3af8
	ldrb r0, [r5, #17]	@ 000e3af8 687c
.org 0xe3afa
	cmp r0, #0	@ 000e3afa 0028
.org 0xe3afc
	bne.n 0xe3b3a	@ 000e3afc 1dd1
.org 0xe3afe
	ldr r0, [r5, #84]	@ 000e3afe 686d
.org 0xe3b00
	str r0, [sp, #0]	@ 000e3b00 0090
.org 0xe3b02
	ldr r0, [r5, #88]	@ 000e3b02 a86d
.org 0xe3b04
	ldr r1, [pc, #236]	@ 000e3b04 3b49
.org 0xe3b06
	adds r0, r0, r1	@ 000e3b06 4018
.org 0xe3b08
	str r0, [sp, #4]	@ 000e3b08 0190
.org 0xe3b0a
	movs r0, #1	@ 000e3b0a 0120
.org 0xe3b0c
	mov r1, sp	@ 000e3b0c 6946
.org 0xe3b0e
	bl 0xd0c88	@ 000e3b0e edf7bbf8
.org 0xe3b12
	movs r0, #42	@ 000e3b12 2a20
.org 0xe3b14
	bl 0x2b10	@ 000e3b14 1ef7fcff
.org 0xe3b18
	strb r6, [r5, #17]	@ 000e3b18 6e74
.org 0xe3b1a
	adds r4, r5, #0	@ 000e3b1a 2c1c
.org 0xe3b1c
	adds r4, #84	@ 000e3b1c 5434
.org 0xe3b1e
	ldr r1, [pc, #216]	@ 000e3b1e 3649
.org 0xe3b20
	ldrb r2, [r5, #10]	@ 000e3b20 aa7a
.org 0xe3b22
	lsrs r2, r2, #4	@ 000e3b22 1209
.org 0xe3b24
	ands r2, r6	@ 000e3b24 3240
.org 0xe3b26
	adds r0, r4, #0	@ 000e3b26 201c
.org 0xe3b28
	bl 0xe37a0	@ 000e3b28 fff73afe
.org 0xe3b2c
	ldr r1, [pc, #204]	@ 000e3b2c 3349
.org 0xe3b2e
	ldrb r2, [r5, #10]	@ 000e3b2e aa7a
.org 0xe3b30
	lsrs r2, r2, #4	@ 000e3b30 1209
.org 0xe3b32
	ands r2, r6	@ 000e3b32 3240
.org 0xe3b34
	adds r0, r4, #0	@ 000e3b34 201c
.org 0xe3b36
	bl 0xe37a0	@ 000e3b36 fff733fe
.org 0xe3b3a
	ldr r1, [pc, #196]	@ 000e3b3a 3149
.org 0xe3b3c
	ldrb r0, [r5, #17]	@ 000e3b3c 687c
.org 0xe3b3e
	subs r0, #1	@ 000e3b3e 0138
.org 0xe3b40
	lsls r0, r0, #1	@ 000e3b40 4000
.org 0xe3b42
	adds r0, r0, r1	@ 000e3b42 4018
.org 0xe3b44
	ldrh r1, [r0, #0]	@ 000e3b44 0188
.org 0xe3b46
	adds r0, r5, #0	@ 000e3b46 281c
.org 0xe3b48
	bl 0x1cf00	@ 000e3b48 39f7daf9
.org 0xe3b4c
	ldr r0, [pc, #180]	@ 000e3b4c 2d48
.org 0xe3b4e
	mov r8, r0	@ 000e3b4e 8046
.org 0xe3b50
	ldrb r0, [r5, #17]	@ 000e3b50 687c
.org 0xe3b52
	subs r0, #1	@ 000e3b52 0138
.org 0xe3b54
	lsls r0, r0, #3	@ 000e3b54 c000
.org 0xe3b56
	mov r1, r8	@ 000e3b56 4146
.org 0xe3b58
	adds r1, #4	@ 000e3b58 0431
.org 0xe3b5a
	adds r0, r0, r1	@ 000e3b5a 4018
.org 0xe3b5c
	ldr r1, [r0, #0]	@ 000e3b5c 0168
.org 0xe3b5e
	lsls r1, r1, #8	@ 000e3b5e 0902
.org 0xe3b60
	ldr r0, [r5, #88]	@ 000e3b60 a86d
.org 0xe3b62
	adds r0, r0, r1	@ 000e3b62 4018
.org 0xe3b64
	str r0, [r5, #88]	@ 000e3b64 a865
.org 0xe3b66
	ldr r0, [pc, #160]	@ 000e3b66 2848
.org 0xe3b68
	ldrb r2, [r5, #17]	@ 000e3b68 6a7c
.org 0xe3b6a
	subs r2, #1	@ 000e3b6a 013a
.org 0xe3b6c
	lsls r2, r2, #2	@ 000e3b6c 9200
.org 0xe3b6e
	adds r2, r2, r0	@ 000e3b6e 1218
.org 0xe3b70
	ldr r4, [pc, #152]	@ 000e3b70 264c
.org 0xe3b72
	ldr r0, [r4, #0]	@ 000e3b72 2068
.org 0xe3b74
	ldr r1, [pc, #152]	@ 000e3b74 2649
.org 0xe3b76
	mov ip, r1	@ 000e3b76 8c46
.org 0xe3b78
	mov r1, ip	@ 000e3b78 6146
.org 0xe3b7a
	muls r1, r0	@ 000e3b7a 4143
.org 0xe3b7c
	adds r0, r1, #0	@ 000e3b7c 081c
.org 0xe3b7e
	ldr r7, [pc, #148]	@ 000e3b7e 254f
.org 0xe3b80
	adds r0, r0, r7	@ 000e3b80 c019
.org 0xe3b82
	lsls r0, r0, #1	@ 000e3b82 4000
.org 0xe3b84
	lsrs r3, r0, #1	@ 000e3b84 4308
.org 0xe3b86
	str r3, [r4, #0]	@ 000e3b86 2360
.org 0xe3b88
	lsrs r0, r0, #17	@ 000e3b88 400c
.org 0xe3b8a
	movs r6, #255	@ 000e3b8a ff26
.org 0xe3b8c
	ands r0, r6	@ 000e3b8c 3040
.org 0xe3b8e
	movs r1, #128	@ 000e3b8e 8021
.org 0xe3b90
	lsls r1, r1, #1	@ 000e3b90 4900
.org 0xe3b92
	adds r0, r0, r1	@ 000e3b92 4018
.org 0xe3b94
	ldr r1, [r2, #0]	@ 000e3b94 1168
.org 0xe3b96
	muls r0, r1	@ 000e3b96 4843
.org 0xe3b98
	cmp r0, #0	@ 000e3b98 0028
.org 0xe3b9a
	bge.n 0xe3b9e	@ 000e3b9a 00da
.org 0xe3b9c
	adds r0, #255	@ 000e3b9c ff30
.org 0xe3b9e
	asrs r2, r0, #8	@ 000e3b9e 0212
.org 0xe3ba0
	str r2, [r5, #92]	@ 000e3ba0 ea65
.org 0xe3ba2
	mov r0, ip	@ 000e3ba2 6046
.org 0xe3ba4
	muls r0, r3	@ 000e3ba4 5843
.org 0xe3ba6
	adds r0, r0, r7	@ 000e3ba6 c019
.org 0xe3ba8
	lsls r0, r0, #1	@ 000e3ba8 4000
.org 0xe3baa
	lsrs r1, r0, #1	@ 000e3baa 4108
.org 0xe3bac
	str r1, [r4, #0]	@ 000e3bac 2160
.org 0xe3bae
	lsrs r0, r0, #17	@ 000e3bae 400c
.org 0xe3bb0
	ands r0, r6	@ 000e3bb0 3040
.org 0xe3bb2
	movs r1, #192	@ 000e3bb2 c021
.org 0xe3bb4
	lsls r1, r1, #1	@ 000e3bb4 4900
.org 0xe3bb6
	adds r0, r0, r1	@ 000e3bb6 4018
.org 0xe3bb8
	lsls r0, r0, #8	@ 000e3bb8 0002
.org 0xe3bba
	negs r0, r0	@ 000e3bba 4042
.org 0xe3bbc
	cmp r0, #0	@ 000e3bbc 0028
.org 0xe3bbe
	bge.n 0xe3bc2	@ 000e3bbe 00da
.org 0xe3bc0
	adds r0, #255	@ 000e3bc0 ff30
.org 0xe3bc2
	asrs r0, r0, #8	@ 000e3bc2 0012
.org 0xe3bc4
	str r0, [r5, #96]	@ 000e3bc4 2866
.org 0xe3bc6
	ldrb r1, [r5, #10]	@ 000e3bc6 a97a
.org 0xe3bc8
	movs r0, #16	@ 000e3bc8 1020
.org 0xe3bca
	ands r0, r1	@ 000e3bca 0840
.org 0xe3bcc
	cmp r0, #0	@ 000e3bcc 0028
.org 0xe3bce
	beq.n 0xe3c18	@ 000e3bce 23d0
.org 0xe3bd0
	ldrb r0, [r5, #17]	@ 000e3bd0 687c
.org 0xe3bd2
	subs r0, #1	@ 000e3bd2 0138
.org 0xe3bd4
	lsls r0, r0, #3	@ 000e3bd4 c000
.org 0xe3bd6
	add r0, r8	@ 000e3bd6 4044
.org 0xe3bd8
	ldr r1, [r0, #0]	@ 000e3bd8 0168
.org 0xe3bda
	lsls r1, r1, #8	@ 000e3bda 0902
.org 0xe3bdc
	ldr r0, [r5, #84]	@ 000e3bdc 686d
.org 0xe3bde
	subs r0, r0, r1	@ 000e3bde 401a
.org 0xe3be0
	str r0, [r5, #84]	@ 000e3be0 6865
.org 0xe3be2
	lsls r0, r2, #8	@ 000e3be2 1002
.org 0xe3be4
	negs r0, r0	@ 000e3be4 4042
.org 0xe3be6
	cmp r0, #0	@ 000e3be6 0028
.org 0xe3be8
	bge.n 0xe3bec	@ 000e3be8 00da
.org 0xe3bea
	adds r0, #255	@ 000e3bea ff30
.org 0xe3bec
	asrs r0, r0, #8	@ 000e3bec 0012
.org 0xe3bee
	str r0, [r5, #92]	@ 000e3bee e865
.org 0xe3bf0
	b.n 0xe3c2a	@ 000e3bf0 1be0
.org 0xe3bf2
	.byte 0x00	@ 000e3bf2 data
.org 0xe3bf3
	.byte 0x00	@ 000e3bf3 data
.org 0xe3bf4
	.byte 0x00,0xee,0xff,0xff	@ 000e3bf4 data
.org 0xe3bf8
	.byte 0x02,0x02,0x00,0x00	@ 000e3bf8 data
.org 0xe3bfc
	.byte 0x03,0x02,0x00,0x00	@ 000e3bfc data
.org 0xe3c00
	.byte 0x04,0x8d,0x86,0x08	@ 000e3c00 data
.org 0xe3c04
	.byte 0xe0,0x8c,0x86,0x08	@ 000e3c04 data
.org 0xe3c08
	.byte 0xf8,0x8c,0x86,0x08	@ 000e3c08 data
.org 0xe3c0c
	.byte 0x38,0xdc,0x02,0x02	@ 000e3c0c data
.org 0xe3c10
	.byte 0xfd,0x43,0x03,0x00	@ 000e3c10 data
