@ FUN_08007a34  entry 0x08007a34  size 310
.thumb
.org 0x7a34
FUN_08007a34:
	pushal {r4, r5, r6, r7, lr}	@ 00007a34 f0b5
.org 0x7a36
	moval r7, r9	@ 00007a36 4f46
.org 0x7a38
	mov r6, r8	@ 00007a38 4646
.org 0x7a3a
	push {r6, r7}	@ 00007a3a c0b4
.org 0x7a3c
	adds r4, r0, #0	@ 00007a3c 041c
.org 0x7a3e
	adds r5, r1, #0	@ 00007a3e 0d1c
.org 0x7a40
	ldrh r0, [r4, #12]	@ 00007a40 a089
.org 0x7a42
	mov r9, r0	@ 00007a42 8146
.org 0x7a44
	adds r3, r4, #0	@ 00007a44 231c
.org 0x7a46
	adds r3, #52	@ 00007a46 3433
.org 0x7a48
	ldr r0, [r4, #52]	@ 00007a48 606b
.org 0x7a4a
	str r0, [r4, #60]	@ 00007a4a e063
.org 0x7a4c
	ldr r0, [r3, #4]	@ 00007a4c 5868
.org 0x7a4e
	str r0, [r4, #64]	@ 00007a4e 2064
.org 0x7a50
	ldr r0, [r4, #76]	@ 00007a50 e06c
.org 0x7a52
	str r0, [r4, #84]	@ 00007a52 6065
.org 0x7a54
	ldr r0, [r4, #80]	@ 00007a54 206d
.org 0x7a56
	str r0, [r4, #88]	@ 00007a56 a065
.org 0x7a58
	ldr r0, [r2, #0]	@ 00007a58 1068
.org 0x7a5a
	asrs r0, r0, #8	@ 00007a5a 0012
.org 0x7a5c
	str r0, [r4, #52]	@ 00007a5c 6063
.org 0x7a5e
	ldr r1, [r2, #4]	@ 00007a5e 5168
.org 0x7a60
	asrs r0, r1, #8	@ 00007a60 0812
.org 0x7a62
	str r0, [r3, #4]	@ 00007a62 5860
.org 0x7a64
	ldr r2, [pc, #40]	@ 00007a64 0a4a
.org 0x7a66
	ldr r0, [r4, #52]	@ 00007a66 606b
.org 0x7a68
	asrs r0, r0, #4	@ 00007a68 0011
.org 0x7a6a
	adds r0, r0, r2	@ 00007a6a 8018
.org 0x7a6c
	ldrb r2, [r0, #0]	@ 00007a6c 0278
.org 0x7a6e
	ldr r0, [pc, #36]	@ 00007a6e 0948
.org 0x7a70
	asrs r1, r1, #12	@ 00007a70 0913
.org 0x7a72
	adds r1, r1, r0	@ 00007a72 0918
.org 0x7a74
	ldrb r0, [r1, #0]	@ 00007a74 0878
.org 0x7a76
	ldr r1, [r5, #108]	@ 00007a76 e96e
.org 0x7a78
	ldrb r3, [r1, #2]	@ 00007a78 8b78
.org 0x7a7a
	cmp r2, r3	@ 00007a7a 9a42
.org 0x7a7c
	bcs.n 0x7a84	@ 00007a7c 02d2
.org 0x7a7e
	ldrb r1, [r1, #3]	@ 00007a7e c978
.org 0x7a80
	cmp r0, r1	@ 00007a80 8842
.org 0x7a82
	bcc.n 0x7a98	@ 00007a82 09d3
.org 0x7a84
	ldr r7, [r4, #0]	@ 00007a84 2768
.org 0x7a86
	ldr r0, [r4, #4]	@ 00007a86 6068
.org 0x7a88
	mov r8, r0	@ 00007a88 8046
.org 0x7a8a
	ldr r6, [r4, #8]	@ 00007a8a a668
.org 0x7a8c
	adds r0, r7, #0	@ 00007a8c 381c
.org 0x7a8e
	b.n 0x7ac8	@ 00007a8e 1be0
.org 0x7a90
	.byte 0xd4,0xb9,0x82,0x08	@ 00007a90 data
.org 0x7a94
	.byte 0xd4,0xb1,0x82,0x08	@ 00007a94 data
.org 0x7a98
	ldr r1, [r5, #116]	@ 00007a98 696f
.org 0x7a9a
	ldrh r3, [r1, #0]	@ 00007a9a 0b88
.org 0x7a9c
	lsls r0, r3	@ 00007a9c 9840
.org 0x7a9e
	adds r0, r0, r2	@ 00007a9e 8018
.org 0x7aa0
	lsls r0, r0, #1	@ 00007aa0 4000
.org 0x7aa2
	adds r0, r0, r1	@ 00007aa2 4018
.org 0x7aa4
	ldrh r1, [r0, #8]	@ 00007aa4 0189
.org 0x7aa6
	movs r0, #2	@ 00007aa6 0220
.org 0x7aa8
	mov r2, r9	@ 00007aa8 4a46
.org 0x7aaa
	subs r0, r0, r2	@ 00007aaa 801a
.org 0x7aac
	lsls r0, r0, #2	@ 00007aac 8000
.org 0x7aae
	asrs r1, r0	@ 00007aae 0141
.org 0x7ab0
	movs r0, #15	@ 00007ab0 0f20
.org 0x7ab2
	ands r1, r0	@ 00007ab2 0140
.org 0x7ab4
	ldr r2, [r5, #112]	@ 00007ab4 2a6f
.org 0x7ab6
	lsls r0, r1, #1	@ 00007ab6 4800
.org 0x7ab8
	adds r0, r0, r1	@ 00007ab8 4018
.org 0x7aba
	lsls r0, r0, #2	@ 00007aba 8000
.org 0x7abc
	adds r0, r0, r2	@ 00007abc 8018
.org 0x7abe
	ldr r7, [r0, #0]	@ 00007abe 0768
.org 0x7ac0
	ldr r3, [r0, #4]	@ 00007ac0 4368
.org 0x7ac2
	mov r8, r3	@ 00007ac2 9846
.org 0x7ac4
	ldr r6, [r0, #8]	@ 00007ac4 8668
.org 0x7ac6
	ldr r0, [r4, #0]	@ 00007ac6 2068
.org 0x7ac8
	cmp r0, r7	@ 00007ac8 b842
.org 0x7aca
	bne.n 0x7ad2	@ 00007aca 02d1
.org 0x7acc
	ldr r0, [r4, #4]	@ 00007acc 6068
.org 0x7ace
	cmp r0, r8	@ 00007ace 4045
.org 0x7ad0
	beq.n 0x7b6e	@ 00007ad0 4dd0
.org 0x7ad2
	ldr r2, [r4, #8]	@ 00007ad2 a268
.org 0x7ad4
	cmp r2, #0	@ 00007ad4 002a
.org 0x7ad6
	beq.n 0x7ae0	@ 00007ad6 03d0
.org 0x7ad8
	adds r0, r4, #0	@ 00007ad8 201c
.org 0x7ada
	adds r1, r5, #0	@ 00007ada 291c
.org 0x7adc
	bl 0x128f84	@ 00007adc 21f152fa
.org 0x7ae0
	str r7, [r4, #0]	@ 00007ae0 2760
.org 0x7ae2
	mov r0, r8	@ 00007ae2 4046
.org 0x7ae4
	str r0, [r4, #4]	@ 00007ae4 6060
.org 0x7ae6
	str r6, [r4, #8]	@ 00007ae6 a660
.org 0x7ae8
	mov r2, r9	@ 00007ae8 4a46
.org 0x7aea
	lsls r1, r2, #2	@ 00007aea 9100
.org 0x7aec
	adds r0, r5, #0	@ 00007aec 281c
.org 0x7aee
	adds r0, #24	@ 00007aee 1830
.org 0x7af0
	adds r0, r0, r1	@ 00007af0 4018
.org 0x7af2
	ldr r6, [r0, #0]	@ 00007af2 0668
.org 0x7af4
	str r6, [r4, #92]	@ 00007af4 e665
.org 0x7af6
	adds r0, r5, #0	@ 00007af6 281c
.org 0x7af8
	adds r0, #36	@ 00007af8 2430
.org 0x7afa
	adds r0, r0, r1	@ 00007afa 4018
.org 0x7afc
	ldr r3, [r0, #0]	@ 00007afc 0368
.org 0x7afe
	str r3, [r4, #96]	@ 00007afe 2366
.org 0x7b00
	adds r0, r5, #0	@ 00007b00 281c
.org 0x7b02
	adds r0, #48	@ 00007b02 3030
.org 0x7b04
	adds r0, r0, r1	@ 00007b04 4018
.org 0x7b06
	ldr r0, [r0, #0]	@ 00007b06 0068
.org 0x7b08
	mov ip, r0	@ 00007b08 8446
.org 0x7b0a
	str r0, [r4, #100]	@ 00007b0a 6066
.org 0x7b0c
	lsls r1, r2, #3	@ 00007b0c d100
.org 0x7b0e
	adds r1, r1, r5	@ 00007b0e 4919
.org 0x7b10
	ldr r0, [r1, #60]	@ 00007b10 c86b
.org 0x7b12
	str r0, [r4, #68]	@ 00007b12 6064
.org 0x7b14
	ldr r0, [r1, #64]	@ 00007b14 086c
.org 0x7b16
	str r0, [r4, #72]	@ 00007b16 a064
.org 0x7b18
	ldr r0, [r1, #84]	@ 00007b18 486d
.org 0x7b1a
	str r0, [r4, #76]	@ 00007b1a e064
.org 0x7b1c
	ldr r0, [r1, #88]	@ 00007b1c 886d
.org 0x7b1e
	str r0, [r4, #80]	@ 00007b1e 2065
.org 0x7b20
	cmp r7, #0	@ 00007b20 002f
.org 0x7b22
	bne.n 0x7b2a	@ 00007b22 02d1
.org 0x7b24
	mov r5, r8	@ 00007b24 4546
.org 0x7b26
	cmp r5, #0	@ 00007b26 002d
.org 0x7b28
	beq.n 0x7b50	@ 00007b28 12d0
.org 0x7b2a
	lsrs r1, r6, #4	@ 00007b2a 3109
.org 0x7b2c
	lsls r1, r1, #1	@ 00007b2c 4900
.org 0x7b2e
	ldr r2, [pc, #24]	@ 00007b2e 064a
.org 0x7b30
	adds r1, r1, r2	@ 00007b30 8918
.org 0x7b32
	mov r0, ip	@ 00007b32 6046
.org 0x7b34
	orrs r3, r0	@ 00007b34 0343
.org 0x7b36
	ldr r5, [pc, #20]	@ 00007b36 054d
.org 0x7b38
	adds r0, r5, #0	@ 00007b38 281c
.org 0x7b3a
	orrs r3, r0	@ 00007b3a 0343
.org 0x7b3c
	strh r3, [r1, #0]	@ 00007b3c 0b80
.org 0x7b3e
	subs r2, #4	@ 00007b3e 043a
.org 0x7b40
	lsls r0, r6, #8	@ 00007b40 3002
.org 0x7b42
	ldrh r1, [r2, #0]	@ 00007b42 1188
.org 0x7b44
	orrs r0, r1	@ 00007b44 0843
.org 0x7b46
	b.n 0x7b58	@ 00007b46 07e0
.org 0x7b48
	.byte 0x04,0x0a,0x00,0x02	@ 00007b48 data
.org 0x7b4c
	.byte 0x44,0x60,0x00,0x00	@ 00007b4c data
.org 0x7b50
	ldr r2, [pc, #40]	@ 00007b50 0a4a
.org 0x7b52
	lsls r1, r6, #8	@ 00007b52 3102
.org 0x7b54
	ldrh r0, [r2, #0]	@ 00007b54 1088
.org 0x7b56
	bics r0, r1	@ 00007b56 8843
.org 0x7b58
	strh r0, [r2, #0]	@ 00007b58 1080
.org 0x7b5a
	ldr r0, [pc, #36]	@ 00007b5a 0948
.org 0x7b5c
	str r0, [r4, #64]	@ 00007b5c 2064
.org 0x7b5e
	str r0, [r4, #60]	@ 00007b5e e063
.org 0x7b60
	str r0, [r4, #88]	@ 00007b60 a065
.org 0x7b62
	str r0, [r4, #84]	@ 00007b62 6065
.org 0x7b64
	movs r0, #0	@ 00007b64 0020
.org 0x7b66
	strb r0, [r4, #15]	@ 00007b66 e073
.org 0x7b68
	strb r0, [r4, #14]	@ 00007b68 a073
