@ FUN_080dff68  entry 0x080dff68  size 20
.thumb
.org 0xdff68
FUN_080dff68:
	push {lr}	@ 000dff68 00b5
.org 0xdff6a
	ldr r2, [pc, #16]	@ 000dff6a 044a
.org 0xdff6c
	ldrb r1, [r0, #16]	@ 000dff6c 017c
.org 0xdff6e
	lsls r1, r1, #2	@ 000dff6e 8900
.org 0xdff70
	adds r1, r1, r2	@ 000dff70 8918
.org 0xdff72
	ldr r1, [r1, #0]	@ 000dff72 0968
.org 0xdff74
	bl 0x128f80	@ 000dff74 49f004f8
.org 0xdff78
	pop {r0}	@ 000dff78 01bc
.org 0xdff7a
	bx r0	@ 000dff7a 0047
