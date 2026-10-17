@ FUN_080e0ff4  entry 0x080e0ff4  size 10
.thumb
.org 0xe0ff4
FUN_080e0ff4:
	push {lr}	@ 000e0ff4 00b5
.org 0xe0ff6
	bl 0xd0c30	@ 000e0ff6 eff71bfe
.org 0xe0ffa
	pop {r0}	@ 000e0ffa 01bc
.org 0xe0ffc
	bx r0	@ 000e0ffc 0047
