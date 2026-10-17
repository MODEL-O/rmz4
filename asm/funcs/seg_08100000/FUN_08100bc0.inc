@ FUN_08100bc0  entry 0x08100bc0  size 126
.thumb
.org 0x100bc0
FUN_08100bc0:
	push {r4, r5, lr}	@ 00100bc0 30b5
.org 0x100bc2
	adds r4, r0, #0	@ 00100bc2 041c
.org 0x100bc4
	ldrb r0, [r4, #17]	@ 00100bc4 607c
.org 0x100bc6
	cmp r0, #0	@ 00100bc6 0028
.org 0x100bc8
	beq.n 0x100c2c	@ 00100bc8 30d0
.org 0x100bca
	ldr r5, [r4, #40]	@ 00100bca a56a
.org 0x100bcc
	ldrb r0, [r5, #12]	@ 00100bcc 287b
.org 0x100bce
	cmp r0, #1	@ 00100bce 0128
.org 0x100bd0
	bls.n 0x100bf0	@ 00100bd0 0ed9
.org 0x100bd2
	ldr r1, [pc, #24]	@ 00100bd2 0649
.org 0x100bd4
	ldrb r0, [r4, #9]	@ 00100bd4 607a
.org 0x100bd6
	lsls r0, r0, #2	@ 00100bd6 8000
.org 0x100bd8
	adds r0, r0, r1	@ 00100bd8 4018
.org 0x100bda
	movs r1, #2	@ 00100bda 0221
.org 0x100bdc
	str r1, [r4, #12]	@ 00100bdc e160
.org 0x100bde
	ldr r0, [r0, #0]	@ 00100bde 0068
.org 0x100be0
	ldr r0, [r0, #8]	@ 00100be0 8068
.org 0x100be2
	str r0, [r4, #20]	@ 00100be2 6061
.org 0x100be4
	adds r0, r4, #0	@ 00100be4 201c
.org 0x100be6
	bl 0x100c48	@ 00100be6 00f02ff8
.org 0x100bea
	b.n 0x100c3c	@ 00100bea 27e0
.org 0x100bec
	.byte 0xfc,0x92,0x86,0x08	@ 00100bec data
.org 0x100bf0
	ldrb r0, [r4, #13]	@ 00100bf0 607b
.org 0x100bf2
	cmp r0, #0	@ 00100bf2 0028
.org 0x100bf4
	bne.n 0x100c14	@ 00100bf4 0ed1
.org 0x100bf6
	adds r0, r5, #0	@ 00100bf6 281c
.org 0x100bf8
	adds r0, #184	@ 00100bf8 b830
.org 0x100bfa
	ldrb r1, [r0, #0]	@ 00100bfa 0178
.org 0x100bfc
	adds r0, r4, #0	@ 00100bfc 201c
.org 0x100bfe
	adds r0, #184	@ 00100bfe b830
.org 0x100c00
	strb r1, [r0, #0]	@ 00100c00 0170
.org 0x100c02
	ldrb r0, [r5, #30]	@ 00100c02 a87f
.org 0x100c04
	lsls r0, r0, #8	@ 00100c04 0002
.org 0x100c06
	adds r1, r5, #0	@ 00100c06 291c
.org 0x100c08
	adds r1, #112	@ 00100c08 7031
.org 0x100c0a
	ldrb r1, [r1, #0]	@ 00100c0a 0978
.org 0x100c0c
	orrs r1, r0	@ 00100c0c 0143
.org 0x100c0e
	adds r0, r4, #0	@ 00100c0e 201c
.org 0x100c10
	bl 0x1cf00	@ 00100c10 1cf776f9
.org 0x100c14
	adds r0, r4, #0	@ 00100c14 201c
.org 0x100c16
	bl 0x1cff0	@ 00100c16 1cf7ebf9
.org 0x100c1a
	ldr r0, [r5, #60]	@ 00100c1a e86b
.org 0x100c1c
	str r0, [r4, #60]	@ 00100c1c e063
.org 0x100c1e
	adds r0, r5, #0	@ 00100c1e 281c
.org 0x100c20
	adds r0, #78	@ 00100c20 4e30
.org 0x100c22
	ldrb r1, [r0, #0]	@ 00100c22 0178
.org 0x100c24
	adds r0, r4, #0	@ 00100c24 201c
.org 0x100c26
	adds r0, #78	@ 00100c26 4e30
.org 0x100c28
	strb r1, [r0, #0]	@ 00100c28 0170
.org 0x100c2a
	b.n 0x100c3c	@ 00100c2a 07e0
.org 0x100c2c
	ldr r0, [pc, #20]	@ 00100c2c 0548
.org 0x100c2e
	ldrb r1, [r4, #13]	@ 00100c2e 617b
.org 0x100c30
	lsls r1, r1, #2	@ 00100c30 8900
.org 0x100c32
	adds r1, r1, r0	@ 00100c32 0918
.org 0x100c34
	ldr r1, [r1, #0]	@ 00100c34 0968
.org 0x100c36
	adds r0, r4, #0	@ 00100c36 201c
.org 0x100c38
	bl 0x128f80	@ 00100c38 28f0a2f9
.org 0x100c3c
	pop {r4, r5}	@ 00100c3c 30bc
