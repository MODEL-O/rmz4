@ FUN_08059c00  entry 0x08059c00  size 6
.thumb
.org 0x59c00
FUN_08059c00:
	ldr r0, [pc, #4]	@ 00059c00 0148
.org 0x59c02
	ldr r0, [r0, #100]	@ 00059c02 406e
.org 0x59c04
	bx lr	@ 00059c04 7047
