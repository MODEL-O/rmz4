@ FUN_080c53d8  entry 0x080c53d8  size 20
.thumb
.org 0xc53d8
FUN_080c53d8:
	push {lr}	@ 000c53d8 00b5
.org 0xc53da
	ldr r2, [r0, #40]	@ 000c53da 826a
.org 0xc53dc
	adds r2, #180	@ 000c53dc b432
.org 0xc53de
	ldrb r1, [r2, #0]	@ 000c53de 1178
.org 0xc53e0
	subs r1, #1	@ 000c53e0 0139
.org 0xc53e2
	strb r1, [r2, #0]	@ 000c53e2 1170
.org 0xc53e4
	bl 0xbd3f8	@ 000c53e4 f8f708f8
.org 0xc53e8
	pop {r0}	@ 000c53e8 01bc
.org 0xc53ea
	bx r0	@ 000c53ea 0047
