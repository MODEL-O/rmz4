@ FUN_080d0c30  entry 0x080d0c30  size 28
.thumb
.org 0xd0c30
FUN_080d0c30:
	ldrb r2, [r0, #10]	@ 000d0c30 827a
.org 0xd0c32
	movs r1, #254	@ 000d0c32 fe21
.org 0xd0c34
	ands r1, r2	@ 000d0c34 1140
.org 0xd0c36
	strb r1, [r0, #10]	@ 000d0c36 8172
.org 0xd0c38
	ldr r2, [pc, #16]	@ 000d0c38 044a
.org 0xd0c3a
	ldrb r1, [r0, #9]	@ 000d0c3a 417a
.org 0xd0c3c
	lsls r1, r1, #2	@ 000d0c3c 8900
.org 0xd0c3e
	adds r1, r1, r2	@ 000d0c3e 8918
.org 0xd0c40
	movs r2, #4	@ 000d0c40 0422
.org 0xd0c42
	str r2, [r0, #12]	@ 000d0c42 c260
.org 0xd0c44
	ldr r1, [r1, #0]	@ 000d0c44 0968
.org 0xd0c46
	ldr r1, [r1, #16]	@ 000d0c46 0969
.org 0xd0c48
	str r1, [r0, #20]	@ 000d0c48 4161
.org 0xd0c4a
	bx lr	@ 000d0c4a 7047
