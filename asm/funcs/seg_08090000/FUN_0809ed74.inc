@ FUN_0809ed74  entry 0x0809ed74  size 56
.thumb
.org 0x9ed74
FUN_0809ed74:
	push {r4, lr}	@ 0009ed74 10b5
.org 0x9ed76
	adds r4, r0, #0	@ 0009ed76 041c
.org 0x9ed78
	ldrb r0, [r4, #15]	@ 0009ed78 e07b
.org 0x9ed7a
	cmp r0, #0	@ 0009ed7a 0028
.org 0x9ed7c
	bne.n 0x9ed8c	@ 0009ed7c 06d1
.org 0x9ed7e
	ldr r1, [pc, #44]	@ 0009ed7e 0b49
.org 0x9ed80
	adds r0, r4, #0	@ 0009ed80 201c
.org 0x9ed82
	bl 0x1cf00	@ 0009ed82 7ef7bdf8
.org 0x9ed86
	ldrb r0, [r4, #15]	@ 0009ed86 e07b
.org 0x9ed88
	adds r0, #1	@ 0009ed88 0130
.org 0x9ed8a
	strb r0, [r4, #15]	@ 0009ed8a e073
.org 0x9ed8c
	adds r0, r4, #0	@ 0009ed8c 201c
.org 0x9ed8e
	bl 0x1cff0	@ 0009ed8e 7ef72ff9
.org 0x9ed92
	adds r0, r4, #0	@ 0009ed92 201c
.org 0x9ed94
	adds r0, #115	@ 0009ed94 7330
.org 0x9ed96
	ldrb r0, [r0, #0]	@ 0009ed96 0078
.org 0x9ed98
	cmp r0, #3	@ 0009ed98 0328
.org 0x9ed9a
	bne.n 0x9eda6	@ 0009ed9a 04d1
.org 0x9ed9c
	movs r1, #0	@ 0009ed9c 0021
.org 0x9ed9e
	movs r0, #2	@ 0009ed9e 0220
.org 0x9eda0
	strb r0, [r4, #13]	@ 0009eda0 6073
.org 0x9eda2
	strb r1, [r4, #14]	@ 0009eda2 a173
.org 0x9eda4
	strb r1, [r4, #15]	@ 0009eda4 e173
.org 0x9eda6
	pop {r4}	@ 0009eda6 10bc
.org 0x9eda8
	pop {r0}	@ 0009eda8 01bc
.org 0x9edaa
	bx r0	@ 0009edaa 0047
