@ FUN_080de98c  entry 0x080de98c  size 28
.thumb
.org 0xde98c
FUN_080de98c:
	ldrb r2, [r0, #10]	@ 000de98c 827a
.org 0xde98e
	movs r1, #254	@ 000de98e fe21
.org 0xde990
	ands r1, r2	@ 000de990 1140
.org 0xde992
	strb r1, [r0, #10]	@ 000de992 8172
.org 0xde994
	ldr r2, [pc, #16]	@ 000de994 044a
.org 0xde996
	ldrb r1, [r0, #9]	@ 000de996 417a
.org 0xde998
	lsls r1, r1, #2	@ 000de998 8900
.org 0xde99a
	adds r1, r1, r2	@ 000de99a 8918
.org 0xde99c
	movs r2, #4	@ 000de99c 0422
.org 0xde99e
	str r2, [r0, #12]	@ 000de99e c260
.org 0xde9a0
	ldr r1, [r1, #0]	@ 000de9a0 0968
.org 0xde9a2
	ldr r1, [r1, #16]	@ 000de9a2 0969
.org 0xde9a4
	str r1, [r0, #20]	@ 000de9a4 4161
.org 0xde9a6
	bx lr	@ 000de9a6 7047
