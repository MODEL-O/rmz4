@ FUN_080534c0  entry 0x080534c0  size 54
.thumb
.org 0x534c0
FUN_080534c0:
	push {r4, lr}	@ 000534c0 10b5
.org 0x534c2
	adds r4, r0, #0	@ 000534c2 041c
.org 0x534c4
	ldrb r0, [r4, #15]	@ 000534c4 e07b
.org 0x534c6
	cmp r0, #0	@ 000534c6 0028
.org 0x534c8
	bne.n 0x534d8	@ 000534c8 06d1
.org 0x534ca
	ldr r1, [pc, #44]	@ 000534ca 0b49
.org 0x534cc
	adds r0, r4, #0	@ 000534cc 201c
.org 0x534ce
	bl 0x1cf00	@ 000534ce c9f717fd
.org 0x534d2
	ldrb r0, [r4, #15]	@ 000534d2 e07b
.org 0x534d4
	adds r0, #1	@ 000534d4 0130
.org 0x534d6
	strb r0, [r4, #15]	@ 000534d6 e073
.org 0x534d8
	adds r0, r4, #0	@ 000534d8 201c
.org 0x534da
	bl 0x1cff0	@ 000534da c9f789fd
.org 0x534de
	adds r0, r4, #0	@ 000534de 201c
.org 0x534e0
	adds r0, #115	@ 000534e0 7330
.org 0x534e2
	ldrb r0, [r0, #0]	@ 000534e2 0078
.org 0x534e4
	cmp r0, #3	@ 000534e4 0328
.org 0x534e6
	bne.n 0x534f0	@ 000534e6 03d1
.org 0x534e8
	movs r0, #0	@ 000534e8 0020
.org 0x534ea
	strb r0, [r4, #13]	@ 000534ea 6073
.org 0x534ec
	strb r0, [r4, #14]	@ 000534ec a073
.org 0x534ee
	strb r0, [r4, #15]	@ 000534ee e073
.org 0x534f0
	pop {r4}	@ 000534f0 10bc
.org 0x534f2
	pop {r0}	@ 000534f2 01bc
.org 0x534f4
	bx r0	@ 000534f4 0047
