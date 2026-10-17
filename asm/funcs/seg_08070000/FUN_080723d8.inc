@ FUN_080723d8  entry 0x080723d8  size 20
.thumb
.org 0x723d8
FUN_080723d8:
	push {lr}	@ 000723d8 00b5
.org 0x723da
	ldr r2, [pc, #16]	@ 000723da 044a
.org 0x723dc
	ldrb r1, [r0, #14]	@ 000723dc 817b
.org 0x723de
	lsls r1, r1, #2	@ 000723de 8900
.org 0x723e0
	adds r1, r1, r2	@ 000723e0 8918
.org 0x723e2
	ldr r1, [r1, #0]	@ 000723e2 0968
.org 0x723e4
	bl 0x128f80	@ 000723e4 b6f0ccfd
.org 0x723e8
	pop {r0}	@ 000723e8 01bc
.org 0x723ea
	bx r0	@ 000723ea 0047
