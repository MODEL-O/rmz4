@ FUN_080d8bac  entry 0x080d8bac  size 212
.thumb
.org 0xd8bac
FUN_080d8bac:
	push {r4, r5, r6, r7, lr}	@ 000d8bac f0b5
.org 0xd8bae
	sub sp, #12	@ 000d8bae 83b0
.org 0xd8bb0
	adds r6, r0, #0	@ 000d8bb0 061c
.org 0xd8bb2
	ldrb r0, [r6, #18]	@ 000d8bb2 b07c
.org 0xd8bb4
	subs r0, #1	@ 000d8bb4 0138
.org 0xd8bb6
	strb r0, [r6, #18]	@ 000d8bb6 b074
.org 0xd8bb8
	lsls r0, r0, #24	@ 000d8bb8 0006
.org 0xd8bba
	lsrs r7, r0, #24	@ 000d8bba 070e
.org 0xd8bbc
	cmp r7, #0	@ 000d8bbc 002f
.org 0xd8bbe
	bne.n 0xd8c54	@ 000d8bbe 49d1
.org 0xd8bc0
	adds r1, r6, #0	@ 000d8bc0 311c
.org 0xd8bc2
	adds r1, #84	@ 000d8bc2 5431
.org 0xd8bc4
	movs r0, #2	@ 000d8bc4 0220
.org 0xd8bc6
	bl 0xd0c88	@ 000d8bc6 f8f75ff8
.org 0xd8bca
	ldr r2, [pc, #108]	@ 000d8bca 1b4a
.org 0xd8bcc
	ldr r1, [r2, #0]	@ 000d8bcc 1168
.org 0xd8bce
	ldr r0, [pc, #108]	@ 000d8bce 1b48
.org 0xd8bd0
	adds r4, r1, #0	@ 000d8bd0 0c1c
.org 0xd8bd2
	muls r4, r0	@ 000d8bd2 4443
.org 0xd8bd4
	ldr r0, [pc, #104]	@ 000d8bd4 1a48
.org 0xd8bd6
	adds r4, r4, r0	@ 000d8bd6 2418
.org 0xd8bd8
	lsls r4, r4, #1	@ 000d8bd8 6400
.org 0xd8bda
	lsrs r0, r4, #1	@ 000d8bda 6008
.org 0xd8bdc
	str r0, [r2, #0]	@ 000d8bdc 1060
.org 0xd8bde
	lsrs r4, r4, #17	@ 000d8bde 640c
.org 0xd8be0
	movs r0, #3	@ 000d8be0 0320
.org 0xd8be2
	ands r4, r0	@ 000d8be2 0440
.org 0xd8be4
	ldr r0, [r6, #84]	@ 000d8be4 706d
.org 0xd8be6
	str r0, [sp, #4]	@ 000d8be6 0190
.org 0xd8be8
	ldr r0, [r6, #88]	@ 000d8be8 b06d
.org 0xd8bea
	str r0, [sp, #8]	@ 000d8bea 0290
.org 0xd8bec
	ldrb r1, [r6, #10]	@ 000d8bec b17a
.org 0xd8bee
	lsrs r1, r1, #4	@ 000d8bee 0909
.org 0xd8bf0
	movs r5, #1	@ 000d8bf0 0125
.org 0xd8bf2
	ands r1, r5	@ 000d8bf2 2940
.org 0xd8bf4
	ldr r2, [pc, #76]	@ 000d8bf4 134a
.org 0xd8bf6
	str r7, [sp, #0]	@ 000d8bf6 0097
.org 0xd8bf8
	add r0, sp, #4	@ 000d8bf8 01a8
.org 0xd8bfa
	adds r3, r4, #0	@ 000d8bfa 231c
.org 0xd8bfc
	bl 0xd8a6c	@ 000d8bfc fff736ff
.org 0xd8c00
	ldrb r1, [r6, #10]	@ 000d8c00 b17a
.org 0xd8c02
	lsrs r1, r1, #4	@ 000d8c02 0909
.org 0xd8c04
	ands r1, r5	@ 000d8c04 2940
.org 0xd8c06
	ldr r2, [pc, #64]	@ 000d8c06 104a
.org 0xd8c08
	str r7, [sp, #0]	@ 000d8c08 0097
.org 0xd8c0a
	add r0, sp, #4	@ 000d8c0a 01a8
.org 0xd8c0c
	adds r3, r4, #0	@ 000d8c0c 231c
.org 0xd8c0e
	bl 0xd8a6c	@ 000d8c0e fff72dff
.org 0xd8c12
	ldrb r1, [r6, #10]	@ 000d8c12 b17a
.org 0xd8c14
	lsrs r1, r1, #4	@ 000d8c14 0909
.org 0xd8c16
	ands r1, r5	@ 000d8c16 2940
.org 0xd8c18
	ldr r2, [pc, #48]	@ 000d8c18 0c4a
.org 0xd8c1a
	str r7, [sp, #0]	@ 000d8c1a 0097
.org 0xd8c1c
	add r0, sp, #4	@ 000d8c1c 01a8
.org 0xd8c1e
	adds r3, r4, #0	@ 000d8c1e 231c
.org 0xd8c20
	bl 0xd8a6c	@ 000d8c20 fff724ff
.org 0xd8c24
	ldr r1, [pc, #40]	@ 000d8c24 0a49
.org 0xd8c26
	ldrb r0, [r6, #9]	@ 000d8c26 707a
.org 0xd8c28
	lsls r0, r0, #2	@ 000d8c28 8000
.org 0xd8c2a
	adds r0, r0, r1	@ 000d8c2a 4018
.org 0xd8c2c
	movs r1, #2	@ 000d8c2c 0221
.org 0xd8c2e
	str r1, [r6, #12]	@ 000d8c2e f160
.org 0xd8c30
	ldr r0, [r0, #0]	@ 000d8c30 0068
.org 0xd8c32
	ldr r0, [r0, #8]	@ 000d8c32 8068
.org 0xd8c34
	str r0, [r6, #20]	@ 000d8c34 7061
.org 0xd8c36
	b.n 0xd8c94	@ 000d8c36 2de0
.org 0xd8c38
	.byte 0x38,0xdc,0x02,0x02	@ 000d8c38 data
.org 0xd8c3c
	.byte 0xfd,0x43,0x03,0x00	@ 000d8c3c data
.org 0xd8c40
	.byte 0xc3,0x9e,0x26,0x00	@ 000d8c40 data
.org 0xd8c44
	.byte 0x0b,0x1f,0x00,0x00	@ 000d8c44 data
.org 0xd8c48
	.byte 0x0c,0x1f,0x00,0x00	@ 000d8c48 data
.org 0xd8c4c
	.byte 0x0d,0x1f,0x00,0x00	@ 000d8c4c data
.org 0xd8c50
	.byte 0x64,0x6f,0x86,0x08	@ 000d8c50 data
.org 0xd8c54
	ldrb r0, [r6, #14]	@ 000d8c54 b07b
.org 0xd8c56
	cmp r0, #0	@ 000d8c56 0028
.org 0xd8c58
	beq.n 0xd8c60	@ 000d8c58 02d0
.org 0xd8c5a
	cmp r0, #1	@ 000d8c5a 0128
.org 0xd8c5c
	beq.n 0xd8c7c	@ 000d8c5c 0ed0
.org 0xd8c5e
	b.n 0xd8c94	@ 000d8c5e 19e0
.org 0xd8c60
	movs r0, #30	@ 000d8c60 1e20
.org 0xd8c62
	strb r0, [r6, #18]	@ 000d8c62 b074
.org 0xd8c64
	ldr r0, [pc, #52]	@ 000d8c64 0d48
.org 0xd8c66
	str r0, [r6, #96]	@ 000d8c66 3066
.org 0xd8c68
	ldr r0, [pc, #52]	@ 000d8c68 0d48
.org 0xd8c6a
	adds r1, r0, #0	@ 000d8c6a 011c
.org 0xd8c6c
	ldrb r0, [r6, #16]	@ 000d8c6c 307c
.org 0xd8c6e
	adds r1, r1, r0	@ 000d8c6e 0918
.org 0xd8c70
	adds r0, r6, #0	@ 000d8c70 301c
.org 0xd8c72
	bl 0x1cf00	@ 000d8c72 44f745f9
.org 0xd8c76
	ldrb r0, [r6, #14]	@ 000d8c76 b07b
.org 0xd8c78
	adds r0, #1	@ 000d8c78 0130
.org 0xd8c7a
	strb r0, [r6, #14]	@ 000d8c7a b073
.org 0xd8c7c
	ldr r0, [r6, #84]	@ 000d8c7c 706d
.org 0xd8c7e
	ldr r1, [r6, #92]	@ 000d8c7e f16d
