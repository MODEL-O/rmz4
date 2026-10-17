@ FUN_080a9cac  entry 0x080a9cac  size 24
.thumb
.org 0xa9cac
FUN_080a9cac:
	push {lr}	@ 000a9cac 00b5
.org 0xa9cae
	adds r1, r0, #0	@ 000a9cae 011c
.org 0xa9cb0
	ldrb r0, [r1, #18]	@ 000a9cb0 887c
.org 0xa9cb2
	cmp r0, #0	@ 000a9cb2 0028
.org 0xa9cb4
	beq.n 0xa9cbe	@ 000a9cb4 03d0
.org 0xa9cb6
	subs r0, #1	@ 000a9cb6 0138
.org 0xa9cb8
	strb r0, [r1, #18]	@ 000a9cb8 8874
.org 0xa9cba
	movs r0, #0	@ 000a9cba 0020
.org 0xa9cbc
	b.n 0xa9cc0	@ 000a9cbc 00e0
.org 0xa9cbe
	movs r0, #1	@ 000a9cbe 0120
.org 0xa9cc0
	pop {r1}	@ 000a9cc0 02bc
.org 0xa9cc2
	bx r1	@ 000a9cc2 0847
