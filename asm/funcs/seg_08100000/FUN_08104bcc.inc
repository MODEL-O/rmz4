@ FUN_08104bcc  entry 0x08104bcc  size 158
.thumb
.org 0x104bcc
FUN_08104bcc:
	push {r4, r5, r6, r7, lr}	@ 00104bcc f0b5
.org 0x104bce
	adds r4, r0, #0	@ 00104bce 041c
.org 0x104bd0
	ldr r6, [r4, #40]	@ 00104bd0 a66a
.org 0x104bd2
	adds r0, #184	@ 00104bd2 b830
.org 0x104bd4
	ldr r2, [pc, #148]	@ 00104bd4 254a
.org 0x104bd6
	adds r1, r6, r2	@ 00104bd6 b118
.org 0x104bd8
	ldr r0, [r0, #0]	@ 00104bd8 0068
.org 0x104bda
	ldr r1, [r1, #36]	@ 00104bda 496a
.org 0x104bdc
	adds r0, r0, r1	@ 00104bdc 4018
.org 0x104bde
	str r0, [r4, #88]	@ 00104bde a065
.org 0x104be0
	ldrb r0, [r4, #16]	@ 00104be0 207c
.org 0x104be2
	cmp r0, #1	@ 00104be2 0128
.org 0x104be4
	beq.n 0x104c64	@ 00104be4 3ed0
.org 0x104be6
	ldrb r1, [r4, #30]	@ 00104be6 a17f
.org 0x104be8
	lsls r1, r1, #8	@ 00104be8 0902
.org 0x104bea
	adds r2, r4, #0	@ 00104bea 221c
.org 0x104bec
	adds r2, #112	@ 00104bec 7032
.org 0x104bee
	ldrb r0, [r2, #0]	@ 00104bee 1078
.org 0x104bf0
	orrs r1, r0	@ 00104bf0 0143
.org 0x104bf2
	ldr r0, [pc, #124]	@ 00104bf2 1f48
.org 0x104bf4
	adds r7, r2, #0	@ 00104bf4 171c
.org 0x104bf6
	cmp r1, r0	@ 00104bf6 8142
.org 0x104bf8
	bne.n 0x104c18	@ 00104bf8 0ed1
.org 0x104bfa
	ldr r0, [pc, #120]	@ 00104bfa 1e48
.org 0x104bfc
	adds r5, r6, r0	@ 00104bfc 3518
.org 0x104bfe
	ldrb r0, [r5, #0]	@ 00104bfe 2878
.org 0x104c00
	cmp r0, #0	@ 00104c00 0028
.org 0x104c02
	beq.n 0x104c18	@ 00104c02 09d0
.org 0x104c04
	movs r0, #208	@ 00104c04 d020
.org 0x104c06
	lsls r0, r0, #1	@ 00104c06 4000
.org 0x104c08
	bl 0x2b10	@ 00104c08 fdf682ff
.org 0x104c0c
	ldr r1, [pc, #104]	@ 00104c0c 1a49
.org 0x104c0e
	adds r0, r4, #0	@ 00104c0e 201c
.org 0x104c10
	bl 0x1cf00	@ 00104c10 18f776f9
.org 0x104c14
	movs r0, #0	@ 00104c14 0020
.org 0x104c16
	strb r0, [r5, #0]	@ 00104c16 2870
.org 0x104c18
	ldrb r0, [r4, #30]	@ 00104c18 a07f
.org 0x104c1a
	lsls r0, r0, #8	@ 00104c1a 0002
.org 0x104c1c
	ldrb r1, [r7, #0]	@ 00104c1c 3978
.org 0x104c1e
	orrs r0, r1	@ 00104c1e 0843
.org 0x104c20
	ldr r1, [pc, #88]	@ 00104c20 1649
.org 0x104c22
	cmp r0, r1	@ 00104c22 8842
.org 0x104c24
	beq.n 0x104c40	@ 00104c24 0cd0
.org 0x104c26
	ldr r2, [pc, #88]	@ 00104c26 164a
.org 0x104c28
	adds r5, r6, r2	@ 00104c28 b518
.org 0x104c2a
	ldrb r0, [r5, #0]	@ 00104c2a 2878
.org 0x104c2c
	cmp r0, #0	@ 00104c2c 0028
.org 0x104c2e
	beq.n 0x104c40	@ 00104c2e 07d0
.org 0x104c30
	adds r0, r4, #0	@ 00104c30 201c
.org 0x104c32
	bl 0x1cf00	@ 00104c32 18f765f9
.org 0x104c36
	movs r1, #0	@ 00104c36 0021
.org 0x104c38
	strb r1, [r5, #0]	@ 00104c38 2970
.org 0x104c3a
	ldr r2, [pc, #56]	@ 00104c3a 0e4a
.org 0x104c3c
	adds r0, r6, r2	@ 00104c3c b018
.org 0x104c3e
	strb r1, [r0, #0]	@ 00104c3e 0170
.org 0x104c40
	ldrb r0, [r4, #30]	@ 00104c40 a07f
.org 0x104c42
	lsls r0, r0, #8	@ 00104c42 0002
.org 0x104c44
	ldrb r1, [r7, #0]	@ 00104c44 3978
.org 0x104c46
	orrs r0, r1	@ 00104c46 0843
.org 0x104c48
	ldr r1, [pc, #36]	@ 00104c48 0949
.org 0x104c4a
	cmp r0, r1	@ 00104c4a 8842
.org 0x104c4c
	beq.n 0x104c5e	@ 00104c4c 07d0
.org 0x104c4e
	adds r0, r4, #0	@ 00104c4e 201c
.org 0x104c50
	adds r0, #115	@ 00104c50 7330
.org 0x104c52
	ldrb r0, [r0, #0]	@ 00104c52 0078
.org 0x104c54
	cmp r0, #3	@ 00104c54 0328
.org 0x104c56
	bne.n 0x104c5e	@ 00104c56 02d1
.org 0x104c58
	adds r0, r4, #0	@ 00104c58 201c
.org 0x104c5a
	bl 0x1cf00	@ 00104c5a 18f751f9
.org 0x104c5e
	adds r0, r4, #0	@ 00104c5e 201c
.org 0x104c60
	bl 0x1cff0	@ 00104c60 18f7c6f9
.org 0x104c64
	pop {r4, r5, r6, r7}	@ 00104c64 f0bc
.org 0x104c66
	pop {r0}	@ 00104c66 01bc
.org 0x104c68
	bx r0	@ 00104c68 0047
