@ FUN_080028e0  entry 0x080028e0  size 8
.thumb
.org 0x28e0
FUN_080028e0:
	ldr r1, [pc, #4]	@ 000028e0 0149
.org 0x28e2
	movs r0, #0	@ 000028e2 0020
.org 0x28e4
	strh r0, [r1, #0]	@ 000028e4 0880
.org 0x28e6
	bx lr	@ 000028e6 7047
