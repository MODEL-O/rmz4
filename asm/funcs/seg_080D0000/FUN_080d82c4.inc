@ FUN_080d82c4  entry 0x080d82c4  size 28
.thumb
.org 0xd82c4
FUN_080d82c4:
	ldrb r2, [r0, #10]	@ 000d82c4 827a
.org 0xd82c6
	movs r1, #254	@ 000d82c6 fe21
.org 0xd82c8
	ands r1, r2	@ 000d82c8 1140
.org 0xd82ca
	strb r1, [r0, #10]	@ 000d82ca 8172
.org 0xd82cc
	ldr r2, [pc, #16]	@ 000d82cc 044a
.org 0xd82ce
	ldrb r1, [r0, #9]	@ 000d82ce 417a
.org 0xd82d0
	lsls r1, r1, #2	@ 000d82d0 8900
.org 0xd82d2
	adds r1, r1, r2	@ 000d82d2 8918
.org 0xd82d4
	movs r2, #4	@ 000d82d4 0422
.org 0xd82d6
	str r2, [r0, #12]	@ 000d82d6 c260
.org 0xd82d8
	ldr r1, [r1, #0]	@ 000d82d8 0968
.org 0xd82da
	ldr r1, [r1, #16]	@ 000d82da 0969
.org 0xd82dc
	str r1, [r0, #20]	@ 000d82dc 4161
.org 0xd82de
	bx lr	@ 000d82de 7047
