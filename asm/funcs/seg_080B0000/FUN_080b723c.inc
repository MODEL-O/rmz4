@ FUN_080b723c  entry 0x080b723c  size 20
.thumb
.org 0xb723c
FUN_080b723c:
	push {lr}	@ 000b723c 00b5
.org 0xb723e
	ldr r2, [pc, #16]	@ 000b723e 044a
.org 0xb7240
	ldrb r1, [r0, #16]	@ 000b7240 017c
.org 0xb7242
	lsls r1, r1, #2	@ 000b7242 8900
.org 0xb7244
	adds r1, r1, r2	@ 000b7244 8918
.org 0xb7246
	ldr r1, [r1, #0]	@ 000b7246 0968
.org 0xb7248
	bl 0x128f80	@ 000b7248 71f09afe
.org 0xb724c
	pop {r0}	@ 000b724c 01bc
.org 0xb724e
	bx r0	@ 000b724e 0047
