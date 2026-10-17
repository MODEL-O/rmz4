@ FUN_080d294c  entry 0x080d294c  size 28
.thumb
.org 0xd294c
FUN_080d294c:
	ldrb r2, [r0, #10]	@ 000d294c 827a
.org 0xd294e
	movs r1, #254	@ 000d294e fe21
.org 0xd2950
	ands r1, r2	@ 000d2950 1140
.org 0xd2952
	strb r1, [r0, #10]	@ 000d2952 8172
.org 0xd2954
	ldr r2, [pc, #16]	@ 000d2954 044a
.org 0xd2956
	ldrb r1, [r0, #9]	@ 000d2956 417a
.org 0xd2958
	lsls r1, r1, #2	@ 000d2958 8900
.org 0xd295a
	adds r1, r1, r2	@ 000d295a 8918
.org 0xd295c
	movs r2, #4	@ 000d295c 0422
.org 0xd295e
	str r2, [r0, #12]	@ 000d295e c260
.org 0xd2960
	ldr r1, [r1, #0]	@ 000d2960 0968
.org 0xd2962
	ldr r1, [r1, #16]	@ 000d2962 0969
.org 0xd2964
	str r1, [r0, #20]	@ 000d2964 4161
.org 0xd2966
	bx lr	@ 000d2966 7047
