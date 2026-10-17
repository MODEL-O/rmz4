@ FUN_0805e230  entry 0x0805e230  size 20
.thumb
.org 0x5e230
FUN_0805e230:
	push {lr}	@ 0005e230 00b5
.org 0x5e232
	ldr r2, [pc, #16]	@ 0005e232 044a
.org 0x5e234
	ldrb r1, [r0, #14]	@ 0005e234 817b
.org 0x5e236
	lsls r1, r1, #2	@ 0005e236 8900
.org 0x5e238
	adds r1, r1, r2	@ 0005e238 8918
.org 0x5e23a
	ldr r1, [r1, #0]	@ 0005e23a 0968
.org 0x5e23c
	bl 0x128f80	@ 0005e23c caf0a0fe
.org 0x5e240
	pop {r0}	@ 0005e240 01bc
.org 0x5e242
	bx r0	@ 0005e242 0047
