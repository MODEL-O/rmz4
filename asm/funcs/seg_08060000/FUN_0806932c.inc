@ FUN_0806932c  entry 0x0806932c  size 20
.thumb
.org 0x6932c
FUN_0806932c:
	push {lr}	@ 0006932c 00b5
.org 0x6932e
	ldr r2, [pc, #16]	@ 0006932e 044a
.org 0x69330
	ldrb r1, [r0, #14]	@ 00069330 817b
.org 0x69332
	lsls r1, r1, #2	@ 00069332 8900
.org 0x69334
	adds r1, r1, r2	@ 00069334 8918
.org 0x69336
	ldr r1, [r1, #0]	@ 00069336 0968
.org 0x69338
	bl 0x128f80	@ 00069338 bff022fe
.org 0x6933c
	pop {r0}	@ 0006933c 01bc
.org 0x6933e
	bx r0	@ 0006933e 0047
