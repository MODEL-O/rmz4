@ FUN_080483f8  entry 0x080483f8  size 20
.thumb
.org 0x483f8
FUN_080483f8:
	push {lr}	@ 000483f8 00b5
.org 0x483fa
	ldr r2, [pc, #16]	@ 000483fa 044a
.org 0x483fc
	ldrb r1, [r0, #16]	@ 000483fc 017c
.org 0x483fe
	lsls r1, r1, #2	@ 000483fe 8900
.org 0x48400
	adds r1, r1, r2	@ 00048400 8918
.org 0x48402
	ldr r1, [r1, #0]	@ 00048402 0968
.org 0x48404
	bl 0x128f80	@ 00048404 e0f0bcfd
.org 0x48408
	pop {r0}	@ 00048408 01bc
.org 0x4840a
	bx r0	@ 0004840a 0047
