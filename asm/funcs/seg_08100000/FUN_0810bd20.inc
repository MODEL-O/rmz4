@ FUN_0810bd20  entry 0x0810bd20  size 28
.thumb
.org 0x10bd20
FUN_0810bd20:
	ldrb r2, [r0, #10]	@ 0010bd20 827a
.org 0x10bd22
	movs r1, #254	@ 0010bd22 fe21
.org 0x10bd24
	ands r1, r2	@ 0010bd24 1140
.org 0x10bd26
	strb r1, [r0, #10]	@ 0010bd26 8172
.org 0x10bd28
	ldr r2, [pc, #16]	@ 0010bd28 044a
.org 0x10bd2a
	ldrb r1, [r0, #9]	@ 0010bd2a 417a
.org 0x10bd2c
	lsls r1, r1, #2	@ 0010bd2c 8900
.org 0x10bd2e
	adds r1, r1, r2	@ 0010bd2e 8918
.org 0x10bd30
	movs r2, #4	@ 0010bd30 0422
.org 0x10bd32
	str r2, [r0, #12]	@ 0010bd32 c260
.org 0x10bd34
	ldr r1, [r1, #0]	@ 0010bd34 0968
.org 0x10bd36
	ldr r1, [r1, #16]	@ 0010bd36 0969
.org 0x10bd38
	str r1, [r0, #20]	@ 0010bd38 4161
.org 0x10bd3a
	bx lr	@ 0010bd3a 7047
