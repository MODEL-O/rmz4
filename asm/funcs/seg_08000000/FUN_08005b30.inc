@ FUN_08005b30  entry 0x08005b30  size 174
.thumb
.org 0x5b30
FUN_08005b30:
	push {r4, r5, r6, r7, lr}	@ 00005b30 f0b5
.org 0x5b32
	adds r3, r0, #0	@ 00005b32 031c
.org 0x5b34
	adds r7, r1, #0	@ 00005b34 0f1c
.org 0x5b36
	ldr r4, [r7, #4]	@ 00005b36 7c68
.org 0x5b38
	adds r0, r7, #0	@ 00005b38 381c
.org 0x5b3a
	adds r0, #59	@ 00005b3a 3b30
.org 0x5b3c
	ldrb r1, [r4, #9]	@ 00005b3c 617a
.org 0x5b3e
	ldrb r0, [r0, #0]	@ 00005b3e 0078
.org 0x5b40
	adds r6, r0, #0	@ 00005b40 061c
.org 0x5b42
	orrs r6, r1	@ 00005b42 0e43
.org 0x5b44
	ldr r0, [pc, #52]	@ 00005b44 0d48
.org 0x5b46
	ldrb r1, [r0, #0]	@ 00005b46 0178
.org 0x5b48
	movs r0, #128	@ 00005b48 8020
.org 0x5b4a
	ands r0, r1	@ 00005b4a 0840
.org 0x5b4c
	cmp r0, #0	@ 00005b4c 0028
.org 0x5b4e
	bne.n 0x5b76	@ 00005b4e 12d1
.org 0x5b50
	ldrb r0, [r4, #8]	@ 00005b50 207a
.org 0x5b52
	cmp r0, #255	@ 00005b52 ff28
.org 0x5b54
	beq.n 0x5b76	@ 00005b54 0fd0
.org 0x5b56
	movs r0, #2	@ 00005b56 0220
.org 0x5b58
	ands r0, r6	@ 00005b58 3040
.org 0x5b5a
	cmp r0, #0	@ 00005b5a 0028
.org 0x5b5c
	bne.n 0x5b76	@ 00005b5c 0bd1
.org 0x5b5e
	ldr r2, [pc, #32]	@ 00005b5e 084a
.org 0x5b60
	adds r0, r3, #0	@ 00005b60 181c
.org 0x5b62
	adds r0, #56	@ 00005b62 3830
.org 0x5b64
	ldrb r0, [r0, #0]	@ 00005b64 0078
.org 0x5b66
	lsls r0, r0, #2	@ 00005b66 8000
.org 0x5b68
	ldrb r1, [r4, #8]	@ 00005b68 217a
.org 0x5b6a
	lsls r1, r1, #4	@ 00005b6a 0901
.org 0x5b6c
	adds r0, r0, r1	@ 00005b6c 4018
.org 0x5b6e
	adds r0, r0, r2	@ 00005b6e 8018
.org 0x5b70
	ldr r1, [r0, #0]	@ 00005b70 0168
.org 0x5b72
	cmp r1, #9	@ 00005b72 0929
.org 0x5b74
	bne.n 0x5b84	@ 00005b74 06d1
.org 0x5b76
	movs r0, #0	@ 00005b76 0020
.org 0x5b78
	b.n 0x5be6	@ 00005b78 35e0
.org 0x5b7a
	.byte 0x00	@ 00005b7a data
.org 0x5b7b
	.byte 0x00	@ 00005b7b data
.org 0x5b7c
	.byte 0xe0,0x32,0x00,0x03	@ 00005b7c data
.org 0x5b80
	.byte 0x44,0xb0,0x82,0x08	@ 00005b80 data
.org 0x5b84
	adds r0, r3, #0	@ 00005b84 181c
.org 0x5b86
	adds r0, #55	@ 00005b86 3730
.org 0x5b88
	ldrb r5, [r0, #0]	@ 00005b88 0578
.org 0x5b8a
	adds r0, r5, #0	@ 00005b8a 281c
.org 0x5b8c
	muls r0, r1	@ 00005b8c 4843
.org 0x5b8e
	asrs r3, r0, #2	@ 00005b8e 8310
.org 0x5b90
	ldrb r0, [r4, #2]	@ 00005b90 a078
.org 0x5b92
	cmp r0, #1	@ 00005b92 0128
.org 0x5b94
	bne.n 0x5bc0	@ 00005b94 14d1
.org 0x5b96
	ldr r2, [pc, #72]	@ 00005b96 124a
.org 0x5b98
	ldrb r1, [r2, #8]	@ 00005b98 117a
.org 0x5b9a
	movs r0, #16	@ 00005b9a 1020
.org 0x5b9c
	ands r0, r1	@ 00005b9c 0840
.org 0x5b9e
	cmp r0, #0	@ 00005b9e 0028
.org 0x5ba0
	beq.n 0x5ba8	@ 00005ba0 02d0
.org 0x5ba2
	cmp r5, #254	@ 00005ba2 fe2d
.org 0x5ba4
	bne.n 0x5ba8	@ 00005ba4 00d1
.org 0x5ba6
	movs r3, #8	@ 00005ba6 0823
.org 0x5ba8
	ldr r0, [r7, #4]	@ 00005ba8 7868
.org 0x5baa
	ldrb r0, [r0, #2]	@ 00005baa 8078
.org 0x5bac
	cmp r0, #1	@ 00005bac 0128
.org 0x5bae
	bne.n 0x5bc0	@ 00005bae 07d1
.org 0x5bb0
	ldrb r1, [r2, #4]	@ 00005bb0 1179
.org 0x5bb2
	movs r0, #4	@ 00005bb2 0420
.org 0x5bb4
	ands r0, r1	@ 00005bb4 0840
.org 0x5bb6
	cmp r0, #0	@ 00005bb6 0028
.org 0x5bb8
	beq.n 0x5bc0	@ 00005bb8 02d0
.org 0x5bba
	lsrs r0, r3, #31	@ 00005bba d80f
.org 0x5bbc
	adds r0, r3, r0	@ 00005bbc 1818
.org 0x5bbe
	asrs r3, r0, #1	@ 00005bbe 4310
.org 0x5bc0
	movs r0, #128	@ 00005bc0 8020
.org 0x5bc2
	ands r0, r6	@ 00005bc2 3040
.org 0x5bc4
	cmp r0, #0	@ 00005bc4 0028
.org 0x5bc6
	beq.n 0x5bca	@ 00005bc6 00d0
.org 0x5bc8
	lsls r3, r3, #1	@ 00005bc8 5b00
.org 0x5bca
	movs r0, #32	@ 00005bca 2020
.org 0x5bcc
	ands r6, r0	@ 00005bcc 0640
.org 0x5bce
	cmp r6, #0	@ 00005bce 002e
.org 0x5bd0
	beq.n 0x5bd8	@ 00005bd0 02d0
.org 0x5bd2
	lsrs r0, r3, #31	@ 00005bd2 d80f
.org 0x5bd4
	adds r0, r3, r0	@ 00005bd4 1818
.org 0x5bd6
	asrs r3, r0, #1	@ 00005bd6 4310
.org 0x5bd8
	cmp r3, #0	@ 00005bd8 002b
.org 0x5bda
	bne.n 0x5be4	@ 00005bda 03d1
.org 0x5bdc
	movs r0, #1	@ 00005bdc 0120
