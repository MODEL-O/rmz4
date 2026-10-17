@ FUN_080e8c24  entry 0x080e8c24  size 28
.thumb
.org 0xe8c24
FUN_080e8c24:
	ldrb r2, [r0, #10]	@ 000e8c24 827a
.org 0xe8c26
	movs r1, #254	@ 000e8c26 fe21
.org 0xe8c28
	ands r1, r2	@ 000e8c28 1140
.org 0xe8c2a
	strb r1, [r0, #10]	@ 000e8c2a 8172
.org 0xe8c2c
	ldr r2, [pc, #16]	@ 000e8c2c 044a
.org 0xe8c2e
	ldrb r1, [r0, #9]	@ 000e8c2e 417a
.org 0xe8c30
	lsls r1, r1, #2	@ 000e8c30 8900
.org 0xe8c32
	adds r1, r1, r2	@ 000e8c32 8918
.org 0xe8c34
	movs r2, #4	@ 000e8c34 0422
.org 0xe8c36
	str r2, [r0, #12]	@ 000e8c36 c260
.org 0xe8c38
	ldr r1, [r1, #0]	@ 000e8c38 0968
.org 0xe8c3a
	ldr r1, [r1, #16]	@ 000e8c3a 0969
.org 0xe8c3c
	str r1, [r0, #20]	@ 000e8c3c 4161
.org 0xe8c3e
	bx lr	@ 000e8c3e 7047
