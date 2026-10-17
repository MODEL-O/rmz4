@ FUN_08072a90  entry 0x08072a90  size 20
.thumb
.org 0x72a90
FUN_08072a90:
	push {lr}	@ 00072a90 00b5
.org 0x72a92
	ldr r2, [pc, #16]	@ 00072a92 044a
.org 0x72a94
	ldrb r1, [r0, #14]	@ 00072a94 817b
.org 0x72a96
	lsls r1, r1, #2	@ 00072a96 8900
.org 0x72a98
	adds r1, r1, r2	@ 00072a98 8918
.org 0x72a9a
	ldr r1, [r1, #0]	@ 00072a9a 0968
.org 0x72a9c
	bl 0x128f80	@ 00072a9c b6f070fa
.org 0x72aa0
	pop {r0}	@ 00072aa0 01bc
.org 0x72aa2
	bx r0	@ 00072aa2 0047
