@ FUN_080034a4  entry 0x080034a4  size 20
.thumb
.org 0x34a4
FUN_080034a4:
	str r1, [r0, #0]	@ 000034a4 0160
.org 0x34a6
	movs r2, #0	@ 000034a6 0022
.org 0x34a8
	strb r2, [r0, #4]	@ 000034a8 0271
.org 0x34aa
	strb r2, [r0, #5]	@ 000034aa 4271
.org 0x34ac
	ldr r1, [r1, #0]	@ 000034ac 0968
.org 0x34ae
	ldrb r1, [r1, #1]	@ 000034ae 4978
.org 0x34b0
	adds r1, #1	@ 000034b0 0131
.org 0x34b2
	strb r1, [r0, #6]	@ 000034b2 8171
.org 0x34b4
	strb r2, [r0, #7]	@ 000034b4 c271
.org 0x34b6
	bx lr	@ 000034b6 7047
