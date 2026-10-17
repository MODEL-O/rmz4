@ FUN_08084cac  entry 0x08084cac  size 32
.thumb
.org 0x84cac
FUN_08084cac:
	push {r4, lr}	@ 00084cac 10b5
.org 0x84cae
	adds r4, r0, #0	@ 00084cae 041c
.org 0x84cb0
	ldrb r0, [r4, #14]	@ 00084cb0 a07b
.org 0x84cb2
	cmp r0, #0	@ 00084cb2 0028
.org 0x84cb4
	bne.n 0x84cc6	@ 00084cb4 07d1
.org 0x84cb6
	adds r0, r4, #0	@ 00084cb6 201c
.org 0x84cb8
	adds r0, #116	@ 00084cb8 7430
.org 0x84cba
	ldr r1, [pc, #16]	@ 00084cba 0449
.org 0x84cbc
	bl 0x5784	@ 00084cbc 80f762fd
.org 0x84cc0
	ldrb r0, [r4, #14]	@ 00084cc0 a07b
.org 0x84cc2
	adds r0, #1	@ 00084cc2 0130
.org 0x84cc4
	strb r0, [r4, #14]	@ 00084cc4 a073
.org 0x84cc6
	pop {r4}	@ 00084cc6 10bc
.org 0x84cc8
	pop {r0}	@ 00084cc8 01bc
.org 0x84cca
	bx r0	@ 00084cca 0047
