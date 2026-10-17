@ FUN_0811c1d8  entry 0x0811c1d8  size 12
.thumb
.org 0x11c1d8
FUN_0811c1d8:
	push {lr}	@ 0011c1d8 00b5
.org 0x11c1da
	movs r0, #65	@ 0011c1da 4120
.org 0x11c1dc
	bl 0x2624	@ 0011c1dc e6f622fa
.org 0x11c1e0
	pop {r0}	@ 0011c1e0 01bc
.org 0x11c1e2
	bx r0	@ 0011c1e2 0047
