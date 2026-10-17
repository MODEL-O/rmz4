@ FUN_08070fb4  entry 0x08070fb4  size 20
.thumb
.org 0x70fb4
FUN_08070fb4:
	push {lr}	@ 00070fb4 00b5
.org 0x70fb6
	ldr r2, [pc, #16]	@ 00070fb6 044a
.org 0x70fb8
	ldrb r1, [r0, #14]	@ 00070fb8 817b
.org 0x70fba
	lsls r1, r1, #2	@ 00070fba 8900
.org 0x70fbc
	adds r1, r1, r2	@ 00070fbc 8918
.org 0x70fbe
	ldr r1, [r1, #0]	@ 00070fbe 0968
.org 0x70fc0
	bl 0x128f80	@ 00070fc0 b7f0deff
.org 0x70fc4
	pop {r0}	@ 00070fc4 01bc
.org 0x70fc6
	bx r0	@ 00070fc6 0047
