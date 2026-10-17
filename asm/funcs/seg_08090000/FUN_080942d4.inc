@ FUN_080942d4  entry 0x080942d4  size 20
.thumb
.org 0x942d4
FUN_080942d4:
	push {lr}	@ 000942d4 00b5
.org 0x942d6
	ldr r2, [pc, #16]	@ 000942d6 044a
.org 0x942d8
	ldrb r1, [r0, #14]	@ 000942d8 817b
.org 0x942da
	lsls r1, r1, #2	@ 000942da 8900
.org 0x942dc
	adds r1, r1, r2	@ 000942dc 8918
.org 0x942de
	ldr r1, [r1, #0]	@ 000942de 0968
.org 0x942e0
	bl 0x128f80	@ 000942e0 94f04efe
.org 0x942e4
	pop {r0}	@ 000942e4 01bc
.org 0x942e6
	bx r0	@ 000942e6 0047
