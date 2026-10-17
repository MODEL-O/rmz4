@ FUN_080dff80  entry 0x080dff80  size 20
.thumb
.org 0xdff80
FUN_080dff80:
	push {lr}	@ 000dff80 00b5
.org 0xdff82
	ldr r2, [pc, #16]	@ 000dff82 044a
.org 0xdff84
	ldrb r1, [r0, #16]	@ 000dff84 017c
.org 0xdff86
	lsls r1, r1, #2	@ 000dff86 8900
.org 0xdff88
	adds r1, r1, r2	@ 000dff88 8918
.org 0xdff8a
	ldr r1, [r1, #0]	@ 000dff8a 0968
.org 0xdff8c
	bl 0x128f80	@ 000dff8c 48f0f8ff
.org 0xdff90
	pop {r0}	@ 000dff90 01bc
.org 0xdff92
	bx r0	@ 000dff92 0047
