@ FUN_080edb6c  entry 0x080edb6c  size 28
.thumb
.org 0xedb6c
FUN_080edb6c:
	push {lr}	@ 000edb6c 00b5
.org 0xedb6e
	ldr r2, [pc, #24]	@ 000edb6e 064a
.org 0xedb70
	ldrb r1, [r0, #9]	@ 000edb70 417a
.org 0xedb72
	lsls r1, r1, #2	@ 000edb72 8900
.org 0xedb74
	adds r1, r1, r2	@ 000edb74 8918
.org 0xedb76
	movs r2, #2	@ 000edb76 0222
.org 0xedb78
	str r2, [r0, #12]	@ 000edb78 c260
.org 0xedb7a
	ldr r1, [r1, #0]	@ 000edb7a 0968
.org 0xedb7c
	ldr r1, [r1, #8]	@ 000edb7c 8968
.org 0xedb7e
	str r1, [r0, #20]	@ 000edb7e 4161
.org 0xedb80
	bl 0xed7e0	@ 000edb80 fff72efe
.org 0xedb84
	pop {r0}	@ 000edb84 01bc
.org 0xedb86
	bx r0	@ 000edb86 0047
