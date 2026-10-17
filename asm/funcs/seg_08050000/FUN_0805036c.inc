@ FUN_0805036c  entry 0x0805036c  size 28
.thumb
.org 0x5036c
FUN_0805036c:
	ldrb r2, [r0, #10]	@ 0005036c 827a
.org 0x5036e
	movs r1, #254	@ 0005036e fe21
.org 0x50370
	ands r1, r2	@ 00050370 1140
.org 0x50372
	strb r1, [r0, #10]	@ 00050372 8172
.org 0x50374
	ldr r2, [pc, #16]	@ 00050374 044a
.org 0x50376
	ldrb r1, [r0, #9]	@ 00050376 417a
.org 0x50378
	lsls r1, r1, #2	@ 00050378 8900
.org 0x5037a
	adds r1, r1, r2	@ 0005037a 8918
.org 0x5037c
	movs r2, #4	@ 0005037c 0422
.org 0x5037e
	str r2, [r0, #12]	@ 0005037e c260
.org 0x50380
	ldr r1, [r1, #0]	@ 00050380 0968
.org 0x50382
	ldr r1, [r1, #16]	@ 00050382 0969
.org 0x50384
	str r1, [r0, #20]	@ 00050384 4161
.org 0x50386
	bx lr	@ 00050386 7047
