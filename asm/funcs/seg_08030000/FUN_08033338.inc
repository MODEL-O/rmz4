@ FUN_08033338  entry 0x08033338  size 20
.thumb
.org 0x33338
FUN_08033338:
	push {lr}	@ 00033338 00b5
.org 0x3333a
	ldr r2, [pc, #16]	@ 0003333a 044a
.org 0x3333c
	ldrb r1, [r0, #14]	@ 0003333c 817b
.org 0x3333e
	lsls r1, r1, #2	@ 0003333e 8900
.org 0x33340
	adds r1, r1, r2	@ 00033340 8918
.org 0x33342
	ldr r1, [r1, #0]	@ 00033342 0968
.org 0x33344
	bl 0x128f80	@ 00033344 f5f01cfe
.org 0x33348
	pop {r0}	@ 00033348 01bc
.org 0x3334a
	bx r0	@ 0003334a 0047
