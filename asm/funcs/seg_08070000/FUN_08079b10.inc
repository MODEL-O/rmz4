@ FUN_08079b10  entry 0x08079b10  size 82
.thumb
.org 0x79b10
FUN_08079b10:
	push {r4, lr}	@ 00079b10 10b5
.org 0x79b12
	adds r4, r0, #0	@ 00079b12 041c
.org 0x79b14
	ldrb r0, [r4, #14]	@ 00079b14 a07b
.org 0x79b16
	adds r1, r0, #0	@ 00079b16 011c
.org 0x79b18
	cmp r1, #0	@ 00079b18 0029
.org 0x79b1a
	bne.n 0x79b22	@ 00079b1a 02d1
.org 0x79b1c
	strb r1, [r4, #18]	@ 00079b1c a174
.org 0x79b1e
	adds r0, #1	@ 00079b1e 0130
.org 0x79b20
	strb r0, [r4, #14]	@ 00079b20 a073
.org 0x79b22
	adds r0, r4, #0	@ 00079b22 201c
.org 0x79b24
	bl 0x1cff0	@ 00079b24 a3f764fa
.org 0x79b28
	adds r2, r4, #0	@ 00079b28 221c
.org 0x79b2a
	adds r2, #180	@ 00079b2a b432
.org 0x79b2c
	ldr r1, [pc, #52]	@ 00079b2c 0d49
.org 0x79b2e
	ldrb r0, [r4, #18]	@ 00079b2e a07c
.org 0x79b30
	lsls r0, r0, #1	@ 00079b30 4000
.org 0x79b32
	adds r0, r0, r1	@ 00079b32 4018
.org 0x79b34
	movs r3, #0	@ 00079b34 0023
.org 0x79b36
	ldrsh r1, [r0, r3]	@ 00079b36 c15e
.org 0x79b38
	lsls r1, r1, #2	@ 00079b38 8900
.org 0x79b3a
	ldr r0, [r2, #4]	@ 00079b3a 5068
.org 0x79b3c
	adds r0, r0, r1	@ 00079b3c 4018
.org 0x79b3e
	str r0, [r4, #88]	@ 00079b3e a065
.org 0x79b40
	ldrb r0, [r4, #18]	@ 00079b40 a07c
.org 0x79b42
	adds r0, #1	@ 00079b42 0130
.org 0x79b44
	strb r0, [r4, #18]	@ 00079b44 a074
.org 0x79b46
	ldr r0, [pc, #32]	@ 00079b46 0848
.org 0x79b48
	ldr r1, [pc, #32]	@ 00079b48 0849
.org 0x79b4a
	adds r0, r0, r1	@ 00079b4a 4018
.org 0x79b4c
	ldrb r0, [r0, #0]	@ 00079b4c 0078
.org 0x79b4e
	cmp r0, #2	@ 00079b4e 0228
.org 0x79b50
	bne.n 0x79b5c	@ 00079b50 04d1
.org 0x79b52
	ldrb r0, [r4, #15]	@ 00079b52 e07b
.org 0x79b54
	adds r0, #1	@ 00079b54 0130
.org 0x79b56
	strb r0, [r4, #15]	@ 00079b56 e073
.org 0x79b58
	movs r0, #0	@ 00079b58 0020
.org 0x79b5a
	strb r0, [r4, #14]	@ 00079b5a a073
.org 0x79b5c
	pop {r4}	@ 00079b5c 10bc
.org 0x79b5e
	pop {r0}	@ 00079b5e 01bc
.org 0x79b60
	bx r0	@ 00079b60 0047
