@ FUN_080cb9b0  entry 0x080cb9b0  size 20
.thumb
.org 0xcb9b0
FUN_080cb9b0:
	push {lr}	@ 000cb9b0 00b5
.org 0xcb9b2
	ldr r2, [pc, #16]	@ 000cb9b2 044a
.org 0xcb9b4
	ldrb r1, [r0, #16]	@ 000cb9b4 017c
.org 0xcb9b6
	lsls r1, r1, #2	@ 000cb9b6 8900
.org 0xcb9b8
	adds r1, r1, r2	@ 000cb9b8 8918
.org 0xcb9ba
	ldr r1, [r1, #0]	@ 000cb9ba 0968
.org 0xcb9bc
	bl 0x128f80	@ 000cb9bc 5df0e0fa
.org 0xcb9c0
	pop {r0}	@ 000cb9c0 01bc
.org 0xcb9c2
	bx r0	@ 000cb9c2 0047
