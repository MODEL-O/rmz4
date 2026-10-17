@ FUN_080bd3f8  entry 0x080bd3f8  size 28
.thumb
.org 0xbd3f8
FUN_080bd3f8:
	ldrb r2, [r0, #10]	@ 000bd3f8 827a
.org 0xbd3fa
	movs r1, #254	@ 000bd3fa fe21
.org 0xbd3fc
	ands r1, r2	@ 000bd3fc 1140
.org 0xbd3fe
	strb r1, [r0, #10]	@ 000bd3fe 8172
.org 0xbd400
	ldr r2, [pc, #16]	@ 000bd400 044a
.org 0xbd402
	ldrb r1, [r0, #9]	@ 000bd402 417a
.org 0xbd404
	lsls r1, r1, #2	@ 000bd404 8900
.org 0xbd406
	adds r1, r1, r2	@ 000bd406 8918
.org 0xbd408
	movs r2, #4	@ 000bd408 0422
.org 0xbd40a
	str r2, [r0, #12]	@ 000bd40a c260
.org 0xbd40c
	ldr r1, [r1, #0]	@ 000bd40c 0968
.org 0xbd40e
	ldr r1, [r1, #16]	@ 000bd40e 0969
.org 0xbd410
	str r1, [r0, #20]	@ 000bd410 4161
.org 0xbd412
	bx lr	@ 000bd412 7047
