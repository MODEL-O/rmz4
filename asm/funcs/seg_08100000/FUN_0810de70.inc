@ FUN_0810de70  entry 0x0810de70  size 16
.thumb
.org 0x10de70
FUN_0810de70:
	ldr r1, [pc, #12]	@ 0010de70 0349
.org 0x10de72
	str r0, [r1, #0]	@ 0010de72 0860
.org 0x10de74
	movs r0, #0	@ 0010de74 0020
.org 0x10de76
	strh r0, [r1, #4]	@ 0010de76 8880
.org 0x10de78
	str r0, [r1, #8]	@ 0010de78 8860
.org 0x10de7a
	str r0, [r1, #12]	@ 0010de7a c860
.org 0x10de7c
	str r0, [r1, #16]	@ 0010de7c 0861
.org 0x10de7e
	bx lr	@ 0010de7e 7047
