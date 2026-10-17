@ FUN_080c2be8  entry 0x080c2be8  size 112
.thumb
.org 0xc2be8
FUN_080c2be8:
	push {r4, r5, lr}	@ 000c2be8 30b5
.org 0xc2bea
	sub sp, #8	@ 000c2bea 82b0
.org 0xc2bec
	adds r4, r0, #0	@ 000c2bec 041c
.org 0xc2bee
	ldr r0, [pc, #72]	@ 000c2bee 1248
.org 0xc2bf0
	ldr r1, [r0, #4]	@ 000c2bf0 4168
.org 0xc2bf2
	ldr r0, [r0, #0]	@ 000c2bf2 0068
.org 0xc2bf4
	str r0, [sp, #0]	@ 000c2bf4 0090
.org 0xc2bf6
	str r1, [sp, #4]	@ 000c2bf6 0191
.org 0xc2bf8
	ldrb r1, [r4, #17]	@ 000c2bf8 617c
.org 0xc2bfa
	ldrb r0, [r4, #15]	@ 000c2bfa e07b
.org 0xc2bfc
	cmp r0, #0	@ 000c2bfc 0028
.org 0xc2bfe
	bne.n 0xc2c12	@ 000c2bfe 08d1
.org 0xc2c00
	lsls r0, r1, #2	@ 000c2c00 8800
.org 0xc2c02
	add r0, sp	@ 000c2c02 6844
.org 0xc2c04
	ldrh r1, [r0, #0]	@ 000c2c04 0188
.org 0xc2c06
	adds r0, r4, #0	@ 000c2c06 201c
.org 0xc2c08
	bl 0x1cf00	@ 000c2c08 5af77af9
.org 0xc2c0c
	ldrb r0, [r4, #15]	@ 000c2c0c e07b
.org 0xc2c0e
	adds r0, #1	@ 000c2c0e 0130
.org 0xc2c10
	strb r0, [r4, #15]	@ 000c2c10 e073
.org 0xc2c12
	adds r0, r4, #0	@ 000c2c12 201c
.org 0xc2c14
	adds r0, #182	@ 000c2c14 b630
.org 0xc2c16
	ldrb r5, [r0, #0]	@ 000c2c16 0578
.org 0xc2c18
	cmp r5, #0	@ 000c2c18 002d
.org 0xc2c1a
	beq.n 0xc2c40	@ 000c2c1a 11d0
.org 0xc2c1c
	ldr r1, [pc, #28]	@ 000c2c1c 0749
.org 0xc2c1e
	ldrb r0, [r4, #9]	@ 000c2c1e 607a
.org 0xc2c20
	lsls r0, r0, #2	@ 000c2c20 8000
.org 0xc2c22
	adds r0, r0, r1	@ 000c2c22 4018
.org 0xc2c24
	movs r1, #2	@ 000c2c24 0221
.org 0xc2c26
	str r1, [r4, #12]	@ 000c2c26 e160
.org 0xc2c28
	ldr r0, [r0, #0]	@ 000c2c28 0068
.org 0xc2c2a
	ldr r0, [r0, #8]	@ 000c2c2a 8068
.org 0xc2c2c
	str r0, [r4, #20]	@ 000c2c2c 6061
.org 0xc2c2e
	adds r0, r4, #0	@ 000c2c2e 201c
.org 0xc2c30
	bl 0xc2f2c	@ 000c2c30 00f07cf9
.org 0xc2c34
	b.n 0xc2c5a	@ 000c2c34 11e0
.org 0xc2c36
	.byte 0x00	@ 000c2c36 data
.org 0xc2c37
	.byte 0x00	@ 000c2c37 data
.org 0xc2c38
	.byte 0x3c,0xa1,0x12,0x08	@ 000c2c38 data
.org 0xc2c3c
	.byte 0xf4,0x49,0x86,0x08	@ 000c2c3c data
.org 0xc2c40
	adds r0, r4, #0	@ 000c2c40 201c
.org 0xc2c42
	bl 0x1cff0	@ 000c2c42 5af7d5f9
.org 0xc2c46
	adds r1, r4, #0	@ 000c2c46 211c
.org 0xc2c48
	adds r1, #180	@ 000c2c48 b431
.org 0xc2c4a
	ldrb r0, [r1, #0]	@ 000c2c4a 0878
.org 0xc2c4c
	cmp r0, #0	@ 000c2c4c 0028
.org 0xc2c4e
	beq.n 0xc2c5a	@ 000c2c4e 04d0
.org 0xc2c50
	strb r5, [r1, #0]	@ 000c2c50 0d70
.org 0xc2c52
	movs r0, #1	@ 000c2c52 0120
.org 0xc2c54
	strb r0, [r4, #13]	@ 000c2c54 6073
.org 0xc2c56
	strb r5, [r4, #14]	@ 000c2c56 a573
