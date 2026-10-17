@ FUN_0809ba14  entry 0x0809ba14  size 28
.thumb
.org 0x9ba14
FUN_0809ba14:
	ldrb r2, [r0, #10]	@ 0009ba14 827a
.org 0x9ba16
	movs r1, #254	@ 0009ba16 fe21
.org 0x9ba18
	ands r1, r2	@ 0009ba18 1140
.org 0x9ba1a
	strb r1, [r0, #10]	@ 0009ba1a 8172
.org 0x9ba1c
	ldr r2, [pc, #16]	@ 0009ba1c 044a
.org 0x9ba1e
	ldrb r1, [r0, #9]	@ 0009ba1e 417a
.org 0x9ba20
	lsls r1, r1, #2	@ 0009ba20 8900
.org 0x9ba22
	adds r1, r1, r2	@ 0009ba22 8918
.org 0x9ba24
	movs r2, #4	@ 0009ba24 0422
.org 0x9ba26
	str r2, [r0, #12]	@ 0009ba26 c260
.org 0x9ba28
	ldr r1, [r1, #0]	@ 0009ba28 0968
.org 0x9ba2a
	ldr r1, [r1, #16]	@ 0009ba2a 0969
.org 0x9ba2c
	str r1, [r0, #20]	@ 0009ba2c 4161
.org 0x9ba2e
	bx lr	@ 0009ba2e 7047
