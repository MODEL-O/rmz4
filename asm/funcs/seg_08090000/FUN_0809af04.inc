@ FUN_0809af04  entry 0x0809af04  size 28
.thumb
.org 0x9af04
FUN_0809af04:
	ldrb r2, [r0, #10]	@ 0009af04 827a
.org 0x9af06
	movs r1, #254	@ 0009af06 fe21
.org 0x9af08
	ands r1, r2	@ 0009af08 1140
.org 0x9af0a
	strb r1, [r0, #10]	@ 0009af0a 8172
.org 0x9af0c
	ldr r2, [pc, #16]	@ 0009af0c 044a
.org 0x9af0e
	ldrb r1, [r0, #9]	@ 0009af0e 417a
.org 0x9af10
	lsls r1, r1, #2	@ 0009af10 8900
.org 0x9af12
	adds r1, r1, r2	@ 0009af12 8918
.org 0x9af14
	movs r2, #4	@ 0009af14 0422
.org 0x9af16
	str r2, [r0, #12]	@ 0009af16 c260
.org 0x9af18
	ldr r1, [r1, #0]	@ 0009af18 0968
.org 0x9af1a
	ldr r1, [r1, #16]	@ 0009af1a 0969
.org 0x9af1c
	str r1, [r0, #20]	@ 0009af1c 4161
.org 0x9af1e
	bx lr	@ 0009af1e 7047
