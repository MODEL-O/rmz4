@ FUN_080c4ec4  entry 0x080c4ec4  size 20
.thumb
.org 0xc4ec4
FUN_080c4ec4:
	push {lr}	@ 000c4ec4 00b5
.org 0xc4ec6
	ldr r2, [pc, #16]	@ 000c4ec6 044a
.org 0xc4ec8
	ldrb r1, [r0, #13]	@ 000c4ec8 417b
.org 0xc4eca
	lsls r1, r1, #2	@ 000c4eca 8900
.org 0xc4ecc
	adds r1, r1, r2	@ 000c4ecc 8918
.org 0xc4ece
	ldr r1, [r1, #0]	@ 000c4ece 0968
.org 0xc4ed0
	bl 0x128f80	@ 000c4ed0 64f056f8
.org 0xc4ed4
	pop {r0}	@ 000c4ed4 01bc
.org 0xc4ed6
	bx r0	@ 000c4ed6 0047
