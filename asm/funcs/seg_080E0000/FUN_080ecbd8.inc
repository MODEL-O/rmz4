@ FUN_080ecbd8  entry 0x080ecbd8  size 28
.thumb
.org 0xecbd8
FUN_080ecbd8:
	ldrb r2, [r0, #10]	@ 000ecbd8 827a
.org 0xecbda
	movs r1, #254	@ 000ecbda fe21
.org 0xecbdc
	ands r1, r2	@ 000ecbdc 1140
.org 0xecbde
	strb r1, [r0, #10]	@ 000ecbde 8172
.org 0xecbe0
	ldr r2, [pc, #16]	@ 000ecbe0 044a
.org 0xecbe2
	ldrb r1, [r0, #9]	@ 000ecbe2 417a
.org 0xecbe4
	lsls r1, r1, #2	@ 000ecbe4 8900
.org 0xecbe6
	adds r1, r1, r2	@ 000ecbe6 8918
.org 0xecbe8
	movs r2, #4	@ 000ecbe8 0422
.org 0xecbea
	str r2, [r0, #12]	@ 000ecbea c260
.org 0xecbec
	ldr r1, [r1, #0]	@ 000ecbec 0968
.org 0xecbee
	ldr r1, [r1, #16]	@ 000ecbee 0969
.org 0xecbf0
	str r1, [r0, #20]	@ 000ecbf0 4161
.org 0xecbf2
	bx lr	@ 000ecbf2 7047
