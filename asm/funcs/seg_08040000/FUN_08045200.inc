@ FUN_08045200  entry 0x08045200  size 20
.thumb
.org 0x45200
FUN_08045200:
	push {lr}	@ 00045200 00b5
.org 0x45202
	ldr r2, [pc, #16]	@ 00045202 044a
.org 0x45204
	ldrb r1, [r0, #16]	@ 00045204 017c
.org 0x45206
	lsls r1, r1, #2	@ 00045206 8900
.org 0x45208
	adds r1, r1, r2	@ 00045208 8918
.org 0x4520a
	ldr r1, [r1, #0]	@ 0004520a 0968
.org 0x4520c
	bl 0x128f80	@ 0004520c e3f0b8fe
.org 0x45210
	pop {r0}	@ 00045210 01bc
.org 0x45212
	bx r0	@ 00045212 0047
