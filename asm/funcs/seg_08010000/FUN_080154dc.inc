@ FUN_080154dc  entry 0x080154dc  size 48
.thumb
.org 0x154dc
FUN_080154dc:
	push {lr}	@ 000154dc 00b5
.org 0x154de
	movs r0, #75	@ 000154de 4b20
.org 0x154e0
	bl 0x2624	@ 000154e0 edf7a0f8
.org 0x154e4
	movs r0, #76	@ 000154e4 4c20
.org 0x154e6
	bl 0x2624	@ 000154e6 edf79df8
.org 0x154ea
	movs r0, #77	@ 000154ea 4d20
.org 0x154ec
	bl 0x2624	@ 000154ec edf79af8
.org 0x154f0
	movs r0, #78	@ 000154f0 4e20
.org 0x154f2
	bl 0x2624	@ 000154f2 edf797f8
.org 0x154f6
	movs r0, #79	@ 000154f6 4f20
.org 0x154f8
	bl 0x2624	@ 000154f8 edf794f8
.org 0x154fc
	movs r0, #80	@ 000154fc 5020
.org 0x154fe
	bl 0x2624	@ 000154fe edf791f8
.org 0x15502
	movs r0, #182	@ 00015502 b620
.org 0x15504
	bl 0x2624	@ 00015504 edf78ef8
.org 0x15508
	pop {r0}	@ 00015508 01bc
.org 0x1550a
	bx r0	@ 0001550a 0047
