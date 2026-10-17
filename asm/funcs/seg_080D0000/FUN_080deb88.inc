@ FUN_080deb88  entry 0x080deb88  size 38
.thumb
.org 0xdeb88
FUN_080deb88:
	ldr r2, [r0, #40]	@ 000deb88 826a
.org 0xdeb8a
	adds r2, #182	@ 000deb8a b632
.org 0xdeb8c
	ldrb r1, [r2, #0]	@ 000deb8c 1178
.org 0xdeb8e
	subs r1, #1	@ 000deb8e 0139
.org 0xdeb90
	strb r1, [r2, #0]	@ 000deb90 1170
.org 0xdeb92
	ldrb r2, [r0, #10]	@ 000deb92 827a
.org 0xdeb94
	movs r1, #254	@ 000deb94 fe21
.org 0xdeb96
	ands r1, r2	@ 000deb96 1140
.org 0xdeb98
	strb r1, [r0, #10]	@ 000deb98 8172
.org 0xdeb9a
	ldr r2, [pc, #20]	@ 000deb9a 054a
.org 0xdeb9c
	ldrb r1, [r0, #9]	@ 000deb9c 417a
.org 0xdeb9e
	lsls r1, r1, #2	@ 000deb9e 8900
.org 0xdeba0
	adds r1, r1, r2	@ 000deba0 8918
.org 0xdeba2
	movs r2, #4	@ 000deba2 0422
.org 0xdeba4
	str r2, [r0, #12]	@ 000deba4 c260
.org 0xdeba6
	ldr r1, [r1, #0]	@ 000deba6 0968
.org 0xdeba8
	ldr r1, [r1, #16]	@ 000deba8 0969
.org 0xdebaa
	str r1, [r0, #20]	@ 000debaa 4161
.org 0xdebac
	bx lr	@ 000debac 7047
