@ FUN_08002c0c  entry 0x08002c0c  size 10
.thumb
.org 0x2c0c
FUN_08002c0c:
	str r1, [r0, #0]	@ 00002c0c 0160
.org 0x2c0e
	ldr r1, [pc, #8]	@ 00002c0e 0249
.org 0x2c10
	str r1, [r0, #4]	@ 00002c10 4160
.org 0x2c12
	str r3, [r0, #8]	@ 00002c12 8360
.org 0x2c14
	bx lr	@ 00002c14 7047
