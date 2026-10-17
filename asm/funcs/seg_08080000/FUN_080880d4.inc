@ FUN_080880d4  entry 0x080880d4  size 20
.thumb
.org 0x880d4
FUN_080880d4:
	push {lr}	@ 000880d4 00b5
.org 0x880d6
	ldr r2, [pc, #16]	@ 000880d6 044a
.org 0x880d8
	ldrb r1, [r0, #14]	@ 000880d8 817b
.org 0x880da
	lsls r1, r1, #2	@ 000880da 8900
.org 0x880dc
	adds r1, r1, r2	@ 000880dc 8918
.org 0x880de
	ldr r1, [r1, #0]	@ 000880de 0968
.org 0x880e0
	bl 0x128f80	@ 000880e0 a0f04eff
.org 0x880e4
	pop {r0}	@ 000880e4 01bc
.org 0x880e6
	bx r0	@ 000880e6 0047
