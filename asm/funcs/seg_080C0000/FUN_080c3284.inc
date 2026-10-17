@ FUN_080c3284  entry 0x080c3284  size 20
.thumb
.org 0xc3284
FUN_080c3284:
	push {lr}	@ 000c3284 00b5
.org 0xc3286
	ldr r2, [pc, #16]	@ 000c3286 044a
.org 0xc3288
	ldrb r1, [r0, #16]	@ 000c3288 017c
.org 0xc328a
	lsls r1, r1, #2	@ 000c328a 8900
.org 0xc328c
	adds r1, r1, r2	@ 000c328c 8918
.org 0xc328e
	ldr r1, [r1, #0]	@ 000c328e 0968
.org 0xc3290
	bl 0x128f80	@ 000c3290 65f076fe
.org 0xc3294
	pop {r0}	@ 000c3294 01bc
.org 0xc3296
	bx r0	@ 000c3296 0047
