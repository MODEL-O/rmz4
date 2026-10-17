@ FUN_08067a90  entry 0x08067a90  size 72
.thumb
.org 0x67a90
FUN_08067a90:
	push {r4, lr}	@ 00067a90 10b5
.org 0x67a92
	adds r4, r0, #0	@ 00067a92 041c
.org 0x67a94
	ldrb r0, [r4, #14]	@ 00067a94 a07b
.org 0x67a96
	cmp r0, #0	@ 00067a96 0028
.org 0x67a98
	bne.n 0x67ac2	@ 00067a98 13d1
.org 0x67a9a
	adds r0, r4, #0	@ 00067a9a 201c
.org 0x67a9c
	adds r0, #221	@ 00067a9c dd30
.org 0x67a9e
	ldrb r0, [r0, #0]	@ 00067a9e 0078
.org 0x67aa0
	cmp r0, #0	@ 00067aa0 0028
.org 0x67aa2
	beq.n 0x67ab4	@ 00067aa2 07d0
.org 0x67aa4
	ldr r1, [pc, #8]	@ 00067aa4 0249
.org 0x67aa6
	adds r0, r4, #0	@ 00067aa6 201c
.org 0x67aa8
	bl 0x1cf00	@ 00067aa8 b5f72afa
.org 0x67aac
	b.n 0x67abc	@ 00067aac 06e0
.org 0x67aae
	.byte 0x00	@ 00067aae data
.org 0x67aaf
	.byte 0x00	@ 00067aaf data
.org 0x67ab0
	.byte 0x1d,0xa9,0x00,0x00	@ 00067ab0 data
.org 0x67ab4
	ldr r1, [pc, #40]	@ 00067ab4 0a49
.org 0x67ab6
	adds r0, r4, #0	@ 00067ab6 201c
.org 0x67ab8
	bl 0x1cf00	@ 00067ab8 b5f722fa
.org 0x67abc
	ldrb r0, [r4, #14]	@ 00067abc a07b
.org 0x67abe
	adds r0, #1	@ 00067abe 0130
.org 0x67ac0
	strb r0, [r4, #14]	@ 00067ac0 a073
.org 0x67ac2
	adds r0, r4, #0	@ 00067ac2 201c
.org 0x67ac4
	bl 0x1cff0	@ 00067ac4 b5f794fa
.org 0x67ac8
	adds r0, r4, #0	@ 00067ac8 201c
.org 0x67aca
	adds r0, #115	@ 00067aca 7330
.org 0x67acc
	ldrb r1, [r0, #0]	@ 00067acc 0178
.org 0x67ace
	cmp r1, #3	@ 00067ace 0329
.org 0x67ad0
	bne.n 0x67ad8	@ 00067ad0 02d1
.org 0x67ad2
	movs r0, #0	@ 00067ad2 0020
.org 0x67ad4
	strb r1, [r4, #13]	@ 00067ad4 6173
.org 0x67ad6
	strb r0, [r4, #14]	@ 00067ad6 a073
