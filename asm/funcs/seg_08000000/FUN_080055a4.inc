@ FUN_080055a4  entry 0x080055a4  size 30
.thumb
.org 0x55a4
FUN_080055a4:
	ldr r2, [r0, #4]	@ 000055a4 4268
.org 0x55a6
	ldr r1, [r0, #0]	@ 000055a6 0168
.org 0x55a8
	str r1, [r2, #0]	@ 000055a8 1160
.org 0x55aa
	ldr r2, [r0, #0]	@ 000055aa 0268
.org 0x55ac
	ldr r1, [r0, #4]	@ 000055ac 4168
.org 0x55ae
	str r1, [r2, #4]	@ 000055ae 5160
.org 0x55b0
	ldr r1, [pc, #16]	@ 000055b0 0449
.org 0x55b2
	ldr r2, [r1, #0]	@ 000055b2 0a68
.org 0x55b4
	ldr r1, [r2, #16]	@ 000055b4 1169
.org 0x55b6
	str r1, [r0, #0]	@ 000055b6 0160
.org 0x55b8
	str r0, [r2, #16]	@ 000055b8 1061
.org 0x55ba
	ldrh r0, [r2, #10]	@ 000055ba 5089
.org 0x55bc
	adds r0, #1	@ 000055bc 0130
.org 0x55be
	strh r0, [r2, #10]	@ 000055be 5081
.org 0x55c0
	bx lr	@ 000055c0 7047
