@ FUN_080d1a78  entry 0x080d1a78  size 20
.thumb
.org 0xd1a78
FUN_080d1a78:
	push {lr}	@ 000d1a78 00b5
.org 0xd1a7a
	ldr r2, [pc, #16]	@ 000d1a7a 044a
.org 0xd1a7c
	ldrb r1, [r0, #16]	@ 000d1a7c 017c
.org 0xd1a7e
	lsls r1, r1, #2	@ 000d1a7e 8900
.org 0xd1a80
	adds r1, r1, r2	@ 000d1a80 8918
.org 0xd1a82
	ldr r1, [r1, #0]	@ 000d1a82 0968
.org 0xd1a84
	bl 0x128f80	@ 000d1a84 57f07cfa
.org 0xd1a88
	pop {r0}	@ 000d1a88 01bc
.org 0xd1a8a
	bx r0	@ 000d1a8a 0047
