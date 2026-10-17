@ FUN_080380ec  entry 0x080380ec  size 6
.thumb
.org 0x380ec
FUN_080380ec:
	movs r1, #1	@ 000380ec 0121
.org 0x380ee
	strb r1, [r0, #19]	@ 000380ee c174
.org 0x380f0
	bx lr	@ 000380f0 7047
