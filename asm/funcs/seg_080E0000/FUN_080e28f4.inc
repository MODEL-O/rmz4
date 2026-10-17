@ FUN_080e28f4  entry 0x080e28f4  size 28
.thumb
.org 0xe28f4
FUN_080e28f4:
	ldrb r2, [r0, #10]	@ 000e28f4 827a
.org 0xe28f6
	movs r1, #254	@ 000e28f6 fe21
.org 0xe28f8
	ands r1, r2	@ 000e28f8 1140
.org 0xe28fa
	strb r1, [r0, #10]	@ 000e28fa 8172
.org 0xe28fc
	ldr r2, [pc, #16]	@ 000e28fc 044a
.org 0xe28fe
	ldrb r1, [r0, #9]	@ 000e28fe 417a
.org 0xe2900
	lsls r1, r1, #2	@ 000e2900 8900
.org 0xe2902
	adds r1, r1, r2	@ 000e2902 8918
.org 0xe2904
	movs r2, #4	@ 000e2904 0422
.org 0xe2906
	str r2, [r0, #12]	@ 000e2906 c260
.org 0xe2908
	ldr r1, [r1, #0]	@ 000e2908 0968
.org 0xe290a
	ldr r1, [r1, #16]	@ 000e290a 0969
.org 0xe290c
	str r1, [r0, #20]	@ 000e290c 4161
.org 0xe290e
	bx lr	@ 000e290e 7047
