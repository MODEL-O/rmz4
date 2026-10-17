@ FUN_080dbe2c  entry 0x080dbe2c  size 28
.thumb
.org 0xdbe2c
FUN_080dbe2c:
	ldrb r2, [r0, #10]	@ 000dbe2c 827a
.org 0xdbe2e
	movs r1, #254	@ 000dbe2e fe21
.org 0xdbe30
	ands r1, r2	@ 000dbe30 1140
.org 0xdbe32
	strb r1, [r0, #10]	@ 000dbe32 8172
.org 0xdbe34
	ldr r2, [pc, #16]	@ 000dbe34 044a
.org 0xdbe36
	ldrb r1, [r0, #9]	@ 000dbe36 417a
.org 0xdbe38
	lsls r1, r1, #2	@ 000dbe38 8900
.org 0xdbe3a
	adds r1, r1, r2	@ 000dbe3a 8918
.org 0xdbe3c
	movs r2, #4	@ 000dbe3c 0422
.org 0xdbe3e
	str r2, [r0, #12]	@ 000dbe3e c260
.org 0xdbe40
	ldr r1, [r1, #0]	@ 000dbe40 0968
.org 0xdbe42
	ldr r1, [r1, #16]	@ 000dbe42 0969
.org 0xdbe44
	str r1, [r0, #20]	@ 000dbe44 4161
.org 0xdbe46
	bx lr	@ 000dbe46 7047
