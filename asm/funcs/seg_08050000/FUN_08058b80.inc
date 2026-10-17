@ FUN_08058b80  entry 0x08058b80  size 20
.thumb
.org 0x58b80
FUN_08058b80:
	push {lr}	@ 00058b80 00b5
.org 0x58b82
	ldr r2, [pc, #16]	@ 00058b82 044a
.org 0x58b84
	ldrb r1, [r0, #14]	@ 00058b84 817b
.org 0x58b86
	lsls r1, r1, #2	@ 00058b86 8900
.org 0x58b88
	adds r1, r1, r2	@ 00058b88 8918
.org 0x58b8a
	ldr r1, [r1, #0]	@ 00058b8a 0968
.org 0x58b8c
	bl 0x128f80	@ 00058b8c d0f0f8f9
.org 0x58b90
	pop {r0}	@ 00058b90 01bc
.org 0x58b92
	bx r0	@ 00058b92 0047
