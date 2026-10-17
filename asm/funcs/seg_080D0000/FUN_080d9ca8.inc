@ FUN_080d9ca8  entry 0x080d9ca8  size 28
.thumb
.org 0xd9ca8
FUN_080d9ca8:
	ldrb r2, [r0, #10]	@ 000d9ca8 827a
.org 0xd9caa
	movs r1, #254	@ 000d9caa fe21
.org 0xd9cac
	ands r1, r2	@ 000d9cac 1140
.org 0xd9cae
	strb r1, [r0, #10]	@ 000d9cae 8172
.org 0xd9cb0
	ldr r2, [pc, #16]	@ 000d9cb0 044a
.org 0xd9cb2
	ldrb r1, [r0, #9]	@ 000d9cb2 417a
.org 0xd9cb4
	lsls r1, r1, #2	@ 000d9cb4 8900
.org 0xd9cb6
	adds r1, r1, r2	@ 000d9cb6 8918
.org 0xd9cb8
	movs r2, #4	@ 000d9cb8 0422
.org 0xd9cba
	str r2, [r0, #12]	@ 000d9cba c260
.org 0xd9cbc
	ldr r1, [r1, #0]	@ 000d9cbc 0968
.org 0xd9cbe
	ldr r1, [r1, #16]	@ 000d9cbe 0969
.org 0xd9cc0
	str r1, [r0, #20]	@ 000d9cc0 4161
.org 0xd9cc2
	bx lr	@ 000d9cc2 7047
