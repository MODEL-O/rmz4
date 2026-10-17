@ FUN_0811b8f8  entry 0x0811b8f8  size 12
.thumb
.org 0x11b8f8
FUN_0811b8f8:
	push {lr}	@ 0011b8f8 00b5
.org 0x11b8fa
	movs r0, #51	@ 0011b8fa 3320
.org 0x11b8fc
	bl 0x2624	@ 0011b8fc e6f692fe
.org 0x11b900
	pop {r0}	@ 0011b900 01bc
.org 0x11b902
	bx r0	@ 0011b902 0047
