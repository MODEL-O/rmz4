@ FUN_080dfd7c  entry 0x080dfd7c  size 28
.thumb
.org 0xdfd7c
FUN_080dfd7c:
	ldrb r2, [r0, #10]	@ 000dfd7c 827a
.org 0xdfd7e
	movs r1, #254	@ 000dfd7e fe21
.org 0xdfd80
	ands r1, r2	@ 000dfd80 1140
.org 0xdfd82
	strb r1, [r0, #10]	@ 000dfd82 8172
.org 0xdfd84
	ldr r2, [pc, #16]	@ 000dfd84 044a
.org 0xdfd86
	ldrb r1, [r0, #9]	@ 000dfd86 417a
.org 0xdfd88
	lsls r1, r1, #2	@ 000dfd88 8900
.org 0xdfd8a
	adds r1, r1, r2	@ 000dfd8a 8918
.org 0xdfd8c
	movs r2, #4	@ 000dfd8c 0422
.org 0xdfd8e
	str r2, [r0, #12]	@ 000dfd8e c260
.org 0xdfd90
	ldr r1, [r1, #0]	@ 000dfd90 0968
.org 0xdfd92
	ldr r1, [r1, #16]	@ 000dfd92 0969
.org 0xdfd94
	str r1, [r0, #20]	@ 000dfd94 4161
.org 0xdfd96
	bx lr	@ 000dfd96 7047
