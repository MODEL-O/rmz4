@ FUN_080cb178  entry 0x080cb178  size 20
.thumb
.org 0xcb178
FUN_080cb178:
	push {lr}	@ 000cb178 00b5
.org 0xcb17a
	ldr r2, [pc, #16]	@ 000cb17a 044a
.org 0xcb17c
	ldrb r1, [r0, #16]	@ 000cb17c 017c
.org 0xcb17e
	lsls r1, r1, #2	@ 000cb17e 8900
.org 0xcb180
	adds r1, r1, r2	@ 000cb180 8918
.org 0xcb182
	ldr r1, [r1, #0]	@ 000cb182 0968
.org 0xcb184
	bl 0x128f80	@ 000cb184 5df0fcfe
.org 0xcb188
	pop {r0}	@ 000cb188 01bc
.org 0xcb18a
	bx r0	@ 000cb18a 0047
