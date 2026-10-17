@ FUN_080d1a90  entry 0x080d1a90  size 20
.thumb
.org 0xd1a90
FUN_080d1a90:
	push {lr}	@ 000d1a90 00b5
.org 0xd1a92
	ldr r2, [pc, #16]	@ 000d1a92 044a
.org 0xd1a94
	ldrb r1, [r0, #16]	@ 000d1a94 017c
.org 0xd1a96
	lsls r1, r1, #2	@ 000d1a96 8900
.org 0xd1a98
	adds r1, r1, r2	@ 000d1a98 8918
.org 0xd1a9a
	ldr r1, [r1, #0]	@ 000d1a9a 0968
.org 0xd1a9c
	bl 0x128f80	@ 000d1a9c 57f070fa
.org 0xd1aa0
	pop {r0}	@ 000d1aa0 01bc
.org 0xd1aa2
	bx r0	@ 000d1aa2 0047
