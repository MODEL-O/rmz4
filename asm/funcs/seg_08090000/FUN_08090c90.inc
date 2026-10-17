@ FUN_08090c90  entry 0x08090c90  size 98
.thumb
.org 0x90c90
FUN_08090c90:
	push {r4, r5, r6, r7, lr}	@ 00090c90 f0b5
.org 0x90c92
	adds r7, r0, #0	@ 00090c92 071c
.org 0x90c94
	ldr r6, [r7, #40]	@ 00090c94 be6a
.org 0x90c96
	ldrb r0, [r6, #12]	@ 00090c96 307b
.org 0x90c98
	cmp r0, #1	@ 00090c98 0128
.org 0x90c9a
	bhi.n 0x90ca8	@ 00090c9a 05d8
.org 0x90c9c
	ldr r0, [r6, #12]	@ 00090c9c f068
.org 0x90c9e
	ldr r1, [pc, #36]	@ 00090c9e 0949
.org 0x90ca0
	ands r0, r1	@ 00090ca0 0840
.org 0x90ca2
	ldr r1, [pc, #36]	@ 00090ca2 0949
.org 0x90ca4
	cmp r0, r1	@ 00090ca4 8842
.org 0x90ca6
	beq.n 0x90cd0	@ 00090ca6 13d0
.org 0x90ca8
	ldr r1, [pc, #32]	@ 00090ca8 0849
.org 0x90caa
	ldrb r0, [r7, #9]	@ 00090caa 787a
.org 0x90cac
	lsls r0, r0, #2	@ 00090cac 8000
.org 0x90cae
	adds r0, r0, r1	@ 00090cae 4018
.org 0x90cb0
	movs r1, #2	@ 00090cb0 0221
.org 0x90cb2
	str r1, [r7, #12]	@ 00090cb2 f960
.org 0x90cb4
	ldr r0, [r0, #0]	@ 00090cb4 0068
.org 0x90cb6
	ldr r0, [r0, #8]	@ 00090cb6 8068
.org 0x90cb8
	str r0, [r7, #20]	@ 00090cb8 7861
.org 0x90cba
	adds r0, r7, #0	@ 00090cba 381c
.org 0x90cbc
	bl 0x90d54	@ 00090cbc 00f04af8
.org 0x90cc0
	b.n 0x90d06	@ 00090cc0 21e0
.org 0x90cc2
	.byte 0x00	@ 00090cc2 data
.org 0x90cc3
	.byte 0x00	@ 00090cc3 data
.org 0x90cc4
	.byte 0x00,0xff,0xff,0x00	@ 00090cc4 data
.org 0x90cc8
	.byte 0x00,0x09,0x03,0x00	@ 00090cc8 data
.org 0x90ccc
	.byte 0x40,0xdb,0x85,0x08	@ 00090ccc data
.org 0x90cd0
	adds r0, r7, #0	@ 00090cd0 381c
.org 0x90cd2
	bl 0x1cff0	@ 00090cd2 8cf78df9
.org 0x90cd6
	ldr r4, [r6, #84]	@ 00090cd6 746d
.org 0x90cd8
	ldr r0, [r6, #88]	@ 00090cd8 b06d
.org 0x90cda
	ldr r1, [pc, #20]	@ 00090cda 0549
.org 0x90cdc
	adds r5, r0, r1	@ 00090cdc 4518
.org 0x90cde
	ldr r0, [pc, #20]	@ 00090cde 0548
.org 0x90ce0
	adds r1, r5, r0	@ 00090ce0 2918
.org 0x90ce2
	ldr r0, [pc, #20]	@ 00090ce2 0548
.org 0x90ce4
	ldr r0, [r0, #60]	@ 00090ce4 c06b
.org 0x90ce6
	subs r0, r1, r0	@ 00090ce6 081a
.org 0x90ce8
	cmp r0, #0	@ 00090ce8 0028
.org 0x90cea
	ble.n 0x90cfc	@ 00090cea 07dd
.org 0x90cec
	asrs r0, r0, #15	@ 00090cec c013
.org 0x90cee
	b.n 0x90cfe	@ 00090cee 06e0
.org 0x90cf0
	.byte 0x00,0xa8,0xff,0xff	@ 00090cf0 data
