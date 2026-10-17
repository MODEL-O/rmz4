@ FUN_080d3f38  entry 0x080d3f38  size 28
.thumb
.org 0xd3f38
FUN_080d3f38:
	ldrb r2, [r0, #10]	@ 000d3f38 827a
.org 0xd3f3a
	movs r1, #254	@ 000d3f3a fe21
.org 0xd3f3c
	ands r1, r2	@ 000d3f3c 1140
.org 0xd3f3e
	strb r1, [r0, #10]	@ 000d3f3e 8172
.org 0xd3f40
	ldr r2, [pc, #16]	@ 000d3f40 044a
.org 0xd3f42
	ldrb r1, [r0, #9]	@ 000d3f42 417a
.org 0xd3f44
	lsls r1, r1, #2	@ 000d3f44 8900
.org 0xd3f46
	adds r1, r1, r2	@ 000d3f46 8918
.org 0xd3f48
	movs r2, #4	@ 000d3f48 0422
.org 0xd3f4a
	str r2, [r0, #12]	@ 000d3f4a c260
.org 0xd3f4c
	ldr r1, [r1, #0]	@ 000d3f4c 0968
.org 0xd3f4e
	ldr r1, [r1, #16]	@ 000d3f4e 0969
.org 0xd3f50
	str r1, [r0, #20]	@ 000d3f50 4161
.org 0xd3f52
	bx lr	@ 000d3f52 7047
