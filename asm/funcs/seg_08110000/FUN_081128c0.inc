@ FUN_081128c0  entry 0x081128c0  size 14
.thumb
.org 0x1128c0
FUN_081128c0:
	ldr r0, [pc, #12]	@ 001128c0 0348
.org 0x1128c2
	movs r1, #129	@ 001128c2 8121
.org 0x1128c4
	lsls r1, r1, #3	@ 001128c4 c900
.org 0x1128c6
	adds r0, r0, r1	@ 001128c6 4018
.org 0x1128c8
	movs r1, #0	@ 001128c8 0021
.org 0x1128ca
	str r1, [r0, #0]	@ 001128ca 0160
.org 0x1128cc
	bx lr	@ 001128cc 7047
