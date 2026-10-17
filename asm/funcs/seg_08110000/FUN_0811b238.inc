@ FUN_0811b238  entry 0x0811b238  size 20
.thumb
.org 0x11b238
FUN_0811b238:
	push {lr}	@ 0011b238 00b5
.org 0x11b23a
	ldr r2, [pc, #16]	@ 0011b23a 044a
.org 0x11b23c
	ldrb r1, [r0, #2]	@ 0011b23c 8178
.org 0x11b23e
	lsls r1, r1, #2	@ 0011b23e 8900
.org 0x11b240
	adds r1, r1, r2	@ 0011b240 8918
.org 0x11b242
	ldr r1, [r1, #0]	@ 0011b242 0968
.org 0x11b244
	bl 0x128f80	@ 0011b244 0df09cfe
.org 0x11b248
	pop {r0}	@ 0011b248 01bc
.org 0x11b24a
	bx r0	@ 0011b24a 0047
