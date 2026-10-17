@ FUN_080d83d8  entry 0x080d83d8  size 28
.thumb
.org 0xd83d8
FUN_080d83d8:
	ldrb r2, [r0, #10]	@ 000d83d8 827a
.org 0xd83da
	movs r1, #254	@ 000d83da fe21
.org 0xd83dc
	ands r1, r2	@ 000d83dc 1140
.org 0xd83de
	strb r1, [r0, #10]	@ 000d83de 8172
.org 0xd83e0
	ldr r2, [pc, #16]	@ 000d83e0 044a
.org 0xd83e2
	ldrb r1, [r0, #9]	@ 000d83e2 417a
.org 0xd83e4
	lsls r1, r1, #2	@ 000d83e4 8900
.org 0xd83e6
	adds r1, r1, r2	@ 000d83e6 8918
.org 0xd83e8
	movs r2, #4	@ 000d83e8 0422
.org 0xd83ea
	str r2, [r0, #12]	@ 000d83ea c260
.org 0xd83ec
	ldr r1, [r1, #0]	@ 000d83ec 0968
.org 0xd83ee
	ldr r1, [r1, #16]	@ 000d83ee 0969
.org 0xd83f0
	str r1, [r0, #20]	@ 000d83f0 4161
.org 0xd83f2
	bx lr	@ 000d83f2 7047
