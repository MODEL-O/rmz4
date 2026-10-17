@ FUN_080b7b34  entry 0x080b7b34  size 350
.thumb
.org 0xb7b34
FUN_080b7b34:
	push {r4, r5, r6, r7, lr}	@ 000b7b34 f0b5
.org 0xb7b36
	mov r7, r9	@ 000b7b36 4f46
.org 0xb7b38
	mov r6, r8	@ 000b7b38 4646
.org 0xb7b3a
	push {r6, r7}	@ 000b7b3a c0b4
.org 0xb7b3c
	sub sp, #8	@ 000b7b3c 82b0
.org 0xb7b3e
	adds r6, r0, #0	@ 000b7b3e 061c
.org 0xb7b40
	movs r0, #140	@ 000b7b40 8c20
.org 0xb7b42
	adds r0, r0, r6	@ 000b7b42 8019
.org 0xb7b44
	mov r8, r0	@ 000b7b44 8046
.org 0xb7b46
	ldr r0, [r0, #0]	@ 000b7b46 0068
.org 0xb7b48
	movs r1, #128	@ 000b7b48 8021
.org 0xb7b4a
	lsls r1, r1, #2	@ 000b7b4a 8900
.org 0xb7b4c
	mov r9, r1	@ 000b7b4c 8946
.org 0xb7b4e
	ands r0, r1	@ 000b7b4e 0840
.org 0xb7b50
	cmp r0, #0	@ 000b7b50 0028
.org 0xb7b52
	beq.n 0xb7b7c	@ 000b7b52 13d0
.org 0xb7b54
	ldr r1, [pc, #32]	@ 000b7b54 0849
.org 0xb7b56
	ldrb r0, [r6, #9]	@ 000b7b56 707a
.org 0xb7b58
	lsls r0, r0, #2	@ 000b7b58 8000
.org 0xb7b5a
	adds r0, r0, r1	@ 000b7b5a 4018
.org 0xb7b5c
	movs r1, #2	@ 000b7b5c 0221
.org 0xb7b5e
	str r1, [r6, #12]	@ 000b7b5e f160
.org 0xb7b60
	ldr r0, [r0, #0]	@ 000b7b60 0068
.org 0xb7b62
	ldr r0, [r0, #8]	@ 000b7b62 8068
.org 0xb7b64
	str r0, [r6, #20]	@ 000b7b64 7061
.org 0xb7b66
	adds r1, r6, #0	@ 000b7b66 311c
.org 0xb7b68
	adds r1, #180	@ 000b7b68 b431
.org 0xb7b6a
	movs r0, #0	@ 000b7b6a 0020
.org 0xb7b6c
	strb r0, [r1, #0]	@ 000b7b6c 0870
.org 0xb7b6e
	adds r0, r6, #0	@ 000b7b6e 301c
.org 0xb7b70
	bl 0xb7cac	@ 000b7b70 00f09cf8
.org 0xb7b74
	b.n 0xb7c9c	@ 000b7b74 92e0
.org 0xb7b76
	.byte 0x00	@ 000b7b76 data
.org 0xb7b77
	.byte 0x00	@ 000b7b77 data
.org 0xb7b78
	.byte 0x40,0xdb,0x85,0x08	@ 000b7b78 data
.org 0xb7b7c
	adds r5, r6, #0	@ 000b7b7c 351c
.org 0xb7b7e
	adds r5, #180	@ 000b7b7e b435
.org 0xb7b80
	ldrb r7, [r5, #0]	@ 000b7b80 2f78
.org 0xb7b82
	cmp r7, #0	@ 000b7b82 002f
.org 0xb7b84
	bne.n 0xb7c24	@ 000b7b84 4ed1
.org 0xb7b86
	ldr r1, [r6, #88]	@ 000b7b86 b16d
.org 0xb7b88
	ldr r0, [r6, #96]	@ 000b7b88 306e
.org 0xb7b8a
	adds r1, r1, r0	@ 000b7b8a 0918
.org 0xb7b8c
	str r1, [r6, #88]	@ 000b7b8c b165
.org 0xb7b8e
	adds r0, #64	@ 000b7b8e 4030
.org 0xb7b90
	str r0, [r6, #96]	@ 000b7b90 3066
.org 0xb7b92
	ldr r0, [r6, #84]	@ 000b7b92 706d
.org 0xb7b94
	bl 0x7c7c	@ 000b7b94 50f772f8
.org 0xb7b98
	lsls r0, r0, #16	@ 000b7b98 0004
.org 0xb7b9a
	cmp r0, #0	@ 000b7b9a 0028
.org 0xb7b9c
	beq.n 0xb7c96	@ 000b7b9c 7bd0
.org 0xb7b9e
	ldr r0, [pc, #120]	@ 000b7b9e 1e48
.org 0xb7ba0
	bl 0x2b10	@ 000b7ba0 4af7b6ff
.org 0xb7ba4
	movs r4, #1	@ 000b7ba4 0124
.org 0xb7ba6
	strb r4, [r5, #0]	@ 000b7ba6 2c70
.org 0xb7ba8
	adds r1, r6, #0	@ 000b7ba8 311c
.org 0xb7baa
	adds r1, #184	@ 000b7baa b831
.org 0xb7bac
	ldr r0, [r6, #88]	@ 000b7bac b06d
.org 0xb7bae
	str r0, [r1, #0]	@ 000b7bae 0860
.org 0xb7bb0
	movs r0, #128	@ 000b7bb0 8020
.org 0xb7bb2
	str r0, [r6, #96]	@ 000b7bb2 3066
.org 0xb7bb4
	ldr r0, [r6, #84]	@ 000b7bb4 706d
.org 0xb7bb6
	str r0, [sp, #0]	@ 000b7bb6 0090
.org 0xb7bb8
	ldr r0, [r6, #88]	@ 000b7bb8 b06d
.org 0xb7bba
	ldr r1, [pc, #96]	@ 000b7bba 1849
.org 0xb7bbc
	adds r0, r0, r1	@ 000b7bbc 4018
.org 0xb7bbe
	str r0, [sp, #4]	@ 000b7bbe 0190
.org 0xb7bc0
	mov r0, sp	@ 000b7bc0 6846
.org 0xb7bc2
	movs r1, #0	@ 000b7bc2 0021
.org 0xb7bc4
	movs r2, #0	@ 000b7bc4 0022
.org 0xb7bc6
	bl 0xcf8ac	@ 000b7bc6 17f071fe
.org 0xb7bca
	ldr r0, [r6, #84]	@ 000b7bca 706d
.org 0xb7bcc
	ldr r1, [pc, #80]	@ 000b7bcc 1449
.org 0xb7bce
	adds r0, r0, r1	@ 000b7bce 4018
.org 0xb7bd0
	str r0, [sp, #0]	@ 000b7bd0 0090
.org 0xb7bd2
	ldr r0, [r6, #88]	@ 000b7bd2 b06d
.org 0xb7bd4
	str r0, [sp, #4]	@ 000b7bd4 0190
.org 0xb7bd6
	movs r5, #128	@ 000b7bd6 8025
.org 0xb7bd8
	lsls r5, r5, #1	@ 000b7bd8 6d00
.org 0xb7bda
	ldrb r2, [r6, #10]	@ 000b7bda b27a
.org 0xb7bdc
	lsrs r2, r2, #4	@ 000b7bdc 1209
.org 0xb7bde
	ands r2, r4	@ 000b7bde 2240
.org 0xb7be0
	mov r0, sp	@ 000b7be0 6846
.org 0xb7be2
	adds r1, r5, #0	@ 000b7be2 291c
.org 0xb7be4
	bl 0xe7a4c	@ 000b7be4 2ff032ff
.org 0xb7be8
	ldr r0, [r6, #84]	@ 000b7be8 706d
.org 0xb7bea
	add r0, r9	@ 000b7bea 4844
.org 0xb7bec
	str r0, [sp, #0]	@ 000b7bec 0090
.org 0xb7bee
	ldr r0, [r6, #88]	@ 000b7bee b06d
.org 0xb7bf0
	str r0, [sp, #4]	@ 000b7bf0 0190
.org 0xb7bf2
	ldrb r2, [r6, #10]	@ 000b7bf2 b27a
.org 0xb7bf4
	lsrs r2, r2, #4	@ 000b7bf4 1209
.org 0xb7bf6
	ands r2, r4	@ 000b7bf6 2240
.org 0xb7bf8
	mov r0, sp	@ 000b7bf8 6846
.org 0xb7bfa
	adds r1, r5, #0	@ 000b7bfa 291c
.org 0xb7bfc
	bl 0xe7a4c	@ 000b7bfc 2ff026ff
.org 0xb7c00
	mov r0, r8	@ 000b7c00 4046
.org 0xb7c02
	str r7, [r0, #0]	@ 000b7c02 0760
.org 0xb7c04
	adds r0, r6, #0	@ 000b7c04 301c
.org 0xb7c06
	adds r0, #144	@ 000b7c06 9030
.org 0xb7c08
	str r7, [r0, #0]	@ 000b7c08 0760
.org 0xb7c0a
	adds r0, #4	@ 000b7c0a 0430
.org 0xb7c0c
	strb r7, [r0, #0]	@ 000b7c0c 0770
.org 0xb7c0e
	ldrb r1, [r6, #10]	@ 000b7c0e b17a
.org 0xb7c10
	movs r0, #251	@ 000b7c10 fb20
.org 0xb7c12
	ands r0, r1	@ 000b7c12 0840
.org 0xb7c14
	strb r0, [r6, #10]	@ 000b7c14 b072
.org 0xb7c16
	b.n 0xb7c96	@ 000b7c16 3ee0
.org 0xb7c18
	.byte 0x7f,0x01,0x00,0x00	@ 000b7c18 data
.org 0xb7c1c
	.byte 0x00,0xf8,0xff,0xff	@ 000b7c1c data
.org 0xb7c20
	.byte 0x00,0xfe,0xff,0xff	@ 000b7c20 data
.org 0xb7c24
	ldr r0, [r6, #88]	@ 000b7c24 b06d
.org 0xb7c26
	ldr r1, [r6, #96]	@ 000b7c26 316e
.org 0xb7c28
	adds r1, r0, r1	@ 000b7c28 4118
.org 0xb7c2a
	str r1, [r6, #88]	@ 000b7c2a b165
.org 0xb7c2c
	adds r0, r6, #0	@ 000b7c2c 301c
.org 0xb7c2e
	adds r0, #184	@ 000b7c2e b830
.org 0xb7c30
	ldr r0, [r0, #0]	@ 000b7c30 0068
.org 0xb7c32
	subs r2, r1, r0	@ 000b7c32 0a1a
.org 0xb7c34
	cmp r2, #0	@ 000b7c34 002a
.org 0xb7c36
	blt.n 0xb7c42	@ 000b7c36 04db
.org 0xb7c38
	movs r0, #224	@ 000b7c38 e020
.org 0xb7c3a
	lsls r0, r0, #4	@ 000b7c3a 0001
.org 0xb7c3c
	cmp r2, r0	@ 000b7c3c 8242
.org 0xb7c3e
	bgt.n 0xb7c4c	@ 000b7c3e 05dc
.org 0xb7c40
	b.n 0xb7c5e	@ 000b7c40 0de0
.org 0xb7c42
	subs r1, r0, r1	@ 000b7c42 411a
.org 0xb7c44
	movs r0, #224	@ 000b7c44 e020
.org 0xb7c46
	lsls r0, r0, #4	@ 000b7c46 0001
.org 0xb7c48
	cmp r1, r0	@ 000b7c48 8142
.org 0xb7c4a
	ble.n 0xb7c5e	@ 000b7c4a 08dd
.org 0xb7c4c
	ldr r1, [pc, #48]	@ 000b7c4c 0c49
.org 0xb7c4e
	ldrb r0, [r6, #9]	@ 000b7c4e 707a
.org 0xb7c50
	lsls r0, r0, #2	@ 000b7c50 8000
.org 0xb7c52
	adds r0, r0, r1	@ 000b7c52 4018
.org 0xb7c54
	movs r1, #2	@ 000b7c54 0221
.org 0xb7c56
	str r1, [r6, #12]	@ 000b7c56 f160
.org 0xb7c58
	ldr r0, [r0, #0]	@ 000b7c58 0068
.org 0xb7c5a
	ldr r0, [r0, #8]	@ 000b7c5a 8068
.org 0xb7c5c
	str r0, [r6, #20]	@ 000b7c5c 7061
.org 0xb7c5e
	ldrb r0, [r6, #18]	@ 000b7c5e b07c
.org 0xb7c60
	adds r3, r0, #0	@ 000b7c60 031c
.org 0xb7c62
	cmp r3, #0	@ 000b7c62 002b
.org 0xb7c64
	bne.n 0xb7c92	@ 000b7c64 15d1
.org 0xb7c66
	adds r2, r6, #0	@ 000b7c66 321c
.org 0xb7c68
	adds r2, #181	@ 000b7c68 b532
.org 0xb7c6a
	ldrb r0, [r2, #0]	@ 000b7c6a 1078
.org 0xb7c6c
	cmp r0, #0	@ 000b7c6c 0028
.org 0xb7c6e
	bne.n 0xb7c84	@ 000b7c6e 09d1
.org 0xb7c70
	ldrb r0, [r6, #10]	@ 000b7c70 b07a
.org 0xb7c72
	movs r1, #254	@ 000b7c72 fe21
.org 0xb7c74
	ands r1, r0	@ 000b7c74 0140
.org 0xb7c76
	strb r1, [r6, #10]	@ 000b7c76 b172
.org 0xb7c78
	movs r0, #1	@ 000b7c78 0120
.org 0xb7c7a
	strb r0, [r2, #0]	@ 000b7c7a 1070
.org 0xb7c7c
	b.n 0xb7c8e	@ 000b7c7c 07e0
.org 0xb7c7e
	.byte 0x00	@ 000b7c7e data
.org 0xb7c7f
	.byte 0x00	@ 000b7c7f data
.org 0xb7c80
	.byte 0x40,0xdb,0x85,0x08	@ 000b7c80 data
.org 0xb7c84
	ldrb r1, [r6, #10]	@ 000b7c84 b17a
.org 0xb7c86
	movs r0, #1	@ 000b7c86 0120
.org 0xb7c88
	orrs r0, r1	@ 000b7c88 0843
.org 0xb7c8a
	strb r0, [r6, #10]	@ 000b7c8a b072
.org 0xb7c8c
	strb r3, [r2, #0]	@ 000b7c8c 1370
.org 0xb7c8e
	movs r0, #2	@ 000b7c8e 0220
.org 0xb7c90
	b.n 0xb7c94	@ 000b7c90 00e0
