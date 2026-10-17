@ FUN_080ed420  entry 0x080ed420  size 38
.thumb
.org 0xed420
FUN_080ed420:
	push {lr}	@ 000ed420 00b5
.org 0xed422
	ldrb r2, [r0, #10]	@ 000ed422 827a
.org 0xed424
	movs r1, #2	@ 000ed424 0221
.org 0xed426
	orrs r1, r2	@ 000ed426 1143
.org 0xed428
	strb r1, [r0, #10]	@ 000ed428 8172
.org 0xed42a
	movs r3, #1	@ 000ed42a 0123
.org 0xed42c
	strb r3, [r0, #18]	@ 000ed42c 8374
.org 0xed42e
	ldr r2, [pc, #24]	@ 000ed42e 064a
.org 0xed430
	ldrb r1, [r0, #9]	@ 000ed430 417a
.org 0xed432
	lsls r1, r1, #2	@ 000ed432 8900
.org 0xed434
	adds r1, r1, r2	@ 000ed434 8918
.org 0xed436
	str r3, [r0, #12]	@ 000ed436 c360
.org 0xed438
	ldr r1, [r1, #0]	@ 000ed438 0968
.org 0xed43a
	ldr r1, [r1, #4]	@ 000ed43a 4968
.org 0xed43c
	str r1, [r0, #20]	@ 000ed43c 4161
.org 0xed43e
	bl 0xed44c	@ 000ed43e 00f005f8
.org 0xed442
	pop {r0}	@ 000ed442 01bc
.org 0xed444
	bx r0	@ 000ed444 0047
