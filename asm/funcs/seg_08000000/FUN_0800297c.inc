@ FUN_0800297c  entry 0x0800297c  size 10
.thumb
.org 0x297c
FUN_0800297c:
	ldr r0, [pc, #8]	@ 0000297c 0248
.org 0x297e
	ldr r1, [pc, #12]	@ 0000297e 0349
.org 0x2980
	ldrh r1, [r1, #0]	@ 00002980 0988
.org 0x2982
	strh r1, [r0, #0]	@ 00002982 0180
.org 0x2984
	bx lr	@ 00002984 7047
