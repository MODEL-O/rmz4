@ FUN_08045218  entry 0x08045218  size 20
.thumb
.org 0x45218
FUN_08045218:
	push {lr}	@ 00045218 00b5
.org 0x4521a
	ldr r2, [pc, #16]	@ 0004521a 044a
.org 0x4521c
	ldrb r1, [r0, #16]	@ 0004521c 017c
.org 0x4521e
	lsls r1, r1, #2	@ 0004521e 8900
.org 0x45220
	adds r1, r1, r2	@ 00045220 8918
.org 0x45222
	ldr r1, [r1, #0]	@ 00045222 0968
.org 0x45224
	bl 0x128f80	@ 00045224 e3f0acfe
.org 0x45228
	pop {r0}	@ 00045228 01bc
.org 0x4522a
	bx r0	@ 0004522a 0047
