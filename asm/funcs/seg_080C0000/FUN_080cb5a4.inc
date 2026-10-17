@ FUN_080cb5a4  entry 0x080cb5a4  size 20
.thumb
.org 0xcb5a4
FUN_080cb5a4:
	push {lr}	@ 000cb5a4 00b5
.org 0xcb5a6
	ldr r2, [pc, #16]	@ 000cb5a6 044a
.org 0xcb5a8
	ldrb r1, [r0, #16]	@ 000cb5a8 017c
.org 0xcb5aa
	lsls r1, r1, #2	@ 000cb5aa 8900
.org 0xcb5ac
	adds r1, r1, r2	@ 000cb5ac 8918
.org 0xcb5ae
	ldr r1, [r1, #0]	@ 000cb5ae 0968
.org 0xcb5b0
	bl 0x128f80	@ 000cb5b0 5df0e6fc
.org 0xcb5b4
	pop {r0}	@ 000cb5b4 01bc
.org 0xcb5b6
	bx r0	@ 000cb5b6 0047
