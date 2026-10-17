@ FUN_080e1d94  entry 0x080e1d94  size 20
.thumb
.org 0xe1d94
FUN_080e1d94:
	push {lr}	@ 000e1d94 00b5
.org 0xe1d96
	ldr r2, [pc, #16]	@ 000e1d96 044a
.org 0xe1d98
	ldrb r1, [r0, #16]	@ 000e1d98 017c
.org 0xe1d9a
	lsls r1, r1, #2	@ 000e1d9a 8900
.org 0xe1d9c
	adds r1, r1, r2	@ 000e1d9c 8918
.org 0xe1d9e
	ldr r1, [r1, #0]	@ 000e1d9e 0968
.org 0xe1da0
	bl 0x128f80	@ 000e1da0 47f0eef8
.org 0xe1da4
	pop {r0}	@ 000e1da4 01bc
.org 0xe1da6
	bx r0	@ 000e1da6 0047
