@ FUN_080dff50  entry 0x080dff50  size 20
.thumb
.org 0xdff50
FUN_080dff50:
	push {lr}	@ 000dff50 00b5
.org 0xdff52
	ldr r2, [pc, #16]	@ 000dff52 044a
.org 0xdff54
	ldrb r1, [r0, #16]	@ 000dff54 017c
.org 0xdff56
	lsls r1, r1, #2	@ 000dff56 8900
.org 0xdff58
	adds r1, r1, r2	@ 000dff58 8918
.org 0xdff5a
	ldr r1, [r1, #0]	@ 000dff5a 0968
.org 0xdff5c
	bl 0x128f80	@ 000dff5c 49f010f8
.org 0xdff60
	pop {r0}	@ 000dff60 01bc
.org 0xdff62
	bx r0	@ 000dff62 0047
