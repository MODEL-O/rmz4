@ FUN_08072b0c  entry 0x08072b0c  size 280
.thumb
.org 0x72b0c
FUN_08072b0c:
	push {r4, r5, r6, lr}	@ 00072b0c 70b5
.org 0x72b0e
	adds r6, r0, #0	@ 00072b0e 061c
.org 0x72b10
	ldrb r0, [r6, #15]	@ 00072b10 f07b
.org 0x72b12
	cmp r0, #0	@ 00072b12 0028
.org 0x72b14
	bne.n 0x72b24	@ 00072b14 06d1
.org 0x72b16
	adds r0, r6, #0	@ 00072b16 301c
.org 0x72b18
	movs r1, #5	@ 00072b18 0521
.org 0x72b1a
	bl 0x736c4	@ 00072b1a 00f0d3fd
.org 0x72b1e
	ldrb r0, [r6, #15]	@ 00072b1e f07b
.org 0x72b20
	adds r0, #1	@ 00072b20 0130
.org 0x72b22
	strb r0, [r6, #15]	@ 00072b22 f073
.org 0x72b24
	adds r0, r6, #0	@ 00072b24 301c
.org 0x72b26
	bl 0x1cff0	@ 00072b26 aaf763fa
.org 0x72b2a
	adds r0, r6, #0	@ 00072b2a 301c
.org 0x72b2c
	adds r0, #116	@ 00072b2c 7430
.org 0x72b2e
	ldr r4, [pc, #232]	@ 00072b2e 3a4c
.org 0x72b30
	ldr r3, [pc, #232]	@ 00072b30 3a4b
.org 0x72b32
	adds r1, r6, #0	@ 00072b32 311c
.org 0x72b34
	adds r1, #184	@ 00072b34 b831
.org 0x72b36
	ldrb r2, [r1, #0]	@ 00072b36 0a78
.org 0x72b38
	lsls r1, r2, #1	@ 00072b38 5100
.org 0x72b3a
	adds r1, r1, r3	@ 00072b3a c918
.org 0x72b3c
	ldrh r1, [r1, #0]	@ 00072b3c 0988
.org 0x72b3e
	lsls r1, r1, #2	@ 00072b3e 8900
.org 0x72b40
	adds r1, r1, r4	@ 00072b40 0919
.org 0x72b42
	adds r3, r6, #0	@ 00072b42 331c
.org 0x72b44
	adds r3, #113	@ 00072b44 7133
.org 0x72b46
	movs r5, #0	@ 00072b46 0025
.org 0x72b48
	ldrsb r5, [r3, r5]	@ 00072b48 5d57
.org 0x72b4a
	ldr r1, [r1, #0]	@ 00072b4a 0968
.org 0x72b4c
	lsls r3, r5, #2	@ 00072b4c ab00
.org 0x72b4e
	adds r3, r3, r1	@ 00072b4e 5b18
.org 0x72b50
	ldr r4, [pc, #204]	@ 00072b50 334c
.org 0x72b52
	adds r1, r6, #0	@ 00072b52 311c
.org 0x72b54
	adds r1, #185	@ 00072b54 b931
.org 0x72b56
	ldrb r1, [r1, #0]	@ 00072b56 0978
.org 0x72b58
	lsls r1, r1, #2	@ 00072b58 8900
.org 0x72b5a
	adds r1, r1, r4	@ 00072b5a 0919
.org 0x72b5c
	ldr r1, [r1, #0]	@ 00072b5c 0968
.org 0x72b5e
	lsls r2, r2, #2	@ 00072b5e 9200
.org 0x72b60
	adds r2, r2, r1	@ 00072b60 5218
.org 0x72b62
	ldr r1, [r2, #0]	@ 00072b62 1168
.org 0x72b64
	adds r1, r1, r5	@ 00072b64 4919
.org 0x72b66
	ldrb r1, [r1, #0]	@ 00072b66 0978
.org 0x72b68
	lsls r2, r1, #1	@ 00072b68 4a00
.org 0x72b6a
	adds r2, r2, r1	@ 00072b6a 5218
.org 0x72b6c
	lsls r2, r2, #3	@ 00072b6c d200
.org 0x72b6e
	ldr r1, [r3, #0]	@ 00072b6e 1968
.org 0x72b70
	adds r1, r1, r2	@ 00072b70 8918
.org 0x72b72
	bl 0x5784	@ 00072b72 92f707fe
.org 0x72b76
	adds r0, r6, #0	@ 00072b76 301c
.org 0x72b78
	adds r0, #115	@ 00072b78 7330
.org 0x72b7a
	ldrb r0, [r0, #0]	@ 00072b7a 0078
.org 0x72b7c
	cmp r0, #3	@ 00072b7c 0328
.org 0x72b7e
	bne.n 0x72c24	@ 00072b7e 51d1
.org 0x72b80
	ldrb r0, [r6, #15]	@ 00072b80 f07b
.org 0x72b82
	cmp r0, #1	@ 00072b82 0128
.org 0x72b84
	bne.n 0x72bde	@ 00072b84 2bd1
.org 0x72b86
	movs r0, #147	@ 00072b86 9320
.org 0x72b88
	lsls r0, r0, #1	@ 00072b88 4000
.org 0x72b8a
	bl 0x2b10	@ 00072b8a 8ff7c1ff
.org 0x72b8e
	movs r0, #32	@ 00072b8e 2020
.org 0x72b90
	str r0, [r6, #104]	@ 00072b90 b066
.org 0x72b92
	adds r0, r6, #0	@ 00072b92 301c
.org 0x72b94
	adds r0, #204	@ 00072b94 cc30
.org 0x72b96
	ldr r1, [r0, #0]	@ 00072b96 0168
.org 0x72b98
	movs r0, #208	@ 00072b98 d020
.org 0x72b9a
	lsls r0, r0, #7	@ 00072b9a c001
.org 0x72b9c
	adds r1, r1, r0	@ 00072b9c 0918
.org 0x72b9e
	str r1, [r6, #92]	@ 00072b9e f165
.org 0x72ba0
	adds r0, r6, #0	@ 00072ba0 301c
.org 0x72ba2
	adds r0, #208	@ 00072ba2 d030
.org 0x72ba4
	ldr r2, [r0, #0]	@ 00072ba4 0268
.org 0x72ba6
	movs r0, #192	@ 00072ba6 c020
.org 0x72ba8
	lsls r0, r0, #6	@ 00072ba8 8001
.org 0x72baa
	adds r2, r2, r0	@ 00072baa 1218
.org 0x72bac
	str r2, [r6, #96]	@ 00072bac 3266
.org 0x72bae
	ldr r0, [r6, #84]	@ 00072bae 706d
.org 0x72bb0
	subs r1, r1, r0	@ 00072bb0 091a
.org 0x72bb2
	str r1, [r6, #100]	@ 00072bb2 7166
.org 0x72bb4
	ldr r0, [r6, #88]	@ 00072bb4 b06d
.org 0x72bb6
	subs r0, r0, r2	@ 00072bb6 801a
.org 0x72bb8
	cmp r0, #0	@ 00072bb8 0028
.org 0x72bba
	bge.n 0x72bbe	@ 00072bba 00da
.org 0x72bbc
	movs r0, #0	@ 00072bbc 0020
.org 0x72bbe
	lsls r0, r0, #1	@ 00072bbe 4000
.org 0x72bc0
	movs r1, #32	@ 00072bc0 2021
.org 0x72bc2
	bl 0x128fb8	@ 00072bc2 b6f0f9f9
.org 0x72bc6
	bl 0x128bf4	@ 00072bc6 b6f015f8
.org 0x72bca
	lsls r0, r0, #16	@ 00072bca 0004
.org 0x72bcc
	lsrs r0, r0, #16	@ 00072bcc 000c
.org 0x72bce
	cmp r0, #0	@ 00072bce 0028
.org 0x72bd0
	bgt.n 0x72bd4	@ 00072bd0 00dc
.org 0x72bd2
	movs r0, #1	@ 00072bd2 0120
.org 0x72bd4
	strb r0, [r6, #19]	@ 00072bd4 f074
.org 0x72bd6
	strb r0, [r6, #18]	@ 00072bd6 b074
.org 0x72bd8
	ldrb r0, [r6, #15]	@ 00072bd8 f07b
.org 0x72bda
	adds r0, #1	@ 00072bda 0130
.org 0x72bdc
	strb r0, [r6, #15]	@ 00072bdc f073
.org 0x72bde
	ldrb r4, [r6, #18]	@ 00072bde b47c
.org 0x72be0
	subs r4, #1	@ 00072be0 013c
.org 0x72be2
	strb r4, [r6, #18]	@ 00072be2 b474
.org 0x72be4
	ldrb r1, [r6, #18]	@ 00072be4 b17c
.org 0x72be6
	ldr r0, [r6, #100]	@ 00072be6 706e
.org 0x72be8
	muls r0, r1	@ 00072be8 4843
.org 0x72bea
	ldrb r1, [r6, #19]	@ 00072bea f17c
.org 0x72bec
	bl 0x128fb8	@ 00072bec b6f0e4f9
.org 0x72bf0
	ldr r1, [r6, #92]	@ 00072bf0 f16d
.org 0x72bf2
	subs r1, r1, r0	@ 00072bf2 091a
.org 0x72bf4
	str r1, [r6, #84]	@ 00072bf4 7165
.org 0x72bf6
	ldrb r1, [r6, #18]	@ 00072bf6 b17c
.org 0x72bf8
	ldr r0, [r6, #104]	@ 00072bf8 b06e
.org 0x72bfa
	muls r0, r1	@ 00072bfa 4843
.org 0x72bfc
	muls r1, r0	@ 00072bfc 4143
.org 0x72bfe
	asrs r1, r1, #1	@ 00072bfe 4910
.org 0x72c00
	ldr r0, [r6, #96]	@ 00072c00 306e
.org 0x72c02
	adds r0, r0, r1	@ 00072c02 4018
.org 0x72c04
	str r0, [r6, #88]	@ 00072c04 b065
.org 0x72c06
	lsls r4, r4, #24	@ 00072c06 2406
.org 0x72c08
	lsrs r4, r4, #24	@ 00072c08 240e
.org 0x72c0a
	cmp r4, #0	@ 00072c0a 002c
.org 0x72c0c
	bne.n 0x72c2a	@ 00072c0c 0dd1
.org 0x72c0e
	ldrb r0, [r6, #14]	@ 00072c0e b07b
.org 0x72c10
	adds r0, #1	@ 00072c10 0130
.org 0x72c12
	strb r0, [r6, #14]	@ 00072c12 b073
.org 0x72c14
	strb r4, [r6, #15]	@ 00072c14 f473
.org 0x72c16
	b.n 0x72c2a	@ 00072c16 08e0
.org 0x72c18
	.byte 0x08,0xcb,0x85,0x08	@ 00072c18 data
.org 0x72c1c
	.byte 0x04,0xcc,0x85,0x08	@ 00072c1c data
.org 0x72c20
	.byte 0xfc,0xcb,0x85,0x08	@ 00072c20 data
