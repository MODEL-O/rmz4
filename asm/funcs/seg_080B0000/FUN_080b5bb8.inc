@ FUN_080b5bb8  entry 0x080b5bb8  size 200
.thumb
.org 0xb5bb8
FUN_080b5bb8:
	push {r4, r5, r6, r7, lr}	@ 000b5bb8 f0b5
.org 0xb5bba
	mov r7, sl	@ 000b5bba 5746
.org 0xb5bbc
	mov r6, r9	@ 000b5bbc 4e46
.org 0xb5bbe
	mov r5, r8	@ 000b5bbe 4546
.org 0xb5bc0
	push {r5, r6, r7}	@ 000b5bc0 e0b4
.org 0xb5bc2
	sub sp, #16	@ 000b5bc2 84b0
.org 0xb5bc4
	adds r4, r0, #0	@ 000b5bc4 041c
.org 0xb5bc6
	ldr r0, [r4, #40]	@ 000b5bc6 a06a
.org 0xb5bc8
	str r0, [sp, #8]	@ 000b5bc8 0290
.org 0xb5bca
	ldrb r0, [r4, #15]	@ 000b5bca e07b
.org 0xb5bcc
	cmp r0, #0	@ 000b5bcc 0028
.org 0xb5bce
	bne.n 0xb5c40	@ 000b5bce 37d1
.org 0xb5bd0
	movs r0, #63	@ 000b5bd0 3f20
.org 0xb5bd2
	bl 0x2b10	@ 000b5bd2 4cf79dff
.org 0xb5bd6
	ldrb r0, [r4, #10]	@ 000b5bd6 a07a
.org 0xb5bd8
	lsrs r0, r0, #4	@ 000b5bd8 0009
.org 0xb5bda
	movs r1, #1	@ 000b5bda 0121
.org 0xb5bdc
	ands r0, r1	@ 000b5bdc 0840
.org 0xb5bde
	ldr r1, [r4, #84]	@ 000b5bde 616d
.org 0xb5be0
	str r1, [sp, #0]	@ 000b5be0 0091
.org 0xb5be2
	ldr r1, [r4, #88]	@ 000b5be2 a16d
.org 0xb5be4
	str r1, [sp, #4]	@ 000b5be4 0191
.org 0xb5be6
	movs r1, #140	@ 000b5be6 8c21
.org 0xb5be8
	adds r1, r1, r4	@ 000b5be8 0919
.org 0xb5bea
	mov r9, r1	@ 000b5bea 8946
.org 0xb5bec
	movs r3, #144	@ 000b5bec 9023
.org 0xb5bee
	adds r3, r3, r4	@ 000b5bee 1b19
.org 0xb5bf0
	mov sl, r3	@ 000b5bf0 9a46
.org 0xb5bf2
	adds r1, r4, #0	@ 000b5bf2 211c
.org 0xb5bf4
	adds r1, #148	@ 000b5bf4 9431
.org 0xb5bf6
	str r1, [sp, #12]	@ 000b5bf6 0391
.org 0xb5bf8
	lsls r1, r0, #4	@ 000b5bf8 0101
.org 0xb5bfa
	orrs r0, r1	@ 000b5bfa 0843
.org 0xb5bfc
	lsls r7, r0, #24	@ 000b5bfc 0706
.org 0xb5bfe
	movs r6, #0	@ 000b5bfe 0026
.org 0xb5c00
	ldr r3, [pc, #124]	@ 000b5c00 1f4b
.org 0xb5c02
	mov r8, r3	@ 000b5c02 9846
.org 0xb5c04
	movs r5, #2	@ 000b5c04 0225
.org 0xb5c06
	mov r0, r8	@ 000b5c06 4046
.org 0xb5c08
	adds r1, r6, r0	@ 000b5c08 3118
.org 0xb5c0a
	mov r0, sp	@ 000b5c0a 6846
.org 0xb5c0c
	movs r2, #0	@ 000b5c0c 0022
.org 0xb5c0e
	lsrs r3, r7, #24	@ 000b5c0e 3b0e
.org 0xb5c10
	bl 0xd4c8c	@ 000b5c10 1ff03cf8
.org 0xb5c14
	adds r6, #28	@ 000b5c14 1c36
.org 0xb5c16
	subs r5, #1	@ 000b5c16 013d
.org 0xb5c18
	cmp r5, #0	@ 000b5c18 002d
.org 0xb5c1a
	bge.n 0xb5c06	@ 000b5c1a f4da
.org 0xb5c1c
	movs r0, #0	@ 000b5c1c 0020
.org 0xb5c1e
	mov r1, r9	@ 000b5c1e 4946
.org 0xb5c20
	str r0, [r1, #0]	@ 000b5c20 0860
.org 0xb5c22
	mov r3, sl	@ 000b5c22 5346
.org 0xb5c24
	str r0, [r3, #0]	@ 000b5c24 1860
.org 0xb5c26
	ldr r1, [sp, #12]	@ 000b5c26 0399
.org 0xb5c28
	strb r0, [r1, #0]	@ 000b5c28 0870
.org 0xb5c2a
	ldrb r1, [r4, #10]	@ 000b5c2a a17a
.org 0xb5c2c
	movs r0, #251	@ 000b5c2c fb20
.org 0xb5c2e
	ands r0, r1	@ 000b5c2e 0840
.org 0xb5c30
	movs r1, #254	@ 000b5c30 fe21
.org 0xb5c32
	ands r0, r1	@ 000b5c32 0840
.org 0xb5c34
	strb r0, [r4, #10]	@ 000b5c34 a072
.org 0xb5c36
	movs r0, #64	@ 000b5c36 4020
.org 0xb5c38
	strb r0, [r4, #18]	@ 000b5c38 a074
.org 0xb5c3a
	ldrb r0, [r4, #15]	@ 000b5c3a e07b
.org 0xb5c3c
	adds r0, #1	@ 000b5c3c 0130
.org 0xb5c3e
	strb r0, [r4, #15]	@ 000b5c3e e073
.org 0xb5c40
	ldrb r0, [r4, #18]	@ 000b5c40 a07c
.org 0xb5c42
	subs r0, #1	@ 000b5c42 0138
.org 0xb5c44
	strb r0, [r4, #18]	@ 000b5c44 a074
.org 0xb5c46
	lsls r0, r0, #24	@ 000b5c46 0006
.org 0xb5c48
	cmp r0, #0	@ 000b5c48 0028
.org 0xb5c4a
	bne.n 0xb5c70	@ 000b5c4a 11d1
.org 0xb5c4c
	ldr r1, [sp, #8]	@ 000b5c4c 0299
.org 0xb5c4e
	adds r1, #204	@ 000b5c4e cc31
.org 0xb5c50
	ldrh r2, [r1, #0]	@ 000b5c50 0a88
.org 0xb5c52
	movs r3, #0	@ 000b5c52 0023
.org 0xb5c54
	ldrsh r0, [r1, r3]	@ 000b5c54 c85e
.org 0xb5c56
	cmp r0, #0	@ 000b5c56 0028
.org 0xb5c58
	beq.n 0xb5c5e	@ 000b5c58 01d0
.org 0xb5c5a
	subs r0, r2, #1	@ 000b5c5a 501e
.org 0xb5c5c
	strh r0, [r1, #0]	@ 000b5c5c 0880
.org 0xb5c5e
	ldr r1, [pc, #36]	@ 000b5c5e 0949
.org 0xb5c60
	ldrb r0, [r4, #9]	@ 000b5c60 607a
.org 0xb5c62
	lsls r0, r0, #2	@ 000b5c62 8000
.org 0xb5c64
	adds r0, r0, r1	@ 000b5c64 4018
.org 0xb5c66
	movs r1, #4	@ 000b5c66 0421
.org 0xb5c68
	str r1, [r4, #12]	@ 000b5c68 e160
.org 0xb5c6a
	ldr r0, [r0, #0]	@ 000b5c6a 0068
.org 0xb5c6c
	ldr r0, [r0, #16]	@ 000b5c6c 0069
.org 0xb5c6e
	str r0, [r4, #20]	@ 000b5c6e 6061
.org 0xb5c70
	add sp, #16	@ 000b5c70 04b0
.org 0xb5c72
	pop {r3, r4, r5}	@ 000b5c72 38bc
.org 0xb5c74
	mov r8, r3	@ 000b5c74 9846
.org 0xb5c76
	mov r9, r4	@ 000b5c76 a146
.org 0xb5c78
	mov sl, r5	@ 000b5c78 aa46
.org 0xb5c7a
	pop {r4, r5, r6, r7}	@ 000b5c7a f0bc
.org 0xb5c7c
	pop {r0}	@ 000b5c7c 01bc
.org 0xb5c7e
	bx r0	@ 000b5c7e 0047
