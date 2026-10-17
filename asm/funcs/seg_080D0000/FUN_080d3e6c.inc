@ FUN_080d3e6c  entry 0x080d3e6c  size 46
.thumb
.org 0xd3e6c
FUN_080d3e6c:
	ldr r3, [r0, #40]	@ 000d3e6c 836a
.org 0xd3e6e
	ldrb r2, [r0, #10]	@ 000d3e6e 827a
.org 0xd3e70
	movs r1, #254	@ 000d3e70 fe21
.org 0xd3e72
	ands r1, r2	@ 000d3e72 1140
.org 0xd3e74
	strb r1, [r0, #10]	@ 000d3e74 8172
.org 0xd3e76
	movs r1, #161	@ 000d3e76 a121
.org 0xd3e78
	lsls r1, r1, #1	@ 000d3e78 4900
.org 0xd3e7a
	adds r3, r3, r1	@ 000d3e7a 5b18
.org 0xd3e7c
	ldrb r2, [r3, #0]	@ 000d3e7c 1a78
.org 0xd3e7e
	movs r1, #5	@ 000d3e7e 0521
.org 0xd3e80
	negs r1, r1	@ 000d3e80 4942
.org 0xd3e82
	ands r1, r2	@ 000d3e82 1140
.org 0xd3e84
	strb r1, [r3, #0]	@ 000d3e84 1970
.org 0xd3e86
	ldr r2, [pc, #20]	@ 000d3e86 054a
.org 0xd3e88
	ldrb r1, [r0, #9]	@ 000d3e88 417a
.org 0xd3e8a
	lsls r1, r1, #2	@ 000d3e8a 8900
.org 0xd3e8c
	adds r1, r1, r2	@ 000d3e8c 8918
.org 0xd3e8e
	movs r2, #4	@ 000d3e8e 0422
.org 0xd3e90
	str r2, [r0, #12]	@ 000d3e90 c260
.org 0xd3e92
	ldr r1, [r1, #0]	@ 000d3e92 0968
.org 0xd3e94
	ldr r1, [r1, #16]	@ 000d3e94 0969
.org 0xd3e96
	str r1, [r0, #20]	@ 000d3e96 4161
.org 0xd3e98
	bx lr	@ 000d3e98 7047
