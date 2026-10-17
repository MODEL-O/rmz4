@ FUN_08002970  entry 0x08002970  size 8
.thumb
.org 0x2970
FUN_08002970:
	ldr r1, [pc, #4]	@ 00002970 0149
.org 0x2972
	movs r0, #0	@ 00002972 0020
.org 0x2974
	strh r0, [r1, #0]	@ 00002974 0880
.org 0x2976
	bx lr	@ 00002976 7047
