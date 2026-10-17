@ FUN_080695d8  entry 0x080695d8  size 20
.thumb
.org 0x695d8
FUN_080695d8:
	push {lr}	@ 000695d8 00b5
.org 0x695da
	ldr r2, [pc, #16]	@ 000695da 044a
.org 0x695dc
	ldrb r1, [r0, #14]	@ 000695dc 817b
.org 0x695de
	lsls r1, r1, #2	@ 000695de 8900
.org 0x695e0
	adds r1, r1, r2	@ 000695e0 8918
.org 0x695e2
	ldr r1, [r1, #0]	@ 000695e2 0968
.org 0x695e4
	bl 0x128f80	@ 000695e4 bff0ccfc
.org 0x695e8
	pop {r0}	@ 000695e8 01bc
.org 0x695ea
	bx r0	@ 000695ea 0047
