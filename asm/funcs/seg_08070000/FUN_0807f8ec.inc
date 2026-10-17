@ FUN_0807f8ec  entry 0x0807f8ec  size 28
.thumb
.org 0x7f8ec
FUN_0807f8ec:
	ldrb r2, [r0, #10]	@ 0007f8ec 827a
.org 0x7f8ee
	movs r1, #254	@ 0007f8ee fe21
.org 0x7f8f0
	ands r1, r2	@ 0007f8f0 1140
.org 0x7f8f2
	strb r1, [r0, #10]	@ 0007f8f2 8172
.org 0x7f8f4
	ldr r2, [pc, #16]	@ 0007f8f4 044a
.org 0x7f8f6
	ldrb r1, [r0, #9]	@ 0007f8f6 417a
.org 0x7f8f8
	lsls r1, r1, #2	@ 0007f8f8 8900
.org 0x7f8fa
	adds r1, r1, r2	@ 0007f8fa 8918
.org 0x7f8fc
	movs r2, #4	@ 0007f8fc 0422
.org 0x7f8fe
	str r2, [r0, #12]	@ 0007f8fe c260
.org 0x7f900
	ldr r1, [r1, #0]	@ 0007f900 0968
.org 0x7f902
	ldr r1, [r1, #16]	@ 0007f902 0969
.org 0x7f904
	str r1, [r0, #20]	@ 0007f904 4161
.org 0x7f906
	bx lr	@ 0007f906 7047
