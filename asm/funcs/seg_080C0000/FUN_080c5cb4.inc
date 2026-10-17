@ FUN_080c5cb4  entry 0x080c5cb4  size 102
.thumb
.org 0xc5cb4
FUN_080c5cb4:
	push {r4, lr}	@ 000c5cb4 10b5
.org 0xc5cb6
	adds r4, r0, #0	@ 000c5cb6 041c
.org 0xc5cb8
	ldrb r0, [r4, #15]	@ 000c5cb8 e07b
.org 0xc5cba
	cmp r0, #0	@ 000c5cba 0028
.org 0xc5cbc
	bne.n 0xc5cde	@ 000c5cbc 0fd1
.org 0xc5cbe
	adds r0, r4, #0	@ 000c5cbe 201c
.org 0xc5cc0
	adds r0, #116	@ 000c5cc0 7430
.org 0xc5cc2
	ldr r1, [pc, #52]	@ 000c5cc2 0d49
.org 0xc5cc4
	bl 0x5784	@ 000c5cc4 3ff75efd
.org 0xc5cc8
	ldr r1, [pc, #48]	@ 000c5cc8 0c49
.org 0xc5cca
	adds r0, r4, #0	@ 000c5cca 201c
.org 0xc5ccc
	bl 0x1cf00	@ 000c5ccc 57f718f9
.org 0xc5cd0
	adds r0, r4, #0	@ 000c5cd0 201c
.org 0xc5cd2
	adds r0, #184	@ 000c5cd2 b830
.org 0xc5cd4
	ldrb r0, [r0, #0]	@ 000c5cd4 0078
.org 0xc5cd6
	strb r0, [r4, #18]	@ 000c5cd6 a074
.org 0xc5cd8
	ldrb r0, [r4, #15]	@ 000c5cd8 e07b
.org 0xc5cda
	adds r0, #1	@ 000c5cda 0130
.org 0xc5cdc
	strb r0, [r4, #15]	@ 000c5cdc e073
.org 0xc5cde
	adds r0, r4, #0	@ 000c5cde 201c
.org 0xc5ce0
	bl 0x1cff0	@ 000c5ce0 57f786f9
.org 0xc5ce4
	ldrb r0, [r4, #18]	@ 000c5ce4 a07c
.org 0xc5ce6
	adds r0, #1	@ 000c5ce6 0130
.org 0xc5ce8
	strb r0, [r4, #18]	@ 000c5ce8 a074
.org 0xc5cea
	movs r1, #1	@ 000c5cea 0121
.org 0xc5cec
	ands r0, r1	@ 000c5cec 0840
.org 0xc5cee
	cmp r0, #0	@ 000c5cee 0028
.org 0xc5cf0
	beq.n 0xc5d00	@ 000c5cf0 06d0
.org 0xc5cf2
	ldrb r0, [r4, #10]	@ 000c5cf2 a07a
.org 0xc5cf4
	orrs r0, r1	@ 000c5cf4 0843
.org 0xc5cf6
	b.n 0xc5d06	@ 000c5cf6 06e0
.org 0xc5cf8
	.byte 0xf0,0x58,0x86,0x08	@ 000c5cf8 data
.org 0xc5cfc
	.byte 0x02,0x55,0x00,0x00	@ 000c5cfc data
.org 0xc5d00
	ldrb r1, [r4, #10]	@ 000c5d00 a17a
.org 0xc5d02
	movs r0, #254	@ 000c5d02 fe20
.org 0xc5d04
	ands r0, r1	@ 000c5d04 0840
.org 0xc5d06
	strb r0, [r4, #10]	@ 000c5d06 a072
.org 0xc5d08
	adds r0, r4, #0	@ 000c5d08 201c
.org 0xc5d0a
	adds r0, #115	@ 000c5d0a 7330
.org 0xc5d0c
	ldrb r0, [r0, #0]	@ 000c5d0c 0078
.org 0xc5d0e
	cmp r0, #4	@ 000c5d0e 0428
.org 0xc5d10
	bne.n 0xc5d1c	@ 000c5d10 04d1
.org 0xc5d12
	movs r1, #0	@ 000c5d12 0021
.org 0xc5d14
	movs r0, #1	@ 000c5d14 0120
.org 0xc5d16
	strb r0, [r4, #13]	@ 000c5d16 6073
.org 0xc5d18
	strb r1, [r4, #14]	@ 000c5d18 a173
