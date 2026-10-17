@ FUN_08126988  entry 0x08126988  size 44
.thumb
.org 0x126988
FUN_08126988:
	push {lr}	@ 00126988 00b5
.org 0x12698a
	ldr r1, [pc, #16]	@ 0012698a 0449
.org 0x12698c
	adds r2, r0, r1	@ 0012698c 4218
.org 0x12698e
	ldr r3, [r2, #20]	@ 0012698e 5369
.org 0x126990
	cmp r3, #0	@ 00126990 002b
.org 0x126992
	beq.n 0x1269a0	@ 00126992 05d0
.org 0x126994
	subs r0, r3, #1	@ 00126994 581e
.org 0x126996
	str r0, [r2, #20]	@ 00126996 5061
.org 0x126998
	b.n 0x1269b4	@ 00126998 0ce0
.org 0x12699a
	.byte 0x00	@ 0012699a data
.org 0x12699b
	.byte 0x00	@ 0012699b data
.org 0x12699c
	.byte 0xcc,0x0d,0x00,0x00	@ 0012699c data
.org 0x1269a0
	ldr r0, [r2, #0]	@ 001269a0 1068
.org 0x1269a2
	movs r1, #149	@ 001269a2 9521
.org 0x1269a4
	lsls r1, r1, #2	@ 001269a4 8900
.org 0x1269a6
	adds r0, r0, r1	@ 001269a6 4018
.org 0x1269a8
	movs r1, #1	@ 001269a8 0121
.org 0x1269aa
	strb r1, [r0, #0]	@ 001269aa 0170
.org 0x1269ac
	ldrb r0, [r2, #24]	@ 001269ac 107e
.org 0x1269ae
	adds r0, #1	@ 001269ae 0130
.org 0x1269b0
	strb r0, [r2, #24]	@ 001269b0 1076
.org 0x1269b2
	strb r3, [r2, #25]	@ 001269b2 5376
