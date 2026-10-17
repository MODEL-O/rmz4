@ FUN_080f2218  entry 0x080f2218  size 20
.thumb
.org 0xf2218
FUN_080f2218:
	push {lr}	@ 000f2218 00b5
.org 0xf221a
	ldr r2, [pc, #16]	@ 000f221a 044a
.org 0xf221c
	ldrb r1, [r0, #16]	@ 000f221c 017c
.org 0xf221e
	lsls r1, r1, #2	@ 000f221e 8900
.org 0xf2220
	adds r1, r1, r2	@ 000f2220 8918
.org 0xf2222
	ldr r1, [r1, #0]	@ 000f2222 0968
.org 0xf2224
	bl 0x128f80	@ 000f2224 36f0acfe
.org 0xf2228
	pop {r0}	@ 000f2228 01bc
.org 0xf222a
	bx r0	@ 000f222a 0047
