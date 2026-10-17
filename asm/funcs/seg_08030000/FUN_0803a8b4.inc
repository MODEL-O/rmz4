@ FUN_0803a8b4  entry 0x0803a8b4  size 28
.thumb
.org 0x3a8b4
FUN_0803a8b4:
	ldrb r2, [r0, #10]	@ 0003a8b4 827a
.org 0x3a8b6
	movs r1, #254	@ 0003a8b6 fe21
.org 0x3a8b8
	ands r1, r2	@ 0003a8b8 1140
.org 0x3a8ba
	strb r1, [r0, #10]	@ 0003a8ba 8172
.org 0x3a8bc
	ldr r2, [pc, #16]	@ 0003a8bc 044a
.org 0x3a8be
	ldrb r1, [r0, #9]	@ 0003a8be 417a
.org 0x3a8c0
	lsls r1, r1, #2	@ 0003a8c0 8900
.org 0x3a8c2
	adds r1, r1, r2	@ 0003a8c2 8918
.org 0x3a8c4
	movs r2, #4	@ 0003a8c4 0422
.org 0x3a8c6
	str r2, [r0, #12]	@ 0003a8c6 c260
.org 0x3a8c8
	ldr r1, [r1, #0]	@ 0003a8c8 0968
.org 0x3a8ca
	ldr r1, [r1, #16]	@ 0003a8ca 0969
.org 0x3a8cc
	str r1, [r0, #20]	@ 0003a8cc 4161
.org 0x3a8ce
	bx lr	@ 0003a8ce 7047
