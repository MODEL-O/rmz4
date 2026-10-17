@ FUN_08091cb8  entry 0x08091cb8  size 82
.thumb
.org 0x91cb8
FUN_08091cb8:
	push {r4, lr}	@ 00091cb8 10b5
.org 0x91cba
	adds r4, r0, #0	@ 00091cba 041c
.org 0x91cbc
	ldrb r0, [r4, #14]	@ 00091cbc a07b
.org 0x91cbe
	cmp r0, #0	@ 00091cbe 0028
.org 0x91cc0
	bne.n 0x91d06	@ 00091cc0 21d1
.org 0x91cc2
	adds r0, r4, #0	@ 00091cc2 201c
.org 0x91cc4
	adds r0, #190	@ 00091cc4 be30
.org 0x91cc6
	ldrb r0, [r0, #0]	@ 00091cc6 0078
.org 0x91cc8
	cmp r0, #1	@ 00091cc8 0128
.org 0x91cca
	bne.n 0x91ce8	@ 00091cca 0dd1
.org 0x91ccc
	ldr r1, [pc, #16]	@ 00091ccc 0449
.org 0x91cce
	adds r0, r4, #0	@ 00091cce 201c
.org 0x91cd0
	bl 0x1cf00	@ 00091cd0 8bf716f9
.org 0x91cd4
	adds r0, r4, #0	@ 00091cd4 201c
.org 0x91cd6
	adds r0, #116	@ 00091cd6 7430
.org 0x91cd8
	ldr r1, [pc, #8]	@ 00091cd8 0249
.org 0x91cda
	bl 0x5784	@ 00091cda 73f753fd
.org 0x91cde
	b.n 0x91cfa	@ 00091cde 0ce0
.org 0x91ce0
	.byte 0x11,0x3c,0x00,0x00	@ 00091ce0 data
.org 0x91ce4
	.byte 0x7c,0x02,0x86,0x08	@ 00091ce4 data
.org 0x91ce8
	ldr r1, [pc, #40]	@ 00091ce8 0a49
.org 0x91cea
	adds r0, r4, #0	@ 00091cea 201c
.org 0x91cec
	bl 0x1cf00	@ 00091cec 8bf708f9
.org 0x91cf0
	adds r0, r4, #0	@ 00091cf0 201c
.org 0x91cf2
	adds r0, #116	@ 00091cf2 7430
.org 0x91cf4
	ldr r1, [pc, #32]	@ 00091cf4 0849
.org 0x91cf6
	bl 0x5784	@ 00091cf6 73f745fd
.org 0x91cfa
	adds r0, r4, #0	@ 00091cfa 201c
.org 0x91cfc
	bl 0x90e64	@ 00091cfc fff7b2f8
.org 0x91d00
	ldrb r0, [r4, #14]	@ 00091d00 a07b
.org 0x91d02
	adds r0, #1	@ 00091d02 0130
.org 0x91d04
	strb r0, [r4, #14]	@ 00091d04 a073
.org 0x91d06
	adds r0, r4, #0	@ 00091d06 201c
.org 0x91d08
	bl 0x1cff0	@ 00091d08 8bf772f9
