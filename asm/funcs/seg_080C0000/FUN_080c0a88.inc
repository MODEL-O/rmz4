@ FUN_080c0a88  entry 0x080c0a88  size 20
.thumb
.org 0xc0a88
FUN_080c0a88:
	push {lr}	@ 000c0a88 00b5
.org 0xc0a8a
	ldr r2, [pc, #16]	@ 000c0a8a 044a
.org 0xc0a8c
	ldrb r1, [r0, #14]	@ 000c0a8c 817b
.org 0xc0a8e
	lsls r1, r1, #2	@ 000c0a8e 8900
.org 0xc0a90
	adds r1, r1, r2	@ 000c0a90 8918
.org 0xc0a92
	ldr r1, [r1, #0]	@ 000c0a92 0968
.org 0xc0a94
	bl 0x128f80	@ 000c0a94 68f074fa
.org 0xc0a98
	pop {r0}	@ 000c0a98 01bc
.org 0xc0a9a
	bx r0	@ 000c0a9a 0047
