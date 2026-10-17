@ FUN_080bebf0  entry 0x080bebf0  size 20
.thumb
.org 0xbebf0
FUN_080bebf0:
	push {lr}	@ 000bebf0 00b5
.org 0xbebf2
	ldr r2, [pc, #16]	@ 000bebf2 044a
.org 0xbebf4
	ldrb r1, [r0, #16]	@ 000bebf4 017c
.org 0xbebf6
	lsls r1, r1, #2	@ 000bebf6 8900
.org 0xbebf8
	adds r1, r1, r2	@ 000bebf8 8918
.org 0xbebfa
	ldr r1, [r1, #0]	@ 000bebfa 0968
.org 0xbebfc
	bl 0x128f80	@ 000bebfc 6af0c0f9
.org 0xbec00
	pop {r0}	@ 000bec00 01bc
.org 0xbec02
	bx r0	@ 000bec02 0047
