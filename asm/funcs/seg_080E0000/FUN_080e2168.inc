@ FUN_080e2168  entry 0x080e2168  size 28
.thumb
.org 0xe2168
FUN_080e2168:
	ldrb r2, [r0, #10]	@ 000e2168 827a
.org 0xe216a
	movs r1, #254	@ 000e216a fe21
.org 0xe216c
	ands r1, r2	@ 000e216c 1140
.org 0xe216e
	strb r1, [r0, #10]	@ 000e216e 8172
.org 0xe2170
	ldr r2, [pc, #16]	@ 000e2170 044a
.org 0xe2172
	ldrb r1, [r0, #9]	@ 000e2172 417a
.org 0xe2174
	lsls r1, r1, #2	@ 000e2174 8900
.org 0xe2176
	adds r1, r1, r2	@ 000e2176 8918
.org 0xe2178
	movs r2, #4	@ 000e2178 0422
.org 0xe217a
	str r2, [r0, #12]	@ 000e217a c260
.org 0xe217c
	ldr r1, [r1, #0]	@ 000e217c 0968
.org 0xe217e
	ldr r1, [r1, #16]	@ 000e217e 0969
.org 0xe2180
	str r1, [r0, #20]	@ 000e2180 4161
.org 0xe2182
	bx lr	@ 000e2182 7047
