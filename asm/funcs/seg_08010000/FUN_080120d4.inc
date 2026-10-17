@ FUN_080120d4  entry 0x080120d4  size 24
.thumb
.org 0x120d4
FUN_080120d4:
	push {lr}	@ 000120d4 00b5
.org 0x120d6
	movs r0, #94	@ 000120d6 5e20
.org 0x120d8
	bl 0x2624	@ 000120d8 f0f7a4fa
.org 0x120dc
	movs r0, #95	@ 000120dc 5f20
.org 0x120de
	bl 0x2624	@ 000120de f0f7a1fa
.org 0x120e2
	movs r0, #113	@ 000120e2 7120
.org 0x120e4
	bl 0x2624	@ 000120e4 f0f79efa
.org 0x120e8
	pop {r0}	@ 000120e8 01bc
.org 0x120ea
	bx r0	@ 000120ea 0047
