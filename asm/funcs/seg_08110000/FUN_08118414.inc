@ FUN_08118414  entry 0x08118414  size 20
.thumb
.org 0x118414
FUN_08118414:
	push {lr}	@ 00118414 00b5
.org 0x118416
	ldr r2, [pc, #16]	@ 00118416 044a
.org 0x118418
	ldrb r1, [r0, #2]	@ 00118418 8178
.org 0x11841a
	lsls r1, r1, #2	@ 0011841a 8900
.org 0x11841c
	adds r1, r1, r2	@ 0011841c 8918
.org 0x11841e
	ldr r1, [r1, #0]	@ 0011841e 0968
.org 0x118420
	bl 0x128f80	@ 00118420 10f0aefd
.org 0x118424
	pop {r0}	@ 00118424 01bc
.org 0x118426
	bx r0	@ 00118426 0047
