@ FUN_080b9b8c  entry 0x080b9b8c  size 318
.thumb
.org 0xb9b8c
FUN_080b9b8c:
	push {r4, r5, r6, r7, lr}	@ 000b9b8c f0b5
.org 0xb9b8e
	mov r7, r9	@ 000b9b8e 4f46
.org 0xb9b90
	mov r6, r8	@ 000b9b90 4646
.org 0xb9b92
	push {r6, r7}	@ 000b9b92 c0b4
.org 0xb9b94
	adds r4, r0, #0	@ 000b9b94 041c
.org 0xb9b96
	ldrb r5, [r4, #14]	@ 000b9b96 a57b
.org 0xb9b98
	cmp r5, #0	@ 000b9b98 002d
.org 0xb9b9a
	bne.n 0xb9be6	@ 000b9b9a 24d1
.org 0xb9b9c
	adds r0, #192	@ 000b9b9c c030
.org 0xb9b9e
	ldr r0, [r0, #0]	@ 000b9b9e 0068
.org 0xb9ba0
	ldr r1, [r4, #84]	@ 000b9ba0 616d
.org 0xb9ba2
	subs r0, r0, r1	@ 000b9ba2 401a
.org 0xb9ba4
	adds r1, r4, #0	@ 000b9ba4 211c
.org 0xb9ba6
	adds r1, #188	@ 000b9ba6 bc31
.org 0xb9ba8
	ldr r1, [r1, #0]	@ 000b9ba8 0968
.org 0xb9baa
	ldr r2, [r4, #88]	@ 000b9baa a26d
.org 0xb9bac
	subs r1, r1, r2	@ 000b9bac 891a
.org 0xb9bae
	lsls r0, r0, #8	@ 000b9bae 0002
.org 0xb9bb0
	asrs r0, r0, #16	@ 000b9bb0 0014
.org 0xb9bb2
	lsls r1, r1, #8	@ 000b9bb2 0902
.org 0xb9bb4
	asrs r1, r1, #16	@ 000b9bb4 0914
.org 0xb9bb6
	bl 0x128bdc	@ 000b9bb6 6ff011f8
.org 0xb9bba
	lsls r0, r0, #16	@ 000b9bba 0004
.org 0xb9bbc
	lsrs r2, r0, #24	@ 000b9bbc 020e
.org 0xb9bbe
	ldr r1, [pc, #188]	@ 000b9bbe 2f49
.org 0xb9bc0
	adds r0, r2, #0	@ 000b9bc0 101c
.org 0xb9bc2
	adds r0, #64	@ 000b9bc2 4030
.org 0xb9bc4
	lsls r0, r0, #24	@ 000b9bc4 0006
.org 0xb9bc6
	lsrs r0, r0, #23	@ 000b9bc6 c00d
.org 0xb9bc8
	adds r0, r0, r1	@ 000b9bc8 4018
.org 0xb9bca
	movs r3, #0	@ 000b9bca 0023
.org 0xb9bcc
	ldrsh r0, [r0, r3]	@ 000b9bcc c05e
.org 0xb9bce
	str r0, [r4, #92]	@ 000b9bce e065
.org 0xb9bd0
	lsls r0, r2, #1	@ 000b9bd0 5000
.org 0xb9bd2
	adds r0, r0, r1	@ 000b9bd2 4018
.org 0xb9bd4
	movs r1, #0	@ 000b9bd4 0021
.org 0xb9bd6
	ldrsh r0, [r0, r1]	@ 000b9bd6 405e
.org 0xb9bd8
	str r0, [r4, #96]	@ 000b9bd8 2066
.org 0xb9bda
	adds r0, r4, #0	@ 000b9bda 201c
.org 0xb9bdc
	adds r0, #180	@ 000b9bdc b430
.org 0xb9bde
	strb r5, [r0, #0]	@ 000b9bde 0570
.org 0xb9be0
	ldrb r0, [r4, #14]	@ 000b9be0 a07b
.org 0xb9be2
	adds r0, #1	@ 000b9be2 0130
.org 0xb9be4
	strb r0, [r4, #14]	@ 000b9be4 a073
.org 0xb9be6
	ldr r1, [r4, #84]	@ 000b9be6 616d
.org 0xb9be8
	ldr r0, [r4, #92]	@ 000b9be8 e06d
.org 0xb9bea
	adds r2, r1, r0	@ 000b9bea 0a18
.org 0xb9bec
	str r2, [r4, #84]	@ 000b9bec 6265
.org 0xb9bee
	ldr r1, [r4, #88]	@ 000b9bee a16d
.org 0xb9bf0
	ldr r0, [r4, #96]	@ 000b9bf0 206e
.org 0xb9bf2
	adds r1, r1, r0	@ 000b9bf2 0918
.org 0xb9bf4
	str r1, [r4, #88]	@ 000b9bf4 a165
.org 0xb9bf6
	adds r0, r4, #0	@ 000b9bf6 201c
.org 0xb9bf8
	adds r0, #180	@ 000b9bf8 b430
.org 0xb9bfa
	ldrb r3, [r0, #0]	@ 000b9bfa 0378
.org 0xb9bfc
	mov r8, r3	@ 000b9bfc 9846
.org 0xb9bfe
	adds r6, r4, #0	@ 000b9bfe 261c
.org 0xb9c00
	adds r6, #192	@ 000b9c00 c036
.org 0xb9c02
	adds r7, r0, #0	@ 000b9c02 071c
.org 0xb9c04
	cmp r3, #0	@ 000b9c04 002b
.org 0xb9c06
	bne.n 0xb9c84	@ 000b9c06 3dd1
.org 0xb9c08
	ldr r0, [r6, #0]	@ 000b9c08 3068
.org 0xb9c0a
	subs r0, r2, r0	@ 000b9c0a 101a
.org 0xb9c0c
	asrs r0, r0, #8	@ 000b9c0c 0012
.org 0xb9c0e
	cmp r0, #0	@ 000b9c0e 0028
.org 0xb9c10
	bge.n 0xb9c14	@ 000b9c10 00da
.org 0xb9c12
	negs r0, r0	@ 000b9c12 4042
.org 0xb9c14
	cmp r0, #15	@ 000b9c14 0f28
.org 0xb9c16
	bgt.n 0xb9c84	@ 000b9c16 35dc
.org 0xb9c18
	adds r5, r4, #0	@ 000b9c18 251c
.org 0xb9c1a
	adds r5, #188	@ 000b9c1a bc35
.org 0xb9c1c
	ldr r0, [r5, #0]	@ 000b9c1c 2868
.org 0xb9c1e
	subs r0, r1, r0	@ 000b9c1e 081a
.org 0xb9c20
	asrs r0, r0, #8	@ 000b9c20 0012
.org 0xb9c22
	cmp r0, #0	@ 000b9c22 0028
.org 0xb9c24
	bge.n 0xb9c28	@ 000b9c24 00da
.org 0xb9c26
	negs r0, r0	@ 000b9c26 4042
.org 0xb9c28
	cmp r0, #15	@ 000b9c28 0f28
.org 0xb9c2a
	bgt.n 0xb9c84	@ 000b9c2a 2bdc
.org 0xb9c2c
	movs r0, #1	@ 000b9c2c 0120
.org 0xb9c2e
	mov r9, r0	@ 000b9c2e 8146
.org 0xb9c30
	mov r1, r9	@ 000b9c30 4946
.org 0xb9c32
	strb r1, [r7, #0]	@ 000b9c32 3970
.org 0xb9c34
	ldr r0, [r6, #0]	@ 000b9c34 3068
.org 0xb9c36
	ldr r1, [r4, #84]	@ 000b9c36 616d
.org 0xb9c38
	subs r0, r0, r1	@ 000b9c38 401a
.org 0xb9c3a
	ldr r1, [r5, #0]	@ 000b9c3a 2968
.org 0xb9c3c
	ldr r2, [r4, #88]	@ 000b9c3c a26d
.org 0xb9c3e
	subs r1, r1, r2	@ 000b9c3e 891a
.org 0xb9c40
	lsls r0, r0, #8	@ 000b9c40 0002
.org 0xb9c42
	asrs r0, r0, #16	@ 000b9c42 0014
.org 0xb9c44
	lsls r1, r1, #8	@ 000b9c44 0902
.org 0xb9c46
	asrs r1, r1, #16	@ 000b9c46 0914
.org 0xb9c48
	bl 0x128bdc	@ 000b9c48 6ef0c8ff
.org 0xb9c4c
	lsls r0, r0, #16	@ 000b9c4c 0004
.org 0xb9c4e
	lsrs r2, r0, #24	@ 000b9c4e 020e
.org 0xb9c50
	ldr r1, [pc, #40]	@ 000b9c50 0a49
.org 0xb9c52
	adds r0, r2, #0	@ 000b9c52 101c
.org 0xb9c54
	adds r0, #64	@ 000b9c54 4030
.org 0xb9c56
	lsls r0, r0, #24	@ 000b9c56 0006
.org 0xb9c58
	lsrs r0, r0, #23	@ 000b9c58 c00d
.org 0xb9c5a
	adds r0, r0, r1	@ 000b9c5a 4018
.org 0xb9c5c
	movs r3, #0	@ 000b9c5c 0023
.org 0xb9c5e
	ldrsh r0, [r0, r3]	@ 000b9c5e c05e
.org 0xb9c60
	str r0, [r4, #92]	@ 000b9c60 e065
.org 0xb9c62
	lsls r0, r2, #1	@ 000b9c62 5000
.org 0xb9c64
	adds r0, r0, r1	@ 000b9c64 4018
.org 0xb9c66
	movs r1, #0	@ 000b9c66 0021
.org 0xb9c68
	ldrsh r0, [r0, r1]	@ 000b9c68 405e
.org 0xb9c6a
	str r0, [r4, #96]	@ 000b9c6a 2066
.org 0xb9c6c
	ldr r1, [r4, #88]	@ 000b9c6c a16d
.org 0xb9c6e
	ldr r0, [r5, #0]	@ 000b9c6e 2868
.org 0xb9c70
	cmp r1, r0	@ 000b9c70 8142
.org 0xb9c72
	ble.n 0xb9c80	@ 000b9c72 05dd
.org 0xb9c74
	mov r3, r8	@ 000b9c74 4346
.org 0xb9c76
	strb r3, [r4, #15]	@ 000b9c76 e373
.org 0xb9c78
	b.n 0xb9c84	@ 000b9c78 04e0
.org 0xb9c7a
	.byte 0x00	@ 000b9c7a data
.org 0xb9c7b
	.byte 0x00	@ 000b9c7b data
.org 0xb9c7c
	.byte 0x0c,0x93,0x12,0x08	@ 000b9c7c data
.org 0xb9c80
	mov r0, r9	@ 000b9c80 4846
.org 0xb9c82
	strb r0, [r4, #15]	@ 000b9c82 e073
.org 0xb9c84
	ldr r3, [r4, #84]	@ 000b9c84 636d
.org 0xb9c86
	ldr r2, [r6, #0]	@ 000b9c86 3268
.org 0xb9c88
	subs r0, r3, r2	@ 000b9c88 981a
.org 0xb9c8a
	asrs r0, r0, #8	@ 000b9c8a 0012
.org 0xb9c8c
	cmp r0, #0	@ 000b9c8c 0028
.org 0xb9c8e
	bge.n 0xb9c92	@ 000b9c8e 00da
.org 0xb9c90
	negs r0, r0	@ 000b9c90 4042
.org 0xb9c92
	cmp r0, #3	@ 000b9c92 0328
.org 0xb9c94
	bgt.n 0xb9cc4	@ 000b9c94 16dc
.org 0xb9c96
	adds r0, r4, #0	@ 000b9c96 201c
.org 0xb9c98
	adds r0, #188	@ 000b9c98 bc30
.org 0xb9c9a
	ldr r1, [r4, #88]	@ 000b9c9a a16d
.org 0xb9c9c
	ldr r0, [r0, #0]	@ 000b9c9c 0068
.org 0xb9c9e
	subs r1, r1, r0	@ 000b9c9e 091a
.org 0xb9ca0
	asrs r1, r1, #8	@ 000b9ca0 0912
.org 0xb9ca2
	cmp r1, #0	@ 000b9ca2 0029
.org 0xb9ca4
	bge.n 0xb9ca8	@ 000b9ca4 00da
.org 0xb9ca6
	negs r1, r1	@ 000b9ca6 4942
.org 0xb9ca8
	cmp r1, #3	@ 000b9ca8 0329
.org 0xb9caa
	bgt.n 0xb9cc4	@ 000b9caa 0bdc
.org 0xb9cac
	cmp r3, r2	@ 000b9cac 9342
.org 0xb9cae
	bge.n 0xb9cb4	@ 000b9cae 01da
.org 0xb9cb0
	movs r0, #0	@ 000b9cb0 0020
.org 0xb9cb2
	b.n 0xb9cb6	@ 000b9cb2 00e0
.org 0xb9cb4
	movs r0, #1	@ 000b9cb4 0120
.org 0xb9cb6
	strb r0, [r7, #0]	@ 000b9cb6 3870
.org 0xb9cb8
	movs r0, #0	@ 000b9cb8 0020
.org 0xb9cba
	strb r0, [r4, #13]	@ 000b9cba 6073
.org 0xb9cbc
	strb r0, [r4, #14]	@ 000b9cbc a073
.org 0xb9cbe
	adds r1, r4, #0	@ 000b9cbe 211c
.org 0xb9cc0
	adds r1, #183	@ 000b9cc0 b731
.org 0xb9cc2
	strb r0, [r1, #0]	@ 000b9cc2 0870
.org 0xb9cc4
	pop {r3, r4}	@ 000b9cc4 18bc
.org 0xb9cc6
	mov r8, r3	@ 000b9cc6 9846
.org 0xb9cc8
	mov r9, r4	@ 000b9cc8 a146
