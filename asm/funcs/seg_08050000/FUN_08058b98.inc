@ FUN_08058b98  entry 0x08058b98  size 238
.thumb
.org 0x58b98
FUN_08058b98:
	push {r4, r5, r6, r7, lr}	@ 00058b98 f0b5
.org 0x58b9a
	adds r4, r0, #0	@ 00058b9a 041c
.org 0x58b9c
	ldrb r0, [r4, #10]	@ 00058b9c a07a
.org 0x58b9e
	lsrs r5, r0, #4	@ 00058b9e 0509
.org 0x58ba0
	movs r6, #1	@ 00058ba0 0126
.org 0x58ba2
	ands r5, r6	@ 00058ba2 3540
.org 0x58ba4
	ldrb r0, [r4, #15]	@ 00058ba4 e07b
.org 0x58ba6
	cmp r0, #0	@ 00058ba6 0028
.org 0x58ba8
	bne.n 0x58c1a	@ 00058ba8 37d1
.org 0x58baa
	ldr r0, [pc, #72]	@ 00058baa 1248
.org 0x58bac
	bl 0x2b10	@ 00058bac a9f7b0ff
.org 0x58bb0
	ldrb r1, [r4, #10]	@ 00058bb0 a17a
.org 0x58bb2
	movs r0, #1	@ 00058bb2 0120
.org 0x58bb4
	movs r7, #0	@ 00058bb4 0027
.org 0x58bb6
	orrs r0, r1	@ 00058bb6 0843
.org 0x58bb8
	strb r0, [r4, #10]	@ 00058bb8 a072
.org 0x58bba
	ldr r1, [pc, #60]	@ 00058bba 0f49
.org 0x58bbc
	adds r0, r4, #0	@ 00058bbc 201c
.org 0x58bbe
	bl 0x1cf00	@ 00058bbe c4f79ff9
.org 0x58bc2
	adds r0, r4, #0	@ 00058bc2 201c
.org 0x58bc4
	adds r0, #192	@ 00058bc4 c030
.org 0x58bc6
	ldrb r5, [r0, #0]	@ 00058bc6 0578
.org 0x58bc8
	adds r1, r5, #0	@ 00058bc8 291c
.org 0x58bca
	ands r1, r6	@ 00058bca 3140
.org 0x58bcc
	subs r0, #116	@ 00058bcc 7438
.org 0x58bce
	strb r1, [r0, #0]	@ 00058bce 0170
.org 0x58bd0
	adds r3, r4, #0	@ 00058bd0 231c
.org 0x58bd2
	adds r3, #74	@ 00058bd2 4a33
.org 0x58bd4
	lsls r1, r1, #4	@ 00058bd4 0901
.org 0x58bd6
	ldrb r2, [r3, #0]	@ 00058bd6 1a78
.org 0x58bd8
	movs r0, #17	@ 00058bd8 1120
.org 0x58bda
	negs r0, r0	@ 00058bda 4042
.org 0x58bdc
	ands r0, r2	@ 00058bdc 1040
.org 0x58bde
	orrs r0, r1	@ 00058bde 0843
.org 0x58be0
	strb r0, [r3, #0]	@ 00058be0 1870
.org 0x58be2
	adds r0, r6, #0	@ 00058be2 301c
.org 0x58be4
	ands r0, r5	@ 00058be4 2840
.org 0x58be6
	cmp r0, #0	@ 00058be6 0028
.org 0x58be8
	beq.n 0x58bfc	@ 00058be8 08d0
.org 0x58bea
	ldrb r0, [r4, #10]	@ 00058bea a07a
.org 0x58bec
	movs r1, #16	@ 00058bec 1021
.org 0x58bee
	orrs r0, r1	@ 00058bee 0843
.org 0x58bf0
	b.n 0x58c02	@ 00058bf0 07e0
.org 0x58bf2
	.byte 0x00	@ 00058bf2 data
.org 0x58bf3
	.byte 0x00	@ 00058bf3 data
.org 0x58bf4
	.byte 0x01,0x01,0x00,0x00	@ 00058bf4 data
.org 0x58bf8
	.byte 0x0f,0xa0,0x00,0x00	@ 00058bf8 data
.org 0x58bfc
	ldrb r1, [r4, #10]	@ 00058bfc a17a
.org 0x58bfe
	movs r0, #239	@ 00058bfe ef20
.org 0x58c00
	ands r0, r1	@ 00058c00 0840
.org 0x58c02
	strb r0, [r4, #10]	@ 00058c02 a072
.org 0x58c04
	lsls r0, r5, #1	@ 00058c04 6800
.org 0x58c06
	movs r1, #1	@ 00058c06 0121
.org 0x58c08
	subs r1, r1, r0	@ 00058c08 091a
.org 0x58c0a
	lsls r1, r1, #9	@ 00058c0a 4902
.org 0x58c0c
	str r1, [r4, #92]	@ 00058c0c e165
.org 0x58c0e
	subs r0, #1	@ 00058c0e 0138
.org 0x58c10
	lsls r0, r0, #4	@ 00058c10 0001
.org 0x58c12
	str r0, [r4, #100]	@ 00058c12 6066
.org 0x58c14
	ldrb r0, [r4, #15]	@ 00058c14 e07b
.org 0x58c16
	adds r0, #1	@ 00058c16 0130
.org 0x58c18
	strb r0, [r4, #15]	@ 00058c18 e073
.org 0x58c1a
	adds r0, r4, #0	@ 00058c1a 201c
.org 0x58c1c
	bl 0x1cff0	@ 00058c1c c4f7e8f9
.org 0x58c20
	adds r0, r4, #0	@ 00058c20 201c
.org 0x58c22
	adds r0, #116	@ 00058c22 7430
.org 0x58c24
	ldr r3, [pc, #104]	@ 00058c24 1a4b
.org 0x58c26
	ldrb r1, [r4, #30]	@ 00058c26 a17f
.org 0x58c28
	lsls r1, r1, #8	@ 00058c28 0902
.org 0x58c2a
	adds r2, r4, #0	@ 00058c2a 221c
.org 0x58c2c
	adds r2, #112	@ 00058c2c 7032
.org 0x58c2e
	ldrb r2, [r2, #0]	@ 00058c2e 1278
.org 0x58c30
	orrs r1, r2	@ 00058c30 1143
.org 0x58c32
	ldr r2, [pc, #96]	@ 00058c32 184a
.org 0x58c34
	adds r1, r1, r2	@ 00058c34 8918
.org 0x58c36
	lsls r1, r1, #2	@ 00058c36 8900
.org 0x58c38
	adds r1, r1, r3	@ 00058c38 c918
.org 0x58c3a
	adds r2, r4, #0	@ 00058c3a 221c
.org 0x58c3c
	adds r2, #113	@ 00058c3c 7132
.org 0x58c3e
	ldrb r2, [r2, #0]	@ 00058c3e 1278
.org 0x58c40
	lsls r2, r2, #24	@ 00058c40 1206
.org 0x58c42
	asrs r2, r2, #24	@ 00058c42 1216
.org 0x58c44
	ldr r1, [r1, #0]	@ 00058c44 0968
.org 0x58c46
	lsls r2, r2, #2	@ 00058c46 9200
.org 0x58c48
	adds r2, r2, r1	@ 00058c48 5218
.org 0x58c4a
	ldr r1, [r2, #0]	@ 00058c4a 1168
.org 0x58c4c
	ldrb r2, [r1, #0]	@ 00058c4c 0a78
.org 0x58c4e
	lsls r1, r2, #1	@ 00058c4e 5100
.org 0x58c50
	adds r1, r1, r2	@ 00058c50 8918
.org 0x58c52
	lsls r1, r1, #3	@ 00058c52 c900
.org 0x58c54
	ldr r2, [pc, #64]	@ 00058c54 104a
.org 0x58c56
	adds r1, r1, r2	@ 00058c56 8918
.org 0x58c58
	bl 0x5784	@ 00058c58 acf794fd
.org 0x58c5c
	ldr r1, [r4, #92]	@ 00058c5c e16d
.org 0x58c5e
	ldr r0, [r4, #100]	@ 00058c5e 606e
.org 0x58c60
	adds r1, r1, r0	@ 00058c60 0918
.org 0x58c62
	str r1, [r4, #92]	@ 00058c62 e165
.org 0x58c64
	lsls r0, r5, #1	@ 00058c64 6800
.org 0x58c66
	movs r2, #1	@ 00058c66 0122
.org 0x58c68
	subs r0, r2, r0	@ 00058c68 101a
.org 0x58c6a
	muls r0, r1	@ 00058c6a 4843
.org 0x58c6c
	cmp r0, #0	@ 00058c6c 0028
.org 0x58c6e
	bge.n 0x58c74	@ 00058c6e 01da
.org 0x58c70
	movs r0, #0	@ 00058c70 0020
.org 0x58c72
	str r0, [r4, #92]	@ 00058c72 e065
.org 0x58c74
	ldr r0, [r4, #84]	@ 00058c74 606d
.org 0x58c76
	ldr r1, [r4, #92]	@ 00058c76 e16d
.org 0x58c78
	adds r0, r0, r1	@ 00058c78 4018
.org 0x58c7a
	str r0, [r4, #84]	@ 00058c7a 6065
.org 0x58c7c
	cmp r1, #0	@ 00058c7c 0029
.org 0x58c7e
	bne.n 0x58c8a	@ 00058c7e 04d1
.org 0x58c80
	ldr r0, [r4, #44]	@ 00058c80 e06a
.org 0x58c82
	cmp r0, #0	@ 00058c82 0028
.org 0x58c84
	bne.n 0x58c8a	@ 00058c84 01d1
