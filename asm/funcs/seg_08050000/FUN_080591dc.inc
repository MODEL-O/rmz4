@ FUN_080591dc  entry 0x080591dc  size 20
.thumb
.org 0x591dc
FUN_080591dc:
	push {lr}	@ 000591dc 00b5
.org 0x591de
	ldr r2, [pc, #16]	@ 000591de 044a
.org 0x591e0
	ldrb r1, [r0, #13]	@ 000591e0 417b
.org 0x591e2
	lsls r1, r1, #2	@ 000591e2 8900
.org 0x591e4
	adds r1, r1, r2	@ 000591e4 8918
.org 0x591e6
	ldr r1, [r1, #0]	@ 000591e6 0968
.org 0x591e8
	bl 0x128f80	@ 000591e8 cff0cafe
.org 0x591ec
	pop {r0}	@ 000591ec 01bc
.org 0x591ee
	bx r0	@ 000591ee 0047
