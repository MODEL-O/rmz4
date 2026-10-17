@ FUN_080380f4  entry 0x080380f4  size 6
.thumb
.org 0x380f4
FUN_080380f4:
	movs r1, #2	@ 000380f4 0221
.org 0x380f6
	strb r1, [r0, #19]	@ 000380f6 c174
.org 0x380f8
	bx lr	@ 000380f8 7047
