@ FUN_080c30e8  entry 0x080c30e8  size 20
.thumb
.org 0xc30e8
FUN_080c30e8:
	push {lr}	@ 000c30e8 00b5
.org 0xc30ea
	ldr r2, [pc, #16]	@ 000c30ea 044a
.org 0xc30ec
	ldrb r1, [r0, #16]	@ 000c30ec 017c
.org 0xc30ee
	lsls r1, r1, #2	@ 000c30ee 8900
.org 0xc30f0
	adds r1, r1, r2	@ 000c30f0 8918
.org 0xc30f2
	ldr r1, [r1, #0]	@ 000c30f2 0968
.org 0xc30f4
	bl 0x128f80	@ 000c30f4 65f044ff
.org 0xc30f8
	pop {r0}	@ 000c30f8 01bc
.org 0xc30fa
	bx r0	@ 000c30fa 0047
