@ FUN_08119a74  entry 0x08119a74  size 270
.thumb
.org 0x119a74
FUN_08119a74:
	push {r4, r5, r6, r7, lr}	@ 00119a74 f0b5
.org 0x119a76
	mov r7, sl	@ 00119a76 5746
.org 0x119a78
	mov r6, r9	@ 00119a78 4e46
.org 0x119a7a
	mov r5, r8	@ 00119a7a 4546
.org 0x119a7c
	push {r5, r6, r7}	@ 00119a7c e0b4
.org 0x119a7e
	sub sp, #4	@ 00119a7e 81b0
.org 0x119a80
	ldr r1, [pc, #80]	@ 00119a80 1449
.org 0x119a82
	ldr r1, [r1, #0]	@ 00119a82 0968
.org 0x119a84
	ldr r2, [pc, #80]	@ 00119a84 144a
.org 0x119a86
	adds r6, r0, r2	@ 00119a86 8618
.org 0x119a88
	ldrb r0, [r1, #4]	@ 00119a88 0879
.org 0x119a8a
	ldrb r1, [r1, #2]	@ 00119a8a 8978
.org 0x119a8c
	cmp r0, #0	@ 00119a8c 0028
.org 0x119a8e
	bne.n 0x119b34	@ 00119a8e 51d1
.org 0x119a90
	cmp r1, #0	@ 00119a90 0029
.org 0x119a92
	bne.n 0x119ae0	@ 00119a92 25d1
.org 0x119a94
	movs r3, #0	@ 00119a94 0023
.org 0x119a96
	movs r5, #143	@ 00119a96 8f25
.org 0x119a98
	lsls r5, r5, #1	@ 00119a98 6d00
.org 0x119a9a
	mov r8, r5	@ 00119a9a a846
.org 0x119a9c
	movs r7, #222	@ 00119a9c de27
.org 0x119a9e
	lsls r7, r7, #2	@ 00119a9e bf00
.org 0x119aa0
	mov ip, r7	@ 00119aa0 bc46
.org 0x119aa2
	ldr r0, [pc, #56]	@ 00119aa2 0e48
.org 0x119aa4
	adds r4, r0, #0	@ 00119aa4 041c
.org 0x119aa6
	movs r2, #177	@ 00119aa6 b122
.org 0x119aa8
	lsls r2, r2, #1	@ 00119aa8 5200
.org 0x119aaa
	mov r9, r2	@ 00119aaa 9146
.org 0x119aac
	adds r7, #128	@ 00119aac 8037
.org 0x119aae
	adds r5, r7, #0	@ 00119aae 3d1c
.org 0x119ab0
	lsls r1, r3, #1	@ 00119ab0 5900
.org 0x119ab2
	adds r1, r1, r6	@ 00119ab2 8919
.org 0x119ab4
	mov r0, r8	@ 00119ab4 4046
.org 0x119ab6
	adds r2, r1, r0	@ 00119ab6 0a18
.org 0x119ab8
	mov r7, ip	@ 00119ab8 6746
.org 0x119aba
	adds r0, r3, r7	@ 00119aba d819
.org 0x119abc
	orrs r0, r4	@ 00119abc 2043
.org 0x119abe
	strh r0, [r2, #0]	@ 00119abe 1080
.org 0x119ac0
	add r1, r9	@ 00119ac0 4944
.org 0x119ac2
	adds r0, r3, r5	@ 00119ac2 5819
.org 0x119ac4
	orrs r0, r4	@ 00119ac4 2043
.org 0x119ac6
	strh r0, [r1, #0]	@ 00119ac6 0880
.org 0x119ac8
	adds r0, r3, #1	@ 00119ac8 581c
.org 0x119aca
	lsls r0, r0, #24	@ 00119aca 0006
.org 0x119acc
	lsrs r3, r0, #24	@ 00119acc 030e
.org 0x119ace
	cmp r3, #7	@ 00119ace 072b
.org 0x119ad0
	bls.n 0x119ab0	@ 00119ad0 eed9
.org 0x119ad2
	b.n 0x119b88	@ 00119ad2 59e0
.org 0x119ad4
	.byte 0xe0,0xe8,0x02,0x02	@ 00119ad4 data
.org 0x119ad8
	.byte 0xd8,0x0e,0x00,0x00	@ 00119ad8 data
.org 0x119adc
	.byte 0x00,0xf0,0xff,0xff	@ 00119adc data
.org 0x119ae0
	movs r3, #0	@ 00119ae0 0023
.org 0x119ae2
	lsls r2, r1, #1	@ 00119ae2 4a00
.org 0x119ae4
	movs r0, #143	@ 00119ae4 8f20
.org 0x119ae6
	lsls r0, r0, #1	@ 00119ae6 4000
.org 0x119ae8
	mov r9, r0	@ 00119ae8 8146
.org 0x119aea
	ldr r0, [pc, #64]	@ 00119aea 1048
.org 0x119aec
	adds r5, r2, r0	@ 00119aec 1518
.org 0x119aee
	ldr r2, [pc, #64]	@ 00119aee 104a
.org 0x119af0
	adds r4, r2, #0	@ 00119af0 141c
.org 0x119af2
	movs r7, #192	@ 00119af2 c027
.org 0x119af4
	lsls r7, r7, #2	@ 00119af4 bf00
.org 0x119af6
	mov r8, r7	@ 00119af6 b846
.org 0x119af8
	movs r0, #177	@ 00119af8 b120
.org 0x119afa
	lsls r0, r0, #1	@ 00119afa 4000
.org 0x119afc
	mov ip, r0	@ 00119afc 8446
.org 0x119afe
	movs r2, #254	@ 00119afe fe22
.org 0x119b00
	lsls r2, r2, #2	@ 00119b00 9200
.org 0x119b02
	adds r7, r2, #0	@ 00119b02 171c
.org 0x119b04
	lsls r1, r3, #1	@ 00119b04 5900
.org 0x119b06
	adds r1, r1, r6	@ 00119b06 8919
.org 0x119b08
	mov r0, r9	@ 00119b08 4846
.org 0x119b0a
	adds r2, r1, r0	@ 00119b0a 0a18
.org 0x119b0c
	ldrh r0, [r5, #0]	@ 00119b0c 2888
.org 0x119b0e
	add r0, r8	@ 00119b0e 4044
.org 0x119b10
	adds r0, r0, r3	@ 00119b10 c018
.org 0x119b12
	orrs r0, r4	@ 00119b12 2043
.org 0x119b14
	strh r0, [r2, #0]	@ 00119b14 1080
.org 0x119b16
	add r1, ip	@ 00119b16 6144
.org 0x119b18
	adds r0, r3, r7	@ 00119b18 d819
.org 0x119b1a
	orrs r0, r4	@ 00119b1a 2043
.org 0x119b1c
	strh r0, [r1, #0]	@ 00119b1c 0880
.org 0x119b1e
	adds r0, r3, #1	@ 00119b1e 581c
.org 0x119b20
	lsls r0, r0, #24	@ 00119b20 0006
.org 0x119b22
	lsrs r3, r0, #24	@ 00119b22 030e
.org 0x119b24
	cmp r3, #7	@ 00119b24 072b
.org 0x119b26
	bls.n 0x119b04	@ 00119b26 edd9
.org 0x119b28
	b.n 0x119b88	@ 00119b28 2ee0
.org 0x119b2a
	.byte 0x00	@ 00119b2a data
.org 0x119b2b
	.byte 0x00	@ 00119b2b data
.org 0x119b2c
	.byte 0x16,0x1d,0x88,0x08	@ 00119b2c data
.org 0x119b30
	.byte 0x00,0xf0,0xff,0xff	@ 00119b30 data
.org 0x119b34
	movs r3, #0	@ 00119b34 0023
.org 0x119b36
	lsls r2, r1, #1	@ 00119b36 4a00
.org 0x119b38
	lsls r0, r0, #1	@ 00119b38 4000
.org 0x119b3a
	ldr r1, [pc, #92]	@ 00119b3a 1749
.org 0x119b3c
	adds r0, r0, r1	@ 00119b3c 4018
.org 0x119b3e
	mov ip, r0	@ 00119b3e 8446
.org 0x119b40
	movs r5, #192	@ 00119b40 c025
.org 0x119b42
	lsls r5, r5, #2	@ 00119b42 ad00
.org 0x119b44
	mov sl, r5	@ 00119b44 aa46
.org 0x119b46
	ldr r7, [pc, #84]	@ 00119b46 154f
.org 0x119b48
	adds r4, r7, #0	@ 00119b48 3c1c
.org 0x119b4a
	ldr r0, [pc, #84]	@ 00119b4a 1548
.org 0x119b4c
	adds r2, r2, r0	@ 00119b4c 1218
.org 0x119b4e
	str r2, [sp, #0]	@ 00119b4e 0092
.org 0x119b50
	movs r0, #143	@ 00119b50 8f20
.org 0x119b52
	lsls r0, r0, #1	@ 00119b52 4000
.org 0x119b54
	mov r9, r0	@ 00119b54 8146
.org 0x119b56
	movs r2, #177	@ 00119b56 b122
.org 0x119b58
	lsls r2, r2, #1	@ 00119b58 5200
.org 0x119b5a
	mov r8, r2	@ 00119b5a 9046
.org 0x119b5c
	lsls r1, r3, #1	@ 00119b5c 5900
.org 0x119b5e
	adds r1, r1, r6	@ 00119b5e 8919
.org 0x119b60
	mov r5, r9	@ 00119b60 4d46
.org 0x119b62
	adds r2, r1, r5	@ 00119b62 4a19
.org 0x119b64
	mov r7, ip	@ 00119b64 6746
.org 0x119b66
	ldrh r0, [r7, #0]	@ 00119b66 3888
.org 0x119b68
	add r0, sl	@ 00119b68 5044
.org 0x119b6a
	adds r0, r0, r3	@ 00119b6a c018
.org 0x119b6c
	orrs r0, r4	@ 00119b6c 2043
.org 0x119b6e
	strh r0, [r2, #0]	@ 00119b6e 1080
.org 0x119b70
	add r1, r8	@ 00119b70 4144
.org 0x119b72
	ldr r2, [sp, #0]	@ 00119b72 009a
.org 0x119b74
	ldrh r0, [r2, #0]	@ 00119b74 1088
.org 0x119b76
	add r0, sl	@ 00119b76 5044
.org 0x119b78
	adds r0, r0, r3	@ 00119b78 c018
.org 0x119b7a
	orrs r0, r4	@ 00119b7a 2043
.org 0x119b7c
	strh r0, [r1, #0]	@ 00119b7c 0880
.org 0x119b7e
	adds r0, r3, #1	@ 00119b7e 581c
.org 0x119b80
	lsls r0, r0, #24	@ 00119b80 0006
