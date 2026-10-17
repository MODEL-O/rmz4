@ FUN_08070cac  entry 0x08070cac  size 70
.thumb
.org 0x70cac
FUN_08070cac:
	push {r4, lr}	@ 00070cac 10b5
.org 0x70cae
	adds r2, r0, #0	@ 00070cae 021c
.org 0x70cb0
	ldrb r0, [r2, #10]	@ 00070cb0 907a
.org 0x70cb2
	lsrs r3, r0, #4	@ 00070cb2 0309
.org 0x70cb4
	movs r0, #1	@ 00070cb4 0120
.org 0x70cb6
	ands r3, r0	@ 00070cb6 0340
.org 0x70cb8
	movs r4, #0	@ 00070cb8 0024
.org 0x70cba
	ldr r0, [pc, #24]	@ 00070cba 0648
.org 0x70cbc
	ldr r0, [r0, #0]	@ 00070cbc 0068
.org 0x70cbe
	ldr r1, [r2, #84]	@ 00070cbe 516d
.org 0x70cc0
	ldr r0, [r0, #84]	@ 00070cc0 406d
.org 0x70cc2
	cmp r1, r0	@ 00070cc2 8142
.org 0x70cc4
	bge.n 0x70cc8	@ 00070cc4 00da
.org 0x70cc6
	movs r4, #1	@ 00070cc6 0124
.org 0x70cc8
	cmp r4, r3	@ 00070cc8 9c42
.org 0x70cca
	beq.n 0x70cd8	@ 00070cca 05d0
.org 0x70ccc
	ldrb r0, [r2, #14]	@ 00070ccc 907b
.org 0x70cce
	adds r0, #1	@ 00070cce 0130
.org 0x70cd0
	b.n 0x70cdc	@ 00070cd0 04e0
.org 0x70cd2
	.byte 0x00	@ 00070cd2 data
.org 0x70cd3
	.byte 0x00	@ 00070cd3 data
.org 0x70cd4
	.byte 0xf0,0xdb,0x02,0x02	@ 00070cd4 data
.org 0x70cd8
	ldrb r0, [r2, #14]	@ 00070cd8 907b
.org 0x70cda
	adds r0, #3	@ 00070cda 0330
.org 0x70cdc
	strb r0, [r2, #14]	@ 00070cdc 9073
.org 0x70cde
	movs r0, #0	@ 00070cde 0020
.org 0x70ce0
	strb r0, [r2, #15]	@ 00070ce0 d073
.org 0x70ce2
	ldr r1, [pc, #20]	@ 00070ce2 0549
.org 0x70ce4
	ldrb r0, [r2, #13]	@ 00070ce4 507b
.org 0x70ce6
	lsls r0, r0, #2	@ 00070ce6 8000
.org 0x70ce8
	adds r0, r0, r1	@ 00070ce8 4018
.org 0x70cea
	ldr r1, [r0, #0]	@ 00070cea 0168
.org 0x70cec
	adds r0, r2, #0	@ 00070cec 101c
.org 0x70cee
	bl 0x128f80	@ 00070cee b8f047f9
