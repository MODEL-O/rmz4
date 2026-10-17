@ FUN_0800290c  entry 0x0800290c  size 12
.thumb
.org 0x290c
FUN_0800290c:
	ldr r0, [pc, #8]	@ 0000290c 0248
.org 0x290e
	movs r1, #0	@ 0000290e 0021
.org 0x2910
	strh r1, [r0, #0]	@ 00002910 0180
.org 0x2912
	movs r1, #255	@ 00002912 ff21
.org 0x2914
	strb r1, [r0, #14]	@ 00002914 8173
.org 0x2916
	bx lr	@ 00002916 7047
