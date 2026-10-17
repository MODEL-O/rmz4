@ FUN_080011c0  entry 0x080011c0  size 8
.thumb
.org 0x11c0
FUN_080011c0:
	ldr r1, [pc, #4]	@ 000011c0 0149
.org 0x11c2
	movs r0, #0	@ 000011c2 0020
.org 0x11c4
	str r0, [r1, #0]	@ 000011c4 0860
.org 0x11c6
	bx lr	@ 000011c6 7047
