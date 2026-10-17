@ FUN_08057a8c  entry 0x08057a8c  size 20
.thumb
.org 0x57a8c
FUN_08057a8c:
	push {lr}	@ 00057a8c 00b5
.org 0x57a8e
	ldr r2, [pc, #16]	@ 00057a8e 044a
.org 0x57a90
	ldrb r1, [r0, #14]	@ 00057a90 817b
.org 0x57a92
	lsls r1, r1, #2	@ 00057a92 8900
.org 0x57a94
	adds r1, r1, r2	@ 00057a94 8918
.org 0x57a96
	ldr r1, [r1, #0]	@ 00057a96 0968
.org 0x57a98
	bl 0x128f80	@ 00057a98 d1f072fa
.org 0x57a9c
	pop {r0}	@ 00057a9c 01bc
.org 0x57a9e
	bx r0	@ 00057a9e 0047
