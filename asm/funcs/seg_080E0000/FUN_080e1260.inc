@ FUN_080e1260  entry 0x080e1260  size 10
.thumb
.org 0xe1260
FUN_080e1260:
	push {lr}	@ 000e1260 00b5
.org 0xe1262
	bl 0xd0c30	@ 000e1262 eff7e5fc
.org 0xe1266
	pop {r0}	@ 000e1266 01bc
.org 0xe1268
	bx r0	@ 000e1268 0047
