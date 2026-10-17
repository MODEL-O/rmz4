@ FUN_080ca558  entry 0x080ca558  size 20
.thumb
.org 0xca558
FUN_080ca558:
	push {lr}	@ 000ca558 00b5
.org 0xca55a
	ldr r2, [pc, #16]	@ 000ca55a 044a
.org 0xca55c
	ldrb r1, [r0, #16]	@ 000ca55c 017c
.org 0xca55e
	lsls r1, r1, #2	@ 000ca55e 8900
.org 0xca560
	adds r1, r1, r2	@ 000ca560 8918
.org 0xca562
	ldr r1, [r1, #0]	@ 000ca562 0968
.org 0xca564
	bl 0x128f80	@ 000ca564 5ef00cfd
.org 0xca568
	pop {r0}	@ 000ca568 01bc
.org 0xca56a
	bx r0	@ 000ca56a 0047
