@ FUN_0806ec48  entry 0x0806ec48  size 20
.thumb
.org 0x6ec48
FUN_0806ec48:
	push {lr}	@ 0006ec48 00b5
.org 0x6ec4a
	ldr r2, [pc, #16]	@ 0006ec4a 044a
.org 0x6ec4c
	ldrb r1, [r0, #14]	@ 0006ec4c 817b
.org 0x6ec4e
	lsls r1, r1, #2	@ 0006ec4e 8900
.org 0x6ec50
	adds r1, r1, r2	@ 0006ec50 8918
.org 0x6ec52
	ldr r1, [r1, #0]	@ 0006ec52 0968
.org 0x6ec54
	bl 0x128f80	@ 0006ec54 baf094f9
.org 0x6ec58
	pop {r0}	@ 0006ec58 01bc
.org 0x6ec5a
	bx r0	@ 0006ec5a 0047
