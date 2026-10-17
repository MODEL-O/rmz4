@ FUN_08030e50  entry 0x08030e50  size 20
.thumb
.org 0x30e50
FUN_08030e50:
	push {lr}	@ 00030e50 00b5
.org 0x30e52
	ldr r2, [pc, #16]	@ 00030e52 044a
.org 0x30e54
	ldrb r1, [r0, #14]	@ 00030e54 817b
.org 0x30e56
	lsls r1, r1, #2	@ 00030e56 8900
.org 0x30e58
	adds r1, r1, r2	@ 00030e58 8918
.org 0x30e5a
	ldr r1, [r1, #0]	@ 00030e5a 0968
.org 0x30e5c
	bl 0x128f80	@ 00030e5c f8f090f8
.org 0x30e60
	pop {r0}	@ 00030e60 01bc
.org 0x30e62
	bx r0	@ 00030e62 0047
