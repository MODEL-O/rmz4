@ FUN_080cb118  entry 0x080cb118  size 20
.thumb
.org 0xcb118
FUN_080cb118:
	push {lr}	@ 000cb118 00b5
.org 0xcb11a
	ldr r2, [pc, #16]	@ 000cb11a 044a
.org 0xcb11c
	ldrb r1, [r0, #16]	@ 000cb11c 017c
.org 0xcb11e
	lsls r1, r1, #2	@ 000cb11e 8900
.org 0xcb120
	adds r1, r1, r2	@ 000cb120 8918
.org 0xcb122
	ldr r1, [r1, #0]	@ 000cb122 0968
.org 0xcb124
	bl 0x128f80	@ 000cb124 5df02cff
.org 0xcb128
	pop {r0}	@ 000cb128 01bc
.org 0xcb12a
	bx r0	@ 000cb12a 0047
