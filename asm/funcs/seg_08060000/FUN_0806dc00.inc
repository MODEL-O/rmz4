@ FUN_0806dc00  entry 0x0806dc00  size 20
.thumb
.org 0x6dc00
FUN_0806dc00:
	push {lr}	@ 0006dc00 00b5
.org 0x6dc02
	ldr r2, [pc, #16]	@ 0006dc02 044a
.org 0x6dc04
	ldrb r1, [r0, #14]	@ 0006dc04 817b
.org 0x6dc06
	lsls r1, r1, #2	@ 0006dc06 8900
.org 0x6dc08
	adds r1, r1, r2	@ 0006dc08 8918
.org 0x6dc0a
	ldr r1, [r1, #0]	@ 0006dc0a 0968
.org 0x6dc0c
	bl 0x128f80	@ 0006dc0c bbf0b8f9
.org 0x6dc10
	pop {r0}	@ 0006dc10 01bc
.org 0x6dc12
	bx r0	@ 0006dc12 0047
