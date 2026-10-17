@ FUN_0810f6f8  entry 0x0810f6f8  size 8
.thumb
.org 0x10f6f8
FUN_0810f6f8:
	str r1, [r0, #4]	@ 0010f6f8 4160
.org 0x10f6fa
	movs r1, #0	@ 0010f6fa 0021
.org 0x10f6fc
	str r1, [r0, #8]	@ 0010f6fc 8160
.org 0x10f6fe
	bx lr	@ 0010f6fe 7047
