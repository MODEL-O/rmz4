@ FUN_080f74a0  entry 0x080f74a0  size 36
.thumb
.org 0xf74a0
FUN_080f74a0:
	push {r4, r5, lr}	@ 000f74a0 30b5
.org 0xf74a2
	adds r4, r0, #0	@ 000f74a2 041c
.org 0xf74a4
	ldr r5, [r4, #40]	@ 000f74a4 a56a
.org 0xf74a6
	bl 0xf7508	@ 000f74a6 00f02ff8
.org 0xf74aa
	cmp r5, #0	@ 000f74aa 002d
.org 0xf74ac
	beq.n 0xf74b8	@ 000f74ac 04d0
.org 0xf74ae
	adds r1, r5, #0	@ 000f74ae 291c
.org 0xf74b0
	adds r1, #181	@ 000f74b0 b531
.org 0xf74b2
	ldrb r0, [r1, #0]	@ 000f74b2 0878
.org 0xf74b4
	subs r0, #1	@ 000f74b4 0138
.org 0xf74b6
	strb r0, [r1, #0]	@ 000f74b6 0870
.org 0xf74b8
	adds r0, r4, #0	@ 000f74b8 201c
.org 0xf74ba
	bl 0xe954c	@ 000f74ba f2f747f8
.org 0xf74be
	pop {r4, r5}	@ 000f74be 30bc
.org 0xf74c0
	pop {r0}	@ 000f74c0 01bc
.org 0xf74c2
	bx r0	@ 000f74c2 0047
