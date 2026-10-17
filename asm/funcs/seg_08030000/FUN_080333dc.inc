@ FUN_080333dc  entry 0x080333dc  size 20
.thumb
.org 0x333dc
FUN_080333dc:
	push {lr}	@ 000333dc 00b5
.org 0x333de
	ldr r2, [pc, #16]	@ 000333de 044a
.org 0x333e0
	ldrb r1, [r0, #14]	@ 000333e0 817b
.org 0x333e2
	lsls r1, r1, #2	@ 000333e2 8900
.org 0x333e4
	adds r1, r1, r2	@ 000333e4 8918
.org 0x333e6
	ldr r1, [r1, #0]	@ 000333e6 0968
.org 0x333e8
	bl 0x128f80	@ 000333e8 f5f0cafd
.org 0x333ec
	pop {r0}	@ 000333ec 01bc
.org 0x333ee
	bx r0	@ 000333ee 0047
