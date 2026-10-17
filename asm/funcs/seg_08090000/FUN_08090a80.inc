@ FUN_08090a80  entry 0x08090a80  size 28
.thumb
.org 0x90a80
FUN_08090a80:
	ldrb r2, [r0, #10]	@ 00090a80 827a
.org 0x90a82
	movs r1, #254	@ 00090a82 fe21
.org 0x90a84
	ands r1, r2	@ 00090a84 1140
.org 0x90a86
	strb r1, [r0, #10]	@ 00090a86 8172
.org 0x90a88
	ldr r2, [pc, #16]	@ 00090a88 044a
.org 0x90a8a
	ldrb r1, [r0, #9]	@ 00090a8a 417a
.org 0x90a8c
	lsls r1, r1, #2	@ 00090a8c 8900
.org 0x90a8e
	adds r1, r1, r2	@ 00090a8e 8918
.org 0x90a90
	movs r2, #4	@ 00090a90 0422
.org 0x90a92
	str r2, [r0, #12]	@ 00090a92 c260
.org 0x90a94
	ldr r1, [r1, #0]	@ 00090a94 0968
.org 0x90a96
	ldr r1, [r1, #16]	@ 00090a96 0969
.org 0x90a98
	str r1, [r0, #20]	@ 00090a98 4161
.org 0x90a9a
	bx lr	@ 00090a9a 7047
