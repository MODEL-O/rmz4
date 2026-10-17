@ FUN_080cb544  entry 0x080cb544  size 20
.thumb
.org 0xcb544
FUN_080cb544:
	push {lr}	@ 000cb544 00b5
.org 0xcb546
	ldr r2, [pc, #16]	@ 000cb546 044a
.org 0xcb548
	ldrb r1, [r0, #16]	@ 000cb548 017c
.org 0xcb54a
	lsls r1, r1, #2	@ 000cb54a 8900
.org 0xcb54c
	adds r1, r1, r2	@ 000cb54c 8918
.org 0xcb54e
	ldr r1, [r1, #0]	@ 000cb54e 0968
.org 0xcb550
	bl 0x128f80	@ 000cb550 5df016fd
.org 0xcb554
	pop {r0}	@ 000cb554 01bc
.org 0xcb556
	bx r0	@ 000cb556 0047
